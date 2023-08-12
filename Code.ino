const int trigPin = D5; 
const int echoPin = D6; 
const int relayPin = D4;

const int trigPin1 = D7;
const int echoPin1 = D8;
const int relayPin1 = D3;

long duration,duration1;
int distance,distance1;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(relayPin,OUTPUT);

pinMode(trigPin1, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin1, INPUT); // Sets the echoPin as an Input
pinMode(relayPin1,OUTPUT);
Serial.begin(9600); // Starts the serial communication
}
void loop() {

// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
delay(2000);
if(distance<=5)
{
  digitalWrite(relayPin,HIGH);
}
else
{
  digitalWrite(relayPin,LOW);
}



// Clears the trigPin
digitalWrite(trigPin1, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin1, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin1, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration1 = pulseIn(echoPin1, HIGH);

// Calculating the distance
distance1 = duration1*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance1: ");
Serial.println(distance1);
delay(2000);
if(distance1<=10)
{
  digitalWrite(relayPin1,HIGH);
}
else
{
  digitalWrite(relayPin1,LOW);
}
}
