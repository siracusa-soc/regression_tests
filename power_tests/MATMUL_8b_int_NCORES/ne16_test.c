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

#define WEIGHT_MEM_BASE 0x10400000
#define SRAM_OFFSET 0x00400000
#define MRAM_OFFSET 0x00000000

// #include "stdio.h"

//#define GATE_SIM
#ifdef GATE_SIM
#define printf(fmt, ...) (0)
#endif

// #include "pulp.h"

#define CORESTATUS 0x10000000
#define NUMCORES 4
#define VCD_DUMP 1

#include "parameters.h"
#include "data_allocation.h"
typedef signed   char  v4s __attribute__((vector_size (4)));
typedef unsigned char  v4u __attribute__((vector_size (4)));
#define SumDotp4(a, b, c) __builtin_pulp_sdotusp4(a, b, c)

int checkInt (int *B, int *A, int n)
{
  int i;
  int err = 0;
  for (i = 0; i < n; i++) {
//  printf("Error at %d, expected %08x but result is %08x\n", i, A[i], B[i]);
    if(A[i] != B[i]){
        err++;
        printf("Error at %d, expected %08x but result is %08x\n", i, A[i], B[i]);
    }
  }
  return err;
}

static int cluster_entry()
{
  int volatile * const REG_CORESTATUS = (int *) CORESTATUS;
  int start_time, stop_time;
  int error = 0;
  int myid = rt_core_id();
  synch_barrier();

  int32_t * ptr1_8_su;
  int32_t * ptr2_8_su;
  uint32_t * pW1_8_su;
  uint32_t * pW2_8_su;
  uint32_t * pW3_8_su;
  uint32_t * pW4_8_su;
  int32_t * ptr1_8_su_copy1 = &X8_su[0];
  int32_t * ptr2_8_su_copy1 = &X8_su[0 + IFM_CH_NN * DIM_KER_NN * DIM_KER_NN];
  uint32_t * pW1_8_su_copy1 = &W8_su[0];
  uint32_t * pW2_8_su_copy1 = &W8_su[0 + IFM_CH_NN * DIM_KER_NN * DIM_KER_NN];
  uint32_t * pW3_8_su_copy1 = &W8_su[0 + 2 *IFM_CH_NN * DIM_KER_NN * DIM_KER_NN];
  uint32_t * pW4_8_su_copy1 = &W8_su[0 + 3 *IFM_CH_NN * DIM_KER_NN * DIM_KER_NN];
  int32_t * res_8_su    = &Y8_su[0];
  int32_t * gold_8_su   = &O8_su[0];

  v4s vecA;
  v4s vecA2;
  v4s vecA3;
  v4s vecA4;
  v4u vecB;
  v4u vecB2; 

  int32_t sum;
  int32_t sum2;
  int32_t sum3;
  int32_t sum4;
  int32_t sum5;
  int32_t sum6;
  int32_t sum7;
  int32_t sum8;

  for (int iter_nb = 0; iter_nb < NB_RUN; iter_nb++) {

    pW1_8_su = pW1_8_su_copy1;
    pW2_8_su = pW2_8_su_copy1;
    pW3_8_su = pW3_8_su_copy1;
    pW4_8_su = pW4_8_su_copy1;
   
    ptr1_8_su = ptr1_8_su_copy1;
    ptr2_8_su = ptr2_8_su_copy1;

    sum  = 0;
    sum2 = 0;
    sum3 = 0;
    sum4 = 0;
    sum5 = 0;
    sum6 = 0;
    sum7 = 0;
    sum8 = 0;

    synch_barrier();
    if(myid<NUMCORES)
    {
      if (myid == 0) {
        // printf("ENTERED START VCD_DUMP\n");
        #ifndef VCD_DUMP
        *REG_CORESTATUS = 1;
        // printf("NO START VCD_DUMP\n");
        #else
        *REG_CORESTATUS = 0xABBAABBA;
        // printf("STARTED VCD_DUMP\n");
        #endif // VCD_DUMP
      }
      // start_time = cpu_perf_get(0);
      // printf("Cord ID=%d\n",myid);
      for (int i=0 ; i< (IFM_CH_NN * DIM_KER_NN * DIM_KER_NN) >> 2; i++ ) {
     
        vecA  = *((v4s*)pW1_8_su);
        vecA2 = *((v4s*)pW2_8_su);
        vecA3 = *((v4s*)pW3_8_su);
        vecA4 = *((v4s*)pW4_8_su);
     
        vecB  = *((v4u*)ptr1_8_su);
        vecB2 = *((v4u*)ptr2_8_su);
     
        sum  = SumDotp4(vecB, vecA, sum );
        sum2 = SumDotp4(vecB, vecA2, sum2);
        sum3 = SumDotp4 (vecB, vecA3, sum3);
        sum4 = SumDotp4(vecB, vecA4, sum4);
     
        sum5 = SumDotp4(vecB2, vecA, sum5);
        sum6 = SumDotp4(vecB2, vecA2, sum6);
        sum7 = SumDotp4(vecB2, vecA3, sum7);
        sum8 = SumDotp4(vecB2, vecA4, sum8);

        // printf("veca: %X, veca2: %X ,veca3: %X,veca4: %X \n", vecA, vecA2, vecA3, vecA4);
        // printf("sum: %d, sum2:%d\n", sum, sum2);

        pW1_8_su+=1;
        pW2_8_su+=1;
        pW3_8_su+=1;
        pW4_8_su+=1;
     
        ptr1_8_su+=1;
        ptr2_8_su+=1;
      }

      res_8_su[0] = sum;
      res_8_su[1] = sum2;
      res_8_su[2] = sum3;
      res_8_su[3] = sum4;
      res_8_su[4] = sum5;
      res_8_su[5] = sum6;
      res_8_su[6] = sum7;
      res_8_su[7] = sum8;
    }
    synch_barrier();

    stop_time = cpu_perf_get(0);
    if (myid == 0) {
      // printf("ENTERED END VCD_DUMP\n");
      #ifndef VCD_DUMP
      *REG_CORESTATUS = 0;
      // printf("NO ENDED VCD_DUMP\n");
      #else
      *REG_CORESTATUS = 0xDEADCACA;
      // printf("ENDED VCD_DUMP\n");
      #endif // VCD_DUMP
      // printf("Perf Counter cycles for iteration %d: %d\n", iter_nb + 1, stop_time - start_time, 0, 0);

#if 0
      printf("matmul[0] = %i, 0x%08x, exp_matmul[0] = %i, 0x%08x\n", res_8_su[0], res_8_su[0], gold_8_su[0], gold_8_su[0]);
      printf("matmul[1] = %i, 0x%08x, exp_matmul[1] = %i, 0x%08x\n", res_8_su[1], res_8_su[1], gold_8_su[1], gold_8_su[1]);
      printf("matmul[2] = %i, 0x%08x, exp_matmul[2] = %i, 0x%08x\n", res_8_su[2], res_8_su[2], gold_8_su[2], gold_8_su[2]);
      printf("matmul[3] = %i, 0x%08x, exp_matmul[3] = %i, 0x%08x\n", res_8_su[3], res_8_su[3], gold_8_su[3], gold_8_su[3]);
      printf("matmul[4] = %i, 0x%08x, exp_matmul[4] = %i, 0x%08x\n", res_8_su[4], res_8_su[4], gold_8_su[4], gold_8_su[4]);
      printf("matmul[5] = %i, 0x%08x, exp_matmul[5] = %i, 0x%08x\n", res_8_su[5], res_8_su[5], gold_8_su[5], gold_8_su[5]);
      printf("matmul[6] = %i, 0x%08x, exp_matmul[6] = %i, 0x%08x\n", res_8_su[6], res_8_su[6], gold_8_su[6], gold_8_su[6]);
      printf("matmul[7] = %i, 0x%08x, exp_matmul[7] = %i, 0x%08x\n", res_8_su[7], res_8_su[7], gold_8_su[7], gold_8_su[7]);
#endif
    }
  }

  synch_barrier();
  
  if(myid == 0) {
    error = checkInt(Y8_su, O8_su, 8);
    printf("\nNumber of errors %d\n\n", error);
    if (error == 0) {
      *REG_CORESTATUS = 2;
    } else {
      *REG_CORESTATUS = 4;
    }
  }

  return error;
  
}

