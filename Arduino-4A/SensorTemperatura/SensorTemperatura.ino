#include <DHT.h>
#include <DHT_U.h>


int SENSOR = 2;
int temperatura;
int humedad;
int tempFarenheit;
String cadena = "";
DHT dht (SENSOR, DHT11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  temperatura = dht.readTemperature();
  humedad = dht.readHumidity();
  tempFarenheit = dht.readTemperature(true);
  delay(1);
  cadena = "{\"tempC\": " + String(temperatura) + ", \"tempF\": " + String(tempFarenheit) + ", \"humed\": " + String(humedad) + "\}";
  Serial.println(cadena);
  Serial.println("");
  delay(5000);
}