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
#include "inc/ne16_cfg.h"
#include "inc/ne16_infeat.h"
#include "inc/ne16_weights.h"
#include "inc/ne16_scale.h"
#include "inc/ne16_scale_bias.h"
#include "inc/ne16_scale_shift.h"
#include "inc/ne16_streamin.h"
#include "inc/ne16_outfeat.h"

#define NB_ITER 10

static int glob_errors;
#define WEIGHT_MEM_MASE 0x10400000
int run_test() {

  uint8_t* x        = ne16_infeat;
  uint8_t* W        = ne16_weights;
  uint8_t* nq       = ne16_scale;
  uint8_t* nqs      = ne16_scale_shift;
  uint8_t* nqb      = ne16_scale_bias;
  uint8_t* golden_y = ne16_outfeat;
  uint8_t* actual_y = ne16_streamin;
  
  // memcpy(0x20400000, ne16_weights, STIM_W_SIZE);

  uint32_t* weight_start_ptr = WEIGHT_MEM_MASE; 
  printf("Start copying weights to MRAM\n");
  memcpy(weight_start_ptr,(uint32_t*)ne16_weights,sizeof(ne16_weights)); 
  printf("Finished copying weights to MRAM\n");

  // enable clock
  NE16_CG_ENABLE();

  // setup HCI
  NE16_SETPRIORITY_NE16();
  NE16_RESET_MAXSTALL();
  NE16_SET_MAXSTALL(8);

  // soft-clear NE16
  NE16_WRITE_CMD(NE16_SOFT_CLEAR, NE16_SOFT_CLEAR_ALL);
  for(volatile int kk=0; kk<10; kk++);

  int job_id = -1;

  // job 0
  NE16_BARRIER_ACQUIRE(job_id);
  NE16_WRITE_REG(NE16_REG_WEIGHTS_PTR,     NE16_REG_WEIGHTS_PTR);
  NE16_WRITE_REG(NE16_REG_INFEAT_PTR,      x);
  NE16_WRITE_REG(NE16_REG_OUTFEAT_PTR,     actual_y);
  NE16_WRITE_REG(NE16_REG_SCALE_PTR,       nq);
  NE16_WRITE_REG(NE16_REG_SCALE_SHIFT_PTR, nqs);
  NE16_WRITE_REG(NE16_REG_SCALE_BIAS_PTR,  nqb);
  for(int i=6; i<24; i++) {
    NE16_WRITE_REG(i*4, ne16_cfg[i]);
  }
  NE16_WRITE_CMD(NE16_COMMIT_AND_TRIGGER, NE16_TRIGGER_CMD);
  // start perf counter
  // pi_perf_start();

  // wait on barrier
  NE16_BARRIER();

  // stop perf counter
  // pi_perf_stop();

  // disable clock
  NE16_CG_DISABLE();

  // printf("%d cycles\n", pi_perf_read(PI_PERF_CYCLES));

  int errors = ne16_compare_int(actual_y, golden_y, STIM_Y_SIZE/4);
  return errors;
}

int main() {
  
  if (rt_cluster_id() != 0) {
    return bench_cluster_forward(0);
  }

  int ret = -1;
  if(rt_core_id() == 0) {
    printf("HELLO\n");
    return run_test();
  }
}
