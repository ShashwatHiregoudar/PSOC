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
    uint8 button1 = 0;
    CyGlobalIntEnable; /* Enable global interrupts. */
    CapSense_Start();
    CapSense_InitializeAllBaselines();
    CapSense_ScanEnabledWidgets();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        if(!CapSense_IsBusy()){
            button1 = CapSense_CheckIsWidgetActive(CapSense_BUTTON0__BTN);
            CapSense_UpdateEnabledBaselines();
            CapSense_ScanEnabledWidgets();
        }
        Pin_LED_Write(button1);
    }
}

/* [] END OF FILE */
