#define BUZZER 9

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {

  int nota_do = 131;
  int nota_re = 147;
  int nota_mi = 165;
  int nota_fa = 174;
  int nota_sol = 196;
  int nota_la = 220;
  int nota_si = 246;
  int nota_do3 = 262;
/* A funcao "tone" reproduz um sinal
     de uma certa frequencia no pino do buzzer. */

  tone(BUZZER, nota_do); delay(500);    
  tone(BUZZER, nota_re); delay(500);  
  tone(BUZZER, nota_mi); delay(500);    
  tone(BUZZER, nota_fa); delay(500);    
  tone(BUZZER, nota_sol); delay(500);    
  tone(BUZZER, nota_la); delay(500);   
  tone(BUZZER, nota_si); delay(500);
  tone(BUZZER, nota_do3); delay(500);    
  noTone(BUZZER); delay(500);
}
