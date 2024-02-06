# Volume

We need to control the Volume wich is a float value in [0;1] with a potentiometer.

> [!NOTE]  
> The value read and measured by the potentiometer is an integer in the range [0;4095]. 
>Its value is noted **readValue**.

Therefore, we can code the convertion below : 

**Volume = readValue * 1/4095** 

> [!WARNING]  
> Please note that the implementation of the code requires careful attention to be paid to the types of values. The audio IN/OUT signal is an integer, but the gain will be a float

```html
// Potentiometer conversion (Gain)

		Gain = ((float)(readValue))/(4095.0f);
```

Then all we have to do is implement a program which applies the multiplication between the input signal and the volume to the output signal before 

```html
void volume(int16_t*signal, int signalsize, float gain){
	for(int i=0; i < signalsize; i++){
		float tmp = gain * (float)(signal[i]); 
		signal[i]= (int16_t)(tmp);
	}
}
```
You can see the final result with the SWV Data Trace Timeline Graph on STM32 in debug mode !

![capture 3](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/56c4027d-69ff-4520-8e3f-91fa51c4cc8b)



