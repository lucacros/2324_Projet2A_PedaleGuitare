## 🔊 A Simple Reverb

Hi, let's continue and analyse the first Faust code

[FaustIDE](https://faustide.grame.fr/) is fantastic ✨ because it generates a code diagrams.

**Code reminder**
```html
import("stdfaust.lib");
process = 
    dm.zita_light; // Stereo reverb from Faust standard library
```
**Code diagrams**

Before the specific aspects,  this is the whole diagram :

<img width="637" alt="diagram" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/f4910fdd-5647-4f7e-8404-21f34b6d2786">

**Reverb model with delay, distribution, feedback delay networks (FDN)...** : 

<img width="641" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/d0c3cb3f-b5e9-465b-be31-516d75777290">

FDN view : 
<img width="641" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/647dc024-af1a-4587-bee3-fd1c2407a1d8">

Feedback mix matrix, get display signals and mix therm together :

<img width="646" alt="Capture d'écran 2023-11-07 173308" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/0fc0e7ab-9ae4-47a2-90bb-966844cdca42">


**Mix control (dry_wet)** :

<img width="372" alt="dry_wet" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/a228fe42-f72d-46a9-a907-0629d764482b">

Wet : 

<img width="422" alt="wet" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/7f5bf9f8-edd6-462e-8a1d-673b86afca1f">

Dry :

<img width="399" alt="dry" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/3f6a32c5-ba34-4773-a591-45aac52d46c1">

Drywet, gain slider

<img width="622" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/2c645e24-7dae-405b-828c-cd662e49edfc">




**Output level** : 

<img width="437" alt="output" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/9fe56ddb-6a4c-4e6d-9f67-fb3f41533605">

Gain level control (Swiper) :

<img width="621" alt="gain" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/283ac844-e8f1-4c09-acff-085bea8ccd6e">
