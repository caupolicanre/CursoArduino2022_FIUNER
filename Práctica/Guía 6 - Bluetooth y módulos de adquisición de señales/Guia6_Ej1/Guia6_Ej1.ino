/*
 HC-05 with software serial

 Receives from the hardware serial, sends to software serial.
 Receives from software serial, sends to hardware serial.

 The circuit:
 * RX is digital pin 10 (connect to TX of other device)
 * TX is digital pin 11 (connect to RX of other device)

 Mikal Hart's example modified by Axel Pascal

 This example code is in the public domain.

 */
#include <SoftwareSerial.h>

SoftwareSerial hc_05(19, 18); // RX, TX

void setup()
{
  //Baud rate por defecto para HC-05
  hc_05.begin(9600);
}

void loop() // run over and over
{
 
 hc_05.println("Hola mundo!");

 delay(1000);
}
