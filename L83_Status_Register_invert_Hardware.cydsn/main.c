/* ========================================
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
    LCD_Start();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    int i =0;
    for(;;)
    {
        /* Place your application code here. */
        /* Place your application code here. */
        
        LCD_Position(0,0);
        
        //LCD_PrintString("ON  ");
        LCD_PrintNumber( Status_Register_Read());
        i++;
        if (i==1000){
            LCD_ClearDisplay();        
            i=0;
        }
    }
}

/* [] END OF FILE */
