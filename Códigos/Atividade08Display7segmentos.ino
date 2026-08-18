const byte digitos[10][7] = {{1,1,1,1,1,1,0},
					   		 {0,1,1,0,0,0,0},
					   		 {1,1,0,1,1,0,1},
					   		 {1,1,1,1,0,0,1},
					   		 {0,1,1,0,0,1,1},
  					   		 {1,0,1,1,0,1,1},
					   		 {1,0,1,1,1,1,1},
					   		 {1,1,1,0,0,0,0},
				       		 {1,1,1,1,1,1,1},
					   		 {1,1,1,0,0,1,1}};

void setup()
{
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int valor = analogRead(A0);
  int luz = map(valor, 0, 1023, 0, 100);

  Serial.print("Iluminacao em: ");
  Serial.print(luz);
  Serial.println("%");
  
  if(luz >= 0 && luz <=10){
  	for(int i = 0; i < 7; i++){
    	digitalWrite((12 - i), digitos[0][i]);
    }
  }
  else if(luz > 10 && luz <=20){
  	for(int i = 0; i < 7; i++){
    	digitalWrite((12 - i), digitos[1][i]);
    }
  }
  else if(luz > 20 && luz <=30){
  	for(int i = 0; i < 7; i++){
    	digitalWrite((12 - i), digitos[2][i]);
    }
  }
  else if(luz > 30 && luz <=40){
  	for(int i = 0; i < 7; i++){
    	digitalWrite((12 - i), digitos[3][i]);
    }
  }
  else if(luz > 40 && luz <=50){
  	for(int i = 0; i < 7; i++){
    	digitalWrite((12 - i), digitos[4][i]);
    }
  }
  else if(luz > 50 && luz <=60){
  	for(int i = 0; i < 7; i++){
    	digitalWrite((12 - i), digitos[5][i]);
    }
  }
  else if(luz > 60 && luz <=70){
  	for(int i = 0; i < 7; i++){
    	digitalWrite((12 - i), digitos[6][i]);
    }
  }
  else if(luz > 70 && luz <=80){
  	for(int i = 0; i < 7; i++){
    	digitalWrite((12 - i), digitos[7][i]);
    }
  }
  else if(luz > 80 && luz <=90){
    for(int i = 0; i < 7; i++){
     	digitalWrite((12 - i), digitos[8][i]); 
    }
  }
  else{
  	for(int i = 0; i < 7; i++){
    	digitalWrite((12 - i), digitos[9][i]);
    }
  }
  
  		
  if (luz < 60){
   	digitalWrite(5, HIGH); 
  }
  else{
   	digitalWrite(5, LOW); 
  }
  delay(1000);
}