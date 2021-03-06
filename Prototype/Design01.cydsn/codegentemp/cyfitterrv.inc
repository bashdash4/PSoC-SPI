;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.1 Update 1
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; Clock_1
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x00
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x01
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x01

; Control_Reg_1
Control_Reg_1_Sync_ctrl_reg__0__MASK EQU 0x01
Control_Reg_1_Sync_ctrl_reg__0__POS EQU 0
Control_Reg_1_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB07_08_ACTL
Control_Reg_1_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB07_08_CTL
Control_Reg_1_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB07_08_CTL
Control_Reg_1_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB07_08_CTL
Control_Reg_1_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB07_08_CTL
Control_Reg_1_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB07_08_MSK
Control_Reg_1_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB07_08_MSK
Control_Reg_1_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB07_08_MSK
Control_Reg_1_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB07_08_MSK
Control_Reg_1_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB07_ACTL
Control_Reg_1_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B0_UDB07_CTL
Control_Reg_1_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B0_UDB07_ST_CTL
Control_Reg_1_Sync_ctrl_reg__COUNT_REG EQU CYREG_B0_UDB07_CTL
Control_Reg_1_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B0_UDB07_ST_CTL
Control_Reg_1_Sync_ctrl_reg__MASK EQU 0x01
Control_Reg_1_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB07_MSK_ACTL
Control_Reg_1_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB07_MSK_ACTL
Control_Reg_1_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B0_UDB07_MSK

; KEY_0
KEY_0__0__INTTYPE EQU CYREG_PICU2_INTTYPE2
KEY_0__0__MASK EQU 0x04
KEY_0__0__PC EQU CYREG_PRT2_PC2
KEY_0__0__PORT EQU 2
KEY_0__0__SHIFT EQU 2
KEY_0__AG EQU CYREG_PRT2_AG
KEY_0__AMUX EQU CYREG_PRT2_AMUX
KEY_0__BIE EQU CYREG_PRT2_BIE
KEY_0__BIT_MASK EQU CYREG_PRT2_BIT_MASK
KEY_0__BYP EQU CYREG_PRT2_BYP
KEY_0__CTL EQU CYREG_PRT2_CTL
KEY_0__DM0 EQU CYREG_PRT2_DM0
KEY_0__DM1 EQU CYREG_PRT2_DM1
KEY_0__DM2 EQU CYREG_PRT2_DM2
KEY_0__DR EQU CYREG_PRT2_DR
KEY_0__INP_DIS EQU CYREG_PRT2_INP_DIS
KEY_0__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
KEY_0__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
KEY_0__LCD_EN EQU CYREG_PRT2_LCD_EN
KEY_0__MASK EQU 0x04
KEY_0__PORT EQU 2
KEY_0__PRT EQU CYREG_PRT2_PRT
KEY_0__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
KEY_0__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
KEY_0__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
KEY_0__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
KEY_0__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
KEY_0__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
KEY_0__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
KEY_0__PS EQU CYREG_PRT2_PS
KEY_0__SHIFT EQU 2
KEY_0__SLW EQU CYREG_PRT2_SLW

; LED
LED__0__INTTYPE EQU CYREG_PICU2_INTTYPE1
LED__0__MASK EQU 0x02
LED__0__PC EQU CYREG_PRT2_PC1
LED__0__PORT EQU 2
LED__0__SHIFT EQU 1
LED__AG EQU CYREG_PRT2_AG
LED__AMUX EQU CYREG_PRT2_AMUX
LED__BIE EQU CYREG_PRT2_BIE
LED__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LED__BYP EQU CYREG_PRT2_BYP
LED__CTL EQU CYREG_PRT2_CTL
LED__DM0 EQU CYREG_PRT2_DM0
LED__DM1 EQU CYREG_PRT2_DM1
LED__DM2 EQU CYREG_PRT2_DM2
LED__DR EQU CYREG_PRT2_DR
LED__INP_DIS EQU CYREG_PRT2_INP_DIS
LED__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LED__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LED__LCD_EN EQU CYREG_PRT2_LCD_EN
LED__MASK EQU 0x02
LED__PORT EQU 2
LED__PRT EQU CYREG_PRT2_PRT
LED__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LED__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LED__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LED__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LED__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LED__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LED__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LED__PS EQU CYREG_PRT2_PS
LED__SHIFT EQU 1
LED__SLW EQU CYREG_PRT2_SLW

