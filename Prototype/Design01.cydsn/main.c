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
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    SPIM_1_Start();
    SPIS_1_Start();
    LED_Write(0); //LED starts off
    
    Control_Reg_1_Write(0); //tests first slave select
    //Control_Reg_1_Write(1); //tests second slave select
    
    
    for(;;)
    {
        /* Place your application code here. */
        
        SPIM_1_ClearTxBuffer(); //good practice
        SPIS_1_ClearTxBuffer();
        SPIM_1_ClearRxBuffer();
        SPIS_1_ClearRxBuffer();
        
        
        uint8 temp = SPIM_1_ReadTxStatus();

        //Ensure that previous SPI read is done, or SPI is idle before sending data
        if(temp & (SPIM_1_STS_SPI_DONE | SPIM_1_STS_SPI_IDLE))
        {
            //SPIM_1_WriteTxData(11); //data request sent to slave 1
            SPIM_1_WriteTxData(21); //data request sent to slave 2
            //SPIM_1_WriteTxData(0x34u); //data request sent to slave 1 //no address
            //SPIM_1_WriteTxData(0xABu); //data request sent to slave 2 //no address
        }
        
        /*if (SPIS_1_ReadRxData() == 0xABu) //TESTING
            {
                LED_Write(0);
                CyDelay(500);
                LED_Write(1);
                CyDelay(500);
                //SPIS_1_WriteTxData(0xAAu); //alternate test response
            }*/
        
        int address = (int)SPIS_1_ReadRxData() / 10;
        int data = (int)SPIS_1_ReadRxData() % 10;
        
        //if (SPIS_1_ReadRxData() == 0x34u) //ideal slave send message //no addresses
        if (address == 1)
            {
                if (data == 1)
                {
                    LED_Write(0); //TESTING
                    CyDelay(1000); //TESTING
                    LED_Write(1); //TESTING
                    CyDelay(1000); //TESTING
                    //SPIS_1_WriteTxData(0xAAu); //response to master
                }
            }    
            
        if (SPIM_1_ReadRxData() == 0xAAu) //if master receives the response...
            LED_Write(1); //it works!!!
        
    }
}

/* [] END OF FILE */
