// 3 - Blink de tres leds en forma simultánea
// Usando la misma protoboard agregue un led más conectado al pin 8 de la placa. 
// Genere un nuevo sketch que permita que ambos leds parpadeen de igual manera que el led de la placa.
//  a. En función de lo observado ¿Por qué considera que es necesario generar un nuevo sketch para que ambos leds externos parpadeen?
//
//  Es necesario un sketch nuevo para definir el nuevo led y manejar el voltaje que recibirá

// Defino elementos
#define led 8


void setup() {
  // Inicializo los leds como salida
  pinMode(LED_BUILTIN, OUTPUT);   // Led de la placa
  pinMode(led, OUTPUT);           // Led de la protoboard
}


void loop() {
  // Enciendo los Leds
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(led, HIGH);
  delay(1000); // Espero 1 segundo

  // Apago los Leds
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(led, LOW);
  delay(1000); // Espero 1 segundo
}
