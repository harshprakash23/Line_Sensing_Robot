# Line Sensing Robot

This project is an Arduino-based line following and obstacle avoiding robot. It uses IR sensors for line detection and an ultrasonic sensor for obstacle detection. The robot is controlled by an Arduino Uno and uses an L298N motor driver to control two DC motors.

## Features
- **Line Following:** Uses two IR sensors to detect and follow a line.
- **Obstacle Avoidance:** Uses an ultrasonic sensor to detect obstacles and stop the robot if something is in its path.
- **Motor Control:** L298N dual H-bridge motor driver for controlling left and right motors.

## Block Diagram

### System Overview

<img width="889" height="680" alt="image" src="https://github.com/user-attachments/assets/dd33e85e-33bb-42f3-bef3-37b20eab0fae" />



<img width="901" height="689" alt="image" src="https://github.com/user-attachments/assets/1545adce-d33f-465d-8c49-51b287cdfb49" />


## Circuit Description
- **IR Sensors:** Detect the line or edge and send digital signals to the Arduino.
- **Ultrasonic Sensor:** Measures distance to obstacles in front of the robot.
- **Arduino Uno:** Processes sensor inputs and controls the motor driver.
- **L298N Motor Driver:** Drives the left and right DC motors based on Arduino signals.

## File Structure
- `Line_sensing.ino` - Main Arduino code for line following and obstacle avoidance.
- `block_diagram_1.png`, `block_diagram_2.png` - Block diagrams of the robot system.

## How It Works
1. The IR sensors detect the line and send signals to the Arduino.
2. The Arduino processes these signals and sends control signals to the L298N motor driver.
3. The ultrasonic sensor checks for obstacles. If an obstacle is detected within 15 cm, the robot stops.
4. The motors are controlled to follow the line or stop/turn as needed.

## Component IDs
- **ARD1:** Arduino Uno
- **IR1, IR2:** IR Obstacle Sensors
- **L1:** L298N Dual Motor Driver

## Getting Started
1. Upload the `Line_sensing.ino` code to your Arduino Uno.
2. Connect the sensors and motors as shown in the block diagrams.
3. Power the robot and place it on a track to start line following.

---

**Author:** harshprakash23

For more details, see the block diagrams above.
