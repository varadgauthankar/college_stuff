#include <Servo.h>

Servo servo;
  
void setup() {
  Serial.begin(9600);
  servo.attach(1);
}

void loop() {
  servo.write(180);
}
