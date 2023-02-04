#include <Servo.h>
const int servo=9 ;
const int pir= 2;
const int led=5;
Servo myservo;


void setup() {
  // put your setup code here, to run once:
myservo.attach(servo);
pinMode(rip, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(rip)){
      myservo.write(90);
      digitalWrite(led, HIGH);
    }else{
      myservo.write(0);
      digitalWrite(led, LOW);
    }

}
