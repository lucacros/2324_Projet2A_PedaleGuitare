# Gain

We need to control the Gain wich is a float value in [0;1] with a potentiometer.

> [!NOTE]  
> The value read and measured by the potentiometer is an integer in the range [0;4095]. 
>Its value is noted **readValue**.

Therefore, we can code the convertion below : 

**Gain = readValue * 1/4095** 

> [!WARNING]  
> Please note that the implementation of the code requires careful attention to be paid to the types of values. The audio IN/OUT signal is an integer, but the gain will be a float

```html
// Gain conversion

		Gain = ((float)(readValue))/(4095.0f);
```

Then all we have to do is implement a program which applies the multiplication between the input signal and the gain to the output signal before 

```html
void gain(int16_t*signal, int signalsize, float gain){
	for(int i=0; i < signalsize; i++){
		float tmp = gain * (float)(signal[i]); 
		signal[i]= (int16_t)(tmp);
	}
}
```


