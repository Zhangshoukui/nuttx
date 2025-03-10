/****************************************************************************
 * arch/risc-v/src/bl602/hardware/bl602_glb.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_RISCV_SRC_BL602_HARDWARE_BL602_GLB_H
#define __ARCH_RISCV_SRC_BL602_HARDWARE_BL602_GLB_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "bl602_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define BL602_CLK_CFG0_OFFSET               0x000000  /* clk_cfg0 */
#define BL602_CLK_CFG1_OFFSET               0x000004  /* clk_cfg1 */
#define BL602_CLK_CFG2_OFFSET               0x000008  /* clk_cfg2 */
#define BL602_CLK_CFG3_OFFSET               0x00000c  /* clk_cfg3 */
#define BL602_SWRST_CFG0_OFFSET             0x000010  /* swrst_cfg0 */
#define BL602_SWRST_CFG1_OFFSET             0x000014  /* swrst_cfg1 */
#define BL602_SWRST_CFG2_OFFSET             0x000018  /* swrst_cfg2 */
#define BL602_SWRST_CFG3_OFFSET             0x00001c  /* swrst_cfg3 */
#define BL602_CGEN_CFG0_OFFSET              0x000020  /* cgen_cfg0 */
#define BL602_CGEN_CFG1_OFFSET              0x000024  /* cgen_cfg1 */
#define BL602_CGEN_CFG2_OFFSET              0x000028  /* cgen_cfg2 */
#define BL602_CGEN_CFG3_OFFSET              0x00002c  /* cgen_cfg3 */
#define BL602_MBIST_CTL_OFFSET              0x000030  /* mbist_ctl */
#define BL602_MBIST_STAT_OFFSET             0x000034  /* mbist_stat */
#define BL602_BMX_CFG1_OFFSET               0x000050  /* bmx_cfg1 */
#define BL602_BMX_CFG2_OFFSET               0x000054  /* bmx_cfg2 */
#define BL602_BMX_ERR_ADDR_OFFSET           0x000058  /* bmx_err_addr */
#define BL602_BMX_DBG_OUT_OFFSET            0x00005c  /* bmx_dbg_out */
#define BL602_GLB_RSV0_OFFSET               0x000060  /* rsv0 */
#define BL602_GLB_RSV1_OFFSET               0x000064  /* rsv1 */
#define BL602_GLB_RSV2_OFFSET               0x000068  /* rsv2 */
#define BL602_GLB_RSV3_OFFSET               0x00006c  /* rsv3 */
#define BL602_SRAM_RET_OFFSET               0x000070  /* sram_ret */
#define BL602_SRAM_SLP_OFFSET               0x000074  /* sram_slp */
#define BL602_SRAM_PARM_OFFSET              0x000078  /* sram_parm */
#define BL602_SEAM_MISC_OFFSET              0x00007c  /* seam_misc */
#define BL602_GLB_PARM_OFFSET               0x000080  /* glb_parm */
#define BL602_CPU_CLK_CFG_OFFSET            0x000090  /* cpu_clk_cfg */
#define BL602_GPADC_32M_SRC_CTRL_OFFSET     0x0000a4  /* gpadc_32m_src_ctrl */
#define BL602_DIG32K_WAKEUP_CTRL_OFFSET     0x0000a8  /* dig32k_wakeup_ctrl */
#define BL602_WIFI_BT_COEX_CTRL_OFFSET      0x0000ac  /* wifi_bt_coex_ctrl */
#define BL602_UART_SIG_SEL_0_OFFSET         0x0000c0  /* uart_sig_sel_0 */
#define BL602_GLB_DBG_SEL_LL_OFFSET         0x0000d0  /* dbg_sel_ll */
#define BL602_GLB_DBG_SEL_LH_OFFSET         0x0000d4  /* dbg_sel_lh */
#define BL602_GLB_DBG_SEL_HL_OFFSET         0x0000d8  /* dbg_sel_hl */
#define BL602_GLB_DBG_SEL_HH_OFFSET         0x0000dc  /* dbg_sel_hh */
#define BL602_GLB_DEBUG_OFFSET              0x0000e0  /* debug */
#define BL602_GPIO_CFGCTL0_OFFSET           0x000100  /* gpio_cfgctl0 */
#define BL602_GPIO_CFGCTL1_OFFSET           0x000104  /* gpio_cfgctl1 */
#define BL602_GPIO_CFGCTL2_OFFSET           0x000108  /* gpio_cfgctl2 */
#define BL602_GPIO_CFGCTL3_OFFSET           0x00010c  /* gpio_cfgctl3 */
#define BL602_GPIO_CFGCTL4_OFFSET           0x000110  /* gpio_cfgctl4 */
#define BL602_GPIO_CFGCTL5_OFFSET           0x000114  /* gpio_cfgctl5 */
#define BL602_GPIO_CFGCTL6_OFFSET           0x000118  /* gpio_cfgctl6 */
#define BL602_GPIO_CFGCTL7_OFFSET           0x00011c  /* gpio_cfgctl7 */
#define BL602_GPIO_CFGCTL8_OFFSET           0x000120  /* gpio_cfgctl8 */
#define BL602_GPIO_CFGCTL9_OFFSET           0x000124  /* gpio_cfgctl9 */
#define BL602_GPIO_CFGCTL10_OFFSET          0x000128  /* gpio_cfgctl10 */
#define BL602_GPIO_CFGCTL11_OFFSET          0x00012c  /* gpio_cfgctl11 */
#define BL602_GPIO_CFGCTL12_OFFSET          0x000130  /* gpio_cfgctl12 */
#define BL602_GPIO_CFGCTL13_OFFSET          0x000134  /* gpio_cfgctl13 */
#define BL602_GPIO_CFGCTL14_OFFSET          0x000138  /* gpio_cfgctl14 */
#define BL602_GPIO_CFGCTL30_OFFSET          0x000180  /* gpio_cfgctl30 */
#define BL602_GPIO_CFGCTL31_OFFSET          0x000184  /* gpio_cfgctl31 */
#define BL602_GPIO_CFGCTL32_OFFSET          0x000188  /* gpio_cfgctl32 */
#define BL602_GPIO_CFGCTL33_OFFSET          0x00018c  /* gpio_cfgctl33 */
#define BL602_GPIO_CFGCTL34_OFFSET          0x000190  /* gpio_cfgctl34 */
#define BL602_GPIO_CFGCTL35_OFFSET          0x000194  /* gpio_cfgctl35 */
#define BL602_GPIO_INT_MASK1_OFFSET         0x0001a0  /* gpio_int_mask1 */
#define BL602_GPIO_INT_STAT1_OFFSET         0x0001a8  /* gpio_int_stat1 */
#define BL602_GPIO_INT_CLR1_OFFSET          0x0001b0  /* gpio_int_clr1 */
#define BL602_GPIO_INT_MODE_SET1_OFFSET     0x0001c0  /* gpio_int_mode_set1 */
#define BL602_GPIO_INT_MODE_SET2_OFFSET     0x0001c4  /* gpio_int_mode_set2 */
#define BL602_GPIO_INT_MODE_SET3_OFFSET     0x0001c8  /* gpio_int_mode_set3 */
#define BL602_LED_DRIVER_OFFSET             0x000224  /* led_driver */
#define BL602_GPDAC_CTRL_OFFSET             0x000308  /* gpdac_ctrl */
#define BL602_GPDAC_ACTRL_OFFSET            0x00030c  /* gpdac_actrl */
#define BL602_GPDAC_BCTRL_OFFSET            0x000310  /* gpdac_bctrl */
#define BL602_GPDAC_DATA_OFFSET             0x000314  /* gpdac_data */
#define BL602_TZC_GLB_CTRL_0_OFFSET         0x000f00  /* tzc_glb_ctrl_0 */
#define BL602_TZC_GLB_CTRL_1_OFFSET         0x000f04  /* tzc_glb_ctrl_1 */
#define BL602_TZC_GLB_CTRL_2_OFFSET         0x000f08  /* tzc_glb_ctrl_2 */
#define BL602_TZC_GLB_CTRL_3_OFFSET         0x000f0c  /* tzc_glb_ctrl_3 */

/* Register definitions *****************************************************/

