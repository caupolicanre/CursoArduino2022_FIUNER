// Guía 2 - Puertos de entrada y salida
// 3 - Semáforo_con_sonido_para_indicar_rojo(millis)
// Reescriba el programa del ejercicio 2 sin utilizar retardos (delay)
// Si necesita ayuda, puede revisar el uso de la función millis en la que incluso puede encontrar el ejemplo resuelto.
// Responda: ¿Qué ventaja tiene este método respecto del empleado en el ejercicio 1?
// La ventaja es que no se detiene el micro por cada delay, sino que se aprovecha todo el tiempo de ejecución


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
