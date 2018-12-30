#define ldr A0
#define poten A1
#define led 7
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valorldr=analogRead(ldr);//Valor de la fotoresistencia
  int valorpoten=analogRead(poten);//Valor del potenciometro
  Serial.print("LDR: ");
  Serial.print(valorldr);
  Serial.print("POT: ");
  Serial.println(valorpoten);
  if(valorldr<valorpoten){
    digitalWrite(led,HIGH);
    Serial.println("Encendemos el led");
  }else{
    digitalWrite(led,LOW);
    Serial.println("APAGAMOS el led");
  }
  delay(1000);
}
