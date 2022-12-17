// Guía 4 - Periféricos e Interrupciones
// 4 - HCSR-04_Interrupción
// Modifique su programa para que tanto el inicio y fin del sensado, como el pulso de ECHO estén ligados a interrupciones externas. 
// Considere el uso de las funciones attachInterrupt() y digitalPinToInterrupt(). Además, se requiere que las interrupciones se activen por flanco (ver parámetros RISING, FALLING, CHANGE). 
// Nota: para contabilizar el tiempo de pulso del pin ECHO considere la utilización de la función millis()


/*Aqui se configuran los pines donde debemos conectar el sensor*/
#define TRIGGER_PIN         12
#define ECHO_PIN            3
#define EXTERNAL_BUTTON     2   // pin para la interrupción


/*Variables auxiliares para el debouncing del botón*/
bool state_now = false;
bool state_previous = false;

/* Variable auxiliar para controlar la medición */
bool measure = false;
int delta_time = 0;
float distance = 0;

// Interrupción
void buttonInterrupt() {
  measure = !measure;

  if(measure == true){
    Serial.println("Iniciando medición");
  }
  if(measure == false){
    Serial.println("Deteniendo medición");
  }
}

void setup() {
  // Inicialización de pines
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Inicialización del pin con la interrupción
  attachInterrupt(digitalPinToInterrupt(EXTERNAL_BUTTON), buttonInterrupt, RISING);

  // Inicialización de UART
  Serial.begin(115200);
}


void loop() {

  if(measure){
    delta_time = 0;

    digitalWrite(TRIGGER_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIGGER_PIN, LOW);  

    delta_time = pulseIn(ECHO_PIN, HIGH);
    distance = delta_time/58;

    Serial.print("Distancia: ");
    Serial.print(distance);
    Serial.println(" cm");
  }
 
  delay(100);
}