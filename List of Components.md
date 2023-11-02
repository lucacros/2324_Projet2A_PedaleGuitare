# List of Components related to blocks
[Return to Hardware Section](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/tree/Hardware-Section)
## 📖 Table of contents

- [1. AFE](#1-afe)
- [2. CODEC](#2-codec)
- [3. Microprocessor](#3-microprocessor)
- [4. ARE](#4-are)


# 1. AFE
- Définition : Analog Front End (AFE - Interface analogique en entrée) : 
  - Préamplificater
  - Égaliser
  - Atténuation du bruit
  - Protection
  
  We use a non-inverting AOP circuit composed of :
    - Resistor of [E12 Series] 
    - Resistor of [E12 Series] 
    - Capacitor of
    - Capacitor of 
    - AOP : **LM324-N** ( https://www.ti.com/product/LM324-N/part-details/LM324M/NOPB )
  
# 2. CODEC

   **STGL5000**
   
   https://www.nxp.com/products/audio-and-radio/audio-converters/ultra-low-power-audio-codec:SGTL5000

# 3. Microprocessor

**Microprocessor select**
  - **Family Classment :**
    - **STM32F4xx**: sont puissants et polyvalents. Ils offrent une grande capacité de traitement et de mémoire, ce qui peut être utile pour implémenter des effets audio complexes
    - **STM32F7xx**: sont encore plus puissants que les STM32F4xx, ce qui peut être utile pour traiter des signaux audio de haute qualité ou d'ajouter des fonctionnalités avancées.



  - **Final choice :**
  - STM32F446ZCT6
https://www.mouser.fr/ProductDetail/STMicroelectronics/STM32F446ZCT6?qs=Ok1pvOkw6%2FqnUvQfUEqaFA%3D%3D

# 4. ARE
- Définition : Analog Rear End (AFE - Interface analogique en sortie) : 
  - CNA
  - Atténuation du niveau
  - Égalisation finale
  - Sortie Casque/Jack/etc...
