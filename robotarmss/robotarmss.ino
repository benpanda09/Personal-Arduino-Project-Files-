#include <Servo.h>

Servo myservo;
Servo myservo1; 
Servo myservo2; 
Servo myservo3;

int sensor=0;
int angle=90;

int sensor1=0;
int angle1=90;

int sensor2=0;
int angle2=90;

int sensor3=0;
int angle3=90;





void setup() {
  myservo.attach(6);
  myservo1.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
  

}

void loop() {
  sensor=analogRead(A0);
  angle=map(sensor,0, 1023, 0, 180);
  myservo.write(angle);
  delay(15);


  sensor1=analogRead(A1);
  angle1=map(sensor1,0, 1000, 0, 180);
  myservo1.write(angle1);
  delay(15);


  sensor2=analogRead(A2);
  angle2=map(sensor2,0, 1023, 0, 180);
  myservo2.write(angle2);
  delay(15);


  sensor3=analogRead(A3);
  angle3=map(sensor3,0, 1023, 0, 180);
  myservo3.write(angle3);
  delay(15);
}
