const int LDR = A0;
const int button = 2;

int LDRValue = 0;
int LastLDR = 0;
unsigned long Started = 0;
bool isWaiting = 0;
int buttonState = 0; 
int LDRprobe = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(button, INPUT_PULLUP);
pinMode(LDR, INPUT);
}

void loop() {
    LDRValue = analogRead(LDR);
    buttonState = digitalRead(button);
    //Serial.println(LDRValue);
    if(buttonState == LOW && (millis() - Started > 400)) {
      Serial.println("b");
      isWaiting = 1;
      Started = millis();
      LDRprobe = millis();
    }
    if(isWaiting && (LDRValue > LastLDR*1.02) && LDRValue > LastLDR+3) {
      Serial.println(millis() - Started); 
      isWaiting = 0;
      LDRprobe = millis();
    }
     
      if (Serial.available() > 0 && !isWaiting && Serial.read()>0){
       Serial.println("z");
       //LastLDR = LDRValue;
    }

    if(millis() - LDRprobe > 100 && !isWaiting){
      LastLDR = LDRValue;
      LDRprobe = millis();
      }
}
