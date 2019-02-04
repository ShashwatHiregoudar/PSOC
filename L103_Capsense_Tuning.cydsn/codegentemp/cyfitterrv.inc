;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; EZI2C
EZI2C_SCB__BIST_CONTROL EQU CYREG_SCB1_BIST_CONTROL
EZI2C_SCB__BIST_DATA EQU CYREG_SCB1_BIST_DATA
EZI2C_SCB__CTRL EQU CYREG_SCB1_CTRL
EZI2C_SCB__EZ_DATA00 EQU CYREG_SCB1_EZ_DATA00
EZI2C_SCB__EZ_DATA01 EQU CYREG_SCB1_EZ_DATA01
EZI2C_SCB__EZ_DATA02 EQU CYREG_SCB1_EZ_DATA02
EZI2C_SCB__EZ_DATA03 EQU CYREG_SCB1_EZ_DATA03
EZI2C_SCB__EZ_DATA04 EQU CYREG_SCB1_EZ_DATA04
EZI2C_SCB__EZ_DATA05 EQU CYREG_SCB1_EZ_DATA05
EZI2C_SCB__EZ_DATA06 EQU CYREG_SCB1_EZ_DATA06
EZI2C_SCB__EZ_DATA07 EQU CYREG_SCB1_EZ_DATA07
EZI2C_SCB__EZ_DATA08 EQU CYREG_SCB1_EZ_DATA08
EZI2C_SCB__EZ_DATA09 EQU CYREG_SCB1_EZ_DATA09
EZI2C_SCB__EZ_DATA10 EQU CYREG_SCB1_EZ_DATA10
EZI2C_SCB__EZ_DATA11 EQU CYREG_SCB1_EZ_DATA11
EZI2C_SCB__EZ_DATA12 EQU CYREG_SCB1_EZ_DATA12
EZI2C_SCB__EZ_DATA13 EQU CYREG_SCB1_EZ_DATA13
EZI2C_SCB__EZ_DATA14 EQU CYREG_SCB1_EZ_DATA14
EZI2C_SCB__EZ_DATA15 EQU CYREG_SCB1_EZ_DATA15
EZI2C_SCB__EZ_DATA16 EQU CYREG_SCB1_EZ_DATA16
EZI2C_SCB__EZ_DATA17 EQU CYREG_SCB1_EZ_DATA17
EZI2C_SCB__EZ_DATA18 EQU CYREG_SCB1_EZ_DATA18
EZI2C_SCB__EZ_DATA19 EQU CYREG_SCB1_EZ_DATA19
EZI2C_SCB__EZ_DATA20 EQU CYREG_SCB1_EZ_DATA20
EZI2C_SCB__EZ_DATA21 EQU CYREG_SCB1_EZ_DATA21
EZI2C_SCB__EZ_DATA22 EQU CYREG_SCB1_EZ_DATA22
EZI2C_SCB__EZ_DATA23 EQU CYREG_SCB1_EZ_DATA23
EZI2C_SCB__EZ_DATA24 EQU CYREG_SCB1_EZ_DATA24
EZI2C_SCB__EZ_DATA25 EQU CYREG_SCB1_EZ_DATA25
EZI2C_SCB__EZ_DATA26 EQU CYREG_SCB1_EZ_DATA26
EZI2C_SCB__EZ_DATA27 EQU CYREG_SCB1_EZ_DATA27
EZI2C_SCB__EZ_DATA28 EQU CYREG_SCB1_EZ_DATA28
EZI2C_SCB__EZ_DATA29 EQU CYREG_SCB1_EZ_DATA29
EZI2C_SCB__EZ_DATA30 EQU CYREG_SCB1_EZ_DATA30
EZI2C_SCB__EZ_DATA31 EQU CYREG_SCB1_EZ_DATA31
EZI2C_SCB__I2C_CFG EQU CYREG_SCB1_I2C_CFG
EZI2C_SCB__I2C_CTRL EQU CYREG_SCB1_I2C_CTRL
EZI2C_SCB__I2C_M_CMD EQU CYREG_SCB1_I2C_M_CMD
EZI2C_SCB__I2C_S_CMD EQU CYREG_SCB1_I2C_S_CMD
EZI2C_SCB__I2C_STATUS EQU CYREG_SCB1_I2C_STATUS
EZI2C_SCB__INTR_CAUSE EQU CYREG_SCB1_INTR_CAUSE
EZI2C_SCB__INTR_I2C_EC EQU CYREG_SCB1_INTR_I2C_EC
EZI2C_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB1_INTR_I2C_EC_MASK
EZI2C_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB1_INTR_I2C_EC_MASKED
EZI2C_SCB__INTR_M EQU CYREG_SCB1_INTR_M
EZI2C_SCB__INTR_M_MASK EQU CYREG_SCB1_INTR_M_MASK
EZI2C_SCB__INTR_M_MASKED EQU CYREG_SCB1_INTR_M_MASKED
EZI2C_SCB__INTR_M_SET EQU CYREG_SCB1_INTR_M_SET
EZI2C_SCB__INTR_RX EQU CYREG_SCB1_INTR_RX
EZI2C_SCB__INTR_RX_MASK EQU CYREG_SCB1_INTR_RX_MASK
EZI2C_SCB__INTR_RX_MASKED EQU CYREG_SCB1_INTR_RX_MASKED
EZI2C_SCB__INTR_RX_SET EQU CYREG_SCB1_INTR_RX_SET
EZI2C_SCB__INTR_S EQU CYREG_SCB1_INTR_S
EZI2C_SCB__INTR_S_MASK EQU CYREG_SCB1_INTR_S_MASK
EZI2C_SCB__INTR_S_MASKED EQU CYREG_SCB1_INTR_S_MASKED
EZI2C_SCB__INTR_S_SET EQU CYREG_SCB1_INTR_S_SET
EZI2C_SCB__INTR_SPI_EC EQU CYREG_SCB1_INTR_SPI_EC
EZI2C_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB1_INTR_SPI_EC_MASK
EZI2C_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB1_INTR_SPI_EC_MASKED
EZI2C_SCB__INTR_TX EQU CYREG_SCB1_INTR_TX
EZI2C_SCB__INTR_TX_MASK EQU CYREG_SCB1_INTR_TX_MASK
EZI2C_SCB__INTR_TX_MASKED EQU CYREG_SCB1_INTR_TX_MASKED
EZI2C_SCB__INTR_TX_SET EQU CYREG_SCB1_INTR_TX_SET
EZI2C_SCB__RX_CTRL EQU CYREG_SCB1_RX_CTRL
EZI2C_SCB__RX_FIFO_CTRL EQU CYREG_SCB1_RX_FIFO_CTRL
EZI2C_SCB__RX_FIFO_RD EQU CYREG_SCB1_RX_FIFO_RD
EZI2C_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB1_RX_FIFO_RD_SILENT
EZI2C_SCB__RX_FIFO_STATUS EQU CYREG_SCB1_RX_FIFO_STATUS
EZI2C_SCB__RX_MATCH EQU CYREG_SCB1_RX_MATCH
EZI2C_SCB__SPI_CTRL EQU CYREG_SCB1_SPI_CTRL
EZI2C_SCB__SPI_STATUS EQU CYREG_SCB1_SPI_STATUS
EZI2C_SCB__SS0_POSISTION EQU 0
EZI2C_SCB__SS1_POSISTION EQU 1
EZI2C_SCB__SS2_POSISTION EQU 2
EZI2C_SCB__SS3_POSISTION EQU 3
EZI2C_SCB__STATUS EQU CYREG_SCB1_STATUS
EZI2C_SCB__TX_CTRL EQU CYREG_SCB1_TX_CTRL
EZI2C_SCB__TX_FIFO_CTRL EQU CYREG_SCB1_TX_FIFO_CTRL
EZI2C_SCB__TX_FIFO_STATUS EQU CYREG_SCB1_TX_FIFO_STATUS
EZI2C_SCB__TX_FIFO_WR EQU CYREG_SCB1_TX_FIFO_WR
EZI2C_SCB__UART_CTRL EQU CYREG_SCB1_UART_CTRL
EZI2C_SCB__UART_RX_CTRL EQU CYREG_SCB1_UART_RX_CTRL
EZI2C_SCB__UART_RX_STATUS EQU CYREG_SCB1_UART_RX_STATUS
EZI2C_SCB__UART_TX_CTRL EQU CYREG_SCB1_UART_TX_CTRL
EZI2C_SCB_IRQ__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
EZI2C_SCB_IRQ__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
EZI2C_SCB_IRQ__INTC_MASK EQU 0x800
EZI2C_SCB_IRQ__INTC_NUMBER EQU 11
EZI2C_SCB_IRQ__INTC_PRIOR_MASK EQU 0xC0000000
EZI2C_SCB_IRQ__INTC_PRIOR_NUM EQU 3
EZI2C_SCB_IRQ__INTC_PRIOR_REG EQU CYREG_CM0_IPR2
EZI2C_SCB_IRQ__INTC_SET_EN_REG EQU CYREG_CM0_ISER
EZI2C_SCB_IRQ__INTC_SET_PD_REG EQU CYREG_CM0_ISPR
EZI2C_SCBCLK__DIVIDER_MASK EQU 0x0000FFFF
EZI2C_SCBCLK__ENABLE EQU CYREG_CLK_DIVIDER_C00
EZI2C_SCBCLK__ENABLE_MASK EQU 0x80000000
EZI2C_SCBCLK__MASK EQU 0x80000000
EZI2C_SCBCLK__REGISTER EQU CYREG_CLK_DIVIDER_C00
EZI2C_scl__0__DM__MASK EQU 0x07
EZI2C_scl__0__DM__SHIFT EQU 0
EZI2C_scl__0__DR EQU CYREG_PRT3_DR
EZI2C_scl__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
EZI2C_scl__0__HSIOM_GPIO EQU 0
EZI2C_scl__0__HSIOM_I2C EQU 14
EZI2C_scl__0__HSIOM_I2C_SCL EQU 14
EZI2C_scl__0__HSIOM_MASK EQU 0x0000000F
EZI2C_scl__0__HSIOM_SHIFT EQU 0
EZI2C_scl__0__HSIOM_SPI EQU 15
EZI2C_scl__0__HSIOM_SPI_MOSI EQU 15
EZI2C_scl__0__HSIOM_UART EQU 9
EZI2C_scl__0__HSIOM_UART_RX EQU 9
EZI2C_scl__0__INTCFG EQU CYREG_PRT3_INTCFG
EZI2C_scl__0__INTSTAT EQU CYREG_PRT3_INTSTAT
EZI2C_scl__0__MASK EQU 0x01
EZI2C_scl__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
EZI2C_scl__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
EZI2C_scl__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
EZI2C_scl__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
EZI2C_scl__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
EZI2C_scl__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
EZI2C_scl__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
EZI2C_scl__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
EZI2C_scl__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
EZI2C_scl__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
EZI2C_scl__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
EZI2C_scl__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
EZI2C_scl__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
EZI2C_scl__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
EZI2C_scl__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
EZI2C_scl__0__PC EQU CYREG_PRT3_PC
EZI2C_scl__0__PC2 EQU CYREG_PRT3_PC2
EZI2C_scl__0__PORT EQU 3
EZI2C_scl__0__PS EQU CYREG_PRT3_PS
EZI2C_scl__0__SHIFT EQU 0
EZI2C_scl__DR EQU CYREG_PRT3_DR
EZI2C_scl__INTCFG EQU CYREG_PRT3_INTCFG
EZI2C_scl__INTSTAT EQU CYREG_PRT3_INTSTAT
EZI2C_scl__MASK EQU 0x01
EZI2C_scl__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
EZI2C_scl__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
EZI2C_scl__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
EZI2C_scl__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
EZI2C_scl__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
EZI2C_scl__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
EZI2C_scl__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
EZI2C_scl__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
EZI2C_scl__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
EZI2C_scl__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
EZI2C_scl__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
EZI2C_scl__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
EZI2C_scl__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
EZI2C_scl__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
EZI2C_scl__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
EZI2C_scl__PC EQU CYREG_PRT3_PC
EZI2C_scl__PC2 EQU CYREG_PRT3_PC2
EZI2C_scl__PORT EQU 3
EZI2C_scl__PS EQU CYREG_PRT3_PS
EZI2C_scl__SHIFT EQU 0
EZI2C_sda__0__DM__MASK EQU 0x38
EZI2C_sda__0__DM__SHIFT EQU 3
EZI2C_sda__0__DR EQU CYREG_PRT3_DR
EZI2C_sda__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
EZI2C_sda__0__HSIOM_GPIO EQU 0
EZI2C_sda__0__HSIOM_I2C EQU 14
EZI2C_sda__0__HSIOM_I2C_SDA EQU 14
EZI2C_sda__0__HSIOM_MASK EQU 0x000000F0
EZI2C_sda__0__HSIOM_SHIFT EQU 4
EZI2C_sda__0__HSIOM_SPI EQU 15
EZI2C_sda__0__HSIOM_SPI_MISO EQU 15
EZI2C_sda__0__HSIOM_UART EQU 9
EZI2C_sda__0__HSIOM_UART_TX EQU 9
EZI2C_sda__0__INTCFG EQU CYREG_PRT3_INTCFG
EZI2C_sda__0__INTSTAT EQU CYREG_PRT3_INTSTAT
EZI2C_sda__0__MASK EQU 0x02
EZI2C_sda__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
EZI2C_sda__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
EZI2C_sda__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
EZI2C_sda__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
EZI2C_sda__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
EZI2C_sda__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
EZI2C_sda__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
EZI2C_sda__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
EZI2C_sda__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
EZI2C_sda__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
EZI2C_sda__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
EZI2C_sda__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
EZI2C_sda__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
EZI2C_sda__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
EZI2C_sda__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
EZI2C_sda__0__PC EQU CYREG_PRT3_PC
EZI2C_sda__0__PC2 EQU CYREG_PRT3_PC2
EZI2C_sda__0__PORT EQU 3
EZI2C_sda__0__PS EQU CYREG_PRT3_PS
EZI2C_sda__0__SHIFT EQU 1
EZI2C_sda__DR EQU CYREG_PRT3_DR
EZI2C_sda__INTCFG EQU CYREG_PRT3_INTCFG
EZI2C_sda__INTSTAT EQU CYREG_PRT3_INTSTAT
EZI2C_sda__MASK EQU 0x02
EZI2C_sda__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
EZI2C_sda__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
EZI2C_sda__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
EZI2C_sda__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
EZI2C_sda__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
EZI2C_sda__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
EZI2C_sda__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
EZI2C_sda__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
EZI2C_sda__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
EZI2C_sda__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
EZI2C_sda__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
EZI2C_sda__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
EZI2C_sda__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
EZI2C_sda__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
EZI2C_sda__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
EZI2C_sda__PC EQU CYREG_PRT3_PC
EZI2C_sda__PC2 EQU CYREG_PRT3_PC2
EZI2C_sda__PORT EQU 3
EZI2C_sda__PS EQU CYREG_PRT3_PS
EZI2C_sda__SHIFT EQU 1

