/*
 * Copyright (C) 2021 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * Author: Manuel Eggimann
 */

#include <stdio.h>
#include "pulp.h"
#include "i3c_structs_if.h"
#include "stdlib.h"
#include "cdn_log.h"

uint32_t g_dbg_enable_log = 0;
uint32_t g_dbg_log_lvl = DBG_HIVERB;
uint32_t g_dbg_log_cnt = 0;
uint32_t g_dbg_state = 0;

#define SIRACUSA_PADMUX_BASE_ADDR 0x1A140000
#define SIRACUSA_I3C0_BASE_ADDR 0x1A120000
#define I3C_CONFIG_REG_BASE SIRACUSA_I3C0_BASE_ADDR
#define I3C_MASTER_BASE SIRACUSA_I3C0_BASE_ADDR + 0x400

#define REG_WRITE32(addr, value) *((volatile uint32_t*) addr) = (uint32_t) value;
#define REG_READ32(addr) *((volatile uint32_t*) addr)
#define MEM_BARRIER asm volatile("": : :"memory")

#define SCL_PAD_NR 33
#define SDA_PAD_NR 34
#define PUC_PAD_NR 35

#define I3C0_SCL_SEL 18
#define I3C0_SDA_SEL 19
#define I3C0_PUC_SEL 20

I3C_OBJ *i3c0_drv;
I3C_PrivData *i3c0_pd;
I3C_DeviceDescriptor i3c_bus_device_descriptors[2] = {};

bool i3c_immediate_cmd_complete = false;
bool i3c_cmd_buff_empty = false;

static inline void wait(int cycles) {
  for (int i = 0; i < cycles; i++)
    asm ("nop;");
}

void setup_device_descriptors() {
  // Setup device descriptor for the primary master (this device) itself.
  memset(i3c_bus_device_descriptors, 0, sizeof(i3c_bus_device_descriptors));

  // Setup primary master
  I3C_DeviceDescriptor* device = &i3c_bus_device_descriptors[0];
  device->addr = 0x20; // Master needs a dynamic address as well to support multi-master mode
  device->hdrCapable = 1;
  device->isActive = 1;
  device->legacyI2CDev = 0;

  // During dynamic address assignment, the I3C peripheral will assign each I3C
  // device detected to the next defined device descriptor slot. Thus the only
  // data we should provide to

  // Setup dummy i3c slave
  device->addr = 0xad;
  device->hdrCapable = 0;
  device->isActive = 1;
  device->legacyI2CDev = 1;
}

void common_interrupt_cb(I3C_PrivData* pd) {
  printf("Receivedi some interrupt...\n");
}

void imm_cmd_complete_cb(I3C_PrivData* pd) {
  printf("Immediate command completed...\n");
  i3c_immediate_cmd_complete = true;
}

void cmd_queue_empty_cb(I3C_PrivData* pd) {
  printf("Command queue empty interrupt received...\n");
  i3c_cmd_buff_empty = true;
}

void common_event_cb(I3C_PrivData* pd, I3C_CommandStatus status) {
  printf("Received commandstatus code: %d\n");
}


