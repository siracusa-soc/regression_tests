
#ifndef __ARCHI_F_H__
#define __ARCHI_SCAN_CHAIN_REGISTERS_H__

#include "pulp.h"
#include "archi/utils.h"
#include <stdio.h>

#define ARCHI_AON_PER_OFFSET  0x00008000
#define ARCHI_AON_PER_ADDR    (ARCHI_SOC_PERIPHERALS_ADDR + ARCHI_AON_PER_OFFSET)

#define soc_FLL               0
#define per_FLL               1
#define cluster_FLL           2
#define npu_FLL               4

#define status_reg_default    0x0
#define cfg_reg_default       0x448805F5
#define cfg2_reg_default      0x02004107
#define integr_reg_default    0x00880000


void test_check_fll_registers_default_values (testresult_t *result, void (*start)(), void (*stop)());
void test_check_fll_registers_rw_access (testresult_t *result, void (*start)(), void (*stop)());
void test_disable_flls (testresult_t *result, void (*start)(), void (*stop)());
void test_change_fll_freq_normal (testresult_t *result, void (*start)(), void (*stop)());
void test_change_fll_freq_standalone (testresult_t *result, void (*start)(), void (*stop)());

unsigned int change_fll_freq_normal (int fll, unsigned int div, unsigned int mult);
unsigned int change_fll_freq_standalone (int fll, unsigned int div, unsigned int dco);
unsigned int check_register(int fll, testresult_t *result);
unsigned int check_register_default_values(int fll, testresult_t *result);




static unsigned int fll_get_freq_from_mult_div(unsigned int mult, unsigned int div)
{
    // FreqOut = Fref * Mult/2^(Div-1)  With Mult on 16 bits and Div on 4 bits
    unsigned int fref = ARCHI_REF_CLOCK;
    //printf("fref = %d Hz, mult = %d, div = %d.\n", fref, mult, div);
    unsigned int fres = (fref*mult)>>(div-1);
    return fres;
}


unsigned int change_fll_freq_normal(int fll, unsigned int div, unsigned int mult)
{
  unsigned int freq;

  fll_reg_conf1_t reg1 = { .raw = hal_fll_conf_reg1_get(fll) };
  if (reg1.mode == 0) {
    reg1.mode = 1;
    reg1.output_lock_enable = 0;
    hal_fll_conf_reg1_set(fll, reg1.raw);
  }

  // Set Clock Ref lock assert count
  fll_reg_conf2_t reg2 = { .raw = hal_fll_conf_reg2_get(fll) };
  reg2.assert_cycles = 6;
  reg2.lock_tolerance = 0x50;
  hal_fll_conf_reg2_set(fll, reg2.raw);

  // Set multiplication factor and clock divider
  reg1.mult_factor = mult;
  reg1.clock_out_divider = div;
  hal_fll_conf_reg1_set(fll, reg1.raw);
  //hal_fll_update_mult_div(fll, mult, div);

  /* Lock Fll */
  reg1.output_lock_enable = 1;
  hal_fll_conf_reg1_set(fll, reg1.raw);

  freq = fll_get_freq_from_mult_div(reg1.mult_factor, reg1.clock_out_divider);
  printf("The frequency is %d.\n", freq);

  return freq;
}


unsigned int change_fll_freq_standalone(int fll, unsigned int div, unsigned int dco)
{
  fll_reg_conf2_t reg2 = { .raw = hal_fll_conf_reg2_get(fll) };
  reg2.assert_cycles = 6;
  reg2.lock_tolerance = 0x50;
  reg2.dithering = 0;
  hal_fll_conf_reg2_set(fll, reg2.raw);

  fll_reg_conf1_t reg1 = { .raw = hal_fll_conf_reg1_get(fll) };
  reg1.mode = 0;
  reg1.output_lock_enable = 0;
  reg1.dco_input = dco;
  reg1.clock_out_divider = div;
  hal_fll_conf_reg1_set(fll, reg1.raw);

  /* We are in open loop, prime the fll forcing dco input, approx 70 MHz */
  // fll_reg_integrator_t reg_int = { .raw = hal_fll_integrator_get(fll) };
  // reg_int.state_int_part = dco;
  // reg_int.state_fract_part = 0x264;
  // hal_fll_integrator_set(fll, reg_int.raw);

  /* Lock Fll */
  reg1.output_lock_enable = 1;
  reg1.mode = 0;
  hal_fll_conf_reg1_set(fll, reg1.raw);

  return 0;
}


