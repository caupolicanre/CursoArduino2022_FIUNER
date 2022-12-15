// Guía 1 - Herramientas - Hello World
// 6 - Blink condicionado por Pulsador
// Agregue al conexionado un pulsador que permita detener (o deshabilitar) el parpadeo de los leds.

// Defino elementos
#define ledExt_2 8
#define ledExt_1 13 // Led que parpadea a doble de frecuencia
#define pulsador 2

// Variables para el pulsador
int estadoAnterior = -1;
int estadoActual;
bool encendido = false;

// Variables para la función millis()
unsigned long tiempoPrevio = 0;
unsigned long tiempoActual;

const int intervalo = 500; // ms
int caso = 0;

void setup() {
  // Inicializo los leds como salida
  pinMode(ledExt_1, OUTPUT);
  pinMode(ledExt_2, OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
}

void loop() {

  tiempoActual = millis();
  estadoActual = digitalRead(pulsador);

  if (estadoActual == LOW && estadoAnterior == HIGH){
    cambiarEstadoPulsador();
  }

  estadoAnterior = estadoActual;

  if (encendido == true && tiempoActual - tiempoPrevio >= intervalo){
    parpadeoContrafase();
    caso++;
    if (caso >= 4){
      // Reinicia al primer caso cuando termina el ciclo del semáforo
      caso = 0;
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
  switch(caso){
    case 0:
      digitalWrite(ledExt_1, HIGH);
      digitalWrite(ledExt_2, HIGH);
      break;

    case 1:
      cambiarEstadoLed(ledExt_1);
      break;
      
    case 2:
      cambiarEstadoLed(ledExt_2);
      cambiarEstadoLed(ledExt_1);
    
    case 3:
      cambiarEstadoLed(ledExt_1);
  }
}