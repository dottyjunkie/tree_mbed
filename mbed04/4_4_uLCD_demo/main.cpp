// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    // basic printf demo = 16 by 18 characters on 
    uLCD.background_color(0x00FF00);
    uLCD.color(BLUE);
    uLCD.printf("\nHello uLCD World\n"); //Default Green on black text

    uLCD.printf("\n  Starting Demo...");
    uLCD.printf("\n  105022204 wu da gin");
    uLCD.text_width(4); //4X size text
    //uLCD.text_color(00BFFF);
    uLCD.text_height(4);

    uLCD.color(RED);

    for (int i=30; i>=0; --i) {
            uLCD.locate(1,2);

            uLCD.printf("%2D.%2D",i);



        wait(1.0);

    }

}