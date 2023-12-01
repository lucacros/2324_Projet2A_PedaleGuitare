# Here you are in the Hardware Section
You will find all specifications and things to understand it.
Enjoy your reading ! (Camille L)

## 📖 Table of contents
1. [List of components](#list-of-components)
2. [Hardware Specifications](#hardware-specifications)
    1. [Block Diagram](#block-diagram)
    2. [Power Board](#power-section)
    3. [Audio Codec Configuration](#audio-codec-configuration)
    4. [RAM Codec Configuration](#ram-codec-configuration)
    5. [MicroProcessor Configuration (with extern memory: RAM)](#microprocessor-configuration-with-extern-memory-ram)
3. [Installation](#installation)



## List of components
- [Link to List of Components](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/List%20of%20Components.md)

For more details on each component, refer to [Hardware Specifications](#hardware-specifications).

## Hardware Specifications


## Block Diagram
**<p align="center">Diagram System overview</p>**

<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/BLOCK%20SYSTEM.drawio.png" alt="Block Diagram" width="600" />
</p>


A.F.E = Analog Front End : Preamplifier-Noise attenuation

A.R.E = Analog Rear End : Amplifier-Noise attenuation

We use AFE to adapt the voltage to the Codec = 2.83Vpp for a supply voltage of 3.3V. To find out if you need to fit an AFE, you need to measure the signal from your guitar.

<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/Bloc%20symtem%20optimized.png" alt="Block Diagram Optimized" width="600" />
</p>

**<p align="center"> Guitar signal </p>**
<p align="center">
  <img src="" alt="Guitar signal" width="600" />
</p>



## Power section
La puissance dissipée dans le composant électronique utilisé en commutation est moindre que lorsqu'il est utilisé en mode linéaire.
<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/power%20section.png" alt="Power section" width="500" />
</p>
The 17950x78 integrates both the input and output capacitors. Therefore, additional external input/output capacitors are normally not required.
The additional 100µF capacitor C1 is mounted as termination of the supply line and provides a slight damping of possible oscillations of the series resonance circuit represented by the inductance of the supply line and the input capacitance. This capacitor also prevents voltage overshoot during start up.


## Audio Codec Configuration

The SGTL5000 is a digital-to-analog (DAC) and analog-to-digital (ADC) audio codec. Its basic operation involves converting digital audio signals to analog for audio output and converting analog signals to digital for audio input. The essential pins include those for I2S communication, power supply, mode selection, audio input and output connections, as well as control pins to configure the codec based on application requirements.





<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/audio%20codec.png" alt="Codec SGTL5000" width="400" />
</p>

### RAM Configuration

<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/ram.png" alt="RAM" width="400" />
</p>


## MicroProcessor Configuration





**From the STM32F446ZCT6 microcontroller to the RAM :**



<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/STM32.png" alt="µP" width="400" />
</p>
  
## 💻 Installation
I recommend downloading the latest version of **KiCad** to reproduce the electronic board. For simulating amplifiers, consider using **Cadence Pspice** or **Microcap**. Use the **STCUBEIDE** software for programming the codec and microprocessor.

- **Pspice**: [Download Pspice](https://www.cadence.com/en_US/home/tools/pcb-design-and-analysis/analog-mixed-signal-simulation/pspice.html)
- **KiCad**: [Download KiCad](https://www.kicad.org/)
- **STCUBEIDE**: [Download STCUBEIDE](https://www.st.com/en/development-tools/stm32cubeide.html)
