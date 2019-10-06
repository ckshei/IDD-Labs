/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int wait = 0;
int sensorPin = A0;
int sensorValue = 0;
int reading = 0;
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  sensorValue = analogRead(sensorPin);
  reading = map(sensorValue,0,1023,0,180);
  for (pos = 0; pos <= reading; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(wait);                       // waits 15ms for the servo to reach the position
  }
  for (pos = reading; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(wait);                       // waits 15ms for the servo to reach the position
  }
}