; MISO
MISO__0__INTTYPE EQU CYREG_PICU15_INTTYPE0
MISO__0__MASK EQU 0x01
MISO__0__PC EQU CYREG_IO_PC_PRT15_PC0
MISO__0__PORT EQU 15
MISO__0__SHIFT EQU 0
MISO__AG EQU CYREG_PRT15_AG
MISO__AMUX EQU CYREG_PRT15_AMUX
MISO__BIE EQU CYREG_PRT15_BIE
MISO__BIT_MASK EQU CYREG_PRT15_BIT_MASK
MISO__BYP EQU CYREG_PRT15_BYP
MISO__CTL EQU CYREG_PRT15_CTL
MISO__DM0 EQU CYREG_PRT15_DM0
MISO__DM1 EQU CYREG_PRT15_DM1
MISO__DM2 EQU CYREG_PRT15_DM2
MISO__DR EQU CYREG_PRT15_DR
MISO__INP_DIS EQU CYREG_PRT15_INP_DIS
MISO__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
MISO__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
MISO__LCD_EN EQU CYREG_PRT15_LCD_EN
MISO__MASK EQU 0x01
MISO__PORT EQU 15
MISO__PRT EQU CYREG_PRT15_PRT
MISO__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
MISO__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
MISO__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
MISO__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
MISO__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
MISO__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
MISO__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
MISO__PS EQU CYREG_PRT15_PS
MISO__SHIFT EQU 0
MISO__SLW EQU CYREG_PRT15_SLW
MISO_1__0__INTTYPE EQU CYREG_PICU12_INTTYPE0
MISO_1__0__MASK EQU 0x01
MISO_1__0__PC EQU CYREG_PRT12_PC0
MISO_1__0__PORT EQU 12
MISO_1__0__SHIFT EQU 0
MISO_1__AG EQU CYREG_PRT12_AG
MISO_1__BIE EQU CYREG_PRT12_BIE
MISO_1__BIT_MASK EQU CYREG_PRT12_BIT_MASK
MISO_1__BYP EQU CYREG_PRT12_BYP
MISO_1__DM0 EQU CYREG_PRT12_DM0
MISO_1__DM1 EQU CYREG_PRT12_DM1
MISO_1__DM2 EQU CYREG_PRT12_DM2
MISO_1__DR EQU CYREG_PRT12_DR
MISO_1__INP_DIS EQU CYREG_PRT12_INP_DIS
MISO_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
MISO_1__MASK EQU 0x01
MISO_1__PORT EQU 12
MISO_1__PRT EQU CYREG_PRT12_PRT
MISO_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
MISO_1__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
MISO_1__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
MISO_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
MISO_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
MISO_1__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
MISO_1__PS EQU CYREG_PRT12_PS
MISO_1__SHIFT EQU 0
MISO_1__SIO_CFG EQU CYREG_PRT12_SIO_CFG
MISO_1__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
MISO_1__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
MISO_1__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
MISO_1__SLW EQU CYREG_PRT12_SLW

