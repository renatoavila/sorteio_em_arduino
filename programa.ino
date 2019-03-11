const int intervalo = 2000;
//para o display de 7 segundos
const int A = A4;
const int B = A5;
const int C = 7;
const int D = 8;
const int E = 5;
const int F = 3;
const int G = 6;

int sorteado = 0;

void setup() {
  // BOTÃO SORTEIO
  pinMode(2, INPUT);
  //SETA TODOS OS PINOS COMO SAIDAS
  pinMode(F, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  if (digitalRead(2) == 1 ) {
    sorteio();
  }

}

void sorteio() {
  for (int sortiou = 0; sortiou < 6; sortiou++) {
    sorteado = random(1, 7);

    if (sorteado == 1) um();
    if (sorteado == 2) dois();
    if (sorteado == 3) tres();
    if (sorteado == 4) quatro();
    if (sorteado == 5) cinco();
    if (sorteado == 6) seis();
  }
}

void zero() {
  //desenha o 0
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}

void um() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  delay(intervalo);
}

void dois() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  delay(intervalo);
}

void tres() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  delay(intervalo);
}

void quatro() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(intervalo);
}

void cinco() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(intervalo);
}

void seis() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(intervalo);
}

