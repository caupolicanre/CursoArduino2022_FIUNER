
// Pines
#define led 8
#define pulsador 3

// Variables globales
int estadoAnterior = -1;
int estadoLed = HIGH;


void setup() {
  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
}

void loop() {
  int estadoActual = digitalRead(pulsador);

  if(estadoActual == LOW && estadoAnterior == HIGH){
    if(estadoLed == LOW){
      digitalWrite(led, HIGH);
      estadoLed = HIGH;
    }
    else{
      digitalWrite(led, LOW);
      estadoLed = LOW;
    } 
    delay(200);          
  }
  estadoAnterior = estadoActual;
}
