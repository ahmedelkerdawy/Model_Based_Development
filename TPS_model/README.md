# Throttle Position Sensor (TPS) Model - SIL/MIL Design

A Model-Based Development (MBD) project for designing and validating a Throttle Position Sensor (TPS) using **Software-in-the-Loop (SIL)** and **Model-in-the-Loop (MIL)** methodologies.

---

## 📂 Repository Structure
TPS_model/
├── TPS_MODEL_SIL_ert_rtw/ # Auto-generated Embedded Coder code (SIL)
├── TPS_ert_rtw/ # Embedded Coder target build files
├── slprj/ # Simulink cache folder (auto-generated)
├── TPS_MODEL_SIL.slx # Simulink model for SIL workflow
├── *.jpg # Test results/diagrams (e.g., 1.jpg, 2.jpg)
└── README.md # This file


---

## 🚀 Project Overview
### Throttle Position Sensor (TPS)
- Models the relationship between throttle valve angle and sensor output voltage.
- Includes SIL/MIL validation for automotive compliance (e.g., ISO 26262).

### Key Workflows
1. **MIL (Model-in-the-Loop):**  
   - Validate the Simulink model (`TPS_MODEL_SIL.slx`) in a simulated environment.
   - Test scenarios: step response, fault injection, linearity checks.

2. **SIL (Software-in-the-Loop):**  
   - Generate embedded C code using Embedded Coder (see `TPS_MODEL_SIL_ert_rtw/`).
   - Verify code functionality against MIL results.

---

## 📸 Test Results (Images)
The `.jpg` files (e.g., `1.jpg`, `2.1.jpg`) include:
- **Simulation plots** (voltage vs. throttle angle).
- **Code verification results** (SIL vs. MIL comparisons).
- **Fault injection tests**.

---

## 🛠️ Tools Used
- **Modeling:** MATLAB/Simulink
- **Code Generation:** Embedded Coder (for `ert_rtw` folders)
- **Testing:** Simulink Test Manager
- **Version Control:** GitHub

---

## ⚙️ How to Use
### Prerequisites
- MATLAB/Simulink (R2022a or newer)
- Embedded Coder (for SIL workflows)

### Steps:
1. **Open the Simulink Model**:
   - Load `TPS_MODEL_SIL.slx` to view the TPS design.

2. **Run MIL Tests**:
   - Use Simulink Test Manager to execute predefined test cases.
   - Results are saved in `.jpg` files (e.g., `1.jpg`, `2.1.jpg`).

3. **Generate SIL Code**:
   - Use Embedded Coder to generate C code (output in `TPS_MODEL_SIL_ert_rtw/`).
   - Compare SIL results with MIL outputs.

---

## 📄 License
MIT License. See [LICENSE](LICENSE) for details.

---

## 📧 Contact
**Ahmed El Kerdawy**  
GitHub: [@ahmedelkerdawy](https://github.com/ahmedelkerdawy)  
Email: [your-email@example.com](mailto:your-email@example.com)
