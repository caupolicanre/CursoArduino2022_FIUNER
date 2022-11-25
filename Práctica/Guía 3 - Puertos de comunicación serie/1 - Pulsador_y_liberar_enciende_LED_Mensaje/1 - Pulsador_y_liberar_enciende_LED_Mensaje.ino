// Guía 3 - Puertos de comunicación serie
// 1 - Pulsador_y_liberar_enciende_LED_Mensaje
// Tomando como referencia el ejercicio 6 de la Guía 2 
// (Con el mismo conexionado del ejercicio anterior, realice un programa que al pulsar (y liberar) encienda el LED y al volver a pulsar (y liberar), lo apague.)
// 
// Realice una mejora al mismo, de manera tal que cada vez que cambia el estado del LED, 
// se presente una leyenda en el terminal del puerto serie que indique el estado del LED:
// “Se encendió el LED” --- “ Se apagó el LED”



// Pines
#define led 8
#define pulsador 3
int estadoAnterior = -1;
int estadoLed;

void setup() {
  Serial.begin(9600); // 9600 bits por segundo
  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
}

void loop() {
  int estadoActual = digitalRead(pulsador);

  if(estadoActual == LOW && estadoAnterior == HIGH){
    if(estadoLed == LOW){
      digitalWrite(led, HIGH);
      estadoLed = HIGH;
      Serial.println("Se encendió el LED");
    }
    else{
      digitalWrite(led, LOW);
      estadoLed = LOW;
      Serial.println("Se apagó el LED");
    }         
  }
  estadoAnterior = estadoActual;

  delay(200);
}

