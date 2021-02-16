void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  int arrLeds = random(0, 13);
  int arr[5] = {8, 9, 10, 11, 12}; 
  digitalWrite(arrLeds[arr], HIGH);
  delay(250);
  digitalWrite(arrLeds[arr], LOW);
  delay(250);
}