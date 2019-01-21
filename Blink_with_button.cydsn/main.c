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
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    //Pin_green_Write( ON );
    for(;;)
    {
        /* Place your application code here. */
        /*Pin_blue_Write( ON );
        CyDelay(500);*/
        
        //Pin_green_Write( button_Read() );
        if ( button_Read() == ON ){
            Pin_blue_Write( ON );
            Pin_green_Write( OFF );
        }else {
            Pin_blue_Write( OFF );
            Pin_green_Write( ON );
        }
        
    }
}

/* [] END OF FILE */
