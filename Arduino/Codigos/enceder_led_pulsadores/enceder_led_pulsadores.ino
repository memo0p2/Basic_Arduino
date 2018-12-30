//Codigo que enciende y apaga led con un boton
#define PIN_BOTON   2//resive la señal si fue pulsado
#define PIN_LED   13//manda señal para pasar corriente
void setup() {
  pinMode(PIN_BOTON, INPUT);
  pinMode(PIN_LED,OUTPUT);
}
void loop() {
  int iEstadoBoton=digitalRead(PIN_BOTON);
  digitalWrite(PIN_LED,iEstadoBoton);
  delay(10);
}

