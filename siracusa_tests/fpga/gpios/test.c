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
#include "gpio_hal.h"
#include "siracusa_padctrl.h"

#define SIRACUSA_PADMUX_BASE_ADDR 0x1A140000
#define SIRACUSA_GPIO_BASE_ADDR 0x1A101000
#define PAD_GPIO_SEL 0xe

#define REG_WRITE32(addr, value) *((volatile uint32_t*) addr) = (uint32_t) value;
#define REG_READ32(addr) *((volatile uint32_t*) addr)
#define MEM_BARRIER asm volatile("": : :"memory")


#define OUTPUT 1
#define INPUT  0

#define TIME_1MS 1000000



uint32_t lfsr()
{
    static int32_t lfsr = 0x02a0ace1;
    lfsr ^= lfsr >> 7;
    lfsr ^= lfsr << 9;
    lfsr ^= lfsr >> 13;
    return lfsr;
}

int  get_soc_frequency() {
  pll_t soc_pll_handle;
  pll_get_handle(PLL_SOC_DOMAIN);
  pll_status_t pll_status = pll_get_status(&soc_pll_handle);
  return pll_status.pll_freq_hz;
}

void wait_cycles(uint32_t count)
{

  for (int i = 0; i < count; i++) {
    asm("nop");
  }
}

uint32_t configure_gpio(uint32_t number, uint32_t direction){
  // Configure padmux to connect gpio to pad
  padctrl_mode_set(number, PAD_MODE_GPIO);

  // Now configure the GPIO peripheral
  uint32_t addr = SIRACUSA_GPIO_BASE_ADDR + GPIO_GPIO_MODE_0_REG_OFFSET + number/16*4;
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
  uint32_t soc_frequency_hz;

  printf("[%d, %d] Start FPGA GPIO test\n",  get_cluster_id(), get_core_id());

  printf("Set GPIOs[0:7] as output and run random blink pattern on them\n");
  for (int i = 0; i < 8; i++) {
    configure_gpio(i, OUTPUT);
  }

  /* soc_frequency_hz = get_soc_frequency(); */
  soc_frequency_hz = 50000000; // 50MHz is FPGA default

  printf("Driving GPIOs 0-7 with random data\n");
  uint32_t rand_value = lfsr(0);
  while(1) {
    REG_WRITE32(out_addr, rand_value & 0x000000ff);
    MEM_BARRIER;
    rand_value = lfsr();
    wait_cycles(50000000);
  }

  return error;
}