; MOSI
MOSI__0__INTTYPE EQU CYREG_PICU15_INTTYPE1
MOSI__0__MASK EQU 0x02
MOSI__0__PC EQU CYREG_IO_PC_PRT15_PC1
MOSI__0__PORT EQU 15
MOSI__0__SHIFT EQU 1
MOSI__AG EQU CYREG_PRT15_AG
MOSI__AMUX EQU CYREG_PRT15_AMUX
MOSI__BIE EQU CYREG_PRT15_BIE
MOSI__BIT_MASK EQU CYREG_PRT15_BIT_MASK
MOSI__BYP EQU CYREG_PRT15_BYP
MOSI__CTL EQU CYREG_PRT15_CTL
MOSI__DM0 EQU CYREG_PRT15_DM0
MOSI__DM1 EQU CYREG_PRT15_DM1
MOSI__DM2 EQU CYREG_PRT15_DM2
MOSI__DR EQU CYREG_PRT15_DR
MOSI__INP_DIS EQU CYREG_PRT15_INP_DIS
MOSI__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
MOSI__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
MOSI__LCD_EN EQU CYREG_PRT15_LCD_EN
MOSI__MASK EQU 0x02
MOSI__PORT EQU 15
MOSI__PRT EQU CYREG_PRT15_PRT
MOSI__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
MOSI__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
MOSI__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
MOSI__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
MOSI__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
MOSI__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
MOSI__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
MOSI__PS EQU CYREG_PRT15_PS
MOSI__SHIFT EQU 1
MOSI__SLW EQU CYREG_PRT15_SLW
MOSI_1__0__INTTYPE EQU CYREG_PICU12_INTTYPE1
MOSI_1__0__MASK EQU 0x02
MOSI_1__0__PC EQU CYREG_PRT12_PC1
MOSI_1__0__PORT EQU 12
MOSI_1__0__SHIFT EQU 1
MOSI_1__AG EQU CYREG_PRT12_AG
MOSI_1__BIE EQU CYREG_PRT12_BIE
MOSI_1__BIT_MASK EQU CYREG_PRT12_BIT_MASK
MOSI_1__BYP EQU CYREG_PRT12_BYP
MOSI_1__DM0 EQU CYREG_PRT12_DM0
MOSI_1__DM1 EQU CYREG_PRT12_DM1
MOSI_1__DM2 EQU CYREG_PRT12_DM2
MOSI_1__DR EQU CYREG_PRT12_DR
MOSI_1__INP_DIS EQU CYREG_PRT12_INP_DIS
MOSI_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
MOSI_1__MASK EQU 0x02
MOSI_1__PORT EQU 12
MOSI_1__PRT EQU CYREG_PRT12_PRT
MOSI_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
MOSI_1__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
MOSI_1__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
MOSI_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
MOSI_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
MOSI_1__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
MOSI_1__PS EQU CYREG_PRT12_PS
MOSI_1__SHIFT EQU 1
MOSI_1__SIO_CFG EQU CYREG_PRT12_SIO_CFG
MOSI_1__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
MOSI_1__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
MOSI_1__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
MOSI_1__SLW EQU CYREG_PRT12_SLW

; SCLK
SCLK__0__INTTYPE EQU CYREG_PICU15_INTTYPE2
SCLK__0__MASK EQU 0x04
SCLK__0__PC EQU CYREG_IO_PC_PRT15_PC2
SCLK__0__PORT EQU 15
SCLK__0__SHIFT EQU 2
SCLK__AG EQU CYREG_PRT15_AG
SCLK__AMUX EQU CYREG_PRT15_AMUX
SCLK__BIE EQU CYREG_PRT15_BIE
SCLK__BIT_MASK EQU CYREG_PRT15_BIT_MASK
SCLK__BYP EQU CYREG_PRT15_BYP
SCLK__CTL EQU CYREG_PRT15_CTL
SCLK__DM0 EQU CYREG_PRT15_DM0
SCLK__DM1 EQU CYREG_PRT15_DM1
SCLK__DM2 EQU CYREG_PRT15_DM2
SCLK__DR EQU CYREG_PRT15_DR
SCLK__INP_DIS EQU CYREG_PRT15_INP_DIS
SCLK__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
SCLK__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
SCLK__LCD_EN EQU CYREG_PRT15_LCD_EN
SCLK__MASK EQU 0x04
SCLK__PORT EQU 15
SCLK__PRT EQU CYREG_PRT15_PRT
SCLK__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
SCLK__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
SCLK__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
SCLK__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
SCLK__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
SCLK__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
SCLK__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
SCLK__PS EQU CYREG_PRT15_PS
SCLK__SHIFT EQU 2
SCLK__SLW EQU CYREG_PRT15_SLW
SCLK_1__0__INTTYPE EQU CYREG_PICU12_INTTYPE2
SCLK_1__0__MASK EQU 0x04
SCLK_1__0__PC EQU CYREG_PRT12_PC2
SCLK_1__0__PORT EQU 12
SCLK_1__0__SHIFT EQU 2
SCLK_1__AG EQU CYREG_PRT12_AG
SCLK_1__BIE EQU CYREG_PRT12_BIE
SCLK_1__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SCLK_1__BYP EQU CYREG_PRT12_BYP
SCLK_1__DM0 EQU CYREG_PRT12_DM0
SCLK_1__DM1 EQU CYREG_PRT12_DM1
SCLK_1__DM2 EQU CYREG_PRT12_DM2
SCLK_1__DR EQU CYREG_PRT12_DR
SCLK_1__INP_DIS EQU CYREG_PRT12_INP_DIS
SCLK_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SCLK_1__MASK EQU 0x04
SCLK_1__PORT EQU 12
SCLK_1__PRT EQU CYREG_PRT12_PRT
SCLK_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SCLK_1__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SCLK_1__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SCLK_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SCLK_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SCLK_1__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SCLK_1__PS EQU CYREG_PRT12_PS
SCLK_1__SHIFT EQU 2
SCLK_1__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SCLK_1__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SCLK_1__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SCLK_1__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SCLK_1__SLW EQU CYREG_PRT12_SLW

