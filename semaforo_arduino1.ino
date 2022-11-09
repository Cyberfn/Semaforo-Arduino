void setup(){
  // Configura os pinos com os LEDs como saída
  pinMode(9, OUTPUT); // LED verde pedestres
  pinMode(10, OUTPUT); // LED vermelho pedestres
  pinMode(11, OUTPUT); // LED verde carros
  pinMode(12, OUTPUT); // LED amarelo carros
  pinMode(13, OUTPUT); // LED vermelho carros
}

void loop(){
  // Sinal para pedestres fechado: apaga LED verde, acende LED vermelho
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  // Sinal para carros aberto: apaga LED vermelho, acende LED verde
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(3000);
  
  // Sinal para carros fechando: apaga LED verde, acende LED amarelo
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(2000);

  // Sinal para pedestres aberto: apaga LED vermelho, acende LED verde
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  // Sinal para carros fechado: apaga LED verde, acende LED vermelho
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(5000);
}