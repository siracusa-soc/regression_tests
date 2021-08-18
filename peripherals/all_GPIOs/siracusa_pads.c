
#include "siracusa_pads.h"
#define  SIRACUSA_PADS_FUNCTIONAL_CONFIG0_BASE_ADDR SIRACUSA_PADS_BASE_ADDRESS
#include "siracusa_pads_functional_regs.h"
#include "bitfield.h"
#define  SIRACUSA_PADS_DEBUG_CONFIG0_BASE_ADDR SIRACUSA_PADS_BASE_ADDRESS
#include "siracusa_pads_debug_regs.h"
#include "bitfield.h"

#define REG_WRITE32(addr, value) *((volatile uint32_t*) addr) = (uint32_t) value;
#define REG_READ32(addr) *((volatile uint32_t*) addr)


void siracusa_pads_functional_pad_gpio00_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio00_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio00_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio00_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio00_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio00_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio00_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio00_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio00_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio00_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio00_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio00_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio00_mux_set(siracusa_pads_functional_pad_gpio00_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio00_mux_sel_t siracusa_pads_functional_pad_gpio00_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO00_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio01_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio01_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio01_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio01_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio01_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio01_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio01_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio01_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio01_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio01_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio01_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio01_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio01_mux_set(siracusa_pads_functional_pad_gpio01_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio01_mux_sel_t siracusa_pads_functional_pad_gpio01_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO01_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio02_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio02_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio02_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio02_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio02_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio02_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio02_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio02_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio02_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio02_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio02_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio02_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio02_mux_set(siracusa_pads_functional_pad_gpio02_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio02_mux_sel_t siracusa_pads_functional_pad_gpio02_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO02_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio03_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio03_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio03_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio03_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio03_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio03_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio03_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio03_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio03_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio03_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio03_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio03_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio03_mux_set(siracusa_pads_functional_pad_gpio03_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio03_mux_sel_t siracusa_pads_functional_pad_gpio03_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO03_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio04_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio04_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio04_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio04_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio04_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio04_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio04_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio04_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio04_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio04_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio04_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio04_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio04_mux_set(siracusa_pads_functional_pad_gpio04_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio04_mux_sel_t siracusa_pads_functional_pad_gpio04_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO04_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio05_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio05_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio05_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio05_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio05_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio05_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio05_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio05_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio05_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio05_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio05_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio05_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio05_mux_set(siracusa_pads_functional_pad_gpio05_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio05_mux_sel_t siracusa_pads_functional_pad_gpio05_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO05_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio06_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio06_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio06_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio06_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio06_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio06_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio06_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio06_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio06_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio06_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio06_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio06_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio06_mux_set(siracusa_pads_functional_pad_gpio06_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio06_mux_sel_t siracusa_pads_functional_pad_gpio06_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO06_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio07_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio07_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio07_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio07_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio07_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio07_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio07_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio07_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio07_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio07_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio07_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio07_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio07_mux_set(siracusa_pads_functional_pad_gpio07_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio07_mux_sel_t siracusa_pads_functional_pad_gpio07_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO07_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio08_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio08_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio08_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio08_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio08_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio08_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio08_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio08_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio08_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio08_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio08_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio08_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio08_mux_set(siracusa_pads_functional_pad_gpio08_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio08_mux_sel_t siracusa_pads_functional_pad_gpio08_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO08_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio09_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio09_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio09_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio09_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio09_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio09_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio09_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio09_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio09_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio09_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio09_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio09_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio09_mux_set(siracusa_pads_functional_pad_gpio09_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio09_mux_sel_t siracusa_pads_functional_pad_gpio09_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO09_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio10_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio10_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio10_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio10_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio10_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio10_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio10_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio10_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio10_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio10_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio10_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio10_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio10_mux_set(siracusa_pads_functional_pad_gpio10_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio10_mux_sel_t siracusa_pads_functional_pad_gpio10_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO10_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio11_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio11_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio11_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio11_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio11_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio11_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio11_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio11_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio11_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio11_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio11_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio11_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio11_mux_set(siracusa_pads_functional_pad_gpio11_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio11_mux_sel_t siracusa_pads_functional_pad_gpio11_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO11_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio12_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio12_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio12_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio12_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio12_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio12_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio12_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio12_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio12_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio12_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio12_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio12_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio12_mux_set(siracusa_pads_functional_pad_gpio12_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio12_mux_sel_t siracusa_pads_functional_pad_gpio12_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO12_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio13_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio13_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio13_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio13_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio13_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio13_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio13_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio13_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio13_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio13_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio13_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio13_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio13_mux_set(siracusa_pads_functional_pad_gpio13_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio13_mux_sel_t siracusa_pads_functional_pad_gpio13_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO13_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio14_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio14_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio14_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio14_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio14_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio14_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio14_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio14_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio14_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio14_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio14_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio14_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio14_mux_set(siracusa_pads_functional_pad_gpio14_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio14_mux_sel_t siracusa_pads_functional_pad_gpio14_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO14_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio15_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio15_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio15_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio15_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio15_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio15_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio15_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio15_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio15_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio15_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio15_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio15_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio15_mux_set(siracusa_pads_functional_pad_gpio15_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio15_mux_sel_t siracusa_pads_functional_pad_gpio15_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO15_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio16_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio16_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio16_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio16_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio16_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio16_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio16_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio16_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio16_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio16_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio16_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio16_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio16_mux_set(siracusa_pads_functional_pad_gpio16_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio16_mux_sel_t siracusa_pads_functional_pad_gpio16_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO16_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio17_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio17_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio17_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio17_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio17_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio17_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio17_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio17_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio17_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio17_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio17_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio17_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio17_mux_set(siracusa_pads_functional_pad_gpio17_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio17_mux_sel_t siracusa_pads_functional_pad_gpio17_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO17_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio18_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio18_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio18_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio18_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio18_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio18_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio18_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio18_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio18_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio18_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio18_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio18_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio18_mux_set(siracusa_pads_functional_pad_gpio18_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio18_mux_sel_t siracusa_pads_functional_pad_gpio18_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO18_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio19_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio19_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio19_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio19_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio19_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio19_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio19_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio19_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio19_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio19_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio19_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio19_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio19_mux_set(siracusa_pads_functional_pad_gpio19_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio19_mux_sel_t siracusa_pads_functional_pad_gpio19_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO19_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio20_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio20_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio20_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio20_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio20_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio20_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio20_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio20_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio20_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio20_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio20_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio20_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio20_mux_set(siracusa_pads_functional_pad_gpio20_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio20_mux_sel_t siracusa_pads_functional_pad_gpio20_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO20_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio21_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio21_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio21_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio21_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio21_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio21_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio21_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio21_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio21_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio21_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio21_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio21_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio21_mux_set(siracusa_pads_functional_pad_gpio21_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio21_mux_sel_t siracusa_pads_functional_pad_gpio21_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO21_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio22_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio22_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio22_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio22_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio22_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio22_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio22_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio22_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio22_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio22_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio22_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio22_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio22_mux_set(siracusa_pads_functional_pad_gpio22_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio22_mux_sel_t siracusa_pads_functional_pad_gpio22_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO22_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio23_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio23_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio23_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio23_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio23_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio23_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio23_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio23_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio23_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio23_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio23_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio23_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio23_mux_set(siracusa_pads_functional_pad_gpio23_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio23_mux_sel_t siracusa_pads_functional_pad_gpio23_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO23_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio24_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio24_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio24_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio24_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio24_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio24_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio24_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio24_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio24_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio24_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio24_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio24_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio24_mux_set(siracusa_pads_functional_pad_gpio24_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio24_mux_sel_t siracusa_pads_functional_pad_gpio24_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO24_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio25_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio25_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio25_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio25_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio25_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio25_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio25_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio25_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio25_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio25_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio25_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio25_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio25_mux_set(siracusa_pads_functional_pad_gpio25_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio25_mux_sel_t siracusa_pads_functional_pad_gpio25_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO25_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio26_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio26_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio26_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio26_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio26_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio26_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio26_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio26_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio26_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio26_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio26_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio26_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio26_mux_set(siracusa_pads_functional_pad_gpio26_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio26_mux_sel_t siracusa_pads_functional_pad_gpio26_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO26_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio27_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio27_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio27_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio27_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio27_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio27_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio27_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio27_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio27_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio27_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio27_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio27_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio27_mux_set(siracusa_pads_functional_pad_gpio27_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio27_mux_sel_t siracusa_pads_functional_pad_gpio27_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO27_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio28_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio28_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio28_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio28_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio28_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio28_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio28_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio28_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio28_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio28_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio28_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio28_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio28_mux_set(siracusa_pads_functional_pad_gpio28_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio28_mux_sel_t siracusa_pads_functional_pad_gpio28_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO28_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio29_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio29_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio29_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio29_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio29_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio29_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio29_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio29_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio29_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio29_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio29_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio29_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio29_mux_set(siracusa_pads_functional_pad_gpio29_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio29_mux_sel_t siracusa_pads_functional_pad_gpio29_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO29_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio30_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio30_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio30_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio30_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio30_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio30_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio30_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio30_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio30_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio30_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio30_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio30_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio30_mux_set(siracusa_pads_functional_pad_gpio30_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio30_mux_sel_t siracusa_pads_functional_pad_gpio30_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO30_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio31_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio31_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio31_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio31_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio31_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio31_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio31_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio31_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio31_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio31_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio31_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio31_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio31_mux_set(siracusa_pads_functional_pad_gpio31_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio31_mux_sel_t siracusa_pads_functional_pad_gpio31_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO31_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio32_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio32_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio32_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio32_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio32_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio32_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio32_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio32_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio32_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio32_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio32_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio32_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio32_mux_set(siracusa_pads_functional_pad_gpio32_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio32_mux_sel_t siracusa_pads_functional_pad_gpio32_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO32_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio33_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio33_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio33_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio33_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio33_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio33_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio33_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio33_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio33_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio33_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio33_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio33_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio33_mux_set(siracusa_pads_functional_pad_gpio33_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio33_mux_sel_t siracusa_pads_functional_pad_gpio33_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO33_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio34_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio34_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio34_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio34_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio34_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio34_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio34_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio34_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio34_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio34_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio34_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio34_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio34_mux_set(siracusa_pads_functional_pad_gpio34_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio34_mux_sel_t siracusa_pads_functional_pad_gpio34_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO34_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio35_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio35_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio35_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio35_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio35_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio35_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio35_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio35_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio35_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio35_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio35_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio35_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio35_mux_set(siracusa_pads_functional_pad_gpio35_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio35_mux_sel_t siracusa_pads_functional_pad_gpio35_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO35_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio36_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio36_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio36_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio36_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio36_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio36_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio36_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio36_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio36_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio36_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio36_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio36_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio36_mux_set(siracusa_pads_functional_pad_gpio36_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio36_mux_sel_t siracusa_pads_functional_pad_gpio36_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO36_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio37_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio37_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio37_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio37_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio37_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio37_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio37_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio37_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio37_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio37_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio37_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio37_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio37_mux_set(siracusa_pads_functional_pad_gpio37_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio37_mux_sel_t siracusa_pads_functional_pad_gpio37_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO37_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio38_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio38_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio38_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio38_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio38_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio38_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio38_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio38_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio38_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio38_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio38_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio38_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio38_mux_set(siracusa_pads_functional_pad_gpio38_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio38_mux_sel_t siracusa_pads_functional_pad_gpio38_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO38_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio39_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio39_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio39_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio39_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio39_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio39_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio39_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio39_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio39_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio39_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio39_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio39_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio39_mux_set(siracusa_pads_functional_pad_gpio39_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio39_mux_sel_t siracusa_pads_functional_pad_gpio39_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO39_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio40_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio40_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio40_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio40_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio40_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio40_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio40_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio40_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio40_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio40_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio40_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio40_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio40_mux_set(siracusa_pads_functional_pad_gpio40_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio40_mux_sel_t siracusa_pads_functional_pad_gpio40_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO40_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio41_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio41_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio41_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio41_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio41_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio41_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio41_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio41_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio41_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio41_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio41_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio41_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio41_mux_set(siracusa_pads_functional_pad_gpio41_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio41_mux_sel_t siracusa_pads_functional_pad_gpio41_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO41_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio42_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio42_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio42_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio42_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio42_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio42_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio42_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio42_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio42_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio42_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio42_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio42_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio42_mux_set(siracusa_pads_functional_pad_gpio42_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio42_mux_sel_t siracusa_pads_functional_pad_gpio42_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO42_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio43_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio43_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio43_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio43_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio43_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio43_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio43_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio43_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio43_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio43_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio43_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio43_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio43_mux_set(siracusa_pads_functional_pad_gpio43_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio43_mux_sel_t siracusa_pads_functional_pad_gpio43_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO43_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio44_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio44_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio44_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio44_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio44_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio44_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio44_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio44_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio44_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio44_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio44_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio44_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio44_mux_set(siracusa_pads_functional_pad_gpio44_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio44_mux_sel_t siracusa_pads_functional_pad_gpio44_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO44_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio45_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio45_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio45_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio45_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio45_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio45_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio45_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio45_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio45_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio45_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio45_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio45_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio45_mux_set(siracusa_pads_functional_pad_gpio45_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio45_mux_sel_t siracusa_pads_functional_pad_gpio45_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO45_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio46_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio46_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio46_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio46_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio46_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio46_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio46_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio46_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio46_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio46_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio46_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio46_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio46_mux_set(siracusa_pads_functional_pad_gpio46_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio46_mux_sel_t siracusa_pads_functional_pad_gpio46_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO46_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio47_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio47_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio47_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio47_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio47_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio47_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio47_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio47_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio47_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio47_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio47_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio47_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio47_mux_set(siracusa_pads_functional_pad_gpio47_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio47_mux_sel_t siracusa_pads_functional_pad_gpio47_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO47_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio48_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio48_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio48_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio48_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio48_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio48_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio48_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio48_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio48_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio48_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio48_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio48_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio48_mux_set(siracusa_pads_functional_pad_gpio48_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio48_mux_sel_t siracusa_pads_functional_pad_gpio48_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO48_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio49_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio49_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio49_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio49_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio49_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio49_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio49_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio49_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio49_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio49_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio49_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio49_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio49_mux_set(siracusa_pads_functional_pad_gpio49_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio49_mux_sel_t siracusa_pads_functional_pad_gpio49_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO49_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio50_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio50_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio50_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio50_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio50_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio50_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio50_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio50_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio50_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio50_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio50_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio50_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio50_mux_set(siracusa_pads_functional_pad_gpio50_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio50_mux_sel_t siracusa_pads_functional_pad_gpio50_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO50_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio51_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio51_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio51_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio51_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio51_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio51_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio51_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio51_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio51_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio51_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio51_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio51_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio51_mux_set(siracusa_pads_functional_pad_gpio51_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio51_mux_sel_t siracusa_pads_functional_pad_gpio51_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO51_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio52_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio52_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio52_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio52_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio52_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio52_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio52_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio52_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio52_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio52_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio52_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio52_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio52_mux_set(siracusa_pads_functional_pad_gpio52_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio52_mux_sel_t siracusa_pads_functional_pad_gpio52_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO52_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio53_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio53_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio53_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio53_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio53_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio53_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio53_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio53_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio53_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio53_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio53_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio53_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio53_mux_set(siracusa_pads_functional_pad_gpio53_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio53_mux_sel_t siracusa_pads_functional_pad_gpio53_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO53_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio54_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio54_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio54_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio54_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio54_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio54_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio54_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio54_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio54_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio54_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio54_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio54_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio54_mux_set(siracusa_pads_functional_pad_gpio54_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio54_mux_sel_t siracusa_pads_functional_pad_gpio54_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO54_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_functional_pad_gpio55_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_functional_pad_gpio55_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_DRV0_BIT);
}

void siracusa_pads_functional_pad_gpio55_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_DRV1_BIT);
}

void siracusa_pads_functional_pad_gpio55_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_DRV2_BIT);
}

void siracusa_pads_functional_pad_gpio55_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_DRV3_BIT);
}

void siracusa_pads_functional_pad_gpio55_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_PULL_EN_BIT);
}

void siracusa_pads_functional_pad_gpio55_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_PULL_SEL_BIT);
}

void siracusa_pads_functional_pad_gpio55_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_RET_EN_BIT);
}

void siracusa_pads_functional_pad_gpio55_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_RX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio55_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_ST_EN_BIT);
}

void siracusa_pads_functional_pad_gpio55_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_functional_pad_gpio55_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_CFG_TX_EN_BIT);
}

void siracusa_pads_functional_pad_gpio55_mux_set(siracusa_pads_functional_pad_gpio55_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_functional_pad_gpio55_mux_sel_t siracusa_pads_functional_pad_gpio55_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_FUNCTIONAL_CONFIG_PAD_GPIO55_MUX_SEL_OFFSET;
  const uint32_t sel_size = 6;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio00_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio00_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio00_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio00_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio00_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio00_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio00_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio00_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio00_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio00_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio00_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio00_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio00_mux_set(siracusa_pads_debug_pad_gpio00_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio00_mux_sel_t siracusa_pads_debug_pad_gpio00_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO00_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio01_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio01_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio01_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio01_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio01_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio01_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio01_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio01_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio01_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio01_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio01_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio01_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio01_mux_set(siracusa_pads_debug_pad_gpio01_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio01_mux_sel_t siracusa_pads_debug_pad_gpio01_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO01_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio02_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio02_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio02_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio02_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio02_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio02_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio02_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio02_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio02_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio02_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio02_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio02_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio02_mux_set(siracusa_pads_debug_pad_gpio02_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio02_mux_sel_t siracusa_pads_debug_pad_gpio02_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO02_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio03_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio03_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio03_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio03_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio03_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio03_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio03_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio03_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio03_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio03_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio03_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio03_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio03_mux_set(siracusa_pads_debug_pad_gpio03_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio03_mux_sel_t siracusa_pads_debug_pad_gpio03_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO03_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio04_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio04_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio04_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio04_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio04_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio04_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio04_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio04_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio04_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio04_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio04_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio04_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio04_mux_set(siracusa_pads_debug_pad_gpio04_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio04_mux_sel_t siracusa_pads_debug_pad_gpio04_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO04_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio05_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio05_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio05_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio05_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio05_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio05_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio05_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio05_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio05_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio05_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio05_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio05_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio05_mux_set(siracusa_pads_debug_pad_gpio05_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio05_mux_sel_t siracusa_pads_debug_pad_gpio05_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO05_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio06_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio06_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio06_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio06_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio06_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio06_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio06_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio06_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio06_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio06_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio06_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio06_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio06_mux_set(siracusa_pads_debug_pad_gpio06_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio06_mux_sel_t siracusa_pads_debug_pad_gpio06_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO06_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio07_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio07_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio07_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio07_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio07_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio07_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio07_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio07_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio07_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio07_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio07_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio07_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio07_mux_set(siracusa_pads_debug_pad_gpio07_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio07_mux_sel_t siracusa_pads_debug_pad_gpio07_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO07_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio08_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio08_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio08_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio08_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio08_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio08_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio08_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio08_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio08_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio08_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio08_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio08_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio08_mux_set(siracusa_pads_debug_pad_gpio08_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio08_mux_sel_t siracusa_pads_debug_pad_gpio08_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO08_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio09_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio09_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio09_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio09_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio09_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio09_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio09_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio09_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio09_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio09_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio09_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio09_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio09_mux_set(siracusa_pads_debug_pad_gpio09_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio09_mux_sel_t siracusa_pads_debug_pad_gpio09_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO09_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio10_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio10_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio10_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio10_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio10_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio10_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio10_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio10_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio10_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio10_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio10_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio10_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio10_mux_set(siracusa_pads_debug_pad_gpio10_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio10_mux_sel_t siracusa_pads_debug_pad_gpio10_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO10_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio11_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio11_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio11_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio11_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio11_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio11_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio11_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio11_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio11_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio11_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio11_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio11_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio11_mux_set(siracusa_pads_debug_pad_gpio11_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio11_mux_sel_t siracusa_pads_debug_pad_gpio11_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO11_MUX_SEL_OFFSET;
  const uint32_t sel_size = 4;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio12_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio12_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio12_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio12_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio12_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio12_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio12_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio12_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio12_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio12_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio12_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio12_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio12_mux_set(siracusa_pads_debug_pad_gpio12_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio12_mux_sel_t siracusa_pads_debug_pad_gpio12_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO12_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio13_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio13_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio13_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio13_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio13_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio13_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio13_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio13_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio13_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio13_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio13_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio13_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio13_mux_set(siracusa_pads_debug_pad_gpio13_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio13_mux_sel_t siracusa_pads_debug_pad_gpio13_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO13_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio14_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio14_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio14_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio14_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio14_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio14_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio14_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio14_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio14_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio14_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio14_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio14_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio14_mux_set(siracusa_pads_debug_pad_gpio14_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio14_mux_sel_t siracusa_pads_debug_pad_gpio14_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO14_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio15_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio15_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio15_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio15_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio15_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio15_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio15_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio15_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio15_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio15_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio15_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio15_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio15_mux_set(siracusa_pads_debug_pad_gpio15_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio15_mux_sel_t siracusa_pads_debug_pad_gpio15_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO15_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio16_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio16_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio16_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio16_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio16_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio16_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio16_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio16_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio16_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio16_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio16_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio16_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio16_mux_set(siracusa_pads_debug_pad_gpio16_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio16_mux_sel_t siracusa_pads_debug_pad_gpio16_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO16_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio17_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio17_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio17_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio17_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio17_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio17_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio17_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio17_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio17_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio17_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio17_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio17_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio17_mux_set(siracusa_pads_debug_pad_gpio17_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio17_mux_sel_t siracusa_pads_debug_pad_gpio17_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO17_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio18_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio18_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio18_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio18_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio18_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio18_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio18_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio18_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio18_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio18_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio18_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio18_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio18_mux_set(siracusa_pads_debug_pad_gpio18_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio18_mux_sel_t siracusa_pads_debug_pad_gpio18_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO18_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio19_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio19_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio19_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio19_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio19_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio19_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio19_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio19_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio19_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio19_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio19_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio19_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio19_mux_set(siracusa_pads_debug_pad_gpio19_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio19_mux_sel_t siracusa_pads_debug_pad_gpio19_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO19_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio20_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio20_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio20_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio20_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio20_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio20_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio20_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio20_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio20_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio20_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio20_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio20_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio20_mux_set(siracusa_pads_debug_pad_gpio20_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio20_mux_sel_t siracusa_pads_debug_pad_gpio20_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO20_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio21_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio21_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio21_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio21_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio21_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio21_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio21_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio21_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio21_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio21_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio21_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio21_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio21_mux_set(siracusa_pads_debug_pad_gpio21_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio21_mux_sel_t siracusa_pads_debug_pad_gpio21_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO21_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio22_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio22_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio22_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio22_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio22_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio22_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio22_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio22_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio22_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio22_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio22_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio22_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio22_mux_set(siracusa_pads_debug_pad_gpio22_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio22_mux_sel_t siracusa_pads_debug_pad_gpio22_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO22_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio23_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio23_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio23_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio23_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio23_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio23_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio23_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio23_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio23_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio23_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio23_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio23_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio23_mux_set(siracusa_pads_debug_pad_gpio23_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio23_mux_sel_t siracusa_pads_debug_pad_gpio23_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO23_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio24_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio24_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio24_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio24_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio24_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio24_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio24_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio24_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio24_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio24_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio24_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio24_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio24_mux_set(siracusa_pads_debug_pad_gpio24_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio24_mux_sel_t siracusa_pads_debug_pad_gpio24_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO24_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio25_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio25_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio25_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio25_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio25_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio25_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio25_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio25_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio25_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio25_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio25_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio25_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio25_mux_set(siracusa_pads_debug_pad_gpio25_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio25_mux_sel_t siracusa_pads_debug_pad_gpio25_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO25_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio26_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio26_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio26_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio26_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio26_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio26_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio26_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio26_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio26_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio26_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio26_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio26_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio26_mux_set(siracusa_pads_debug_pad_gpio26_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio26_mux_sel_t siracusa_pads_debug_pad_gpio26_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO26_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio27_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio27_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio27_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio27_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio27_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio27_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio27_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio27_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio27_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio27_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio27_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio27_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio27_mux_set(siracusa_pads_debug_pad_gpio27_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio27_mux_sel_t siracusa_pads_debug_pad_gpio27_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO27_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio28_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio28_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio28_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio28_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio28_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio28_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio28_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio28_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio28_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio28_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio28_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio28_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio28_mux_set(siracusa_pads_debug_pad_gpio28_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio28_mux_sel_t siracusa_pads_debug_pad_gpio28_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO28_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio29_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio29_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio29_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio29_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio29_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio29_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio29_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio29_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio29_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio29_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio29_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio29_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio29_mux_set(siracusa_pads_debug_pad_gpio29_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio29_mux_sel_t siracusa_pads_debug_pad_gpio29_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO29_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio30_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio30_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio30_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio30_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio30_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio30_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio30_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio30_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio30_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio30_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio30_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio30_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio30_mux_set(siracusa_pads_debug_pad_gpio30_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio30_mux_sel_t siracusa_pads_debug_pad_gpio30_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO30_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio31_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio31_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio31_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio31_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio31_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio31_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio31_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio31_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio31_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio31_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio31_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio31_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio31_mux_set(siracusa_pads_debug_pad_gpio31_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio31_mux_sel_t siracusa_pads_debug_pad_gpio31_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO31_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio32_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio32_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio32_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio32_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio32_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio32_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio32_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio32_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio32_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio32_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio32_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio32_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio32_mux_set(siracusa_pads_debug_pad_gpio32_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio32_mux_sel_t siracusa_pads_debug_pad_gpio32_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO32_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio33_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio33_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio33_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio33_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio33_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio33_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio33_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio33_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio33_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio33_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio33_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio33_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio33_mux_set(siracusa_pads_debug_pad_gpio33_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio33_mux_sel_t siracusa_pads_debug_pad_gpio33_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO33_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio34_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio34_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio34_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio34_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio34_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio34_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio34_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio34_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio34_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio34_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio34_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio34_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio34_mux_set(siracusa_pads_debug_pad_gpio34_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio34_mux_sel_t siracusa_pads_debug_pad_gpio34_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO34_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio35_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio35_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio35_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio35_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio35_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio35_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio35_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio35_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio35_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio35_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio35_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio35_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio35_mux_set(siracusa_pads_debug_pad_gpio35_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio35_mux_sel_t siracusa_pads_debug_pad_gpio35_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO35_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio36_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio36_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio36_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio36_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio36_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio36_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio36_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio36_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio36_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio36_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio36_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio36_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio36_mux_set(siracusa_pads_debug_pad_gpio36_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio36_mux_sel_t siracusa_pads_debug_pad_gpio36_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO36_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio37_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio37_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio37_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio37_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio37_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio37_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio37_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio37_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio37_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio37_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio37_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio37_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio37_mux_set(siracusa_pads_debug_pad_gpio37_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio37_mux_sel_t siracusa_pads_debug_pad_gpio37_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO37_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio38_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio38_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio38_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio38_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio38_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio38_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio38_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio38_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio38_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio38_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio38_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio38_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio38_mux_set(siracusa_pads_debug_pad_gpio38_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio38_mux_sel_t siracusa_pads_debug_pad_gpio38_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO38_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio39_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio39_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio39_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio39_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio39_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio39_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio39_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio39_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio39_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio39_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio39_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio39_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio39_mux_set(siracusa_pads_debug_pad_gpio39_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio39_mux_sel_t siracusa_pads_debug_pad_gpio39_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO39_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio40_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio40_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio40_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio40_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio40_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio40_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio40_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio40_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio40_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio40_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio40_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio40_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio40_mux_set(siracusa_pads_debug_pad_gpio40_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio40_mux_sel_t siracusa_pads_debug_pad_gpio40_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO40_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio41_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio41_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio41_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio41_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio41_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio41_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio41_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio41_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio41_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio41_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio41_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio41_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio41_mux_set(siracusa_pads_debug_pad_gpio41_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio41_mux_sel_t siracusa_pads_debug_pad_gpio41_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO41_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio42_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio42_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio42_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio42_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio42_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio42_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio42_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio42_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio42_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio42_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio42_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio42_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio42_mux_set(siracusa_pads_debug_pad_gpio42_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio42_mux_sel_t siracusa_pads_debug_pad_gpio42_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO42_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio43_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio43_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio43_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio43_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio43_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio43_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio43_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio43_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio43_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio43_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio43_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio43_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio43_mux_set(siracusa_pads_debug_pad_gpio43_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio43_mux_sel_t siracusa_pads_debug_pad_gpio43_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO43_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio44_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio44_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio44_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio44_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio44_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio44_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio44_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio44_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio44_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio44_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio44_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio44_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio44_mux_set(siracusa_pads_debug_pad_gpio44_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio44_mux_sel_t siracusa_pads_debug_pad_gpio44_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO44_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio45_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio45_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio45_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio45_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio45_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio45_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio45_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio45_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio45_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio45_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio45_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio45_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio45_mux_set(siracusa_pads_debug_pad_gpio45_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio45_mux_sel_t siracusa_pads_debug_pad_gpio45_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO45_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio46_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio46_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio46_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio46_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio46_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio46_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio46_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio46_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio46_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio46_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio46_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio46_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio46_mux_set(siracusa_pads_debug_pad_gpio46_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio46_mux_sel_t siracusa_pads_debug_pad_gpio46_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO46_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio47_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio47_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio47_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio47_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio47_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio47_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio47_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio47_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio47_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio47_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio47_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio47_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio47_mux_set(siracusa_pads_debug_pad_gpio47_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio47_mux_sel_t siracusa_pads_debug_pad_gpio47_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO47_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio48_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio48_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio48_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio48_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio48_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio48_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio48_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio48_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio48_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio48_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio48_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio48_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio48_mux_set(siracusa_pads_debug_pad_gpio48_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio48_mux_sel_t siracusa_pads_debug_pad_gpio48_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO48_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio49_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio49_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio49_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio49_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio49_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio49_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio49_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio49_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio49_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio49_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio49_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio49_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio49_mux_set(siracusa_pads_debug_pad_gpio49_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio49_mux_sel_t siracusa_pads_debug_pad_gpio49_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO49_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio50_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio50_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio50_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio50_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio50_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio50_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio50_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio50_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio50_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio50_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio50_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio50_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio50_mux_set(siracusa_pads_debug_pad_gpio50_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio50_mux_sel_t siracusa_pads_debug_pad_gpio50_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO50_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio51_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio51_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio51_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio51_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio51_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio51_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio51_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio51_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio51_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio51_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio51_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio51_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio51_mux_set(siracusa_pads_debug_pad_gpio51_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio51_mux_sel_t siracusa_pads_debug_pad_gpio51_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO51_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio52_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio52_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio52_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio52_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio52_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio52_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio52_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio52_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio52_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio52_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio52_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio52_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio52_mux_set(siracusa_pads_debug_pad_gpio52_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio52_mux_sel_t siracusa_pads_debug_pad_gpio52_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO52_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio53_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio53_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio53_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio53_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio53_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio53_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio53_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio53_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio53_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio53_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio53_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio53_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio53_mux_set(siracusa_pads_debug_pad_gpio53_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio53_mux_sel_t siracusa_pads_debug_pad_gpio53_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO53_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio54_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio54_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio54_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio54_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio54_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio54_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio54_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio54_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio54_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio54_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio54_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio54_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio54_mux_set(siracusa_pads_debug_pad_gpio54_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio54_mux_sel_t siracusa_pads_debug_pad_gpio54_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO54_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}

void siracusa_pads_debug_pad_gpio55_cfg_chip2pad_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_CHIP2PAD_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_chip2pad_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_CHIP2PAD_BIT);
}

void siracusa_pads_debug_pad_gpio55_cfg_drv0_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_DRV0_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_drv0_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_DRV0_BIT);
}

void siracusa_pads_debug_pad_gpio55_cfg_drv1_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_DRV1_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_drv1_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_DRV1_BIT);
}

void siracusa_pads_debug_pad_gpio55_cfg_drv2_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_DRV2_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_drv2_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_DRV2_BIT);
}

void siracusa_pads_debug_pad_gpio55_cfg_drv3_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_DRV3_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_drv3_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_DRV3_BIT);
}

void siracusa_pads_debug_pad_gpio55_cfg_pull_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_PULL_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_pull_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_PULL_EN_BIT);
}

void siracusa_pads_debug_pad_gpio55_cfg_pull_sel_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_PULL_SEL_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_pull_sel_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_PULL_SEL_BIT);
}

void siracusa_pads_debug_pad_gpio55_cfg_ret_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_RET_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_ret_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_RET_EN_BIT);
}

void siracusa_pads_debug_pad_gpio55_cfg_rx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_RX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_rx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_RX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio55_cfg_st_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_ST_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_st_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_ST_EN_BIT);
}

void siracusa_pads_debug_pad_gpio55_cfg_tx_en_set(uint8_t value) {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  reg = bitfield_bit32_write(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_TX_EN_BIT, value);
  REG_WRITE32(address, v);
}

uint8_t siracusa_pads_debug_pad_gpio55_cfg_tx_en_get() {
  uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_OFFSET;
  uint32_t reg = REG_READ32(address);
  return bitfield_bit32_read(reg, SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_CFG_TX_EN_BIT);
}

void siracusa_pads_debug_pad_gpio55_mux_set(siracusa_pads_debug_pad_gpio55_mux_sel_t mux_sel) {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;
  uint32_t field_mask = 1<<sel_size-1;
  REG_WRITE32(address, value & field_mask);
}

siracusa_pads_debug_pad_gpio55_mux_sel_t siracusa_pads_debug_pad_gpio55_mux_get() {
  const uint32_t address = SIRACUSA_PADS_BASE_ADDRESS + SIRACUSA_PADS_DEBUG_CONFIG_PAD_GPIO55_MUX_SEL_OFFSET;
  const uint32_t sel_size = 2;

  uint32_t field_mask = 1<<sel_size-1;
  return REG_READ32(address) & field_mask;
}
