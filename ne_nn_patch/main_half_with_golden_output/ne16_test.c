/*
 * Copyright (C) 2020 ETH Zurich, University of Bologna and GreenWaves Technologies
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
 * Authors:  Francesco Conti <fconti@iis.ee.ethz.ch>
 *           Gianna Paulin <pauling@iis.ee.ethz.ch>
 *           Renzo Andri <andrire@iis.ee.ethz.ch>
 * Main Test Program for the NE16
 */

#include <stdint.h>
#include <stdio.h>

#include "pulp.h"
#include "hal_ne16.h"

#include "streamin_fs1_output_64x8x8_input_32x8x8/inc/ne16_cfg.h"
#include "streamin_fs1_output_64x8x8_input_32x8x8/inc/ne16_infeat.h"
#include "streamin_fs1_output_64x8x8_input_32x8x8/inc/ne16_weights.h"
#include "streamin_fs1_output_64x8x8_input_32x8x8/inc/ne16_scale.h"
#include "streamin_fs1_output_64x8x8_input_32x8x8/inc/ne16_scale_bias.h"
#include "streamin_fs1_output_64x8x8_input_32x8x8/inc/ne16_scale_shift.h"
#include "streamin_fs1_output_64x8x8_input_32x8x8/inc/ne16_streamin.h"
#include "streamin_fs1_output_64x8x8_input_32x8x8/inc/ne16_outfeat.h"

#include "no_normquant_stride2_output_64x8x8_input_64x16x16/inc/ne16_cfg.h"
#include "no_normquant_stride2_output_64x8x8_input_64x16x16/inc/ne16_infeat.h"
#include "no_normquant_stride2_output_64x8x8_input_64x16x16/inc/ne16_weights.h"
#include "no_normquant_stride2_output_64x8x8_input_64x16x16/inc/ne16_scale.h"
#include "no_normquant_stride2_output_64x8x8_input_64x16x16/inc/ne16_scale_bias.h"
#include "no_normquant_stride2_output_64x8x8_input_64x16x16/inc/ne16_scale_shift.h"
#include "no_normquant_stride2_output_64x8x8_input_64x16x16/inc/ne16_streamin.h"

#include "avgpool_fs3_dw_output_64x16x16_input_64x16x16/inc/ne16_cfg.h"
#include "avgpool_fs3_dw_output_64x16x16_input_64x16x16/inc/ne16_infeat.h"
#include "avgpool_fs3_dw_output_64x16x16_input_64x16x16/inc/ne16_weights.h"
#include "avgpool_fs3_dw_output_64x16x16_input_64x16x16/inc/ne16_scale.h"
#include "avgpool_fs3_dw_output_64x16x16_input_64x16x16/inc/ne16_scale_bias.h"
#include "avgpool_fs3_dw_output_64x16x16_input_64x16x16/inc/ne16_scale_shift.h"
#include "avgpool_fs3_dw_output_64x16x16_input_64x16x16/inc/ne16_streamin.h"

#include "padding_1111_fs3_output_32x8x8_input_32x8x8/inc/ne16_cfg.h"
#include "padding_1111_fs3_output_32x8x8_input_32x8x8/inc/ne16_infeat.h"
#include "padding_1111_fs3_output_32x8x8_input_32x8x8/inc/ne16_weights.h"
#include "padding_1111_fs3_output_32x8x8_input_32x8x8/inc/ne16_scale.h"
#include "padding_1111_fs3_output_32x8x8_input_32x8x8/inc/ne16_scale_bias.h"
#include "padding_1111_fs3_output_32x8x8_input_32x8x8/inc/ne16_scale_shift.h"
#include "padding_1111_fs3_output_32x8x8_input_32x8x8/inc/ne16_streamin.h"

#include "stride2_fs1_output_32x8x8_input_64x16x16/inc/ne16_cfg.h"
#include "stride2_fs1_output_32x8x8_input_64x16x16/inc/ne16_infeat.h"
#include "stride2_fs1_output_32x8x8_input_64x16x16/inc/ne16_weights.h"
#include "stride2_fs1_output_32x8x8_input_64x16x16/inc/ne16_scale.h"
#include "stride2_fs1_output_32x8x8_input_64x16x16/inc/ne16_scale_bias.h"
#include "stride2_fs1_output_32x8x8_input_64x16x16/inc/ne16_scale_shift.h"
#include "stride2_fs1_output_32x8x8_input_64x16x16/inc/ne16_streamin.h"

#define NB_ITER 10

static int glob_errors;

