# Gain

We need to control the Gain wich is a value in [0;1] with a potentiometer.

> [!NOTE]  
> The value read and measured by the potentiometer is an integer in the range [0;4095]. 
>Its value is noted **readValue**.

Therefore, we can code the convertion below : 

**Gain = readValue * 1/4095** 



> [!WARNING]  
> Please note that the implementation of the code requires careful attention to be paid to the types of values. The audio IN/OUT signal is an integer, but the gain will be a float 
