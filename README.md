# Gas-Leakage-Detector

# Gas Leakage Detector Using Arduino Uno

## Overview

This project is designed to detect gas leakage using an MQ-2 gas sensor and alert users through a red LED light and a buzzer. The system is controlled by an Arduino Uno microcontroller, making it easy to build and modify. The goal is to enhance safety by providing an early warning system for gas leaks.

## Components
Arduino Uno: The microcontroller used to process the sensor input and control the LED and buzzer.
MQ-9 Gas Sensor: Used to detect gases such as LPG, propane, and methane.
Red LED: Provides a visual alert when gas leakage is detected.
Buzzer: Emits an audible alert to notify users of gas leakage.
Breadboard and Jumper Wires: For assembling the circuit without soldering.
Circuit Diagram

## Connections:

### MQ-9 Gas Sensor:
VCC to 5V on Arduino
GND to GND on Arduino
AO to A0 on Arduino

### Red LED:
Anode to digital pin 8 on Arduino (with a current-limiting resistor)
Cathode to GND

### Buzzer:
Positive terminal to digital pin 13 on Arduino
Negative terminal to GND

## Prerequisites

Arduino IDE is installed on your computer.
Basic understanding of electronics and Arduino programming.

## Assembly Instructions

Connect the components as described in the circuit diagram.
Ensure all connections are secure and correct.

## Uploading the Code

Open the Arduino IDE.
Copy and paste the provided code into a new sketch.
Connect the Arduino Uno to your computer using a USB cable.
Select the correct board and port from the Tools menu.
Upload the code to the Arduino Uno.

## Testing

Open the Serial Monitor in the Arduino IDE to observe the sensor readings.
Expose the gas sensor to a small amount of gas (e.g., from a lighter without a flame).
Check if the LED lights up and the buzzer sounds when gas is detected.

## Calibration

Adjust the MAX value in the code if the sensor is too sensitive or not sensitive enough.
Use the Serial Monitor to help determine the appropriate threshold value for your environment.

## Contributions

Contributions are welcome! Feel free to open issues or submit pull requests to improve the project.
