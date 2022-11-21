// 5 - Led parpadea al doble de frecuencia del otro led
// Usando el conexionado del punto anterior, genere un nuevo sketch para que el led externo conectado al pin 13 parpadee al doble de frecuencia que el led conectado al pin 8.

// Defino elementos
#define ledExt_2 8
#define ledExt_1 13 // Led que parpadea a doble de frecuencia


void setup() {
  // Inicializo los leds como salida
  pinMode(ledExt_1, OUTPUT);
  pinMode(ledExt_2, OUTPUT);
}


void loop() {

  digitalWrite(ledExt_1, HIGH);
  digitalWrite(ledExt_2, HIGH);

  delay(500);
  digitalWrite(ledExt_1, LOW);

  delay(500);
  digitalWrite(ledExt_2, LOW);
  digitalWrite(ledExt_1, HIGH);

  delay(500);
  digitalWrite(ledExt_1, LOW);
  delay(500);
}
