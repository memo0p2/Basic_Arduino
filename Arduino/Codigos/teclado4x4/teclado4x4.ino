#include <Keypad.h>
const byte filas = 4; //four rows
const byte col = 4; //four columns
char keys[filas][col] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte filasPins[filas] = {9,8,7,6}; //connect to the row pinouts of the keypad
byte colPins[col] = {5,4,3,2}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad teclado = Keypad( makeKeymap(keys), filasPins, colPins, filas, col); 
char tecla;
char clave[7];
char claveM[7]="ABCD";
char indice=0;
void setup(){
  Serial.begin(9600);
}
  
void loop(){
  tecla=teclado.getKey();
  if(tecla){
    clave[indice]=tecla;
    indice++;
    Serial.print(tecla);
  }
  if(indice==4){
    if(!strcmp(clave,claveM)){
      Serial.println(" correcto");
    }else{
      Serial.println(" incorrecto");
    }
    indice=0;
  }
}
