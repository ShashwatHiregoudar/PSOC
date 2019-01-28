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
#include <stdio.h>
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_Start();
    UART_UartPutString("HELLO FROM UART");
    UART_UartPutString("\nEnter the string below");
    printf("haha");
    //uint32 x = UART_UartGetChar();
    /*char8 s;
    s = (char8)x;
    UART_UartPutString(s);*/
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
