# List of Components related to blocks

### 📖 Table of contents

- [1. AFE](#1-afe)
- [2. CODEC](#2-codec)
- [3. Microprocessor](#3-microprocessor)
- [4. ARE](#4-are)


# 1. AFE
- Définition : Analog Front End (AFE - Interface analogique en entrée) : 
  - Préamplification
  - Égalisation
  - Atténuation du bruit
  - Protection
  
# 2. CODEC

- **Choix FINAL :**

    - **STGL5000**

    lien  :**https://www.nxp.com/products/audio-and-radio/audio-converters/ultra-low-power-audio-codec:SGTL5000**

# 3. Microprocessor

**Choix du microprocesseur**
  - **1. Classement par famille:**
    - **STM32F4xx**: sont puissants et polyvalents. Ils offrent une grande capacité de traitement et de mémoire, ce qui peut être utile pour implémenter des effets audio complexes
    - **STM32F7xx**: sont encore plus puissants que les STM32F4xx, ce qui peut être utile pour traiter des signaux audio de haute qualité ou d'ajouter des fonctionnalités avancées.

  - La série la plus interessante est la série F7 , en voici **quelques exemples**:
    
    - **STM32F767**: Le STM32F767 est un modèle encore plus puissant avec un processeur Cortex-M7 cadencé à 216 MHz, 2 Mo de mémoire flash et 512 Ko de RAM. Performances exceptionnelles pour des effets audio avancés.
    - **STM32F769**: Le STM32F769 est similaire au STM32F767, mais il offre plus de mémoire flash (2 Mo) et de RAM (512 Ko). Utile pour ajouter des fonctionnalités supplémentaires à notre pédale d'effets.

  - **Choix FINAL :**

    - **STM32F769BIT6**
    lien du composant sur farnell :**https://fr.farnell.com/stmicroelectronics/stm32f769bit6/mcu-32-bits-cortex-m7-216mhz-lqfp/dp/2535501?MER=sy-me-pd-mi-acce**

# 4. ARE
- Définition : Analog Rear End (AFE - Interface analogique en sortie) : 
  - CNA
  - Atténuation du niveau
  - Égalisation finale
  - Sortie Casque/Jack/etc...
