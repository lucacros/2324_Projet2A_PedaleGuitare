Modélisation du systeme par blocs

# 1. AFE
- Définition :
  
# 2. CODEC

# 3. Microprocesseur

**Choix du microprocesseur**
  - **1. Classement par famille:**
    - **STM32F4xx**: Les microcontrôleurs de la série STM32F4xx, tels que le STM32F407, sont puissants et polyvalents. Ils offrent une grande capacité de traitement et de mémoire, ce qui peut être utile si vous envisagez d'implémenter des effets audio complexes.
     
    - **STM32F3xx**: Les microcontrôleurs de la série STM32F3xx, comme le STM32F303, sont plus abordables et conviennent bien aux projets de taille moyenne. Ils offrent également des fonctionnalités audio intégrées qui peuvent simplifier la gestion des signaux audio.
    - **STM32F7xx**: Les microcontrôleurs de la série STM32F7xx, comme le STM32F746, sont encore plus puissants que les STM32F4xx, ce qui peut être utile si vous avez besoin de traiter des signaux audio de haute qualité ou d'ajouter des fonctionnalités avancées.
    - **STM32H7xx**: Si vous avez besoin de performances audio exceptionnelles, les microcontrôleurs de la série STM32H7xx, tels que le STM32H743, sont une option à considérer. Ils offrent une grande puissance de traitement et une qualité audio exceptionnelle.
    - **STM32L4xx**: Si la consommation d'énergie est un facteur critique pour votre pédale d'effets, les microcontrôleurs de la série STM32L4xx, comme le STM32L432, sont conçus pour une faible consommation d'énergie tout en offrant des performances décentes.
    - **STM32G4xx**: Les microcontrôleurs de la série STM32G4xx sont conçus pour des applications temps réel à faible latence, ce qui peut être important pour une pédale d'effets en temps réel.

  - La série la plus interessante est la série F7 , en voici **quelques exemples**:

    - **STM32F767**: Le STM32F767 est un modèle encore plus puissant avec un processeur Cortex-M7 cadencé à 216 MHz, 2 Mo de mémoire flash et 512 Ko de RAM. Si vous avez besoin de performances exceptionnelles pour des effets audio avancés, cela pourrait être un excellent choix.

    - **STM32F769**: Le STM32F769 est similaire au STM32F767, mais il offre encore plus de mémoire flash (2 Mo) et de RAM (512 Ko). Cela peut être utile si vous prévoyez d'ajouter des fonctionnalités supplémentaires à votre pédale d'effets.

    - **STM32H7xx**: Bien que techniquement appartenant à la série STM32H7xx, le STM32H743 offre des performances exceptionnelles avec un processeur Cortex-M7 cadencé à 400 MHz, 2 Mo de mémoire flash et 1 Mo de RAM. Cela pourrait être un excellent choix si vous avez besoin de la puissance de traitement la plus élevée possible pour des effets audio de haute qualité.


  - **Choix FINAL :**

    - **STM32F769BIT6**
    lien du composant sur farnell :**https://fr.farnell.com/stmicroelectronics/stm32f769bit6/mcu-32-bits-cortex-m7-216mhz-lqfp/dp/2535501?MER=sy-me-pd-mi-acce**

# ARE
