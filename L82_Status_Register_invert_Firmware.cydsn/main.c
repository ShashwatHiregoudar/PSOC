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
    
    for(;;)
    {
        /* Place your application code here. */
        /* Place your application code here. */
        
        LCD_Position(0,0);
        
        LCD_PrintString("ON  ");
        Button1_Write( ~ Button1_Read());
        Button2_Write( ~ Button2_Read());
        Button3_Write( ~ Button3_Read());
        Button4_Write( ~ Button4_Read());
        LCD_PrintNumber( Status_Register_Read());
        
    }
}

/* [] END OF FILE */
