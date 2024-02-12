# Distorsion

## 🌐 Definition
Distortion is an audio effect used to create saturated, distorted sounds by overdosing the gain level on a clean sound, causing it to crackle.

<img width="317" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/37382b22-b063-468a-908a-e1f65d279745">


> [!TIP]
> We fix a MaxValue (VCC) to create the distorsion, and we increase the input signal gain with a potentiometer

## 💻 Implementation

First, we find an increase combinaison for the potentiometer : 

```html

```

Secondly we can build the Distorsion structure code : 
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
