//  Создаём константу типа int для хранения
//  № вывода к которому подключена кнопка
const int PinKey = 2;

//  Создаём константу типа int для хранения
//  № вывода к которому подключён светодиод
const int PinLed = 10;

//  Создаём переменную типа bool для хранения
bool Action = 0;

//  Код внутри функции setup выполняется
//  только 1 раз, при старте
void setup(){
//  Конфигурируем вывод PinKey как вход
    pinMode(PinKey, INPUT );
//  Конфигурируем вывод PinLed как выход
    pinMode(PinLed, OUTPUT);
}
void loop(){
//  Считываем состояние со входа PinKey
    Action = digitalRead(PinKey);
//  Устанавливаем состояние на выходе PinLed
    digitalWrite(PinLed, Action);
}
