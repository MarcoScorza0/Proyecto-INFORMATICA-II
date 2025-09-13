
#ifndef CONF_H
#define CONF_H 1


#include "avr_api.h"

void init_mcu(void);

#define ESTADO_ESPERA 1
#define ESTADO_COMPRESOR_Y_FORZADORES 2
#define ESTADO_DESCONGELAMIENTO 3
#define ESTADO_FORZADORES 4
#define ESTADO_ERROR1 5
#define ESTADO_ERROR2 6

#define ENTRADAS_PORT avr_GPIO_D
#define RESET avr_GPIOD_IN_0
#define RESET_PIN avr_GPIO_PIN_0
#define SW1_TEST avr_GPIOD_IN_1
#define SW1_TEST_PIN avr_GPIO_PIN_1
#define SW2_TEST avr_GPIOD_IN_2
#define SW2_TEST_PIN avr_GPIO_PIN_2
#define SW3_TEST avr_GPIOD_IN_3
#define SW3_TEST_PIN avr_GPIO_PIN_3


#define LED_PORT avr_GPIO_A
#define LED_A avr_GPIOA_OUT_0
#define LED_A_PIN avr_GPIO_PIN_0
#define LED_B avr_GPIOA_OUT_1
#define LED_B_PIN avr_GPIO_PIN_1
#define LED_C avr_GPIOA_OUT_2
#define LED_C_PIN avr_GPIO_PIN_2
#define LED_D avr_GPIOA_OUT_3
#define LED_D_PIN avr_GPIO_PIN_3



#define SALIDAS_POTENCIA_PORT avr_GPIO_B
#define COMPRESOR avr_GPIOB_OUT_4
#define COMPRESOR_PIN avr_GPIO_PIN_4
#define FOR_EXT avr_GPIOB_OUT_5
#define FOR_EXT_PIN avr_GPIO_PIN_5
#define FOR_INT avr_GPIOB_OUT_6
#define FOR_INT_PIN avr_GPIO_PIN_6

/*
#define SALIDAS_LEDS_PORT avr_GPIO_C
#define LED_1 avr_GPIOC_IN_0
#define LED_1_PIN avr_GPIO_PIN_0
#define LED_2 avr_GPIOC_OUT_1
#define LED_2_PIN avr_GPIO_PIN_1
*/
#define SENSOR_TEMP_AMB  avr_ADC_canal0
#define SENSOR_TEMP_EVAP avr_ADC_canal1
#define PRESOSTATO_BAJA avr_ADC_canal2


#define TEMP_AMB_0 150  //127
#define DELTA_T 51
#define CONGELADO 30
#define PRESION_ALERTA 50
#define DESCONGELADO 100




#endif

