#include <stdio.h>

//#define GATE_SIM
#ifdef GATE_SIM
#define printf(fmt, ...) (0)
#endif

#include "pulp.h"

#define CORESTATUS 0x10000000

#define USE_CLUSTER
#define PARALLEL

#define MAESTRO_REG_0 0x

#define NUM_CORES 8
#define SIZE 16

//#define NB_RUN 2
//#define VCD_DUMP

//#define F25M
//#define F75M
//#define F100M
//#define F300M
//#define F400M

#include "stimuli.h"

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

int main()
{
  #ifdef USE_CLUSTER
  if (rt_cluster_id() != 0){
    *(int*)(0x1a107008) = 0x00000000;
    *(int*)(0x1a107004) = 0x10001002;

    return bench_cluster_forward(0);
  }
  #endif

  int volatile * const REG_CORESTATUS = (int *) CORESTATUS;
  int start_time, stop_time;
  int error = 0;

  int myid = get_core_id();

  if(myid == 0) {
    #ifdef F25M
    // Set Cluster clock to  25 MHz
    pos_fll_set_freq(POS_FLL_CL, 25000000);
    #endif
    #ifdef F75M
    // Set Cluster clock to  75 MHz
    pos_fll_set_freq(POS_FLL_CL, 75000000);
    #endif
    #ifdef F100M
    // Set Cluster clock to 100 MHz
    pos_fll_set_freq(POS_FLL_CL, 100000000);
    #endif
    #ifdef F300M
    // Set Cluster clock to 300 MHz
    pos_fll_set_freq(POS_FLL_CL, 300000000);
    #endif
    #ifdef F400M
    // Set Cluster clock to 400 MHz
    pos_fll_set_freq(POS_FLL_CL, 399000000);
    #endif

    perf_reset();
    perf_start();

  }

  synch_barrier();

  int32_t *A = matA;
  int32_t *B = matB;
  int32_t *C = matC;
  uint32_t M = SIZE;
  uint32_t N = SIZE;

  for (int iter_nb = 0; iter_nb < NB_RUN; iter_nb++) {

    #ifdef PARALLEL
    synch_barrier();

    int blockSize = (SIZE+NUM_CORES-1) / NUM_CORES;
    int start = myid*blockSize;
    for (int i=start; i < start+blockSize; i++) {
      if (myid == 0) {
        #ifndef VCD_DUMP
        *REG_CORESTATUS = 1;
        #else
        *REG_CORESTATUS = 0xABBAABBA;
        #endif // VCD_DUMP
      }
      start_time = cpu_perf_get(0);
    #else // PARALLEL
      if(myid == 0) {
        #ifndef VCD_DUMP
        *REG_CORESTATUS = 1;
        #else
        *REG_CORESTATUS = 0xABBAABBA;
        #endif // VCD_DUMP
        start_time = cpu_perf_get(0);

        for (int i = 0; i < N; i++) {
    #endif // PARALLEL
          for (int j = 0; j < M; j++) {
#if 0
            // No optim
            C[i*N+j] = 0;
            for (int k = 0; k < N; k+=1) {
              C[i*N+j] += A[i*N+k] * B[k*N+j];
            }
#else
            // Optim 1
            int new_j = (j + myid) % M;
            C[i*N+new_j] = 0;
            for (int k = 0; k < N; k+=1) {
              C[i*N+new_j] += A[i*N+k] * B[k*N+new_j];
            }
#endif
          } // for (int j
        }
    #ifdef PARALLEL
    synch_barrier();

    stop_time = cpu_perf_get(0);
    if(myid == 0) {
      #ifndef VCD_DUMP
      *REG_CORESTATUS = 0;
      #else
      *REG_CORESTATUS = 0xDEADCACA;
      #endif // VCD_DUMP
      printf("Perf Counter cycles for iteration %d: %d\n", iter_nb + 1, stop_time - start_time, 0, 0);
    }

    synch_barrier();

  } // for (int iter_nb

    #else // PARALLEL
        stop_time = cpu_perf_get(0);
        #ifndef VCD_DUMP
        *REG_CORESTATUS = 0;
        #else
        *REG_CORESTATUS = 0xDEADCACA;
        #endif // VCD_DUMP
        printf("Perf Counter cycles for iteration %d: %d\n", iter_nb + 1, stop_time - start_time, 0, 0);
      }

  } // for (int iter_nb

    #endif // PARALLEL
  
  if(myid == 0) {
    error = checkInt(matC, exp_res, N*M);
    printf("\nNumber of errors %d\n\n", error);
    if (error == 0) {
      *REG_CORESTATUS = 2;
    } else {
      *REG_CORESTATUS = 4;
    }
  }

  return error;
}
