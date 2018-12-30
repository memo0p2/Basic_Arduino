#define PIN_ZUMBADOR 5
#define N_REPETICIONES 500
void setup() {
  pinMode(PIN_ZUMBADOR,OUTPUT);
  
}
void loop() {

for(int i=0;i<N_REPETICIONES/1;i++){
  enciendeApaga(PIN_ZUMBADOR,1);
}

for(int i=0;i<N_REPETICIONES/2;i++){
  enciendeApaga(PIN_ZUMBADOR,2);
}

for(int i=0;i<N_REPETICIONES/4;i++){
  enciendeApaga(PIN_ZUMBADOR,4);
}

for(int i=0;i<N_REPETICIONES/10;i++){
  enciendeApaga(PIN_ZUMBADOR,10);
}
  
}
void enciendeApaga(int iPin,long lTiempoEspera){
  digitalWrite(iPin,LOW);
  delay(lTiempoEspera);
  digitalWrite(iPin,HIGH);
  delay(lTiempoEspera);
}

