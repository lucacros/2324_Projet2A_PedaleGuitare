## Potentiometer

To control certain values manually, we add potentiometers to our pedals.

<img width="421" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/3ec18678-1fd0-4ac5-968e-900003f7dcac">

We connect pins PA1 / +3,3V  / GND

<img width="598" alt="image" src="https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/b9f3b522-bf09-40d0-a4cd-f8279f9bf2fd">

I select the free pin PA1 which I configure as ADC input with a continuous conversion mode "Enabled".

After that, we can generate code and write few ligns to get the "readValue" of the potentiometer. 

```html
/* USER CODE BEGIN PV */
uint16_t readValue;
/* USER CODE END PV */

while (1){
		HAL_ADC_Start(&hadc1);
		HAL_ADC_PollForConversion(&hadc1,1000);
		readValue = HAL_ADC_GetValue(&hadc1);
		HAL_ADC_Stop(&hadc1);
		HAL_Delay(1000); // 1 sec Delay
  }
```

Debug and open the SWV Data Trace Timeline Graph window to see in real time the value in "readValue"

![graphe](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/ba611ae1-937d-473d-a57a-efa79942d2eb)

For more precision we can fix : HAL_Delay(100) to wait 0,1s beetween each readValue.

![capture2](https://github.com/lucacros/2324_Projet2A_PedaleGuitare/assets/136320490/fb054501-248a-4ec2-9b36-ecfadf3eca1b)



We can see that readValue is in [0;4095]

>[!TIP]
> Now, we can use POtentiometers to control our effect values !!

