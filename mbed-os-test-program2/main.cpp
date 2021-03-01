#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led(DigitalOut &ledpin);

int main()
{
   myLED = 1;
   myLED2 = 1;
   while (true)
   {
      Led(myLED2);
      Led(myLED2);
      Led(myLED2);
      Led(myLED);
      Led(myLED);
   }
}