const int PinRes = A5;               
const int PinLed = 9;              
      int ValRes = 0;       
      int ValPWM = 0;                 

void setup(){                       
    pinMode(PinLed, OUTPUT);         
}                                       

void loop(){                            
    ValRes = analogRead(PinRes);     
    ValPWM = map(ValRes, 200,1024, 0,255); 
    analogWrite(PinLed, ValPWM);     
}
