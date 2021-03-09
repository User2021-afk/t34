#include <Arduino.h>
#include <LiquidCrystal_I2C.h> // Библиотека I2C дисплея

const int BUTTON_13 = 13;
const int BUTTON_15 = 15;
const int BUTTON_16 = 16;

LiquidCrystal_I2C lcd(0x27, 16, 2);  // Устанавливаем дисплей

void setup() {
  Serial.begin(9600);
  lcd.init(); // Инициализация LCD
  lcd.backlight();// Включаем подсветку дисплея
  lcd.begin(16, 2);  // Задаем размерность экрана
}

void loop() {
  lcd.clear(); // Очищаем экран перед получением нового значения
  lcd.setCursor(0, 0); // курсор на 4-й символ 1-й строки
  lcd.print("Button: "); // Тест на 1-й строке экрана
  bool buttonState13 = digitalRead(BUTTON_13);
  bool buttonState15 = digitalRead(BUTTON_15);
  bool buttonState16 = digitalRead(BUTTON_16);
  int choose = 0;
  if      (buttonState13 == true) { choose = 13; } 
  else if (buttonState15 == true) { choose = 15; }
  else if (buttonState16 == true) { choose = 16; }
  else    { choose = 0; }
  switch (choose)
  {
    case 13:
      lcd.clear(); // Очищаем экран перед получением нового значения
      lcd.setCursor(10, 0); // курсор на 4-й символ 1-й строки
      lcd.print(choose); // Тест на 1-й строке экрана
      delay(40);
      break;
    case 15:
      lcd.clear(); // Очищаем экран перед получением нового значения
      lcd.setCursor(10, 0);
      lcd.print(choose);
      delay(40);
      break;
    case 16:
      lcd.clear(); // Очищаем экран перед получением нового значения
      lcd.setCursor(10, 0);
      lcd.print(choose);
      delay(40);
      break;
  }
}