// int main()
// {
  
//   cluster_start(0, cluster_entry);
  
//   int retval = cluster_wait(0);
  
//   return 0;
  
// }

int run_test() {

  uint8_t* x        = ne16_infeat;
  uint8_t* W        = ne16_weights;
  uint8_t* nq       = ne16_scale;
  uint8_t* nqs      = ne16_scale_shift;
  uint8_t* nqb      = ne16_scale_bias;
  uint8_t* golden_y = ne16_outfeat;
  uint8_t* actual_y = ne16_streamin;

  uint32_t* weight_start_ptr = WEIGHT_MEM_BASE+MRAM_OFFSET; 
  // printf("Start copying weights to MRAM\n");
  memcpy(weight_start_ptr,(uint32_t*)ne16_weights,sizeof(ne16_weights)); 

  NE16_CG_ENABLE();

  // setup HCI
  NE16_SETPRIORITY_NE16();
  NE16_RESET_MAXSTALL();
  NE16_SET_MAXSTALL(8);

  // soft-clear NE16
  NE16_WRITE_CMD(NE16_SOFT_CLEAR, NE16_SOFT_CLEAR_ALL);
  for(volatile int kk=0; kk<10; kk++);
  NE16_WRITE_CMD(NE16_SOFT_CLEAR, 0);
  NE16_WRITE_REG(0x3c, 0x00010001);
  NE16_WRITE_REG(0x40, 0x00010001);
  NE16_WRITE_REG(0x44, 0x00010001);
  NE16_WRITE_REG(0x48, 0x00010002);
  NE16_WRITE_REG(0x4c, 0x00010001);
  NE16_WRITE_REG(0x5c, 0x600);
  NE16_WRITE_CMD(1, NE16_TRIGGER_CMD);
  NE16_WRITE_CMD(0, NE16_TRIGGER_CMD);
  for(volatile int kk=0; kk<10; kk++);
  NE16_WRITE_REG(0x5c, 0x200);
}

int main() {
    if(rt_cluster_id()!=0)
      run_test();
  
  cluster_start(0, cluster_entry);
  
  int retval = cluster_wait(0);
  
//   return 0;
    return 0;
  // }
}