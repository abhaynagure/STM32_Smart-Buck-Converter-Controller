## Development Workflow

### 1. LTspice Analysis

The buck converter power stage was first analyzed in LTspice to understand PWM-based voltage control and converter behavior.

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

A complete hardware schematic was developed in Proteus using STM32 and buck converter components.

![Image](Images/PROTEUS_CKT.JPG)

---

### 3. Wokwi Firmware Development

#### Test 1 – 3.3V Mode

![Image](Images/TEST_3.3V.png)

#### Test 2 – 5V Mode

![Image](Images/TEST_5V.png)

#### Test 3 – 9V Mode

![Image](Images/TEST_9V.png)

#### Final Wokwi Circuit

![Image](Images/WOKWI_CKT.png)
