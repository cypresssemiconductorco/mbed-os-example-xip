/******************************************************************************
* File Name:   main.c
*
* Description:
*   This example demonstrates the Execute-In-Place (XIP) feature of PSoC 6 MCU 
*   using the SMIF block. In this example, an application which blinks an LED
*   executes from external QSPI memory. User can change the LED blinking rate
*   (1 Hz or 4 Hz) using the user button.
*
* Related Document: See Readme.md
*
*
*******************************************************************************
* (c) (2019-2020), Cypress Semiconductor Corporation. All rights reserved.
*******************************************************************************
* This software, including source code, documentation and related materials
* ("Software"), is owned by Cypress Semiconductor Corporation or one of its
* subsidiaries ("Cypress") and is protected by and subject to worldwide patent
* protection (United States and foreign), United States copyright laws and
* international treaty provisions. Therefore, you may use this Software only
* as provided in the license agreement accompanying the software package from
* which you obtained this Software ("EULA").
*
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
* non-transferable license to copy, modify, and compile the Software source
* code solely for use in connection with Cypress's integrated circuit products.
* Any reproduction, modification, translation, compilation, or representation
* of this Software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
* reserves the right to make changes to the Software without notice. Cypress
* does not assume any liability arising out of the application or use of the
* Software or any product or circuit described in the Software. Cypress does
* not authorize its products for use in any products where a malfunction or
* failure of the Cypress product may reasonably be expected to result in
* significant property damage, injury or death ("High Risk Product"). By
* including Cypress's product in a High Risk Product, the manufacturer of such
* system or application assumes all risk of such use and in doing so agrees to
* indemnify Cypress against all liability.
*******************************************************************************/


/*******************************************************************************
* Header files including
********************************************************************************/
#include "mbed.h"
#include "xip_blinky_app.h"

/*****************************************************************************
* Function Name: main
******************************************************************************
* Summary:
*  Main function that starts an RTOS thread and switches the program 
* (LED blinky) execution to external flash.
*
* Parameters:
*  none
*
* Return:
*  int
*****************************************************************************/
int main(void)
{
   
    /* "\x1b[2J\x1b[;H" - ANSI ESC sequence for clear screen. */
    printf("\x1b[2J\x1b[;H");
    printf("Mbed OS Example - PSoC 6 MCU External Flash Access in XIP Mode \r\n");
    
    /* Call LED blinky application placed in external flash. */    
    led_blink_external_memory();

    for(;;)
    {

    }
}

/* [] END OF FILE */
