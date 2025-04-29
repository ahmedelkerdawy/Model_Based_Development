# Permanent Magnet Synchronous Motor (PMSM) Control in Simulink  
![Simulink PMSM Model](https://img.shields.io/badge/Simulink-R2023a-blue) ![License](https://img.shields.io/badge/License-MIT-green)  

This repository implements an advanced control system for a Permanent Magnet Synchronous Motor (PMSM) using MATLAB/Simulink. The model integrates rotor flux estimation, electrical position/speed observation, ABC-to-Alpha-Beta (Clarke) transformation, and balanced three-phase voltage/current operation.  

---

## 📝 Table of Contents  
- [Features](#-features)  
- [Repository Structure](#-repository-structure)  
- [Requirements](#-requirements)  
- [Installation & Usage](#-installation--usage)  
- [Key Equations](#-key-equations)  
- [Results](#-results)  
- [References](#-references)  
- [License](#-license)  

---

## 🌟 Features  
- **PMSM Mathematical Model**:  
  - Voltage equations in the α-β reference frame.  
  - Flux and torque calculation using integrators and algebraic blocks.  
- **ABC-to-Alpha-Beta Transformation**:  
  - Clarke transformation with `2/3` scaling for amplitude invariance.  
  - Balanced three-phase current generation (`I_A, I_B, I_C`).  
- **Flux, Position, and Speed Observer**:  
  - Rotor flux estimation using low-pass filtered integrators.  
  - Position (`θ`) and speed (`ω_m`) derived from flux components.  
- **Validation**:  
  - Scopes for visualizing currents, fluxes, torque, and speed.  
  - FFT analysis to confirm balanced three-phase operation.  

---

## 📂 Repository Structure  
   
├── PMSM_Model.slx             # Simulink model  
├── Parameters.m               # Motor constants (R, L_s, L_r, P, etc.)  
├── Results/                   # Scope outputs (currents, flux, torque, speed)  
├── README.md                  # Project documentation  
└── References/                # Technical papers and equations  


## ⚙️ Requirements  
- **MATLAB/Simulink** (R2021a or later).  
- **Simscape Electrical** (optional, for cross-verification).  

---

## 🚀 Installation & Usage  

### 1. Clone the Repository  
```bash  
git clone https://github.com/your-username/PMSM-Control-Simulink.git  
cd PMSM-Control-Simulink

### 2. Open the Simulink Model

    Launch MATLAB and open PMSM_Model.slx.

3. Set Parameters

    Run Parameters.m to load motor constants
R = 1;          % Stator resistance (Ω)  
L_s = 0.01;     % Stator inductance (H)  
L_r = 0.005;    % Rotor inductance (H)  
P = 2;          % Number of pole pairs  
V_peak = 12;    % Phase voltage peak (V)  
I_peak = 2;     % Phase current peak (A)

4. Simulate

    Click Run in Simulink.

    Use built-in scopes to monitor:

        Three-phase currents (I_A, I_B, I_C).

        α-β currents and fluxes (i_α, i_β, ψ_α, ψ_β).

        Estimated torque (T_e), position (θ), and speed (ω_m).

🔑 Key Equations
Voltage Equations (α-β Frame)
vα=Riα−Lsdiαdt−ωmLriβ
vα​=Riα​−Ls​dtdiα​​−ωm​Lr​iβ​
vβ=Riβ−Lsdiβdt+ωmLriα
vβ​=Riβ​−Ls​dtdiβ​​+ωm​Lr​iα​
Flux Estimation
ψα=∫(vα−Riα) dt
ψα​=∫(vα​−Riα​)dt
ψβ=∫(vβ−Riβ) dt
ψβ​=∫(vβ​−Riβ​)dt
Torque Calculation
Te=32P(ψαiβ−ψβiα)
Te​=23​P(ψα​iβ​−ψβ​iα​)
ABC-to-Alpha-Beta Transformation
[iαiβ]=23[1−12−12032−32][IAIBIC]
[iα​iβ​​]=32​[10​−21​23
​​​−21​−23
​​​]
​IA​IB​IC​​
​
📊 Results

    Transient Response:
    Currents and Torque

    Flux Estimation:
    Flux Waves

    Balanced Three-Phase Currents:
    FFT Analysis

📚 References

    Krause, P. C. Analysis of Electric Machinery and Drive Systems.

    Bose, B. K. Modern Power Electronics and AC Drives.

    MathWorks Documentation: PMSM Modeling 
