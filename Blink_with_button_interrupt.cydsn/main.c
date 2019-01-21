/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#define ON (0)
#define OFF (1)
CY_ISR( Pin_in_Handler ){
    Pin_red_Write( ~ Pin_red_Read() );
    Pin_in_ClearInterrupt();
}
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    Pin_in_INT_StartEx ( Pin_in_Handler );
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {
        /* Place your application code here. */  
        //Pin_green_Write(ON);
    }
}

/* [] END OF FILE */
