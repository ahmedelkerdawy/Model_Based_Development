# Accelerator Pedal Position Sensor (APPS) Model
**Model-Based Development of a Dual Potentiometer APPS for Automotive Systems**

---

## Table of Contents
- [Project Overview](#project-overview)
- [Key Components](#key-components)
- [Model Specifications](#model-specifications)
- [SIL/MIL Implementation](#sil-mil-implementation)
- [Repository Structure](#repository-structure)
- [Tools Used](#tools-used)
- [Installation & Usage](#installation--usage)
- [Contributing](#contributing)
- [License](#license)

---

## Project Overview
This repository contains a **Simulink-based algebraic model** of a dual potentiometer Accelerator Pedal Position Sensor (APPS). The model translates mechanical pedal position into an electrical signal for automotive control systems, adhering to real-world voltage specifications and fault detection criteria. Designed for **Software-in-the-Loop (SIL)** and **Model-in-the-Loop (MIL)** validation, this project ensures accurate ECU input simulation.

---

## Key Components
1. **Accelerator Pedal**  
   - Physical interface for driver input (pedal position: 0–100%).
2. **Dual Potentiometer Sensor**  
   - Redundant design for safety.
   - Converts pedal position to a linear voltage signal.
3. **Signal Processing Unit (ECU)**  
   - Validates voltage output and detects faults (short circuits).

---

## Model Specifications
### Input/Output
| **Input**               | **Output**                  |
|-------------------------|-----------------------------|
| Pedal Position (0–100%) | Potentiometer Voltage (0–5 V) |

### Voltage Ranges
| **Range** | **Voltage**      | **Description**                              |
|-----------|------------------|----------------------------------------------|
| Valid     | 0.5 V – 4.5 V    | Normal operation (pedal released to pressed) |
| Invalid   | <0.5 V or >4.5 V | Fault: Short circuit to GND or VCC           |

### Linear Relationship
The output voltage follows:  
\[
V_{out} = 0.04 \times \text{Pedal Position (\%)} + 0.5
\]

**Example**:  
- Pedal at 0% (released): \( V_{out} = 0.5 \, \text{V} \)  
- Pedal at 100% (pressed): \( V_{out} = 4.5 \, \text{V} \)

---

## SIL/MIL Implementation
### Features
- **Simulink Block Diagram**:  
  <img src="APPS_MODEL/Accelator_Padel_Sensor_Modeling.slx" width="400" alt="Simulink Model">  
  *(Add a screenshot of your model here)*
- **Fault Simulation**: Triggers error flags for invalid voltages.
- **Test Framework**:  
  - `graph_sen.m`: MATLAB script for voltage vs. pedal position analysis.
  - Pre-configured test cases for SIL/MIL workflows.

---

## Repository Structure
Model_Based_Development/
├── APPS_MODEL/ # Core model files
│ ├── Accelator_Padel_Sensor_Modeling.slx # Main Simulink model
│ ├── Accelator_pedal_position_sensors.slx # Subsystem components
│ ├── Accelator_Padel_Sensor_Modeling.slxc # Simulink cache
│ ├── APP_Coherenzy_sbs.mework4 # Co-simulation configuration
│ ├── graph_sen.m # Visualization script
│ └── *.jpg # Diagrams/test results
└── README.md # Project documentation

---

## Tools Used
- **MATLAB/Simulink R2023a+**
- Stateflow (for fault logic)
- Simulink Test (MIL/SIL validation)
- MATLAB Scripts (data analysis)

---

## Installation & Usage
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/ahmedelkerdawy/Model_Based_Development.git
   cd Model_Based_Development
       Open the Simulink Model:

        Launch APPS_MODEL/Accelator_Padel_Sensor_Modeling.slx.

    Run Analysis:

        Execute graph_sen.m in MATLAB to visualize voltage-position curves.

Contributing

Contributions are welcome!

    Fork the repository.

    Create a feature branch: git checkout -b feature/new-component.

    Commit changes: git commit -m "Add feature".

    Push to the branch: git push origin feature/new-component.

    Open a Pull Request.

License

Distributed under the MIT License. See LICENSE for details.
Copy


---

### Notes:
1. **Visuals**: Replace the `img` placeholder with an actual screenshot of your Simulink model.  
2. **File Paths**: Adjust paths if your repository structure differs.  
3. **Dependencies**: Ensure users have MATLAB/Simulink installed for full functionality.  

This README provides a clear, technical overview while maintaining readability for engineers and contributors.
