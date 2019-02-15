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
#define MAXPOTTENTIOMETER (2048)
uint8 I2CReg[3] = { 0, 0, 0 }; 

void read_buttons_and_set_buffer(){
    I2CReg[1] = Status_Register_Read();
}

void view_I2c_Buffer(){
    LCD_Position(1,0);
    LCD_PrintNumber( I2CReg[0] );
    LCD_PrintString(" : ");
    LCD_PrintNumber( I2CReg [1] );
    LCD_PrintString(" : ");
    LCD_PrintNumber( I2CReg [2] );
}

void check_wrong_type(){
    if ( I2CReg[0] > 15 ){
        Pin_in_buzzer_Write( 1 );
    }else {
        Pin_in_buzzer_Write( 0 );
    }
}

void set_speed(){
    LCD_Position(0,0);
    int32 ADCResult = ADC_CountsTo_mVolts(0, ADC_GetResult16(0));
    LCD_PrintString("Speed = ");
    if ( ADCResult <= MAXPOTTENTIOMETER/3 ){
        I2CReg[2] = 1;
        LCD_PrintString("Slow");
    }else if (ADCResult > MAXPOTTENTIOMETER / 3 && ADCResult <= (MAXPOTTENTIOMETER *2)/3){
        I2CReg[2] = 2;
        LCD_PrintString("Medi");
    }else {
        I2CReg[2] = 4;
        LCD_PrintString("Fast");
    }
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    ADC_Start();
    ADC_StartConvert(); 
    LCD_Start();
    EZI2C_Start();
    EZI2C_EzI2CSetBuffer1(sizeof(I2CReg), 1, I2CReg);
    
    
    for(;;)
    {
        /* Place your application code here. */
        set_speed();
        view_I2c_Buffer();
        check_wrong_type();
        read_buttons_and_set_buffer();      
    }
}

/* [] END OF FILE */
