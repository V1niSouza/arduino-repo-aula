# 🤖 Integração Python + Arduino

Este projeto utiliza a biblioteca **PySerial** para possibilitar a comunicação entre o Python e dispositivos conectados via porta serial (USB, COM, etc). Essa integração permite o envio e recebimento de dados entre o computador e o Arduino, tornando possível criar aplicações interativas e automatizadas.

## 🧰 Componentes necessários

- 🔌 1x Arduino Uno  
- 🔧 1x Protoboard  
- 💡 1x LED  
- 🟦 1x Resistor (220Ω ou 330Ω recomendado)  
- 🔗 2x Cabos jumper macho-macho  

## 🎯 Objetivo

O objetivo deste projeto é **ligar e desligar um LED conectado ao Arduino através de uma interface gráfica desenvolvida em Python utilizando a biblioteca Tkinter**.  
A interface envia comandos pela porta serial, e o Arduino interpreta esses comandos para controlar o LED.

## 🛠️ Tecnologias utilizadas

- 🐍 Python 3.x  
- 🖼️ Tkinter  
- 🔌 PySerial  
- 💻 Arduino IDE

## 📦 Instalação do PySerial

```bash
pip install pyserial
