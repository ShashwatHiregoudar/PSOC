/*******************************************************************************
* File Name: cyfittergnu.inc
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

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* LCD */
.set LCD_LCDPort__0__DM__MASK, 0x38
.set LCD_LCDPort__0__DM__SHIFT, 3
.set LCD_LCDPort__0__DR, CYREG_PRT2_DR
.set LCD_LCDPort__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set LCD_LCDPort__0__HSIOM_MASK, 0x000000F0
.set LCD_LCDPort__0__HSIOM_SHIFT, 4
.set LCD_LCDPort__0__INTCFG, CYREG_PRT2_INTCFG
.set LCD_LCDPort__0__INTSTAT, CYREG_PRT2_INTSTAT
.set LCD_LCDPort__0__MASK, 0x02
.set LCD_LCDPort__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set LCD_LCDPort__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set LCD_LCDPort__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set LCD_LCDPort__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set LCD_LCDPort__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set LCD_LCDPort__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set LCD_LCDPort__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set LCD_LCDPort__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set LCD_LCDPort__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set LCD_LCDPort__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set LCD_LCDPort__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set LCD_LCDPort__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set LCD_LCDPort__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set LCD_LCDPort__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set LCD_LCDPort__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set LCD_LCDPort__0__PC, CYREG_PRT2_PC
.set LCD_LCDPort__0__PC2, CYREG_PRT2_PC2
.set LCD_LCDPort__0__PORT, 2
.set LCD_LCDPort__0__PS, CYREG_PRT2_PS
.set LCD_LCDPort__0__SHIFT, 1
.set LCD_LCDPort__1__DM__MASK, 0x1C0
.set LCD_LCDPort__1__DM__SHIFT, 6
.set LCD_LCDPort__1__DR, CYREG_PRT2_DR
.set LCD_LCDPort__1__HSIOM, CYREG_HSIOM_PORT_SEL2
.set LCD_LCDPort__1__HSIOM_MASK, 0x00000F00
.set LCD_LCDPort__1__HSIOM_SHIFT, 8
.set LCD_LCDPort__1__INTCFG, CYREG_PRT2_INTCFG
.set LCD_LCDPort__1__INTSTAT, CYREG_PRT2_INTSTAT
.set LCD_LCDPort__1__MASK, 0x04
.set LCD_LCDPort__1__PA__CFG0, CYREG_UDB_PA2_CFG0
.set LCD_LCDPort__1__PA__CFG1, CYREG_UDB_PA2_CFG1
.set LCD_LCDPort__1__PA__CFG10, CYREG_UDB_PA2_CFG10
.set LCD_LCDPort__1__PA__CFG11, CYREG_UDB_PA2_CFG11
.set LCD_LCDPort__1__PA__CFG12, CYREG_UDB_PA2_CFG12
.set LCD_LCDPort__1__PA__CFG13, CYREG_UDB_PA2_CFG13
.set LCD_LCDPort__1__PA__CFG14, CYREG_UDB_PA2_CFG14
.set LCD_LCDPort__1__PA__CFG2, CYREG_UDB_PA2_CFG2
.set LCD_LCDPort__1__PA__CFG3, CYREG_UDB_PA2_CFG3
.set LCD_LCDPort__1__PA__CFG4, CYREG_UDB_PA2_CFG4
.set LCD_LCDPort__1__PA__CFG5, CYREG_UDB_PA2_CFG5
.set LCD_LCDPort__1__PA__CFG6, CYREG_UDB_PA2_CFG6
.set LCD_LCDPort__1__PA__CFG7, CYREG_UDB_PA2_CFG7
.set LCD_LCDPort__1__PA__CFG8, CYREG_UDB_PA2_CFG8
.set LCD_LCDPort__1__PA__CFG9, CYREG_UDB_PA2_CFG9
.set LCD_LCDPort__1__PC, CYREG_PRT2_PC
.set LCD_LCDPort__1__PC2, CYREG_PRT2_PC2
.set LCD_LCDPort__1__PORT, 2
.set LCD_LCDPort__1__PS, CYREG_PRT2_PS
.set LCD_LCDPort__1__SHIFT, 2
.set LCD_LCDPort__2__DM__MASK, 0xE00
.set LCD_LCDPort__2__DM__SHIFT, 9
.set LCD_LCDPort__2__DR, CYREG_PRT2_DR
.set LCD_LCDPort__2__HSIOM, CYREG_HSIOM_PORT_SEL2
.set LCD_LCDPort__2__HSIOM_MASK, 0x0000F000
.set LCD_LCDPort__2__HSIOM_SHIFT, 12
.set LCD_LCDPort__2__INTCFG, CYREG_PRT2_INTCFG
.set LCD_LCDPort__2__INTSTAT, CYREG_PRT2_INTSTAT
.set LCD_LCDPort__2__MASK, 0x08
.set LCD_LCDPort__2__PA__CFG0, CYREG_UDB_PA2_CFG0
.set LCD_LCDPort__2__PA__CFG1, CYREG_UDB_PA2_CFG1
.set LCD_LCDPort__2__PA__CFG10, CYREG_UDB_PA2_CFG10
.set LCD_LCDPort__2__PA__CFG11, CYREG_UDB_PA2_CFG11
.set LCD_LCDPort__2__PA__CFG12, CYREG_UDB_PA2_CFG12
.set LCD_LCDPort__2__PA__CFG13, CYREG_UDB_PA2_CFG13
.set LCD_LCDPort__2__PA__CFG14, CYREG_UDB_PA2_CFG14
.set LCD_LCDPort__2__PA__CFG2, CYREG_UDB_PA2_CFG2
.set LCD_LCDPort__2__PA__CFG3, CYREG_UDB_PA2_CFG3
.set LCD_LCDPort__2__PA__CFG4, CYREG_UDB_PA2_CFG4
.set LCD_LCDPort__2__PA__CFG5, CYREG_UDB_PA2_CFG5
.set LCD_LCDPort__2__PA__CFG6, CYREG_UDB_PA2_CFG6
.set LCD_LCDPort__2__PA__CFG7, CYREG_UDB_PA2_CFG7
.set LCD_LCDPort__2__PA__CFG8, CYREG_UDB_PA2_CFG8
.set LCD_LCDPort__2__PA__CFG9, CYREG_UDB_PA2_CFG9
.set LCD_LCDPort__2__PC, CYREG_PRT2_PC
.set LCD_LCDPort__2__PC2, CYREG_PRT2_PC2
.set LCD_LCDPort__2__PORT, 2
.set LCD_LCDPort__2__PS, CYREG_PRT2_PS
.set LCD_LCDPort__2__SHIFT, 3
.set LCD_LCDPort__3__DM__MASK, 0x7000
.set LCD_LCDPort__3__DM__SHIFT, 12
.set LCD_LCDPort__3__DR, CYREG_PRT2_DR
.set LCD_LCDPort__3__HSIOM, CYREG_HSIOM_PORT_SEL2
.set LCD_LCDPort__3__HSIOM_MASK, 0x000F0000
.set LCD_LCDPort__3__HSIOM_SHIFT, 16
.set LCD_LCDPort__3__INTCFG, CYREG_PRT2_INTCFG
.set LCD_LCDPort__3__INTSTAT, CYREG_PRT2_INTSTAT
.set LCD_LCDPort__3__MASK, 0x10
.set LCD_LCDPort__3__PA__CFG0, CYREG_UDB_PA2_CFG0
.set LCD_LCDPort__3__PA__CFG1, CYREG_UDB_PA2_CFG1
.set LCD_LCDPort__3__PA__CFG10, CYREG_UDB_PA2_CFG10
.set LCD_LCDPort__3__PA__CFG11, CYREG_UDB_PA2_CFG11
.set LCD_LCDPort__3__PA__CFG12, CYREG_UDB_PA2_CFG12
.set LCD_LCDPort__3__PA__CFG13, CYREG_UDB_PA2_CFG13
.set LCD_LCDPort__3__PA__CFG14, CYREG_UDB_PA2_CFG14
.set LCD_LCDPort__3__PA__CFG2, CYREG_UDB_PA2_CFG2
.set LCD_LCDPort__3__PA__CFG3, CYREG_UDB_PA2_CFG3
.set LCD_LCDPort__3__PA__CFG4, CYREG_UDB_PA2_CFG4
.set LCD_LCDPort__3__PA__CFG5, CYREG_UDB_PA2_CFG5
.set LCD_LCDPort__3__PA__CFG6, CYREG_UDB_PA2_CFG6
.set LCD_LCDPort__3__PA__CFG7, CYREG_UDB_PA2_CFG7
.set LCD_LCDPort__3__PA__CFG8, CYREG_UDB_PA2_CFG8
.set LCD_LCDPort__3__PA__CFG9, CYREG_UDB_PA2_CFG9
.set LCD_LCDPort__3__PC, CYREG_PRT2_PC
.set LCD_LCDPort__3__PC2, CYREG_PRT2_PC2
.set LCD_LCDPort__3__PORT, 2
.set LCD_LCDPort__3__PS, CYREG_PRT2_PS
.set LCD_LCDPort__3__SHIFT, 4
.set LCD_LCDPort__4__DM__MASK, 0x38000
.set LCD_LCDPort__4__DM__SHIFT, 15
.set LCD_LCDPort__4__DR, CYREG_PRT2_DR
.set LCD_LCDPort__4__HSIOM, CYREG_HSIOM_PORT_SEL2
.set LCD_LCDPort__4__HSIOM_MASK, 0x00F00000
.set LCD_LCDPort__4__HSIOM_SHIFT, 20
.set LCD_LCDPort__4__INTCFG, CYREG_PRT2_INTCFG
.set LCD_LCDPort__4__INTSTAT, CYREG_PRT2_INTSTAT
.set LCD_LCDPort__4__MASK, 0x20
.set LCD_LCDPort__4__PA__CFG0, CYREG_UDB_PA2_CFG0
.set LCD_LCDPort__4__PA__CFG1, CYREG_UDB_PA2_CFG1
.set LCD_LCDPort__4__PA__CFG10, CYREG_UDB_PA2_CFG10
.set LCD_LCDPort__4__PA__CFG11, CYREG_UDB_PA2_CFG11
.set LCD_LCDPort__4__PA__CFG12, CYREG_UDB_PA2_CFG12
.set LCD_LCDPort__4__PA__CFG13, CYREG_UDB_PA2_CFG13
.set LCD_LCDPort__4__PA__CFG14, CYREG_UDB_PA2_CFG14
.set LCD_LCDPort__4__PA__CFG2, CYREG_UDB_PA2_CFG2
.set LCD_LCDPort__4__PA__CFG3, CYREG_UDB_PA2_CFG3
.set LCD_LCDPort__4__PA__CFG4, CYREG_UDB_PA2_CFG4
.set LCD_LCDPort__4__PA__CFG5, CYREG_UDB_PA2_CFG5
.set LCD_LCDPort__4__PA__CFG6, CYREG_UDB_PA2_CFG6
.set LCD_LCDPort__4__PA__CFG7, CYREG_UDB_PA2_CFG7
.set LCD_LCDPort__4__PA__CFG8, CYREG_UDB_PA2_CFG8
.set LCD_LCDPort__4__PA__CFG9, CYREG_UDB_PA2_CFG9
.set LCD_LCDPort__4__PC, CYREG_PRT2_PC
.set LCD_LCDPort__4__PC2, CYREG_PRT2_PC2
.set LCD_LCDPort__4__PORT, 2
.set LCD_LCDPort__4__PS, CYREG_PRT2_PS
.set LCD_LCDPort__4__SHIFT, 5
.set LCD_LCDPort__5__DM__MASK, 0x1C0000
.set LCD_LCDPort__5__DM__SHIFT, 18
.set LCD_LCDPort__5__DR, CYREG_PRT2_DR
.set LCD_LCDPort__5__HSIOM, CYREG_HSIOM_PORT_SEL2
.set LCD_LCDPort__5__HSIOM_MASK, 0x0F000000
.set LCD_LCDPort__5__HSIOM_SHIFT, 24
.set LCD_LCDPort__5__INTCFG, CYREG_PRT2_INTCFG
.set LCD_LCDPort__5__INTSTAT, CYREG_PRT2_INTSTAT
.set LCD_LCDPort__5__MASK, 0x40
.set LCD_LCDPort__5__PA__CFG0, CYREG_UDB_PA2_CFG0
.set LCD_LCDPort__5__PA__CFG1, CYREG_UDB_PA2_CFG1
.set LCD_LCDPort__5__PA__CFG10, CYREG_UDB_PA2_CFG10
.set LCD_LCDPort__5__PA__CFG11, CYREG_UDB_PA2_CFG11
.set LCD_LCDPort__5__PA__CFG12, CYREG_UDB_PA2_CFG12
.set LCD_LCDPort__5__PA__CFG13, CYREG_UDB_PA2_CFG13
.set LCD_LCDPort__5__PA__CFG14, CYREG_UDB_PA2_CFG14
.set LCD_LCDPort__5__PA__CFG2, CYREG_UDB_PA2_CFG2
.set LCD_LCDPort__5__PA__CFG3, CYREG_UDB_PA2_CFG3
.set LCD_LCDPort__5__PA__CFG4, CYREG_UDB_PA2_CFG4
.set LCD_LCDPort__5__PA__CFG5, CYREG_UDB_PA2_CFG5
.set LCD_LCDPort__5__PA__CFG6, CYREG_UDB_PA2_CFG6
.set LCD_LCDPort__5__PA__CFG7, CYREG_UDB_PA2_CFG7
.set LCD_LCDPort__5__PA__CFG8, CYREG_UDB_PA2_CFG8
.set LCD_LCDPort__5__PA__CFG9, CYREG_UDB_PA2_CFG9
.set LCD_LCDPort__5__PC, CYREG_PRT2_PC
.set LCD_LCDPort__5__PC2, CYREG_PRT2_PC2
.set LCD_LCDPort__5__PORT, 2
.set LCD_LCDPort__5__PS, CYREG_PRT2_PS
.set LCD_LCDPort__5__SHIFT, 6
.set LCD_LCDPort__6__DM__MASK, 0xE00000
.set LCD_LCDPort__6__DM__SHIFT, 21
.set LCD_LCDPort__6__DR, CYREG_PRT2_DR
.set LCD_LCDPort__6__HSIOM, CYREG_HSIOM_PORT_SEL2
.set LCD_LCDPort__6__HSIOM_MASK, 0xF0000000
.set LCD_LCDPort__6__HSIOM_SHIFT, 28
.set LCD_LCDPort__6__INTCFG, CYREG_PRT2_INTCFG
.set LCD_LCDPort__6__INTSTAT, CYREG_PRT2_INTSTAT
.set LCD_LCDPort__6__MASK, 0x80
.set LCD_LCDPort__6__PA__CFG0, CYREG_UDB_PA2_CFG0
.set LCD_LCDPort__6__PA__CFG1, CYREG_UDB_PA2_CFG1
.set LCD_LCDPort__6__PA__CFG10, CYREG_UDB_PA2_CFG10
.set LCD_LCDPort__6__PA__CFG11, CYREG_UDB_PA2_CFG11
.set LCD_LCDPort__6__PA__CFG12, CYREG_UDB_PA2_CFG12
.set LCD_LCDPort__6__PA__CFG13, CYREG_UDB_PA2_CFG13
.set LCD_LCDPort__6__PA__CFG14, CYREG_UDB_PA2_CFG14
.set LCD_LCDPort__6__PA__CFG2, CYREG_UDB_PA2_CFG2
.set LCD_LCDPort__6__PA__CFG3, CYREG_UDB_PA2_CFG3
.set LCD_LCDPort__6__PA__CFG4, CYREG_UDB_PA2_CFG4
.set LCD_LCDPort__6__PA__CFG5, CYREG_UDB_PA2_CFG5
.set LCD_LCDPort__6__PA__CFG6, CYREG_UDB_PA2_CFG6
.set LCD_LCDPort__6__PA__CFG7, CYREG_UDB_PA2_CFG7
.set LCD_LCDPort__6__PA__CFG8, CYREG_UDB_PA2_CFG8
.set LCD_LCDPort__6__PA__CFG9, CYREG_UDB_PA2_CFG9
.set LCD_LCDPort__6__PC, CYREG_PRT2_PC
.set LCD_LCDPort__6__PC2, CYREG_PRT2_PC2
.set LCD_LCDPort__6__PORT, 2
.set LCD_LCDPort__6__PS, CYREG_PRT2_PS
.set LCD_LCDPort__6__SHIFT, 7
.set LCD_LCDPort__DR, CYREG_PRT2_DR
.set LCD_LCDPort__INTCFG, CYREG_PRT2_INTCFG
.set LCD_LCDPort__INTSTAT, CYREG_PRT2_INTSTAT
.set LCD_LCDPort__MASK, 0xFE
.set LCD_LCDPort__PA__CFG0, CYREG_UDB_PA2_CFG0
.set LCD_LCDPort__PA__CFG1, CYREG_UDB_PA2_CFG1
.set LCD_LCDPort__PA__CFG10, CYREG_UDB_PA2_CFG10
.set LCD_LCDPort__PA__CFG11, CYREG_UDB_PA2_CFG11
.set LCD_LCDPort__PA__CFG12, CYREG_UDB_PA2_CFG12
.set LCD_LCDPort__PA__CFG13, CYREG_UDB_PA2_CFG13
.set LCD_LCDPort__PA__CFG14, CYREG_UDB_PA2_CFG14
.set LCD_LCDPort__PA__CFG2, CYREG_UDB_PA2_CFG2
.set LCD_LCDPort__PA__CFG3, CYREG_UDB_PA2_CFG3
.set LCD_LCDPort__PA__CFG4, CYREG_UDB_PA2_CFG4
.set LCD_LCDPort__PA__CFG5, CYREG_UDB_PA2_CFG5
.set LCD_LCDPort__PA__CFG6, CYREG_UDB_PA2_CFG6
.set LCD_LCDPort__PA__CFG7, CYREG_UDB_PA2_CFG7
.set LCD_LCDPort__PA__CFG8, CYREG_UDB_PA2_CFG8
.set LCD_LCDPort__PA__CFG9, CYREG_UDB_PA2_CFG9
.set LCD_LCDPort__PC, CYREG_PRT2_PC
.set LCD_LCDPort__PC2, CYREG_PRT2_PC2
.set LCD_LCDPort__PORT, 2
.set LCD_LCDPort__PS, CYREG_PRT2_PS
.set LCD_LCDPort__SHIFT, 1