; SPIM_1_BSPIM
SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB06_07_ACTL
SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB06_07_CTL
SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB06_07_CTL
SPIM_1_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB06_07_CTL
SPIM_1_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB06_07_CTL
SPIM_1_BSPIM_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB06_07_MSK
SPIM_1_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB06_07_MSK
SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB06_07_MSK
SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB06_07_MSK
SPIM_1_BSPIM_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB06_ACTL
SPIM_1_BSPIM_BitCounter__CONTROL_REG EQU CYREG_B1_UDB06_CTL
SPIM_1_BSPIM_BitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB06_ST_CTL
SPIM_1_BSPIM_BitCounter__COUNT_REG EQU CYREG_B1_UDB06_CTL
SPIM_1_BSPIM_BitCounter__COUNT_ST_REG EQU CYREG_B1_UDB06_ST_CTL
SPIM_1_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
SPIM_1_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
SPIM_1_BSPIM_BitCounter__PERIOD_REG EQU CYREG_B1_UDB06_MSK
SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB06_07_ACTL
SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_B1_UDB06_07_ST
SPIM_1_BSPIM_BitCounter_ST__MASK_REG EQU CYREG_B1_UDB06_MSK
SPIM_1_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
SPIM_1_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
SPIM_1_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB06_ACTL
SPIM_1_BSPIM_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB06_ST_CTL
SPIM_1_BSPIM_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB06_ST_CTL
SPIM_1_BSPIM_BitCounter_ST__STATUS_REG EQU CYREG_B1_UDB06_ST
SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB06_07_ACTL
SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB06_07_ST
SPIM_1_BSPIM_RxStsReg__4__MASK EQU 0x10
SPIM_1_BSPIM_RxStsReg__4__POS EQU 4
SPIM_1_BSPIM_RxStsReg__5__MASK EQU 0x20
SPIM_1_BSPIM_RxStsReg__5__POS EQU 5
SPIM_1_BSPIM_RxStsReg__6__MASK EQU 0x40
SPIM_1_BSPIM_RxStsReg__6__POS EQU 6
SPIM_1_BSPIM_RxStsReg__MASK EQU 0x70
SPIM_1_BSPIM_RxStsReg__MASK_REG EQU CYREG_B0_UDB06_MSK
SPIM_1_BSPIM_RxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB06_ACTL
SPIM_1_BSPIM_RxStsReg__STATUS_REG EQU CYREG_B0_UDB06_ST
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A0_REG EQU CYREG_B1_UDB06_07_A0
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A1_REG EQU CYREG_B1_UDB06_07_A1
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D0_REG EQU CYREG_B1_UDB06_07_D0
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D1_REG EQU CYREG_B1_UDB06_07_D1
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB06_07_ACTL
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F0_REG EQU CYREG_B1_UDB06_07_F0
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F1_REG EQU CYREG_B1_UDB06_07_F1
SPIM_1_BSPIM_sR8_Dp_u0__A0_A1_REG EQU CYREG_B1_UDB06_A0_A1
SPIM_1_BSPIM_sR8_Dp_u0__A0_REG EQU CYREG_B1_UDB06_A0
SPIM_1_BSPIM_sR8_Dp_u0__A1_REG EQU CYREG_B1_UDB06_A1
SPIM_1_BSPIM_sR8_Dp_u0__D0_D1_REG EQU CYREG_B1_UDB06_D0_D1
SPIM_1_BSPIM_sR8_Dp_u0__D0_REG EQU CYREG_B1_UDB06_D0
SPIM_1_BSPIM_sR8_Dp_u0__D1_REG EQU CYREG_B1_UDB06_D1
SPIM_1_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB06_ACTL
SPIM_1_BSPIM_sR8_Dp_u0__F0_F1_REG EQU CYREG_B1_UDB06_F0_F1
SPIM_1_BSPIM_sR8_Dp_u0__F0_REG EQU CYREG_B1_UDB06_F0
SPIM_1_BSPIM_sR8_Dp_u0__F1_REG EQU CYREG_B1_UDB06_F1
SPIM_1_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
SPIM_1_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
SPIM_1_BSPIM_TxStsReg__0__MASK EQU 0x01
SPIM_1_BSPIM_TxStsReg__0__POS EQU 0
SPIM_1_BSPIM_TxStsReg__1__MASK EQU 0x02
SPIM_1_BSPIM_TxStsReg__1__POS EQU 1
SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_REG EQU CYREG_B1_UDB05_06_ST
SPIM_1_BSPIM_TxStsReg__2__MASK EQU 0x04
SPIM_1_BSPIM_TxStsReg__2__POS EQU 2
SPIM_1_BSPIM_TxStsReg__3__MASK EQU 0x08
SPIM_1_BSPIM_TxStsReg__3__POS EQU 3
SPIM_1_BSPIM_TxStsReg__4__MASK EQU 0x10
SPIM_1_BSPIM_TxStsReg__4__POS EQU 4
SPIM_1_BSPIM_TxStsReg__MASK EQU 0x1F
SPIM_1_BSPIM_TxStsReg__MASK_REG EQU CYREG_B1_UDB05_MSK
SPIM_1_BSPIM_TxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
SPIM_1_BSPIM_TxStsReg__STATUS_REG EQU CYREG_B1_UDB05_ST

