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
uint8 I2CReg[3] = { 0, 0, 0 }; 

void read_and_set_Buttons(){
    I2CReg[1] = Status_Register_Read();
}

void check_wrong_type(){
    if ( I2CReg[0] > 15 ){
        Pin_in_buzzer_Write( 1 );
        CyDelay(300);
    }else {
        Pin_in_buzzer_Write( 0 );
    }
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    LCD_Start();
    EZI2C_Start();
    EZI2C_EzI2CSetBuffer1(sizeof(I2CReg), 0, I2CReg);
    
    for(;;)
    {
        /* Place your application code here. */
        check_wrong_type();
        read_and_set_Buttons();
        LCD_Position(0,0);
        LCD_PrintNumber(Status_Register_Read());
        
    }
}

/* [] END OF FILE */
