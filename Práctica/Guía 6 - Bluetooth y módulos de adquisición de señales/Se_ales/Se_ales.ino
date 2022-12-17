/* 
 *  Autor EFilomena - 2021
 *  basado en ejemplo de JMReta- 2021
*/

#include <SoftwareSerial.h>

#define PERIODO_MUESTREO 100 /* 100 ms */
#define rxPin 2
#define txPin 3

SoftwareSerial BlueTooth(rxPin,txPin); 



const int analogInPin = A0;  /*Entrada Analógica conectada al potenciómetro o a la señal de entrada */

int valorDigitalPote = 0;        /* Valor digitalizado de la entrada analogica */
int salida_filtrada  = 0;    /*Salida filtrada */
int salida_filtrada_ant  = 0;
float alfa=0.1;
unsigned long  Tiempo,TiempoA;


 

void setup() {
  /* Inicializa puerto de comunicación serie */
  Serial.begin(115200);

  pinMode(rxPin,INPUT);
  pinMode(txPin,OUTPUT);
  
  BlueTooth.begin(9600);
  Tiempo=millis();
}

void loop() {
  /* " */
  TiempoA=millis();
  if ((TiempoA-Tiempo)>=PERIODO_MUESTREO){
    Tiempo=TiempoA;
    valorDigitalPote = analogRead(analogInPin);
    
//    salida_filtrada = salida_filtrada_ant+alfa*(valorDigitalPote-salida_filtrada_ant);
//    salida_filtrada_ant=salida_filtrada;
    
    Serial.println(valorDigitalPote);
    Serial.print(",");  
    Serial.println(salida_filtrada);


//    BlueTooth.print("*G");
//    BlueTooth.print(valorDigitalPote);
//    BlueTooth.print(",");
//    BlueTooth.print(salida_filtrada);
//    BlueTooth.print("*");
  }
 

}
