
#include <Servo.h>

#define rightMotorPin 9
#define leftMotorPin 10

#define trigPin 12
#define echoPin 11

Servo rightMotor;
Servo leftMotor;

// Number in cm when the bot will turn. 1"= 2.54cm
const int wall = 7;

void setup() {
 // put your setup code here, to run once:
 
  rightMotor.attach(rightMotorPin);
  leftMotor.attach(leftMotorPin);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration, distance;  // declare the variables we'll be using
  
// Clears the trigPin
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH); 
  distance = (duration/2) / 29.1; // calculation for the distance in cm

  if (distance <= wall) {

    rightMotor.write(0);
    leftMotor.write(90);
  
     delay(600);
  }
  else {
    
    rightMotor.write(0);
    leftMotor.write(180);
  
    delay(15);
  }

}


