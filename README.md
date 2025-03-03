Automatic Door Opener using Arduino & SG90 Servo

This project demonstrates an automatic door opener using an Arduino Uno, IR sensor, and SG90 servo motor. The IR sensor detects an approaching object/person, triggering the servo to rotate 90° (open the door). After 5 seconds, the door automatically closes (0° position).
Components Used:

    Arduino Uno
    SG90 Servo Motor
    IR Sensor
    Battery (optional for independent power)
    Wires

How It Works:

    The IR sensor detects an object and signals the Arduino.
    The SG90 servo motor moves to 90° (door open position).
    After 5 seconds, the servo moves back to 0° (door closed position).
    The system continuously monitors for new detections.

Wiring Connections:
Component	Arduino Pin
IR Sensor VCC	5V
IR Sensor GND	GND
IR Sensor OUT	Digital Pin 2
Servo VCC	5V
Servo GND	GND
Servo Signal	Digital Pin 9
Arduino Code:

Features:

✅ No relay or motor driver required (uses SG90 directly)
✅ Compact and efficient for small-scale automation
✅ Adjustable delay for door closing timing

Image:
![alt](https://github.com/Abhi0808raj/Smart-Elevator-System/blob/main/Images/PXL_20240906_1851243652.gif)
