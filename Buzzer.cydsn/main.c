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
#define A (1760)
#define B (1975)
#define C (1046)
#define D (1174)
#define E (1318)
#define F (1396)
#define G (1567)
void twinkle(int delay){
    Clock_1_SetDividerValue(C);
        CyDelay(delay);
        Clock_1_SetDividerValue(C);
        CyDelay(delay);
        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        Clock_1_SetDividerValue(A);
        CyDelay(delay);
        Clock_1_SetDividerValue(A);
        CyDelay(delay);
        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        /*extra Delay*/CyDelay(3*delay);

        Clock_1_SetDividerValue(F);
        CyDelay(delay);
        Clock_1_SetDividerValue(F);
        CyDelay(delay);
        Clock_1_SetDividerValue(E);
        CyDelay(delay);
        Clock_1_SetDividerValue(E);
        CyDelay(delay);
        Clock_1_SetDividerValue(D);
        CyDelay(delay);
        Clock_1_SetDividerValue(D);
        CyDelay(delay);
        Clock_1_SetDividerValue(C);
        CyDelay(delay);
        /*extra Delay*/CyDelay(3*delay);

        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        Clock_1_SetDividerValue(F);
        CyDelay(delay);
        Clock_1_SetDividerValue(F);
        CyDelay(delay);
        Clock_1_SetDividerValue(E);
        CyDelay(delay);
        Clock_1_SetDividerValue(E);
        CyDelay(delay);
        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        /*extra Delay*/CyDelay(3*delay);

        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        Clock_1_SetDividerValue(F);
        CyDelay(delay);
        Clock_1_SetDividerValue(F);
        CyDelay(delay);
        Clock_1_SetDividerValue(E);
        CyDelay(delay);
        Clock_1_SetDividerValue(E);
        CyDelay(delay);
        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        /*extra Delay*/CyDelay(3*delay);

        Clock_1_SetDividerValue(C);
        CyDelay(delay);
        Clock_1_SetDividerValue(C);
        CyDelay(delay);
        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        Clock_1_SetDividerValue(A);
        CyDelay(delay);
        Clock_1_SetDividerValue(A);
        CyDelay(delay);
        Clock_1_SetDividerValue(G);
        CyDelay(delay);
        /*extra Delay*/CyDelay(3*delay);
    
        Clock_1_SetDividerValue(F);
        CyDelay(delay);
        Clock_1_SetDividerValue(F);
        CyDelay(delay);
        Clock_1_SetDividerValue(E);
        CyDelay(delay);
        Clock_1_SetDividerValue(E);
        CyDelay(delay);
        Clock_1_SetDividerValue(D);
        CyDelay(delay);
        Clock_1_SetDividerValue(D);
        CyDelay(delay);
        Clock_1_SetDividerValue(C);
        CyDelay(delay);
        /*extra Delay*/CyDelay(3*delay);
}
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    int i=0;
    twinkle(300);    
    for(;;)
    {
        Clock_1_SetDividerValue(i);
        CyDelay(1);
       
        if(i==5000){
            break;
        }
        i++;
    }
}    

/* [] END OF FILE */
