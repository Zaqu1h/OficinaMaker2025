void setup()
{
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop()
{
  int valor = analogRead(A0);
  int luz = map(valor, 0, 1023, 100, 0);
  if (luz >= 80)
  {
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
  }
  else
  {
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
  }
  delay(1000);
}