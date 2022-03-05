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

static int cluster_entry()
{

  int volatile i=0;

  // i=i*2;
  int volatile * const REG_CORESTATUS = (int *) CORESTATUS;
  int myid = get_core_id();

  if (myid == 0) {
    while(i<30) //Delay to give enough time to clock gate the other cores.
      i++;
    *REG_CORESTATUS = 0xABBAABBA;
    i=pulp_read32(0x1A10F000);
  }
  synch_barrier();
  return 0;
}

int main()
{
  volatile int i=0;
  if(rt_cluster_id()!=0)
    run_test();
  cluster_start(0, cluster_entry);
  return 0;
}
