
int ledPin = 13;
unsigned long lastBlinkTime;
boolean ledState = false;

unsigned int blinkInterval = 1000;

void setup() {

  pinMode(ledPin, OUTPUT);

}

void loop() {
  
  unsigned long currentTime = millis();

  if(currentTime - lastBlinkTime >= blinkInterval){
    ledState = ! ledState;
    digitalWrite(ledPin, ledState);
  }
}
