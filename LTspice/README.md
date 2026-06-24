# LTspice Analysis

This folder contains the LTspice simulation and analysis of the Buck Converter power stage.

## Objective

To study the relationship between PWM duty cycle and output voltage in a DC-DC Buck Converter.

## Input Parameters

* Input Voltage: 12V DC
* Switching Device: Ideal Controlled Switch
* PWM Control: Pulse Source
* Output Filter: Inductor and Capacitor

## Simulation Files

### Buck_Converter.asc

Main LTspice schematic used for simulation and analysis.

## Simulation Cases

### Case 1 – Low Voltage Mode

Target Output:

* Approximately 3.3V

Duty Cycle:

* Approximately 23%

Result:

* Converter output settles near the desired low-voltage level.

### Case 2 – Medium Voltage Mode

Target Output:

* Approximately 5V

Duty Cycle:

* Approximately 42%

Result:

* Converter output settles near the desired medium-voltage level.

### Case 3 – High Voltage Mode

Target Output:

* Approximately 9V

Duty Cycle:

* Approximately 75%

Result:

* Converter output settles near the desired high-voltage level.

## Files

* LTSPICE_CIRCUIT.png
* CASE1.png
* CASE2.png
* CASE3.png
* Buck_Converter.asc

## Conclusion

The LTspice simulation verifies the effect of PWM duty cycle on the output voltage of a Buck Converter and serves as the foundation for the STM32-based Smart Buck Controller project.
