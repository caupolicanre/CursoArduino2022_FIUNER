// Guía 3 - Puertos de comunicación serie
// 3 - Graficación
// Incorpore el siguiente arreglo a un nuevo programa:  *arreglo*
// Recorra todos los datos de manera circular (cuando llega al último vuelve a comenzar) 
// y saque por el puerto serie cada uno de los datos (con Serial.println) cada 5ms 
// (puede usar delay o mejor si se anima a la metodología empleada con la función millis).
// Revise el SerialPlotter (en herramientas) para ver si puede visualizar la señal.

unsigned char  SENIAL[] = {
17,17,17,17,17,17,17,17,17,17,17,18,18,18,17,17,17,17,17,17,17,18,18,18,18,18,18,18,17,17,
16,16,16,16,17,17,18,18,18,17,17,17,17,18,18,19,21,22,24,25,26,27,28,29,31,32,33,34,34,35,
37,38,37,34,29,24,19,15,14,15,16,17,17,17,16,15,14,13,13,13,13,13,13,13,12,12,10,6,2,3,15,
43,88,145,199,237,252,242,211,167,117,70,35,16,14,22,32,38,37,32,27,24,24,26,27,28,28,27,
28,28,30,31,31,31,32,33,34,36,38,39,40,41,42,43,45,47,49,51,53,55,57,60,62,65,68,71,75,79,
83,87,92,97,101,106,111,116,121,125,129,133,136,138,139,140,140,139,137,133,129,123,117,109,
101,92,84,77,70,64,58,52,47,42,39,36,34,31,30,28,27,26,25,25,25,25,25,25,25,25,24,24,24,24,
25,25,25,25,25,25,25,24,24,24,24,24,24,24,24,23,23,22,22,21,21,21,20,20,20,20,20,19,19,18,
18,18,19,19,19,19,18,17,17,18,18,18,18,18,18,18,18,17,17,17,17,17,17,17};

int indice = 0; // Índice para recorrer la senial
const int limiteSenial = sizeof(SENIAL)-1 // Límite del arreglo
const int intervalo 5; //ms

// Variables para trabajar con la función millis
unsigned long tiempoPrevio = 0;
unsigned long tiempoActual;

void setup(){
  Serial.begin(9600);
}

void loop(){
  tiempoActual = millis();

  if (tiempoActual - tiempoPrevio >= intervalo){

    Serial.println(SENIAL[indice]);

    indice++;
    if (indice > limiteSenial){
      // Vuelve a comenzar el arreglo
      indice = 0;
    }

    tiempoPrevio = tiempoActual;
  }
}