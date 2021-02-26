// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// All tests for Arduino Dev Boards V.2
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
#include <Arduino.h>
#include <OneWire.h> // Для работы датчика t dc18b20
#include <DallasTemperature.h>

// pin 2 для датчика t на Arduino
const int ONE_WIRE_BUS = 2;

// Шина I2C для работы датчика t
OneWire oneWire(ONE_WIRE_BUS);

// Передача c шины на датчик t
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  // Датчик t
  Serial.println("Dallas Temperature IC Control Library Demo");
  // Инициализация библиотеки температурного датчика
  sensors.begin();
}

void loop() {
  // Датчик температуры
  // вызов sensor.requestTemperatures (), чтобы отправить запрос глобальной
  // температуры всем устройствам на шине
  Serial.print(" Requesting temperatures...");
  sensors.requestTemperatures(); // Отправляем коменду для получения t
  Serial.println("DONE");
  Serial.print("Temperature for Device 1 is:: ");
  Serial.print(sensors.getTempCByIndex(0)); // Why "byIndex"? 
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- //