; SPIM_1_RxInternalInterrupt
SPIM_1_RxInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
SPIM_1_RxInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
SPIM_1_RxInternalInterrupt__INTC_MASK EQU 0x01
SPIM_1_RxInternalInterrupt__INTC_NUMBER EQU 0
SPIM_1_RxInternalInterrupt__INTC_PRIOR_NUM EQU 7
SPIM_1_RxInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
SPIM_1_RxInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
SPIM_1_RxInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; SPIM_1_TxInternalInterrupt
SPIM_1_TxInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
SPIM_1_TxInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
SPIM_1_TxInternalInterrupt__INTC_MASK EQU 0x02
SPIM_1_TxInternalInterrupt__INTC_NUMBER EQU 1
SPIM_1_TxInternalInterrupt__INTC_PRIOR_NUM EQU 7
SPIM_1_TxInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
SPIM_1_TxInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
SPIM_1_TxInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; SPIS_1_BSPIS
SPIS_1_BSPIS_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
SPIS_1_BSPIS_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB04_05_CTL
SPIS_1_BSPIS_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB04_05_CTL
SPIS_1_BSPIS_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB04_05_CTL
SPIS_1_BSPIS_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB04_05_CTL
SPIS_1_BSPIS_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB04_05_MSK
SPIS_1_BSPIS_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB04_05_MSK
SPIS_1_BSPIS_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB04_05_MSK
SPIS_1_BSPIS_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB04_05_MSK
SPIS_1_BSPIS_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
SPIS_1_BSPIS_BitCounter__CONTROL_REG EQU CYREG_B1_UDB04_CTL
SPIS_1_BSPIS_BitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB04_ST_CTL
SPIS_1_BSPIS_BitCounter__COUNT_REG EQU CYREG_B1_UDB04_CTL
SPIS_1_BSPIS_BitCounter__COUNT_ST_REG EQU CYREG_B1_UDB04_ST_CTL
SPIS_1_BSPIS_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
SPIS_1_BSPIS_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
SPIS_1_BSPIS_BitCounter__PERIOD_REG EQU CYREG_B1_UDB04_MSK
SPIS_1_BSPIS_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
SPIS_1_BSPIS_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_B1_UDB04_05_ST
SPIS_1_BSPIS_BitCounter_ST__MASK_REG EQU CYREG_B1_UDB04_MSK
SPIS_1_BSPIS_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
SPIS_1_BSPIS_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
SPIS_1_BSPIS_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
SPIS_1_BSPIS_BitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB04_ST_CTL
SPIS_1_BSPIS_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB04_ST_CTL
SPIS_1_BSPIS_BitCounter_ST__STATUS_REG EQU CYREG_B1_UDB04_ST
SPIS_1_BSPIS_RxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
SPIS_1_BSPIS_RxStsReg__16BIT_STATUS_REG EQU CYREG_B1_UDB07_08_ST
SPIS_1_BSPIS_RxStsReg__3__MASK EQU 0x08
SPIS_1_BSPIS_RxStsReg__3__POS EQU 3
SPIS_1_BSPIS_RxStsReg__4__MASK EQU 0x10
SPIS_1_BSPIS_RxStsReg__4__POS EQU 4
SPIS_1_BSPIS_RxStsReg__5__MASK EQU 0x20
SPIS_1_BSPIS_RxStsReg__5__POS EQU 5
SPIS_1_BSPIS_RxStsReg__6__MASK EQU 0x40
SPIS_1_BSPIS_RxStsReg__6__POS EQU 6
SPIS_1_BSPIS_RxStsReg__MASK EQU 0x78
SPIS_1_BSPIS_RxStsReg__MASK_REG EQU CYREG_B1_UDB07_MSK
SPIS_1_BSPIS_RxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
SPIS_1_BSPIS_RxStsReg__STATUS_REG EQU CYREG_B1_UDB07_ST
SPIS_1_BSPIS_sR8_Dp_u0__16BIT_A0_REG EQU CYREG_B0_UDB04_05_A0
SPIS_1_BSPIS_sR8_Dp_u0__16BIT_A1_REG EQU CYREG_B0_UDB04_05_A1
SPIS_1_BSPIS_sR8_Dp_u0__16BIT_D0_REG EQU CYREG_B0_UDB04_05_D0
SPIS_1_BSPIS_sR8_Dp_u0__16BIT_D1_REG EQU CYREG_B0_UDB04_05_D1
SPIS_1_BSPIS_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB04_05_ACTL
SPIS_1_BSPIS_sR8_Dp_u0__16BIT_F0_REG EQU CYREG_B0_UDB04_05_F0
SPIS_1_BSPIS_sR8_Dp_u0__16BIT_F1_REG EQU CYREG_B0_UDB04_05_F1
SPIS_1_BSPIS_sR8_Dp_u0__A0_A1_REG EQU CYREG_B0_UDB04_A0_A1
SPIS_1_BSPIS_sR8_Dp_u0__A0_REG EQU CYREG_B0_UDB04_A0
SPIS_1_BSPIS_sR8_Dp_u0__A1_REG EQU CYREG_B0_UDB04_A1
SPIS_1_BSPIS_sR8_Dp_u0__D0_D1_REG EQU CYREG_B0_UDB04_D0_D1
SPIS_1_BSPIS_sR8_Dp_u0__D0_REG EQU CYREG_B0_UDB04_D0
SPIS_1_BSPIS_sR8_Dp_u0__D1_REG EQU CYREG_B0_UDB04_D1
SPIS_1_BSPIS_sR8_Dp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB04_ACTL
SPIS_1_BSPIS_sR8_Dp_u0__F0_F1_REG EQU CYREG_B0_UDB04_F0_F1
SPIS_1_BSPIS_sR8_Dp_u0__F0_REG EQU CYREG_B0_UDB04_F0
SPIS_1_BSPIS_sR8_Dp_u0__F1_REG EQU CYREG_B0_UDB04_F1
SPIS_1_BSPIS_TxStsReg__0__MASK EQU 0x01
SPIS_1_BSPIS_TxStsReg__0__POS EQU 0
SPIS_1_BSPIS_TxStsReg__1__MASK EQU 0x02
SPIS_1_BSPIS_TxStsReg__1__POS EQU 1
SPIS_1_BSPIS_TxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
SPIS_1_BSPIS_TxStsReg__16BIT_STATUS_REG EQU CYREG_B0_UDB05_06_ST
SPIS_1_BSPIS_TxStsReg__2__MASK EQU 0x04
SPIS_1_BSPIS_TxStsReg__2__POS EQU 2
SPIS_1_BSPIS_TxStsReg__6__MASK EQU 0x40
SPIS_1_BSPIS_TxStsReg__6__POS EQU 6
SPIS_1_BSPIS_TxStsReg__MASK EQU 0x47
SPIS_1_BSPIS_TxStsReg__MASK_REG EQU CYREG_B0_UDB05_MSK
SPIS_1_BSPIS_TxStsReg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
SPIS_1_BSPIS_TxStsReg__STATUS_REG EQU CYREG_B0_UDB05_ST

