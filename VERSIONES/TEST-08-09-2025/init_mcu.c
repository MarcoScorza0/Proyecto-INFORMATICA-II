#include "conf.h"

void init_mcu(void){
   GpioInitStructure_AVR entradas, salidas_potencia, salidas_led;
   
   salidas_led.modo = avr_GPIO_mode_Output;
   salidas_led.port = LED_PORT;
   salidas_led.pines=LED_A_PIN | LED_B_PIN | LED_C_PIN | LED_D_PIN;
   init_gpio(salidas_led);
   
   
   
   entradas.modo = avr_GPIO_mode_Input;
   entradas.port = ENTRADAS_PORT;
   entradas.pines = RESET_PIN | SW1_TEST_PIN | SW2_TEST_PIN | SW3_TEST_PIN;
   init_gpio(entradas);
   
   salidas_potencia.modo = avr_GPIO_mode_Output;
   salidas_potencia.port = SALIDAS_POTENCIA_PORT;
    salidas_potencia.pines = COMPRESOR_PIN | FOR_INT_PIN | FOR_EXT_PIN;
   init_gpio(salidas_potencia);
   
   
   
GpioInitStructure_AVR entradas_adc;
entradas_adc.modo = avr_GPIO_mode_Input;
entradas_adc.port = avr_GPIO_C;   
entradas_adc.pines = avr_GPIO_PIN_0;  
init_gpio(entradas_adc);
   
   
   // config ADC
   
   
AdcInitStructure_AVR config_adc1;
config_adc1.mode        = avr_ADC_MODE_Single_Conversion; 
config_adc1.prescaler   = avr_ADC_Prescaler_32;                    
config_adc1.resolution  = avr_ADC_RES_8Bit;              
config_adc1.channel = SENSOR_TEMP_AMB;
config_adc1.reference   = avr_ADC_REF_AVcc;           
config_adc1.avr_adc_handler = 0; 
init_adc(config_adc1);

AdcInitStructure_AVR config_adc2;
config_adc2.mode        = avr_ADC_MODE_Single_Conversion; 
config_adc2.prescaler   = avr_ADC_Prescaler_32;                    
config_adc2.resolution  = avr_ADC_RES_8Bit;              
config_adc2.channel = SENSOR_TEMP_EVAP;
config_adc2.reference   = avr_ADC_REF_AVcc;           
config_adc2.avr_adc_handler = 0; 
init_adc(config_adc2);

AdcInitStructure_AVR config_adc3;
config_adc3.mode        = avr_ADC_MODE_Single_Conversion; 
config_adc3.prescaler   = avr_ADC_Prescaler_32;                    
config_adc3.resolution  = avr_ADC_RES_8Bit;              
config_adc3.channel = PRESOSTATO_BAJA;
config_adc3.reference   = avr_ADC_REF_AVcc;           
config_adc3.avr_adc_handler = 0; 
init_adc(config_adc3);

   
}
