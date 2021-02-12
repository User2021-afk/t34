void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop() {
  static int up = 0;
  static int steps = 5;
  analogWrite(10, up);
  up += steps;
  if (up <= 0 || up >= 255) {
    steps = -steps;
  }
  Serial.println(up);
  delay(50);
}
