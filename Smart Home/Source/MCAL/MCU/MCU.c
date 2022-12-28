/*********************************************************/
/***********		Author: Smart Home	 	**************/
/***********		Layer: MCAL			 	**************/
/***********		Component: MCU  		**************/
/***********		Version: 1.00		 	**************/
/***********		Date: 28 Dec 2022	 	**************/
/***********		Updated: 28 Sep 2022	**************/
/*********************************************************/



/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "../../LIB/STD_TYPES.h"
#include "../DIO/DIO_int.h"
#include "../GIE/GIE_int.h"
#include "../EXTI/EXTI_int.h"
#include "../ADC/ADC_int.h"
#include "../TIM0/TIM0_int.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/******************************************************************************
* \Syntax          : void Mcu_Init(void)        
* \Description     : Initialization for whole peripherals of the
                     MCU [to be used in start-up]                                                                                           
* \Parameters (in) : None
* \Parameters (out): None                                                      
* \Return value:   : None                         
*******************************************************************************/
void Mcu_Init(void)
{
    //TEMPS_vInit();
	LCD_vInit();
	KeyPad_vInit();
	GIE_vEnableGlobaLInt();
	TIM0_vInit();
	EXTI_vInitINT0();
}