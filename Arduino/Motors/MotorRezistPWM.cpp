const int PinRes   = A0;               
const int PinPWM_L = 10;            
const int PinPWM_R = 9;               
      int ValRes   = 0;                  
      int ValPWM_L = 0;                
      int ValPWM_R = 0;                 

void setup(){                        
    pinMode(ValPWM_L, OUTPUT);            
    pinMode(PinPWM_R, OUTPUT);            
}                                     
void loop(){                         
    if(ValRes<512){                   
      ValPWM_L=map(ValRes,0,512,255,0);   
      ValPWM_R=0;                          
    }else{                             
      ValPWM_R=map(ValRes,512,1023,0,255);
      ValPWM_L=0;                       
    }
    analogWrite(PinPWM_L, ValPWM_L);   
    analogWrite(PinPWM_R, ValPWM_R);    
}
