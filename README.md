# Here you are in the 🛠️ Hardware Section
You will find all specifications and things to understand it.
Enjoy your reading ! (Camille L)💡

## 📖 Table of contents
- [🔧 List of components](#-list-of-components)
- [🛠️ Hardware Specifications](#-hardware-specifications)
  - [Block Diagram](#-block-diagram)
  - [🔋 Power Board](#-power-board)
  - [🎤 A.F.E : Preamplifier Design & A.R.E : Amplifier](#-afe--preamplifier-design-&-are--amplifier)
  - [🎧 Audio Codec Configuration](#-audio-codec-configuration)
  - [💾 MicroProcessor Configuration (with extern memory: RAM)](#-microprocessor-configuration-with-extern-memory-ram)
- [💻 Installation](#-installation)



## 🔧 List of components
- [Link to List of Components](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/List%20of%20Components.md)

For more details on each component, refer to [Hardware Specifications](#hardware-specifications).

## 🛠️ Hardware Specifications
## Block Diagram
<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/BLOCK%20SYSTEM.drawio.png" alt="Block Diagram" width="600" />
</p>
A.F.E = Analog Front End : Preamplifier-Noise attenuation

A.R.E = Analog Rear End : Amplifier-Noise attenuation
## Power Board
<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/Power%20Board%20Schematic.png" alt="Power Board" width="400" />
</p>

##  A.F.E : Preamplifier Design & A.R.E : Amplifier
<p align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Hardware-Section/img/Preampli.png" alt="Preamplifier" width="400" />
</p>

## Audio Codec Configuration
**1. From the SGTL5000 codec to the STM32F446ZCT6 microcontroller via I2S :**

 I2S signals include:
 
- I2S_LRCLK (Left/Right Clock): left or right audio channel.      
- I2S_SCLK (Serial Clock): the serial synchronization clock.      
- I2S_SD (Serial Data): audio data   

Connection from codec to microcontroller :

- I2S_LRCLK from the codec to the I2S_LRCLK pin on the STM      
- I2S_SCLK from codec to STM I2S_SCLK pin      
- I2S_SD from codec to STM I2S_SD pin2. 


**2. From the SGTL5000 codec to the final amplifier :**

Codec analogue audio outputs: LINEOUT_L and LINEOUT_R pins


## MicroProcessor Configuration (with extern memory : RAM )

**From the STM32F446ZCT6 microcontroller to the SGTL5000 codec via I2S for the return of the processed signal:** 

To return the processed audio signal from the microcontroller to the codec, the corresponding I2S signals must also be connected:
- I2S_LRCLK from the STM to the I2S_LRCLK pin on the codec      
- I2S_SCLK from the STM to the I2S_SCLK pin on the codec     
- I2S_SD from the STM to the I2S_SD pin of the codec

## 💻 Installation
I recommend downloading the latest version of **KiCad** to reproduce the electronic board. For simulating amplifiers, consider using **Cadence Pspice** or **Microcap**. Use the **STCUBEIDE** software for programming the codec and microprocessor.

- **Pspice**: [Download Pspice](https://www.cadence.com/en_US/home/tools/pcb-design-and-analysis/analog-mixed-signal-simulation/pspice.html)
- **KiCad**: [Download KiCad](https://www.kicad.org/)
- **STCUBEIDE**: [Download STCUBEIDE](https://www.st.com/en/development-tools/stm32cubeide.html)
