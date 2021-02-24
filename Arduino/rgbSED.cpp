// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Плавное изменение яркости светодилда
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
const int BLUE = 9;
const int RED = 11;
const int GREEN = 10;
// Объевляем функции
void redColor();  
void blueColor();
void greenColor();
void whiteColor();
void yellowColor();
// Объевляем вункцию и её цвета
void RGBColor(int red, int blue, int green); 

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);

}

void loop() {
  for (int i = 0; i <= 255; ++i) {
    RGBColor(0, 0, i);
    RGBColor(i, 0, i);
    delay(10);
  }

  //yellowColor();
  //whiteColor();
  //redColor();
  //blueColor();
  //greenColor();
}

void redColor() {
  digitalWrite(RED, HIGH);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, LOW);
}
void blueColor() {
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, HIGH);
  digitalWrite(GREEN, LOW);
}
void greenColor() {
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, HIGH);
}

void whiteColor() {
  digitalWrite(RED, HIGH);
  digitalWrite(BLUE, HIGH);
  digitalWrite(GREEN, HIGH);
}
void yellowColor() {
  digitalWrite(RED, HIGH);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, HIGH);
}
void RGBColor(int red, int blue, int green) {
  analogWrite(RED, red);
  analogWrite(BLUE, blue);
  analogWrite(GREEN, green);
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //