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
    uint16 oldslidervalue = 0xffff;
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    CapSense_Start();
    CapSense_InitializeAllBaselines();
    CapSense_ScanEnabledWidgets();
    
    for(;;)
    {
        if(!CapSense_IsBusy()){
            slidervalue = CapSense_GetCentroidPos( CapSense_LINEARSLIDER0__LS );
            
            Clock_1_SetDividerValue(slidervalue*10);
            CapSense_UpdateEnabledBaselines();
            CapSense_ScanEnabledWidgets();
        }
    }
}    

/* [] END OF FILE */