unsigned int check_register(int fll, testresult_t *result)
{
  unsigned int freq;

  fll_reg_conf1_t reg1 = { .raw = hal_fll_conf_reg1_get(fll) };
  fll_reg_conf2_t reg2 = { .raw = hal_fll_conf_reg2_get(fll) };
  fll_reg_integrator_t reg_int = { .raw = hal_fll_integrator_get(fll) };

  reg1.mode = 0x1;
  reg1.output_lock_enable = 0x0;
  reg1.clock_out_divider = 0x4;
  reg1.dco_input = 0x039;
  reg1.mult_factor = 0x0025;
  hal_fll_conf_reg1_set(fll, reg1.raw);

  reg2.loop_gain = 0x7;
  reg2.de_assert_cycles = 0x06;
  reg2.assert_cycles = 0x10;
  reg2.lock_tolerance = 0x50;
  reg2.config_clock_sel = 0x0;
  reg2.open_loop = 0x0;
  reg2.dithering = 0x0;
  hal_fll_conf_reg2_set(fll, reg2.raw);

  reg_int.state_int_part = 0x0;
  reg_int.state_fract_part = 0x0;
  hal_fll_integrator_set(fll, reg_int.raw);

  fll_reg_conf1_t reg1_b = { .raw = hal_fll_conf_reg1_get(fll) };

  if (reg1_b.raw != reg1.raw) {
		printf("\nERROR: Reg_1 value is wrong!!! \n");
    printf("Mode is: %x , expected %x \n", reg1_b.mode, reg1.mode);
    printf("Output_lock_enable is: %x , expected %x  \n", reg1_b.output_lock_enable, reg1.output_lock_enable);
    printf("Clock_out_divider is: %x , expected %x  \n", reg1_b.clock_out_divider, reg1.clock_out_divider);
    printf("DCO_input is: %x , expected %x  \n", reg1_b.dco_input, reg1.dco_input);
    printf("Mult_factor is: %x , expected %x  \n", reg1_b.mult_factor, reg1.mult_factor);
		result->errors++;
	} else {
    printf("\nReg_1 value is correct! \n");
    printf("Mode is: %x \n", reg1_b.mode);
    printf("Output_lock_enable is: %x \n", reg1_b.output_lock_enable);
    printf("Clock_out_divider is: %x \n", reg1_b.clock_out_divider);
    printf("DCO_input is: %x \n", reg1_b.dco_input);
    printf("Mult_factor is: %x \n", reg1_b.mult_factor);
  }

  fll_reg_conf2_t reg2_b = { .raw = hal_fll_conf_reg2_get(fll) };

  if (reg2.raw != reg2_b.raw) {
    printf("\nERROR: Reg_2 value is wrong!!! \n");
    printf("Loop_gain is: %x , expected %x \n", reg2_b.loop_gain, reg2.loop_gain);
    printf("de_assert_cycles is: %x , expected %x  \n", reg2_b.de_assert_cycles, reg2.de_assert_cycles);
    printf("Assert_cycles is: %x , expected %x  \n", reg2_b.assert_cycles, reg2.assert_cycles);
    printf("Lock_tolerance is: %x , expected %x  \n", reg2_b.lock_tolerance, reg2.lock_tolerance);
    printf("Config_clock_sel is: %x , expected %x  \n", reg2_b.config_clock_sel, reg2.config_clock_sel);
    printf("Open_loop is: %x , expected %x  \n", reg2_b.open_loop, reg2.open_loop);
    printf("Dithering is: %x , expected %x  \n", reg2_b.dithering, reg2.dithering);
		result->errors++;
	} else {
    printf("\nReg_1 value is correct! \n");
    printf("Loop_gain is: %x \n", reg2_b.loop_gain);
    printf("de_assert_cycles is: %x  \n", reg2_b.de_assert_cycles);
    printf("Assert_cycles is: %x  \n", reg2_b.assert_cycles);
    printf("Lock_tolerance is: %x  \n", reg2_b.lock_tolerance);
    printf("Config_clock_sel is: %x \n", reg2_b.config_clock_sel);
    printf("Open_loop is: %x \n", reg2_b.open_loop);
    printf("Dithering is: %x \n", reg2_b.dithering);
  }

  fll_reg_integrator_t reg_int_b = { .raw = hal_fll_integrator_get(fll) };

  if (reg_int.raw != reg_int_b.raw) {
		printf("\nERROR: Int_reg value is wrong!!! \n");
    printf("State_int_part is: %x , expected %x \n", reg_int_b.state_int_part, reg_int.state_int_part);
    printf("State_fract_part is: %x , expected %x \n", reg_int_b.state_fract_part, reg_int.state_fract_part);
		result->errors++;
	} else {
    printf("\nInt_reg value is correct! \n");
    printf("State_int_part is: %x \n", reg_int_b.state_int_part);
    printf("State_fract_part is: %x \n", reg_int_b.state_fract_part);
  }

  fll_reg_status_t reg_status = { .raw = hal_fll_status_reg_get(fll) };
  printf("\nStatus_reg is: %x \n", reg_status.raw);
}

