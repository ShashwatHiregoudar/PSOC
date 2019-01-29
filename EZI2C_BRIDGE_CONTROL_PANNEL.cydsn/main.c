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
    uint16 ADCResult;
    uint8 I2CReg[2] = {0,0};
    
    ADC_Start();
    ADC_StartConvert();
    LCD_Start();
    EZI2C_Start();
    EZI2C_EzI2CSetBuffer1(sizeof(I2CReg), 0, I2CReg);
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        ADCResult = ADC_CountsTo_mVolts(POT_CHAN, ADC_GetResult16(POT_CHAN));
        
        LCD_Position(0,0);
        LCD_PrintNumber(ADCResult);
        LCD_PrintString("mv ");
        
        I2CReg[0] = HI8(ADCResult);
        I2CReg[1] = LO8(ADCResult);
    }
}

/* [] END OF FILE */