#define BL602_CLK_CFG0            (BL602_GLB_BASE + BL602_CLK_CFG0_OFFSET)
#define BL602_CLK_CFG1            (BL602_GLB_BASE + BL602_CLK_CFG1_OFFSET)
#define BL602_CLK_CFG2            (BL602_GLB_BASE + BL602_CLK_CFG2_OFFSET)
#define BL602_CLK_CFG3            (BL602_GLB_BASE + BL602_CLK_CFG3_OFFSET)
#define BL602_SWRST_CFG0          (BL602_GLB_BASE + BL602_SWRST_CFG0_OFFSET)
#define BL602_SWRST_CFG1          (BL602_GLB_BASE + BL602_SWRST_CFG1_OFFSET)
#define BL602_SWRST_CFG2          (BL602_GLB_BASE + BL602_SWRST_CFG2_OFFSET)
#define BL602_SWRST_CFG3          (BL602_GLB_BASE + BL602_SWRST_CFG3_OFFSET)
#define BL602_CGEN_CFG0           (BL602_GLB_BASE + BL602_CGEN_CFG0_OFFSET)
#define BL602_CGEN_CFG1           (BL602_GLB_BASE + BL602_CGEN_CFG1_OFFSET)
#define BL602_CGEN_CFG2           (BL602_GLB_BASE + BL602_CGEN_CFG2_OFFSET)
#define BL602_CGEN_CFG3           (BL602_GLB_BASE + BL602_CGEN_CFG3_OFFSET)
#define BL602_MBIST_CTL           (BL602_GLB_BASE + BL602_MBIST_CTL_OFFSET)
#define BL602_MBIST_STAT          (BL602_GLB_BASE + BL602_MBIST_STAT_OFFSET)
#define BL602_BMX_CFG1            (BL602_GLB_BASE + BL602_BMX_CFG1_OFFSET)
#define BL602_BMX_CFG2            (BL602_GLB_BASE + BL602_BMX_CFG2_OFFSET)
#define BL602_BMX_ERR_ADDR        (BL602_GLB_BASE + BL602_BMX_ERR_ADDR_OFFSET)
#define BL602_BMX_DBG_OUT         (BL602_GLB_BASE + BL602_BMX_DBG_OUT_OFFSET)
#define BL602_GLB_RSV0            (BL602_GLB_BASE + BL602_GLB_RSV0_OFFSET)
#define BL602_GLB_RSV1            (BL602_GLB_BASE + BL602_GLB_RSV1_OFFSET)
#define BL602_GLB_RSV2            (BL602_GLB_BASE + BL602_GLB_RSV2_OFFSET)
#define BL602_GLB_RSV3            (BL602_GLB_BASE + BL602_GLB_RSV3_OFFSET)
#define BL602_SRAM_RET            (BL602_GLB_BASE + BL602_SRAM_RET_OFFSET)
#define BL602_SRAM_SLP            (BL602_GLB_BASE + BL602_SRAM_SLP_OFFSET)
#define BL602_SRAM_PARM           (BL602_GLB_BASE + BL602_SRAM_PARM_OFFSET)
#define BL602_SEAM_MISC           (BL602_GLB_BASE + BL602_SEAM_MISC_OFFSET)
#define BL602_GLB_GLB_PARM        (BL602_GLB_BASE + BL602_GLB_PARM_OFFSET)
#define BL602_CPU_CLK_CFG         (BL602_GLB_BASE + BL602_CPU_CLK_CFG_OFFSET)
#define BL602_GPADC_32M_SRC_CTRL  (BL602_GLB_BASE + BL602_GPADC_32M_SRC_CTRL_OFFSET)
#define BL602_DIG32K_WAKEUP_CTRL  (BL602_GLB_BASE + BL602_DIG32K_WAKEUP_CTRL_OFFSET)
#define BL602_WIFI_BT_COEX_CTRL   (BL602_GLB_BASE + BL602_WIFI_BT_COEX_CTRL_OFFSET)
#define BL602_UART_SIG_SEL_0      (BL602_GLB_BASE + BL602_UART_SIG_SEL_0_OFFSET)
#define BL602_GLB_DBG_SEL_LL      (BL602_GLB_BASE + BL602_GLB_DBG_SEL_LL_OFFSET)
#define BL602_GLB_DBG_SEL_LH      (BL602_GLB_BASE + BL602_GLB_DBG_SEL_LH_OFFSET)
#define BL602_GLB_DBG_SEL_HL      (BL602_GLB_BASE + BL602_GLB_DBG_SEL_HL_OFFSET)
#define BL602_GLB_DBG_SEL_HH      (BL602_GLB_BASE + BL602_GLB_DBG_SEL_HH_OFFSET)
#define BL602_GLB_DEBUG           (BL602_GLB_BASE + BL602_GLB_DEBUG_OFFSET)
#define BL602_GPIO_CFGCTL0        (BL602_GLB_BASE + BL602_GPIO_CFGCTL0_OFFSET)
#define BL602_GPIO_CFGCTL1        (BL602_GLB_BASE + BL602_GPIO_CFGCTL1_OFFSET)
#define BL602_GPIO_CFGCTL2        (BL602_GLB_BASE + BL602_GPIO_CFGCTL2_OFFSET)
#define BL602_GPIO_CFGCTL3        (BL602_GLB_BASE + BL602_GPIO_CFGCTL3_OFFSET)
#define BL602_GPIO_CFGCTL4        (BL602_GLB_BASE + BL602_GPIO_CFGCTL4_OFFSET)
#define BL602_GPIO_CFGCTL5        (BL602_GLB_BASE + BL602_GPIO_CFGCTL5_OFFSET)
#define BL602_GPIO_CFGCTL6        (BL602_GLB_BASE + BL602_GPIO_CFGCTL6_OFFSET)
#define BL602_GPIO_CFGCTL7        (BL602_GLB_BASE + BL602_GPIO_CFGCTL7_OFFSET)
#define BL602_GPIO_CFGCTL8        (BL602_GLB_BASE + BL602_GPIO_CFGCTL8_OFFSET)
#define BL602_GPIO_CFGCTL9        (BL602_GLB_BASE + BL602_GPIO_CFGCTL9_OFFSET)
#define BL602_GPIO_CFGCTL10       (BL602_GLB_BASE + BL602_GPIO_CFGCTL10_OFFSET)
#define BL602_GPIO_CFGCTL11       (BL602_GLB_BASE + BL602_GPIO_CFGCTL11_OFFSET)
#define BL602_GPIO_CFGCTL12       (BL602_GLB_BASE + BL602_GPIO_CFGCTL12_OFFSET)
#define BL602_GPIO_CFGCTL13       (BL602_GLB_BASE + BL602_GPIO_CFGCTL13_OFFSET)
#define BL602_GPIO_CFGCTL14       (BL602_GLB_BASE + BL602_GPIO_CFGCTL14_OFFSET)
#define BL602_GPIO_CFGCTL30       (BL602_GLB_BASE + BL602_GPIO_CFGCTL30_OFFSET)
#define BL602_GPIO_CFGCTL31       (BL602_GLB_BASE + BL602_GPIO_CFGCTL31_OFFSET)
#define BL602_GPIO_CFGCTL32       (BL602_GLB_BASE + BL602_GPIO_CFGCTL32_OFFSET)
#define BL602_GPIO_CFGCTL33       (BL602_GLB_BASE + BL602_GPIO_CFGCTL33_OFFSET)
#define BL602_GPIO_CFGCTL34       (BL602_GLB_BASE + BL602_GPIO_CFGCTL34_OFFSET)
#define BL602_GPIO_CFGCTL35       (BL602_GLB_BASE + BL602_GPIO_CFGCTL35_OFFSET)
#define BL602_GPIO_INT_MASK1      (BL602_GLB_BASE + BL602_GPIO_INT_MASK1_OFFSET)
#define BL602_GPIO_INT_STAT1      (BL602_GLB_BASE + BL602_GPIO_INT_STAT1_OFFSET)
#define BL602_GPIO_INT_CLR1       (BL602_GLB_BASE + BL602_GPIO_INT_CLR1_OFFSET)
#define BL602_GPIO_INT_MODE_SET1  (BL602_GLB_BASE + BL602_GPIO_INT_MODE_SET1_OFFSET)
#define BL602_GPIO_INT_MODE_SET2  (BL602_GLB_BASE + BL602_GPIO_INT_MODE_SET2_OFFSET)
#define BL602_GPIO_INT_MODE_SET3  (BL602_GLB_BASE + BL602_GPIO_INT_MODE_SET3_OFFSET)
#define BL602_LED_DRIVER          (BL602_GLB_BASE + BL602_LED_DRIVER_OFFSET)
#define BL602_GPDAC_CTRL          (BL602_GLB_BASE + BL602_GPDAC_CTRL_OFFSET)
#define BL602_GPDAC_ACTRL         (BL602_GLB_BASE + BL602_GPDAC_ACTRL_OFFSET)
#define BL602_GPDAC_BCTRL         (BL602_GLB_BASE + BL602_GPDAC_BCTRL_OFFSET)
#define BL602_GPDAC_DATA          (BL602_GLB_BASE + BL602_GPDAC_DATA_OFFSET)
#define BL602_TZC_GLB_CTRL_0      (BL602_GLB_BASE + BL602_TZC_GLB_CTRL_0_OFFSET)
#define BL602_TZC_GLB_CTRL_1      (BL602_GLB_BASE + BL602_TZC_GLB_CTRL_1_OFFSET)
#define BL602_TZC_GLB_CTRL_2      (BL602_GLB_BASE + BL602_TZC_GLB_CTRL_2_OFFSET)
#define BL602_TZC_GLB_CTRL_3      (BL602_GLB_BASE + BL602_TZC_GLB_CTRL_3_OFFSET)

/* Register bit definitions *************************************************/

#define CLK_CFG0_GLB_ID_SHIFT                        (28)
#define CLK_CFG0_GLB_ID_MASK                         (0x0f << CLK_CFG0_GLB_ID_SHIFT)
#define CLK_CFG0_CHIP_RDY                            (1 << 27)
#define CLK_CFG0_FCLK_SW_STATE_SHIFT                 (24)
#define CLK_CFG0_FCLK_SW_STATE_MASK                  (0x07 << CLK_CFG0_FCLK_SW_STATE_SHIFT)
#define CLK_CFG0_REG_BCLK_DIV_SHIFT                  (16)
#define CLK_CFG0_REG_BCLK_DIV_MASK                   (0xff << CLK_CFG0_REG_BCLK_DIV_SHIFT)
#define CLK_CFG0_REG_HCLK_DIV_SHIFT                  (8)
#define CLK_CFG0_REG_HCLK_DIV_MASK                   (0xff << CLK_CFG0_REG_HCLK_DIV_SHIFT)
#define CLK_CFG0_HBN_ROOT_CLK_SEL_SHIFT              (6)
#define CLK_CFG0_HBN_ROOT_CLK_SEL_MASK               (0x03 << CLK_CFG0_HBN_ROOT_CLK_SEL_SHIFT)
#define CLK_CFG0_REG_PLL_SEL_SHIFT                   (4)
#define CLK_CFG0_REG_PLL_SEL_MASK                    (0x03 << CLK_CFG0_REG_PLL_SEL_SHIFT)
#define CLK_CFG0_REG_BCLK_EN                         (1 << 3)
#define CLK_CFG0_REG_HCLK_EN                         (1 << 2)
#define CLK_CFG0_REG_FCLK_EN                         (1 << 1)
#define CLK_CFG0_REG_PLL_EN                          (1 << 0)

