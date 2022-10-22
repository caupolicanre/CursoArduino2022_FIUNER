
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
