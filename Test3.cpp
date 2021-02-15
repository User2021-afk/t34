int const POT = 7;


void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  int potValue = analogRead(POT);
  int Val = map(potValue, 0, 1023, 0, 255);
  analogWrite(9, Val);
  Serial.println(Val);
}