

const int trigPin = 10; 
const int echoPin = 9;
int buzz = 4;

long duration;
int distance;

void setup()
{


pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

Serial.begin(9600);
pinMode(buzz, OUTPUT);
}

void loop() 
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);

distance= duration*0.034/2;
if(distance <= 5)
{
    
    
    tone(buzz, 1000);
    delay(100);
    tone(buzz, 1000);
    delay(100);
    noTone(buzz);
    delay(300);
  
  
    
}


}