void setup()
{
  pinMode(PIN_PB0,OUTPUT); //led1
  pinMode(PIN_PB1,OUTPUT); //led2
  pinMode(PIN_PB2,OUTPUT); //led3 
  pinMode(PIN_PB3,OUTPUT); //led4
  pinMode(PIN_PB4,OUTPUT); //led5 
  
  pinMode(PIN_PC0,INPUT); //IR 1
  pinMode(PIN_PC1,INPUT); //IR 2
  pinMode(PIN_PC2,INPUT); //IR 3
  pinMode(PIN_PC3,INPUT); //IR 4
  pinMode(PIN_PC4,INPUT); //IR 5
  pinMode(PIN_PC5,INPUT); // IR 6
}

void loop(){
  int val1 = analogRead(PIN_PC0); //IR1
  if (val1 > 1000){
    digitalWrite(PIN_PB0,1);  
    digitalWrite(PIN_PB1,1);
    delay(500);
    }// IR1,open led 1 2
  else {
    digitalWrite(PIN_PB0,0);
    digitalWrite(PIN_PB1,0);
    }  // IR1,close led 1 2
  
  int val2 = analogRead(PIN_PC1); //IR2
  if(val2 > 1000){
    digitalWrite(PIN_PB0,1);
    digitalWrite(PIN_PB1,1);
    digitalWrite(PIN_PB2,1);
    delay(500);
    }  // IR2,open led 1 2 3
  else {
    digitalWrite(PIN_PB0,0);
    digitalWrite(PIN_PB1,0);
    digitalWrite(PIN_PB2,0);
    }  // IR2,close led 1 2 3
  
  int val3 = analogRead(PIN_PC2); //IR3
  if(val3 > 1000){
    digitalWrite(PIN_PB0,1);
    digitalWrite(PIN_PB1,1);
    digitalWrite(PIN_PB2,1);
    digitalWrite(PIN_PB3,1);
    delay(500);
    }  // IR3,open led 1 2 3 4
  else {
    digitalWrite(PIN_PB0,0);
    digitalWrite(PIN_PB1,0);
    digitalWrite(PIN_PB2,0);
    digitalWrite(PIN_PB3,0);
    }  // IR3,close led 1 2 3 4

  int val4 =analogRead(PIN_PC3); //IR4
  if(val4 > 1000){
    digitalWrite(PIN_PB1,1);
    digitalWrite(PIN_PB2,1);
    digitalWrite(PIN_PB3,1);
    digitalWrite(PIN_PB4,1);
    delay(500);
    }  // IR4,open led 2 3 4 5
  else {
    digitalWrite(PIN_PB1,0);
    digitalWrite(PIN_PB2,0);
    digitalWrite(PIN_PB3,0);
    digitalWrite(PIN_PB4,0);
    }  // IR4,close led 2 3 4 5
    
  int val5 = analogRead(PIN_PC4); //IR5
  if(val5 > 1000){
    digitalWrite(PIN_PB2,1);
    digitalWrite(PIN_PB3,1);
    digitalWrite(PIN_PB4,1);
    delay(500);
    }  // IR5,open led 3 4 5
  else {
    digitalWrite(PIN_PB2,0);
    digitalWrite(PIN_PB3,0);
    digitalWrite(PIN_PB4,0);
    }  // IR5,close led    3 4 5

  int val6 = analogRead(PIN_PC5); //IR6
  if(val6 > 1000){
    digitalWrite(PIN_PB3,1);
    digitalWrite(PIN_PB4,1);
    delay(500);
    }  // IR6,open led 4 5
  else {
    digitalWrite(PIN_PB3,0);
    digitalWrite(PIN_PB4,0);
    }  // IR6,close led 4 5
}
