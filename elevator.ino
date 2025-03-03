#include <Servo.h>  // Include the Servo library

// Define pins
const int irSensorPin = 2;    // IR sensor output pin
const int servoPin = 9;       // Servo motor control pin

Servo myServo;  // Create a Servo object to control the SG90 motor

void setup() {
  pinMode(irSensorPin, INPUT);  // IR sensor as input
  myServo.attach(servoPin);     // Attach servo to pin 9
  myServo.write(180);             // Initially set the servo to 0 degrees (door closed)
  Serial.begin(9600);           
}

void loop() {
  int sensorState = digitalRead(irSensorPin);
  
  if (sensorState == LOW) {    // Object detected
    Serial.println("Object Detected");
    myServo.write(90);          // Rotate servo to 90 degrees (open door)
    delay(2000);                // Keep door open for 5 seconds
    myServo.write(180);           // Rotate back to 0 degrees (close door)
    delay(1000);                // Add a delay to prevent repeated opening
  } else {
    Serial.println("No Object");
  }

  delay(200);  
}