int i3c_driver_init() {
  I3C_SysReq req = { 0 };
  I3C_Config cfg = { 0 };
  uint32_t status = 0;
  printf("Init driver...\n");

  i3c0_drv = I3C_GetInstance();

  I3C_Callbacks callbacks = {
    /** This function will be called while attempting to write a response to full command response FIFO. */
    .cmdResponseOverflow = common_interrupt_cb,
    /** This function will be called while attempting to read response from empty response FIFO. */
    .cmdResponseUnderflow = common_interrupt_cb,
    /** This function will be called when command response FIFO threshold is reached. */
    .cmdResponseThreshold = common_interrupt_cb,
    /** This function will be called while attempting to write a command to full command descriptor FIFO. */
    .cmdDescriptorOverflow = common_interrupt_cb,
    /** This function will be called while attempting to read data from empty command descriptor FIFO. */
    .cmdDescriptorEmpty = common_interrupt_cb,
    /** This function will be called when command descriptor FIFO threshold is reached. */
    .cmdDescriptorThreshold = common_interrupt_cb,
    /** This function will be called when driver attempts to read from empty RX FIFO. */
    .rxDataFifoUnderflow = common_interrupt_cb,
    /** This function will be called when receive data FIFO threshold is reached. */
    .rxFifoThreshold = common_interrupt_cb,
    /** This function will be called while attempting to write a command to full ibi response FIFO. */
    .ibiResponseOverflow = common_interrupt_cb,
    /** This function will be called while attempting to read data from empty ibi response FIFO. */
    .ibiResponseUnderflow = common_interrupt_cb,
    /** This function will be called when ibi response FIFO threshold is reached. */
    .ibiResponseThreshold = common_interrupt_cb,
    /** This function will be called while attempting to read data from empty ibi data FIFO. */
    .ibiDataUnderflow = common_interrupt_cb,
    /** This function will be called when ibi data FIFO threshold is reached. */
    .ibiDataThreshold = common_interrupt_cb,
    /** This function will be called when transmit data FIFO threshold is reached. */
    .txFifoThreshold = common_interrupt_cb,
    /** This function will be called when driver attempts to write data to full TX FIFO. */
    .txDataFifoOverflow = common_interrupt_cb,
    /** This function will be called when Immediate Command(s) processing is completed. */
    .immComplete = common_interrupt_cb,
    /** This function will be called when Mastership Request interrupt occurs. */
    .mastershipDone = common_interrupt_cb,
    /** This function will be called when Halted interrupt occurs. */
    .halted = common_interrupt_cb,
    /** This function will be called when all commands form command buffer are sent. */
    .commandBufferEmpty = common_interrupt_cb,
    /** This function will be called when command is processed without errors. */
    .commandComplete = common_interrupt_cb,
    /** This function will be called when DAA procedure is finished. */
    .daaComplete = common_interrupt_cb,
    /** This function will be called when mastership request occurs. */
    .mastershipRequest = common_interrupt_cb,
    /** This function will be called when Hot-Join occurs. */
    .hotjoin = common_interrupt_cb,
    /** This function will be called when Hot-Join occurs. */
    .inbandInterrupt = common_interrupt_cb,
    /** This function will be called when SDR Write is completed ane master operates in slave mode. */
    .slaveSdrWrComplete = common_interrupt_cb,
    /** This function will be called when SDR Read is completed ane master operates in slave mode. */
    .slaveSdrRdComplete = common_interrupt_cb,
    /** This function will be called when DDR Write is completed ane master operates in slave mode. */
    .slaveDdrWrComplete = common_interrupt_cb,
    /** This function will be called when DDR Read is completed ane master operates in slave mode. */
    .slaveDdrRdComplete = common_interrupt_cb,
    /** This function will be called when TestMode command arrives. */
    .testMode = common_interrupt_cb
  };

  cfg.regsBase = I3C_MASTER_BASE;
  //cfg.sysClk = pos_freq_domains[PI_FREQ_DOMAIN_PERIPH]; //TODO changeback
  cfg.sysClk = 100000000; //100MHz
  cfg.i2cFreq = 100000; // 100 KHz
  cfg.sdrFreq = 12500000; //12.5 MHz
  // Required SCL low period
  cfg.sclLowPeriod = 200;
  // Maximal frequency supported by slave
  cfg.maxSclFreq = 8000000;
  cfg.cmdFifoSize = 4;
  /* Threshold level for command FIFO */
  cfg.cmdFifoThreshold = 2;
  // size of the hardware tx buffer
  cfg.txFifoSize = 128;
  // size of the hardware rx buffer
  cfg.rxFifoSize = 128;
  /* Threshold configuration - set threshold levels. */
  cfg.thresholdConfig = (I3C_ThresholdConfig) {
    .txFifoThreshold = 32,
    .rxFifoThreshold = 32,
    .cmdrFifoThreshold = 1,
    .ibirFifoThreshold = 1
  };

  /* Interrupt configuration - which interrupts should be enabled */
  cfg.interruptConfig = (I3C_InterruptConfig) {
    .cmdResponseOverflow = true,
    .cmdResponseThreshold = true,
    .cmdResponseUnderflow = true,

    .cmdDescriptorOverflow = true,
    .cmdDescriptorThreshold = true,
    .cmdDescriptorEmpty = true,

    .ibiResponseOverflow = true,
    .ibiResponseThreshold = true,
    .ibiResponseUnderflow = true,

    .ibiDataUnderflow = true,
    .ibiDataThreshold = true,

    .txDataFifoOverflow = true,
    .rxDataFifoUnderflow = true,
    .txFifoThreshold = true,
    .rxFifoThreshold = true,

    .immComplete = true,
    .mastershipDone = true,
    .halted = true,
  };

  cfg.devs = i3c_bus_device_descriptors;
  cfg.numDevs = 2;

  // Probe memory requirements and allocate driver memory
  i3c0_drv->probe(&cfg, &req);
  i3c0_pd = (I3C_PrivData*) pi_l2_malloc(req.memReq);

  if (!i3c0_pd) {
    printf("Failed to allocate driver's private data.\n");
  }

  // Initialize the driver
  if (i3c0_drv->init(i3c0_pd, &cfg, &callbacks)) {
    status++;
    printf("Error. Failed to initialize the driver.\n");
  }

  // Enable the driver
  status += i3c0_drv->start(i3c0_pd);
  return status;
}

