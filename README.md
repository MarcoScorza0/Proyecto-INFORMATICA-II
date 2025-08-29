Proyecto de control ON/OFF de sistema de aire acondicionado con medidas de protección frente a posibles daños en el equipo.  

El concepto está basado en un sistema de aire acondicionado tipo SPLIT. Se medirá la temperatura ambiente, y en función de dicha temperatura se pondrán en funcionamiento el compresor así como los forzadores.  
CICLO DE FUNCIONAMIENTO (SIN ERRORES DETECTADOS): 

El sistema arrancará en estado "ESPERA". En dicho estado, el forzador de la unidad interior se mantiene prendido, con el compresor apagado. El forzador de la unidad exterior se encontrará apagado, mientras que el interior estará prendido. En este momento el equipo sensará la temperatura ambiente, a espera de altas temperaturas.


 Una vez detectada alta Tambiente, el sistema entrará en el estado "COMPRESOR Y FORZADORES". En este estado, ambos forzadores comienzan a funcionar a la vez, asi como el compresor. El equipo se encontrará funcionando en este estado hasta detectar la temperatura ambiente seteada.

 
 Una vez se alcanza la temperatura deseada, el compresor se apagará. Aún con el compresor apagado, los forzadores seguirán encendidos. Esto a fin de mantener el intercambio de temperatura aún con el compresor apagado, puesto que por un momento el evaporador sigue a bajas temperaturas, asi como el condensador a altas. Luego de detectarse una temperatura en el evaporador mayor a 10ºC, el equipo entra en estado de ESPERA nuevamente. 

  * POSIBLES DETECCIONES DE ERRORES:

    Habrá 2 sensores (además del sensor de temperatura ambiente) a fin de proteger el equipo frente a potenciales daños, ya sea por presiones fuera de rango, como por obstrucciones en el flujo de aire debido a congelamiento en el evaporador.


    ERROR 1:
    - El error 1 es indicativo de congelamiento en el evaporador. Mientras el sistema se encuentra en el estado COMPRESOR Y FORZADORES, se estará sensando la temperatura del evaporador. En caso de detectarse temperaturas de congelamiento, el equipo entrará en modo DESCONGELAMIENTO. para posteriormente ir al estado ERROR 1.
    - DESCONGELAMIENTO: El sistema detiene el funcionamiento del compresor y del forzador exterior. Sin embargo, el forzador interior mantendrá su funcionamiento a fin de descongelar el evaporador. Una vez detectado Tevaporador > 10ºC, el equipo entrará en estado ERROR 1.
    - ERROR 1: El sistema se encontrará con todos sus sistemas apagados, indicando mediante 2 leds un código de error. Se mantendrá en este estado a la espera de intervención externa mediante pulsado de botón "RESET", entrando nuevamente en estado ESPERA, y repitiendo el ciclo.
   
    ERROR 2:
    - El error 2 indica presión de succión fuera de rango. El sistema, una vez alcanza la temperatura deseada, cesa el funcionamiento del compresor y entra en estado COMPRESOR Y FORZADORES. Apenas entra en ese estado, se comenzará a medir la presión de succión. En caso de que el presostato detecte presión menor a 90 psi, el equipo entrará en estado ERROR 2. Una vez que el compresor detiene su funcionamiento, la presión de succión comienza a subir. En esta etapa, solo importan los valores de presión indicados en los instantes posteriores al cese del funcionamiento del compresor. Como en ese momento dicha presión comienza a elevarse, no genera inconveniente alguno que el equipo se mantenga sensando la presión constantemente en dicha etapa, puesto que con el compresor apagado, si la presión se encuentra en rangos adecuados, siempre se detectará presión de succión mayor a 90 psi.
    - ERROR 2: El sistema se encontrará con todos sus sistemas apagados, indicando medianto 2 leds un código de error. Se mantendrá en este estado a la espera de intervención externa mediante pulsado de botón "RESET", entrando nuevamente en estado ESPERA, y repitiendo el ciclo.
