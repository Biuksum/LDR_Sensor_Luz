
const int LDR = A0;      // Pino analógico que o sensor está conectado
const int pinoLed = D1;  // Pino Referente ao led ou rele
int valorLDR;            // valor que sera armazenado o valor do LDR

void setup() {

  pinMode(pinoLed, OUTPUT);  // Coloca variavel luz é um sinal de saidad
  pinMode(LDR, INPUT);       // Coloca a variavel LDR como entrada
  Serial.begin(9600);        // inicializa a comunicação serial com a taxa de 9600 bps
}

void loop() {

  valorLDR = analogRead(LDR);  // Faz a leitura do pino analógico LDR e armazena o valor na variavel valorsensor
  Serial.print("LDR : ");      // Mostra o valor no monitor serial
  Serial.println(valorLDR);

  if (valorLDR > 19) {            // Se o valor de VALORSENSOR for menos que 500
    digitalWrite(pinoLed, HIGH);  // Ligar rele ou led
  } else {                        // Se não
    digitalWrite(pinoLed, LOW);   // Desligar rele ou led
  }

  delay(1000);  // Aguarda 100 milisegundos
}