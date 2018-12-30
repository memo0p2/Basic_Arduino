int trig=10;
int eco=9;
int led=3;
int dura;
int dis;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(eco,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  dura=pulseIn(eco,HIGH);
  dis=dura/59;
  Serial.print(dis);
  Serial.println(" cm");
  delay(300);
  if(dis<20){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
}