#define CLK_CFG1_BLE_EN                              (1 << 24)
#define CLK_CFG1_BLE_CLK_SEL_SHIFT                   (16)
#define CLK_CFG1_BLE_CLK_SEL_MASK                    (0x3f << CLK_CFG1_BLE_CLK_SEL_SHIFT)
#define CLK_CFG1_WIFI_MAC_WT_DIV_SHIFT               (4)
#define CLK_CFG1_WIFI_MAC_WT_DIV_MASK                (0x0f << CLK_CFG1_WIFI_MAC_WT_DIV_SHIFT)
#define CLK_CFG1_WIFI_MAC_CORE_DIV_MASK              (0x0f)

#define CLK_CFG2_DMA_CLK_EN_SHIFT                    (24)
#define CLK_CFG2_DMA_CLK_EN_MASK                     (0xff << CLK_CFG2_DMA_CLK_EN_SHIFT)
#define CLK_CFG2_IR_CLK_EN                           (1 << 23)
#define CLK_CFG2_IR_CLK_DIV_SHIFT                    (16)
#define CLK_CFG2_IR_CLK_DIV_MASK                     (0x3f << CLK_CFG2_IR_CLK_DIV_SHIFT)
#define CLK_CFG2_SF_CLK_SEL2_SHIFT                   (14)
#define CLK_CFG2_SF_CLK_SEL2_MASK                    (0x03 << CLK_CFG2_SF_CLK_SEL2_SHIFT)
#define CLK_CFG2_SF_CLK_SEL_SHIFT                    (12)
#define CLK_CFG2_SF_CLK_SEL_MASK                     (0x03 << CLK_CFG2_SF_CLK_SEL_SHIFT)
#define CLK_CFG2_SF_CLK_EN                           (1 << 11)
#define CLK_CFG2_SF_CLK_DIV_SHIFT                    (8)
#define CLK_CFG2_SF_CLK_DIV_MASK                     (0x07 << CLK_CFG2_SF_CLK_DIV_SHIFT)
#define CLK_CFG2_HBN_UART_CLK_SEL                    (1 << 7)
#define CLK_CFG2_UART_CLK_EN                         (1 << 4)
#define CLK_CFG2_UART_CLK_DIV_MASK                   (0x07)

#define CLK_CFG3_I2C_CLK_EN                          (1 << 24)
#define CLK_CFG3_I2C_CLK_DIV_SHIFT                   (16)
#define CLK_CFG3_I2C_CLK_DIV_MASK                    (0xff << CLK_CFG3_I2C_CLK_DIV_SHIFT)
#define CLK_CFG3_SPI_CLK_EN                          (1 << 8)
#define CLK_CFG3_SPI_CLK_DIV_MASK                    (0x1f)

#define SWRST_CFG0_SWRST_S30                         (1 << 8)
#define SWRST_CFG0_SWRST_S20                         (1 << 4)
#define SWRST_CFG0_SWRST_S01                         (1 << 1)
#define SWRST_CFG0_SWRST_S00                         (1 << 0)

#define SWRST_CFG1_SWRST_S1A7                        (1 << 23)
#define SWRST_CFG1_SWRST_S1A6                        (1 << 22)
#define SWRST_CFG1_SWRST_S1A5                        (1 << 21)
#define SWRST_CFG1_SWRST_S1A4                        (1 << 20)
#define SWRST_CFG1_SWRST_S1A3                        (1 << 19)
#define SWRST_CFG1_SWRST_S1A2                        (1 << 18)
#define SWRST_CFG1_SWRST_S1A1                        (1 << 17)
#define SWRST_CFG1_SWRST_S1A0                        (1 << 16)
#define SWRST_CFG1_SWRST_S1F                         (1 << 15)
#define SWRST_CFG1_SWRST_S1E                         (1 << 14)
#define SWRST_CFG1_SWRST_S1D                         (1 << 13)
#define SWRST_CFG1_SWRST_S1C                         (1 << 12)
#define SWRST_CFG1_SWRST_S1B                         (1 << 11)
#define SWRST_CFG1_SWRST_S1A                         (1 << 10)
#define SWRST_CFG1_SWRST_S19                         (1 << 9)
#define SWRST_CFG1_SWRST_S18                         (1 << 8)
#define SWRST_CFG1_SWRST_S17                         (1 << 7)
#define SWRST_CFG1_SWRST_S16                         (1 << 6)
#define SWRST_CFG1_SWRST_S15                         (1 << 5)
#define SWRST_CFG1_SWRST_S14                         (1 << 4)
#define SWRST_CFG1_SWRST_S13                         (1 << 3)
#define SWRST_CFG1_SWRST_S12                         (1 << 2)
#define SWRST_CFG1_SWRST_S11                         (1 << 1)
#define SWRST_CFG1_SWRST_S10                         (1 << 0)

#define SWRST_CFG2_PKA_CLK_SEL                       (1 << 24)
#define SWRST_CFG2_CTRL_RESET_DUMMY_SHIFT            (4)
#define SWRST_CFG2_CTRL_RESET_DUMMY_MASK             (0x0f << SWRST_CFG2_CTRL_RESET_DUMMY_SHIFT)
#define SWRST_CFG2_CTRL_SYS_RESET                    (1 << 2)
#define SWRST_CFG2_CTRL_CPU_RESET                    (1 << 1)
#define SWRST_CFG2_CTRL_PWRON_RST                    (1 << 0)

#define CGEN_CFG0_CGEN_M_MASK                        (0xff)

#define CGEN_CFG1_CGEN_S1A_SHIFT                     (16)
#define CGEN_CFG1_CGEN_S1A_MASK                      (0xff << CGEN_CFG1_CGEN_S1A_SHIFT)
#define CGEN_CFG1_CGEN_S1_MASK                       (0xffff)

#define CGEN_CFG2_CGEN_S3                            (1 << 4)
#define CGEN_CFG2_CGEN_S2                            (1 << 0)

#define MBIST_CTL_REG_MBIST_RST_N                    (1 << 31)
#define MBIST_CTL_WIFI_MBIST_MODE                    (1 << 4)
#define MBIST_CTL_OCRAM_MBIST_MODE                   (1 << 3)
#define MBIST_CTL_TAG_MBIST_MODE                     (1 << 2)
#define MBIST_CTL_HSRAM_MBIST_MODE                   (1 << 1)
#define MBIST_CTL_IROM_MBIST_MODE                    (1 << 0)

#define MBIST_STAT_WIFI_MBIST_FAIL                   (1 << 20)
#define MBIST_STAT_OCRAM_MBIST_FAIL                  (1 << 19)
#define MBIST_STAT_TAG_MBIST_FAIL                    (1 << 18)
#define MBIST_STAT_HSRAM_MBIST_FAIL                  (1 << 17)
#define MBIST_STAT_IROM_MBIST_FAIL                   (1 << 16)
#define MBIST_STAT_WIFI_MBIST_DONE                   (1 << 4)
#define MBIST_STAT_OCRAM_MBIST_DONE                  (1 << 3)
#define MBIST_STAT_TAG_MBIST_DONE                    (1 << 2)
#define MBIST_STAT_HSRAM_MBIST_DONE                  (1 << 1)
#define MBIST_STAT_IROM_MBIST_DONE                   (1 << 0)

#define BMX_CFG1_HBN_APB_CFG_SHIFT                   (24)
#define BMX_CFG1_HBN_APB_CFG_MASK                    (0xff << BMX_CFG1_HBN_APB_CFG_SHIFT)
#define BMX_CFG1_PDS_APB_CFG_SHIFT                   (16)
#define BMX_CFG1_PDS_APB_CFG_MASK                    (0xff << BMX_CFG1_PDS_APB_CFG_SHIFT)
#define BMX_CFG1_HSEL_OPTION_SHIFT                   (12)
#define BMX_CFG1_HSEL_OPTION_MASK                    (0x0f << BMX_CFG1_HSEL_OPTION_SHIFT)
#define BMX_CFG1_BMX_GATING_DIS                      (1 << 10)
#define BMX_CFG1_BMX_BUSY_OPTION_DIS                 (1 << 9)
#define BMX_CFG1_BMX_ERR_EN                          (1 << 8)
#define BMX_CFG1_BMX_ARB_MODE_SHIFT                  (4)
#define BMX_CFG1_BMX_ARB_MODE_MASK                   (0x03 << BMX_CFG1_BMX_ARB_MODE_SHIFT)
#define BMX_CFG1_BMX_TIMEOUT_EN_MASK                 (0x0f)

#define BMX_CFG2_BMX_DBG_SEL_SHIFT                   (28)
#define BMX_CFG2_BMX_DBG_SEL_MASK                    (0x0f << BMX_CFG2_BMX_DBG_SEL_SHIFT)
#define BMX_CFG2_BMX_ERR_TZ                          (1 << 5)
#define BMX_CFG2_BMX_ERR_DEC                         (1 << 4)
#define BMX_CFG2_BMX_ERR_ADDR_DIS                    (1 << 0)

#define SEAM_MISC_EM_SEL_MASK                        (0x0f)