; SPIS_1_IntClock
SPIS_1_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
SPIS_1_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
SPIS_1_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
SPIS_1_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
SPIS_1_IntClock__INDEX EQU 0x01
SPIS_1_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
SPIS_1_IntClock__PM_ACT_MSK EQU 0x02
SPIS_1_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
SPIS_1_IntClock__PM_STBY_MSK EQU 0x02

; SPIS_1_RxInternalInterrupt
SPIS_1_RxInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
SPIS_1_RxInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
SPIS_1_RxInternalInterrupt__INTC_MASK EQU 0x04
SPIS_1_RxInternalInterrupt__INTC_NUMBER EQU 2
SPIS_1_RxInternalInterrupt__INTC_PRIOR_NUM EQU 7
SPIS_1_RxInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
SPIS_1_RxInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
SPIS_1_RxInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; SPIS_1_TxInternalInterrupt
SPIS_1_TxInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
SPIS_1_TxInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
SPIS_1_TxInternalInterrupt__INTC_MASK EQU 0x08
SPIS_1_TxInternalInterrupt__INTC_NUMBER EQU 3
SPIS_1_TxInternalInterrupt__INTC_PRIOR_NUM EQU 7
SPIS_1_TxInternalInterrupt__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_3
SPIS_1_TxInternalInterrupt__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
SPIS_1_TxInternalInterrupt__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; SS_00
SS_00__0__INTTYPE EQU CYREG_PICU15_INTTYPE3
SS_00__0__MASK EQU 0x08
SS_00__0__PC EQU CYREG_IO_PC_PRT15_PC3
SS_00__0__PORT EQU 15
SS_00__0__SHIFT EQU 3
SS_00__AG EQU CYREG_PRT15_AG
SS_00__AMUX EQU CYREG_PRT15_AMUX
SS_00__BIE EQU CYREG_PRT15_BIE
SS_00__BIT_MASK EQU CYREG_PRT15_BIT_MASK
SS_00__BYP EQU CYREG_PRT15_BYP
SS_00__CTL EQU CYREG_PRT15_CTL
SS_00__DM0 EQU CYREG_PRT15_DM0
SS_00__DM1 EQU CYREG_PRT15_DM1
SS_00__DM2 EQU CYREG_PRT15_DM2
SS_00__DR EQU CYREG_PRT15_DR
SS_00__INP_DIS EQU CYREG_PRT15_INP_DIS
SS_00__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
SS_00__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
SS_00__LCD_EN EQU CYREG_PRT15_LCD_EN
SS_00__MASK EQU 0x08
SS_00__PORT EQU 15
SS_00__PRT EQU CYREG_PRT15_PRT
SS_00__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
SS_00__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
SS_00__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
SS_00__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
SS_00__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
SS_00__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
SS_00__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
SS_00__PS EQU CYREG_PRT15_PS
SS_00__SHIFT EQU 3
SS_00__SLW EQU CYREG_PRT15_SLW

