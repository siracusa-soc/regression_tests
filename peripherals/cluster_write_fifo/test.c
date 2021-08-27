/*
 * Copyright (C) 2021 ETH Zurich, University of Bologna
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
 *
 * Title: test.c
 * Author: Manuel Eggimann  <meggimann@iis.ee.ethz.ch>
 * Date: 26.08.2021
 *
 * Description: Test fast write access from Hyperflash to MRAM
 */

#include "pulp.h"
#include "stdio.h"
#include "hyperbus_api.h"

#define UDMA_CORE_REG_L2_DEST_OFFSET 0x10
#define UDMA_HYPER_REG_DEST_OFFSET 0x28
#define UDMA_ADDR_PREFIX_WIDTH 11
#define CLUSTER_BASE 0x10000000
#define CLUSTER_FAST_WRITE_BASE 0x20000000
#define WEIGHT_MEMORY_ADDR_OFFSET 0x400000
#define WEIGHT_MEMORY_CFG_BASE 0x10c00000
#define WEIGHT_MEMORY_CFG_MRAM_BANK_PR0_OFFSET 0x14

L2_DATA uint32_t data[32];

#define GET_FAST_WRITE_ADDR(l1_addr) (void*)((((uint32_t)l1_addr)&0x0fffffff) | CLUSTER_FAST_WRITE_BASE)

void change_mram_power_state(bool pwr_on) {
  for (int i = 0; i < 4; i++) {
    pulp_write32(WEIGHT_MEMORY_CFG_BASE+WEIGHT_MEMORY_CFG_MRAM_BANK_PR0_OFFSET+i*4, pwr_on&0x1);
  }
}

int main() {
  // Turn of MRAM power...
  /* change_mram_power_state(0); */

  printf("Setup udma for hyperflash to MRAM transfer...\n");
  udma_hyper_flash_setup();


  // Read flash data into L2 memory
  printf("Reading Hyperflash data into L2 memory...\n");
  int id = udma_hyper_id_alloc();
  uint32_t hyper_addr = 0;
  uint32_t target_addr = CLUSTER_FAST_WRITE_BASE + WEIGHT_MEMORY_ADDR_OFFSET;
  uint32_t size = 256;
  pulp_write32(UDMA_HYPERBUS_OFFSET + UDMA_HYPERBUS_CONFIG_REG_OFFSET + UDMA_HYPER_REG_DEST_OFFSET, 0x0);
  udma_hyper_dread(size, hyper_addr, data, 0, (unsigned int) id);
  udma_hyper_wait((unsigned int) id);


  // Change destination register in udma_core to cluster_fifo_write address
  pulp_write32(ARCHI_UDMA_ADDR + UDMA_CORE_REG_L2_DEST_OFFSET, (CLUSTER_FAST_WRITE_BASE+WEIGHT_MEMORY_ADDR_OFFSET)>>(32-UDMA_ADDR_PREFIX_WIDTH));
 // Change destination bits of umda_hyper peripheral
  pulp_write32(UDMA_HYPERBUS_OFFSET + UDMA_HYPERBUS_CONFIG_REG_OFFSET + UDMA_HYPER_REG_DEST_OFFSET, 0x3);
 printf("Start udma transfer to MRAM with cluster write FIFO.\n");
  // Read from hyperram
  printf("Turn on MRAM power and starting flash transfer...\n");
  change_mram_power_state(1);
  udma_hyper_dread(size, hyper_addr, target_addr, 0, (unsigned int) id);
  // Now turn on MRAM power
  udma_hyper_wait((unsigned int) id);

  printf("Transfer done. Comparing with L2 data...\n");
  // Compare data in L2 memory in MRAM memory
  int errors = 0;
  uint32_t* weight_mem = (uint32_t*) (CLUSTER_BASE + WEIGHT_MEMORY_ADDR_OFFSET);
  for (int i = 0; i < 32; i++) {
    if (data[i] != weight_mem[i]) {
      errors++;
      printf("Found missmatch on etnry %d. Was %x instead of %x.\n", i, weight_mem[i], data[i]);
    }
  }


  // Repeat procedure without cluster_write_fifo
  printf("Starting udma transfer to MRAM without cluster write FIFO.\n");
  // Change destination prefix register of umda_core peripheral
  pulp_write32(ARCHI_UDMA_ADDR + UDMA_CORE_REG_L2_DEST_OFFSET, (CLUSTER_BASE+WEIGHT_MEMORY_ADDR_OFFSET)>>(32-UDMA_ADDR_PREFIX_WIDTH));
  target_addr = CLUSTER_BASE + WEIGHT_MEMORY_ADDR_OFFSET+256;
  udma_hyper_dread(size, hyper_addr, target_addr, 0, (unsigned int) id);
  udma_hyper_wait((unsigned int) id);



  // Compare data in L2 memory in MRAM memory
  weight_mem = (uint32_t*) (CLUSTER_BASE + WEIGHT_MEMORY_ADDR_OFFSET+256);
  printf("Transfer done. Comparing with L2 data...\n");
  for (int i = 0; i < 32; i++) {
    if (data[i] != weight_mem[i]) {
      errors++;
      printf("Found missmatch on etnry %d. Was %x instead of %x.\n", i, weight_mem[i], data[i]);
    }
  }
  return errors;
}
