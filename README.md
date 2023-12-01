# Here you are in the Hardware Section
You will find all specifications and things to understand it.
Enjoy your reading ! (Camille L)

## 📖 Table of contents
1. [List of components](#list-of-components)
2. [Hardware Specifications](#hardware-specifications)
  - [Block Diagram](#block-diagram)
  - [Power Board](#power-section)
  - [Audio Codec Configuration](#audio-codec-configuration)
  - [MicroProcessor Configuration (with extern memory: RAM)](#microprocessor-configuration-with-extern-memory-ram)
3. [Installation](#installation)



## 🔧 List of components
- [Link to List of Components](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/List%20of%20Components.md)

For more details on each component, refer to [Hardware Specifications](#hardware-specifications).

## 🛠️ Hardware Specifications


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


**From the SGTL5000 codec to the STM32F446ZCT6 microcontroller via I2S :**

 I2S signals include:
 
- I2S_LRCLK (Left/Right Clock): left or right audio channel.      
- I2S_SCLK (Serial Clock): the serial synchronization clock.      
- I2S_SD (Serial Data): audio data   

Connection from codec to microcontroller :

- I2S_LRCLK from the codec to the I2S_LRCLK pin of the STM      
- I2S_SCLK from codec to STM I2S_SCLK pin      
- I2S_SD from codec to STM I2S_SD pin. 

<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/audio%20codec.png" alt="Codec SGTL5000" width="400" />
</p>

## MicroProcessor Configuration (with extern memory : RAM )

### RAM : 
**From the STM32F446ZCT6 microcontroller to the SGTL5000 codec via I2S for the return of the processed signal:** 

To return the processed audio signal from the microcontroller to the codec, the corresponding I2S signals must also be connected:
- I2S_LRCLK from the STM to the I2S_LRCLK pin of the codec      
- I2S_SCLK from the STM to the I2S_SCLK pin of the codec     
- I2S_SD from the STM to the I2S_SD pin of the codec

**From the STM32F446ZCT6 microcontroller to the RAM :**

<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/ram.png" alt="RAM" width="400" />
</p>

<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/STM32.png" alt="µP" width="400" />
</p>
  
## 💻 Installation
I recommend downloading the latest version of **KiCad** to reproduce the electronic board. For simulating amplifiers, consider using **Cadence Pspice** or **Microcap**. Use the **STCUBEIDE** software for programming the codec and microprocessor.

- **Pspice**: [Download Pspice](https://www.cadence.com/en_US/home/tools/pcb-design-and-analysis/analog-mixed-signal-simulation/pspice.html)
- **KiCad**: [Download KiCad](https://www.kicad.org/)
- **STCUBEIDE**: [Download STCUBEIDE](https://www.st.com/en/development-tools/stm32cubeide.html)
