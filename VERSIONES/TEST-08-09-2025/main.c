#include "conf.h"
#include "funciones.h"


// LED_A, LED_B, LED_C Y LED_D SON INDICADORES DEL ESTADO ACTUAL DEL SISTEMA.

  int main(){
   int flag_estado = ESTADO_ESPERA;  
   float deltaT = DELTA_T;
   float T0 = TEMP_AMB_0;
   init_mcu();
   
   
   while(1){     
   switch(flag_estado){
	 case ESTADO_ESPERA:
	flag_estado=estado_espera(deltaT,T0);	 
	 COMPRESOR=0;
	 FOR_EXT=0;
	 FOR_INT=1;
	 
	 
	 
	 LED_A=0;
	 LED_B=0;
	 LED_C=0;
	 LED_D=1;
	 
	 break;
	 case ESTADO_COMPRESOR_Y_FORZADORES:
	  flag_estado=estado_compresor_y_forzadores(deltaT,T0);
	  COMPRESOR=1;
	  FOR_EXT=1;
	 FOR_INT=1;
	 
	 LED_A=0;   
	 LED_B=0;
	 LED_C=1;
	 LED_D=0;
	 
	 break;
	 case ESTADO_DESCONGELAMIENTO:
	  flag_estado=estado_descongelamiento(deltaT,T0);       
	 COMPRESOR=0;
	 FOR_EXT=0;
	 FOR_INT=1;
	 LED_A=0;
	 LED_B=0;
	 LED_C=1;
	 LED_D=1;
	 break;
	 case ESTADO_FORZADORES:
	 flag_estado=estado_forzadores(deltaT,T0);
	 COMPRESOR=0;
	 FOR_EXT=1;
	 FOR_INT=1;
	 LED_A=0;
	 LED_B=1;
	 LED_C=0;
	 LED_D=0;
	 break;
	 default:
	 LED_A=1;
	 LED_B=1;
	 LED_C=1;
	 LED_D=1;
	
      }
}}
