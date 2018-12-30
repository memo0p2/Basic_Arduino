/*
Curso de Arduino
LED RGB Anodo comun
Conexiones
 * LCD RS a pin 12
 * LCD Enable  a pin 11
 * LCD D4  a pin 5
 * LCD D5  a pin 4
 * LCD D6  a pin 3
 * LCD D7  a pin 2
 * LCD R/W pin to ground
 * Potenciometro de 10K 
 * extremos a +5V y GND 
 * LCD pin 3 al cursos
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);   // Inicializamos
  lcd.print("hola memo"); // Imprimimos en la posicion inicial
}
void loop() {
  lcd.setCursor(0, 1);   // Posicionamos el cursos en la segunda fila
  
  lcd.print(millis()/1000);  // Mostramos los segundos que han pasado desde el arranque
}