/* Button1 */
.set Button1__0__DM__MASK, 0x1C0000
.set Button1__0__DM__SHIFT, 18
.set Button1__0__DR, CYREG_PRT0_DR
.set Button1__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set Button1__0__HSIOM_MASK, 0x0F000000
.set Button1__0__HSIOM_SHIFT, 24
.set Button1__0__INTCFG, CYREG_PRT0_INTCFG
.set Button1__0__INTSTAT, CYREG_PRT0_INTSTAT
.set Button1__0__MASK, 0x40
.set Button1__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set Button1__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set Button1__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set Button1__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set Button1__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set Button1__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set Button1__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set Button1__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set Button1__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set Button1__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set Button1__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set Button1__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set Button1__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set Button1__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set Button1__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set Button1__0__PC, CYREG_PRT0_PC
.set Button1__0__PC2, CYREG_PRT0_PC2
.set Button1__0__PORT, 0
.set Button1__0__PS, CYREG_PRT0_PS
.set Button1__0__SHIFT, 6
.set Button1__DR, CYREG_PRT0_DR
.set Button1__INTCFG, CYREG_PRT0_INTCFG
.set Button1__INTSTAT, CYREG_PRT0_INTSTAT
.set Button1__MASK, 0x40
.set Button1__PA__CFG0, CYREG_UDB_PA0_CFG0
.set Button1__PA__CFG1, CYREG_UDB_PA0_CFG1
.set Button1__PA__CFG10, CYREG_UDB_PA0_CFG10
.set Button1__PA__CFG11, CYREG_UDB_PA0_CFG11
.set Button1__PA__CFG12, CYREG_UDB_PA0_CFG12
.set Button1__PA__CFG13, CYREG_UDB_PA0_CFG13
.set Button1__PA__CFG14, CYREG_UDB_PA0_CFG14
.set Button1__PA__CFG2, CYREG_UDB_PA0_CFG2
.set Button1__PA__CFG3, CYREG_UDB_PA0_CFG3
.set Button1__PA__CFG4, CYREG_UDB_PA0_CFG4
.set Button1__PA__CFG5, CYREG_UDB_PA0_CFG5
.set Button1__PA__CFG6, CYREG_UDB_PA0_CFG6
.set Button1__PA__CFG7, CYREG_UDB_PA0_CFG7
.set Button1__PA__CFG8, CYREG_UDB_PA0_CFG8
.set Button1__PA__CFG9, CYREG_UDB_PA0_CFG9
.set Button1__PC, CYREG_PRT0_PC
.set Button1__PC2, CYREG_PRT0_PC2
.set Button1__PORT, 0
.set Button1__PS, CYREG_PRT0_PS
.set Button1__SHIFT, 6

