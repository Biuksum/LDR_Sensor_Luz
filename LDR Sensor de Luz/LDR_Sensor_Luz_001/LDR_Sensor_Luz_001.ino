
const int LDR = A0;  //Atribui A0 a variável ldr
int valorLDR = D1;   //Declara a variável valorldr como inteiro

void setup() {
  pinMode(LDR, INPUT);  //Define ldr (pino analógico A0) como saída
  Serial.begin(9600);   //Inicialização da comunicação serial, com taxa de transferência em bits por segundo de 9600
}

void loop() {
  valorLDR = analogRead(LDR);              //Lê o valor do sensor ldr e armazena na variável valorldr
  Serial.print("Valor lido pelo LDR = ");  //Imprime na serial a mensagem Valor lido pelo LDR
  Serial.println(valorLDR);                //Imprime na serial os dados de valorldr
  delay(1000);
}
