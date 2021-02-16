const int POT = A7;
int MOT = 3;

void setup() {
  Serial.begin(9600);
  pinMode(MOT, OUTPUT);
}

void loop() {
  int motorPWM = analogRead(POT);
  motorPWM = map(motorPWM, 0, 1023, 0, 255); 
  analogWrite(MOT, motorPWM);
  Serial.println(motorPWM);
}