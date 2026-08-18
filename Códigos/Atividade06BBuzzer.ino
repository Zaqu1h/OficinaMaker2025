#define BUZZER 9
#define button 7

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void playNote(int freq, int duracao) {
  tone(BUZZER, freq);
  delay(duracao);
  noTone(BUZZER);
  delay(100);
}

void loop() {
  
  
  int doB = 233;        
  int doN = 522;
  int re = 587;         
  int mi = 330;        
  int mibemol = 622;   
  int mi_topo = 655;
  int fa = 349; 		
  int fa_topo = 698;
  int fasust = 370;    
  int sol = 392;      
  int solbemol = fasust;
  int sol_topo = 784;  
  int soltbemol = 740;
  int la = 440;//440
  int labemol = 233;    
  int sibemol = 466;    
  int si = 493;
  int sisust = 522;

 
  // Durações em ms
  int seminima = 500;
  int colcheia_pontuada = 375;
  int semicolcheia = 125;
  int minima = 1000;
  int colcheia = 250;  // colcheia

if(digitalRead(button) == LOW){
  // Compasso 1
  playNote(sol, seminima);
  playNote(sol, seminima);
  playNote(sol, seminima);
  playNote(mi, colcheia_pontuada);
  playNote(sibemol, semicolcheia);
  
  // Compasso 2
  playNote(sol, seminima);
  playNote(mi, colcheia_pontuada);
  playNote(sibemol, semicolcheia);
  playNote(sol, minima);

  // Compasso 3
  playNote(re, seminima);         
  playNote(re, seminima);         
  playNote(re, seminima);         
  playNote(mibemol, colcheia_pontuada);
  playNote(sibemol, semicolcheia);
  
  // Compasso 4
  playNote(solbemol, seminima);
  playNote(mi, colcheia_pontuada);
  playNote(sibemol, semicolcheia);  
  playNote(sol, minima);
  
  // Compasso 5
  playNote(sol_topo, seminima);
  playNote(sol, colcheia_pontuada);
  playNote(sol, semicolcheia);
  playNote(sol_topo, seminima);
  playNote(soltbemol, colcheia_pontuada);
  playNote(fa_topo, semicolcheia);

  // Compasso 6
  playNote(mi_topo, semicolcheia);
  playNote(mibemol, semicolcheia);
  playNote(mi_topo, colcheia);
  
  delay(colcheia);
  
  playNote(sol, colcheia);
  playNote(doN, seminima);
  playNote(sisust, colcheia);
  playNote(si, semicolcheia);
  
  // Compasso 7
  playNote(solbemol, semicolcheia);
  playNote(la, semicolcheia);
  playNote(si, colcheia);
  
  delay(colcheia);
  
  playNote(mi, colcheia);
  playNote(solbemol, seminima);
  playNote(mi, colcheia_pontuada);
  playNote(sol, semicolcheia);
  
  // Compasso 8
  playNote(si, seminima);
  playNote(sol, colcheia_pontuada);
  playNote(si, semicolcheia);
  playNote(re, minima);

  //Compasso 9
  playNote(mi_topo, semicolcheia);
  playNote(mibemol, semicolcheia);
  playNote(mi_topo, colcheia);
  
  delay(colcheia);
  
  playNote(sol, colcheia);
  playNote(doN, seminima);
  playNote(sisust, colcheia);
  playNote(si, semicolcheia);
  
  //Compasso 10
  playNote(solbemol, semicolcheia);
  playNote(la, semicolcheia);
  playNote(si, colcheia);
  
  delay(colcheia);
  
  playNote(mi, colcheia);
  playNote(solbemol, seminima);
  playNote(mi, colcheia_pontuada);
  playNote(sol, semicolcheia);
  
  //Compasso 11
  playNote(sol, seminima);
  playNote(mi, colcheia_pontuada);
  playNote(si, semicolcheia);
  playNote(sol, minima);

  delay(3000);
}
}