unsigned int check_register_default_values(int fll, testresult_t *result)
{
  fll_reg_conf1_t reg1 = { .raw = hal_fll_conf_reg1_get(fll) };

  if (reg1.raw != cfg_reg_default) {
		printf("\nERROR: Reg_1 value is wrong!!! \n");
    printf("Mode is: %x , expected %x \n", reg1.mode, 0x0);
    printf("Output_lock_enable is: %x , expected %x  \n", reg1.output_lock_enable, 0x1);
    printf("Clock_out_divider is: %x , expected %x  \n", reg1.clock_out_divider, 0x1);
    printf("DCO_input is: %x , expected %x  \n", reg1.dco_input, 0x88);
    printf("Mult_factor is: %x , expected %x  \n", reg1.mult_factor, 0x5F5);
		result->errors++;
	} else {
    printf("\nReg_1 value is correct! \n");
    printf("Mode is: %x \n", reg1.mode);
    printf("Output_lock_enable is: %x \n", reg1.output_lock_enable);
    printf("Clock_out_divider is: %x \n", reg1.clock_out_divider);
    printf("DCO_input is: %x \n", reg1.dco_input);
    printf("Mult_factor is: %x \n", reg1.mult_factor);
  }
  
  fll_reg_conf2_t reg2 = { .raw = hal_fll_conf_reg2_get(fll) };

  if (reg2.raw != cfg2_reg_default) {
    printf("\nERROR: Reg_2 value is wrong!!! \n");
    printf("Loop_gain is: %x , expected %x \n", reg2.loop_gain, 0x7);
    printf("de_assert_cycles is: %x , expected %x  \n", reg2.de_assert_cycles, 0x10);
    printf("Assert_cycles is: %x , expected %x  \n", reg2.assert_cycles, 0x10);
    printf("Lock_tolerance is: %x , expected %x  \n", reg2.lock_tolerance, 0x200);
    printf("Config_clock_sel is: %x , expected %x  \n", reg2.config_clock_sel, 0x0);
    printf("Open_loop is: %x , expected %x  \n", reg2.open_loop, 0x0);
    printf("Dithering is: %x , expected %x  \n", reg2.dithering, 0x0);
		result->errors++;
	} else {
    printf("\nReg_1 value is correct! \n");
    printf("Loop_gain is: %x \n", reg2.loop_gain);
    printf("de_assert_cycles is: %x  \n", reg2.de_assert_cycles);
    printf("Assert_cycles is: %x  \n", reg2.assert_cycles);
    printf("Lock_tolerance is: %x  \n", reg2.lock_tolerance);
    printf("Config_clock_sel is: %x \n", reg2.config_clock_sel);
    printf("Open_loop is: %x \n", reg2.open_loop);
    printf("Dithering is: %x \n", reg2.dithering);
  }

  fll_reg_integrator_t reg_int = { .raw = hal_fll_integrator_get(fll) };

  if (reg_int.raw != integr_reg_default) {
		printf("\nERROR: Int_reg value is wrong!!! \n");
    printf("State_int_part is: %x , expected %x \n", reg_int.state_int_part, 0x88);
    printf("State_fract_part is: %x , expected %x \n", reg_int.state_fract_part, 0x0);
		result->errors++;
	} else {
    printf("\nInt_reg value is correct! \n");
    printf("State_int_part is: %x \n", reg_int.state_int_part);
    printf("State_fract_part is: %x \n", reg_int.state_fract_part);
  }

  fll_reg_status_t reg_status = { .raw = hal_fll_status_reg_get(fll) };
  printf("\nStatus_reg is: %x \n", reg_status.raw);
}

#endif
