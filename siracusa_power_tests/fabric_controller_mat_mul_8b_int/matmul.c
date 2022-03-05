#include <stdint.h>
#include <stdio.h>

#include "pulp.h"

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
#define NUMCORES 1
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
 printf("Only info at %d, expected %08x but result is %08x\n", i, A[i], B[i]);
    if(A[i] != B[i]){
        err++;
        printf("Error at %d, expected %08x but result is %08x\n", i, A[i], B[i]);
    }
  }
  return err;
}

static int matmul()
{
  int volatile * const REG_CORESTATUS = (int *) CORESTATUS;
  int start_time, stop_time;
  int error = 0;

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

  // *REG_CORESTATUS = 0xABBAABBA;
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
  
  // *REG_CORESTATUS = 0xDEADCACA;
  error = checkInt(Y8_su, O8_su, 8);
  return error;
  
}


int main() {
    return matmul();
}