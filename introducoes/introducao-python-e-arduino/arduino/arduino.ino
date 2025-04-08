int LED = 13; // Definindo a pino digital onde o LED está conectado
char valor;   // Variável que irá armazenar o valor recebido via Serial
void setup() {
  pinMode(LED, OUTPUT); // Configurando que o pino LED é de SAÍDA
  Serial.begin(9600); // Inicializa a comunicação serial na taxa de 9600 bps
}

void loop() {
  if (Serial.available()){  // Verifica se há dados disponíveis na porta serial
    valor = Serial.read(); // Lê o caractere recebido
    if (valor == '1'){
      digitalWrite(LED, HIGH); // LED Liga
    } else if (valor == '0'){
      digitalWrite(LED, LOW); // LED Desliga
    }
  }
}
