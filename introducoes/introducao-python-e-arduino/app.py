import serial
import time
import tkinter as tk
from tkinter import messagebox

try:
    arduino = serial.Serial('COM6', 9600, timeout=1)
    time.sleep(2)
except:
    print("Erro ao conectar ao arduino")
    arduino = None
    
def ligar_led():
    if arduino:
        arduino.write(b'1')

def desligar_led():
    if arduino:
        arduino.write(b'0')
        
def sair():
    resposta = messagebox.askyesno("ConfirmaÃ§Ã£o", "Tem certeza que deseja sair?")
    if resposta:
        root.destroy()
        
root = tk.Tk()
root.overrideredirect(True)

largura = 300
altura = 200

largura_tela = root.winfo_screenwidth()
altura_tela = root.winfo_screenheight()

pos_x = (largura_tela // 2) - (largura // 2)
pos_y = (altura_tela // 2) - (altura // 2)

pos_x = (largura_tela // 2) - (largura // 2)
pos_y = (altura_tela // 2) - (altura // 2)
root.geometry(f"{largura}x{altura}+{pos_x}+{pos_y}")

btn_ligar = tk.Button(root, text="Ligar LED", command=ligar_led, bg="green", fg="white", font=("Arial", 12))
btn_ligar.pack(pady=10)

btn_desligar = tk.Button(root, text="Desligar LED", command=desligar_led, bg="red", fg="white", font=("Arial", 12))
btn_desligar.pack(pady=10)

btn_sair = tk.Button(root, text="Sair", command=sair, bg="gray", fg="white", font=("Arial", 12))
btn_sair.pack(pady=10)

root.mainloop()