#define vermelho 10
#define verde 4
#define amarelo 7

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
}

void loop() {
  digitalWrite(vermelho, HIGH);
  delay(1800);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  delay(1600);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  delay(800);
  digitalWrite(amarelo, LOW);
}