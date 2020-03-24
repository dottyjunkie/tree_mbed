#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{
      uLCD.cls();
      uLCD.reset();
      uLCD.printf("\n 105022204 fucking girl everydayyyy\n"); //Default Green on black text
      uLCD.background_color(0xFF00FF); 
      wait(30);

}