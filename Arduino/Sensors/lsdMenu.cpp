// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// All tests for Arduino Dev Boards V.2
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <Arduino.h>
#include "LedControl.h" // Для работы 8х8 светодиодной матрицы
#include <LiquidCrystal_I2C.h> // Библиотека I2C дисплея

const int POT = A7;
const int BUTTON_13 = 13;
const int BUTTON_16 = 16; // A2
const int BUTTON_17 = 17; // A3

LiquidCrystal_I2C lcd(0x27, 16, 2);  // Устанавливаем дисплей

/*
  Теперь настраиваем объект LedControl.
  Эти номера контактов, возможно, не будут работать в вашем проекте.
  Если необходимо, поменяйте их.
  5-ый контакт подключен к DIN.
  6-ый контакт подключен к CLK.
  7-ый контакт подключен к CS.
  У нас есть только один MAX72XX.
*/
LedControl lc = LedControl(5, 6, 7, 1); // Объект экрана 1602

// Функция 1602 экрана
void displey1602();
// Функция динамика

void setup() {
  Serial.begin(9600);
  lcd.init(); // Инициализация LCD
  lcd.backlight();// Включаем подсветку дисплея
  lcd.begin(16, 2);  // Задаем размерность экрана

}

void loop() {
  //display1602();
  lcd.clear(); // Очищаем экран перед получением нового значения
  //lcd.setCursor(0, 0); // курсор на 4-й символ 1-й строки
  //lcd.print("Menu. Choose 1..3 "); // Тест на 1-й строке экрана
  //lcd.setCursor(2, 1); // курсор на 7-й символ 2-й строки
  //lcd.print("Menu 1.");
  //lcd.print("Menu 2.");
  //lcd.print("Menu 3.");
  bool buttonState13 = digitalRead(BUTTON_13);
  bool buttonState16 = digitalRead(BUTTON_16);
  bool buttonState17 = digitalRead(BUTTON_17);
  int choose = 0;
  if      (buttonState13 == true) { choose = 1; } // Ввод
  else if (buttonState16 == true) { choose = 2; } // Вверх
  else if (buttonState17 == true) { choose = 3; } // Вниз
  else    { choose = 0; }
  switch (choose) {
    case 1:
      lcd.clear(); // Очищаем экран перед получением нового значения
      lcd.setCursor(0, 0); // курсор на 4-й символ 1-й строки
      lcd.print("Menu 1: ");
      lcd.setCursor(10, 0); // курсор на 4-й символ 1-й строки
      //lcd.print(choose); // Тест на 1-й строке экрана
      delay(40);
      break;
    case 2: // Вверх
      lcd.clear(); // Очищаем экран перед получением нового значения
      lcd.setCursor(0, 0); // курсор на 4-й символ 1-й строки
      lcd.print("Menu 2: ");
      lcd.setCursor(0, 1);
      lcd.print("Menu 3: ");
      lcd.setCursor(10, 0); // курсор на 4-й символ 1-й строки
      //lcd.print(choose);
      delay(40);
      break;
    case 3: // Вниз
      lcd.clear(); // Очищаем экран перед получением нового значения
      lcd.setCursor(0, 0); // курсор на 4-й символ 1-й строки
      lcd.print("Menu 2: ");
      lcd.setCursor(0, 1);
      lcd.print("Menu 3: ");
      //      break;
    default:
      lcd.clear();
      lcd.setCursor(0, 0); // курсор на 4-й символ 1-й строки
      lcd.print("Menu 1: ");
      lcd.setCursor(0, 1);
      lcd.print("Menu 2: ");
      break;
  }
}

void display1602() {
  // Проверка экрана 1602
  //lcd.clear(); // Очищаем экран перед получением нового значения
  lcd.setCursor(0, 0); // курсор на 4-й символ 1-й строки
  lcd.print("Hello, WORLD! "); // Тест на 1-й строке экрана
  lcd.setCursor(2, 1); // курсор на 7-й символ 2-й строки
  int PWM = analogRead(POT);
  lcd.print(PWM); // Тест на 1-й строке экрана
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //