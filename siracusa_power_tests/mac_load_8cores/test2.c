#include <stdio.h>

//#define GATE_SIM
#ifdef GATE_SIM
#define printf(fmt, ...) (0)
#endif

#include "pulp.h"
// #include "fll.h"

#define CORESTATUS 0x10000000

//#define NB_RUN 2
#define VCD_DUMP

#include "hal_ne16.h"
#include "parameters.h"
#include "data_allocation.h"
typedef signed   char  v4s __attribute__((vector_size (4)));
typedef unsigned char  v4u __attribute__((vector_size (4)));
#define SumDotp4(a, b, c) __builtin_pulp_sdotusp4(a, b, c)

int checkInt (int *B, int *A, int n)
{
  int i;
  int err = 0;
  // printf("Testing print\n");
  for (i = 0; i < n; i++) {
    // printf("Before check at %d, expected %08x but result is %08x\n", i, A[i], B[i]);
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

  int myid = get_core_id();
  synch_barrier();

  uint32_t * im2col_1;
  uint32_t * im2col_2;
  int32_t  * filter_1;
  int32_t  * filter_2;
  int32_t  * filter_3;
  int32_t  * filter_4;
  uint32_t * im2col_1_copy1         = &buffer_im2col[0];
  uint32_t * im2col_2_copy1         = &buffer_im2col[0 + IFM_CH_NN * DIM_KER_NN * DIM_KER_NN];
  int32_t  * filter_1_copy1         = &filters_3d[0];
  int32_t  * filter_2_copy1         = &filters_3d[0 + IFM_CH_NN * DIM_KER_NN * DIM_KER_NN];
  int32_t  * filter_3_copy1         = &filters_3d[0 + 2 *IFM_CH_NN * DIM_KER_NN * DIM_KER_NN];
  int32_t  * filter_4_copy1         = &filters_3d[0 + 3 *IFM_CH_NN * DIM_KER_NN * DIM_KER_NN];
  int32_t  * res_matmul             = &matmul_out[0];
  int32_t  * gold_matmul            = &golden_matmul_out[0];

  int32_t temp0;
  int32_t temp1;
  int32_t temp2;
  int32_t temp3;
  int32_t temp4;
  int32_t temp5;
  int32_t temp6;
  int32_t temp7;

  for (int iter_nb = 0; iter_nb < NB_RUN; iter_nb++) {
  
    im2col_1 = im2col_1_copy1;
    im2col_2 = im2col_2_copy1;
    filter_1 = filter_1_copy1;
    filter_2 = filter_2_copy1;
    filter_3 = filter_3_copy1;
    filter_4 = filter_4_copy1;

    temp0    = 0;
    temp1    = 0;
    temp2    = 0;
    temp3    = 0;
    temp4    = 0;
    temp5    = 0;
    temp6    = 0;
    temp7    = 0;

//  asm volatile("":::"memory");
    synch_barrier();

    if (myid == 0) {
      #ifndef VCD_DUMP
      *REG_CORESTATUS = 1;
      #else
      *REG_CORESTATUS = 0xABBAABBA;
      #endif // VCD_DUMP
    }
    // start_time = cpu_perf_get(0);

//  synch_barrier();
//  asm volatile("":::"memory");

    im2col_1 = __builtin_pulp_mlinitspr_v3(0,1,0,0,im2col_1); // update SPRA[0]    
    filter_1 = __builtin_pulp_mlinitspr_v3(1,0,0,0,filter_1); // update SPRW[0]
    filter_2 = __builtin_pulp_mlinitspr_v3(1,0,1,0,filter_2); // update SPRW[1]
    filter_3 = __builtin_pulp_mlinitspr_v3(1,0,2,0,filter_3); // update SPRW[2]
    filter_4 = __builtin_pulp_mlinitspr_v3(1,0,3,0,filter_4); // update SPRW[3]

    for(int i=0 ; i < ((IFM_CH_NN * DIM_KER_NN * DIM_KER_NN) >> 2); i++) {
      // temp0 = __builtin_pulp_mlsdotsup4_v3(1,0, 0, 0, filter_1, temp0);
      // filter_1 = __builtin_pulp_mlupdatespr_v3(im2col_1);
      // fake =  __builtin_pulp_mlsdotsup4_v3(0,1, 0, 0, im2col_1, fake);
      // im2col_1 = __builtin_pulp_mlupdatespr_v3(filter_1);
      im2col_2 = __builtin_pulp_mlinitspr_v3(0,1,0,1,im2col_2); // update SPRA[1]
      temp0 = __builtin_pulp_mlsdotsup4_v3(0,0, 0, 0, filter_1, temp0);
      temp1 = __builtin_pulp_mlsdotsup4_v3(0,0, 1, 0, filter_2, temp1);
      temp2 = __builtin_pulp_mlsdotsup4_v3(0,0, 2, 0, filter_3, temp2);
      temp3 = __builtin_pulp_mlsdotsup4_v3(0,1, 3, 0, im2col_1, temp3); // update SPRA[0] with new im2col_1 element
      im2col_1 = __builtin_pulp_mlupdatespr_v3(im2col_1);
      temp4 = __builtin_pulp_mlsdotsup4_v3(1,0, 0, 1, filter_1, temp4); // update SPRW[0] with new filter_1 element
      filter_1 = __builtin_pulp_mlupdatespr_v3(filter_1);
      temp5 = __builtin_pulp_mlsdotsup4_v3(1,0, 1, 1, filter_2, temp5); // update SPRW[1] with new filter_2 element
      filter_2 = __builtin_pulp_mlupdatespr_v3(filter_2);
      temp6 = __builtin_pulp_mlsdotsup4_v3(1,0, 2, 1, filter_3, temp6); // update SPRW[2] with new filter_3 element
      filter_3 = __builtin_pulp_mlupdatespr_v3(filter_3);
      temp7 = __builtin_pulp_mlsdotsup4_v3(1,0, 3, 1, filter_4, temp7); // update SPRW[3] with new filter_4 element
      filter_4 = __builtin_pulp_mlupdatespr_v3(filter_4);
      // fake  = __builtin_pulp_mlsdotsup4_v3(1,0, 3, 1, im2col_2, fake);  // fake MAC to update SPRA[1] with new im2col_2 element
      // im2col_2 = __builtin_pulp_mlupdatespr_v3(im2col_2);
    }

    res_matmul[0] = temp0;
    res_matmul[1] = temp1;
    res_matmul[2] = temp2;
    res_matmul[3] = temp3;
    res_matmul[4] = temp4;
    res_matmul[5] = temp5;
    res_matmul[6] = temp6;
    res_matmul[7] = temp7;

    synch_barrier();

    // stop_time = cpu_perf_get(0);
    if (myid == 0) {
      #ifndef VCD_DUMP
      *REG_CORESTATUS = 0;
      #else
      *REG_CORESTATUS = 0xDEADCACA;
      #endif // VCD_DUMP
      // printf("Perf Counter cycles for iteration %d: %d\n", iter_nb + 1, stop_time - start_time, 0, 0);

#if 0
      printf("matmul[0] = %i, 0x%08x, exp_matmul[0] = %i, 0x%08x\n", res_matmul[0], res_matmul[0], gold_matmul[0], gold_matmul[0]);
      printf("matmul[1] = %i, 0x%08x, exp_matmul[1] = %i, 0x%08x\n", res_matmul[1], res_matmul[1], gold_matmul[1], gold_matmul[1]);
      printf("matmul[2] = %i, 0x%08x, exp_matmul[2] = %i, 0x%08x\n", res_matmul[2], res_matmul[2], gold_matmul[2], gold_matmul[2]);
      printf("matmul[3] = %i, 0x%08x, exp_matmul[3] = %i, 0x%08x\n", res_matmul[3], res_matmul[3], gold_matmul[3], gold_matmul[3]);
      printf("matmul[4] = %i, 0x%08x, exp_matmul[4] = %i, 0x%08x\n", res_matmul[4], res_matmul[4], gold_matmul[4], gold_matmul[4]);
      printf("matmul[5] = %i, 0x%08x, exp_matmul[5] = %i, 0x%08x\n", res_matmul[5], res_matmul[5], gold_matmul[5], gold_matmul[5]);
      printf("matmul[6] = %i, 0x%08x, exp_matmul[6] = %i, 0x%08x\n", res_matmul[6], res_matmul[6], gold_matmul[6], gold_matmul[6]);
      printf("matmul[7] = %i, 0x%08x, exp_matmul[7] = %i, 0x%08x\n", res_matmul[7], res_matmul[7], gold_matmul[7], gold_matmul[7]);
#endif
    }
  }

  synch_barrier();
  
  if(myid == 0) {
    error = checkInt(matmul_out, golden_matmul_out, 8);
    // printf("\nNumber of errors %d\n\n", error);
    if (error == 0) {
      *REG_CORESTATUS = 2;
    } else {
      *REG_CORESTATUS = 4;
    }
  }

  return error;
  
}
int run_test() {

  NE16_CG_ENABLE();

  // setup HCI
  NE16_SETPRIORITY_NE16();
  NE16_RESET_MAXSTALL();
  NE16_SET_MAXSTALL(8);

  // soft-clear NE16
  NE16_WRITE_CMD(NE16_SOFT_CLEAR, NE16_SOFT_CLEAR_ALL);
  for(volatile int kk=0; kk<10; kk++);
  NE16_WRITE_CMD(NE16_SOFT_CLEAR, 0);
  NE16_WRITE_REG(0x3c, 0x00010021);
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
int main()
{
  unsigned int freq_handle= pos_fll_set_freq(POS_FLL_CL, 10000000);
  run_test();
  cluster_start(0, cluster_entry);
  
  int retval = cluster_wait(0);
  
  return 0;
  
}
