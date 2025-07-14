# Seatbelt AUTOSAR System

## Overview
This project uses MATLAB Simulink to design and implement a seatbelt system according to AUTOSAR standards. The system is developed with component-based architecture, using standard AUTOSAR services.

## System Architecture

### AUTOSAR Software Components (SWC)
- **SeatBelt SWC**: Main component handling seatbelt logic, including:
  - Monitor seatbelt status
  - Calculate average speed
  - Count ignition key state transitions
  - Handle warnings and errors
- **GetStatus SWC**: Component retrieving diagnostic status information from DEM service

### Composition
Both SWCs are wrapped by a composition, forming a complete unit for the seatbelt system.

<img width="848" height="611" alt="image" src="https://github.com/user-attachments/assets/7595d0cd-6301-4709-bba7-c01549eaefa8" />

### AUTOSAR Services
- **NVM (Non-Volatile Memory)**: 
  - Store ignition key state transition count (`IgnitionKeySwitchCount`)
  - Service calls: `ReadBlock`, `WriteBlock`
- **DEM (Diagnostic Event Manager)**: 
  - Manage speed fault diagnostic events
  - Events: `SpeedStuckHigh`, `SpeedStuckLow`
  - Service calls: `SetEventStatus`, `GetEventFailed`

## Interface (Ports)

<img width="999" height="676" alt="image" src="https://github.com/user-attachments/assets/5dc7cf80-ab34-4d8c-8f74-b6794f32f597" />

### SeatBelt SWC

#### Input Ports (Inport)
- **SeatBeltFasten**: Seatbelt status
- **Speed**: Current vehicle speed (uint16) 
- **Key**: Ignition key state - OFF/ON/CRANK

#### Output Ports (Outport)
- **SeatbeltIcon**: Signal to display seatbelt icon 
- **SeatbeltFastenError**: Seatbelt error signal 

### GetStatus SWC

#### Input Ports (Inport)
- No direct input ports (using service calls)

#### Output Ports (Outport)
- **SpeedStuckHigh_GetFailedStatus**: High speed stuck fault status 
- **SpeedStuckLow_GetFailedStatus**: Low speed stuck fault status

## Technologies Used
- **MATLAB Simulink**: Main development environment
- **AUTOSAR Blockset**: Toolbox for AUTOSAR design
- **Embedded Coder**: For C/C++ code generation

## System Requirements
- MATLAB R2024a
- Simulink
- AUTOSAR Blockset
- Embedded Coder