#define GLB_PARM_UART_SWAP_SET_SHIFT                 (24)
#define GLB_PARM_UART_SWAP_SET_MASK                  (0x07 << GLB_PARM_UART_SWAP_SET_SHIFT)
#define GLB_PARM_P7_JTAG_USE_IO_2_5                  (1 << 23)
#define GLB_PARM_P6_SDIO_USE_IO_0_5                  (1 << 22)
#define GLB_PARM_P5_DAC_TEST_WITH_JTAG               (1 << 21)
#define GLB_PARM_P4_ADC_TEST_WITH_JTAG               (1 << 20)
#define GLB_PARM_P3_CCI_USE_IO_2_5                   (1 << 19)
#define GLB_PARM_P2_DAC_TEST_WITH_CCI                (1 << 18)
#define GLB_PARM_P1_ADC_TEST_WITH_CCI                (1 << 17)
#define GLB_PARM_REG_CCI_USE_SDIO_PIN                (1 << 16)
#define GLB_PARM_REG_CCI_USE_JTAG_PIN                (1 << 15)
#define GLB_PARM_REG_SPI_0_SWAP                      (1 << 13)
#define GLB_PARM_REG_SPI_0_MASTER_MODE               (1 << 12)
#define GLB_PARM_SEL_EMBEDDED_SFLASH                 (1 << 9)
#define GLB_PARM_SWAP_SFLASH_IO_3_IO_0               (1 << 8)
#define GLB_PARM_JTAG_SWAP_SET_SHIFT                 (2)
#define GLB_PARM_JTAG_SWAP_SET_MASK                  (0x3f << GLB_PARM_JTAG_SWAP_SET_SHIFT)
#define GLB_PARM_REG_EXT_RST_SMT                     (1 << 1)
#define GLB_PARM_REG_BD_EN                           (1 << 0)

#define CPU_CLK_CFG_DEBUG_NDRESET_GATE               (1 << 20)
#define CPU_CLK_CFG_CPU_RTC_SEL                      (1 << 19)
#define CPU_CLK_CFG_CPU_RTC_EN                       (1 << 18)
#define CPU_CLK_CFG_CPU_RTC_DIV_MASK                 (0x1ffff)

#define GPADC_32M_SRC_CTRL_GPADC_32M_DIV_EN          (1 << 8)
#define GPADC_32M_SRC_CTRL_GPADC_32M_CLK_SEL         (1 << 7)
#define GPADC_32M_SRC_CTRL_GPADC_32M_CLK_DIV_MASK    (0x3f)

#define DIG32K_WAKEUP_CTRL_REG_EN_PLATFORM_WAKEUP    (1 << 31)
#define DIG32K_WAKEUP_CTRL_DIG_CLK_SRC_SEL           (1 << 28)
#define DIG32K_WAKEUP_CTRL_DIG_512K_COMP             (1 << 25)
#define DIG32K_WAKEUP_CTRL_DIG_512K_EN               (1 << 24)
#define DIG32K_WAKEUP_CTRL_DIG_512K_DIV_SHIFT        (16)
#define DIG32K_WAKEUP_CTRL_DIG_512K_DIV_MASK         (0x7f << DIG32K_WAKEUP_CTRL_DIG_512K_DIV_SHIFT)
#define DIG32K_WAKEUP_CTRL_DIG_32K_COMP              (1 << 13)
#define DIG32K_WAKEUP_CTRL_DIG_32K_EN                (1 << 12)
#define DIG32K_WAKEUP_CTRL_DIG_32K_DIV_MASK          (0x7ff)

#define WIFI_BT_COEX_CTRL_EN_GPIO_BT_COEX            (1 << 12)
#define WIFI_BT_COEX_CTRL_COEX_BT_BW                 (1 << 11)
#define WIFI_BT_COEX_CTRL_COEX_BT_PTI_SHIFT          (7)
#define WIFI_BT_COEX_CTRL_COEX_BT_PTI_MASK           (0x0f << WIFI_BT_COEX_CTRL_COEX_BT_PTI_SHIFT)
#define WIFI_BT_COEX_CTRL_COEX_BT_CHANNEL_MASK       (0x7f)

#define UART_SIG_SEL_0_UART_SIG_7_SEL_SHIFT          (28)
#define UART_SIG_SEL_0_UART_SIG_7_SEL_MASK           (0x0f << UART_SIG_SEL_0_UART_SIG_7_SEL_SHIFT)
#define UART_SIG_SEL_0_UART_SIG_6_SEL_SHIFT          (24)
#define UART_SIG_SEL_0_UART_SIG_6_SEL_MASK           (0x0f << UART_SIG_SEL_0_UART_SIG_6_SEL_SHIFT)
#define UART_SIG_SEL_0_UART_SIG_5_SEL_SHIFT          (20)
#define UART_SIG_SEL_0_UART_SIG_5_SEL_MASK           (0x0f << UART_SIG_SEL_0_UART_SIG_5_SEL_SHIFT)
#define UART_SIG_SEL_0_UART_SIG_4_SEL_SHIFT          (16)
#define UART_SIG_SEL_0_UART_SIG_4_SEL_MASK           (0x0f << UART_SIG_SEL_0_UART_SIG_4_SEL_SHIFT)
#define UART_SIG_SEL_0_UART_SIG_3_SEL_SHIFT          (12)
#define UART_SIG_SEL_0_UART_SIG_3_SEL_MASK           (0x0f << UART_SIG_SEL_0_UART_SIG_3_SEL_SHIFT)
#define UART_SIG_SEL_0_UART_SIG_2_SEL_SHIFT          (8)
#define UART_SIG_SEL_0_UART_SIG_2_SEL_MASK           (0x0f << UART_SIG_SEL_0_UART_SIG_2_SEL_SHIFT)
#define UART_SIG_SEL_0_UART_SIG_1_SEL_SHIFT          (4)
#define UART_SIG_SEL_0_UART_SIG_1_SEL_MASK           (0x0f << UART_SIG_SEL_0_UART_SIG_1_SEL_SHIFT)
#define UART_SIG_SEL_0_UART_SIG_0_SEL_MASK           (0x0f)

#define UART_SIG_SEL_UART0_RTS                       (0)
#define UART_SIG_SEL_UART0_CTS                       (1)
#define UART_SIG_SEL_UART0_TXD                       (2)
#define UART_SIG_SEL_UART0_RXD                       (3)
#define UART_SIG_SEL_UART1_RTS                       (4)
#define UART_SIG_SEL_UART1_CTS                       (5)
#define UART_SIG_SEL_UART1_TXD                       (6)
#define UART_SIG_SEL_UART1_RXD                       (7)

#define GLB_DEBUG_I_SHIFT                             (1)
#define GLB_DEBUG_I_MASK                              (0x7fffffff << GLB_DEBUG_I_SHIFT)
#define GLB_DEBUG_OE                                  (1 << 0)

#define GPIO_CFGCTL0_REAL_GPIO_1_FUNC_SEL_SHIFT      (28)
#define GPIO_CFGCTL0_REAL_GPIO_1_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL0_REAL_GPIO_1_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL0_GPIO_1_FUNC_SEL_SHIFT           (24)
#define GPIO_CFGCTL0_GPIO_1_FUNC_SEL_MASK            (0x0f << GPIO_CFGCTL0_GPIO_1_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL0_GPIO_1_PD                       (1 << 21)
#define GPIO_CFGCTL0_GPIO_1_PU                       (1 << 20)
#define GPIO_CFGCTL0_GPIO_1_DRV_SHIFT                (18)
#define GPIO_CFGCTL0_GPIO_1_DRV_MASK                 (0x03 << GPIO_CFGCTL0_GPIO_1_DRV_SHIFT)
#define GPIO_CFGCTL0_GPIO_1_SMT                      (1 << 17)
#define GPIO_CFGCTL0_GPIO_1_IE                       (1 << 16)
#define GPIO_CFGCTL0_REAL_GPIO_0_FUNC_SEL_SHIFT      (12)
#define GPIO_CFGCTL0_REAL_GPIO_0_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL0_REAL_GPIO_0_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL0_GPIO_0_FUNC_SEL_SHIFT           (8)
#define GPIO_CFGCTL0_GPIO_0_FUNC_SEL_MASK            (0x0f << GPIO_CFGCTL0_GPIO_0_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL0_GPIO_0_PD                       (1 << 5)
#define GPIO_CFGCTL0_GPIO_0_PU                       (1 << 4)
#define GPIO_CFGCTL0_GPIO_0_DRV_SHIFT                (2)
#define GPIO_CFGCTL0_GPIO_0_DRV_MASK                 (0x03 << GPIO_CFGCTL0_GPIO_0_DRV_SHIFT)
#define GPIO_CFGCTL0_GPIO_0_SMT                      (1 << 1)
#define GPIO_CFGCTL0_GPIO_0_IE                       (1 << 0)

