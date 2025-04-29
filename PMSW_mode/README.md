Permanent Magnet Synchronous Motor (PMSM) Control in Simulink

Advanced motor control system integrating flux, position, and speed estimation, ABC-to-Alpha-Beta transformation, and balanced three-phase voltage/current operation.
🔍 Features

    PMSM Mathematical Model:

        Voltage equations: vα=Riα−Lsdiαdt−ωmLriβvα​=Riα​−Ls​dtdiα​​−ωm​Lr​iβ​, vβ=Riβ−Lsdiβdt+ωmLriαvβ​=Riβ​−Ls​dtdiβ​​+ωm​Lr​iα​.

        Flux estimation: ψα=∫(vα−Riα)dtψα​=∫(vα​−Riα​)dt, ψβ=∫(vβ−Riβ)dtψβ​=∫(vβ​−Riβ​)dt.

        Torque calculation: Te=32P(ψαiβ−ψβiα)Te​=23​P(ψα​iβ​−ψβ​iα​).

    ABC-to-Alpha-Beta (Clarke) Transformation:

        Converts three-phase currents (IA,IB,ICIA​,IB​,IC​) to two-phase orthogonal components (iα,iβiα​,iβ​).

        Matrix implementation with 2/32/3 scaling for amplitude invariance.

    Flux, Position, and Speed Observer:

        Estimates rotor flux (ψα,ψβψα​,ψβ​), electrical position (θ=arctan⁡(ψβ/ψα)θ=arctan(ψβ​/ψα​)), and speed (ωm=dθ/dtωm​=dθ/dt).

        Low-pass filters to mitigate integrator drift.

    Balanced Three-Phase System:

        Simulated with Vpeak=12 VVpeak​=12V, Ipeak=2 AIpeak​=2A, ω=300 rad/sω=300rad/s.

📂 Repository Structure

├── PMSM_Model.slx             # Simulink model  
├── Parameters.m               # Motor constants (R, L_s, L_r, P, etc.)  
├── Results/                   # Scope outputs (currents, flux, torque, speed)  
├── README.md                  # Project documentation  
└── References/                # Technical papers and equations  

⚙️ Requirements

    MATLAB/Simulink (R2021a or later).

    Simscape Electrical (for PMSM block validation, optional).

🚀 Usage

    Clone the repository:
    bash

    git clone https://github.com/your-username/PMSM-Control-Simulink.git  

    Open PMSM_Model.slx in Simulink.

    Run Parameters.m to load constants (R=1 ΩR=1Ω, Ls=0.01 HLs​=0.01H, P=2P=2, etc.).

    Simulate and visualize results using built-in scopes:

        Phase currents (IA,IB,ICIA​,IB​,IC​).

        αα-ββ currents and fluxes.

        Estimated torque (TeTe​), position (θθ), and speed (ωmωm​).

📊 Results

    Transient Response: Analysis of motor startup and load changes.

    Flux Estimation: Validation of ψα/ψβψα​/ψβ​ convergence.

    Balanced System: FFT analysis confirming harmonic-free three-phase waveforms.

📚 References

    Krause, P. C. Analysis of Electric Machinery and Drive Systems.

    Bose, B. K. Modern Power Electronics and AC Drives.
    ![image](https://github.com/user-attachments/assets/7b034235-1661-45ee-94cb-8c36f16cc61a)
