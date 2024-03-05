# Conversion

This is the Value interval of your input signal : 

![sound](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/f6d67b41-6832-4015-85bd-be04c46b76ad)

We want to put it in a +-1 Interval, let's code this fonction : 

```html
#include "conversion.h"

float conversion1(int16_t value) {

    return (((float)value - (-20000.0f)) / (20000.0f - (-20000.0f))) * (1.0f - (-1.0f)) + (-1.0f);

}
```
This is the final result : 
![soundv2](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/0f1dc684-2581-4a16-b4a8-5de2edadffb0)

To reconvert it : 
```html
int16_t conversion2(float value) {
		float tmp = ((value - (-1.0f)) / (1.0f - (-1.0f))) * (20000.0f - (-20000.0f)) + (-20000.0f);
    return ((int16_t)tmp);

}
```
