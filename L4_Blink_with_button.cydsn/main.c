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
#define ON (0)
#define OFF (1)
void l42(){
    for(;;)
    {
        /* Place your application code here. */
        if ( button_Read() == OFF ){
            Pin_blue_Write( ON );
        }else {
            Pin_blue_Write( OFF );
        }
    }
}

void l43(){
    for(;;)
    {
        /* Place your application code here. */
        if ( button_Read() == ON ){
            Pin_blue_Write( ON );
            Pin_green_Write( OFF );
        }else {
            Pin_blue_Write( OFF );
            Pin_green_Write( ON );
        }
    }
}

void l44(){
    if ( button_Read() == ON ){
        Clock_SetDivider(Clock_GetDividerRegister() + 1 );
    }
}
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {
        /* Place your application code here. */
        if ( button_Read() == ON ){
            Pin_blue_Write( ON );
        }else {
            Pin_blue_Write( OFF );
        }
    }
}

/* [] END OF FILE */
