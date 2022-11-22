// Guía 2 - Puertos de entrada y salida
// 1 - SOS_Código_Morse_LED
// Escriba un programa que utilizando un LED conectado en la salida 8 del Arduino, envíe el mensaje “SOS” utilizando código Morse.
//
// En función de la implementación realizada responda:
// ¿Qué valor de temporización empleó para el ancho de los pulsos?
// Para el punto utilicé 200 milisegundos, y para el guión, el triple del valor del punto (600).
// ¿Qué hace el microcontrolador mientras transcurre el tiempo seleccionado?
// Mientras ocurre el tiempo seleccionado el microcontrolador espera la cantidad de milisegundos sin hacer nada


// Defino elementos
#define led 8
#define buzzer 3

// Código Morse

// Delay del punto
int puntoDelay = 200;
int guionDelay = puntoDelay * 3;

// Cadena de texto
char cadena = 'SOS';

void setup(){

  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop(){

  letra_S();
  delay(guionDelay);
  letra_O();
  delay(guionDelay);
  letra_S();

  delay(guionDelay);
}

void letra_S(){

  for(int i=0; i<3; i++){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);

    delay(puntoDelay);

    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);

    delay(puntoDelay);
  }

}

void letra_O(){

  for(int i=0; i<3; i++){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);

    delay(guionDelay);

    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);

    delay(puntoDelay);
  }

}