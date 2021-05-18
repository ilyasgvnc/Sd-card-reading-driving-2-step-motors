#include <18F4550.h>
#fuses HSPLL,USBDIV,PLL5,PUT,CPUDIV1,VREGEN,NOWDT,NOPROTECT,NOLVP,NODEBUG,NOMCLR
#use delay(clock=48000000)
/*
   ARDUYNO GELY?TYRME PLATFORMU 
    POLYS ÇAKAR TEST YAZILIMI
*/
void main()
{
   while(true)
   {
      for ( int i = 0; i < 3; i++ ) {
      output_high(PIN_C0);
      delay_ms(90);
      output_low(PIN_C0);
      delay_ms(40);
      }
      for ( int z = 0; z < 3; z++ ) {
      output_high(PIN_C1);
      delay_ms(90);
      output_low(PIN_C1);
      delay_ms(40);
      }
   }
}
