#define PIN_ZUMBADOR 5
#define N_REPETICIONES 500
void setup() {
  pinMode(PIN_ZUMBADOR, OUTPUT);
}
void loop() {
  int espera=10;
  for(int i = 0 ;i < N_REPETICIONES/espera; i++){
    digitalWrite(PIN_ZUMBADOR, LOW);
    delay(espera);
    digitalWrite(PIN_ZUMBADOR, HIGH);
    delay(espera);
  }
}
