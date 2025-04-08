# 🤖 Exercício Python + Arduino

Este projeto utiliza a biblioteca **PySerial** para possibilitar a comunicação entre o Python e dispositivos conectados via porta serial (USB, COM, etc). Essa integração permite o envio e recebimento de dados entre o computador e o Arduino, tornando possível criar aplicações interativas e automatizadas.

## 🧰 Componentes necessários

- 🔌 1x Arduino Uno  
- 🔧 1x Protoboard  
- 💡 1x LED  
- 🟦 1x Resistor (220Ω ou 330Ω recomendado)  
- 🔗 3x Cabos jumper macho-macho  

## 🎯 Objetivo

O objetivo deste projeto é **fazer um LED piscar 5 vezes ao clicar no botão "Ligar", e desligá-lo com o botão "Desligar"**.  
A interface envia comandos pela porta serial, e o Arduino interpreta esses comandos para controlar o LED.

## 🛠️ Tecnologias utilizadas

- 🐍 Python 3.x  
- 🖼️ Tkinter  
- 🔌 PySerial  
- 💻 Arduino IDE  
- 💻 VSCode

## 📦 Instalação do PySerial

```bash
pip install pyserial
