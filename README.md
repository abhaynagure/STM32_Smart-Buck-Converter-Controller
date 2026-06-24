# STM32 Smart Buck Converter Controller

## Overview

This project demonstrates the design, analysis, and simulation of a Smart Buck Converter Controller using STM32 microcontrollers.

The project was developed through multiple engineering stages:

1. LTspice Analysis of the Buck Converter power stage
2. Proteus Hardware Design using STM32 Blue Pill
3. Wokwi Firmware Development and Validation

The final controller allows users to select three voltage modes:

* 3.3V Mode
* 5V Mode
* 9V Mode

The selected operating mode is displayed on a TFT display and indicated using an RGB LED.

---

## Project Objectives

* Study Buck Converter operation
* Understand PWM-based voltage control
* Analyze duty cycle effects on output voltage
* Interface displays with STM32
* Implement voltage mode selection
* Develop an embedded user interface
* Simulate and validate the complete system

---

## Tools Used

| Tool        | Purpose                         |
| ----------- | ------------------------------- |
| LTspice     | Buck Converter Analysis         |
| Proteus     | Hardware Design                 |
| Wokwi       | Embedded Simulation             |
| Arduino IDE | Firmware Development            |
| GitHub      | Documentation & Version Control |

---

## Project Development Path

The project was developed using the following workflow:

LTspice Analysis

↓

Proteus Hardware Design

↓

Wokwi Display Verification

↓

Button Integration

↓

RGB LED Integration

↓

Final Smart Buck Controller

---

## Development Workflow

### 1. LTspice Analysis

The Buck Converter power stage was first analyzed using LTspice to study the relationship between PWM duty cycle and output voltage.

#### LTspice Circuit

![Image](Images/LTSPICE_CIRCUIT.png)

#### Case 1

![Image](Images/CASE1.png)

#### Case 2

![Image](Images/CASE2.png)

#### Case 3

![Image](Images/CASE3.png)

---

### 2. Proteus Hardware Design

The hardware architecture was designed using STM32 Blue Pill and LCD interfacing.

#### Proteus Circuit

![Image](Images/PROTEUS_CKT.JPG)

Key Components:

* STM32 Blue Pill (STM32F103C8T6)
* 16x2 LCD Display
* Push Buttons
* PWM Control Interface
* Buck Converter Stage

---

### 3. Wokwi Firmware Development

The firmware was developed and validated using Wokwi simulation.

#### Display Verification

Initial TFT display verification was performed before integrating additional functionality.

#### Final Smart Buck Controller

##### 3.3V Mode

![Image](Images/TEST_3.3V.png)

##### 5V Mode

![Image](Images/TEST_5V.png)

##### 9V Mode

![Image](Images/TEST_9V.png)

##### Final Circuit

![Image](Images/WOKWI_CKT.png)

---

## Features

* Three selectable voltage modes
* TFT Display Interface
* RGB LED Status Indication
* PWM Duty Cycle Visualization
* LTspice Power Stage Analysis
* Proteus Hardware Design
* Wokwi Firmware Validation
* STM32-Based Embedded Control

---

## Voltage Mode Configuration

| Mode   | Target Voltage | PWM Duty Cycle |
| ------ | -------------- | -------------- |
| Mode 1 | 3.3V           | ~23%           |
| Mode 2 | 5V             | ~42%           |
| Mode 3 | 9V             | ~75%           |

---

## Repository Structure

```text
Images/
│
├── CASE1.png
├── CASE2.png
├── CASE3.png
├── LTSPICE_CIRCUIT.png
├── PROTEUS_CKT.JPG
├── TEST_3.3V.png
├── TEST_5V.png
├── TEST_9V.png
└── WOKWI_CKT.png

LTspice/
│
├── Buck_Converter.asc
└── README.md

Proteus/
│
├── Smart_Buck_Controller.pdsprj
├── STM32_BluePill_LCD.ino
└── README.md

Wokwi/
│
├── Display_Test.ino
├── Final_Smart_Buck_Controller.ino
├── Wokwi_Link.txt
└── README.md

README.md
```

---

## Wokwi Simulation

Project Link:

https://wokwi.com/projects/467642954502408193

---

## Learning Outcomes

This project helped develop practical knowledge in:

* Power Electronics
* PWM Control Techniques
* Embedded Systems Design
* STM32 Programming
* Display Interfacing
* Hardware Simulation
* Engineering Documentation
* GitHub Project Management

---

## Future Improvements

* Closed-loop voltage feedback
* ADC-based voltage monitoring
* PCB implementation
* Efficiency optimization
* Real-time voltage sensing
* IoT monitoring using ESP32
* Real hardware prototype

---

## Author

Abhay Nagure

B.E. Electronics and Communication Engineering (ECE)

Project – Smart Buck Converter Controller

---

## License

This project is released for educational and learning purposes.
