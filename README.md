Proyecto de control ON/OFF de sistema de aire acondicionado con medidas de protección frente a posibles daños en el equipo.

 El concepto está basado en un sistema de aire acondicionado tipo SPLIT. Se medirá la temperatura ambiente, y en función de dicha temperatura se pondrán en funcionamiento el compresor así como los forzadores.
- CICLO DE FUNCIONAMIENTO (SIN ERRORES DETECTADOS):
  \nEl sistema arrancará en estado "ESPERA". En dicho estado, el forzador de la unidad interior se mantiene prendido, con el compresor apagado. El forzador de la unidad exterior se encontrará apagado. En este momento el equipo sensará la temperatura ambiente, a espera de Tamb >= T0 + DeltaT.
  \nUna vez detectada dicha Tambiente, el sistema entrará en el estado "COMPRESOR Y FORZADORES". En este estado, ambos forzadores comienzan a funcionar, asi como el compresor. El equipo se encontrará funcionando en este estado hasta detectar Tamb <= T0-DeltaT.
  \nUna vez se alcanza la temperatura deseada, el compresor se apagará. Aún con el compresor apagado, los forzadores seguirán encendidos. Esto a fin de mantener el intercambio de temperatura aún con el compresor apagado, puesto que por un momento el evaporador sigue a bajas temperaturas, asi como el condensador a altas.
  Luego de detectarse una temperatura en el evaporador mayor a 10ºC, el equipo entra en estado de ESPERA nuevamente. 
