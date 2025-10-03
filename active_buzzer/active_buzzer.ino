int buzzer = 8; // active buzzer pin

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(buzzer, HIGH); // turn on sound
  delay(100);                // wait one second
  digitalWrite(buzzer, LOW);  // turn off sound
  delay(1000);                // wait one second
}
