#define pin 9 //Escogemos el pin
//Siempre tiene que tener una resistencia de almenos 220 omhs
#define tiempo 1000
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);//lo configuramos
}
//Hara que el led se apage y se encienda
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin,HIGH); // Activamos la salida (estado alto (5V))
  delay(5000);
  digitalWrite(pin,LOW); // Desactivamos la salida (estado bajo (0V))
  delay(1000);
}
