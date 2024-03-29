/*******************************************************************************
* File Name: Button_CHEAT.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Button_CHEAT_ALIASES_H) /* Pins Button_CHEAT_ALIASES_H */
#define CY_PINS_Button_CHEAT_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Button_CHEAT_0			(Button_CHEAT__0__PC)
#define Button_CHEAT_0_PS		(Button_CHEAT__0__PS)
#define Button_CHEAT_0_PC		(Button_CHEAT__0__PC)
#define Button_CHEAT_0_DR		(Button_CHEAT__0__DR)
#define Button_CHEAT_0_SHIFT	(Button_CHEAT__0__SHIFT)
#define Button_CHEAT_0_INTR	((uint16)((uint16)0x0003u << (Button_CHEAT__0__SHIFT*2u)))

#define Button_CHEAT_INTR_ALL	 ((uint16)(Button_CHEAT_0_INTR))


#endif /* End Pins Button_CHEAT_ALIASES_H */


/* [] END OF FILE */
