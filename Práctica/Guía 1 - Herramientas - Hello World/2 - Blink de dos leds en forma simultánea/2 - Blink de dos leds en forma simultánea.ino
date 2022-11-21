// 2 - Blink de dos leds en forma simultánea
// Usando la protoboard, conecte un led al pin 13 de la placa. 
// Para esto es necesario conectar una resistencia de polarización entre el led y el puerto GPIO de la placa.


// Defino elementos
#define led 13


void setup() {
  // Inicializo los leds como salida
  pinMode(LED_BUILTIN, OUTPUT);   // Led de la placa
  // pinMode(led, OUTPUT);           // Led de la protoboard
}


void loop() {
  // Enciendo los Leds
  digitalWrite(LED_BUILTIN, HIGH);
  // digitalWrite(led, HIGH);
  delay(1000); // Espero 1 segundo

  // Apago los Leds
  digitalWrite(LED_BUILTIN, LOW);
  // digitalWrite(led, LOW);
  delay(1000); // Espero 1 segundo
}
