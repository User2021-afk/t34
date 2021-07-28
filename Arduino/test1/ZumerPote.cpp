const int PinZum = 12;
const int PinRes = A0;
int ValRes = 0;
int ValPWM = 0;

void setup(){}

void loop(){
ValRes = analogRead(PinRes);
ValPWM = map(ValRes, 0,1023, 100,5000);
  tone(PinZum,ValPWM);
}
