# Automatic Door System using Servo Motor and Motion Sensor

## Overview

This Arduino C++ code implements a simple automatic door system using a servo motor and a motion sensor. The servo motor controls the opening and closing of the door, while the motion sensor detects movement to trigger the door's operation.

## Components Used

- Arduino board
- Servo motor
- Motion sensor
- Jumper wires

## Installation and Setup

1. Connect the servo motor to digital pin 9 on the Arduino board.
2. Connect the motion sensor output to digital pin 2 on the Arduino board.
3. Upload the provided C++ code to the Arduino board using the Arduino IDE.
4. Ensure that the serial monitor is open in the Arduino IDE to monitor motion detection.

## Usage

When motion is detected by the motion sensor, the door will open for a specified duration (adjustable in the code) and then close automatically.

## Adjustments

- **servoPin:** Modify this variable to match the digital pin connected to the servo signal.
- **motionSensorPin:** Modify this variable to match the digital pin connected to the motion sensor output.
- **delay(5000):** Adjust this delay to control how long the door remains open (in milliseconds).
- **delay(1000):** Adjust this delay to control the time the door takes to open and close (in milliseconds).

## Additional Notes

- Ensure that the servo motor is powered appropriately and can handle the load of the door.
- Customize the code according to your specific hardware and project requirements.
- Implement safety features and additional sensors if needed.

## License

This project is licensed under the [MIT License](LICENSE).

---

Feel free to modify this README file based on your specific project details and requirements.
