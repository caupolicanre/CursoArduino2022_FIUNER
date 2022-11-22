# 2. Puertos de entrada y salida

# 🎯 Objetivos

- Ejercitar el uso del Entorno de Desarrollo (IDE) de Arduino
- Conocer las características de los puertos de entrada salida en general.
- Realizar programas sencillos usando tanto puertos de entrada (Teclas y pulsadores) y de salida (LEDs) y descargarlos a la placa
- Familiarizarse con la documentación necesaria para realizar conexiones de hardware externo a la placa.

---

# 📘 Material de clase

> *Presentación*
> 
> 
> [Puertos de entrada y salida.pdf](2%20Puertos%20de%20entrada%20y%20salida%205ea8b631a7834ccbb4550beaf66757a4/Puertos_de_entrada_y_salida.pdf)
> 

## 📑 Material complementario

> ********************************************Links interesantes para ampliación del tema:********************************************
> 
> - [Arduino: Entradas y salidas – Manipulación de puertos](http://robots-argentina.com.ar/didactica/arduino-entradas-y-salidas-manipulacion-de-puertos/)
> - [Entradas y Salidas Arduino](https://aprendiendoarduino.wordpress.com/2016/11/08/entradas-y-salidas-arduino/)
> - [Arduino Port Registers (en inglés)](https://www.arduino.cc/en/Reference/PortManipulation)
> - [Pinout Arduino UNO](https://i2.wp.com/descubrearduino.com/wp-content/uploads/2018/10/arduino-Pinout.jpg?ssl=1)

---

# ⌨️ Actividades

> ****Guía****
> 
> 
> [Guía 2: Puertos de entrada y salida](https://docs.google.com/document/d/1X-SN9PLeuD6GRBeKqBGFktCk5AXA7sDprxgLKHAZLQ4)
> 
> [Guía de trabajo 2_ Puertos de entrada y salida.pdf](2%20Puertos%20de%20entrada%20y%20salida%205ea8b631a7834ccbb4550beaf66757a4/Gua_de_trabajo_2__Puertos_de_entrada_y_salida.pdf)
> 

> [Entrega Guía 2](https://drive.google.com/drive/folders/1Ugoypqi0AzTErLWD8e1d9oKCZviMRIaa?usp=sharing)
*Entregar ejercicio 3 (sketch y video)*
> 

> ******Código******
> 
> - Semáforo
>     
>     ```c
>     // Semáforo sencillo en Arduino
>     int tiempoEsperaLargo = 4000;
>     int tiempoEsperaCorto = 1000;
>     #define LedRojo 9
>     #define LedAmarillo 8
>     #define LedVerde 7
>     #define Buzzer 3
>      
>     void setup(){
>       pinMode(LedRojo, OUTPUT);         // Rojo
>       pinMode(LedAmarillo, OUTPUT);     // Amarillo
>       pinMode(LedVerde, OUTPUT);        // Verde
>     }
>     void loop() {
>       digitalWrite(LedVerde, HIGH);     // verde encendido
>       delay(tiempoEsperaLargo);
>       
>       digitalWrite(LedVerde, LOW);      // verde apagado
>       digitalWrite(LedAmarillo, HIGH);  // amarillo encendido
>       delay(tiempoEsperaCorto);
>       
>       digitalWrite(LedAmarillo, LOW);   // amarillo apagado
>       digitalWrite(LedRojo, HIGH);      // rojo encendido
>       digitalWrite(Buzzer, HIGH);       // Buzzer encendido
>       delay(tiempoEsperaLargo);
>       
>       digitalWrite(Buzzer, LOW);         // Buzzer apagado
>       digitalWrite(LedAmarillo, HIGH);   // amarillo encendido
>       delay(tiempoEsperaCorto);
>       
>       digitalWrite(LedRojo, LOW);        // rojo apagado
>       digitalWrite(LedAmarillo, LOW);   // amarillo apagado
>       
>     }
>     ```
>     

## 💻 Scripts

> [Ejercicio 1](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/1%20-%20Blink): “SOS_Código_Morse_LED”
”Instale el Entorno Integrado de Desarrollo Arduino IDE y ejecute el ejemplo de prueba *Blink.*”
> 
> - Código
>     
>     [1 - Blink.ino](2%20Puertos%20de%20entrada%20y%20salida%205ea8b631a7834ccbb4550beaf66757a4/1_-_Blink.ino)
>     
>     ```c
>     /*
>       Blink
>     
>       Turns an LED on for one second, then off for one second, repeatedly.
>     
>       Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
>       it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
>       the correct LED pin independent of which board is used.
>       If you want to know what pin the on-board LED is connected to on your Arduino
>       model, check the Technical Specs of your board at:
>       https://www.arduino.cc/en/Main/Products
>     
>       modified 8 May 2014
>       by Scott Fitzgerald
>       modified 2 Sep 2016
>       by Arturo Guadalupi
>       modified 8 Sep 2016
>       by Colby Newman
>     
>       This example code is in the public domain.
>     
>       https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
>     */
>     
>     // the setup function runs once when you press reset or power the board
>     void setup() {
>       // initialize digital pin LED_BUILTIN as an output.
>       pinMode(LED_BUILTIN, OUTPUT);
>     }
>     
>     // the loop function runs over and over again forever
>     void loop() {
>       digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
>       delay(1000);                      // wait for a second
>       digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
>       delay(1000);                      // wait for a second
>     }
>     ```
>     
>