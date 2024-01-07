#include <Servo.h>

const int servoPin = 9;  // Connect the servo signal pin to digital pin 9
const int motionSensorPin = 2;  // Connect the motion sensor output to digital pin 2

Servo doorServo;

void setup() {
  doorServo.attach(servoPin);
  pinMode(motionSensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int motionSensorValue = digitalRead(motionSensorPin);

  if (motionSensorValue == HIGH) {
    Serial.println("Motion detected! Opening the door.");
    openDoor();
    delay(5000);  // Keep the door open for 5 seconds (adjust as needed)
    closeDoor();
  }
}

void openDoor() {
  doorServo.write(90);  // Rotate the servo to open the door position
  delay(1000);  // Allow time for the door to open (adjust as needed)
}

void closeDoor() {
  doorServo.write(0);  // Rotate the servo to close the door position
  delay(1000);  // Allow time for the door to close (adjust as needed)
}
