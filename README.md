# Software-Section 💻 
The software is a lung of our pedal concept because of its numerical aspect. In fact, in the forest of musical effects, we decide to implement two Numeric **Audio Effects** : 

<img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/img/Musiceffecttree.png" alt="Music Effect Tree" width="1000" />
Music Effect Tree (dafx-digitalaudioeffects2ndedition page15)


- Audio Effect → Space → Localization → distance → **Reverberation**
- Audio Effect → Space → Room → Echo → **Granular Delay**


## 📖 Table of contents
- [🛠 Musical Effects](#-musical-effects)
  - 🎶 Reverberation
  - 🎛️ Granular Delay
- [🔧 Which programming language ? ](#-which-programming-language-?)
  - 🔊 FAUST
- [💻  Implementation](#-implementation)

## 🛠 Musical Effects

Explaining how we built our effects, understanding the physics of signal modulation, modifications.

### 🎶 Reverberation

**What do we want from a Reverb ?** 

An effect that creates a sense of space by producing a diffuse, long-lasting sound from a short input.

"Reverberation consists of reflections that are delayed and attenuated copies of the direct sound. The frequency content of each reflection is also modified by the directivity of the sound source and by the material absorption of reflecting surfaces". (dafx/Basics of Room Acoustics/page 164)

"The most faithful reverberation method would be to convolve the input signal with such a response" (dafx/Convolution with room impulse responses/164).

The simulation of the long-term effects of sound propagation in enclosures is also the most important work in the field of artificial reverberation. 


→ We search for the input signal to create : 
- a convolution
- a feedback delay loop (delay lines connected in a feedback loop by a matrix)



### 🎛️ Granular Delay


## 🔧 Which programming language ?

After trying to code an IN/OUT audio in C/C++ with the "portaudio" library, I was pushed by my professor on the Faust language way... 
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


### 🔊 A Simple Reverb

How do you code in Faust? Go to https://faustide.grame.fr/

Then enter the following lines and run
```html
import("stdfaust.lib");
process = 
    dm.zita_light; // stereo reverb
```




