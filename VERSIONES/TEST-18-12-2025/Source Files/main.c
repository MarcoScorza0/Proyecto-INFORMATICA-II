#include "conf.h"
#include "funciones.h"


 /*
      RESET -> botón de reset.    Pin D0
      SW1_TEST -> switch provisorio para testeo de proyecto. Pin D1
      SW2_TEST -> switch provisorio para testeo de proyecto Pin D2
      SW3_TEST -> switch provisorio para testeo de proyecto Pin D3
      
      
      
      COMPRESOR -> salida de control de circuito de potencia del compresor.    Pin B4
      FOR_INT -> salida de control de circuito de potencia del forzador de la unidad interior.   Pin B5
      FOR_EXT -> salida de control de circuito de potencia del forzador de la unidad exterior.    Pin B6
      
      LED_1 -> salida de led indicador de error.    Pin C0
      LED_2 -> salida de led indicador de error. Pin C1
      */

int main(){
int flag_estado = ESTADO_ESPERA;  
float deltaT = DELTA_T;
float T0 = TEMP_AMB_0;
   init_mcu();
   while(1){     
      switch(flag_estado){
	 case ESTADO_ESPERA:
		  flag_estado=estado_espera(deltaT,T0);	

	 break;
	 case ESTADO_COMPRESOR_Y_FORZADORES:
		  flag_estado=estado_compresor_y_forzadores(deltaT,T0);
		
	 break;
	 case ESTADO_DESCONGELAMIENTO:
		  flag_estado=estado_descongelamiento(deltaT,T0);      
	 break;
	 case ESTADO_FORZADORES:
		  flag_estado=estado_forzadores(deltaT,T0);
	 
	 break;
	 
	 case ESTADO_ERROR1:
		  flag_estado=estado_error1(deltaT,T0);
	 
	 break;
	 case ESTADO_ERROR2:
		  flag_estado=estado_error2(deltaT,T0);
	  break;
	 default:
		  MICRO_DEFAULT();	 
      }
}}