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
    PWM_1_Start();
    int i;
    for (i=0;i<500;i++){
        PWM_1_WriteCompare(i*10);
        CyDelay(30);
    }
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {
        /* Place your application code here. */
        PWM_1_WriteCompare(500);
        CyDelay(1000);
        PWM_1_WriteCompare(9500);
        CyDelay(1000);
        
    }
}

/* [] END OF FILE */
