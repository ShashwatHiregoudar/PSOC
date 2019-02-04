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
    uint8 slidervalue = 0;
    CyGlobalIntEnable; /* Enable global interrupts. */
    CapSense_Start();
    CapSense_InitializeAllBaselines();
    CapSense_ScanEnabledWidgets();
    PWM_Start();
   
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        if(!CapSense_IsBusy()){
            slidervalue = CapSense_GetCentroidPos( CapSense_LINEARSLIDER0__LS );
            
            PWM_WriteCompare(slidervalue*15);
            CapSense_UpdateEnabledBaselines();
            CapSense_ScanEnabledWidgets();
        }
        
    }
}

/* [] END OF FILE */
