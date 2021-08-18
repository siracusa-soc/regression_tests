
#ifndef SIRACUSA_PADS_H
#define SIRACUSA_PADS_H
#include <stdint.h>

#ifndef SIRACUSA_PADS_BASE_ADDRESS
#error "SIRACUSA_PADS_BASE_ADDRESS is not defined. Set this token to the configuration base address of your padframe before you include this header file."
#endif



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio00
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio00
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio00
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio00
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio00
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio00
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio00
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio00
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio00
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio00
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio00_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio00
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio00_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_GPIO_port_GPIO00 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO00_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio00_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio00.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio00_mux_set(siracusa_pads_functional_pad_gpio00_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio00.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio00_mux_sel_t siracusa_pads_functional_pad_gpio00_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio01
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio01
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio01
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio01
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio01
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio01
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio01
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio01
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio01
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio01
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio01_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio01
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio01_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_GPIO_port_GPIO01 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO01_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio01_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio01.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio01_mux_set(siracusa_pads_functional_pad_gpio01_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio01.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio01_mux_sel_t siracusa_pads_functional_pad_gpio01_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio02
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio02
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio02
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio02
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio02
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio02
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio02
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio02
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio02
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio02
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio02_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio02
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio02_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_GPIO_port_GPIO02 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO02_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio02_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio02.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio02_mux_set(siracusa_pads_functional_pad_gpio02_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio02.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio02_mux_sel_t siracusa_pads_functional_pad_gpio02_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio03
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio03
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio03
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio03
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio03
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio03
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio03
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio03
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio03
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio03
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio03_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio03
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio03_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_GPIO_port_GPIO03 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO03_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio03_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio03.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio03_mux_set(siracusa_pads_functional_pad_gpio03_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio03.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio03_mux_sel_t siracusa_pads_functional_pad_gpio03_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio04
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio04
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio04
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio04
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio04
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio04
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio04
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio04
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio04
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio04
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio04_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio04
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio04_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_GPIO_port_GPIO04 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO04_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio04_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio04.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio04_mux_set(siracusa_pads_functional_pad_gpio04_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio04.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio04_mux_sel_t siracusa_pads_functional_pad_gpio04_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio05
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio05
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio05
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio05
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio05
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio05
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio05
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio05
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio05
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio05
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio05_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio05
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio05_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_GPIO_port_GPIO05 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO05_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio05_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio05.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio05_mux_set(siracusa_pads_functional_pad_gpio05_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio05.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio05_mux_sel_t siracusa_pads_functional_pad_gpio05_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio06
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio06
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio06
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio06
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio06
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio06
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio06
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio06
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio06
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio06
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio06_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio06
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio06_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_GPIO_port_GPIO06 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO06_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio06_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio06.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio06_mux_set(siracusa_pads_functional_pad_gpio06_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio06.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio06_mux_sel_t siracusa_pads_functional_pad_gpio06_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio07
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio07
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio07
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio07
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio07
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio07
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio07
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio07
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio07
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio07
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio07_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio07
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio07_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_GPIO_port_GPIO07 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO07_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio07_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio07.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio07_mux_set(siracusa_pads_functional_pad_gpio07_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio07.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio07_mux_sel_t siracusa_pads_functional_pad_gpio07_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio08
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio08
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio08
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio08
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio08
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio08
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio08
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio08
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio08
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio08
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio08_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio08
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio08_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_GPIO_port_GPIO08 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO08_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio08_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio08.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio08_mux_set(siracusa_pads_functional_pad_gpio08_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio08.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio08_mux_sel_t siracusa_pads_functional_pad_gpio08_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio09
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio09
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio09
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio09
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio09
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio09
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio09
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio09
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio09
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio09
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio09_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio09
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio09_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_GPIO_port_GPIO09 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO09_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio09_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio09.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio09_mux_set(siracusa_pads_functional_pad_gpio09_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio09.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio09_mux_sel_t siracusa_pads_functional_pad_gpio09_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio10
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio10
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio10
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio10
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio10
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio10
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio10
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio10
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio10
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio10
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio10_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio10
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio10_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_GPIO_port_GPIO10 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO10_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio10_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio10.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio10_mux_set(siracusa_pads_functional_pad_gpio10_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio10.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio10_mux_sel_t siracusa_pads_functional_pad_gpio10_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio11
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio11
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio11
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio11
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio11
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio11
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio11
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio11
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio11
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio11
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio11_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio11
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio11_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_GPIO_port_GPIO11 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO11_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio11_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio11.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio11_mux_set(siracusa_pads_functional_pad_gpio11_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio11.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio11_mux_sel_t siracusa_pads_functional_pad_gpio11_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio12
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio12
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio12
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio12
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio12
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio12
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio12
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio12
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio12
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio12
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio12_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio12
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio12_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_GPIO_port_GPIO12 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO12_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio12_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio12.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio12_mux_set(siracusa_pads_functional_pad_gpio12_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio12.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio12_mux_sel_t siracusa_pads_functional_pad_gpio12_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio13
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio13
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio13
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio13
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio13
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio13
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio13
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio13
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio13
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio13
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio13_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio13
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio13_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_GPIO_port_GPIO13 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO13_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio13_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio13.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio13_mux_set(siracusa_pads_functional_pad_gpio13_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio13.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio13_mux_sel_t siracusa_pads_functional_pad_gpio13_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio14
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio14
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio14
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio14
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio14
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio14
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio14
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio14
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio14
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio14
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio14_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio14
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio14_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_GPIO_port_GPIO14 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO14_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio14_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio14.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio14_mux_set(siracusa_pads_functional_pad_gpio14_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio14.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio14_mux_sel_t siracusa_pads_functional_pad_gpio14_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio15
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio15
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio15
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio15
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio15
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio15
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio15
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio15
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio15
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio15
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio15_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio15
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio15_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_GPIO_port_GPIO15 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO15_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio15_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio15.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio15_mux_set(siracusa_pads_functional_pad_gpio15_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio15.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio15_mux_sel_t siracusa_pads_functional_pad_gpio15_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio16
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio16
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio16
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio16
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio16
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio16
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio16
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio16
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio16
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio16
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio16_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio16
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio16_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_GPIO_port_GPIO16 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO16_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio16_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio16.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio16_mux_set(siracusa_pads_functional_pad_gpio16_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio16.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio16_mux_sel_t siracusa_pads_functional_pad_gpio16_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio17
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio17
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio17
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio17
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio17
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio17
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio17
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio17
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio17
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio17
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio17_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio17
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio17_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_GPIO_port_GPIO17 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO17_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio17_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio17.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio17_mux_set(siracusa_pads_functional_pad_gpio17_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio17.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio17_mux_sel_t siracusa_pads_functional_pad_gpio17_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio18
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio18
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio18
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio18
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio18
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio18
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio18
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio18
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio18
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio18
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio18_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio18
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio18_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_GPIO_port_GPIO18 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO18_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio18_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio18.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio18_mux_set(siracusa_pads_functional_pad_gpio18_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio18.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio18_mux_sel_t siracusa_pads_functional_pad_gpio18_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio19
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio19
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio19
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio19
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio19
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio19
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio19
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio19
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio19
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio19
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio19_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio19
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio19_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_GPIO_port_GPIO19 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO19_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio19_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio19.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio19_mux_set(siracusa_pads_functional_pad_gpio19_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio19.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio19_mux_sel_t siracusa_pads_functional_pad_gpio19_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio20
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio20
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio20
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio20
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio20
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio20
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio20
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio20
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio20
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio20
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio20_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio20
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio20_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_GPIO_port_GPIO20 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO20_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio20_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio20.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio20_mux_set(siracusa_pads_functional_pad_gpio20_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio20.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio20_mux_sel_t siracusa_pads_functional_pad_gpio20_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio21
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio21
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio21
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio21
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio21
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio21
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio21
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio21
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio21
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio21
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio21_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio21
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio21_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_GPIO_port_GPIO21 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO21_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio21_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio21.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio21_mux_set(siracusa_pads_functional_pad_gpio21_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio21.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio21_mux_sel_t siracusa_pads_functional_pad_gpio21_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio22
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio22
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio22
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio22
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio22
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio22
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio22
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio22
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio22
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio22
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio22_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio22
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio22_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_GPIO_port_GPIO22 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO22_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio22_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio22.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio22_mux_set(siracusa_pads_functional_pad_gpio22_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio22.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio22_mux_sel_t siracusa_pads_functional_pad_gpio22_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio23
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio23
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio23
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio23
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio23
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio23
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio23
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio23
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio23
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio23
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio23_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio23
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio23_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_GPIO_port_GPIO23 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO23_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio23_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio23.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio23_mux_set(siracusa_pads_functional_pad_gpio23_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio23.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio23_mux_sel_t siracusa_pads_functional_pad_gpio23_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio24
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio24
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio24
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio24
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio24
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio24
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio24
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio24
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio24
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio24
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio24_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio24
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio24_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_GPIO_port_GPIO24 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO24_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio24_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio24.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio24_mux_set(siracusa_pads_functional_pad_gpio24_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio24.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio24_mux_sel_t siracusa_pads_functional_pad_gpio24_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio25
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio25
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio25
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio25
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio25
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio25
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio25
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio25
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio25
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio25
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio25_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio25
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio25_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_GPIO_port_GPIO25 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO25_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio25_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio25.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio25_mux_set(siracusa_pads_functional_pad_gpio25_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio25.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio25_mux_sel_t siracusa_pads_functional_pad_gpio25_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio26
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio26
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio26
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio26
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio26
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio26
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio26
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio26
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio26
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio26
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio26_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio26
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio26_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_GPIO_port_GPIO26 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO26_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio26_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio26.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio26_mux_set(siracusa_pads_functional_pad_gpio26_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio26.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio26_mux_sel_t siracusa_pads_functional_pad_gpio26_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio27
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio27
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio27
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio27
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio27
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio27
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio27
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio27
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio27
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio27
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio27_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio27
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio27_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_GPIO_port_GPIO27 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO27_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio27_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio27.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio27_mux_set(siracusa_pads_functional_pad_gpio27_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio27.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio27_mux_sel_t siracusa_pads_functional_pad_gpio27_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio28
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio28
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio28
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio28
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio28
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio28
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio28
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio28
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio28
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio28
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio28_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio28
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio28_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_GPIO_port_GPIO28 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO28_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio28_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio28.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio28_mux_set(siracusa_pads_functional_pad_gpio28_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio28.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio28_mux_sel_t siracusa_pads_functional_pad_gpio28_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio29
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio29
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio29
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio29
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio29
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio29
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio29
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio29
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio29
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio29
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio29_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio29
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio29_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_GPIO_port_GPIO29 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO29_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio29_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio29.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio29_mux_set(siracusa_pads_functional_pad_gpio29_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio29.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio29_mux_sel_t siracusa_pads_functional_pad_gpio29_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio30
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio30
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio30
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio30
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio30
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio30
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio30
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio30
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio30
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio30
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio30_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio30
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio30_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_GPIO_port_GPIO30 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO30_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio30_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio30.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio30_mux_set(siracusa_pads_functional_pad_gpio30_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio30.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio30_mux_sel_t siracusa_pads_functional_pad_gpio30_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio31
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio31
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio31
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio31
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio31
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio31
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio31
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio31
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio31
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio31
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio31_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio31
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio31_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_GPIO_port_GPIO31 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO31_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio31_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio31.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio31_mux_set(siracusa_pads_functional_pad_gpio31_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio31.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio31_mux_sel_t siracusa_pads_functional_pad_gpio31_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio32
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio32
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio32
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio32
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio32
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio32
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio32
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio32
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio32
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio32
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio32_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio32
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio32_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_GPIO_port_GPIO32 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO32_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio32_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio32.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio32_mux_set(siracusa_pads_functional_pad_gpio32_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio32.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio32_mux_sel_t siracusa_pads_functional_pad_gpio32_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio33
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio33
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio33
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio33
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio33
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio33
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio33
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio33
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio33
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio33
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio33_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio33
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio33_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_GPIO_port_GPIO33 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO33_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio33_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio33.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio33_mux_set(siracusa_pads_functional_pad_gpio33_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio33.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio33_mux_sel_t siracusa_pads_functional_pad_gpio33_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio34
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio34
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio34
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio34
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio34
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio34
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio34
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio34
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio34
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio34
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio34_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio34
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio34_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_GPIO_port_GPIO34 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO34_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio34_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio34.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio34_mux_set(siracusa_pads_functional_pad_gpio34_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio34.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio34_mux_sel_t siracusa_pads_functional_pad_gpio34_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio35
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio35
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio35
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio35
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio35
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio35
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio35
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio35
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio35
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio35
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio35_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio35
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio35_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_GPIO_port_GPIO35 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO35_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio35_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio35.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio35_mux_set(siracusa_pads_functional_pad_gpio35_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio35.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio35_mux_sel_t siracusa_pads_functional_pad_gpio35_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio36
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio36
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio36
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio36
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio36
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio36
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio36
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio36
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio36
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio36
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio36_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio36
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio36_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_GPIO_port_GPIO36 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO36_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio36_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio36.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio36_mux_set(siracusa_pads_functional_pad_gpio36_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio36.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio36_mux_sel_t siracusa_pads_functional_pad_gpio36_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio37
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio37
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio37
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio37
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio37
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio37
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio37
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio37
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio37
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio37
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio37_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio37
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio37_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_GPIO_port_GPIO37 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO37_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio37_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio37.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio37_mux_set(siracusa_pads_functional_pad_gpio37_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio37.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio37_mux_sel_t siracusa_pads_functional_pad_gpio37_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio38
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio38
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio38
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio38
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio38
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio38
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio38
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio38
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio38
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio38
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio38_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio38
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio38_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_GPIO_port_GPIO38 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO38_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio38_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio38.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio38_mux_set(siracusa_pads_functional_pad_gpio38_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio38.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio38_mux_sel_t siracusa_pads_functional_pad_gpio38_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio39
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio39
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio39
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio39
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio39
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio39
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio39
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio39
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio39
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio39
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio39_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio39
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio39_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_GPIO_port_GPIO39 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO39_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio39_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio39.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio39_mux_set(siracusa_pads_functional_pad_gpio39_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio39.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio39_mux_sel_t siracusa_pads_functional_pad_gpio39_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio40
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio40
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio40
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio40
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio40
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio40
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio40
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio40
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio40
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio40
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio40_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio40
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio40_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_GPIO_port_GPIO40 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO40_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio40_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio40.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio40_mux_set(siracusa_pads_functional_pad_gpio40_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio40.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio40_mux_sel_t siracusa_pads_functional_pad_gpio40_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio41
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio41
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio41
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio41
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio41
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio41
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio41
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio41
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio41
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio41
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio41_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio41
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio41_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_GPIO_port_GPIO41 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO41_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio41_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio41.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio41_mux_set(siracusa_pads_functional_pad_gpio41_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio41.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio41_mux_sel_t siracusa_pads_functional_pad_gpio41_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio42
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio42
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio42
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio42
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio42
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio42
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio42
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio42
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio42
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio42
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio42_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio42
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio42_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_GPIO_port_GPIO42 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO42_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio42_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio42.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio42_mux_set(siracusa_pads_functional_pad_gpio42_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio42.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio42_mux_sel_t siracusa_pads_functional_pad_gpio42_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio43
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio43
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio43
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio43
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio43
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio43
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio43
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio43
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio43
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio43
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio43_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio43
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio43_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_GPIO_port_GPIO43 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO43_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio43_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio43.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio43_mux_set(siracusa_pads_functional_pad_gpio43_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio43.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio43_mux_sel_t siracusa_pads_functional_pad_gpio43_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio44
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio44
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio44
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio44
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio44
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio44
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio44
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio44
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio44
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio44
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio44_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio44
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio44_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_GPIO_port_GPIO44 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO44_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio44_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio44.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio44_mux_set(siracusa_pads_functional_pad_gpio44_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio44.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio44_mux_sel_t siracusa_pads_functional_pad_gpio44_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio45
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio45
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio45
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio45
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio45
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio45
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio45
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio45
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio45
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio45
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio45_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio45
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio45_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_GPIO_port_GPIO45 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO45_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio45_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio45.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio45_mux_set(siracusa_pads_functional_pad_gpio45_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio45.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio45_mux_sel_t siracusa_pads_functional_pad_gpio45_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio46
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio46
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio46
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio46
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio46
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio46
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio46
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio46
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio46
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio46
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio46_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio46
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio46_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_GPIO_port_GPIO46 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO46_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio46_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio46.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio46_mux_set(siracusa_pads_functional_pad_gpio46_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio46.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio46_mux_sel_t siracusa_pads_functional_pad_gpio46_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio47
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio47
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio47
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio47
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio47
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio47
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio47
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio47
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio47
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio47
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio47_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio47
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio47_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_GPIO_port_GPIO47 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO47_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio47_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio47.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio47_mux_set(siracusa_pads_functional_pad_gpio47_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio47.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio47_mux_sel_t siracusa_pads_functional_pad_gpio47_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio48
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio48
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio48
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio48
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio48
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio48
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio48
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio48
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio48
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio48
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio48_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio48
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio48_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_GPIO_port_GPIO48 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO48_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio48_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio48.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio48_mux_set(siracusa_pads_functional_pad_gpio48_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio48.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio48_mux_sel_t siracusa_pads_functional_pad_gpio48_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio49
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio49
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio49
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio49
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio49
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio49
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio49
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio49
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio49
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio49
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio49_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio49
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio49_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_GPIO_port_GPIO49 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO49_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio49_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio49.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio49_mux_set(siracusa_pads_functional_pad_gpio49_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio49.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio49_mux_sel_t siracusa_pads_functional_pad_gpio49_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio50
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio50
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio50
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio50
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio50
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio50
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio50
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio50
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio50
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio50
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio50_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio50
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio50_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_GPIO_port_GPIO50 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO50_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio50_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio50.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio50_mux_set(siracusa_pads_functional_pad_gpio50_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio50.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio50_mux_sel_t siracusa_pads_functional_pad_gpio50_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio51
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio51
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio51
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio51
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio51
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio51
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio51
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio51
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio51
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio51
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio51_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio51
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio51_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_GPIO_port_GPIO51 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO51_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio51_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio51.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio51_mux_set(siracusa_pads_functional_pad_gpio51_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio51.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio51_mux_sel_t siracusa_pads_functional_pad_gpio51_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio52
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio52
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio52
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio52
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio52
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio52
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio52
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio52
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio52
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio52
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio52_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio52
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio52_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_GPIO_port_GPIO52 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO52_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio52_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio52.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio52_mux_set(siracusa_pads_functional_pad_gpio52_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio52.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio52_mux_sel_t siracusa_pads_functional_pad_gpio52_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio53
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio53
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio53
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio53
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio53
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio53
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio53
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio53
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio53
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio53
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio53_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio53
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio53_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_GPIO_port_GPIO53 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO53_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio53_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio53.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio53_mux_set(siracusa_pads_functional_pad_gpio53_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio53.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio53_mux_sel_t siracusa_pads_functional_pad_gpio53_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio54
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio54
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio54
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio54
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio54
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio54
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio54
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio54
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio54
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio54
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio54_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio54
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio54_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_GPIO_port_GPIO54 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO54_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio54_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio54.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio54_mux_set(siracusa_pads_functional_pad_gpio54_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio54.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio54_mux_sel_t siracusa_pads_functional_pad_gpio54_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio55
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio55
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio55
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio55
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio55
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio55
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio55
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio55
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio55
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio55
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_functional_pad_gpio55_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio55
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_functional_pad_gpio55_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_REGISTER = 0,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_DATA0 = 1,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_DATA1 = 2,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_DATA2 = 3,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_DATA3 = 4,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_DATA4 = 5,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_DATA5 = 6,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_DATA6 = 7,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_DATA7 = 8,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_DATA8 = 9,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_DATA9 = 10,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_HSYNC = 11,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_PCLK = 12,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_CPI0_port_VSYNC = 13,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_GPIO_port_GPIO55 = 14,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_I2C0_port_SCL = 15,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_I2C0_port_SDA = 16,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_I3C0_port_PUC = 17,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_I3C0_port_SCL = 18,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_I3C0_port_SDA = 19,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_I3C1_port_PUC = 20,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_I3C1_port_SCL = 21,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_I3C1_port_SDA = 22,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIM0_port_CSN0 = 23,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIM0_port_CSN1 = 24,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIM0_port_CSN2 = 25,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIM0_port_CSN3 = 26,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIM0_port_SCK = 27,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIM0_port_SDIO0 = 28,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIM0_port_SDIO1 = 29,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIM0_port_SDIO2 = 30,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIM0_port_SDIO3 = 31,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIS0_port_CSN = 32,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIS0_port_SCK = 33,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIS0_port_SDIO0 = 34,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIS0_port_SDIO1 = 35,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIS0_port_SDIO2 = 36,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_QSPIS0_port_SDIO3 = 37,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_UART0_port_RX = 38,
  SIRACUSA_PADS_FUNCTIONAL_PAD_GPIO55_group_UART0_port_TX = 39,
} siracusa_pads_functional_pad_gpio55_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio55.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_functional_pad_gpio55_mux_set(siracusa_pads_functional_pad_gpio55_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio55.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_functional_pad_gpio55_mux_sel_t siracusa_pads_functional_pad_gpio55_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio00
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio00
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio00
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio00
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio00
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio00
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio00
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio00
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio00
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio00
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio00
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio00_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio00
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio00_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_group_MRAM_DEBUG_port_BANK0_BIST_RUN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_group_MRAM_DEBUG_port_BANK1_BIST_RUN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_group_MRAM_DEBUG_port_BANK2_BIST_RUN = 3,
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_group_MRAM_DEBUG_port_BANK3_BIST_RUN = 4,
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_group_MRAM_DEBUG_port_BANK4_BIST_RUN = 5,
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_group_MRAM_DEBUG_port_BANK5_BIST_RUN = 6,
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_group_MRAM_DEBUG_port_BANK6_BIST_RUN = 7,
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_group_MRAM_DEBUG_port_BANK7_BIST_RUN = 8,
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_group_OBSERVABLES_port_S_CLUSTER_RSTN = 9,
  SIRACUSA_PADS_DEBUG_PAD_GPIO00_group_OBSERVABLES_port_S_SOC_RSTN = 10,
} siracusa_pads_debug_pad_gpio00_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio00.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio00_mux_set(siracusa_pads_debug_pad_gpio00_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio00.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio00_mux_sel_t siracusa_pads_debug_pad_gpio00_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio01
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio01
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio01
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio01
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio01
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio01
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio01
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio01
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio01
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio01
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio01
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio01_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio01
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio01_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_group_MRAM_DEBUG_port_BANK0_BIST_DONE = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_group_MRAM_DEBUG_port_BANK1_BIST_DONE = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_group_MRAM_DEBUG_port_BANK2_BIST_DONE = 3,
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_group_MRAM_DEBUG_port_BANK3_BIST_DONE = 4,
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_group_MRAM_DEBUG_port_BANK4_BIST_DONE = 5,
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_group_MRAM_DEBUG_port_BANK5_BIST_DONE = 6,
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_group_MRAM_DEBUG_port_BANK6_BIST_DONE = 7,
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_group_MRAM_DEBUG_port_BANK7_BIST_DONE = 8,
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_group_OBSERVABLES_port_S_CLUSTER_RSTN = 9,
  SIRACUSA_PADS_DEBUG_PAD_GPIO01_group_OBSERVABLES_port_S_SOC_RSTN = 10,
} siracusa_pads_debug_pad_gpio01_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio01.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio01_mux_set(siracusa_pads_debug_pad_gpio01_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio01.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio01_mux_sel_t siracusa_pads_debug_pad_gpio01_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio02
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio02
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio02
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio02
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio02
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio02
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio02
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio02
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio02
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio02
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio02
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio02_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio02
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio02_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_group_MRAM_DEBUG_port_BANK0_BIST_FAIL = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_group_MRAM_DEBUG_port_BANK1_BIST_FAIL = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_group_MRAM_DEBUG_port_BANK2_BIST_FAIL = 3,
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_group_MRAM_DEBUG_port_BANK3_BIST_FAIL = 4,
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_group_MRAM_DEBUG_port_BANK4_BIST_FAIL = 5,
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_group_MRAM_DEBUG_port_BANK5_BIST_FAIL = 6,
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_group_MRAM_DEBUG_port_BANK6_BIST_FAIL = 7,
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_group_MRAM_DEBUG_port_BANK7_BIST_FAIL = 8,
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_group_OBSERVABLES_port_S_CLUSTER_RSTN = 9,
  SIRACUSA_PADS_DEBUG_PAD_GPIO02_group_OBSERVABLES_port_S_SOC_RSTN = 10,
} siracusa_pads_debug_pad_gpio02_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio02.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio02_mux_set(siracusa_pads_debug_pad_gpio02_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio02.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio02_mux_sel_t siracusa_pads_debug_pad_gpio02_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio03
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio03
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio03
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio03
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio03
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio03
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio03
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio03
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio03
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio03
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio03
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio03_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio03
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio03_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO03_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO03_group_MRAM_DEBUG_port_MDC = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO03_group_OBSERVABLES_port_S_CLUSTER_RSTN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO03_group_OBSERVABLES_port_S_SOC_RSTN = 3,
} siracusa_pads_debug_pad_gpio03_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio03.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio03_mux_set(siracusa_pads_debug_pad_gpio03_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio03.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio03_mux_sel_t siracusa_pads_debug_pad_gpio03_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio04
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio04
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio04
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio04
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio04
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio04
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio04
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio04
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio04
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio04
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio04
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio04_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio04
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio04_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO04_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO04_group_MRAM_DEBUG_port_MDIN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO04_group_OBSERVABLES_port_S_CLUSTER_RSTN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO04_group_OBSERVABLES_port_S_SOC_RSTN = 3,
} siracusa_pads_debug_pad_gpio04_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio04.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio04_mux_set(siracusa_pads_debug_pad_gpio04_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio04.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio04_mux_sel_t siracusa_pads_debug_pad_gpio04_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio05
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio05
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio05
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio05
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio05
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio05
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio05
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio05
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio05
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio05
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio05
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio05_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio05
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio05_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO05_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO05_group_MRAM_DEBUG_port_MDOUT = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO05_group_OBSERVABLES_port_S_CLUSTER_RSTN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO05_group_OBSERVABLES_port_S_SOC_RSTN = 3,
} siracusa_pads_debug_pad_gpio05_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio05.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio05_mux_set(siracusa_pads_debug_pad_gpio05_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio05.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio05_mux_sel_t siracusa_pads_debug_pad_gpio05_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio06
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio06
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio06
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio06
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio06
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio06
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio06
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio06
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio06
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio06
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio06
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio06_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio06
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio06_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_group_MRAM_DEBUG_port_BANK0_SE = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_group_MRAM_DEBUG_port_BANK1_SE = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_group_MRAM_DEBUG_port_BANK2_SE = 3,
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_group_MRAM_DEBUG_port_BANK3_SE = 4,
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_group_MRAM_DEBUG_port_BANK4_SE = 5,
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_group_MRAM_DEBUG_port_BANK5_SE = 6,
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_group_MRAM_DEBUG_port_BANK6_SE = 7,
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_group_MRAM_DEBUG_port_BANK7_SE = 8,
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_group_OBSERVABLES_port_S_CLUSTER_RSTN = 9,
  SIRACUSA_PADS_DEBUG_PAD_GPIO06_group_OBSERVABLES_port_S_SOC_RSTN = 10,
} siracusa_pads_debug_pad_gpio06_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio06.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio06_mux_set(siracusa_pads_debug_pad_gpio06_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio06.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio06_mux_sel_t siracusa_pads_debug_pad_gpio06_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio07
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio07
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio07
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio07
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio07
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio07
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio07
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio07
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio07
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio07
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio07
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio07_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio07
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio07_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_group_MRAM_DEBUG_port_BANK0_SI = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_group_MRAM_DEBUG_port_BANK1_SI = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_group_MRAM_DEBUG_port_BANK2_SI = 3,
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_group_MRAM_DEBUG_port_BANK3_SI = 4,
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_group_MRAM_DEBUG_port_BANK4_SI = 5,
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_group_MRAM_DEBUG_port_BANK5_SI = 6,
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_group_MRAM_DEBUG_port_BANK6_SI = 7,
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_group_MRAM_DEBUG_port_BANK7_SI = 8,
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_group_OBSERVABLES_port_S_CLUSTER_RSTN = 9,
  SIRACUSA_PADS_DEBUG_PAD_GPIO07_group_OBSERVABLES_port_S_SOC_RSTN = 10,
} siracusa_pads_debug_pad_gpio07_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio07.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio07_mux_set(siracusa_pads_debug_pad_gpio07_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio07.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio07_mux_sel_t siracusa_pads_debug_pad_gpio07_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio08
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio08
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio08
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio08
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio08
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio08
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio08
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio08
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio08
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio08
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio08
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio08_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio08
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio08_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_group_MRAM_DEBUG_port_BANK0_SO = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_group_MRAM_DEBUG_port_BANK1_SO = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_group_MRAM_DEBUG_port_BANK2_SO = 3,
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_group_MRAM_DEBUG_port_BANK3_SO = 4,
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_group_MRAM_DEBUG_port_BANK4_SO = 5,
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_group_MRAM_DEBUG_port_BANK5_SO = 6,
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_group_MRAM_DEBUG_port_BANK6_SO = 7,
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_group_MRAM_DEBUG_port_BANK7_SO = 8,
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_group_OBSERVABLES_port_S_CLUSTER_RSTN = 9,
  SIRACUSA_PADS_DEBUG_PAD_GPIO08_group_OBSERVABLES_port_S_SOC_RSTN = 10,
} siracusa_pads_debug_pad_gpio08_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio08.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio08_mux_set(siracusa_pads_debug_pad_gpio08_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio08.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio08_mux_sel_t siracusa_pads_debug_pad_gpio08_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio09
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio09
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio09
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio09
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio09
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio09
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio09
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio09
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio09
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio09
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio09
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio09_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio09
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio09_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_group_MRAM_DEBUG_TM_SIGNALS_port_BANK0_TM2 = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_group_MRAM_DEBUG_TM_SIGNALS_port_BANK1_TM2 = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_group_MRAM_DEBUG_TM_SIGNALS_port_BANK2_TM2 = 3,
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_group_MRAM_DEBUG_TM_SIGNALS_port_BANK3_TM2 = 4,
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_group_MRAM_DEBUG_TM_SIGNALS_port_BANK4_TM2 = 5,
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_group_MRAM_DEBUG_TM_SIGNALS_port_BANK5_TM2 = 6,
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_group_MRAM_DEBUG_TM_SIGNALS_port_BANK6_TM2 = 7,
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_group_MRAM_DEBUG_TM_SIGNALS_port_BANK7_TM2 = 8,
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_group_OBSERVABLES_port_S_CLUSTER_RSTN = 9,
  SIRACUSA_PADS_DEBUG_PAD_GPIO09_group_OBSERVABLES_port_S_SOC_RSTN = 10,
} siracusa_pads_debug_pad_gpio09_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio09.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio09_mux_set(siracusa_pads_debug_pad_gpio09_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio09.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio09_mux_sel_t siracusa_pads_debug_pad_gpio09_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio10
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio10
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio10
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio10
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio10
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio10
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio10
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio10
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio10
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio10
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio10
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio10_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio10
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio10_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_group_MRAM_DEBUG_TM_SIGNALS_port_BANK0_TM1 = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_group_MRAM_DEBUG_TM_SIGNALS_port_BANK1_TM1 = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_group_MRAM_DEBUG_TM_SIGNALS_port_BANK2_TM1 = 3,
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_group_MRAM_DEBUG_TM_SIGNALS_port_BANK3_TM1 = 4,
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_group_MRAM_DEBUG_TM_SIGNALS_port_BANK4_TM1 = 5,
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_group_MRAM_DEBUG_TM_SIGNALS_port_BANK5_TM1 = 6,
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_group_MRAM_DEBUG_TM_SIGNALS_port_BANK6_TM1 = 7,
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_group_MRAM_DEBUG_TM_SIGNALS_port_BANK7_TM1 = 8,
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_group_OBSERVABLES_port_S_CLUSTER_RSTN = 9,
  SIRACUSA_PADS_DEBUG_PAD_GPIO10_group_OBSERVABLES_port_S_SOC_RSTN = 10,
} siracusa_pads_debug_pad_gpio10_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio10.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio10_mux_set(siracusa_pads_debug_pad_gpio10_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio10.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio10_mux_sel_t siracusa_pads_debug_pad_gpio10_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio11
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio11
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio11
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio11
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio11
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio11
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio11
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio11
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio11
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio11
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio11
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio11_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio11
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio11_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_group_MRAM_DEBUG_TM_SIGNALS_port_BANK0_TM0 = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_group_MRAM_DEBUG_TM_SIGNALS_port_BANK1_TM0 = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_group_MRAM_DEBUG_TM_SIGNALS_port_BANK2_TM0 = 3,
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_group_MRAM_DEBUG_TM_SIGNALS_port_BANK3_TM0 = 4,
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_group_MRAM_DEBUG_TM_SIGNALS_port_BANK4_TM0 = 5,
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_group_MRAM_DEBUG_TM_SIGNALS_port_BANK5_TM0 = 6,
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_group_MRAM_DEBUG_TM_SIGNALS_port_BANK6_TM0 = 7,
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_group_MRAM_DEBUG_TM_SIGNALS_port_BANK7_TM0 = 8,
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_group_OBSERVABLES_port_S_CLUSTER_RSTN = 9,
  SIRACUSA_PADS_DEBUG_PAD_GPIO11_group_OBSERVABLES_port_S_SOC_RSTN = 10,
} siracusa_pads_debug_pad_gpio11_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio11.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio11_mux_set(siracusa_pads_debug_pad_gpio11_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio11.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio11_mux_sel_t siracusa_pads_debug_pad_gpio11_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio12
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio12
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio12
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio12
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio12
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio12
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio12
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio12
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio12
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio12
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio12
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio12_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio12
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio12_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO12_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO12_group_CLOCKS_port_REF_CLK = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO12_group_OBSERVABLES_port_S_CLUSTER_RSTN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO12_group_OBSERVABLES_port_S_SOC_RSTN = 3,
} siracusa_pads_debug_pad_gpio12_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio12.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio12_mux_set(siracusa_pads_debug_pad_gpio12_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio12.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio12_mux_sel_t siracusa_pads_debug_pad_gpio12_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio13
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio13
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio13
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio13
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio13
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio13
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio13
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio13
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio13
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio13
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio13
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio13_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio13
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio13_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO13_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO13_group_CLOCKS_port_SOC_CLK = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO13_group_OBSERVABLES_port_S_CLUSTER_RSTN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO13_group_OBSERVABLES_port_S_SOC_RSTN = 3,
} siracusa_pads_debug_pad_gpio13_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio13.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio13_mux_set(siracusa_pads_debug_pad_gpio13_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio13.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio13_mux_sel_t siracusa_pads_debug_pad_gpio13_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio14
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio14
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio14
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio14
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio14
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio14
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio14
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio14
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio14
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio14
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio14
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio14_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio14
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio14_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO14_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO14_group_CLOCKS_port_SOC_CLK_BYPASS_EN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO14_group_OBSERVABLES_port_S_CLUSTER_RSTN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO14_group_OBSERVABLES_port_S_SOC_RSTN = 3,
} siracusa_pads_debug_pad_gpio14_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio14.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio14_mux_set(siracusa_pads_debug_pad_gpio14_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio14.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio14_mux_sel_t siracusa_pads_debug_pad_gpio14_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio15
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio15
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio15
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio15
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio15
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio15
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio15
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio15
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio15
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio15
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio15
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio15_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio15
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio15_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO15_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO15_group_CLOCKS_port_PER_CLK = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO15_group_OBSERVABLES_port_S_CLUSTER_RSTN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO15_group_OBSERVABLES_port_S_SOC_RSTN = 3,
} siracusa_pads_debug_pad_gpio15_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio15.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio15_mux_set(siracusa_pads_debug_pad_gpio15_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio15.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio15_mux_sel_t siracusa_pads_debug_pad_gpio15_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio16
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio16
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio16
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio16
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio16
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio16
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio16
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio16
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio16
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio16
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio16
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio16_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio16
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio16_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO16_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO16_group_CLOCKS_port_PER_CLK_BYPASS_EN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO16_group_OBSERVABLES_port_S_CLUSTER_RSTN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO16_group_OBSERVABLES_port_S_SOC_RSTN = 3,
} siracusa_pads_debug_pad_gpio16_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio16.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio16_mux_set(siracusa_pads_debug_pad_gpio16_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio16.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio16_mux_sel_t siracusa_pads_debug_pad_gpio16_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio17
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio17
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio17
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio17
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio17
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio17
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio17
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio17
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio17
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio17
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio17
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio17_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio17
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio17_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO17_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO17_group_CLOCKS_port_CLUSTER_CLK = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO17_group_OBSERVABLES_port_S_CLUSTER_RSTN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO17_group_OBSERVABLES_port_S_SOC_RSTN = 3,
} siracusa_pads_debug_pad_gpio17_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio17.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio17_mux_set(siracusa_pads_debug_pad_gpio17_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio17.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio17_mux_sel_t siracusa_pads_debug_pad_gpio17_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio18
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio18
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio18
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio18
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio18
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio18
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio18
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio18
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio18
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio18
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio18
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio18_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio18
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio18_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO18_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO18_group_CLOCKS_port_CLUSTER_CLK_BYPASS_EN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO18_group_OBSERVABLES_port_S_CLUSTER_RSTN = 2,
  SIRACUSA_PADS_DEBUG_PAD_GPIO18_group_OBSERVABLES_port_S_SOC_RSTN = 3,
} siracusa_pads_debug_pad_gpio18_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio18.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio18_mux_set(siracusa_pads_debug_pad_gpio18_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio18.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio18_mux_sel_t siracusa_pads_debug_pad_gpio18_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio19
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio19
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio19
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio19
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio19
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio19
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio19
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio19
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio19
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio19
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio19
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio19_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio19
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio19_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO19_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO19_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO19_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio19_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio19.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio19_mux_set(siracusa_pads_debug_pad_gpio19_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio19.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio19_mux_sel_t siracusa_pads_debug_pad_gpio19_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio20
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio20
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio20
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio20
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio20
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio20
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio20
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio20
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio20
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio20
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio20
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio20_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio20
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio20_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO20_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO20_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO20_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio20_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio20.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio20_mux_set(siracusa_pads_debug_pad_gpio20_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio20.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio20_mux_sel_t siracusa_pads_debug_pad_gpio20_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio21
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio21
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio21
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio21
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio21
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio21
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio21
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio21
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio21
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio21
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio21
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio21_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio21
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio21_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO21_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO21_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO21_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio21_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio21.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio21_mux_set(siracusa_pads_debug_pad_gpio21_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio21.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio21_mux_sel_t siracusa_pads_debug_pad_gpio21_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio22
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio22
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio22
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio22
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio22
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio22
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio22
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio22
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio22
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio22
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio22
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio22_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio22
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio22_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO22_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO22_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO22_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio22_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio22.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio22_mux_set(siracusa_pads_debug_pad_gpio22_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio22.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio22_mux_sel_t siracusa_pads_debug_pad_gpio22_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio23
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio23
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio23
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio23
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio23
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio23
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio23
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio23
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio23
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio23
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio23
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio23_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio23
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio23_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO23_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO23_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO23_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio23_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio23.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio23_mux_set(siracusa_pads_debug_pad_gpio23_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio23.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio23_mux_sel_t siracusa_pads_debug_pad_gpio23_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio24
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio24
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio24
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio24
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio24
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio24
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio24
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio24
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio24
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio24
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio24
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio24_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio24
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio24_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO24_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO24_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO24_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio24_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio24.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio24_mux_set(siracusa_pads_debug_pad_gpio24_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio24.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio24_mux_sel_t siracusa_pads_debug_pad_gpio24_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio25
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio25
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio25
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio25
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio25
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio25
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio25
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio25
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio25
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio25
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio25
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio25_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio25
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio25_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO25_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO25_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO25_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio25_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio25.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio25_mux_set(siracusa_pads_debug_pad_gpio25_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio25.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio25_mux_sel_t siracusa_pads_debug_pad_gpio25_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio26
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio26
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio26
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio26
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio26
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio26
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio26
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio26
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio26
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio26
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio26
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio26_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio26
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio26_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO26_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO26_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO26_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio26_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio26.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio26_mux_set(siracusa_pads_debug_pad_gpio26_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio26.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio26_mux_sel_t siracusa_pads_debug_pad_gpio26_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio27
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio27
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio27
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio27
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio27
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio27
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio27
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio27
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio27
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio27
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio27
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio27_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio27
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio27_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO27_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO27_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO27_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio27_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio27.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio27_mux_set(siracusa_pads_debug_pad_gpio27_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio27.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio27_mux_sel_t siracusa_pads_debug_pad_gpio27_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio28
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio28
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio28
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio28
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio28
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio28
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio28
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio28
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio28
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio28
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio28
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio28_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio28
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio28_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO28_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO28_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO28_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio28_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio28.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio28_mux_set(siracusa_pads_debug_pad_gpio28_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio28.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio28_mux_sel_t siracusa_pads_debug_pad_gpio28_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio29
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio29
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio29
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio29
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio29
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio29
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio29
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio29
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio29
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio29
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio29
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio29_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio29
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio29_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO29_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO29_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO29_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio29_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio29.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio29_mux_set(siracusa_pads_debug_pad_gpio29_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio29.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio29_mux_sel_t siracusa_pads_debug_pad_gpio29_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio30
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio30
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio30
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio30
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio30
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio30
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio30
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio30
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio30
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio30
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio30
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio30_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio30
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio30_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO30_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO30_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO30_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio30_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio30.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio30_mux_set(siracusa_pads_debug_pad_gpio30_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio30.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio30_mux_sel_t siracusa_pads_debug_pad_gpio30_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio31
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio31
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio31
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio31
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio31
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio31
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio31
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio31
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio31
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio31
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio31
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio31_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio31
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio31_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO31_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO31_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO31_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio31_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio31.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio31_mux_set(siracusa_pads_debug_pad_gpio31_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio31.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio31_mux_sel_t siracusa_pads_debug_pad_gpio31_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio32
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio32
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio32
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio32
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio32
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio32
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio32
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio32
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio32
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio32
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio32
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio32_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio32
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio32_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO32_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO32_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO32_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio32_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio32.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio32_mux_set(siracusa_pads_debug_pad_gpio32_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio32.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio32_mux_sel_t siracusa_pads_debug_pad_gpio32_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio33
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio33
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio33
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio33
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio33
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio33
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio33
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio33
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio33
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio33
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio33
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio33_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio33
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio33_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO33_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO33_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO33_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio33_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio33.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio33_mux_set(siracusa_pads_debug_pad_gpio33_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio33.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio33_mux_sel_t siracusa_pads_debug_pad_gpio33_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio34
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio34
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio34
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio34
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio34
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio34
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio34
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio34
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio34
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio34
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio34
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio34_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio34
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio34_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO34_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO34_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO34_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio34_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio34.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio34_mux_set(siracusa_pads_debug_pad_gpio34_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio34.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio34_mux_sel_t siracusa_pads_debug_pad_gpio34_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio35
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio35
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio35
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio35
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio35
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio35
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio35
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio35
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio35
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio35
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio35
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio35_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio35
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio35_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO35_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO35_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO35_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio35_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio35.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio35_mux_set(siracusa_pads_debug_pad_gpio35_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio35.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio35_mux_sel_t siracusa_pads_debug_pad_gpio35_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio36
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio36
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio36
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio36
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio36
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio36
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio36
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio36
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio36
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio36
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio36
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio36_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio36
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio36_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO36_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO36_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO36_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio36_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio36.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio36_mux_set(siracusa_pads_debug_pad_gpio36_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio36.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio36_mux_sel_t siracusa_pads_debug_pad_gpio36_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio37
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio37
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio37
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio37
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio37
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio37
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio37
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio37
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio37
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio37
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio37
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio37_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio37
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio37_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO37_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO37_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO37_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio37_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio37.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio37_mux_set(siracusa_pads_debug_pad_gpio37_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio37.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio37_mux_sel_t siracusa_pads_debug_pad_gpio37_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio38
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio38
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio38
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio38
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio38
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio38
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio38
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio38
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio38
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio38
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio38
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio38_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio38
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio38_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO38_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO38_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO38_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio38_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio38.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio38_mux_set(siracusa_pads_debug_pad_gpio38_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio38.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio38_mux_sel_t siracusa_pads_debug_pad_gpio38_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio39
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio39
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio39
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio39
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio39
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio39
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio39
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio39
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio39
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio39
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio39
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio39_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio39
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio39_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO39_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO39_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO39_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio39_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio39.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio39_mux_set(siracusa_pads_debug_pad_gpio39_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio39.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio39_mux_sel_t siracusa_pads_debug_pad_gpio39_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio40
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio40
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio40
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio40
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio40
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio40
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio40
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio40
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio40
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio40
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio40
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio40_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio40
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio40_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO40_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO40_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO40_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio40_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio40.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio40_mux_set(siracusa_pads_debug_pad_gpio40_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio40.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio40_mux_sel_t siracusa_pads_debug_pad_gpio40_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio41
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio41
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio41
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio41
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio41
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio41
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio41
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio41
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio41
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio41
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio41
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio41_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio41
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio41_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO41_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO41_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO41_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio41_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio41.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio41_mux_set(siracusa_pads_debug_pad_gpio41_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio41.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio41_mux_sel_t siracusa_pads_debug_pad_gpio41_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio42
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio42
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio42
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio42
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio42
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio42
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio42
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio42
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio42
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio42
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio42
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio42_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio42
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio42_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO42_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO42_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO42_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio42_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio42.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio42_mux_set(siracusa_pads_debug_pad_gpio42_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio42.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio42_mux_sel_t siracusa_pads_debug_pad_gpio42_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio43
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio43
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio43
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio43
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio43
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio43
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio43
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio43
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio43
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio43
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio43
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio43_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio43
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio43_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO43_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO43_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO43_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio43_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio43.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio43_mux_set(siracusa_pads_debug_pad_gpio43_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio43.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio43_mux_sel_t siracusa_pads_debug_pad_gpio43_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio44
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio44
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio44
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio44
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio44
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio44
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio44
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio44
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio44
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio44
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio44
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio44_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio44
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio44_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO44_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO44_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO44_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio44_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio44.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio44_mux_set(siracusa_pads_debug_pad_gpio44_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio44.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio44_mux_sel_t siracusa_pads_debug_pad_gpio44_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio45
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio45
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio45
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio45
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio45
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio45
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio45
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio45
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio45
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio45
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio45
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio45_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio45
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio45_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO45_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO45_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO45_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio45_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio45.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio45_mux_set(siracusa_pads_debug_pad_gpio45_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio45.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio45_mux_sel_t siracusa_pads_debug_pad_gpio45_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio46
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio46
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio46
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio46
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio46
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio46
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio46
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio46
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio46
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio46
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio46
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio46_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio46
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio46_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO46_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO46_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO46_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio46_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio46.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio46_mux_set(siracusa_pads_debug_pad_gpio46_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio46.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio46_mux_sel_t siracusa_pads_debug_pad_gpio46_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio47
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio47
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio47
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio47
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio47
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio47
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio47
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio47
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio47
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio47
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio47
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio47_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio47
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio47_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO47_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO47_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO47_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio47_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio47.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio47_mux_set(siracusa_pads_debug_pad_gpio47_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio47.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio47_mux_sel_t siracusa_pads_debug_pad_gpio47_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio48
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio48
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio48
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio48
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio48
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio48
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio48
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio48
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio48
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio48
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio48
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio48_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio48
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio48_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO48_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO48_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO48_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio48_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio48.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio48_mux_set(siracusa_pads_debug_pad_gpio48_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio48.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio48_mux_sel_t siracusa_pads_debug_pad_gpio48_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio49
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio49
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio49
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio49
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio49
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio49
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio49
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio49
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio49
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio49
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio49
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio49_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio49
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio49_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO49_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO49_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO49_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio49_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio49.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio49_mux_set(siracusa_pads_debug_pad_gpio49_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio49.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio49_mux_sel_t siracusa_pads_debug_pad_gpio49_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio50
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio50
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio50
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio50
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio50
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio50
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio50
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio50
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio50
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio50
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio50
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio50_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio50
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio50_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO50_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO50_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO50_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio50_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio50.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio50_mux_set(siracusa_pads_debug_pad_gpio50_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio50.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio50_mux_sel_t siracusa_pads_debug_pad_gpio50_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio51
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio51
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio51
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio51
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio51
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio51
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio51
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio51
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio51
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio51
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio51
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio51_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio51
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio51_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO51_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO51_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO51_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio51_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio51.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio51_mux_set(siracusa_pads_debug_pad_gpio51_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio51.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio51_mux_sel_t siracusa_pads_debug_pad_gpio51_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio52
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio52
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio52
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio52
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio52
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio52
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio52
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio52
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio52
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio52
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio52
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio52_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio52
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio52_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO52_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO52_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO52_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio52_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio52.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio52_mux_set(siracusa_pads_debug_pad_gpio52_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio52.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio52_mux_sel_t siracusa_pads_debug_pad_gpio52_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio53
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio53
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio53
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio53
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio53
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio53
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio53
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio53
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio53
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio53
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio53
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio53_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio53
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio53_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO53_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO53_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO53_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio53_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio53.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio53_mux_set(siracusa_pads_debug_pad_gpio53_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio53.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio53_mux_sel_t siracusa_pads_debug_pad_gpio53_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio54
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio54
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio54
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio54
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio54
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio54
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio54
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio54
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio54
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio54
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio54
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio54_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio54
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio54_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO54_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO54_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO54_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio54_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio54.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio54_mux_set(siracusa_pads_debug_pad_gpio54_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio54.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio54_mux_sel_t siracusa_pads_debug_pad_gpio54_mux_get();



/**
 * Sets the chip2pad pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_chip2pad_set(uint8_t value);

/**
 * Get the currently configured chip2pad value for the pad: pad_gpio55
 *
 * @return The value of the chip2pad field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_chip2pad_get();

/**
 * Sets the drv0 pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_drv0_set(uint8_t value);

/**
 * Get the currently configured drv0 value for the pad: pad_gpio55
 *
 * @return The value of the drv0 field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_drv0_get();

/**
 * Sets the drv1 pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_drv1_set(uint8_t value);

/**
 * Get the currently configured drv1 value for the pad: pad_gpio55
 *
 * @return The value of the drv1 field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_drv1_get();

/**
 * Sets the drv2 pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_drv2_set(uint8_t value);

/**
 * Get the currently configured drv2 value for the pad: pad_gpio55
 *
 * @return The value of the drv2 field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_drv2_get();

/**
 * Sets the drv3 pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_drv3_set(uint8_t value);

/**
 * Get the currently configured drv3 value for the pad: pad_gpio55
 *
 * @return The value of the drv3 field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_drv3_get();

/**
 * Sets the pull_en pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_pull_en_set(uint8_t value);

/**
 * Get the currently configured pull_en value for the pad: pad_gpio55
 *
 * @return The value of the pull_en field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_pull_en_get();

/**
 * Sets the pull_sel pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_pull_sel_set(uint8_t value);

/**
 * Get the currently configured pull_sel value for the pad: pad_gpio55
 *
 * @return The value of the pull_sel field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_pull_sel_get();

/**
 * Sets the ret_en pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_ret_en_set(uint8_t value);

/**
 * Get the currently configured ret_en value for the pad: pad_gpio55
 *
 * @return The value of the ret_en field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_ret_en_get();

/**
 * Sets the rx_en pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_rx_en_set(uint8_t value);

/**
 * Get the currently configured rx_en value for the pad: pad_gpio55
 *
 * @return The value of the rx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_rx_en_get();

/**
 * Sets the st_en pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_st_en_set(uint8_t value);

/**
 * Get the currently configured st_en value for the pad: pad_gpio55
 *
 * @return The value of the st_en field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_st_en_get();

/**
 * Sets the tx_en pad signal for the pad: pad_gpio55
 *
 * @param value The value to program into the pad configuration register. A value smaller than 1.
 */
void siracusa_pads_debug_pad_gpio55_cfg_tx_en_set(uint8_t value);

/**
 * Get the currently configured tx_en value for the pad: pad_gpio55
 *
 * @return The value of the tx_en field
 */
uint8_t siracusa_pads_debug_pad_gpio55_cfg_tx_en_get();

typedef enum {
  SIRACUSA_PADS_DEBUG_PAD_GPIO55_REGISTER = 0,
  SIRACUSA_PADS_DEBUG_PAD_GPIO55_group_OBSERVABLES_port_S_CLUSTER_RSTN = 1,
  SIRACUSA_PADS_DEBUG_PAD_GPIO55_group_OBSERVABLES_port_S_SOC_RSTN = 2,
} siracusa_pads_debug_pad_gpio55_mux_sel_t;

/**
   * Choose the entity (a port or the dedicated configuration register) that controls pad_gpio55.
   *
   * @param mux_sel Port or configuration register to connect to the pad.
 */
void siracusa_pads_debug_pad_gpio55_mux_set(siracusa_pads_debug_pad_gpio55_mux_sel_t mux_sel);

/**
 * Read the current multiplexer select value configured for pad_gpio55.
 *
 * @return Port or configuration register currently connected to the pad.
 */
 siracusa_pads_debug_pad_gpio55_mux_sel_t siracusa_pads_debug_pad_gpio55_mux_get();




#endif /*  SIRACUSA_PADS_H */
