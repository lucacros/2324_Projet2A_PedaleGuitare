# Software-Section 💻 
Software is a lung of our pedal conception because of it Numeric aspect. In Fact, in the musical effect forest we decide to implement two Numeric **Audio Effects** : 

<img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/img/Musiceffecttree.png" alt="Music Effect Tree" width="1000" />
Music Effect Tree (dafx-digitalaudioeffects2ndedition page15)


- Audio Effect → Space → Localization → distance → **Reverberation**
- Audio Effect → Space → Room → Echo → **Granular Delay**


## 📖 Table of contents
- [🛠 Musical Effects](#-musical-effects)
  - 🎶 Reverberation
  - 🎛️ Granular Delay
- [🔧 Which IDE ? ](#-which-ide-?)
  - 🔊 FAUST
  - 🍋 JUCE
- [💻  Implementation](#-implementation)

## 🛠 Musical Effects

Explaining how we built our effects, understanding physics of signal modulations, modifications.

### 🎶 Reverberation

**What do we want from a Reverb ?** 

An effect which creates a sense of space, by generating a diffuse longer-lasting sound from a short-input.

“Reverberation is composed of reflections which are delayed and attenuated copies of the direct sound. The frequency content of each reflection is also modified due to the directivity of the sound source and due to the material absorption of reflecting surfaces.” (dafx/Basics of room acoustics/page 164)

“the most faithful reverberation method would be to convolve the input signal with such a response” (dafx/Convolution with room impulse responses/164)

Also, simulating the long-term effects of sound propagation in enclosures is the most important work in the field of artificial reverberation. 


→ We search to create for the input signal : 
- a Convolution
- a Feedback delay loop (delay lines interconnected in a feedback loop by means of a matrix)


### 🎛️ Granular Delay


## 🔧 Which IDE ?

After trying to code an IN/OUT audio in C++ with the library "portaudio", I was pushed on the Audio IDE way by my professor... 
Create or reuse the effects already existing ? We will see

### 🔊 FAUST

All the sources provide from https://faust.grame.fr/

**What is Faust?**

“Faust (Functional Audio Stream) is a functional programming language for sound synthesis and audio processing with a strong focus on the design of synthesizers, musical instruments, audio effects, etc. created at the GRAME-CNCM Research Department.”

This online IDE allows me to explore and implement some musical effects that will match with our project. 




### 🍋 JUCE 

## 💻  Implementation

To implemente an effect, I will follow these three steps : 

- Effect Conception
- User interface
- Tests and adjustments

<!-- 

import("stdfaust.lib");
process = 
    dm.zita_light; // stereo reverb
    
  -->


