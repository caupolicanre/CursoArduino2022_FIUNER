// Guía 2 - Puertos de entrada y salida
// 5 - Pulsador_enciende_LED
// Conectar un pulsador en la entrada 3 y utilizarlo para encender y apagar un LED conectado en el pin 8 (Cuando se pulsa se enciende, cuando se libera se apaga).

// Pines
#define led 8
#define pulsador 3

// Variables globales
int apretado = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
}

void loop() {

  if(digitalRead(pulsador) == HIGH){
    digitalWrite(led, LOW);
  }
  else{
    digitalWrite(led, HIGH);
  }
}
