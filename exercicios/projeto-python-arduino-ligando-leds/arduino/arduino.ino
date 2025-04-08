// Definindo o pino digital onde o LED está conectado
int LED = 4; 
// Variável que irá armazenar o valor recebido via Serial
char valor;
void setup() {
  pinMode(LED, OUTPUT);  // Configurando que o pino de LED é de SAÍDA
  Serial.begin(9600); // Inicializa a comunicação serial na taxa de 9600 bps
}

void loop() {
  if (Serial.available()){  // Verifica se há dados disponíveis na porta serial
    valor = Serial.read(); // Lê o caractere recebido
    if (valor == '1'){
      for (int i=0; i <5; i++){
        digitalWrite(LED, HIGH); // Ação 1: Liga
        delay(500); // Delay para próxima ação
        digitalWrite(LED, LOW); // Ação 2: Liga
        delay(500); // Delay para próxima ação 
      }
    } else if (valor == '0'){
      digitalWrite(LED, LOW); // LED Desliga
    }
  }
}
