#define led 7

void setup()
{
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int valor = analogRead(A0);
  int luz = map(valor, 0, 1023, 0, 100);

  Serial.print("Iluminacao em: ");
  Serial.print(luz);
  Serial.println("%");
  		
  if (luz < 60){
   	digitalWrite(led, HIGH); 
  }
  else{
   	digitalWrite(led, LOW); 
  }
  delay(1000);
}