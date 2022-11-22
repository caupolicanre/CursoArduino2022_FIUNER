// Guía 1 - Herramientas - Hello World
// 4 - Blink de tres leds en contrafase
// Usando el conexionado del punto anterior, genere un nuevo sketch para que los leds externos parpadeen en contrafase, es decir, mientras uno esté encendido, el otro se mantenga apagado.

// Defino elementos
#define led 8


void setup() {
  // Inicializo los leds como salida
  pinMode(LED_BUILTIN, OUTPUT);   // Led de la placa
  pinMode(led, OUTPUT);           // Led de la protoboard
}


void loop() {

  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(led, LOW);
  delay(1000); // Espero 1 segundo


  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(led, HIGH);
  delay(1000); // Espero 1 segundo
}