/* Button2 */
.set Button2__0__DM__MASK, 0x7000
.set Button2__0__DM__SHIFT, 12
.set Button2__0__DR, CYREG_PRT3_DR
.set Button2__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set Button2__0__HSIOM_MASK, 0x000F0000
.set Button2__0__HSIOM_SHIFT, 16
.set Button2__0__INTCFG, CYREG_PRT3_INTCFG
.set Button2__0__INTSTAT, CYREG_PRT3_INTSTAT
.set Button2__0__MASK, 0x10
.set Button2__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Button2__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Button2__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Button2__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Button2__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Button2__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Button2__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Button2__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Button2__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Button2__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Button2__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Button2__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Button2__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Button2__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Button2__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Button2__0__PC, CYREG_PRT3_PC
.set Button2__0__PC2, CYREG_PRT3_PC2
.set Button2__0__PORT, 3
.set Button2__0__PS, CYREG_PRT3_PS
.set Button2__0__SHIFT, 4
.set Button2__DR, CYREG_PRT3_DR
.set Button2__INTCFG, CYREG_PRT3_INTCFG
.set Button2__INTSTAT, CYREG_PRT3_INTSTAT
.set Button2__MASK, 0x10
.set Button2__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Button2__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Button2__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Button2__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Button2__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Button2__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Button2__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Button2__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Button2__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Button2__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Button2__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Button2__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Button2__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Button2__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Button2__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Button2__PC, CYREG_PRT3_PC
.set Button2__PC2, CYREG_PRT3_PC2
.set Button2__PORT, 3
.set Button2__PS, CYREG_PRT3_PS
.set Button2__SHIFT, 4

