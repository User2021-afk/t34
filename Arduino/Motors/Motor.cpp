int MOT = 3;

void setup() {
  Serial.begin(9600);
  pinMode(MOT, OUTPUT);
}

void loop() { 
  analogWrite(MOT, 255);
}