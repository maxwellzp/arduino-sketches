// pins for segments a,b,c,d,e,f,g,dp
const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
// pins for digit control (common cathodes)
const int digitPins[]   = {10, 11, 12, 13};

// digit-to-segment mapping (a,b,c,d,e,f,g,dp)
// 1 = segment ON, 0 = segment OFF
const byte digitsMap[10][8] = {
  {1,1,1,1,1,1,0,0}, // 0
  {0,1,1,0,0,0,0,0}, // 1
  {1,1,0,1,1,0,1,0}, // 2
  {1,1,1,1,0,0,1,0}, // 3
  {0,1,1,0,0,1,1,0}, // 4
  {1,0,1,1,0,1,1,0}, // 5
  {1,0,1,1,1,1,1,0}, // 6
  {1,1,1,0,0,0,0,0}, // 7
  {1,1,1,1,1,1,1,0}, // 8
  {1,1,1,1,0,1,1,0}  // 9
};

void setup() {
  // set segment pins as outputs
  for (int i = 0; i < 8; i++) {
    pinMode(segmentPins[i], OUTPUT);
    digitalWrite(segmentPins[i], LOW); // turn all segments OFF initially
  }
  
  // set digit control pins as outputs
  // for common-cathode display: HIGH = OFF, LOW = ON
  for (int i = 0; i < 4; i++) {
    pinMode(digitPins[i], OUTPUT);
    digitalWrite(digitPins[i], HIGH); // turn all digits OFF initially
  }
}

void loop() {
  // example: display the number 1234 continuously
  displayNumber(1234);
}

// display a number between 0 and 9999
void displayNumber(int number) {
  int numArray[4];
  
  // ensure the number is within 0–9999
  if (number < 0) number = 0;
  number = number % 10000;

  // split number into 4 digits
  for (int i = 3; i >= 0; i--) {
    numArray[i] = number % 10;
    number /= 10;
  }

  // multiplexing: rapidly switch between digits
  for (int d = 0; d < 4; d++) {
    // set segment states for the current digit
    for (int s = 0; s < 8; s++) {
      digitalWrite(segmentPins[s], digitsMap[numArray[d]][s] ? HIGH : LOW);
    }

    // activate the current digit (LOW = ON for common-cathode)
    digitalWrite(digitPins[d], LOW);
    
    delay(3);  // display time for this digit (adjust 1–5 ms for brightness)
    
    // deactivate current digit
    digitalWrite(digitPins[d], HIGH);
  }
}
