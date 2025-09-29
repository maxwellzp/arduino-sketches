int led_Pin = 12; // declare variable for LED pin
int button_Pin = 2; // declare variable for button pin


void setup() {
  pinMode(led_Pin, OUTPUT); // setting LED pin as output
  pinMode(button_Pin, INPUT); // set button pin as input
}

void loop() {
  if (digitalRead(button_Pin) == HIGH) { // if the button is pressed turn the LED on
    digitalWrite(led_Pin, HIGH); // turn the LED on

  } else { // else, if the button is not pressed turn the LED off
    digitalWrite(led_Pin, LOW);  // turn the LED off
  }
}
