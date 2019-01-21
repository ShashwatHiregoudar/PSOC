/*******************************************************************************
* File Name: Pin_in_INT.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_Pin_in_INT_H)
#define CY_ISR_Pin_in_INT_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void Pin_in_INT_Start(void);
void Pin_in_INT_StartEx(cyisraddress address);
void Pin_in_INT_Stop(void);

CY_ISR_PROTO(Pin_in_INT_Interrupt);

void Pin_in_INT_SetVector(cyisraddress address);
cyisraddress Pin_in_INT_GetVector(void);

void Pin_in_INT_SetPriority(uint8 priority);
uint8 Pin_in_INT_GetPriority(void);

void Pin_in_INT_Enable(void);
uint8 Pin_in_INT_GetState(void);
void Pin_in_INT_Disable(void);

void Pin_in_INT_SetPending(void);
void Pin_in_INT_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the Pin_in_INT ISR. */
#define Pin_in_INT_INTC_VECTOR            ((reg32 *) Pin_in_INT__INTC_VECT)

/* Address of the Pin_in_INT ISR priority. */
#define Pin_in_INT_INTC_PRIOR             ((reg32 *) Pin_in_INT__INTC_PRIOR_REG)

/* Priority of the Pin_in_INT interrupt. */
#define Pin_in_INT_INTC_PRIOR_NUMBER      Pin_in_INT__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable Pin_in_INT interrupt. */
#define Pin_in_INT_INTC_SET_EN            ((reg32 *) Pin_in_INT__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the Pin_in_INT interrupt. */
#define Pin_in_INT_INTC_CLR_EN            ((reg32 *) Pin_in_INT__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the Pin_in_INT interrupt state to pending. */
#define Pin_in_INT_INTC_SET_PD            ((reg32 *) Pin_in_INT__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the Pin_in_INT interrupt. */
#define Pin_in_INT_INTC_CLR_PD            ((reg32 *) Pin_in_INT__INTC_CLR_PD_REG)



#endif /* CY_ISR_Pin_in_INT_H */


/* [] END OF FILE */