#define GPIO_CFGCTL1_REAL_GPIO_3_FUNC_SEL_SHIFT      (28)
#define GPIO_CFGCTL1_REAL_GPIO_3_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL1_REAL_GPIO_3_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL1_GPIO_3_FUNC_SEL_SHIFT           (24)
#define GPIO_CFGCTL1_GPIO_3_FUNC_SEL_MASK            (0x0f << GPIO_CFGCTL1_GPIO_3_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL1_GPIO_3_PD                       (1 << 21)
#define GPIO_CFGCTL1_GPIO_3_PU                       (1 << 20)
#define GPIO_CFGCTL1_GPIO_3_DRV_SHIFT                (18)
#define GPIO_CFGCTL1_GPIO_3_DRV_MASK                 (0x03 << GPIO_CFGCTL1_GPIO_3_DRV_SHIFT)
#define GPIO_CFGCTL1_GPIO_3_SMT                      (1 << 17)
#define GPIO_CFGCTL1_GPIO_3_IE                       (1 << 16)
#define GPIO_CFGCTL1_REAL_GPIO_2_FUNC_SEL_SHIFT      (12)
#define GPIO_CFGCTL1_REAL_GPIO_2_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL1_REAL_GPIO_2_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL1_GPIO_2_FUNC_SEL_SHIFT           (8)
#define GPIO_CFGCTL1_GPIO_2_FUNC_SEL_MASK            (0x0f << GPIO_CFGCTL1_GPIO_2_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL1_GPIO_2_PD                       (1 << 5)
#define GPIO_CFGCTL1_GPIO_2_PU                       (1 << 4)
#define GPIO_CFGCTL1_GPIO_2_DRV_SHIFT                (2)
#define GPIO_CFGCTL1_GPIO_2_DRV_MASK                 (0x03 << GPIO_CFGCTL1_GPIO_2_DRV_SHIFT)
#define GPIO_CFGCTL1_GPIO_2_SMT                      (1 << 1)
#define GPIO_CFGCTL1_GPIO_2_IE                       (1 << 0)

#define GPIO_CFGCTL2_REAL_GPIO_5_FUNC_SEL_SHIFT      (28)
#define GPIO_CFGCTL2_REAL_GPIO_5_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL2_REAL_GPIO_5_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL2_GPIO_5_FUNC_SEL_SHIFT           (24)
#define GPIO_CFGCTL2_GPIO_5_FUNC_SEL_MASK            (0x0f << GPIO_CFGCTL2_GPIO_5_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL2_GPIO_5_PD                       (1 << 21)
#define GPIO_CFGCTL2_GPIO_5_PU                       (1 << 20)
#define GPIO_CFGCTL2_GPIO_5_DRV_SHIFT                (18)
#define GPIO_CFGCTL2_GPIO_5_DRV_MASK                 (0x03 << GPIO_CFGCTL2_GPIO_5_DRV_SHIFT)
#define GPIO_CFGCTL2_GPIO_5_SMT                      (1 << 17)
#define GPIO_CFGCTL2_GPIO_5_IE                       (1 << 16)
#define GPIO_CFGCTL2_REAL_GPIO_4_FUNC_SEL_SHIFT      (12)
#define GPIO_CFGCTL2_REAL_GPIO_4_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL2_REAL_GPIO_4_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL2_GPIO_4_FUNC_SEL_SHIFT           (8)
#define GPIO_CFGCTL2_GPIO_4_FUNC_SEL_MASK            (0x0f << GPIO_CFGCTL2_GPIO_4_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL2_GPIO_4_PD                       (1 << 5)
#define GPIO_CFGCTL2_GPIO_4_PU                       (1 << 4)
#define GPIO_CFGCTL2_GPIO_4_DRV_SHIFT                (2)
#define GPIO_CFGCTL2_GPIO_4_DRV_MASK                 (0x03 << GPIO_CFGCTL2_GPIO_4_DRV_SHIFT)
#define GPIO_CFGCTL2_GPIO_4_SMT                      (1 << 1)
#define GPIO_CFGCTL2_GPIO_4_IE                       (1 << 0)

#define GPIO_CFGCTL3_GPIO_7_FUNC_SEL_SHIFT       (24)
#define GPIO_CFGCTL3_GPIO_7_FUNC_SEL_MASK        (0x0f << GPIO_CFGCTL3_GPIO_7_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL3_GPIO_7_PD                   (1 << 21)
#define GPIO_CFGCTL3_GPIO_7_PU                   (1 << 20)
#define GPIO_CFGCTL3_GPIO_7_DRV_SHIFT            (18)
#define GPIO_CFGCTL3_GPIO_7_DRV_MASK             (0x03 << GPIO_CFGCTL3_GPIO_7_DRV_SHIFT)
#define GPIO_CFGCTL3_GPIO_7_SMT                  (1 << 17)
#define GPIO_CFGCTL3_GPIO_7_IE                   (1 << 16)
#define GPIO_CFGCTL3_GPIO_6_FUNC_SEL_SHIFT       (8)
#define GPIO_CFGCTL3_GPIO_6_FUNC_SEL_MASK        (0x0f << GPIO_CFGCTL3_GPIO_6_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL3_GPIO_6_PD                   (1 << 5)
#define GPIO_CFGCTL3_GPIO_6_PU                   (1 << 4)
#define GPIO_CFGCTL3_GPIO_6_DRV_SHIFT            (2)
#define GPIO_CFGCTL3_GPIO_6_DRV_MASK             (0x03 << GPIO_CFGCTL3_GPIO_6_DRV_SHIFT)
#define GPIO_CFGCTL3_GPIO_6_SMT                  (1 << 1)
#define GPIO_CFGCTL3_GPIO_6_IE                   (1 << 0)

#define GPIO_CFGCTL4_GPIO_9_FUNC_SEL_SHIFT       (24)
#define GPIO_CFGCTL4_GPIO_9_FUNC_SEL_MASK        (0x0f << GPIO_CFGCTL4_GPIO_9_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL4_GPIO_9_PD                   (1 << 21)
#define GPIO_CFGCTL4_GPIO_9_PU                   (1 << 20)
#define GPIO_CFGCTL4_GPIO_9_DRV_SHIFT            (18)
#define GPIO_CFGCTL4_GPIO_9_DRV_MASK             (0x03 << GPIO_CFGCTL4_GPIO_9_DRV_SHIFT)
#define GPIO_CFGCTL4_GPIO_9_SMT                  (1 << 17)
#define GPIO_CFGCTL4_GPIO_9_IE                   (1 << 16)
#define GPIO_CFGCTL4_GPIO_8_FUNC_SEL_SHIFT       (8)
#define GPIO_CFGCTL4_GPIO_8_FUNC_SEL_MASK        (0x0f << GPIO_CFGCTL4_GPIO_8_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL4_GPIO_8_PD                   (1 << 5)
#define GPIO_CFGCTL4_GPIO_8_PU                   (1 << 4)
#define GPIO_CFGCTL4_GPIO_8_DRV_SHIFT            (2)
#define GPIO_CFGCTL4_GPIO_8_DRV_MASK             (0x03 << GPIO_CFGCTL4_GPIO_8_DRV_SHIFT)
#define GPIO_CFGCTL4_GPIO_8_SMT                  (1 << 1)
#define GPIO_CFGCTL4_GPIO_8_IE                   (1 << 0)

#define GPIO_CFGCTL5_GPIO_11_FUNC_SEL_SHIFT      (24)
#define GPIO_CFGCTL5_GPIO_11_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL5_GPIO_11_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL5_GPIO_11_PD                  (1 << 21)
#define GPIO_CFGCTL5_GPIO_11_PU                  (1 << 20)
#define GPIO_CFGCTL5_GPIO_11_DRV_SHIFT           (18)
#define GPIO_CFGCTL5_GPIO_11_DRV_MASK            (0x03 << GPIO_CFGCTL5_GPIO_11_DRV_SHIFT)
#define GPIO_CFGCTL5_GPIO_11_SMT                 (1 << 17)
#define GPIO_CFGCTL5_GPIO_11_IE                  (1 << 16)
#define GPIO_CFGCTL5_GPIO_10_FUNC_SEL_SHIFT      (8)
#define GPIO_CFGCTL5_GPIO_10_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL5_GPIO_10_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL5_GPIO_10_PD                  (1 << 5)
#define GPIO_CFGCTL5_GPIO_10_PU                  (1 << 4)
#define GPIO_CFGCTL5_GPIO_10_DRV_SHIFT           (2)
#define GPIO_CFGCTL5_GPIO_10_DRV_MASK            (0x03 << GPIO_CFGCTL5_GPIO_10_DRV_SHIFT)
#define GPIO_CFGCTL5_GPIO_10_SMT                 (1 << 1)
#define GPIO_CFGCTL5_GPIO_10_IE                  (1 << 0)

#define GPIO_CFGCTL6_GPIO_13_FUNC_SEL_SHIFT      (24)
#define GPIO_CFGCTL6_GPIO_13_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL6_GPIO_13_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL6_GPIO_13_PD                  (1 << 21)
#define GPIO_CFGCTL6_GPIO_13_PU                  (1 << 20)
#define GPIO_CFGCTL6_GPIO_13_DRV_SHIFT           (18)
#define GPIO_CFGCTL6_GPIO_13_DRV_MASK            (0x03 << GPIO_CFGCTL6_GPIO_13_DRV_SHIFT)
#define GPIO_CFGCTL6_GPIO_13_SMT                 (1 << 17)
#define GPIO_CFGCTL6_GPIO_13_IE                  (1 << 16)
#define GPIO_CFGCTL6_GPIO_12_FUNC_SEL_SHIFT      (8)
#define GPIO_CFGCTL6_GPIO_12_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL6_GPIO_12_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL6_GPIO_12_PD                  (1 << 5)
#define GPIO_CFGCTL6_GPIO_12_PU                  (1 << 4)
#define GPIO_CFGCTL6_GPIO_12_DRV_SHIFT           (2)
#define GPIO_CFGCTL6_GPIO_12_DRV_MASK            (0x03 << GPIO_CFGCTL6_GPIO_12_DRV_SHIFT)
#define GPIO_CFGCTL6_GPIO_12_SMT                 (1 << 1)
#define GPIO_CFGCTL6_GPIO_12_IE                  (1 << 0)

