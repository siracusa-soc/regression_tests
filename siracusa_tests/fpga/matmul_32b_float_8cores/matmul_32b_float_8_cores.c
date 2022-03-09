#include <stdio.h>
#include "pulp.h"
#include "siracusa_padctrl.h"

#define CORESTATUS 0x10000000

#define NUM_CORES 8
#define SIZE 16
#define NB_RUN 4


#include "stimuli.h"

int checkInt (int *B, int *A, int n)
{
  int i;
  int err = 0;
  for (i = 0; i < n; i++) {
    if(A[i] != B[i] && ((A[i] - B[i]) > 2)){
        err++;
        printf("Error at %d, expected %08x but result is %08x\n", i, A[i], B[i]);
    }
  }
  return err;
}

void matmul_benchmark(int core_id) {
  uint32_t M = SIZE;
  uint32_t N = SIZE;

  float *A = matA;
  float *B = matB;
  float *C = matC;

  for (int iter_nb = 0; iter_nb < NB_RUN; iter_nb++) {
    int blockSize = (SIZE+NUM_CORES-1) / NUM_CORES;
    int start = core_id*blockSize;
    for (int i=start; i < start+blockSize; i++) {
      for (int j = 0; j < M; j++) {
        int new_j = (j + core_id) % M;
        C[i*N+new_j] = 0;
        for (int k = 0; k < N; k+=1) {
          C[i*N+new_j] += A[i*N+k] * B[k*N+new_j];
        }
      }
    }
  }
}

int main()
{
  int execution_time = 0;
  // Check if we are the fabric controller (FC has cluster id != 0 which cluster
  // cores have cluster id 0) We have this check since we will fork main on all
  // cluster cores and don't need to rerun SoC initialization during parallel
  // execution.
  if (rt_cluster_id() != 0){
    // Initialize the SoC

    // Configure IO pads for UART output on FPGA (map UART TX and RX to pads 31 and 32)
    padctrl_mode_set(PAD_GPIO32, PAD_MODE_UART0_RX);
    padctrl_mode_set(PAD_GPIO33, PAD_MODE_UART0_TX);
    // since we compile with the io=uart option, stdout is mapped to UART. The
    // default baudrate of 115200 is configured in crt0 before main start.
    // We could however change it here:
    // uart_open(0, 9600);


    // TODO Ask Arpan what these memory writes are supposed to be doing
    *(int*)(0x1a107008) = 0x00000000;
    *(int*)(0x1a107004) = 0x10001002;

    // We need to add a newline character to force the minimal libc printf implementation to flush UART.
    printf("Starting parallel float matmul benchmark on cluster...\n");

    // Start timer on fabric controller
    stop_timer();
    reset_timer();
    start_timer();

    // Fork main on all cluster cores
    // The return value is whatever cluster core 0 is returning
    int cluster_retval = bench_cluster_forward(0);

    stop_timer();
    execution_time = get_time(); // Time is measured in unit ref_clk ticks (32,768 Hz clock)
    printf("Overall execution time (from FC point of view): %d ticks\n", execution_time);

    // Forward return code to soc control status register by return from main
    return cluster_retval;
  }

  // The code below will run on the cluster cores due to the fork (bench_cluster_forward)

  // Status register for cluster cores.
  int volatile * const REG_CORESTATUS = (int *) CORESTATUS;
  int error = 0;

  // Get id of current fork (core id)
  int myid = get_core_id();

  // Start performance counters on cluster core 0
  if(myid == 0) {
    perf_reset();
    perf_start();
  }


  // Synchronize start of execution
  synch_barrier();
  // Run the benchmark
  matmul_benchmark(myid);
  // Wait until all other cores are finished
  synch_barrier();

  // Verify correctness of result on core zero and read out performance counters
  if(myid == 0) {
    // Stop the performance counters
    perf_stop();
    // Verify correctness of the result
    error = checkInt(matC, exp_res, SIZE*SIZE);
    printf("\nNumber of errors %d\n\n", error);
    // Print values of all performance counters
    perf_print_all();
    // Write return code to cluster status register
    if (error == 0) {
      *REG_CORESTATUS = 2;
    } else {
      *REG_CORESTATUS = 4;
    }
  }
  return error;
}
