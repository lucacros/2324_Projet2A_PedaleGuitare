//DELAY 

/*
 * delay.c
 *
 *  Created on: Feb 16, 2024
 *      Author: Luca
 */

/* ------------------------------------------------------------
name: "delay"
Code generated with Faust 2.72.4 (https://faust.grame.fr)
Compilation options: -lang c -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif


#ifdef __cplusplus
extern "C" {
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <delay.h>

#ifndef FAUSTCLASS
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__
#define exp10f __exp10f
#define exp10 __exp10
#endif



mydsp* newmydsp() {
	mydsp* dsp = (mydsp*)calloc(1, sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) {
	free(dsp);
}

int getSampleRatemydsp(mydsp* RESTRICT dsp) {
	return dsp->fSampleRate;
}

int getNumInputsmydsp(mydsp* RESTRICT dsp) {
	return 1;
}
int getNumOutputsmydsp(mydsp* RESTRICT dsp) {
	return 1;
}

void classInitmydsp(int sample_rate) {
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
}

void instanceClearmydsp(mydsp* dsp) {
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; l0 < 131072; l0 = l0 + 1) {
			dsp->fRec0[l0] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->iConst1 = (int)(fminf(fConst0, fmaxf(0.0f, 0.5f * fConst0))) + 1;
}
//0.5f temps delay appliqué

void instanceInitmydsp(mydsp* dsp, int sample_rate) {
	instanceConstantsmydsp(dsp, sample_rate);
	instanceResetUserInterfacemydsp(dsp);
	instanceClearmydsp(dsp);
}

//Initialisation dsp

void initmydsp(mydsp* dsp, int sample_rate) {
	classInitmydsp(sample_rate);
	instanceInitmydsp(dsp, sample_rate);
}



void delay(mydsp* dsp,int16_t*signal, int signalsize){
	int i0;
	for (i0 = 0; i0 < signalsize; i0 = i0 + 1) {

		//Conversion signal d'entrée
		FAUSTFLOAT* input0 = (FAUSTFLOAT*)(signal[i0]);

				//Module delay
				dsp->fRec0[dsp->IOTA0 & 131071] = (float)(input0[i0]) + 0.3f * dsp->fRec0[(dsp->IOTA0 - dsp->iConst1) & 131071];
				float fTemp0 = dsp->fRec0[dsp->IOTA0 & 131071];
				input0[i0] = (FAUSTFLOAT)(fTemp0);
				dsp->IOTA0 = dsp->IOTA0 + 1;

		// Reconversion signal d'entrée
		signal[i0]= (int16_t)(input0[i0]);

			}



}

#ifdef __cplusplus
}
#endif

#endif

