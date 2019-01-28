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
#define POT_CHAN (0)
int main(void)
{
    int16 ADCResult;
    
    ADC_Start();
    ADC_StartConvert();
    LCD_Start();
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        ADCResult = ADC_CountsTo_mVolts(POT_CHAN, ADC_GetResult16(POT_CHAN));
        LCD_Position(0,0);
        LCD_PrintNumber(ADCResult);
        LCD_PrintString("mv ");
    }
}

/* [] END OF FILE */
