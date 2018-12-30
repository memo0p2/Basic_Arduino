#include <Servo.h>
#define pin 9
#define pina A0
Servo ser;
void setup() {
  // put your setup code here, to run once:
  ser.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valorpo=analogRead(pina);
  int posicion=map(valorpo,0,1023,0,179);
  ser.write(posicion);
  delay(15);
}
/*
attach(pin): coneta el objeto ser con el pin dado
write(angulo): establece la posicion del servo
read(): devuelve la posicion del servo
attached(): comprueba si esta conectado
detach(): desconecta ek pin del servo
*/
