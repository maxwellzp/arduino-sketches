int buzzer = 9; // passive buzzer pin

void setup() {
}

void loop() {
  tone(buzzer, 1000); // 1000 Hz
  delay(1000);
  noTone(buzzer);     // turn off
  delay(500);

  tone(buzzer, 500);  // 500 Hz
  delay(1000);
  noTone(buzzer);
  delay(500);
}
