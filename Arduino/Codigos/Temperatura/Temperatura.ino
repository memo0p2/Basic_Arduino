#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#define DHTTYPE DHT22 
const int DHTPin = 2;     // la entrada digital
DHT dht(DHTPin, DHTTYPE);
void setup() {
   Serial.begin(9600);
   dht.begin();
}
 
void loop() {
   delay(2000);
   // leyendo la temperatura que toma 250 mls
   float h = dht.readHumidity();
   float t = dht.readTemperature();
   if (isnan(h) || isnan(t)) {
      Serial.println("No se puede leer prro >:v");
      return;
   }
   Serial.print("Humedad: ");
   Serial.print(h);
   Serial.print(" %\t");
   Serial.print("Temperatura: ");
   Serial.print(t);
   Serial.println(" *C ");
}
