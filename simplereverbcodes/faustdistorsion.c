/*
 * faustdistorsion.c
 *
 *  Created on: Mar 5, 2024
 *      Author: Luca
 */


/* ------------------------------------------------------------
name: "faustdistorsion", "faustdisto"
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

#include "faustdistorsion.h"


float mydsp_faustpower2_f(float value) {
	return value * value;
}

#ifndef FAUSTCLASS
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__
#define exp10f __exp10f
#define exp10 __exp10
#endif


void faustdistorsion(int16_t* signal, int signalsize, float gaind) {

	for (int i0 = 0; i0 < signalsize; i0 = i0 + 1) {
	        float input = conversion1(signal[i0]);
	/* C99 loop */
	    {		// Value between -1 and 1
			float fTemp0 = fmaxf(-1.0f, fminf(1.0f, 1e+01f *input));
			float fTemp1 = fTemp0 * (1.0f - gaind* mydsp_faustpower2_f(fTemp0));
			signal[i0] = conversion2(fTemp1);
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
