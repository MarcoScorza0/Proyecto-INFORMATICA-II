

#include "conf.h"
#include "avr_Adc.h"

//funciones.c



int estado_espera(float deltaT,float T0){
  if (leer_ADC(SENSOR_TEMP_AMB) > (T0 + deltaT)){
     return ESTADO_COMPRESOR_Y_FORZADORES;
  } else {
     return ESTADO_ESPERA;
    
}
}



int estado_compresor_y_forzadores(float deltaT,float T0){
   if (leer_ADC(SENSOR_TEMP_EVAP) < 50){
      return ESTADO_DESCONGELAMIENTO;
   };
   if (leer_ADC(SENSOR_TEMP_AMB) < (T0 - deltaT)) {
      return ESTADO_FORZADORES;
   };
  
   return ESTADO_COMPRESOR_Y_FORZADORES;
}




int estado_descongelamiento(float deltaT,float T0){
   if(leer_ADC(SENSOR_TEMP_EVAP) > DESCONGELADO){
      return ESTADO_ERROR1;
}else{
   return ESTADO_DESCONGELAMIENTO;
};
};

int estado_error1(void){
   if(RESET==1){
      return ESTADO_ESPERA;
   } else{
      return ESTADO_ERROR1;
   }
}




int estado_forzadores(float deltaT,float T0){
   if(leer_ADC(PRESOSTATO_BAJA) < PRESION_ALERTA){
      return ESTADO_ERROR2;
   }
   if(leer_ADC(SENSOR_TEMP_EVAP) <= DESCONGELADO){
      return ESTADO_FORZADORES;
   }
   if(leer_ADC(SENSOR_TEMP_EVAP) > DESCONGELADO){
      return ESTADO_ESPERA;
   }
 return ESTADO_FORZADORES;  
}



  
