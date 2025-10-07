int redPin = 9; // Analog pin

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, 255);
  delay(1000);
  analogWrite(redPin, 40);
  delay(1000);
}

