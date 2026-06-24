# Proteus Design

This folder contains the Proteus implementation of the Smart Buck Converter Controller.

## Objective

To design and simulate an STM32-based controller interface before hardware implementation.

## Hardware Used

* STM32 Blue Pill (STM32F103C8T6)
* 16x2 LCD Display
* Push Buttons
* PWM Control Interface
* Buck Converter Power Stage

## Files

### Smart_Buck_Controller.pdsprj

Proteus project containing the complete schematic and simulation setup.

### STM32_BluePill_LCD.ino

Firmware developed for interfacing the STM32 Blue Pill with the LCD display and controller logic.

## Development Notes

During development, STM32 configuration and simulation limitations in Proteus made firmware validation challenging. The final user-interface implementation and demonstration were therefore completed using Wokwi.

## Outcome

The Proteus design phase helped establish the overall hardware architecture, pin assignments, and controller interface used later in the final project.
