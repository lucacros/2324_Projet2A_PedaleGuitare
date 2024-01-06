# Journal de bord 📰


## Table of contents

- [Session 1](#session-1)
- [Session 2](#session-2)
- [Session 3](#session-3)
- [Session 4](#session-4)
- [Session 5](#session-5)
- [Session 6](#session-6)
- [Session 7](#session-7)
- [Session 8](#session-8)
- [Session 9](#session-9)
- [Session 10](#session-10)
- [Session 11](#session-11)
- [Session 12](#session-12)




## Session 1
### 19/09

Presentation of 2nd year projects, explanation of grading criteria and expectations.

Allocated budget of €40 per head. Spreadsheet for orders (available soon).

Brainstorming started

I've managed to join the github. (Jolan)

Study of the Supercell module on the RACKV2 software, presented by our mentor Mr. Fiack.

Buffer with 40 read heads (instead of one). With different positions. Each head has a wrapper. The trigg has a density. Pitch at 0 (= delay), pitch at high density (small clicks). Shape changes the shape of the envelope. Density, number of playback heads played.

## Session 2
### 26/09

### Definition of codec (wiki) : 

A codec is a hardware or software device used to encode or decode a digital data stream for transmission or storage. Some codecs also incorporate a data compression or encryption function.
The acronym "codec" comes from "coder-decoder".


Manufacturing steps : 

- Select components (codec + microprocessor)

- Design the PCB in Kikad

- Code the effect in CubeIDE

## Session 3
### 03/10 

We measured the signal sent by a guitar to be able to correctly size a preamp that will send the guitar signal to the codec.
We have to look at existing guitar effect models to find out how to make a programme to code them in C and implement them in the microprocessor.


## Session 4
### 10/10

We gave our first presentation on the progress of our project. 
Several things needed to be reviewed, including the part with the regulators to feed each part of the board correctly. 
M.Papazouglou told us to use Faust, which is a block programming language. This language is designed for signal processing.
https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/main/2324_Projet2A_PedaleGuitare_Présentation_10-10-23.pptx


## Session 5
### 17/10

Design of the pedal's preamplifier on a simulation software. We opted for a non-inverting circuit. 
Start of the design of the codec and microcontroller on Kicad.
Approaching the Faust programming language.


## Session 6
### 24/10

Creating a digital effect in Faust and converting it to a .c file

## Session 7
### 07/11

2nd presentation of our progress. (https://1drv.ms/p/s!AhTm1sjPNY-GgjRiXmJ6r0E80x2i?e=7ZnZlr)
We have to make a lot of changes especially for the component (AOP LM324 has to be replaced by a better one with less distortion).
For the AOP we choose the MCP6002.

Correction of wiring diagram errors : 
- modification of the power supply circuit
-> addition of a switching regulator

- addition of switching regulators
- modification of µP/SGTL5000 wiring:

## Session 8
### 14/11

Codec, ADC, DAC and DMA documentation

## Session 9
### 28/11

Manipulation of the ADC and DAC to recover our audio input and output on stm32cubeIDE. The purpose of this is to prepare for handling the CODEC

## Session 10
### 05/12

Nous avons fait notre 3ème présentation pour présenter l'avancement de notre projet. 
Certaines sont sont à revoir comme la ref d'un régulateur, mettre des JAck de coupure (2 en entrée et 2 en sortie), mettre VDDD à 1,8V. 

## Session 11
### 12/12

Creation of a simple distortion effect to validate codec manipulation

**Distorsion Effect**

<img width="502" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/56dc9778-c453-41e7-9181-0c728028af85">

We've added switched jacks on the input and output sides of the pedal, so we can use 2 mono jacks on the input side and 2 mono jacks on the output side. 
The last errors on the schematic have been resolved and the PCB routing can now begin.


## Session 12
### 19/12

Continued PCB

 - Github update (formatting)


