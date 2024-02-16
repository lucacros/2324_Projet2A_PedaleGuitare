// DELAY

/*
 * delay.h
 *
 *  Created on: Feb 16, 2024
 *      Author: Luca
 */

#ifndef INC_DELAY_H_
#define INC_DELAY_H_



#include <stdint.h>

// Structure du DSP
typedef struct {
    int IOTA0;
    int fSampleRate;
    int iConst1;
    float fRec0[131072];
} mydsp;

// Fonctions du DSP
mydsp* newmydsp();
void deletemydsp(mydsp* dsp);
int getSampleRatemydsp(mydsp* dsp);
int getNumInputsmydsp(mydsp* dsp);
int getNumOutputsmydsp(mydsp* dsp);
void initmydsp(mydsp* dsp, int sample_rate);
void delay(mydsp* dsp, int16_t* signal, int signalsize);


#endif /* INC_DELAY_H_ */