/* Button3 */
.set Button3__0__DM__MASK, 0x1C0000
.set Button3__0__DM__SHIFT, 18
.set Button3__0__DR, CYREG_PRT3_DR
.set Button3__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set Button3__0__HSIOM_MASK, 0x0F000000
.set Button3__0__HSIOM_SHIFT, 24
.set Button3__0__INTCFG, CYREG_PRT3_INTCFG
.set Button3__0__INTSTAT, CYREG_PRT3_INTSTAT
.set Button3__0__MASK, 0x40
.set Button3__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Button3__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Button3__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Button3__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Button3__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Button3__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Button3__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Button3__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Button3__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Button3__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Button3__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Button3__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Button3__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Button3__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Button3__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Button3__0__PC, CYREG_PRT3_PC
.set Button3__0__PC2, CYREG_PRT3_PC2
.set Button3__0__PORT, 3
.set Button3__0__PS, CYREG_PRT3_PS
.set Button3__0__SHIFT, 6
.set Button3__DR, CYREG_PRT3_DR
.set Button3__INTCFG, CYREG_PRT3_INTCFG
.set Button3__INTSTAT, CYREG_PRT3_INTSTAT
.set Button3__MASK, 0x40
.set Button3__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Button3__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Button3__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Button3__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Button3__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Button3__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Button3__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Button3__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Button3__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Button3__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Button3__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Button3__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Button3__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Button3__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Button3__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Button3__PC, CYREG_PRT3_PC
.set Button3__PC2, CYREG_PRT3_PC2
.set Button3__PORT, 3
.set Button3__PS, CYREG_PRT3_PS
.set Button3__SHIFT, 6

