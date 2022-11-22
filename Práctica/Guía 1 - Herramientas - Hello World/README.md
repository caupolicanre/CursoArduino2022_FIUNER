# 1. Modulo 1: Herramientas - Hello World

# 🎯 Objetivos

- Experimentar el uso del Entorno de Desarrollo (IDE) de Arduino
- Conocer las principales características de la placa Arduino a emplear durante el curso.
- Realizar programas sencillos y descargarlos a la placa
- Familiarizarse con la documentación necesaria para realizar conexiones de hardware externo a la placa.

---

# 📘 Material de clase

> *Presentación*
> 
> 
> [Diapositivas de la clase](https://docs.google.com/presentation/d/1VEM5nxEVCEm3oYbyKCCGZwpLSM7952ATvAAZyaE6-ao)
> 
> [Herramientas - Hello World.pdf](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Teor%C3%ADa/1.%20M%C3%B3dulo%201%20Herramientas%20y%20Hello%20World/Herramientas%20-%20Hello%20World.pdf)
> 

## 📑 Material complementario

> *Diagrama esquemático de placas ARDUINO*
> 
> 
> [Arduino_Uno_Rev3-schematic.pdf](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Teor%C3%ADa/1.%20M%C3%B3dulo%201%20Herramientas%20y%20Hello%20World/Arduino_Uno_Rev3-schematic.pdf)
> 
> [Arduino_Mega2560_R3-schematic.pdf](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Teor%C3%ADa/1.%20M%C3%B3dulo%201%20Herramientas%20y%20Hello%20World/Arduino_Mega2560_R3-schematic.pdf)
> 

---

# ⌨️ Actividades

> ****Guía****
> 
> 
> [Guía 1: Herramientas - Hello World](https://docs.google.com/document/d/16uiOu0zg6UIExf4PoiJ4tSq9lVoX3vDSt8ILKTXpob0)
> 
> [Guía de trabajo 1 Herramientas - Hello World.pdf](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/Gu%C3%ADa%20de%20trabajo%201%20Herramientas%20-%20Hello%20World.pdf)
> 

> [Entrega Guía 1](https://drive.google.com/drive/folders/1kI8ssgFVeuBM7rRWlwhV_uqjgFapNXTF)
> 
> 
> *Entregar ejercicio 5 (sketch y video)*
> 

## 💻 Scripts

> ****************[Ejercicio 1](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/1%20-%20Blink): “Blink”****************  
”Instale el Entorno Integrado de Desarrollo Arduino IDE y ejecute el ejemplo de prueba *Blink.*”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/1%20-%20Blink/1%20-%20Blink.ino)
   

> ****************[Ejercicio 2](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/2%20-%20Blink%20de%20dos%20leds%20en%20forma%20simult%C3%A1nea): “Blink de dos leds en forma simultánea”****************  
”Usando la protoboard, conecte un led al pin 13 de la placa. Para esto es necesario conectar una resistencia de polarización entre el led y el puerto GPIO de la placa.”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/2%20-%20Blink%20de%20dos%20leds%20en%20forma%20simult%C3%A1nea/2%20-%20Blink%20de%20dos%20leds%20en%20forma%20simult%C3%A1nea.ino)


> ****************[Ejercicio 3](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/3%20-%20Blink%20de%20tres%20leds%20en%20forma%20simult%C3%A1nea): “Blink de tres leds en forma simultánea”****************  
”Usando la misma protoboard agregue un led más conectado al pin 8 de la placa. genere un nuevo sketch que permita que ambos leds parpadeen de igual manera que el led de la placa.”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/3%20-%20Blink%20de%20tres%20leds%20en%20forma%20simult%C3%A1nea/3%20-%20Blink%20de%20tres%20leds%20en%20forma%20simult%C3%A1nea.ino)


> ****************[Ejercicio 4](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/4%20-%20Blink%20de%20tres%20leds%20en%20contrafase): “Blink de tres leds en contrafase”****************  
”Usando el conexionado del punto anterior, genere un nuevo sketch para que los leds externos parpadeen en contrafase, es decir, mientras uno esté encendido, el otro se mantenga apagado.”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/4%20-%20Blink%20de%20tres%20leds%20en%20contrafase/4%20-%20Blink%20de%20tres%20leds%20en%20contrafase.ino)


> ****************[Ejercicio 5](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/5%20-%20Led%20parpadea%20al%20doble%20de%20frecuencia%20del%20otro%20led): “Led parpadea al doble de frecuencia del otro led”****************  
”Usando el conexionado del punto anterior, genere un nuevo sketch para que el led externo conectado al pin 13 parpadee al doble de frecuencia que el led conectado al pin 8.”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/5%20-%20Led%20parpadea%20al%20doble%20de%20frecuencia%20del%20otro%20led/5%20-%20Led%20parpadea%20al%20doble%20de%20frecuencia%20del%20otro%20led.ino)


> ****************[Ejercicio 6](https://github.com/caupolicanre/CursoArduino2022_FIUNER/tree/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/6%20-%20Blink%20condicionado%20por%20Pulsador): “Blink condicionado por Pulsador”****************  
”Agregue al conexionado un pulsador que permita detener (o deshabilitar) el parpadeo de los leds.”
> 
> - [Código](https://github.com/caupolicanre/CursoArduino2022_FIUNER/blob/main/Pr%C3%A1ctica/Gu%C3%ADa%201%20-%20Herramientas%20-%20Hello%20World/6%20-%20Blink%20condicionado%20por%20Pulsador/6%20-%20Blink%20condicionado%20por%20Pulsador.ino)

---

# 📖 Historia de Arduino

## 📹 Videos

[Arduino el Documental](https://youtu.be/mltWc9_C9gs)

[La historia detrás de Arduino UNO](https://youtu.be/LBxHQtkWTeo)

> [La marca Arduino: arduino.cc y arduino.org](https://www.aprendiendoarduino.com/2016/03/19/arduino-cc-y-arduino-org-los-dos-arduinos/#google_vignette)
>
