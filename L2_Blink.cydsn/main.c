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
int l22_faster(){
    return 200;
}
void l23_different_led_different_rates(){  // Not Done correctly
    for(;;){
        Pin_blue_Write(0);
        Pin_green_Write(1);
        CyDelay(1000);
        Pin_green_Write( ~ Pin_green_Read() );
        CyDelay(1000);
        if(Pin_green_Read() == 1){
            
            CyDelay(1000);
        }
        
        Pin_blue_Write(1);
        CyDelay(1000);
        CyDelay(1000);
    }
}
void l24_different_duty_cycle(){
    for(;;){
        Pin_blue_Write(0);
        CyDelay(800);
        Pin_blue_Write(1);
        CyDelay(200);
    }
}
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    l23_different_led_different_rates();
}

/* [] END OF FILE */
