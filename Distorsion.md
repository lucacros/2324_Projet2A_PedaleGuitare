# Distorsion

## 🌐 Definition
Distortion is an audio effect used to create saturated, distorted sounds by overdosing the gain level on a clean sound, causing it to crackle.

<img width="317" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/37382b22-b063-468a-908a-e1f65d279745">


> [!TIP]
> We fix a MaxValue (VCC) to create the distorsion, and we increase the input signal gain with a potentiometer

## 💻 Implementation

First, we find an increase combinaison for the potentiometer : 

```html
// Distorsion Gain
		GainDisto = 1 + 3*Gain;
```
We can observe it in STM32CubeIDE: // a modifier

![Graphe Disto](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/a6a2114c-e499-4bba-b372-0d7809c1e262)


Secondly we can build the Distorsion structure code : 
```html
#include "distorsion.h"

//distorsion effect
void distorsion(int16_t*signal, int signalsize, float gaind){
	float maxsignal = 3500;

	for(int i=0; i < signalsize; i++){

		float tmp = gaind * (float)(signal[i]);

		if(tmp > maxsignal)
			{
				signal[i]= (int16_t)maxsignal;
			}
		else if(tmp <-maxsignal)
			{
				signal[i]=(int16_t)(-maxsignal);
			}

		else
			{
				signal[i]= (int16_t)(tmp);
			}


	}
}
```

The results are in : 

