// Guía 5 - Entradas y Salidas Analógicas
// 5 - VúmetroLedBuzzer
// Modifique el ejercicio 3, agregando funcionalidades de reproducción de sonido, 
// de manera que se reproduzca el nombre del color de led que se está encendiendo en ese momento.


// Bibliotecas
#include <Arduino.h>
#include "Talkie.h"
#include "Vocab_US_Large.h"
#include "Vocab_Special.h"
// #include "Vocab_US_TI99.h"
// #include "Vocab_US_Clock.h"

// Talkie voice
Talkie voice(true, false);

// Pines
#define ledRojo 5
#define ledAmarillo 7
#define ledVerde 8
#define Buzzer 3


#define PERIODO_MUESTREO 100 /* 100 ms */
#define MIN_ENTRADA_ANALOGICA 0
#define MAX_ENTRADA_ANALOGICA 1023
#define MIN_SALIDA_ANALOGICA 0
#define MAX_SALIDA_ANALOGICA 255

const int umbral1 = 3.3;
const int umbral2 = 4.9;

const int analogInPin = A0;      /* Entrada Analógica conectada al potenciómetro */

int valorDigitalPote = 0;        /* Valor digitalizado de la entrada analogica */
float salidaAnalogicaLed = 0;    // Salida PWM conectad al Led
float voltaje;

void apagarLeds(){
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, LOW);
}

void prenderLed(float voltaje){

  if (voltaje <= umbral1) {
    digitalWrite(ledRojo, HIGH);
    Serial.println("LED rojo");
    voice.say(sp2_RED);
  }

  if ((voltaje > umbral1) && (voltaje <= umbral2)) {
    digitalWrite(ledAmarillo, HIGH);
    Serial.println("LED amarillo");
    voice.say(sp2_YELLOW);
  }

  if (voltaje > umbral2){
    digitalWrite(ledVerde, HIGH);
    Serial.println("LED verde");
    voice.say(sp2_GREEN);
  }
}

void setup() {
  // Pote y leds
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(Buzzer, OUTPUT);

  // Los leds se inicializan apagados
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(Buzzer, HIGH);

  /* Inicializa puerto de comunicación serie */
  Serial.begin(9600);
}

void loop() {
  
  valorDigitalPote = analogRead(analogInPin);
  voltaje = (valorDigitalPote - MIN_ENTRADA_ANALOGICA)* 5.0 / MAX_ENTRADA_ANALOGICA ;

  Serial.print("Voltaje: ");
  Serial.print(voltaje);
  Serial.print("V\t");

  apagarLeds();
  prenderLed(voltaje);

  delay(PERIODO_MUESTREO);
}
