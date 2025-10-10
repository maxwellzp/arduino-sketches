int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  showDigit(0);
  delay(1000);
  showDigit(1);
  delay(1000);
  showDigit(2);
  delay(1000);
  showDigit(3);
  delay(1000);
  showDigit(4);
  delay(1000);
  showDigit(5);
  delay(1000);
  showDigit(6);
  delay(1000);
  showDigit(7);
  delay(1000);
  showDigit(8);
  delay(1000);
  showDigit(9);
  delay(1000);
}

void showDigit(int num) {
  bool digits[10][7] = {
    {1,1,1,1,1,1,0}, // 0
    {0,1,1,0,0,0,0}, // 1
    {1,1,0,1,1,0,1}, // 2
    {1,1,1,1,0,0,1}, // 3
    {0,1,1,0,0,1,1}, // 4
    {1,0,1,1,0,1,1}, // 5
    {1,0,1,1,1,1,1}, // 6
    {1,1,1,0,0,0,0}, // 7
    {1,1,1,1,1,1,1}, // 8
    {1,1,1,1,0,1,1}  // 9
  };

  digitalWrite(a, digits[num][0]);
  digitalWrite(b, digits[num][1]);
  digitalWrite(c, digits[num][2]);
  digitalWrite(d, digits[num][3]);
  digitalWrite(e, digits[num][4]);
  digitalWrite(f, digits[num][5]);
  digitalWrite(g, digits[num][6]);
}