; SS_01
SS_01__0__INTTYPE EQU CYREG_PICU15_INTTYPE4
SS_01__0__MASK EQU 0x10
SS_01__0__PC EQU CYREG_IO_PC_PRT15_PC4
SS_01__0__PORT EQU 15
SS_01__0__SHIFT EQU 4
SS_01__AG EQU CYREG_PRT15_AG
SS_01__AMUX EQU CYREG_PRT15_AMUX
SS_01__BIE EQU CYREG_PRT15_BIE
SS_01__BIT_MASK EQU CYREG_PRT15_BIT_MASK
SS_01__BYP EQU CYREG_PRT15_BYP
SS_01__CTL EQU CYREG_PRT15_CTL
SS_01__DM0 EQU CYREG_PRT15_DM0
SS_01__DM1 EQU CYREG_PRT15_DM1
SS_01__DM2 EQU CYREG_PRT15_DM2
SS_01__DR EQU CYREG_PRT15_DR
SS_01__INP_DIS EQU CYREG_PRT15_INP_DIS
SS_01__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
SS_01__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
SS_01__LCD_EN EQU CYREG_PRT15_LCD_EN
SS_01__MASK EQU 0x10
SS_01__PORT EQU 15
SS_01__PRT EQU CYREG_PRT15_PRT
SS_01__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
SS_01__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
SS_01__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
SS_01__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
SS_01__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
SS_01__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
SS_01__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
SS_01__PS EQU CYREG_PRT15_PS
SS_01__SHIFT EQU 4
SS_01__SLW EQU CYREG_PRT15_SLW

