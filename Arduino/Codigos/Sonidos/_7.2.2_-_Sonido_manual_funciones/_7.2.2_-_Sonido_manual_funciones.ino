#define PIN_ZUMBADOR 5
#define N_REPETICIONES 500
void setup() {
  pinMode(PIN_ZUMBADOR,OUTPUT);
}
void loop() {
  int espera = 1;
  enciendeApaga(PIN_ZUMBADOR, espera, N_REPETICIONES);
  enciendeApaga(PIN_ZUMBADOR, espera*2, N_REPETICIONES*3);
  enciendeApaga(PIN_ZUMBADOR, 5, N_REPETICIONES*2);
}
void enciendeApaga(int pin,int periodoNota,int duracion){
    for(int i=0;i<duracion/(2*periodoNota);i++){
      digitalWrite(pin,LOW);
      delay(periodoNota);
      digitalWrite(pin,HIGH);
      delay(periodoNota);
  }
}
