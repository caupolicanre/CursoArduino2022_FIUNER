/* 
 *  Autor JMReta - 2021
 *  basado en ejemplo de Tom Igoe - 2012
*/
#define PERIODO_MUESTREO 100 /* 100 ms */
#define MIN_ENTRADA_ANALOGICA 0
#define MAX_ENTRADA_ANALOGICA 1023
#define MIN_SALIDA_ANALOGICA 0
#define MAX_SALIDA_ANALOGICA 255

const int analogInPin = A0;  /*Entrada Analógica conectada al potenciómetro */
const int analogOutPin = 9; /* Salida Analógica conectada al led */

int valorDigitalPote = 0;        /* Valor digitalizado de la entrada analogica */
int salidaAnalogicaLed = 0;      /* Salida PWM conectad al Led */

void setup() {
  /* Inicializa puerto de comunicación serie */
  Serial.begin(9600);
}

void loop() {
  /* Realiza la conversión analogica-digital: "lectura de la entrada analogica" */
  valorDigitalPote = analogRead(analogInPin);
  /* adapta rangos: entrada analogica con salida analogica */ 
  salidaAnalogicaLed = map(valorDigitalPote, MIN_ENTRADA_ANALOGICA, MAX_ENTRADA_ANALOGICA, MIN_SALIDA_ANALOGICA, MAX_SALIDA_ANALOGICA);
  /* escribe la salida */
  analogWrite(analogOutPin, salidaAnalogicaLed);
  
  Serial.println(valorDigitalPote); // Muestra el valor analógico en el plotter

  delay(PERIODO_MUESTREO);
}
