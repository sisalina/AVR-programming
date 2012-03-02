unsigned int i;

void main() {
  char cadena[8];                // definimos un arreglo de 8 espacios
  UART1_Init(9600);              // definimos la velocidad a 9600 bps
  int numero=12345678;           // este número lo queremos transformar a chars

  while(1){
  IntToStr(numero, cadena);      // esta función transforma el numero a chars
  for (i = 0; i <7 ; i++ )UART1_Write(valor[i]);
  UART1_Write_Text(" ");         // dejo un pequeño espacio entre cada cifra
  delay_ms(1000);
  }
  
  }
