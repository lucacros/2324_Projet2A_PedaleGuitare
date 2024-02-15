# ADC-DAC

Manipulating the DAC and ADC will enable us to add audio effects later.

<img width="659" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/fedfcf61-5c2e-426b-ac62-0f70206f1bec">

First, we focus on converting input to output

<img width="457" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/44b8b10d-465e-4617-ba94-ae1a92616239">

To Capture the AudioStream, we need to capture and store a lot more data than in a short amount of time.

To don't bog down the CPU, we use another peripheric : **The DMA**, to moove directly from the ADC to the Memory Buffer.

<img width="409" alt="CPUmanager" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/1380e625-ba8c-4a52-a5c6-a04985e5760c">
<img width="402" alt="DMA" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/9df79011-302f-4634-b7d7-f35a8c30be52">

The DMA is working as a large pipe that funnels data from one peripheral to the other while the CPU goes off and does other things.


We start coding on STM32CubeIDE.

Since the DAC is 32-bit coded (4096 values), we want to display a signal that rises to 4095 and then falls back to 0.

First, let's display the DAC on the oscilloscop and then we will deduce how display the ADC.

We therefore associate the DMA with our DAC, which we'll trigger with a timer by applying a loop.
Take care to set the appropriate frequency on the clock tree.

> [!TIP]
> Sampling rate for professional audio is 48kHz

<img width="541" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/7ab66be9-a6d3-425d-906e-730b523a1bcd">
<img width="668" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/58be1265-7466-49a7-ac96-882d998a413a">

> [!NOTE]  
> All the code is available in the final stm32CubeIDE file.

Then, for the ADC, we set up interrupts by copying the input signal to a buffer and then back to the output signal.

<img width="498" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/96b8db2e-7410-4cd2-b0d3-6ea7d48ae95a">

> [!CAUTION]
> ADC operates between 0 and 3,3V. The oscilloscope therefore sends a 1Volt sinusoid of amplitude

<img width="211" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/4ad34905-9d5b-42db-9373-4642979361b9">

<img width="405" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/7c6b4648-14e0-4753-a974-f8804a8e4f48">

The end result is therefore good, but it is clear that for audio, the output signal is not precise. 

**That's why we're going to use an audio CODEC**
