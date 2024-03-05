# Software-Section 💻 
The software is a lung of our pedal concept because of its numerical aspect. In fact, in the forest of musical effects, we decide to implement Numeric **Audio Effects** : 

<img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/img/Musiceffecttree.png" alt="Music Effect Tree" width="750" />
Music Effect Tree (dafx-digitalaudioeffects2ndedition page15)


- Audio Effect → Space → Localization → distance → **Reverberation**
- Audio Effect → Space → Room → Echo → **Granular Delay**


# 📖 Table of contents
- [🛠 Get audio Output/Input](#-get-audio-output/input)
  - ADC/DAC
  - CODEC
- [🔧 Which programming language ? ](#-which-programming-language-?)
  - 🔊 FAUST
- [💻  Implementation](#-implementation)
  - 🕡 Control of the Parameters
  - 🔊 Volume Potentiometer
  - 🤖 The First Effect : A Simple Distorsion
  - 🎶 Reverberation
  - 🎛️ Granular Delay
    
# 🛠 Get audio Output/Input

## ADC/DAC

Before applying an effect, we first need to recover our audio input and reset it to audio output. Here's the diagram:

<img width="650" src ="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/8dfb041b-aab6-437d-8f97-3a108bdba43d" />

For more details (read this file : [adc-dac Notice](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/adc-dac.md))

As the final result is not perfect, which is problematic for an audio input/output, we will use the same principle with an Audio CODEC (which contains the ADC/DAC).

## CODEC

<img width="587" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/69e50238-9cb8-4588-8ad5-2f18db25f20b">

With the previous work, we obtain the following result (sinusoidal input): 


## 🔧 Which programming language ?

Trying to code an IN/OUT audio in C/C++ seems difficult for a complex effect, I was pushed by my professor on the Faust language way... 
Create or reuse the existing effects? We will see

### 🔊 FAUST

All the sources provide from https://faust.grame.fr/

**What is Faust?**

“Faust (Functional Audio Stream) is a functional programming language for sound synthesis and audio processing with a strong focus on the design of synthesizers, musical instruments, audio effects, etc. created at the GRAME-CNCM Research Department.”

This programming language allows me to explore and implement some musical effects that will suit our project. 


## 💻  Implementation

To implement an effect, I will follow these three steps: 

- Conception of the effect
- User interface
- Tests and adjustments

### 🕡 Control of the Parameters 
First of all, let's take control of the parameters to be modified using a potentiometer.

<div>
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/5295c00e-992b-41df-aa7a-80b61a0b555f" alt="Potentiometer" width="200" />
</div>

We describe the **B10K potentiometer utilisation**  : [Potentiometer Notice](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/Potentiometer.md)

> [!IMPORTANT]  
> We use 10 potentiometers in our pedal

### 🔊 Volume Potentiometer

The first parameter to control before moving on to the effects is the OUTPUT VOLUME of our pedal. 

Here's how it's implemented: [Volume Notice](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/Gain.md)



### 🤖 The First Effect : A Simple Distorsion

To write this first effect in C, we chose to implement a distortion. 

Based on the definition of a Max value and a clipping (see [Distortion Notice](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/Distorsion.md)) in relation to it, we can add this first effect to our work! ✅

### ✅ An Important Conversion 

Before working with Faust, you need to convert your input signal (whose values are beetween -+20000) to a signal in +-1 Values. And after that reconvert it !

### 🎶 Reverberation

Reverberation is a complex effect that requires the use of the Faust language.

To understand its particularity and its realization I invite you to read the following file: [Reverberation Notice](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/Reverberation.md)



### 🎛️ Granular Delay