int configureBus(I3C_OBJ* drv, I3C_PrivData* pd) {
  int status = 0;
  I3C_BusMode bm;
  // We send the command over the priority queue
  I3C_TransmissionParameters paramsImm = {
    .immediate = true
  };
  drv->setBusMode(pd,I3C_BUS_MODE_MIXED_FAST);
  drv->enableCore(pd);
  drv->getBusMode(pd, &bm);
  drv->devPrint(pd);


  /* ENTDAA CCC */
  printf("Entering DAA...\n");
  i3c_immediate_cmd_complete = false;
  status += drv->cmdClearAll(pd);
  status += drv->cmdAddEnterDaa(pd, &paramsImm);

  // Wait for immediate command to complete. We poll the ISR function manually
  // because we didn't register it in an ISR for the I3C interrupt. Once the
  // immediate_cmd interrupt arrives (polled by the while loop), the callback
  // will set the immediate_command_complete flag.
  while (!i3c_immediate_cmd_complete) {
    drv->isr(pd);
  }
  printf("Bus configuration complete.\n");
}

void test_i2c_write(I3C_OBJ* drv, I3C_PrivData* pd) {
  I3C_BusMode bm;

  uint8_t tx_data[] = {0xde, 0xad, 0xbe, 0xef};
  uint8_t tx_data_len = 4;
  i3c_cmd_buff_empty = false;
  drv->cmdAddPrivI2CWrite(pd, 0xad, tx_data, tx_data_len);
  while (!i3c_cmd_buff_empty) {
    drv->isr(pd);
  }
  printf("Finished sending data to I2c\n");
}

int main()
{
  uint32_t addr;
  uint32_t reg;
  // Configure padmux to connect I3C.SCL to pads 35
  addr = SIRACUSA_PADMUX_BASE_ADDR + SCL_PAD_NR*8+4; // mux sel registes are separated by one register (the pad config reg)
  REG_WRITE32(addr, I3C0_SCL_SEL);
  // Configure padmux to connect I3C.SDA to pads 36
  addr = SIRACUSA_PADMUX_BASE_ADDR + SDA_PAD_NR*8+4; // mux sel registes are separated by one register (the pad config reg)
  REG_WRITE32(addr, I3C0_SDA_SEL);
  // Configure padmux to connect I3C.PUC to pads 37
  addr = SIRACUSA_PADMUX_BASE_ADDR + PUC_PAD_NR*8+4; // mux sel registes are separated by one register (the pad config reg)
  REG_WRITE32(addr, I3C0_PUC_SEL);

  // Reset the I3C peripheral via the register file
  addr = I3C_CONFIG_REG_BASE + I3C_CONFIG_SWRST_REG_OFFSET;
  reg = 0; // Reset both, global and local reset simultaneously
  REG_WRITE32(addr, reg);
  MEM_BARRIER;

  // Initialize I3C driver
  i3c_driver_init();
  // Configure I3C bus
  //configureBus(i3c0_drv, i3c0_pd);

  // Send data to legacy i2c device
  test_i2c_write(i3c0_drv, i3c0_pd);
  return 0;
}