#define WEIGHT_MEM_BASE 0x20400000
#define SRAM_OFFSET 0x00400000
#define MRAM_OFFSET 0x00000000
int run_test() {

  // uint8_t* x0l        = ne16_infeat_stride2;
  uint8_t volatile *W0l        = ne16_weights_stride2;
  uint8_t volatile *nq0l       = ne16_scale_stride2;
  uint8_t volatile *nqs0l      = ne16_scale_shift_stride2;
  uint8_t volatile *nqb0l      = ne16_scale_bias_stride2;
  uint8_t volatile *actual_y0l = ne16_streamin_stride2;

  // uint8_t volatile x1l        = ne16_cfg_padding;
  uint8_t volatile *W1l        = ne16_weights_padding;
  uint8_t volatile *nq1l       = ne16_scale_padding;
  uint8_t volatile *nqs1l      = ne16_scale_shift_padding;
  uint8_t volatile *nqb1l      = ne16_scale_bias_padding;
  uint8_t volatile *actual_y1l = ne16_streamin_padding;

  uint8_t volatile *x0        = ne16_infeat_avgpool;
  uint8_t volatile *W0        = ne16_weights_avgpool;
  uint8_t volatile *nq0       = ne16_scale_avgpool;
  uint8_t volatile *nqs0      = ne16_scale_shift_avgpool;
  uint8_t volatile *nqb0      = ne16_scale_bias_avgpool;
  uint8_t volatile *actual_y0 = ne16_streamin_avgpool;

  // uint8_t volatile x1        = ne16_infeat_no_normquant;
  uint8_t volatile *W1        = ne16_weights_no_normquant;
  uint8_t volatile *nq1       = ne16_scale_no_normquant;
  uint8_t volatile *nqs1      = ne16_scale_shift_no_normquant;
  uint8_t volatile *nqb1      = ne16_scale_bias_no_normquant;
  uint8_t volatile *actual_y1 = ne16_streamin_no_normquant;

  // uint8_t volatile x2        = ne16_infeat_streamin;
  uint8_t volatile *W2        = ne16_weights_streamin;
  uint8_t volatile *nq2       = ne16_scale_streamin;
  uint8_t volatile *nqs2      = ne16_scale_shift_streamin;
  uint8_t volatile *nqb2      = ne16_scale_bias_streamin;
  
  uint8_t volatile *golden_y = ne16_outfeat_streamin;

  uint32_t volatile *weight_start_ptr = WEIGHT_MEM_BASE+SRAM_OFFSET; 
  memcpy(weight_start_ptr,(uint32_t*)ne16_weights_avgpool,sizeof(ne16_weights_avgpool));
  
  weight_start_ptr = WEIGHT_MEM_BASE+SRAM_OFFSET+sizeof(ne16_weights_avgpool); 
  memcpy(weight_start_ptr,(uint32_t*)ne16_weights_no_normquant,sizeof(ne16_weights_no_normquant));
  
  weight_start_ptr = WEIGHT_MEM_BASE+SRAM_OFFSET+sizeof(ne16_weights_no_normquant)+sizeof(ne16_weights_avgpool); 
  memcpy(weight_start_ptr,(uint32_t*)ne16_weights_streamin,sizeof(ne16_weights_streamin));

  weight_start_ptr = WEIGHT_MEM_BASE+SRAM_OFFSET+sizeof(ne16_weights_no_normquant)+sizeof(ne16_weights_avgpool)+sizeof(ne16_weights_streamin); 
  memcpy(weight_start_ptr,(uint32_t*)ne16_weights_stride2,sizeof(ne16_weights_stride2));

  weight_start_ptr = WEIGHT_MEM_BASE+SRAM_OFFSET+sizeof(ne16_weights_no_normquant)+sizeof(ne16_weights_avgpool)+sizeof(ne16_weights_stride2)+sizeof(ne16_weights_streamin); 
  memcpy(weight_start_ptr,(uint32_t*)ne16_weights_padding,sizeof(ne16_weights_padding));

  NE16_CG_ENABLE();

  // setup HCI
  NE16_SETPRIORITY_NE16();
  NE16_RESET_MAXSTALL();
  NE16_SET_MAXSTALL(8);

  // soft-clear NE16
  NE16_WRITE_CMD(NE16_SOFT_CLEAR, NE16_SOFT_CLEAR_ALL);
  for(volatile int kk=0; kk<10; kk++);
  int job_id = -1;

  NE16_BARRIER_ACQUIRE(job_id);
  NE16_WRITE_REG(NE16_REG_WEIGHTS_PTR,     NE16_REG_WEIGHTS_PTR+SRAM_OFFSET+sizeof(ne16_weights_no_normquant)+sizeof(ne16_weights_avgpool)+sizeof(ne16_weights_streamin));
  NE16_WRITE_REG(NE16_REG_INFEAT_PTR,      x0);
  NE16_WRITE_REG(NE16_REG_OUTFEAT_PTR,     actual_y0l);
  NE16_WRITE_REG(NE16_REG_SCALE_PTR,       nq0l);
  NE16_WRITE_REG(NE16_REG_SCALE_SHIFT_PTR, nqs0l);
  NE16_WRITE_REG(NE16_REG_SCALE_BIAS_PTR,  nqb0l);
  for(int i=6; i<24; i++) {
    NE16_WRITE_REG(i*4, ne16_cfg_stride2[i]);
  }
  NE16_WRITE_CMD(NE16_COMMIT_AND_TRIGGER, NE16_TRIGGER_CMD);
  NE16_BARRIER_ACQUIRE(job_id);
  NE16_WRITE_REG(NE16_REG_WEIGHTS_PTR,     NE16_REG_WEIGHTS_PTR+SRAM_OFFSET+sizeof(ne16_weights_no_normquant)+sizeof(ne16_weights_avgpool)+sizeof(ne16_weights_stride2)+sizeof(ne16_weights_streamin));
  NE16_WRITE_REG(NE16_REG_INFEAT_PTR,      actual_y0l-32*9);//offsetting to help padding 
  NE16_WRITE_REG(NE16_REG_OUTFEAT_PTR,     actual_y1l);
  NE16_WRITE_REG(NE16_REG_SCALE_PTR,       nq1l);
  NE16_WRITE_REG(NE16_REG_SCALE_SHIFT_PTR, nqs1l);
  NE16_WRITE_REG(NE16_REG_SCALE_BIAS_PTR,  nqb1l);
  for(int i=6; i<24; i++) {
    NE16_WRITE_REG(i*4, ne16_cfg_padding[i]);
  }
  NE16_WRITE_CMD(NE16_COMMIT_AND_TRIGGER, NE16_TRIGGER_CMD);
  // for (int i=0; i<32; i++){
  //   printf("Activations[%d]=%x\n",i,*(actual_y0l+i));
  // }
  //1x1 mode just after the 3x3 convolution input->32x16x16 output->64x16x16 streamin, 32-bit output
  NE16_BARRIER_ACQUIRE(job_id);
  NE16_WRITE_REG(NE16_REG_WEIGHTS_PTR,     NE16_REG_WEIGHTS_PTR+SRAM_OFFSET);
  NE16_WRITE_REG(NE16_REG_INFEAT_PTR,      x0);
  NE16_WRITE_REG(NE16_REG_OUTFEAT_PTR,     actual_y0);
  NE16_WRITE_REG(NE16_REG_SCALE_PTR,       nq0);
  NE16_WRITE_REG(NE16_REG_SCALE_SHIFT_PTR, nqs0);
  NE16_WRITE_REG(NE16_REG_SCALE_BIAS_PTR,  nqb0);
  for(int i=6; i<24; i++) {
    NE16_WRITE_REG(i*4, ne16_cfg_avgpool[i]);
  }
  NE16_WRITE_CMD(NE16_COMMIT_AND_TRIGGER, NE16_TRIGGER_CMD);

  NE16_BARRIER_ACQUIRE(job_id);
  NE16_WRITE_REG(NE16_REG_WEIGHTS_PTR,     NE16_REG_WEIGHTS_PTR+SRAM_OFFSET+sizeof(ne16_weights_avgpool));
  NE16_WRITE_REG(NE16_REG_INFEAT_PTR,      actual_y0);
  NE16_WRITE_REG(NE16_REG_OUTFEAT_PTR,     actual_y1);
  NE16_WRITE_REG(NE16_REG_SCALE_PTR,       nq1);
  NE16_WRITE_REG(NE16_REG_SCALE_SHIFT_PTR, nqs1);
  NE16_WRITE_REG(NE16_REG_SCALE_BIAS_PTR,  nqb1);
  for(int i=6; i<24; i++) {
    NE16_WRITE_REG(i*4, ne16_cfg_no_normquant[i]);
  }
  NE16_WRITE_CMD(NE16_COMMIT_AND_TRIGGER, NE16_TRIGGER_CMD);

  NE16_BARRIER_ACQUIRE(job_id);
  NE16_WRITE_REG(NE16_REG_WEIGHTS_PTR,     NE16_REG_WEIGHTS_PTR+SRAM_OFFSET+sizeof(ne16_weights_avgpool)+sizeof(ne16_weights_no_normquant));
  NE16_WRITE_REG(NE16_REG_INFEAT_PTR,      actual_y1l);
  NE16_WRITE_REG(NE16_REG_OUTFEAT_PTR,     actual_y1);
  NE16_WRITE_REG(NE16_REG_SCALE_PTR,       nq2);
  NE16_WRITE_REG(NE16_REG_SCALE_SHIFT_PTR, nqs2);
  NE16_WRITE_REG(NE16_REG_SCALE_BIAS_PTR,  nqb2);
  for(int i=6; i<24; i++) {
    NE16_WRITE_REG(i*4, ne16_cfg_streamin[i]);
  }
  NE16_WRITE_CMD(NE16_COMMIT_AND_TRIGGER, NE16_TRIGGER_CMD);


  NE16_BARRIER();
  NE16_CG_DISABLE();

  int volatile errors = ne16_compare_int(actual_y1, golden_y, STIM_Y_SIZE_STREAMIN/4);
  return errors;

}

int main() {
    return run_test();
}