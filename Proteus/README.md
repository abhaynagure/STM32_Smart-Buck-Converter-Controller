# Proteus Design

This folder contains the Proteus-based hardware design for the Smart Buck Converter Controller project.

## Objective

To create a complete virtual hardware implementation of the Smart Buck Controller using STM32 and supporting peripherals.

## Components Used

* STM32 Blue Pill
* LCD Display
* Push Buttons
* Buck Converter Power Stage
* PWM Control Signal
* Voltage Selection Interface

## Files

### Smart_Buck_Controller.pdsprj

Proteus project file containing the complete hardware schematic and simulation setup.

### Proteus_Code.ino

Firmware intended for use with the Proteus hardware design.

## Hardware Features

* Voltage mode selection
* PWM generation
* User interface display
* Controller simulation

## Notes

The Proteus implementation was developed as a hardware-design stage of the project. Due to simulator limitations and STM32 configuration challenges, the final firmware validation and user-interface implementation were completed in Wokwi.

## Conclusion

The Proteus design helped establish the complete hardware architecture before transitioning to Wokwi for firmware verification and demonstration.
