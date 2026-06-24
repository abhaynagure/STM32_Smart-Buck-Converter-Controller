# STM32 Smart Buck Converter Controller

## Overview

This project demonstrates the development of a Smart Buck Converter Controller using STM32 microcontrollers. The project combines power electronics analysis, hardware design, and embedded firmware development through LTspice, Proteus, and Wokwi simulations.

---

## Development Workflow

### 1. LTspice Analysis

The buck converter power stage was first analyzed in LTspice to understand PWM-based voltage control and converter behavior.

#### LTspice Circuit

![LTspice Circuit](images/LTSPICE_CIRCUIT.png)

#### LTspice Results

##### Case 1

![Case 1](images/CASE1.png)

##### Case 2

![Case 2](images/CASE2.png)

##### Case 3

![Case 3](images/CASE3.png)

---

### 2. Proteus Hardware Design

A complete hardware schematic was developed in Proteus using STM32 and buck converter components.

![Proteus Circuit](images/PROTEUS_CKT.JPG)

---

### 3. Wokwi Firmware Development

The firmware was developed and validated using Wokwi simulations.

#### Test 1

* STM32 + TFT Display Verification
* SPI Communication Testing

#### Test 2

* Push Button Interface
* Voltage Mode Selection
* Display Updates

#### Final Project

* TFT User Interface
* Voltage Selection
* PWM Visualization
* RGB LED Status Indication

![Final Wokwi Circuit](images/WOKWI_CKT.png)

---

## Features

* 3.3V Mode
* 5V Mode
* 9V Mode
* PWM Duty Cycle Visualization
* TFT Display Interface
* RGB LED Status Indication
* LTspice Analysis
* Proteus Design
* Wokwi Simulation

---

## Tools Used

| Tool        | Purpose                 |
| ----------- | ----------------------- |
| LTspice     | Buck Converter Analysis |
| Proteus     | Hardware Design         |
| Wokwi       | Firmware Simulation     |
| Arduino IDE | STM32 Programming       |
| GitHub      | Documentation           |

---

## Wokwi Simulation

https://wokwi.com/projects/467642954502408193

---

## Future Improvements

* Closed Loop Voltage Control
* ADC Feedback Monitoring
* Real Hardware Implementation
* PCB Design
* IoT Monitoring

---

## Author

Abhay Sunil Nagure

Electronics and Communication Engineering
