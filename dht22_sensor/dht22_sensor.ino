#include "DHT.h"
const int DELAY_INTERVAL = 5000;

#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("DHT22 Sensor Initialized...");
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Data is empty");
    delay(DELAY_INTERVAL);
    return;
  }

  printInfo(temperature, humidity);

}

void printInfo(float t, float h) {
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");

  Serial.println("----------------------------");
  delay(DELAY_INTERVAL);
}

/*
  DHT22 Sensor Initialized...
  Temperature: 23.50 °C
  Humidity: 56.70 %
  ----------------------------
  Temperature: 23.50 °C
  Humidity: 56.70 %
  ----------------------------
  Temperature: 23.50 °C
  Humidity: 56.70 %
  ----------------------------
*/








