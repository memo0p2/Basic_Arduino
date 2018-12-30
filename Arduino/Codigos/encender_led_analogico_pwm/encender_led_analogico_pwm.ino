/*
Programa que ocuma pwm
pin6 al +
gnd al -
*/
#define pin 6
# define tiempo 10
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  //255 es el maximo de señal
  for(int i=0;i<100;i++){//Brillo creciente
    analogWrite(pin,i);
    delay(tiempo);
  }
  for(int i=100;i>0;i--){//Brillo decreciente
    analogWrite(pin,i);
    delay(tiempo);
  }
}
