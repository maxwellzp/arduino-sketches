const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);  // read value (0–1023)
  float voltage = sensorValue * (5.0 / 1023.0); // convert to volt
  float temperatureC = voltage * 100; // 10 мВ = 1°C

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000);
}
