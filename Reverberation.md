# Reverberation

**What do we want from a Reverb ?** 

An effect that creates a sense of space by producing a diffuse, long-lasting sound from a short input.

"Reverberation consists of reflections that are delayed and attenuated copies of the direct sound. The frequency content of each reflection is also modified by the directivity of the sound source and by the material absorption of reflecting surfaces". (dafx/Basics of Room Acoustics/page 164)

"The most faithful reverberation method would be to convolve the input signal with such a response" (dafx/Convolution with room impulse responses/164).

The simulation of the long-term effects of sound propagation in enclosures is also the most important work in the field of artificial reverberation. 


→ We search for the input signal to create : 
- a convolution
- a feedback delay loop (delay lines connected in a feedback loop by a matrix)

#### 🔊 A Simple Reverb
##### 🔊 Faust
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

And compile to specific plateform binary code (Plateform : source ; Architecture : cpp )

**Download**🎁 → [simplereverb.cpp](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/blob/Software-Section/simplereverbcodes/simplereverb)
