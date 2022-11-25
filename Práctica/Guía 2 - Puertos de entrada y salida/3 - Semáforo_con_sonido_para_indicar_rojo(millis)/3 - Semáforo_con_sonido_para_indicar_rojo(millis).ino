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
const int pausaLarga = 4000;
const int pausaCorta = 1000;
int pausa = pausaLarga;

int caso = 0;

unsigned long tiempoPrevio = 0;


void setup() {
  pinMode(ledRojo, OUTPUT);       // Rojo
  pinMode(ledAmarillo, OUTPUT);   // Amarillo
  pinMode(ledVerde, OUTPUT);      // Verde
  pinMode(buzzer, OUTPUT);        // Buzzer

  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(buzzer, LOW);
}

void loop() {

  unsigned long tiempoActual = millis();  // Tiempo actual que lleva ejecutándose el programa

  if (tiempoActual - tiempoPrevio >= pausa){
    caso++;
    if (caso >= 4){
      // Reinicia al primer caso cuando termina el ciclo del semáforo
      caso = 0;
    }
    
    tiempoPrevio = tiempoActual;  // Actualiza el tiempo previo para la siguiente comapración
  }

  switch(caso){
    case 0:
      digitalWrite(ledVerde, HIGH);    // Verde ENCENDIDO
      break;

    case 1:
      digitalWrite(ledAmarillo, HIGH); // Amarillo ENCENDIDO
      break;
    
    case 2:
      digitalWrite(ledRojo, HIGH);     // Rojo ENCENDIDO
      digitalWrite(buzzer, HIGH);      // Buzzer ENCENDIDO
      break;
    
    case 3:
      digitalWrite(ledAmarillo, HIGH); // Amarillo ENCENDIDO
      digitalWrite(ledRojo, HIGH);     // Rojo ENCENDIDO
      break;
  }

  // Actualizo la variable pausa dependiendo en que etapa se encuentra el semáforo
  if (caso == 0 || caso == 2){
    pausa = pausaLarga;
  }
  else if (caso == 1 || caso == 3){
    pausa = pausaCorta;
  }

  apagarSemaforo();

}

void apagarSemaforo(){
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(buzzer, LOW);
}