/* Button4 */
.set Button4__0__DM__MASK, 0x7000
.set Button4__0__DM__SHIFT, 12
.set Button4__0__DR, CYREG_PRT0_DR
.set Button4__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set Button4__0__HSIOM_MASK, 0x000F0000
.set Button4__0__HSIOM_SHIFT, 16
.set Button4__0__INTCFG, CYREG_PRT0_INTCFG
.set Button4__0__INTSTAT, CYREG_PRT0_INTSTAT
.set Button4__0__MASK, 0x10
.set Button4__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set Button4__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set Button4__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set Button4__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set Button4__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set Button4__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set Button4__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set Button4__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set Button4__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set Button4__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set Button4__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set Button4__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set Button4__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set Button4__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set Button4__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set Button4__0__PC, CYREG_PRT0_PC
.set Button4__0__PC2, CYREG_PRT0_PC2
.set Button4__0__PORT, 0
.set Button4__0__PS, CYREG_PRT0_PS
.set Button4__0__SHIFT, 4
.set Button4__DR, CYREG_PRT0_DR
.set Button4__INTCFG, CYREG_PRT0_INTCFG
.set Button4__INTSTAT, CYREG_PRT0_INTSTAT
.set Button4__MASK, 0x10
.set Button4__PA__CFG0, CYREG_UDB_PA0_CFG0
.set Button4__PA__CFG1, CYREG_UDB_PA0_CFG1
.set Button4__PA__CFG10, CYREG_UDB_PA0_CFG10
.set Button4__PA__CFG11, CYREG_UDB_PA0_CFG11
.set Button4__PA__CFG12, CYREG_UDB_PA0_CFG12
.set Button4__PA__CFG13, CYREG_UDB_PA0_CFG13
.set Button4__PA__CFG14, CYREG_UDB_PA0_CFG14
.set Button4__PA__CFG2, CYREG_UDB_PA0_CFG2
.set Button4__PA__CFG3, CYREG_UDB_PA0_CFG3
.set Button4__PA__CFG4, CYREG_UDB_PA0_CFG4
.set Button4__PA__CFG5, CYREG_UDB_PA0_CFG5
.set Button4__PA__CFG6, CYREG_UDB_PA0_CFG6
.set Button4__PA__CFG7, CYREG_UDB_PA0_CFG7
.set Button4__PA__CFG8, CYREG_UDB_PA0_CFG8
.set Button4__PA__CFG9, CYREG_UDB_PA0_CFG9
.set Button4__PC, CYREG_PRT0_PC
.set Button4__PC2, CYREG_PRT0_PC2
.set Button4__PORT, 0
.set Button4__PS, CYREG_PRT0_PS
.set Button4__SHIFT, 4

