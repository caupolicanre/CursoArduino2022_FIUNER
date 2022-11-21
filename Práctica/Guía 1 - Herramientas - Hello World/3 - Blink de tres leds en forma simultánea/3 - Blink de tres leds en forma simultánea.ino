// 3 - Blink de tres leds en forma simultánea
// Usando la misma protoboard agregue un led más conectado al pin 8 de la placa. 
// Genere un nuevo sketch que permita que ambos leds parpadeen de igual manera que el led de la placa.


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
