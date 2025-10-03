int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Red → Green
  for (int i = 0; i <= 255; i++) {
    analogWrite(redPin, 255 - i);   // decrease red
    analogWrite(greenPin, i);       // increase green
    delay(10);
  }

  // Green → Blue
  for (int i = 0; i <= 255; i++) {
    analogWrite(greenPin, 255 - i);
    analogWrite(bluePin, i);
    delay(10);
  }

  // Blue → Red
  for (int i = 0; i <= 255; i++) {
    analogWrite(bluePin, 255 - i);
    analogWrite(redPin, i);
    delay(10);
  }
}
