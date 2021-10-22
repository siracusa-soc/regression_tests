/*
 * Copyright (C) 2018 ETH Zurich and University of Bologna
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
 * Mantainer: Luca Valente (luca.valente2@unibo.it)
 */

#include <stdio.h>
#include "pulp.h"
#include "siracusa_padctrl.h"

void print_pll_status(pll_t* pll) {
  pll_status_t status = pll_get_status(pll);
  printf("PLL Status:\n  is_locked: %0d\n  cal_code: %0x\n  pll_freq_hz: %0d\n", status.is_locked, status.calibration_output_code, status.pll_freq_hz);
}

int cluster_test() {
  if (hal_core_id() == 0) {
    pll_t cluster_pll = pll_get_handle(PLL_CLUSTER_DOMAIN);
    pll_set_freq(&cluster_pll, 398000000, 0);
    printf("Cluster PLL @500MHz\n");
    print_pll_status(&cluster_pll);
    printf("Hello from core %0d\n", hal_core_id());
  }
  return 0;
}

int main()
{
  pll_t cluster_pll = pll_get_handle(PLL_CLUSTER_DOMAIN);
  pll_t soc_pll = pll_get_handle(PLL_SOC_DOMAIN);
  pll_t per_pll = pll_get_handle(PLL_PER_DOMAIN);

  // Disable cluster to speed up simulation and initialize peripheral domain
  pll_set_power(&cluster_pll, 0);

  // Change the clock frequency of the SoC to 250 MHz
  pll_set_freq(&soc_pll, 250000000, 0);
  printf("Soc Pll @250 MHz\n");
  print_pll_status(&soc_pll);

  // Change SoC frequency without clock gate
  pll_set_lock_mode(&soc_pll, 0);
  pll_set_freq(&soc_pll, 14000000, 0);
  printf("Soc Pll @14MHz \n");
  print_pll_status(&soc_pll);

  // Turn on cluster clock, set to 500 MHz and run a small
  pll_set_power(&cluster_pll, 1);
  cluster_start(0, cluster_test);
  return cluster_wait(0);
}
