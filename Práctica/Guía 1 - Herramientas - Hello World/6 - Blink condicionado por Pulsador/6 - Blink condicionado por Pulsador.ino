// Guía 1 - Herramientas - Hello World
// 6 - Blink condicionado por Pulsador
// Agregue al conexionado un pulsador que permita detener (o deshabilitar) el parpadeo de los leds.

// Defino elementos
#define ledExt_2 8
#define ledExt_1 13 // Led que parpadea a doble de frecuencia
#define pulsador 2

// Variables globales para el pulsador
int estadoAnterior = -1;
bool encendido = false;

void setup() {
  // Inicializo los leds como salida
  pinMode(ledExt_1, OUTPUT);
  pinMode(ledExt_2, OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
}

void loop() {

  int estadoActual = digitalRead(pulsador);

  if(estadoActual == LOW && estadoAnterior == HIGH){
    cambiarEstadoPulsador();
  }

  estadoAnterior = estadoActual;

  while(encendido == true){
    parpadeoContrafase();

    estadoActual = digitalRead(pulsador);
    if(estadoActual == LOW && estadoAnterior == HIGH){
      cambiarEstadoPulsador();
    }
    estadoAnterior = estadoActual;
  }

}

void cambiarEstadoLed(int led){
  // Función para cambiar el estado actual del led que se recibe por parámetro.
  bool estadoLed = not digitalRead(led);
  digitalWrite(led, estadoLed);
}

void cambiarEstadoPulsador(){
  // Función para cambiar el estado actual del led que se recibe por parámetro.
  if(encendido == false){
    encendido = true;
  }
  else{
    encendido = false;
  }
}

void parpadeoContrafase(){
  digitalWrite(ledExt_1, HIGH);
  digitalWrite(ledExt_2, HIGH);

  delay(500);
  cambiarEstadoLed(ledExt_1);

  delay(500);
  cambiarEstadoLed(ledExt_2);
  cambiarEstadoLed(ledExt_1);

  delay(500);
  cambiarEstadoLed(ledExt_1);
  delay(500);
}