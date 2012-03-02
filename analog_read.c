#include <built_in.h>
unsigned int val;
unsigned int i;


void main() {

  char valor[8];
  UART1_Init(9600);               // Initialize UART module at 9600 bps
  DDRB.B2=1;
  
  while(1){
  val = ADC_Read(3);       // obtener valor Análogo de canal 3
  IntToStr(val, valor);
  for (i = 0; i <7 ; i++ )UART1_Write(valor[i]);
  UART1_Write_Text(" ");
  delay_ms(100);
  }
  }