#define GPIO_CFGCTL7_GPIO_15_FUNC_SEL_SHIFT      (24)
#define GPIO_CFGCTL7_GPIO_15_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL7_GPIO_15_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL7_GPIO_15_PD                  (1 << 21)
#define GPIO_CFGCTL7_GPIO_15_PU                  (1 << 20)
#define GPIO_CFGCTL7_GPIO_15_DRV_SHIFT           (18)
#define GPIO_CFGCTL7_GPIO_15_DRV_MASK            (0x03 << GPIO_CFGCTL7_GPIO_15_DRV_SHIFT)
#define GPIO_CFGCTL7_GPIO_15_SMT                 (1 << 17)
#define GPIO_CFGCTL7_GPIO_15_IE                  (1 << 16)
#define GPIO_CFGCTL7_GPIO_14_FUNC_SEL_SHIFT      (8)
#define GPIO_CFGCTL7_GPIO_14_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL7_GPIO_14_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL7_GPIO_14_PD                  (1 << 5)
#define GPIO_CFGCTL7_GPIO_14_PU                  (1 << 4)
#define GPIO_CFGCTL7_GPIO_14_DRV_SHIFT           (2)
#define GPIO_CFGCTL7_GPIO_14_DRV_MASK            (0x03 << GPIO_CFGCTL7_GPIO_14_DRV_SHIFT)
#define GPIO_CFGCTL7_GPIO_14_SMT                 (1 << 1)
#define GPIO_CFGCTL7_GPIO_14_IE                  (1 << 0)

#define GPIO_CFGCTL8_GPIO_17_FUNC_SEL_SHIFT      (24)
#define GPIO_CFGCTL8_GPIO_17_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL8_GPIO_17_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL8_GPIO_17_PD                  (1 << 21)
#define GPIO_CFGCTL8_GPIO_17_PU                  (1 << 20)
#define GPIO_CFGCTL8_GPIO_17_DRV_SHIFT           (18)
#define GPIO_CFGCTL8_GPIO_17_DRV_MASK            (0x03 << GPIO_CFGCTL8_GPIO_17_DRV_SHIFT)
#define GPIO_CFGCTL8_GPIO_17_SMT                 (1 << 17)
#define GPIO_CFGCTL8_GPIO_17_IE                  (1 << 16)
#define GPIO_CFGCTL8_GPIO_16_FUNC_SEL_SHIFT      (8)
#define GPIO_CFGCTL8_GPIO_16_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL8_GPIO_16_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL8_GPIO_16_PD                  (1 << 5)
#define GPIO_CFGCTL8_GPIO_16_PU                  (1 << 4)
#define GPIO_CFGCTL8_GPIO_16_DRV_SHIFT           (2)
#define GPIO_CFGCTL8_GPIO_16_DRV_MASK            (0x03 << GPIO_CFGCTL8_GPIO_16_DRV_SHIFT)
#define GPIO_CFGCTL8_GPIO_16_SMT                 (1 << 1)
#define GPIO_CFGCTL8_GPIO_16_IE                  (1 << 0)

#define GPIO_CFGCTL9_GPIO_19_FUNC_SEL_SHIFT      (24)
#define GPIO_CFGCTL9_GPIO_19_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL9_GPIO_19_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL9_GPIO_19_PD                  (1 << 21)
#define GPIO_CFGCTL9_GPIO_19_PU                  (1 << 20)
#define GPIO_CFGCTL9_GPIO_19_DRV_SHIFT           (18)
#define GPIO_CFGCTL9_GPIO_19_DRV_MASK            (0x03 << GPIO_CFGCTL9_GPIO_19_DRV_SHIFT)
#define GPIO_CFGCTL9_GPIO_19_SMT                 (1 << 17)
#define GPIO_CFGCTL9_GPIO_19_IE                  (1 << 16)
#define GPIO_CFGCTL9_GPIO_18_FUNC_SEL_SHIFT      (8)
#define GPIO_CFGCTL9_GPIO_18_FUNC_SEL_MASK       (0x0f << GPIO_CFGCTL9_GPIO_18_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL9_GPIO_18_PD                  (1 << 5)
#define GPIO_CFGCTL9_GPIO_18_PU                  (1 << 4)
#define GPIO_CFGCTL9_GPIO_18_DRV_SHIFT           (2)
#define GPIO_CFGCTL9_GPIO_18_DRV_MASK            (0x03 << GPIO_CFGCTL9_GPIO_18_DRV_SHIFT)
#define GPIO_CFGCTL9_GPIO_18_SMT                 (1 << 1)
#define GPIO_CFGCTL9_GPIO_18_IE                  (1 << 0)

#define GPIO_CFGCTL10_GPIO_21_FUNC_SEL_SHIFT     (24)
#define GPIO_CFGCTL10_GPIO_21_FUNC_SEL_MASK      (0x0f << GPIO_CFGCTL10_GPIO_21_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL10_GPIO_21_PD                 (1 << 21)
#define GPIO_CFGCTL10_GPIO_21_PU                 (1 << 20)
#define GPIO_CFGCTL10_GPIO_21_DRV_SHIFT          (18)
#define GPIO_CFGCTL10_GPIO_21_DRV_MASK           (0x03 << GPIO_CFGCTL10_GPIO_21_DRV_SHIFT)
#define GPIO_CFGCTL10_GPIO_21_SMT                (1 << 17)
#define GPIO_CFGCTL10_GPIO_21_IE                 (1 << 16)
#define GPIO_CFGCTL10_GPIO_20_FUNC_SEL_SHIFT     (8)
#define GPIO_CFGCTL10_GPIO_20_FUNC_SEL_MASK      (0x0f << GPIO_CFGCTL10_GPIO_20_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL10_GPIO_20_PD                 (1 << 5)
#define GPIO_CFGCTL10_GPIO_20_PU                 (1 << 4)
#define GPIO_CFGCTL10_GPIO_20_DRV_SHIFT          (2)
#define GPIO_CFGCTL10_GPIO_20_DRV_MASK           (0x03 << GPIO_CFGCTL10_GPIO_20_DRV_SHIFT)
#define GPIO_CFGCTL10_GPIO_20_SMT                (1 << 1)
#define GPIO_CFGCTL10_GPIO_20_IE                 (1 << 0)

#define GPIO_CFGCTL11_GPIO_23_PD                 (1 << 21)
#define GPIO_CFGCTL11_GPIO_23_PU                 (1 << 20)
#define GPIO_CFGCTL11_GPIO_23_DRV_SHIFT          (18)
#define GPIO_CFGCTL11_GPIO_23_DRV_MASK           (0x03 << GPIO_CFGCTL11_GPIO_23_DRV_SHIFT)
#define GPIO_CFGCTL11_GPIO_23_SMT                (1 << 17)
#define GPIO_CFGCTL11_GPIO_23_IE                 (1 << 16)
#define GPIO_CFGCTL11_GPIO_22_FUNC_SEL_SHIFT     (8)
#define GPIO_CFGCTL11_GPIO_22_FUNC_SEL_MASK      (0x0f << GPIO_CFGCTL11_GPIO_22_FUNC_SEL_SHIFT)
#define GPIO_CFGCTL11_GPIO_22_PD                 (1 << 5)
#define GPIO_CFGCTL11_GPIO_22_PU                 (1 << 4)
#define GPIO_CFGCTL11_GPIO_22_DRV_SHIFT          (2)
#define GPIO_CFGCTL11_GPIO_22_DRV_MASK           (0x03 << GPIO_CFGCTL11_GPIO_22_DRV_SHIFT)
#define GPIO_CFGCTL11_GPIO_22_SMT                (1 << 1)
#define GPIO_CFGCTL11_GPIO_22_IE                 (1 << 0)

#define GPIO_CFGCTL12_GPIO_25_PD                 (1 << 21)
#define GPIO_CFGCTL12_GPIO_25_PU                 (1 << 20)
#define GPIO_CFGCTL12_GPIO_25_DRV_SHIFT          (18)
#define GPIO_CFGCTL12_GPIO_25_DRV_MASK           (0x03 << GPIO_CFGCTL12_GPIO_25_DRV_SHIFT)
#define GPIO_CFGCTL12_GPIO_25_SMT                (1 << 17)
#define GPIO_CFGCTL12_GPIO_25_IE                 (1 << 16)
#define GPIO_CFGCTL12_GPIO_24_PD                 (1 << 5)
#define GPIO_CFGCTL12_GPIO_24_PU                 (1 << 4)
#define GPIO_CFGCTL12_GPIO_24_DRV_SHIFT          (2)
#define GPIO_CFGCTL12_GPIO_24_DRV_MASK           (0x03 << GPIO_CFGCTL12_GPIO_24_DRV_SHIFT)
#define GPIO_CFGCTL12_GPIO_24_SMT                (1 << 1)
#define GPIO_CFGCTL12_GPIO_24_IE                 (1 << 0)

#define GPIO_CFGCTL13_GPIO_27_PD                 (1 << 21)
#define GPIO_CFGCTL13_GPIO_27_PU                 (1 << 20)
#define GPIO_CFGCTL13_GPIO_27_DRV_SHIFT          (18)
#define GPIO_CFGCTL13_GPIO_27_DRV_MASK           (0x03 << GPIO_CFGCTL13_GPIO_27_DRV_SHIFT)
#define GPIO_CFGCTL13_GPIO_27_SMT                (1 << 17)
#define GPIO_CFGCTL13_GPIO_27_IE                 (1 << 16)
#define GPIO_CFGCTL13_GPIO_26_PD                 (1 << 5)
#define GPIO_CFGCTL13_GPIO_26_PU                 (1 << 4)
#define GPIO_CFGCTL13_GPIO_26_DRV_SHIFT          (2)
#define GPIO_CFGCTL13_GPIO_26_DRV_MASK           (0x03 << GPIO_CFGCTL13_GPIO_26_DRV_SHIFT)
#define GPIO_CFGCTL13_GPIO_26_SMT                (1 << 1)
#define GPIO_CFGCTL13_GPIO_26_IE                 (1 << 0)

