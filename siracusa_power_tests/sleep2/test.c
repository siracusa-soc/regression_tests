#include "pulp.h"
#include "stdio.h"

#define VCDADDR 0x10000000
#define CORESTATUS 0x10000000

#include "hal_ne16.h"

#define WEIGHT_MEM_BASE 0x10400000
#define SRAM_OFFSET 0x00400000
#define MRAM_OFFSET 0x00000000

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


#include "pulp.h"
#include "stdio.h"

#define VCDADDR 0x10000000
#define REG_CORESTATUS 0x1C000000
#define USE_CLUSTER

static int cluster_entry()
{

  int i;

  i=i*2;
  
  synch_barrier();

  return 1;
}

// executed on FC
static inline void wait_cycles(const unsigned cycles)
{
  /**
   * Each iteration of the loop below will take four cycles on RI5CY (one for
   * `addi` and three for the taken `bnez`; if the instructions hit in the
   * I$).  Thus, we let `i` count the number of remaining loop iterations and
   * initialize it to a fourth of the number of clock cyles.  With this
   * initialization, we must not enter the loop if the number of clock cycles
   * is less than four, because this will cause an underflow on the first
   * subtraction.
   */
  register unsigned threshold;
  asm volatile("li %[threshold], 4" : [threshold] "=r" (threshold));
  asm volatile goto("ble %[cycles], %[threshold], %l2"
          : /* no output */
          : [cycles] "r" (cycles), [threshold] "r" (threshold)
          : /* no clobbers */
          : __wait_cycles_end);
  register unsigned i = cycles >> 2;
__wait_cycles_start:
  // Decrement `i` and loop if it is not yet zero.
  asm volatile("addi %0, %0, -1" : "+r" (i));
  asm volatile goto("bnez %0, %l1"
          : /* no output */
          : "r" (i)
          : /* no clobbers */
          : __wait_cycles_start);
__wait_cycles_end:
  return;
}


int main()
{

  // printf("Entering main controller\n");
  run_test();
  cluster_start(0, cluster_entry);

  int retval = cluster_wait(0);

  *(int*)(REG_CORESTATUS) = 0xABBAABBA;

  wait_cycles(1000); // cluster with en = 0

  *(int*)(VCDADDR) = 0xDEADCACA;
  
  return 0;
}
