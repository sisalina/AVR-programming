#include <built_in.h>
unsigned int val;
// Este c�digo hace una lectura anal�gica desde el canal ADC 1
// El fin de este ejemplo es mostrar el formato que se debe tener
// al momento de invocar la funci�n ADC_Read()
// visita 555riente.blogspot.com para m�s tips...

void main() {

  while(1){
  val = ADC_Read(1);       // obtener valor An�logo de canal ADC 1
  }
  }
