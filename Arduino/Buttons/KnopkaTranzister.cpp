const int PinKey = 2;  
const int PinVT  = 12;             
bool      Action = 0;        
void setup(){                      
    pinMode(PinKey, INPUT);    
    pinMode(PinVT, OUTPUT);  
}

void loop(){                      
    Action = digitalRead(PinKey);  
    digitalWrite(PinVT, Aktion);
}
