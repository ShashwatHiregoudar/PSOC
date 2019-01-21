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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        Pin_blue_Write( ~ Pin_blue_Read());
        CyDelay(200);
        Pin_green_Write( ~ Pin_green_Read());
        CyDelay(200);
        Pin_red_Write( ~ Pin_red_Read());
        CyDelay(200);
        
    }
}

/* [] END OF FILE */
