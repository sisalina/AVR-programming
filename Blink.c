void main() {

  DDRB.B0 = 1;
  DDRB.B1 = 1;
  DDRB.B2 = 1;
  DDRB.B3 = 1;
  DDRB.B4 = 1;
  
  while(1){
   PORTB.B0=1;
   PORTB.B1=0;
   PORTB.B2=1;
   PORTB.B3=0;
   PORTB.B4=1;
   
   delay_ms(500);
   
   PORTB.B0=0;
   PORTB.B1=1;
   PORTB.B2=0;
   PORTB.B3=1;
   PORTB.B4=0;

   delay_ms(500);
  
  }
}