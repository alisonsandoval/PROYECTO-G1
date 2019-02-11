int sensorPin = 2;
int ledPin = 3;
 
void setup() {
pinMode(sensorPin, INPUT);
pinMode(ledPin, OUTPUT);
}


void loop() {
  if(digitalRead(sensorPin) == HIGH){
    digitalRead(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, LOW);
  }
  }
