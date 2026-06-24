## Development Workflow

### 1. LTspice Analysis

The buck converter power stage was first analyzed in LTspice to understand PWM-based voltage control and converter behavior.

#### LTspice Circuit

![LTspice Circuit](images/LTSPICE_CIRCUIT.png)

#### Case 1

![Case 1](images/CASE1.png)

#### Case 2

![Case 2](images/CASE2.png)

#### Case 3

![Case 3](images/CASE3.png)

---

### 2. Proteus Hardware Design

A complete hardware schematic was developed in Proteus using STM32 and buck converter components.

![Proteus Circuit](images/PROTEUS_CKT.JPG)

---

### 3. Wokwi Firmware Development

#### Test 1 – 3.3V Mode

![3.3V Test](images/TEST_3.3V.png)

#### Test 2 – 5V Mode

![5V Test](images/TEST_5V.png)

#### Test 3 – 9V Mode

![9V Test](images/TEST_9V.png)

#### Final Wokwi Circuit

![Final Wokwi Circuit](images/WOKWI_CKT.png)
