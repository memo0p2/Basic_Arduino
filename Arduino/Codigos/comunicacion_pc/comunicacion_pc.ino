//Comunicacion con el PC
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//Configurando el prueto serie 
  for(int i=0;i<100;i++){
    Serial.print("hola led ");
    Serial.println(i);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
}
