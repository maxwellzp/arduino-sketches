const int ledId_1  = 12;
const int ledId_2  = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledId_1, OUTPUT);
  pinMode(ledId_2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledId_1, HIGH);
  digitalWrite(ledId_2, HIGH);
  delay(1000);
  digitalWrite(ledId_1, LOW);
  digitalWrite(ledId_2, LOW);
  delay(1000);
}
