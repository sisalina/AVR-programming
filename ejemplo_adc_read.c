#include <built_in.h>
unsigned int val;
// Este código hace una lectura analógica desde el canal ADC 1
// El fin de este ejemplo es mostrar el formato que se debe tener
// al momento de invocar la función ADC_Read()
// visita 555riente.blogspot.com para más tips...

void main() {

  while(1){
  val = ADC_Read(1);       // obtener valor Análogo de canal ADC 1
  }
  }
