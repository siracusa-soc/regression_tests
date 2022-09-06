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

#include <stdio.h>
#include "siracusa_padctrl.h"

int main()
{
  siracusa_padctrl_cfg_t pad_cfg;

  // workaround to trap GPIO37 in input mode but use QSPI function
  pad_cfg.drv_str = DRV_STR_48mA;
  pad_cfg.pull_cfg = NO_PULL;
  pad_cfg.ret_en = 0;
  pad_cfg.tx_en = 0;
  pad_cfg.shm_trigg_en = 0;
  padctrl_config_set(PAD_GPIO37, &pad_cfg);
  pad_cfg.drv_str = DRV_STR_48mA;
  pad_cfg.pull_cfg = NO_PULL;
  pad_cfg.ret_en = 1;
  pad_cfg.tx_en = 0;
  pad_cfg.shm_trigg_en = 0;
  padctrl_config_set(PAD_GPIO37, &pad_cfg);

  // workaround to trap GPIO38 in output mode but use QSPI function
  pad_cfg.drv_str = DRV_STR_48mA;
  pad_cfg.pull_cfg = NO_PULL;
  pad_cfg.ret_en = 0;
  pad_cfg.tx_en = 1;
  pad_cfg.shm_trigg_en = 0;
  padctrl_config_set(PAD_GPIO38, &pad_cfg);
  pad_cfg.drv_str = DRV_STR_48mA;
  pad_cfg.pull_cfg = NO_PULL;
  pad_cfg.ret_en = 1;
  pad_cfg.tx_en = 1;
  pad_cfg.shm_trigg_en = 0;
  padctrl_config_set(PAD_GPIO38, &pad_cfg);

  padctrl_mode_set(PAD_GPIO37, PAD_MODE_QSPIS0_SDIO0);
  padctrl_mode_set(PAD_GPIO38, PAD_MODE_QSPIS0_SDIO1);
  // We can't use QSPI with the SW workaround
  // padctrl_mode_set(PAD_GPIO39, PAD_MODE_QSPIS0_SDIO2);
  // padctrl_mode_set(PAD_GPIO40, PAD_MODE_QSPIS0_SDIO3);

  
  padctrl_mode_set(PAD_GPIO41, PAD_MODE_QSPIS0_CSN);
  padctrl_mode_set(PAD_GPIO42, PAD_MODE_QSPIS0_SCK);
  
  return 0;
}
