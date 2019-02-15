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
    int status =0;
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        if(!CapSense_IsBusy()){
            button1 = CapSense_CheckIsWidgetActive(CapSense_BUTTON0__BTN);
            //CyDelay(100);
            if (button1 == 1){
                //CyDelay(1000);
                status = ~ status;
            }
            CapSense_UpdateEnabledBaselines();
            CapSense_ScanEnabledWidgets();
        }
        Pin_LED_Write(status);
    }
}

/* [] END OF FILE */
