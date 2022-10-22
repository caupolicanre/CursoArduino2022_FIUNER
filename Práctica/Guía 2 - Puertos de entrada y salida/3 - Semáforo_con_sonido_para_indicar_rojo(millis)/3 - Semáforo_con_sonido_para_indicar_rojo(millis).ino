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
