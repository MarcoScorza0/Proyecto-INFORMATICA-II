

/*ESTADOS:
INICIO
ESPERA
COMPRESOR Y FORZADORES
DESCONGELAMIENTO
ERROR 1
ERROR 2
FORZADORES

*/
// ESTADOS FALTANTES: ERROR1_ERROR2_


//Funciones de estado.
int estado_espera(float deltaT,float T0);
int estado_compresor_y_forzadores(float deltaT,float T0);
int estado_forzadores(float deltaT,float T0);
int estado_descongelamiento(float deltaT, float T0);
int estado_error1(float deltaT,float T0);
int estado_error2(float deltaT, float T0);

//Funciones comunicación con MICRO.
void MICRO_ESPERA();
 void MICRO_COMPYFORZ();
 void MICRO_DEFROST();
 void MICRO_FORZ();
  void MICRO_DEFAULT();
  void MICRO_ERROR_2();
  void MICRO_ERROR_1();