/* Status_Register */
.set Status_Register_sts_sts_reg__0__MASK, 0x01
.set Status_Register_sts_sts_reg__0__POS, 0
.set Status_Register_sts_sts_reg__1__MASK, 0x02
.set Status_Register_sts_sts_reg__1__POS, 1
.set Status_Register_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG, CYREG_UDB_W16_ACTL_02
.set Status_Register_sts_sts_reg__16BIT_STATUS_REG, CYREG_UDB_W16_ST_02
.set Status_Register_sts_sts_reg__2__MASK, 0x04
.set Status_Register_sts_sts_reg__2__POS, 2
.set Status_Register_sts_sts_reg__3__MASK, 0x08
.set Status_Register_sts_sts_reg__3__POS, 3
.set Status_Register_sts_sts_reg__MASK, 0x0F
.set Status_Register_sts_sts_reg__MASK_REG, CYREG_UDB_W8_MSK_02
.set Status_Register_sts_sts_reg__STATUS_AUX_CTL_REG, CYREG_UDB_W8_ACTL_02
.set Status_Register_sts_sts_reg__STATUS_REG, CYREG_UDB_W8_ST_02

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 24000000
.set CYDEV_BCLK__HFCLK__KHZ, 24000
.set CYDEV_BCLK__HFCLK__MHZ, 24
.set CYDEV_BCLK__SYSCLK__HZ, 24000000
.set CYDEV_BCLK__SYSCLK__KHZ, 24000
.set CYDEV_BCLK__SYSCLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 18
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x04C81193
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 18
.set CYDEV_CHIP_MEMBER_4D, 13
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 19
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 17
.set CYDEV_CHIP_MEMBER_4I, 23
.set CYDEV_CHIP_MEMBER_4J, 14
.set CYDEV_CHIP_MEMBER_4K, 15
.set CYDEV_CHIP_MEMBER_4L, 22
.set CYDEV_CHIP_MEMBER_4M, 21
.set CYDEV_CHIP_MEMBER_4N, 10
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 20
.set CYDEV_CHIP_MEMBER_4Q, 12
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 11
.set CYDEV_CHIP_MEMBER_4T, 9
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 16
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 24
.set CYDEV_CHIP_MEMBER_FM3, 28
.set CYDEV_CHIP_MEMBER_FM4, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 26
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 27
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4A
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4A_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_Disallowed
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 1
.set CYDEV_DFT_SELECT_CLK1, 2
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0400
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 1
.set CYIPBLOCK_M0S8_CTBM_VERSION, 0
.set CYIPBLOCK_m0s8cpuss_VERSION, 0
.set CYIPBLOCK_m0s8csd_VERSION, 0
.set CYIPBLOCK_m0s8gpio2_VERSION, 0
.set CYIPBLOCK_m0s8hsiom4a_VERSION, 0
.set CYIPBLOCK_m0s8lcd_VERSION, 0
.set CYIPBLOCK_m0s8lpcomp_VERSION, 0
.set CYIPBLOCK_m0s8pclk_VERSION, 0
.set CYIPBLOCK_m0s8sar_VERSION, 0
.set CYIPBLOCK_m0s8scb_VERSION, 0
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 0
.set CYIPBLOCK_m0s8udbif_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 2
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
