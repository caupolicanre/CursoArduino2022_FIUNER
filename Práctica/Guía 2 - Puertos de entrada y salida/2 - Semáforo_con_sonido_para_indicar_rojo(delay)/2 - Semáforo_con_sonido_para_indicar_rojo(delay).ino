// Guía 2 - Puertos de entrada y salida
// 2 - Semáforo_con_sonido_para_indicar_rojo(delay)
// Por medio de 3 LEDs y un buzzer armar un circuito que represente un semáforo.
//
// Secuencia a programar:
// 1. Verde
//	  Pausa Larga (4s)
// 2. Amarillo
//	  Pausa Corta (1s)
// 3. Rojo con sonido
//    Pausa Larga (4s)
// 4. Rojo y amarillo
//    Pausa Corta (1s)



// Pines
#define ledRojo 9
#define ledAmarillo 8
#define ledVerde 7
#define buzzer 3

// Variables globales
int pausaLarga = 4000;
int pausaCorta = 1000;

void setup() {
  pinMode(ledRojo, OUTPUT);       // Rojo
  pinMode(ledAmarillo, OUTPUT);   // Amarillo
  pinMode(ledVerde, OUTPUT);      // Verde
  pinMode(buzzer, OUTPUT);        // Buzzer
}

void loop() {
  digitalWrite(ledVerde, HIGH);    // Verde ENCENDIDO

  delay(pausaLarga);               // Espera 4 segundos

  digitalWrite(ledVerde, LOW);     // Verde APAGADO
  digitalWrite(ledAmarillo, HIGH); // Amarillo ENCENDIDO

  delay(pausaCorta);               // Espera 1 segundo

  digitalWrite(ledAmarillo, LOW);  // Amarillo APAGADO
  digitalWrite(ledRojo, HIGH);     // Rojo ENCENDIDO
  digitalWrite(buzzer, HIGH);      // Buzzer ENCENDIDO

  delay(pausaLarga);               // Espera 4 segundos

  digitalWrite(buzzer, LOW);       // Buzzer APAGADO
  digitalWrite(ledAmarillo, HIGH); // Amarillo ENCENDIDO

  delay(pausaCorta);               // Espera 1 segundo

  digitalWrite(ledAmarillo, LOW);  // Amarillo APAGADO
  digitalWrite(ledRojo, LOW);      // Rojo APAGADO  
}
