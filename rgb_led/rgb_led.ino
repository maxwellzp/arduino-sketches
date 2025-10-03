int redPin = 9;    // R
int greenPin = 10; // G
int bluePin = 11;  // B

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  setColor(255, 0, 0);   // red
  delay(1000);
  setColor(0, 255, 0);   // green
  delay(1000);
  setColor(0, 0, 255);   // blue
  delay(1000);
  setColor(255, 255, 0); // yellow (red+green)
  delay(1000);
  setColor(0, 255, 255); // turquoise (green+blue)
  delay(1000);
  setColor(255, 0, 255); // violet (red+blue)
  delay(1000);
  setColor(255, 255, 255); // white (all together)
  delay(1000);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, 255 - red);
  analogWrite(greenPin, 255 - green);
  analogWrite(bluePin, 255 - blue);
}


