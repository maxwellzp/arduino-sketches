int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //analogWrite(redPin, 132);
  //analogWrite(greenPin, 255);
  //analogWrite(bluePin, 0);

  analogWrite(redPin, 255);
  analogWrite(greenPin, 193);
  analogWrite(bluePin, 204);
}
