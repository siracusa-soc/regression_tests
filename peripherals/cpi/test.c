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
 *  Alfio Di Mauro <adimauro@iis.ee.ethz.ch>
 */

#include <stdio.h>
#include "pulp.h"

#define CAM_BASE_ADDR (ARCHI_UDMA_CAM_ID(0) << 7)
#define FRAME_LINES 166
#define LINE_PIXELS 128
#define DATA_SIZE FRAME_LINES*LINE_PIXELS

//volatile int __attribute__((section(".l2_data"))) rx_buffer[DATA_SIZE];

volatile int* rx_buffer = (int*) 0x1C0100f0;

int main()
{
  int pass = 1;
  int error = 0;
  int u=0;

    // Disable cluster to speed up simulation and initialize peripheral domain
  pll_t cluster_pll = pll_get_handle(PLL_CLUSTER_DOMAIN);
  pll_set_power(&cluster_pll, 0);

  // rx buffer
  // this section enables the CPI clock
    // pulp_write32(ARCHI_UDMA_ADDR + (ARCHI_UDMA_CORE_ID(0) << 7), 1 << (ARCHI_UDMA_CAM_ID(0)-1));
    plp_udma_cg_set(plp_udma_cg_get() | (1 << ARCHI_UDMA_CAM_ID(0)-1));

  // this section checks that uDMA CPI is addressable
    // try to write to the UDMA_CPI_CAM_CFG_LL_OFFSET CPI register
    pulp_write32(ARCHI_UDMA_ADDR + CAM_BASE_ADDR + UDMA_CPI_CAM_CFG_LL_OFFSET, 0xAABBCCDD);
    error += (pulp_read32(ARCHI_UDMA_ADDR + CAM_BASE_ADDR + UDMA_CPI_CAM_CFG_LL_OFFSET) != 0xAABBCCDD) ;
    // reset the register content
    pulp_write32(ARCHI_UDMA_ADDR + CAM_BASE_ADDR + UDMA_CPI_CAM_CFG_LL_OFFSET, 0x00000000);



  for (int f = 0; f < 4; ++f)
  {
    // run the actual test
    printf("CPI TEST START");
    // configure the uDMA chnnel related registers (manual enqueue)
    pulp_write32(ARCHI_UDMA_ADDR + CAM_BASE_ADDR + UDMA_CPI_CAM_RX_SADDR_OFFSET, (int) rx_buffer);
    pulp_write32(ARCHI_UDMA_ADDR + CAM_BASE_ADDR + UDMA_CPI_CAM_RX_SIZE_OFFSET,DATA_SIZE*2);
    pulp_write32(ARCHI_UDMA_ADDR + CAM_BASE_ADDR + UDMA_CPI_CAM_RX_CFG_OFFSET, 
                                                          UDMA_CHANNEL_CFG_EN | 
                                                          UDMA_CHANNEL_CFG_SIZE_32 | 
                                                          UDMA_CHANNEL_CFG_CLEAR |
                                                          UDMA_CHANNEL_CFG_CONT );
    // configure the CPI related registers
    pulp_write32(ARCHI_UDMA_ADDR + CAM_BASE_ADDR + UDMA_CPI_CAM_CFG_GLOB_OFFSET, (1 << 31) + (0b110 << 8));
    pulp_write32(ARCHI_UDMA_ADDR + CAM_BASE_ADDR + UDMA_CPI_CAM_CFG_SIZE_OFFSET, FRAME_LINES);

    for (volatile int i = 0; i < 500; ++i)
    {
      i++;
    }

    while(pulp_read32(ARCHI_UDMA_ADDR + CAM_BASE_ADDR + UDMA_CPI_CAM_RX_SIZE_OFFSET) > 0){    
      // Busy wait polling
      for (volatile int i = 0; i < 100; ++i)
      {
        i++;
      }
    }
  }


  // *(int*)(0x1A102000) = 0xAABBCCDD;

  // 



  // //Expected datas
  // uint8_t expected_rx_buffer[DATA_SIZE]={ 0xCA,
  //                                     0x00,
  //                                     0xDE,
  //                                     0xCA};
  // //--- rx buffer
  // volatile uint8_t rx_buffer[DATA_SIZE];
  // //--- CMD buffer for WRITE command
  // volatile uint8_t cmd_buffer_wr[BUFFER_SIZE] = {I2C_CMD_CFG,0x0,0x40,
  //                                                I2C_CMD_START,
  //                                                I2C_CMD_WR,0xa0, //Control-->write
  //                                                I2C_CMD_WR,0x00, //Addr MSB
  //                                                I2C_CMD_WR,0x00, //ADDR LSB
  //                                                I2C_CMD_WR,expected_rx_buffer[0], //DATA0
  //                                                I2C_CMD_WR,expected_rx_buffer[1], //DATA1
  //                                                I2C_CMD_WR,expected_rx_buffer[2], //DATA2
  //                                                I2C_CMD_WR,expected_rx_buffer[3], //DATA3
  //                                                I2C_CMD_STOP};
  // //--- CMD buffer for READ command
  // volatile uint8_t cmd_buffer_rd[BUFFER_SIZE_READ] = {I2C_CMD_CFG,0x0,0x40,
  //                                                     I2C_CMD_START,
  //                                                     I2C_CMD_WR,0xa0, //Control-->write (the address)
  //                                                     I2C_CMD_WR,0x00, //Addr MSB
  //                                                     I2C_CMD_WR,0x00, //ADDR LSB
  //                                                     I2C_CMD_START,
  //                                                     I2C_CMD_WR,0xa1, //Control--> read
  //                                                     I2C_CMD_RD_ACK, //DATA0
  //                                                     I2C_CMD_RD_ACK, //DATA1
  //                                                     I2C_CMD_RD_ACK, //DATA2
  //                                                     I2C_CMD_RD_NACK, //DATA3
  //                                                     I2C_CMD_STOP};
    
  // for (u=0;u<1;u++) {

  //   //READ

  //   //--- clear the rx buffer
  //   for (int j = 0; j < DATA_SIZE; ++j)
  //   {
  //     rx_buffer[j] = 0;
  //   }
  //   expected_rx_buffer[1]=u;

  //   printf("[%d, %d] Start test i2c read %d\n",  get_cluster_id(), get_core_id(),u);

  //   //--- enable all the udma channels (see below for selective enable)
  //   plp_udma_cg_set(plp_udma_cg_get() | (0xffffffff));

  //   //--- get the base address of the udma channels
  //   //unsigned int udma_i2c_channel_base = hal_udma_channel_base(UDMA_CHANNEL_ID(ARCHI_UDMA_I2C_ID(u)));
  //   printf("uDMA i2c%d base channel address %8x\n", u,udma_i2c_channel_base);

  //   //--- enqueue cmds on cmd channel and set the rx channel

  //   plp_udma_enqueue(UDMA_I2C_DATA_ADDR(u) ,  (int)rx_buffer     , 4               , UDMA_CHANNEL_CFG_EN | UDMA_CHANNEL_CFG_SIZE_8);
  //   plp_udma_enqueue(UDMA_I2C_CMD_ADDR(u) ,  (int)cmd_buffer_rd  , BUFFER_SIZE_READ, UDMA_CHANNEL_CFG_EN | UDMA_CHANNEL_CFG_SIZE_8);
  //   for (volatile int i = 0; i < 25000; ++i)
  //   {
  //     i++;
  //   }
  //   for (int i = 0; i < DATA_SIZE; ++i)
  //   {
  //     if (rx_buffer[i]!=expected_rx_buffer[i])
  //     {
  //       printf("rx_buffer[%0d]=0x%0x different from expected 0x%0x\n", i, rx_buffer[i], expected_rx_buffer[i]);
  //       error++;
  //     }
  //     else printf("rx_buffer[%0d]=0x%0x as expected\n", i, rx_buffer[i]);
  //   }
    
      
    
  // }
  // if(error!=0) pass=0;

  return 0;
}
