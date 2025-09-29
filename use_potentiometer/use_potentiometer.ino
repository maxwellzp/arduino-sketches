void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.print("ADC reading: ");
  Serial.print(sensorValue);
  Serial.print(" Analog voltage: ");
  Serial.println(voltage);
  delay(1);  // delay in between reads for stability
}
