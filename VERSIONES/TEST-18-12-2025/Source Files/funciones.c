
#include "conf.h"
#include "avr_Adc.h"

//funciones.c





//funciones control del micro.
//---------------------------------------------------

   
   void MICRO_ESPERA(void){
	 COMPRESOR=0;
	 FOR_EXT=0;
	 FOR_INT=1;
	 LED_A=1;
	 LED_B=1;
	 LED_C=1;
	 LED_D=1;
   };
   
   void MICRO_COMPYFORZ(void){
	    COMPRESOR=1;
	    FOR_EXT=1;
	    FOR_INT=1;
	    LED_A=1;
	    LED_B=0;
	    LED_C=1;
	    LED_D=0;
   };
   
  void MICRO_DEFROST(void){
	 COMPRESOR=0;
	 FOR_EXT=0;
	 FOR_INT=1;
	 LED_A=0;
	 LED_B=0;
	 LED_C=1;
	 LED_D=1;
 
  };
  
  void MICRO_FORZ(void){
	 COMPRESOR=0;
	 FOR_EXT=1;
	 FOR_INT=1;
	 LED_A=0;
	 LED_B=1;
	 LED_C=0;
	 LED_D=0;
  };
  
  void MICRO_DEFAULT(void){
	 LED_A=1;
	 LED_B=0;
	 LED_C=0;
	 LED_D=0;
  };
  
  void MICRO_ERROR_2(void){
	 COMPRESOR=0;
	 FOR_EXT=0;
	 FOR_INT=0;
	 LED_A=0;
	 LED_B=0;
	 LED_C=1;
	 LED_D=0;
  }
  
    void MICRO_ERROR_1(void){
	 COMPRESOR=0;
	 FOR_EXT=0;
	 FOR_INT=0;
	 LED_A=0;
	 LED_B=0;
	 LED_C=0;
	 LED_D=1;
  }
  //-----------------------------
  
  
  
   







//Funciones de estado
  //------------------------------------


int estado_espera(float deltaT,float T0){
  if (leer_ADC(SENSOR_TEMP_AMB) > (T0 + deltaT)){
     return ESTADO_COMPRESOR_Y_FORZADORES;
  } else {
     MICRO_ESPERA();
     return ESTADO_ESPERA;
}
}



int estado_compresor_y_forzadores(float deltaT,float T0){
   if (leer_ADC(SENSOR_TEMP_EVAP) < 50){
      MICRO_DEFROST();
      return ESTADO_DESCONGELAMIENTO;
   };
   if (leer_ADC(SENSOR_TEMP_AMB) < (T0 - deltaT)) {
      MICRO_FORZ();
      return ESTADO_FORZADORES;
   };
MICRO_COMPYFORZ();  
return ESTADO_COMPRESOR_Y_FORZADORES;
}




int estado_descongelamiento(float deltaT,float T0){
   if(leer_ADC(SENSOR_TEMP_EVAP) > DESCONGELADO){
      return ESTADO_ERROR1;
}else{
   MICRO_DEFROST();
   return ESTADO_DESCONGELAMIENTO;
};
};


int estado_forzadores(float deltaT,float T0){
   if(leer_ADC(PRESOSTATO_BAJA) < PRESION_ALERTA){
      return ESTADO_ERROR2;
   }
   if(leer_ADC(SENSOR_TEMP_EVAP) <= DESCONGELADO){
      MICRO_FORZ();
      return ESTADO_FORZADORES;
   }
   if(leer_ADC(SENSOR_TEMP_EVAP) > DESCONGELADO){
      MICRO_ESPERA();
      return ESTADO_ESPERA;
   }
  MICRO_FORZ();
 return ESTADO_FORZADORES;  
}


int estado_error1(float deltaT, float T0){
if(RESET == 0) {
   MICRO_ERROR_1();
   return ESTADO_ERROR1;
}else{
 MICRO_ESPERA();
return ESTADO_ESPERA;
};  
   }
   
   int estado_error2(float deltaT, float T0){
if(RESET == 0) {
   MICRO_ERROR_2();
   return ESTADO_ERROR2;
}else{
   MICRO_ESPERA();
return ESTADO_ESPERA;
};  
   }
   
 //--------------------------------
 
   



  
