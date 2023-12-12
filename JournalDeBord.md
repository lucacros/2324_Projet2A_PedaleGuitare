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

# Jolan's Work



## 19/09

Presentation of 2nd year projects, explanation of grading criteria and expectations.

Allocated budget of €40 per head. Spreadsheet for orders (available soon).

Brainstorming started

I've managed to join the github. (Jolan)

Study of the Supercell module on the RACKV2 software, presented by our mentor Mr. Fiack.

Buffer with 40 read heads (instead of one). With different positions. Each head has a wrapper. The trigg has a density. Pitch at 0 (= delay), pitch at high density (small clicks). Shape changes the shape of the envelope. Density, number of playback heads played.


## 26/09

### Definition of codec (wiki) : 

A codec is a hardware or software device used to encode or decode a digital data stream for transmission or storage. Some codecs also incorporate a data compression or encryption function.
The acronym "codec" comes from "coder-decoder".


Manufacturing steps : 

- Select components (codec + microprocessor)

- Design the PCB in Kikad

- Code the effect in CubeIDE

## 03/10 

Test VSC synchronization with github.

## 07/11/2023
2nd presentation of our progress. (https://1drv.ms/p/s!AhTm1sjPNY-GgjRiXmJ6r0E80x2i?e=7ZnZlr)
We have to make a lot of changes especially for the component (AOP LM324 has to be replaced by a better one with less distortion).
For the AOP we choose the MCP6002.
I begin test the preamp schematic on LTspice.

## 14/11/2023
I finally found the right component for the preamplifier. 
I connected the jack plug to the Kicad.
I was looking for a footswitch to control the buffer. But it was hard to find, because there are a lot of footswitches on Thomann, but there is no datasheet or foodprint.


# Camille's Work

## 07/11/2023
Finalization of the electric schematic
Beginning of router
## 07/11/2023
2nd presentation of our progress. (https://1drv.ms/p/s!AhTm1sjPNY-GgjRiXmJ6r0E80x2i?e=7ZnZlr)
We have to make a lot of changes especially for the component (AOP LM324 has to be replaced by a better one with less distortion).
For the AOP we choose the MCP6002.

Correction des erreurs du schéma électrique : 
- modification du circuit d'alimentation
-> ajout d'un régulateur de découpage

- ajouts de condesateurs de découpage
- modification du cablage µP/SGTL5000:
  
  -> SYS_MCLK

  ->

## 19/09

Presentation of 2nd year projects, explanation of grading criteria and expectations.

Allocated budget of €40 per head. Spreadsheet for orders (available soon)

Brainstorming started

I've managed to join the github. (Jolan)

Study of the Supercell module on the RACKV2 software, presented by our mentor Mr. Fiack.

Buffer with 40 read heads (instead of one). With different positions. Each head has a wrapper. The trigg has a density. Pitch at 0 (= delay), pitch at high density (small clicks). Shape changes the shape of the envelope. Density, number of playback heads played.


## 26/09

### Definition of codec (wiki) : 

A codec is a hardware or software device used to encode or decode a digital data stream for transmission or storage. Some codecs also incorporate a data compression or encryption function.
The acronym "codec" comes from "coder-decoder".


Manufacturing steps : 

- Select components (codec + microprocessor)

- Design the PCB in Kikad

- Code the effect in CubeIDE

# Luca's Work

## 14/11/23

## 7/11/23

## 24/10/23

## 17/10/23

## 10/10/23

## 03/23

## 26/09

# Session 1 
## 19/09

Presentation of 2nd year projects, explanation of grading criteria and expectations.

Allocated budget of €40 per head. Spreadsheet for orders (available soon)

Brainstorming started

Study of the Supercell module on the RACKV2 software, presented by our mentor Mr. Fiack.

Buffer with 40 read heads (instead of one). With different positions. Each head has a wrapper. The trigg has a density. Pitch at 0 (= delay), pitch at high density (small clicks). Shape changes the shape of the envelope. Density, number of playback heads played.


# Session 2
## 26/09

We started to research which components we were going to use. 
We defined the characteristics that the microprocessor of our pedal should have and we chose a microprocessor from the STM32 F4 range.
To be able to store the audio content we wanted as well as possible, we chose to use RAM connected to the microprocessor.

### Definition of codec (wiki) : 

A codec is a hardware or software device used to encode or decode a digital data stream for transmission or storage. Some codecs also incorporate a data compression or encryption function.
The acronym "codec" comes from "coder-decoder".


Manufacturing steps : 

- Select components (codec + microprocessor)

- Design the PCB in Kikad

- Code the effect in CubeIDE


# Session 3
## 3/10

Nous avons fait des mesires sur le signal qu'envoie une guitare pour pouvoir dimenssioné correctement un préampli qui envera le signal de la guitare dans le codec.
Nous avons à chercher des modèle d'effet de guitare existant pour savoir comment faire un programme pour les coder en C et les implémenter dans le microprocesseur.
# Session 4
## 10/10

# Session 5
## 17/10

# Session 6
## 24/10

# Session 7
## 07/11

2nd presentation of our progress. (https://1drv.ms/p/s!AhTm1sjPNY-GgjRiXmJ6r0E80x2i?e=7ZnZlr)
We have to make a lot of changes especially for the component (AOP LM324 has to be replaced by a better one with less distortion).
For the AOP we choose the MCP6002.

Correction des erreurs du schéma électrique : 
- modification du circuit d'alimentation
-> ajout d'un régulateur de découpage

- ajouts de condesateurs de découpage
- modification du cablage µP/SGTL5000:

# Session 8
## 14/11

# Session 9
## 28/11

# Session 10
## 05/12

Nous avons fait notre 3ème présentation pour présenter l'avancement de notre projet. 
Certaines sont sont à revoir comme la ref d'un régulateur, mettre des JAck de coupure (2 en entrée et 2 en sortie), mettre VDDD à 1,8V. 

# Session 11
## 12/12
