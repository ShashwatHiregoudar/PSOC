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
void l23_different_rates(){
    while(1){
        Pin_blue_Write(1);
        //Pin_green_Write(1);
        CyDelay(200);
        if(Pin_green_Read()){
            Pin_green_Write( ~ Pin_green_Read() );CyDelay(100);
        }
    }
}
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {
        /* Place your application code here. */
        Pin_green_Write( ~ Pin_green_Read() );
        //CyDelay(l22_faster());
        CyDelay(500);
    }
    l23_different_rates();
}

/* [] END OF FILE */
