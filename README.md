# Software-Section 💻 
The software is a lung of our pedal concept because of its numerical aspect. In fact, in the forest of musical effects, we decide to implement Numeric **Audio Effects** : 

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

We describe the **B10K potentiometer utilisation**  : [Potentiometer Utilisation](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/Potentiometer.md)

> [!IMPORTANT]  
> We use 10 potentiometers in our pedal

### 🔊 Volume Potentiometer

The first parameter to control before moving on to the effects is the OUTPUT VOLUME of our pedal. 

Here's how it's implemented: [Volume Notice](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/Gain.md)

### 🤖 The First Effect : A Simple Distorsion

To write this first effect in C, we chose to implement a distortion. 

Based on the definition of a Max value and a clipping (see [Distortion Notice](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/Distorsion.md)) in relation to it, we can add this first effect to our work! ✅



### 🔊 A Simple Reverb
#### 🔊 Faust
How do you code in Faust? Go to https://faustide.grame.fr/

Then enter the following lines and run
```html
import("stdfaust.lib");
process = 
    dm.zita_light; // Stereo reverb from Faust standard library
```
**DSP view (FaustIDE) :**
<div align="center">
  <img src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/img/simplereverb.png" alt="DSP view" width="200" />
</div>

Reverb is controlled by the Dry/Wet Mix ( Dry/Wet Mix=-1 → [Large Reverb](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/audios/simplereverbOFF.wav) ; Dry/Wet Mix=+1 → [Small Reverb](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/audios/simplereverbOFF.wav))

**How is it work with 3 lines 😱 ?** Go read this [file](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/Simplereverb.md)😎👌

Then, click on this button to export the project in c  : 

<img width="66" alt="button" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/c4fad7d0-e04a-4c66-b4e1-c8aec9572571">

And compile to specific plateform binary code (Plateform : source ; Architecture : c )

**Download**🎁 → [simplereverb.c](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/simplereverbcodes/simplereverb)

#### 🖥️ C

We start coding on STM32CubeIDE

To Capture the AudioStream, we need to capture and store a lot more data than in a short amount of time.

To don't bog down the CPU, we use another peripheric : **The DMA**, to moove directly from the ADC to the Memory Buffer.

<img width="409" alt="CPUmanager" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/1380e625-ba8c-4a52-a5c6-a04985e5760c">
<img width="402" alt="DMA" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/9df79011-302f-4634-b7d7-f35a8c30be52">

The DMA is working as a large pipe that funnels data from one peripheral to the other while the CPU goes off and does other things.

First, let's display the DAC on the oscilloscop and then we will deduce how display the ADC.



In our microcontroller and in our audio codec we have special functions available in the STM32 HAL library.

The SAI module (We use SAI2 "SAI A and SAI B" is used to control the audio sources. There are callback functions to copy received data or to stop the DMA ( SAI A : transmission and SAI B : reception).

<img width="327" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/c26be457-fb9c-453b-bc39-43dbe6c6f6b9">
<img width="329" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/4ae6f742-591e-4e41-876a-2ac6f6eacfff">


We can test an effect implementation with a simple distorsion : 
```html
// Distorsion effect
void distorsion(int16_t*signal, int signalsize, float maxsignal){
	for(int i=0; i < signalsize; i++){
		if(signal[i] > maxsignal){
			signal[i]=  (int16_t)maxsignal;
		}
		else if(signal[i]<-maxsignal){
			signal[i]=(int16_t)(-maxsignal);
		}
	}
}
```

The results are in : 

<img width="300" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/538e50aa-74e2-4b49-bd4c-2dba29090cdc">
<img width="300" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/74f90d1e-d500-4b83-a24d-0c070a9a9551)">
<img width="300" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/4e80f478-df2b-446e-9a38-3eac13ed518b">


