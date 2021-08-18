/*
 * Copyright (C) 2018 ETH Zurich and University of Bologna
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
 * Mantainer: Luca Valente (luca.valente2@unibo.it)
 */

#include <stdio.h>
#include "pulp.h"
#include "bitfield.h"
#include "siracusa_pads_functional_regs.h"
#include "gpio_hal.h"

#define SIRACUSA_PADMUX_BASE_ADDR 0x1A140000
#define SIRACUSA_GPIO_BASE_ADDR 0x1A101000
#define PAD_GPIO_SEL 0xe

#define REG_WRITE32(addr, value) *((volatile uint32_t*) addr) = (uint32_t) value;
#define REG_READ32(addr) *((volatile uint32_t*) addr)
#define MEM_BARRIER asm volatile("": : :"memory")


#define OUTPUT 1
#define INPUT  0



uint32_t lfsr(uint32_t input)
{
    uint32_t start_state = 0x02A0ACE1;  /* Any nonzero start state will work. */
    int32_t lfsr = start_state;

    for (int i = 0; i < input; ++i)
    {
      lfsr ^= lfsr >> 7;
      lfsr ^= lfsr << 9;
      lfsr ^= lfsr >> 13;
    }

    return lfsr;
}

uint32_t configure_gpio(uint32_t number, uint32_t direction){
  // Configure padmux to connect gpio to pad
  uint32_t addr = SIRACUSA_PADMUX_BASE_ADDR + number*8+4; // mux sel registes are separated by one register (the pad config reg)
  REG_WRITE32(addr, PAD_GPIO_SEL);

  // Now configure the GPIO peripheral
  addr = SIRACUSA_GPIO_BASE_ADDR + GPIO_GPIO_MODE_0_REG_OFFSET + number/16*4;
  uint32_t reg = REG_READ32(addr);
  bitfield_field32_t field = GPIO_GPIO_MODE_0_MODE_0_FIELD;
  field.index = number%16*2;
  reg = bitfield_field32_write(reg, field, (direction == INPUT)? GPIO_GPIO_MODE_0_MODE_0_VALUE_INPUT_ONLY: GPIO_GPIO_MODE_0_MODE_0_VALUE_OUTPUT_ACTIVE);
  REG_WRITE32(addr, reg);
  // Enable/Disable input sampling
  addr = SIRACUSA_GPIO_BASE_ADDR + GPIO_GPIO_EN_0_REG_OFFSET + number/32*4;
  reg = REG_READ32(addr);
  reg = bitfield_bit32_write(reg, number%32, direction == INPUT);
  REG_WRITE32(addr, reg);
  MEM_BARRIER;
}

uint32_t set_gpio(uint32_t number, uint32_t value){
  uint32_t addr;
  if (value == 1) {
    addr = SIRACUSA_GPIO_BASE_ADDR + GPIO_GPIO_SET_0_REG_OFFSET + number/32*4;
  } else {
    addr = SIRACUSA_GPIO_BASE_ADDR + GPIO_GPIO_CLEAR_0_REG_OFFSET + number/32*4;
  }
  REG_WRITE32(addr, 1<<(number%32));
  MEM_BARRIER;
}

uint32_t get_gpio(uint32_t number){
  uint32_t addr = SIRACUSA_GPIO_BASE_ADDR + GPIO_GPIO_IN_0_REG_OFFSET + number/32*4;
  uint32_t reg = REG_READ32(addr);
  return bitfield_bit32_read(reg, number%32);
  MEM_BARRIER;
}


int main()
{
  uint32_t error = 0;
  uint32_t out_addr = SIRACUSA_GPIO_BASE_ADDR + GPIO_GPIO_OUT_0_REG_OFFSET;
  uint32_t in_addr = SIRACUSA_GPIO_BASE_ADDR + GPIO_GPIO_IN_0_REG_OFFSET;
  uint32_t gpio_value;


  printf("[%d, %d] Start test\n",  get_cluster_id(), get_core_id());

  printf("GPIO[i+8] driven by GPIO[i] in Hardware \n");

  printf("[PRE-TEST] errors = %0d\n",error);
  
  printf("Set GPIOs[15:8] as input, the remaining as output\n");
  for (int i = 8; i < 16; i++) {
    configure_gpio(i, INPUT);
  }

  printf("Setting first 16 GPIOS outputs=1\n");
  for (int i = 0; i < 8; i++) {
    configure_gpio(i, OUTPUT);
  }

  printf("Driving GPIOs 0-15 with random data and reading data on GPIOs 16-31 (TB will connect them externally)\n");
  uint32_t rand_value = lfsr(0);
  for (int i = 0; i < 10; i++) {
    REG_WRITE32(out_addr, rand_value & 0x000000ff);
    MEM_BARRIER;
    asm ("nop;"
         "nop;"
         "nop;"); // Wait 3 cycles (The gpio uses 3 stage synchronizer so we must not immediately read the GPIO values.)
    gpio_value = REG_READ32(in_addr);
    if (gpio_value>>8 != (rand_value & 0x000000ff)) {
      printf("Error! GPIO had the wrong value. Was 0x%x instad of 0x%x\n", gpio_value>>8, rand_value & 0x000000ff);
      error++;
    }
    rand_value = lfsr(i);
  }

  return error;
}
