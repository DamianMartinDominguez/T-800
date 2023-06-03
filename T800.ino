/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 90;    // variable to store the servo position
int A=50;
int B=10;
int ledPin1=2;
int Val1;

void setup() {
  Serial.begin(9600);
  myservo.attach(7);
  myservo.write(pos);
  delay(10000);  // attaches the servo on pin 9 to the servo object
}

void loop() {
for (Val1 = 0; Val1 <= 255; Val1 += 1) 
  {
    analogWrite(ledPin1,Val1);
    Serial.println("ojos:");
    Serial.println(Val1);
    delay(15);
  }  

  for (pos = 90; pos <= 135; pos += 1) { // goes from 90 degrees to 135 degrees
    // in steps of 1 degree
    myservo.write(pos);  
    Serial.println("posicion:");
    Serial.println(pos);            // tell servo to go to position in variable 'pos'
    delay(A);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 135; pos >= 45; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);  
    Serial.println(pos);             // tell servo to go to position in variable 'pos'
    delay(A);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 45; pos <= 90; pos += 1) { // goes from 90 degrees to 135 degrees
    // in steps of 1 degree
    myservo.write(pos); 
    Serial.println(pos);              // tell servo to go to position in variable 'pos'
    delay(A);                       // waits 15 ms for the servo to reach the position
  }
  for (Val1 = 255; Val1 >= 0; Val1 -= 1) 
  {
    analogWrite(ledPin1,Val1);
    Serial.println("ojos:");
    Serial.println(Val1);
    delay(15);
  }  

  delay(100000);
  
}
