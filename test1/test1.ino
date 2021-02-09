// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// Управление Arduino c компьютера через монитор порта
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <Arduino.h>
void setup() {
  Serial.begin(9600);
  for (int i = 8; i <= 12; ++i) {
    pinMode(i, OUTPUT);
  }
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
}

void loop() {
  while (Serial.available() > 0) {
    char userNum = 0;
    userNum = Serial.read();
    switch (userNum)
    {
      case '1':
        Serial.print(":case1: ");
        Serial.println(userNum);
        break;
      case '2':
        Serial.print(":case2: ");
        Serial.println(userNum);
        break;
      case '3':
        Serial.print(":case3: ");
        Serial.println(userNum);
        for (int i = 8; i <= 12; ++i) {
          digitalWrite(i, !digitalRead(i));
          delay(500);
        }
        break;
      default:
        Serial.print(":Othev");
        Serial.println(userNum);
        for (int i = 8; i <= 12; ++i) {
          digitalWrite(i, LOW);
        }
        break;
    }
  }
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
