// Pines
#define led 8
#define pulsador 3
int estadoAnterior = -1;
int estadoLed = LOW;
String tecla;

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


  tecla = Serial.read();

  if(tecla == "E" || tecla == "e"){
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
}