; Pin_LED
Pin_LED__0__DM__MASK EQU 0x07
Pin_LED__0__DM__SHIFT EQU 0
Pin_LED__0__DR EQU CYREG_PRT1_DR
Pin_LED__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Pin_LED__0__HSIOM_MASK EQU 0x0000000F
Pin_LED__0__HSIOM_SHIFT EQU 0
Pin_LED__0__INTCFG EQU CYREG_PRT1_INTCFG
Pin_LED__0__INTSTAT EQU CYREG_PRT1_INTSTAT
Pin_LED__0__MASK EQU 0x01
Pin_LED__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Pin_LED__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Pin_LED__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Pin_LED__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Pin_LED__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Pin_LED__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Pin_LED__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Pin_LED__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Pin_LED__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Pin_LED__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Pin_LED__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Pin_LED__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Pin_LED__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Pin_LED__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Pin_LED__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Pin_LED__0__PC EQU CYREG_PRT1_PC
Pin_LED__0__PC2 EQU CYREG_PRT1_PC2
Pin_LED__0__PORT EQU 1
Pin_LED__0__PS EQU CYREG_PRT1_PS
Pin_LED__0__SHIFT EQU 0
Pin_LED__DR EQU CYREG_PRT1_DR
Pin_LED__INTCFG EQU CYREG_PRT1_INTCFG
Pin_LED__INTSTAT EQU CYREG_PRT1_INTSTAT
Pin_LED__MASK EQU 0x01
Pin_LED__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Pin_LED__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Pin_LED__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Pin_LED__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Pin_LED__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Pin_LED__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Pin_LED__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Pin_LED__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Pin_LED__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Pin_LED__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Pin_LED__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Pin_LED__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Pin_LED__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Pin_LED__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Pin_LED__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Pin_LED__PC EQU CYREG_PRT1_PC
Pin_LED__PC2 EQU CYREG_PRT1_PC2
Pin_LED__PORT EQU 1
Pin_LED__PS EQU CYREG_PRT1_PS
Pin_LED__SHIFT EQU 0