; SS_1
SS_1__0__INTTYPE EQU CYREG_PICU12_INTTYPE3
SS_1__0__MASK EQU 0x08
SS_1__0__PC EQU CYREG_PRT12_PC3
SS_1__0__PORT EQU 12
SS_1__0__SHIFT EQU 3
SS_1__AG EQU CYREG_PRT12_AG
SS_1__BIE EQU CYREG_PRT12_BIE
SS_1__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SS_1__BYP EQU CYREG_PRT12_BYP
SS_1__DM0 EQU CYREG_PRT12_DM0
SS_1__DM1 EQU CYREG_PRT12_DM1
SS_1__DM2 EQU CYREG_PRT12_DM2
SS_1__DR EQU CYREG_PRT12_DR
SS_1__INP_DIS EQU CYREG_PRT12_INP_DIS
SS_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SS_1__MASK EQU 0x08
SS_1__PORT EQU 12
SS_1__PRT EQU CYREG_PRT12_PRT
SS_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SS_1__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SS_1__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SS_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SS_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SS_1__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SS_1__PS EQU CYREG_PRT12_PS
SS_1__SHIFT EQU 3
SS_1__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SS_1__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SS_1__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SS_1__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SS_1__SLW EQU CYREG_PRT12_SLW

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 16
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
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 16
CYDEV_CHIP_MEMBER_4D EQU 12
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 17
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 15
CYDEV_CHIP_MEMBER_4I EQU 21
CYDEV_CHIP_MEMBER_4J EQU 13
CYDEV_CHIP_MEMBER_4K EQU 14
CYDEV_CHIP_MEMBER_4L EQU 20
CYDEV_CHIP_MEMBER_4M EQU 19
CYDEV_CHIP_MEMBER_4N EQU 9
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 18
CYDEV_CHIP_MEMBER_4Q EQU 11
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 22
CYDEV_CHIP_MEMBER_FM3 EQU 26
CYDEV_CHIP_MEMBER_FM4 EQU 27
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 23
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 24
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 25
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
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
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 0
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x0000000F
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
