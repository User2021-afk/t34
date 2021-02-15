void setup() {
  Serial.begin(9600);
  bool r;
  int a = 10, b = 7;

  r = (a > b) && (b == 7);
  Serial.print("r = (a < b) && (b == 7) - ");
  Serial.println(r ? "true" : "false");

  r = a > b || b == 7;
  Serial.print("r = a < b || b == 7 - ");
  Serial.println(r ? "true" : "false");

  r = a < b xor (b == 7);
  Serial.print("r = a < b xor (b == 7) - ");
  Serial.println(r ? "true" : "false");

  r = !(a == 10 && (b >= 8 || false));
  Serial.print("r = !(a == 10 && (b <= 8 || true) - ");
  Serial.println(r ? "true" : "false");
}

void loop() {
}