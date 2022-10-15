/*
 * TIMER_cfg.h
 *
 *  Created on: Sep 13, 2022
 *      Author: Dell
 */

#define FCPU 8000000

/****************************************************/
/*********************  TIMER0 **********************/
/****************************************************/
#define TIMER0_RESOLUTION 255
/*
    PRESCALER OPTIONS:

    TIMER0_CLOCK_SOURCE_NO_CLK
    TIMER0_CLOCK_SOURCE_NO_PRESSCALE
    TIMER0_CLOCK_SOURCE_PRESSCALE_8
    TIMER0_CLOCK_SOURCE_PRESSCALE_64
    TIMER0_CLOCK_SOURCE_PRESSCALE_256
    TIMER0_CLOCK_SOURCE_PRESSCALE_1024
    TIMER0_CLOCK_SOURCE_EXTERNAL_FALL
    TIMER0_CLOCK_SOURCE_EXTERNAL_RISE
*/

#define TIMER0_PRESCALE_MODE TIMER0_CLOCK_SOURCE_PRESSCALE_8
#define TIMER0_PRESCALE_VALUE 8
/*
    WAVE GENERATION OPTIONS :

    WAVE_GENERATION_MODE_NORMAL
    WAVE_GENERATION_MODE_PWM_PC
    WAVE_GENERATION_MODE_CTC
    WAVE_GENERATION_MODE_PWM_FAST
*/
#define TIMER0_WAVE_GENERATION_MODE WAVE_GENERATION_MODE_PWM_FAST

/*
    OCR_PIN_MODE :

    NORMAL_COMPARE_MODE  OCRn DISCONNECTED
    TOOGLE_COMPARE_MODE
    CLEAR_COMPARE_MODE_NON_INVERTING
    SET_COMPARE_MODE_INVERTING
 */

#define TIMER0_OCR_PIN_MODE SET_COMPARE_MODE_INVERTING

/****************************************************/
/*********************  TIMER2 **********************/
/****************************************************/
#define TIMER2_RESOLUTION 255
/*
    PRESCALER OPTIONS:

    TIMER2_CLOCK_SOURCE_NO_CLK
    TIMER2_CLOCK_SOURCE_NO_PRESSCALE
    TIMER2_CLOCK_SOURCE_PRESSCALE_8
    TIMER2_CLOCK_SOURCE_PRESSCALE_32
    TIMER2_CLOCK_SOURCE_PRESSCALE_64
    TIMER2_CLOCK_SOURCE_PRESSCALE_128
    TIMER2_CLOCK_SOURCE_PRESSCALE_256
    TIMER2_CLOCK_SOURCE_PRESSCALE_1024
 */
#define TIMER2_PRESCALE_MODE TIMER2_CLOCK_SOURCE_PRESSCALE_256
#define TIMER2_PRESCALE_VALUE 256
/*
    WAVE GENERATION OPTIONS :

    WAVE_GENERATION_MODE_NORMAL
    WAVE_GENERATION_MODE_PWM_PC
    WAVE_GENERATION_MODE_CTC
    WAVE_GENERATION_MODE_PWM_FAST
*/
#define TIMER2_WAVE_GENERATION_MODE WAVE_GENERATION_MODE_PWM_FAST

/*
    OCR_PIN_MODE :

    NORMAL_COMPARE_MODE  OCR DISCONNECTED
    TOOGLE_COMPARE_MODE
    CLEAR_COMPARE_MODE_NON_INVERTING
    SET_COMPARE_MODE_INVERTING
 */

#define TIMER2_OCR_PIN_MODE CLEAR_COMPARE_MODE_NON_INVERTING
/****************************************************/
/*********************  TIMER1 **********************/
/****************************************************/
#define TIMER1_RESOLUTION 65536
#define TIMER1_TOP 20000
/*
    PRESCALER OPTIONS:

    TIMER1_CLOCK_SOURCE_NO_CLK
    TIMER1_CLOCK_SOURCE_NO_PRESSCALE
    TIMER1_CLOCK_SOURCE_PRESSCALE_8
    TIMER1_CLOCK_SOURCE_PRESSCALE_64
    TIMER1_CLOCK_SOURCE_PRESSCALE_256
    TIMER1_CLOCK_SOURCE_PRESSCALE_1024
    TIMER1_CLOCK_SOURCE_EXTERNAL_FALL
    TIMER1_CLOCK_SOURCE_EXTERNAL_RISE
*/
#define TIMER1_PRESACLE_MODE TIMER1_CLOCK_SOURCE_PRESSCALE_8
#define TIMER1_PRESCCALE_VALUE 8
/*
    WAVE GENERATION OPTIONS :

    NORMAL_TCCR1A
    NORMAL_TCCR1B
    PWM_PC_8BIT_TCCR1A
    PWM_PC_8BIT_TCCR1B
    PWM_PC_9BIT_TCCR1A
    PWM_PC_9BIT_TCCR1B
    PWM_PC_10BIT_TCCR1A
    PWM_PC_10BIT_TCCR1B
    CTC_OCR1A_TCCR1A
    CTC_OCR1A_TCCR1B
    FAST_PWM_8BIT_TCCR1A
    FAST_PWM_8BIT_TCCR1B
    FAST_PWM_9BIT_TCCR1A
    FAST_PWM_9BIT_TCCR1B
    FAST_PWM_10BIT_TCCR1A
    FAST_PWM_10BIT_TCCR1B
    PWM_PC_FREQ_ICR1_TCCR1A
    PWM_PC_FREQ_ICR1_TCCR1B
    PWM_PC_FREQ_OCR1A_TCCR1A
    PWM_PC_FREQ_OCR1A_TCCR1B
    PWM_PC_ICR1_TCCR1A
    PWM_PC_ICR1_TCCR1B
    PWM_PC_OCR1A_TCCR1A
    PWM_PC_OCR1A_TCCR1B
    CTC_ICR1_TCCR1A
    CTC_ICR1_TCCR1B
    FAST_PWM_ICR1_TCCR1A
    FAST_PWM_ICR1_TCCR1B
    FAST_PWM_OCR1A_TCCR1A
    FAST_PWM_OCR1A_TCCR1B

*/
#define TIMER1_WAVE_GENERATION_MODE_TCCR1A NORMAL_TCCR1A
#define TIMER1_WAVE_GENERATION_MODE_TCCR1B NORMAL_TCCR1B
/*
    OCR_PIN_MODE :

    NORMAL_COMPARE_MODE
    TOOGLE_COMPARE_MODE
    CLEAR_COMPARE_MODE_NON_INVERTING
    SET_COMPARE_MODE_INVERTING

 */
#define TIMER1_OCRA_PIN_MODE NORMAL_COMPARE_MODE
#define TIMER1_OCRB_PIN_MODE NORMAL_COMPARE_MODE

#ifndef MCAL_TIMER_TIMER_CFG_H_
#define MCAL_TIMER_TIMER_CFG_H_

#endif /* MCAL_TIMER_TIMER_CFG_H_ */
