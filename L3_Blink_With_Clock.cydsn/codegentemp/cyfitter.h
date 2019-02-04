/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* Clock_1 */
#define Clock_1__DIVIDER_MASK 0x0000FFFFu
#define Clock_1__ENABLE CYREG_CLK_DIVIDER_B00
#define Clock_1__ENABLE_MASK 0x80000000u
#define Clock_1__MASK 0x80000000u
#define Clock_1__REGISTER CYREG_CLK_DIVIDER_B00

/* Clock_2 */
#define Clock_2__DIVIDER_MASK 0x0000FFFFu
#define Clock_2__ENABLE CYREG_CLK_DIVIDER_B01
#define Clock_2__ENABLE_MASK 0x80000000u
#define Clock_2__MASK 0x80000000u
#define Clock_2__REGISTER CYREG_CLK_DIVIDER_B01

/* Clock_3 */
#define Clock_3__DIVIDER_MASK 0x0000FFFFu
#define Clock_3__ENABLE CYREG_CLK_DIVIDER_B02
#define Clock_3__ENABLE_MASK 0x80000000u
#define Clock_3__MASK 0x80000000u
#define Clock_3__REGISTER CYREG_CLK_DIVIDER_B02

/* Pin_red */
#define Pin_red__0__DM__MASK 0x1C0000u
#define Pin_red__0__DM__SHIFT 18u
#define Pin_red__0__DR CYREG_PRT1_DR
#define Pin_red__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Pin_red__0__HSIOM_MASK 0x0F000000u
#define Pin_red__0__HSIOM_SHIFT 24u
#define Pin_red__0__INTCFG CYREG_PRT1_INTCFG
#define Pin_red__0__INTSTAT CYREG_PRT1_INTSTAT
#define Pin_red__0__MASK 0x40u
#define Pin_red__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define Pin_red__0__OUT_SEL_SHIFT 12u
#define Pin_red__0__OUT_SEL_VAL 1u
#define Pin_red__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Pin_red__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Pin_red__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Pin_red__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Pin_red__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Pin_red__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Pin_red__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Pin_red__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Pin_red__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Pin_red__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Pin_red__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Pin_red__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Pin_red__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Pin_red__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Pin_red__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Pin_red__0__PC CYREG_PRT1_PC
#define Pin_red__0__PC2 CYREG_PRT1_PC2
#define Pin_red__0__PORT 1u
#define Pin_red__0__PS CYREG_PRT1_PS
#define Pin_red__0__SHIFT 6u
#define Pin_red__DR CYREG_PRT1_DR
#define Pin_red__INTCFG CYREG_PRT1_INTCFG
#define Pin_red__INTSTAT CYREG_PRT1_INTSTAT
#define Pin_red__MASK 0x40u
#define Pin_red__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Pin_red__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Pin_red__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Pin_red__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Pin_red__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Pin_red__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Pin_red__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Pin_red__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Pin_red__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Pin_red__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Pin_red__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Pin_red__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Pin_red__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Pin_red__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Pin_red__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Pin_red__PC CYREG_PRT1_PC
#define Pin_red__PC2 CYREG_PRT1_PC2
#define Pin_red__PORT 1u
#define Pin_red__PS CYREG_PRT1_PS
#define Pin_red__SHIFT 6u

/* Pin_blue */
#define Pin_blue__0__DM__MASK 0xE00u
#define Pin_blue__0__DM__SHIFT 9u
#define Pin_blue__0__DR CYREG_PRT0_DR
#define Pin_blue__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Pin_blue__0__HSIOM_MASK 0x0000F000u
#define Pin_blue__0__HSIOM_SHIFT 12u
#define Pin_blue__0__INTCFG CYREG_PRT0_INTCFG
#define Pin_blue__0__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_blue__0__MASK 0x08u
#define Pin_blue__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define Pin_blue__0__OUT_SEL_SHIFT 6u
#define Pin_blue__0__OUT_SEL_VAL 2u
#define Pin_blue__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_blue__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_blue__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_blue__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_blue__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_blue__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_blue__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_blue__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_blue__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_blue__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_blue__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_blue__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_blue__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_blue__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_blue__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_blue__0__PC CYREG_PRT0_PC
#define Pin_blue__0__PC2 CYREG_PRT0_PC2
#define Pin_blue__0__PORT 0u
#define Pin_blue__0__PS CYREG_PRT0_PS
#define Pin_blue__0__SHIFT 3u
#define Pin_blue__DR CYREG_PRT0_DR
#define Pin_blue__INTCFG CYREG_PRT0_INTCFG
#define Pin_blue__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_blue__MASK 0x08u
#define Pin_blue__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_blue__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_blue__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_blue__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_blue__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_blue__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_blue__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_blue__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_blue__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_blue__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_blue__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_blue__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_blue__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_blue__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_blue__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_blue__PC CYREG_PRT0_PC
#define Pin_blue__PC2 CYREG_PRT0_PC2
#define Pin_blue__PORT 0u
#define Pin_blue__PS CYREG_PRT0_PS
#define Pin_blue__SHIFT 3u

/* Pin_green */
#define Pin_green__0__DM__MASK 0x1C0u
#define Pin_green__0__DM__SHIFT 6u
#define Pin_green__0__DR CYREG_PRT0_DR
#define Pin_green__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Pin_green__0__HSIOM_MASK 0x00000F00u
#define Pin_green__0__HSIOM_SHIFT 8u
#define Pin_green__0__INTCFG CYREG_PRT0_INTCFG
#define Pin_green__0__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_green__0__MASK 0x04u
#define Pin_green__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define Pin_green__0__OUT_SEL_SHIFT 4u
#define Pin_green__0__OUT_SEL_VAL 0u
#define Pin_green__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_green__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_green__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_green__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_green__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_green__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_green__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_green__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_green__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_green__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_green__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_green__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_green__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_green__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_green__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_green__0__PC CYREG_PRT0_PC
#define Pin_green__0__PC2 CYREG_PRT0_PC2
#define Pin_green__0__PORT 0u
#define Pin_green__0__PS CYREG_PRT0_PS
#define Pin_green__0__SHIFT 2u
#define Pin_green__DR CYREG_PRT0_DR
#define Pin_green__INTCFG CYREG_PRT0_INTCFG
#define Pin_green__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_green__MASK 0x04u
#define Pin_green__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_green__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_green__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_green__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_green__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_green__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_green__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_green__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_green__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_green__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_green__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_green__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_green__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_green__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_green__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_green__PC CYREG_PRT0_PC
#define Pin_green__PC2 CYREG_PRT0_PC2
#define Pin_green__PORT 0u
#define Pin_green__PS CYREG_PRT0_PS
#define Pin_green__SHIFT 2u

/* Miscellaneous */
#define CY_PROJECT_NAME "L3_Blink_With_Clock"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */