
#include <Servo.h>

#define rightMotorPin 9
#define leftMotorPin 10

Servo rightMotor;
Servo leftMotor;

void setup() {
 // put your setup code here, to run once:
 
  rightMotor.attach(rightMotorPin);
  leftMotor.attach(leftMotorPin);

}

void loop() {
  // put your main code here, to run repeatedly:


  rightMotor.write(90);   // right servo motor stop
  leftMotor.write(90);    // left servo motor stop
  
  delay(3000);

  rightMotor.write(0);
  leftMotor.write(180);
  
  delay(3000);
  
  rightMotor.write(90);
  leftMotor.write(90);
  
  delay(1000);
  
  rightMotor.write(180);
  leftMotor.write(0);
  
  delay(3000);

}