#define GPIO_CFGCTL14_GPIO_28_PD                 (1 << 5)
#define GPIO_CFGCTL14_GPIO_28_PU                 (1 << 4)
#define GPIO_CFGCTL14_GPIO_28_DRV_SHIFT          (2)
#define GPIO_CFGCTL14_GPIO_28_DRV_MASK           (0x03 << GPIO_CFGCTL14_GPIO_28_DRV_SHIFT)
#define GPIO_CFGCTL14_GPIO_28_SMT                (1 << 1)
#define GPIO_CFGCTL14_GPIO_28_IE                 (1 << 0)

#define GPIO_CFGCTL30_GPIO_22_I                  (1 << 22)
#define GPIO_CFGCTL30_GPIO_21_I                  (1 << 21)
#define GPIO_CFGCTL30_GPIO_20_I                  (1 << 20)
#define GPIO_CFGCTL30_GPIO_19_I                  (1 << 19)
#define GPIO_CFGCTL30_GPIO_18_I                  (1 << 18)
#define GPIO_CFGCTL30_GPIO_17_I                  (1 << 17)
#define GPIO_CFGCTL30_GPIO_16_I                  (1 << 16)
#define GPIO_CFGCTL30_GPIO_15_I                  (1 << 15)
#define GPIO_CFGCTL30_GPIO_14_I                  (1 << 14)
#define GPIO_CFGCTL30_GPIO_13_I                  (1 << 13)
#define GPIO_CFGCTL30_GPIO_12_I                  (1 << 12)
#define GPIO_CFGCTL30_GPIO_11_I                  (1 << 11)
#define GPIO_CFGCTL30_GPIO_10_I                  (1 << 10)
#define GPIO_CFGCTL30_GPIO_9_I                   (1 << 9)
#define GPIO_CFGCTL30_GPIO_8_I                   (1 << 8)
#define GPIO_CFGCTL30_GPIO_7_I                   (1 << 7)
#define GPIO_CFGCTL30_GPIO_6_I                   (1 << 6)
#define GPIO_CFGCTL30_GPIO_5_I                   (1 << 5)
#define GPIO_CFGCTL30_GPIO_4_I                   (1 << 4)
#define GPIO_CFGCTL30_GPIO_3_I                   (1 << 3)
#define GPIO_CFGCTL30_GPIO_2_I                   (1 << 2)
#define GPIO_CFGCTL30_GPIO_1_I                   (1 << 1)
#define GPIO_CFGCTL30_GPIO_0_I                   (1 << 0)

#define GPIO_CFGCTL32_GPIO_22_O                  (1 << 22)
#define GPIO_CFGCTL32_GPIO_21_O                  (1 << 21)
#define GPIO_CFGCTL32_GPIO_20_O                  (1 << 20)
#define GPIO_CFGCTL32_GPIO_19_O                  (1 << 19)
#define GPIO_CFGCTL32_GPIO_18_O                  (1 << 18)
#define GPIO_CFGCTL32_GPIO_17_O                  (1 << 17)
#define GPIO_CFGCTL32_GPIO_16_O                  (1 << 16)
#define GPIO_CFGCTL32_GPIO_15_O                  (1 << 15)
#define GPIO_CFGCTL32_GPIO_14_O                  (1 << 14)
#define GPIO_CFGCTL32_GPIO_13_O                  (1 << 13)
#define GPIO_CFGCTL32_GPIO_12_O                  (1 << 12)
#define GPIO_CFGCTL32_GPIO_11_O                  (1 << 11)
#define GPIO_CFGCTL32_GPIO_10_O                  (1 << 10)
#define GPIO_CFGCTL32_GPIO_9_O                   (1 << 9)
#define GPIO_CFGCTL32_GPIO_8_O                   (1 << 8)
#define GPIO_CFGCTL32_GPIO_7_O                   (1 << 7)
#define GPIO_CFGCTL32_GPIO_6_O                   (1 << 6)
#define GPIO_CFGCTL32_GPIO_5_O                   (1 << 5)
#define GPIO_CFGCTL32_GPIO_4_O                   (1 << 4)
#define GPIO_CFGCTL32_GPIO_3_O                   (1 << 3)
#define GPIO_CFGCTL32_GPIO_2_O                   (1 << 2)
#define GPIO_CFGCTL32_GPIO_1_O                   (1 << 1)
#define GPIO_CFGCTL32_GPIO_0_O                   (1 << 0)

#define GPIO_CFGCTL34_GPIO_22_OE                 (1 << 22)
#define GPIO_CFGCTL34_GPIO_21_OE                 (1 << 21)
#define GPIO_CFGCTL34_GPIO_20_OE                 (1 << 20)
#define GPIO_CFGCTL34_GPIO_19_OE                 (1 << 19)
#define GPIO_CFGCTL34_GPIO_18_OE                 (1 << 18)
#define GPIO_CFGCTL34_GPIO_17_OE                 (1 << 17)
#define GPIO_CFGCTL34_GPIO_16_OE                 (1 << 16)
#define GPIO_CFGCTL34_GPIO_15_OE                 (1 << 15)
#define GPIO_CFGCTL34_GPIO_14_OE                 (1 << 14)
#define GPIO_CFGCTL34_GPIO_13_OE                 (1 << 13)
#define GPIO_CFGCTL34_GPIO_12_OE                 (1 << 12)
#define GPIO_CFGCTL34_GPIO_11_OE                 (1 << 11)
#define GPIO_CFGCTL34_GPIO_10_OE                 (1 << 10)
#define GPIO_CFGCTL34_GPIO_9_OE                  (1 << 9)
#define GPIO_CFGCTL34_GPIO_8_OE                  (1 << 8)
#define GPIO_CFGCTL34_GPIO_7_OE                  (1 << 7)
#define GPIO_CFGCTL34_GPIO_6_OE                  (1 << 6)
#define GPIO_CFGCTL34_GPIO_5_OE                  (1 << 5)
#define GPIO_CFGCTL34_GPIO_4_OE                  (1 << 4)
#define GPIO_CFGCTL34_GPIO_3_OE                  (1 << 3)
#define GPIO_CFGCTL34_GPIO_2_OE                  (1 << 2)
#define GPIO_CFGCTL34_GPIO_1_OE                  (1 << 1)
#define GPIO_CFGCTL34_GPIO_0_OE                  (1 << 0)

#define LED_DRIVER_PU_LEDDRV                     (1 << 31)
#define LED_DRIVER_IR_RX_GPIO_SEL_SHIFT          (8)
#define LED_DRIVER_IR_RX_GPIO_SEL_MASK           (0x03 << LED_DRIVER_IR_RX_GPIO_SEL_SHIFT)
#define LED_DRIVER_LEDDRV_IBIAS_SHIFT            (4)
#define LED_DRIVER_LEDDRV_IBIAS_MASK             (0x0f << LED_DRIVER_LEDDRV_IBIAS_SHIFT)
#define LED_DRIVER_LED_DIN_POLARITY_SEL          (1 << 2)
#define LED_DRIVER_LED_DIN_SEL                   (1 << 1)
#define LED_DRIVER_LED_DIN_REG                   (1 << 0)

#define GPDAC_CTRL_GPDAC_TEST_SEL_SHIFT          (9)
#define GPDAC_CTRL_GPDAC_TEST_SEL_MASK           (0x07 << GPDAC_CTRL_GPDAC_TEST_SEL_SHIFT)
#define GPDAC_CTRL_GPDAC_REF_SEL                 (1 << 8)
#define GPDAC_CTRL_GPDAC_TEST_EN                 (1 << 7)
#define GPDAC_CTRL_GPDACB_RSTN_ANA               (1 << 1)
#define GPDAC_CTRL_GPDACA_RSTN_ANA               (1 << 0)

#define GPDAC_ACTRL_GPDAC_A_OUTMUX_SHIFT         (20)
#define GPDAC_ACTRL_GPDAC_A_OUTMUX_MASK          (0x07 << GPDAC_ACTRL_GPDAC_A_OUTMUX_SHIFT)
#define GPDAC_ACTRL_GPDAC_A_RNG_SHIFT            (18)
#define GPDAC_ACTRL_GPDAC_A_RNG_MASK             (0x03 << GPDAC_ACTRL_GPDAC_A_RNG_SHIFT)
#define GPDAC_ACTRL_GPDAC_IOA_EN                 (1 << 1)
#define GPDAC_ACTRL_GPDAC_A_EN                   (1 << 0)

#define GPDAC_BCTRL_GPDAC_B_OUTMUX_SHIFT         (20)
#define GPDAC_BCTRL_GPDAC_B_OUTMUX_MASK          (0x07 << GPDAC_BCTRL_GPDAC_B_OUTMUX_SHIFT)
#define GPDAC_BCTRL_GPDAC_B_RNG_SHIFT            (18)
#define GPDAC_BCTRL_GPDAC_B_RNG_MASK             (0x03 << GPDAC_BCTRL_GPDAC_B_RNG_SHIFT)
#define GPDAC_BCTRL_GPDAC_IOB_EN                 (1 << 1)
#define GPDAC_BCTRL_GPDAC_B_EN                   (1 << 0)

