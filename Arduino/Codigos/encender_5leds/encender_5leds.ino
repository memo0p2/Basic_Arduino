//Encender leds con las compuertas desde la 8 a la 12
void setup() {
  // put your setup code here, to run once:
  for(int i=8;i<=12;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=8, j=12;i<=10;i++,j--){
      digitalWrite(i,HIGH);
      digitalWrite(j,HIGH);
      if(i==j)
        delay(0);
      else
        delay(1000);
      digitalWrite(i,LOW);
      digitalWrite(j,LOW);
  }
  for(int i=10, j=10;j<=12;i--,j++){
      digitalWrite(i,HIGH);
      digitalWrite(j,HIGH);
      if(i==8)
        delay(0);
      else
        delay(1000);
      digitalWrite(i,LOW);
      digitalWrite(j,LOW);
  }
}
