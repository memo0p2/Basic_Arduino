#define pin A0
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//Activamos comunicacion con la PC
  //No es necesario hacer pinMode con los pines analogicos
}

void loop() {
  // put your main code here, to run repeatedly:
  int valor=analogRead(pin);
  Serial.print("Valor del potenciometro ");
  Serial.println(valor);
  delay(1000);
}
