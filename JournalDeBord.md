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
- [Session 13](#session-13)
- [Session 14](#session-14)
- [Session 15](#session-15)
- [Session 16](#session-16)
- [Session 17](#session-17)
- [Session 18](#session-18)
- [Session 19](#session-19)
- [Session 20](#session-20)




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
Start of the design of the codec, RAM and microprocessor on Kicad.
Approaching the Faust programming language.


## Session 6
### 24/10

Continuation of the PCB Design. Check that all pins are connected correctly on the microprocessor.
Creating a digital effect in Faust like reverb or distortion and converting it to a .c file

## Session 7
### 07/11

2nd presentation of our progress. (https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/main/2324_Projet2A_PedaleGuitare_Présentation_07-11-23.pdf)
We have to make a lot of changes especially for the component (AOP LM324 has to be replaced by a better one with less distortion).
For the AOP we choose the MCP6002.

Correction of wiring diagram errors : 
- modification of the power supply circuit
-> addition of a switching regulator

- addition of switching regulators
- modification of µP/SGTL5000 wiring:

## Session 8
### 14/11
Design of the Buffer boton and research for the component. 
Modification of the KiCad schematic according to our teachers intrutions.
Research and documentation on the operation of the Codec, ADC,DAC and DMA so that we can integrate it as effectively as possible into our pedal.


## Session 9
### 28/11

Correction of the errors of the schematic on KiCad to prepare the rooting.
Manipulation of the ADC and DAC to recover our audio input and output on stm32cubeIDE. The purpose of this is to prepare for handling the CODEC.

## Session 10
### 05/12

We made our 3rd presentation to show the progress of our project. 
Some parts need to be revised, such as the reference for a regulator, adding mute jacks (2 at the input and 2 at the output) to be able to warn stereo at the input and output, and adding a VDDD voltage of 1.8V. 
https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/main/2324_Projet2A_PedaleGuitare_Présentation_05-12-23.pdf

## Session 11
### 12/12

Creation of a simple distortion effect to validate codec manipulation

**Distorsion Effect**

<img width="502" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/56dc9778-c453-41e7-9181-0c728028af85">

We've added switched jacks on the input and output sides of the pedal, so we can use 2 mono jacks on the input side and 2 mono jacks on the output side. 
We design some component that are not in the library of KiCad like the footswitch of the buffer.
The last errors on the schematic have been resolved and the PCB routing can now begin.


## Session 12
### 19/12

Continued rooting of the PCB.
We update update the Github to have all our work up to date on the Github.

## Session 13
## 16/01

Meeting to review achievements and objectives for the 2nd semester.
-  Redesign and adjustment of the PCB.
-  Start of the design of the box that will house the PCB.

## Session 14
## 23/01

Improving the design of the box: The drawer system used to close the box wasn't adapted enough. 
So we decided to make the box in two parts that screw together to close the box.

## Session 15
## 30/01

Modelling of the new locking system. 
This system consists of a cover that is fixed to the underside of the pedal using screws.

## Session 16
## 6/02
After a first impression we realised that there were a number of design problems, including the fact that the 2 parts didn't fit together properly. 
So we made a number of adjustments, such as adjusting the position of the holes for the jacks, a hole for the power supply, adjusting the height of the screw supports so that they were perfectly level with the lid and enlarging the surface area of the footswitch to avoid having to press several buttons at the same time with your foot when you wanted to activate the footswitch.

## Session 17
## 27/02

A number of adjustments have been made to the 3D model of the pedal, including enlarging the holes to ensure that the potentiometers and jacks fit properly into the case.

Starting to create a delay effect on Faust. 

## Session 18
## 05/03

We gave a presentation on our progress. 
The box was incorrectly calibrated due to a dimensioning error, which was quickly resolved.

## Session 19
## 12/03
We looked at the different effects we could create to get the maximum effect before the end of the project.
We started the creation of a chorus effect, a reverb effect and an overdrive effect.

## Session 20
## 19/03

We continued to develop the digital effects on the pedal, but encountered several problems. The first was the Faust encoded reverb effect. This effect took up too much space on the microprocessor, which prevented us from testing it and checking that it was working properly. 
We also couldn't create a chorus effect correctly because of problems with buffer management in the C code. In fact, when we tested the effect on a computer, there were cuts in the output audio.

## Session 21
## 26/03

Placement of all 3D prints on the PCB.
Testing the distortion effects.
We couldn't find a solution for the Chorus effect to work properly.
