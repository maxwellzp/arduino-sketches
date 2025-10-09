#include <DHT.h>
#include <DHT_U.h>
#define Type DHT11
int sensePin = 2;
DHT HT(sensePin, Type);
float humidity;
float tempC;
float tempF;
float tempK;
int delayTime = 2000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = (tempC * 9.0/5.0) + 32;
  tempK = tempC + 273.0;

  Serial.print("tempC: ");
  Serial.println(tempC);
  Serial.print("tempF: ");
  Serial.println(tempF);
  Serial.print("tempK: ");
  Serial.println(tempK);
  delay(delayTime);
}
