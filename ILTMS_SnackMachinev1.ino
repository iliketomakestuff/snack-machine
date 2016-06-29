#include <AFMotor.h>


AF_Stepper motor(48, 2);
int buttonPin = 14;

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Stepper test!");

  pinMode(buttonPin, INPUT);
  
  digitalWrite(buttonPin, LOW);
  motor.setSpeed(300);  // 10 rpm   

  delay(500);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      Serial.println("press");
        motor.step(50, FORWARD1, SINGLE); 
    }
}
