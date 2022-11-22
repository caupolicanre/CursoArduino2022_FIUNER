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
> [Puertos de entrada y salida.pdf](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Teor%C3%ADa/2.%20Puertos%20de%20entrada%20y%20salida/Puertos%20de%20entrada%20y%20salida.pdf)
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
> [Guía de trabajo 2_ Puertos de entrada y salida.pdf](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/Gu%C3%ADa%20de%20trabajo%202_%20Puertos%20de%20entrada%20y%20salida.pdf)
> 

> [Entrega Guía 2](https://drive.google.com/drive/folders/1Ugoypqi0AzTErLWD8e1d9oKCZviMRIaa?usp=sharing)
*Entregar ejercicio 3 (sketch y video)*
> 

## 💻 Scripts

> ****************[Ejercicio 1](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/1%20-%20SOS_C%C3%B3digo_Morse_LED): “SOS Código Morse LED”****************  
”Escriba un programa que utilizando un LED conectado en la salida 8 del Arduino, envíe el mensaje “SOS” utilizando código Morse”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/1%20-%20SOS_C%C3%B3digo_Morse_LED/1%20-%20SOS_C%C3%B3digo_Morse_LED.ino)


> ****************[Ejercicio 2](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/2%20-%20Sem%C3%A1foro_con_sonido_para_indicar_rojo(delay)): “Semáforo con sonido para indicar rojo (delay)”****************  
”Por medio de 3 LEDs y un buzzer armar un circuito que represente un semáforo.”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/2%20-%20Sem%C3%A1foro_con_sonido_para_indicar_rojo(delay)/2%20-%20Sem%C3%A1foro_con_sonido_para_indicar_rojo(delay).ino)


> ****************[Ejercicio 3](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/3%20-%20Sem%C3%A1foro_con_sonido_para_indicar_rojo(millis)): “Semáforo con sonido para indicar rojo (millis)”****************  
”Reescriba el programa del ejercicio 2 sin utilizar retardos (delay).  
Si necesita ayuda, puede revisar el uso de la función [millis](https://www.arduino.cc/reference/en/language/functions/time/millis/) en la que incluso puede encontrar el ejemplo resuelto.”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/3%20-%20Sem%C3%A1foro_con_sonido_para_indicar_rojo(millis)/3%20-%20Sem%C3%A1foro_con_sonido_para_indicar_rojo(millis).ino)


> ****************[Ejercicio 4](): “Secuencia de LEDs”****************  
”Conectar 8 LEDs del mismo color y programar una secuencia en la cual se vayan encendiendo de a uno consecutivamente (como si fuera un punto que se va desplazando).”
> 
> - [Código]()


> ****************[Ejercicio 5](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/5%20-%20Pulsador_enciende_LED): “Pulsador enciende LED”****************  
”Conectar un pulsador en la entrada 3 y utilizarlo para encender y apagar un LED conectado en el pin 8 (Cuando se pulsa se enciende, cuando se libera se apaga).”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/5%20-%20Pulsador_enciende_LED/5%20-%20Pulsador_enciende_LED.ino)


> ****************[Ejercicio 6](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/6%20-%20Pulsador_y_liberar_enciende_LED): “Pulsador y liberar enciende LED”****************  
”Con el mismo conexionado del ejercicio anterior, realice un programa que al pulsar (y liberar) encienda el LED y al volver a pulsar (y liberar), lo apague.”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%202%20-%20Puertos%20de%20entrada%20y%20salida/6%20-%20Pulsador_y_liberar_enciende_LED/6%20-%20Pulsador_y_liberar_enciende_LED.ino)