; CapSense
CapSense_Cmod__0__DM__MASK EQU 0x1C0
CapSense_Cmod__0__DM__SHIFT EQU 6
CapSense_Cmod__0__DR EQU CYREG_PRT4_DR
CapSense_Cmod__0__HSIOM EQU CYREG_HSIOM_PORT_SEL4
CapSense_Cmod__0__HSIOM_MASK EQU 0x00000F00
CapSense_Cmod__0__HSIOM_SHIFT EQU 8
CapSense_Cmod__0__INTCFG EQU CYREG_PRT4_INTCFG
CapSense_Cmod__0__INTSTAT EQU CYREG_PRT4_INTSTAT
CapSense_Cmod__0__MASK EQU 0x04
CapSense_Cmod__0__PC EQU CYREG_PRT4_PC
CapSense_Cmod__0__PC2 EQU CYREG_PRT4_PC2
CapSense_Cmod__0__PORT EQU 4
CapSense_Cmod__0__PS EQU CYREG_PRT4_PS
CapSense_Cmod__0__SHIFT EQU 2
CapSense_Cmod__Cmod__DM__MASK EQU 0x1C0
CapSense_Cmod__Cmod__DM__SHIFT EQU 6
CapSense_Cmod__Cmod__DR EQU CYREG_PRT4_DR
CapSense_Cmod__Cmod__INTCFG EQU CYREG_PRT4_INTCFG
CapSense_Cmod__Cmod__INTSTAT EQU CYREG_PRT4_INTSTAT
CapSense_Cmod__Cmod__MASK EQU 0x04
CapSense_Cmod__Cmod__PC EQU CYREG_PRT4_PC
CapSense_Cmod__Cmod__PC2 EQU CYREG_PRT4_PC2
CapSense_Cmod__Cmod__PORT EQU 4
CapSense_Cmod__Cmod__PS EQU CYREG_PRT4_PS
CapSense_Cmod__Cmod__SHIFT EQU 2
CapSense_Cmod__DR EQU CYREG_PRT4_DR
CapSense_Cmod__INTCFG EQU CYREG_PRT4_INTCFG
CapSense_Cmod__INTSTAT EQU CYREG_PRT4_INTSTAT
CapSense_Cmod__MASK EQU 0x04
CapSense_Cmod__PC EQU CYREG_PRT4_PC
CapSense_Cmod__PC2 EQU CYREG_PRT4_PC2
CapSense_Cmod__PORT EQU 4
CapSense_Cmod__PS EQU CYREG_PRT4_PS
CapSense_Cmod__SHIFT EQU 2
CapSense_CSD_FFB__CSD_CONFIG EQU CYREG_CSD_CONFIG
CapSense_CSD_FFB__CSD_COUNTER EQU CYREG_CSD_COUNTER
CapSense_CSD_FFB__CSD_ID EQU CYREG_CSD_ID
CapSense_CSD_FFB__CSD_INTR EQU CYREG_CSD_INTR
CapSense_CSD_FFB__CSD_INTR_SET EQU CYREG_CSD_INTR_SET
CapSense_CSD_FFB__CSD_NUMBER EQU 0
CapSense_CSD_FFB__CSD_STATUS EQU CYREG_CSD_STATUS
CapSense_IDAC1_cy_psoc4_idac__CONTROL EQU CYREG_CSD_CONFIG
CapSense_IDAC1_cy_psoc4_idac__CSD_IDAC EQU CYREG_CSD_IDAC
CapSense_IDAC1_cy_psoc4_idac__CSD_IDAC_SHIFT EQU 0
CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM1 EQU CYREG_CSD_TRIM1
CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM1_SHIFT EQU 0
CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM2 EQU CYREG_CSD_TRIM2
CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM2_SHIFT EQU 0
CapSense_IDAC1_cy_psoc4_idac__IDAC_NUMBER EQU 1
CapSense_IDAC1_cy_psoc4_idac__POLARITY EQU CYREG_CSD_CONFIG
CapSense_IDAC1_cy_psoc4_idac__POLARITY_SHIFT EQU 16
CapSense_IDAC2_cy_psoc4_idac__CONTROL EQU CYREG_CSD_CONFIG
CapSense_IDAC2_cy_psoc4_idac__CSD_IDAC EQU CYREG_CSD_IDAC
CapSense_IDAC2_cy_psoc4_idac__CSD_IDAC_SHIFT EQU 16
CapSense_IDAC2_cy_psoc4_idac__CSD_TRIM1 EQU CYREG_CSD_TRIM1
CapSense_IDAC2_cy_psoc4_idac__CSD_TRIM1_SHIFT EQU 4
CapSense_IDAC2_cy_psoc4_idac__CSD_TRIM2 EQU CYREG_CSD_TRIM2
CapSense_IDAC2_cy_psoc4_idac__CSD_TRIM2_SHIFT EQU 4
CapSense_IDAC2_cy_psoc4_idac__IDAC_NUMBER EQU 2
CapSense_IDAC2_cy_psoc4_idac__POLARITY EQU CYREG_CSD_CONFIG
CapSense_IDAC2_cy_psoc4_idac__POLARITY_SHIFT EQU 17
CapSense_ISR__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
CapSense_ISR__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
CapSense_ISR__INTC_MASK EQU 0x8000
CapSense_ISR__INTC_NUMBER EQU 15
CapSense_ISR__INTC_PRIOR_MASK EQU 0xC0000000
CapSense_ISR__INTC_PRIOR_NUM EQU 3
CapSense_ISR__INTC_PRIOR_REG EQU CYREG_CM0_IPR3
CapSense_ISR__INTC_SET_EN_REG EQU CYREG_CM0_ISER
CapSense_ISR__INTC_SET_PD_REG EQU CYREG_CM0_ISPR
CapSense_SampleClk__DIVIDER_MASK EQU 0x0000FFFF
CapSense_SampleClk__ENABLE EQU CYREG_CLK_DIVIDER_A00
CapSense_SampleClk__ENABLE_MASK EQU 0x80000000
CapSense_SampleClk__MASK EQU 0x80000000
CapSense_SampleClk__REGISTER EQU CYREG_CLK_DIVIDER_A00
CapSense_SenseClk__DIVIDER_MASK EQU 0x0000FFFF
CapSense_SenseClk__ENABLE EQU CYREG_CLK_DIVIDER_B00
CapSense_SenseClk__ENABLE_MASK EQU 0x80000000
CapSense_SenseClk__MASK EQU 0x80000000
CapSense_SenseClk__REGISTER EQU CYREG_CLK_DIVIDER_B00
CapSense_Sns__0__DM__MASK EQU 0x7000
CapSense_Sns__0__DM__SHIFT EQU 12
CapSense_Sns__0__DR EQU CYREG_PRT3_DR
CapSense_Sns__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
CapSense_Sns__0__HSIOM_MASK EQU 0x000F0000
CapSense_Sns__0__HSIOM_SHIFT EQU 16
CapSense_Sns__0__INTCFG EQU CYREG_PRT3_INTCFG
CapSense_Sns__0__INTSTAT EQU CYREG_PRT3_INTSTAT
CapSense_Sns__0__MASK EQU 0x10
CapSense_Sns__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
CapSense_Sns__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
CapSense_Sns__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
CapSense_Sns__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
CapSense_Sns__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
CapSense_Sns__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
CapSense_Sns__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
CapSense_Sns__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
CapSense_Sns__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
CapSense_Sns__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
CapSense_Sns__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
CapSense_Sns__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
CapSense_Sns__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
CapSense_Sns__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
CapSense_Sns__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
CapSense_Sns__0__PC EQU CYREG_PRT3_PC
CapSense_Sns__0__PC2 EQU CYREG_PRT3_PC2
CapSense_Sns__0__PORT EQU 3
CapSense_Sns__0__PS EQU CYREG_PRT3_PS
CapSense_Sns__0__SHIFT EQU 4
CapSense_Sns__Button0__BTN__DM__MASK EQU 0x7000
CapSense_Sns__Button0__BTN__DM__SHIFT EQU 12
CapSense_Sns__Button0__BTN__DR EQU CYREG_PRT3_DR
CapSense_Sns__Button0__BTN__INTCFG EQU CYREG_PRT3_INTCFG
CapSense_Sns__Button0__BTN__INTSTAT EQU CYREG_PRT3_INTSTAT
CapSense_Sns__Button0__BTN__MASK EQU 0x10
CapSense_Sns__Button0__BTN__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
CapSense_Sns__Button0__BTN__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
CapSense_Sns__Button0__BTN__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
CapSense_Sns__Button0__BTN__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
CapSense_Sns__Button0__BTN__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
CapSense_Sns__Button0__BTN__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
CapSense_Sns__Button0__BTN__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
CapSense_Sns__Button0__BTN__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
CapSense_Sns__Button0__BTN__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
CapSense_Sns__Button0__BTN__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
CapSense_Sns__Button0__BTN__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
CapSense_Sns__Button0__BTN__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
CapSense_Sns__Button0__BTN__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
CapSense_Sns__Button0__BTN__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
CapSense_Sns__Button0__BTN__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
CapSense_Sns__Button0__BTN__PC EQU CYREG_PRT3_PC
CapSense_Sns__Button0__BTN__PC2 EQU CYREG_PRT3_PC2
CapSense_Sns__Button0__BTN__PORT EQU 3
CapSense_Sns__Button0__BTN__PS EQU CYREG_PRT3_PS
CapSense_Sns__Button0__BTN__SHIFT EQU 4
CapSense_Sns__DR EQU CYREG_PRT3_DR
CapSense_Sns__INTCFG EQU CYREG_PRT3_INTCFG
CapSense_Sns__INTSTAT EQU CYREG_PRT3_INTSTAT
CapSense_Sns__MASK EQU 0x10
CapSense_Sns__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
CapSense_Sns__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
CapSense_Sns__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
CapSense_Sns__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
CapSense_Sns__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
CapSense_Sns__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
CapSense_Sns__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
CapSense_Sns__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
CapSense_Sns__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
CapSense_Sns__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
CapSense_Sns__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
CapSense_Sns__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
CapSense_Sns__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
CapSense_Sns__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
CapSense_Sns__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
CapSense_Sns__PC EQU CYREG_PRT3_PC
CapSense_Sns__PC2 EQU CYREG_PRT3_PC2
CapSense_Sns__PORT EQU 3
CapSense_Sns__PS EQU CYREG_PRT3_PS
CapSense_Sns__SHIFT EQU 4

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_Disallowed
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 1
CYDEV_DFT_SELECT_CLK1 EQU 2
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_M0S8_CTBM_VERSION EQU 0
CYIPBLOCK_m0s8cpuss_VERSION EQU 0
CYIPBLOCK_m0s8csd_VERSION EQU 0
CYIPBLOCK_m0s8gpio2_VERSION EQU 0
CYIPBLOCK_m0s8hsiom4a_VERSION EQU 0
CYIPBLOCK_m0s8lcd_VERSION EQU 0
CYIPBLOCK_m0s8lpcomp_VERSION EQU 0
CYIPBLOCK_m0s8pclk_VERSION EQU 0
CYIPBLOCK_m0s8sar_VERSION EQU 0
CYIPBLOCK_m0s8scb_VERSION EQU 0
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 0
CYIPBLOCK_m0s8udbif_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 2
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END