const int trigPin = 3;
const int echoPin = 2;
int ledPin = 4;
int ledPin2 = 5;
int ledPin3 = 6;
int ledPin4 = 7;

long duration;
int distance;

void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

 Serial.begin(9600);
  
}
void loop(){

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = 0.034 * duration/2

  Serial.print("distance:");
  Serial.println(distance);
  if(distance < 20 && distance > 15){
    digitalRead(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, LOW);
  }
  }
    if(distance < 15 && distance > 10){
    digitalRead(ledPin2, HIGH);
  } else{
    digitalWrite(ledPin2, LOW);
  }
  }
  if(distance < 10 && distance > 5){
    digitalRead(ledPin3, HIGH);
  } else{
    digitalWrite(ledPin3, LOW);
  }
  }
    if(distance < 5){
    digitalRead(ledPin4, HIGH);
  } else{
    digitalWrite(ledPin4, LOW);
  }
  }
}
