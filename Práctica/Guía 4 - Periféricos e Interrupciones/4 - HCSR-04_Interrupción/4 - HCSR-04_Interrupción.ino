// Guía 4 - Periféricos e Interrupciones
// 4 - HCSR-04_Interrupción
// Modifique su programa para que tanto el inicio y fin del sensado, como el pulso de ECHO estén ligados a interrupciones externas. 
// Considere el uso de las funciones attachInterrupt() y digitalPinToInterrupt(). Además, se requiere que las interrupciones se activen por flanco (ver parámetros RISING, FALLING, CHANGE). 
// Nota: para contabilizar el tiempo de pulso del pin ECHO considere la utilización de la función millis()


/*Aqui se configuran los pines donde debemos conectar el sensor*/
#define TRIGGER_PIN         12
#define ECHO_PIN            3
#define EXTERNAL_BUTTON     2


/*Variables auxiliares para el debouncing del botón*/
bool state_now = false;
bool state_previous = false;

/* Variable auxiliar para controlar la medición */
bool measure = false;
int delta_time = 0;
float distance = 0;

void setup() {
  // Inicialización de pines
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(EXTERNAL_BUTTON, INPUT_PULLUP);
  // Inicialización de UART
  Serial.begin(115200);
}


void loop() {
  state_now = digitalRead(EXTERNAL_BUTTON);   
  if ((state_now == false) && (state_previous == true)){ /* Detección de flanco descendente */
    measure = !measure;
    switch(measure){
      case 1:
        Serial.println("Iniciando medición");
      break;
      case 0:
        Serial.println("Deteniendo medición");
      break;
      }
  }

  if(measure){
      
      delta_time = 0;
      digitalWrite(TRIGGER_PIN, HIGH);
      delayMicroseconds(10);
      digitalWrite(TRIGGER_PIN, LOW);  
      delta_time = pulseIn(ECHO_PIN, HIGH);
      //delta_time = pulseIn(ECHO_PIN, HIGH); //obtenemos el ancho del pulso 
       distance = delta_time/58;
       Serial.print("Distancia: ");
       Serial.print(distance);
       Serial.println(" cm");
  }else{
      
      
  }
 
  state_previous = digitalRead(EXTERNAL_BUTTON); 
  delay(100);
}

void delya1uS(void){
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  __asm__("nop\n\t");
  }
