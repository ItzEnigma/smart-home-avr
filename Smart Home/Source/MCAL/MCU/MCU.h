/*********************************************************/
/***********		Author: Smart Home	 	**************/
/***********		Layer: MCAL			 	**************/
/***********		Component: MCU  		**************/
/***********		Version: 1.00		 	**************/
/***********		Date: 28 Dec 2022	 	**************/
/***********		Updated: 28 Sep 2022	**************/
/*********************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#ifndef			F_CPU
	#define		F_CPU		8000000UL
#endif

#ifndef          MCUCR
    #define         MCUCR       *((u8*) 0x55)
#endif


/*					MCU Sleep to save power						*/
#define         MCU_SLEEP()      {MCUCR |= ((1<<7));\ 
								  asm volatile("sleep");\
								  }				  
#define         MCU_WAKEUP()     {\
								  MCUCR &= ~( (1<<7) | (1<<5) );\
								 }




/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/******************************************************************************
* \Syntax          : void Mcu_Init(void)        
* \Description     : Initialization for whole peripherals of the
*******************************************************************************/
void Mcu_Init(void);

