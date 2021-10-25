#include <stdint.h>
#include <stdio.h>

#include "pulp.h"

// L2_DATA volatile static  int a[2]={7,19};

int main() {
  
  if (rt_cluster_id() != 0)
    return bench_cluster_forward(0);

  // int ret = -1;
  if(rt_core_id() == 0) {
    // printf("HELLO\n");
    // volatile a = 7; 
    // volatile b = 18;
    return 0;
  }
}