#define GPDAC_DATA_GPDAC_A_DATA_SHIFT            (16)
#define GPDAC_DATA_GPDAC_A_DATA_MASK             (0x3ff << GPDAC_DATA_GPDAC_A_DATA_SHIFT)
#define GPDAC_DATA_GPDAC_B_DATA_MASK             (0x3ff)

#define TZC_GLB_CTRL_0_CLK_LOCK              (1 << 31)
#define TZC_GLB_CTRL_0_MBIST_LOCK            (1 << 30)
#define TZC_GLB_CTRL_0_DBG_LOCK              (1 << 29)
#define TZC_GLB_CTRL_0_BMX_LOCK              (1 << 28)
#define TZC_GLB_CTRL_0_L2C_LOCK              (1 << 27)
#define TZC_GLB_CTRL_0_SRAM_LOCK             (1 << 26)
#define TZC_GLB_CTRL_0_MISC_LOCK             (1 << 25)
#define TZC_GLB_CTRL_0_CTRL_UNGATED_AP_LOCK  (1 << 15)
#define TZC_GLB_CTRL_0_CTRL_SYS_RESET_LOCK   (1 << 14)
#define TZC_GLB_CTRL_0_CTRL_CPU_RESET_LOCK   (1 << 13)
#define TZC_GLB_CTRL_0_CTRL_PWRON_RST_LOCK   (1 << 12)
#define TZC_GLB_CTRL_0_SWRST_S30_LOCK        (1 << 8)
#define TZC_GLB_CTRL_0_SWRST_S01_LOCK        (1 << 1)
#define TZC_GLB_CTRL_0_SWRST_S00_LOCK        (1 << 0)

#define TZC_GLB_CTRL_1_SWRST_S1F_LOCK        (1 << 31)
#define TZC_GLB_CTRL_1_SWRST_S1E_LOCK        (1 << 30)
#define TZC_GLB_CTRL_1_SWRST_S1D_LOCK        (1 << 29)
#define TZC_GLB_CTRL_1_SWRST_S1C_LOCK        (1 << 28)
#define TZC_GLB_CTRL_1_SWRST_S1B_LOCK        (1 << 27)
#define TZC_GLB_CTRL_1_SWRST_S1A_LOCK        (1 << 26)
#define TZC_GLB_CTRL_1_SWRST_S19_LOCK        (1 << 25)
#define TZC_GLB_CTRL_1_SWRST_S18_LOCK        (1 << 24)
#define TZC_GLB_CTRL_1_SWRST_S17_LOCK        (1 << 23)
#define TZC_GLB_CTRL_1_SWRST_S16_LOCK        (1 << 22)
#define TZC_GLB_CTRL_1_SWRST_S15_LOCK        (1 << 21)
#define TZC_GLB_CTRL_1_SWRST_S14_LOCK        (1 << 20)
#define TZC_GLB_CTRL_1_SWRST_S13_LOCK        (1 << 19)
#define TZC_GLB_CTRL_1_SWRST_S12_LOCK        (1 << 18)
#define TZC_GLB_CTRL_1_SWRST_S11_LOCK        (1 << 17)
#define TZC_GLB_CTRL_1_SWRST_S10_LOCK        (1 << 16)
#define TZC_GLB_CTRL_1_SWRST_S2F_LOCK        (1 << 15)
#define TZC_GLB_CTRL_1_SWRST_S2E_LOCK        (1 << 14)
#define TZC_GLB_CTRL_1_SWRST_S2D_LOCK        (1 << 13)
#define TZC_GLB_CTRL_1_SWRST_S2C_LOCK        (1 << 12)
#define TZC_GLB_CTRL_1_SWRST_S2B_LOCK        (1 << 11)
#define TZC_GLB_CTRL_1_SWRST_S2A_LOCK        (1 << 10)
#define TZC_GLB_CTRL_1_SWRST_S29_LOCK        (1 << 9)
#define TZC_GLB_CTRL_1_SWRST_S28_LOCK        (1 << 8)
#define TZC_GLB_CTRL_1_SWRST_S27_LOCK        (1 << 7)
#define TZC_GLB_CTRL_1_SWRST_S26_LOCK        (1 << 6)
#define TZC_GLB_CTRL_1_SWRST_S25_LOCK        (1 << 5)
#define TZC_GLB_CTRL_1_SWRST_S24_LOCK        (1 << 4)
#define TZC_GLB_CTRL_1_SWRST_S23_LOCK        (1 << 3)
#define TZC_GLB_CTRL_1_SWRST_S22_LOCK        (1 << 2)
#define TZC_GLB_CTRL_1_SWRST_S21_LOCK        (1 << 1)
#define TZC_GLB_CTRL_1_SWRST_S20_LOCK        (1 << 0)

#define TZC_GLB_CTRL_2_GPIO_28_LOCK          (1 << 28)
#define TZC_GLB_CTRL_2_GPIO_27_LOCK          (1 << 27)
#define TZC_GLB_CTRL_2_GPIO_26_LOCK          (1 << 26)
#define TZC_GLB_CTRL_2_GPIO_25_LOCK          (1 << 25)
#define TZC_GLB_CTRL_2_GPIO_24_LOCK          (1 << 24)
#define TZC_GLB_CTRL_2_GPIO_23_LOCK          (1 << 23)
#define TZC_GLB_CTRL_2_GPIO_22_LOCK          (1 << 22)
#define TZC_GLB_CTRL_2_GPIO_21_LOCK          (1 << 21)
#define TZC_GLB_CTRL_2_GPIO_20_LOCK          (1 << 20)
#define TZC_GLB_CTRL_2_GPIO_19_LOCK          (1 << 19)
#define TZC_GLB_CTRL_2_GPIO_18_LOCK          (1 << 18)
#define TZC_GLB_CTRL_2_GPIO_17_LOCK          (1 << 17)
#define TZC_GLB_CTRL_2_GPIO_16_LOCK          (1 << 16)
#define TZC_GLB_CTRL_2_GPIO_15_LOCK          (1 << 15)
#define TZC_GLB_CTRL_2_GPIO_14_LOCK          (1 << 14)
#define TZC_GLB_CTRL_2_GPIO_13_LOCK          (1 << 13)
#define TZC_GLB_CTRL_2_GPIO_12_LOCK          (1 << 12)
#define TZC_GLB_CTRL_2_GPIO_11_LOCK          (1 << 11)
#define TZC_GLB_CTRL_2_GPIO_10_LOCK          (1 << 10)
#define TZC_GLB_CTRL_2_GPIO_9_LOCK           (1 << 9)
#define TZC_GLB_CTRL_2_GPIO_8_LOCK           (1 << 8)
#define TZC_GLB_CTRL_2_GPIO_7_LOCK           (1 << 7)
#define TZC_GLB_CTRL_2_GPIO_6_LOCK           (1 << 6)
#define TZC_GLB_CTRL_2_GPIO_5_LOCK           (1 << 5)
#define TZC_GLB_CTRL_2_GPIO_4_LOCK           (1 << 4)
#define TZC_GLB_CTRL_2_GPIO_3_LOCK           (1 << 3)
#define TZC_GLB_CTRL_2_GPIO_2_LOCK           (1 << 2)
#define TZC_GLB_CTRL_2_GPIO_1_LOCK           (1 << 1)
#define TZC_GLB_CTRL_2_GPIO_0_LOCK           (1 << 0)

/* Map common names to these SWRST signals */

#define AHB_SLAVE1_GLB      (SWRST_CFG1_SWRST_S10)
#define AHB_SLAVE1_RF       (SWRST_CFG1_SWRST_S11)
#define AHB_SLAVE1_GPIP     (SWRST_CFG1_SWRST_S12)
#define AHB_SLAVE1_DBG      (SWRST_CFG1_SWRST_S13)
#define AHB_SLAVE1_SEC      (SWRST_CFG1_SWRST_S14)
#define AHB_SLAVE1_TZ1      (SWRST_CFG1_SWRST_S15)
#define AHB_SLAVE1_TZ2      (SWRST_CFG1_SWRST_S16)
#define AHB_SLAVE1_EFUSE    (SWRST_CFG1_SWRST_S17)
#define AHB_SLAVE1_CCI      (SWRST_CFG1_SWRST_S18)
#define AHB_SLAVE1_L1C      (SWRST_CFG1_SWRST_S19)

#define AHB_SLAVE1_SFC      (SWRST_CFG1_SWRST_S1B)
#define AHB_SLAVE1_DMA      (SWRST_CFG1_SWRST_S1C)
#define AHB_SLAVE1_SDU      (SWRST_CFG1_SWRST_S1D)
#define AHB_SLAVE1_PDSHBN   (SWRST_CFG1_SWRST_S1E)
#define AHB_SLAVE1_WRAM     (SWRST_CFG1_SWRST_S1F)
#define AHB_SLAVE1_UART0    (SWRST_CFG1_SWRST_S1A0)
#define AHB_SLAVE1_UART1    (SWRST_CFG1_SWRST_S1A1)
#define AHB_SLAVE1_SPI      (SWRST_CFG1_SWRST_S1A2)
#define AHB_SLAVE1_I2C      (SWRST_CFG1_SWRST_S1A3)
#define AHB_SLAVE1_PWM      (SWRST_CFG1_SWRST_S1A4)
#define AHB_SLAVE1_TMR      (SWRST_CFG1_SWRST_S1A5)
#define AHB_SLAVE1_IRR      (SWRST_CFG1_SWRST_S1A6)
#define AHB_SLAVE1_CKS      (SWRST_CFG1_SWRST_S1A7)

#endif /* __ARCH_RISCV_SRC_HARDWARE_GLB_H */
