void setup() {
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  if(digitalRead(8)==LOW){
    digitalWrite(9,LOW);
  }else{
    digitalWrite(9,HIGH);
  }
}
