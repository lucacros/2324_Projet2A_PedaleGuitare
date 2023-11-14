/* ------------------------------------------------------------
name: "simplereverb"
Code generated with Faust 2.69.3 (https://faust.grame.fr)
Compilation options: -lang c -ct 1 -es 1 -mcd 16 -single -ftz 0
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

static float mydsp_faustpower2_f(float value) {
	return value * value;
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

typedef struct {
	int fSampleRate;
	float fConst2;
	float fConst3;
	float fConst5;
	float fConst6;
	float fConst16;
	float fConst18;
	float fConst19;
	float fRec13[2];
	float fConst20;
	float fConst21;
	float fRec12[2];
	int IOTA0;
	float fVec0[16384];
	int iConst23;
	float fVec1[16384];
	int iConst24;
	float fVec2[4096];
	int iConst25;
	float fRec10[2];
	float fConst34;
	float fRec17[2];
	float fConst35;
	float fConst36;
	float fRec16[2];
	float fVec3[16384];
	int iConst38;
	float fVec4[2048];
	int iConst39;
	float fRec14[2];
	float fConst48;
	float fRec21[2];
	float fConst49;
	float fConst50;
	float fRec20[2];
	float fVec5[16384];
	int iConst52;
	float fVec6[4096];
	int iConst53;
	float fRec18[2];
	float fConst62;
	float fRec25[2];
	float fConst63;
	float fConst64;
	float fRec24[2];
	float fVec7[16384];
	int iConst66;
	float fVec8[2048];
	int iConst67;
	float fRec22[2];
	float fConst76;
	float fRec29[2];
	float fConst77;
	float fConst78;
	float fRec28[2];
	float fVec9[32768];
	int iConst80;
	float fVec10[16384];
	float fVec11[4096];
	int iConst81;
	float fRec26[2];
	float fConst90;
	float fRec33[2];
	float fConst91;
	float fConst92;
	float fRec32[2];
	float fVec12[16384];
	int iConst94;
	float fVec13[4096];
	int iConst95;
	float fRec30[2];
	float fConst104;
	float fRec37[2];
	float fConst105;
	float fConst106;
	float fRec36[2];
	float fVec14[32768];
	int iConst108;
	float fVec15[4096];
	int iConst109;
	float fRec34[2];
	float fConst118;
	float fRec41[2];
	float fConst119;
	float fConst120;
	float fRec40[2];
	float fVec16[32768];
	int iConst122;
	float fVec17[2048];
	int iConst123;
	float fRec38[2];
	float fRec2[3];
	float fRec3[3];
	float fRec4[3];
	float fRec5[3];
	float fRec6[3];
	float fRec7[3];
	float fRec8[3];
	float fRec9[3];
	float fRec1[3];
	float fRec0[3];
	float fConst124;
	float fConst125;
	float fConst126;
	float fConst127;
	FAUSTFLOAT fVslider0;
	float fRec42[2];
	FAUSTFLOAT fVslider1;
	float fRec43[2];
	float fRec45[3];
	float fRec44[3];
} mydsp;

mydsp* newmydsp() { 
	mydsp* dsp = (mydsp*)calloc(1, sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) { 
	free(dsp);
}

void metadatamydsp(MetaGlue* m) { 
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
	m->declare(m->metaInterface, "basics.lib/version", "1.11.1");
	m->declare(m->metaInterface, "compile_options", "-lang c -ct 1 -es 1 -mcd 16 -single -ftz 0");
	m->declare(m->metaInterface, "delays.lib/name", "Faust Delay Library");
	m->declare(m->metaInterface, "delays.lib/version", "1.1.0");
	m->declare(m->metaInterface, "demos.lib/name", "Faust Demos Library");
	m->declare(m->metaInterface, "demos.lib/version", "1.1.0");
	m->declare(m->metaInterface, "demos.lib/zita_light:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "demos.lib/zita_light:licence", "MIT");
	m->declare(m->metaInterface, "filename", "simplereverb.dsp");
	m->declare(m->metaInterface, "filters.lib/allpass_comb:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/fir:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/fir:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/iir:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/iir:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/lowpass:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/lowpass:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/name", "Faust Filters Library");
	m->declare(m->metaInterface, "filters.lib/peak_eq_rm:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/peak_eq_rm:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/peak_eq_rm:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf1:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf1:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf1s:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf1s:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf2:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf2:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/version", "1.3.0");
	m->declare(m->metaInterface, "maths.lib/author", "GRAME");
	m->declare(m->metaInterface, "maths.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "maths.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "maths.lib/name", "Faust Math Library");
	m->declare(m->metaInterface, "maths.lib/version", "2.7.0");
	m->declare(m->metaInterface, "name", "simplereverb");
	m->declare(m->metaInterface, "platform.lib/name", "Generic Platform Library");
	m->declare(m->metaInterface, "platform.lib/version", "1.3.0");
	m->declare(m->metaInterface, "reverbs.lib/name", "Faust Reverb Library");
	m->declare(m->metaInterface, "reverbs.lib/version", "1.2.0");
	m->declare(m->metaInterface, "routes.lib/hadamard:author", "Remy Muller, revised by Romain Michon");
	m->declare(m->metaInterface, "routes.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "routes.lib/version", "1.2.0");
	m->declare(m->metaInterface, "signals.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "signals.lib/version", "1.5.0");
}

int getSampleRatemydsp(mydsp* RESTRICT dsp) {
	return dsp->fSampleRate;
}

int getNumInputsmydsp(mydsp* RESTRICT dsp) {
	return 2;
}
int getNumOutputsmydsp(mydsp* RESTRICT dsp) {
	return 2;
}

void classInitmydsp(int sample_rate) {
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fVslider0 = (FAUSTFLOAT)(0.0f);
	dsp->fVslider1 = (FAUSTFLOAT)(-6.0f);
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; l0 < 2; l0 = l0 + 1) {
			dsp->fRec13[l0] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; l1 < 2; l1 = l1 + 1) {
			dsp->fRec12[l1] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 16384; l2 = l2 + 1) {
			dsp->fVec0[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 16384; l3 = l3 + 1) {
			dsp->fVec1[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 4096; l4 = l4 + 1) {
			dsp->fVec2[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec10[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec17[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec16[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 16384; l8 = l8 + 1) {
			dsp->fVec3[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2048; l9 = l9 + 1) {
			dsp->fVec4[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec14[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec21[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec20[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 16384; l13 = l13 + 1) {
			dsp->fVec5[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 4096; l14 = l14 + 1) {
			dsp->fVec6[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec18[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec25[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec24[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 16384; l18 = l18 + 1) {
			dsp->fVec7[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2048; l19 = l19 + 1) {
			dsp->fVec8[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec22[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec29[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec28[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 32768; l23 = l23 + 1) {
			dsp->fVec9[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 16384; l24 = l24 + 1) {
			dsp->fVec10[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 4096; l25 = l25 + 1) {
			dsp->fVec11[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec26[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec33[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec32[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 16384; l29 = l29 + 1) {
			dsp->fVec12[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 4096; l30 = l30 + 1) {
			dsp->fVec13[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec30[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec37[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec36[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 32768; l34 = l34 + 1) {
			dsp->fVec14[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 4096; l35 = l35 + 1) {
			dsp->fVec15[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec34[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec41[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec40[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 32768; l39 = l39 + 1) {
			dsp->fVec16[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2048; l40 = l40 + 1) {
			dsp->fVec17[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec38[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 3; l42 = l42 + 1) {
			dsp->fRec2[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 3; l43 = l43 + 1) {
			dsp->fRec3[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 3; l44 = l44 + 1) {
			dsp->fRec4[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 3; l45 = l45 + 1) {
			dsp->fRec5[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 3; l46 = l46 + 1) {
			dsp->fRec6[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 3; l47 = l47 + 1) {
			dsp->fRec7[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 3; l48 = l48 + 1) {
			dsp->fRec8[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 3; l49 = l49 + 1) {
			dsp->fRec9[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 3; l50 = l50 + 1) {
			dsp->fRec1[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 3; l51 = l51 + 1) {
			dsp->fRec0[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec42[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fRec43[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 3; l54 = l54 + 1) {
			dsp->fRec45[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 3; l55 = l55 + 1) {
			dsp->fRec44[l55] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	float fConst1 = 9424.778f / fConst0;
	dsp->fConst2 = (1.0f - fConst1) / (fConst1 + 1.0f);
	dsp->fConst3 = cosf(fConst1) * (dsp->fConst2 + 1.0f);
	float fConst4 = 1979.2034f / fConst0;
	dsp->fConst5 = (1.0f - fConst4) / (fConst4 + 1.0f);
	dsp->fConst6 = cosf(fConst4) * (dsp->fConst5 + 1.0f);
	float fConst7 = floorf(0.174713f * fConst0 + 0.5f);
	float fConst8 = fConst7 / fConst0;
	float fConst9 = expf(-(3.4538777f * fConst8));
	float fConst10 = mydsp_faustpower2_f(fConst9);
	float fConst11 = 1.0f - fConst10;
	float fConst12 = cosf(37699.113f / fConst0);
	float fConst13 = 1.0f - fConst12 * fConst10;
	float fConst14 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fConst13) / mydsp_faustpower2_f(fConst11) + -1.0f));
	float fConst15 = fConst13 / fConst11;
	dsp->fConst16 = fConst15 - fConst14;
	float fConst17 = 1.0f / tanf(628.31854f / fConst0);
	dsp->fConst18 = 1.0f - fConst17;
	dsp->fConst19 = 1.0f / (fConst17 + 1.0f);
	dsp->fConst20 = expf(-(2.3025851f * fConst8)) / fConst9 + -1.0f;
	dsp->fConst21 = fConst9 * (fConst14 + (1.0f - fConst15));
	float fConst22 = floorf(0.022904f * fConst0 + 0.5f);
	dsp->iConst23 = (int)(fminf(8192.0f, fmaxf(0.0f, fConst7 - fConst22)));
	dsp->iConst24 = (int)(fminf(8192.0f, fmaxf(0.0f, 0.06f * fConst0)));
	dsp->iConst25 = (int)(fminf(2048.0f, fmaxf(0.0f, fConst22 + -1.0f)));
	float fConst26 = floorf(0.153129f * fConst0 + 0.5f);
	float fConst27 = fConst26 / fConst0;
	float fConst28 = expf(-(3.4538777f * fConst27));
	float fConst29 = mydsp_faustpower2_f(fConst28);
	float fConst30 = 1.0f - fConst29;
	float fConst31 = 1.0f - fConst12 * fConst29;
	float fConst32 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fConst31) / mydsp_faustpower2_f(fConst30) + -1.0f));
	float fConst33 = fConst31 / fConst30;
	dsp->fConst34 = fConst33 - fConst32;
	dsp->fConst35 = expf(-(2.3025851f * fConst27)) / fConst28 + -1.0f;
	dsp->fConst36 = fConst28 * (fConst32 + (1.0f - fConst33));
	float fConst37 = floorf(0.020346f * fConst0 + 0.5f);
	dsp->iConst38 = (int)(fminf(8192.0f, fmaxf(0.0f, fConst26 - fConst37)));
	dsp->iConst39 = (int)(fminf(1024.0f, fmaxf(0.0f, fConst37 + -1.0f)));
	float fConst40 = floorf(0.127837f * fConst0 + 0.5f);
	float fConst41 = fConst40 / fConst0;
	float fConst42 = expf(-(3.4538777f * fConst41));
	float fConst43 = mydsp_faustpower2_f(fConst42);
	float fConst44 = 1.0f - fConst43;
	float fConst45 = 1.0f - fConst12 * fConst43;
	float fConst46 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fConst45) / mydsp_faustpower2_f(fConst44) + -1.0f));
	float fConst47 = fConst45 / fConst44;
	dsp->fConst48 = fConst47 - fConst46;
	dsp->fConst49 = expf(-(2.3025851f * fConst41)) / fConst42 + -1.0f;
	dsp->fConst50 = fConst42 * (fConst46 + (1.0f - fConst47));
	float fConst51 = floorf(0.031604f * fConst0 + 0.5f);
	dsp->iConst52 = (int)(fminf(8192.0f, fmaxf(0.0f, fConst40 - fConst51)));
	dsp->iConst53 = (int)(fminf(2048.0f, fmaxf(0.0f, fConst51 + -1.0f)));
	float fConst54 = floorf(0.125f * fConst0 + 0.5f);
	float fConst55 = fConst54 / fConst0;
	float fConst56 = expf(-(3.4538777f * fConst55));
	float fConst57 = mydsp_faustpower2_f(fConst56);
	float fConst58 = 1.0f - fConst57;
	float fConst59 = 1.0f - fConst12 * fConst57;
	float fConst60 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fConst59) / mydsp_faustpower2_f(fConst58) + -1.0f));
	float fConst61 = fConst59 / fConst58;
	dsp->fConst62 = fConst61 - fConst60;
	dsp->fConst63 = expf(-(2.3025851f * fConst55)) / fConst56 + -1.0f;
	dsp->fConst64 = fConst56 * (fConst60 + (1.0f - fConst61));
	float fConst65 = floorf(0.013458f * fConst0 + 0.5f);
	dsp->iConst66 = (int)(fminf(8192.0f, fmaxf(0.0f, fConst54 - fConst65)));
	dsp->iConst67 = (int)(fminf(1024.0f, fmaxf(0.0f, fConst65 + -1.0f)));
	float fConst68 = floorf(0.210389f * fConst0 + 0.5f);
	float fConst69 = fConst68 / fConst0;
	float fConst70 = expf(-(3.4538777f * fConst69));
	float fConst71 = mydsp_faustpower2_f(fConst70);
	float fConst72 = 1.0f - fConst71;
	float fConst73 = 1.0f - fConst12 * fConst71;
	float fConst74 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fConst73) / mydsp_faustpower2_f(fConst72) + -1.0f));
	float fConst75 = fConst73 / fConst72;
	dsp->fConst76 = fConst75 - fConst74;
	dsp->fConst77 = expf(-(2.3025851f * fConst69)) / fConst70 + -1.0f;
	dsp->fConst78 = fConst70 * (fConst74 + (1.0f - fConst75));
	float fConst79 = floorf(0.024421f * fConst0 + 0.5f);
	dsp->iConst80 = (int)(fminf(16384.0f, fmaxf(0.0f, fConst68 - fConst79)));
	dsp->iConst81 = (int)(fminf(2048.0f, fmaxf(0.0f, fConst79 + -1.0f)));
	float fConst82 = floorf(0.192303f * fConst0 + 0.5f);
	float fConst83 = fConst82 / fConst0;
	float fConst84 = expf(-(3.4538777f * fConst83));
	float fConst85 = mydsp_faustpower2_f(fConst84);
	float fConst86 = 1.0f - fConst85;
	float fConst87 = 1.0f - fConst12 * fConst85;
	float fConst88 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fConst87) / mydsp_faustpower2_f(fConst86) + -1.0f));
	float fConst89 = fConst87 / fConst86;
	dsp->fConst90 = fConst89 - fConst88;
	dsp->fConst91 = expf(-(2.3025851f * fConst83)) / fConst84 + -1.0f;
	dsp->fConst92 = fConst84 * (fConst88 + (1.0f - fConst89));
	float fConst93 = floorf(0.029291f * fConst0 + 0.5f);
	dsp->iConst94 = (int)(fminf(8192.0f, fmaxf(0.0f, fConst82 - fConst93)));
	dsp->iConst95 = (int)(fminf(2048.0f, fmaxf(0.0f, fConst93 + -1.0f)));
	float fConst96 = floorf(0.256891f * fConst0 + 0.5f);
	float fConst97 = fConst96 / fConst0;
	float fConst98 = expf(-(3.4538777f * fConst97));
	float fConst99 = mydsp_faustpower2_f(fConst98);
	float fConst100 = 1.0f - fConst99;
	float fConst101 = 1.0f - fConst12 * fConst99;
	float fConst102 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fConst101) / mydsp_faustpower2_f(fConst100) + -1.0f));
	float fConst103 = fConst101 / fConst100;
	dsp->fConst104 = fConst103 - fConst102;
	dsp->fConst105 = expf(-(2.3025851f * fConst97)) / fConst98 + -1.0f;
	dsp->fConst106 = fConst98 * (fConst102 + (1.0f - fConst103));
	float fConst107 = floorf(0.027333f * fConst0 + 0.5f);
	dsp->iConst108 = (int)(fminf(16384.0f, fmaxf(0.0f, fConst96 - fConst107)));
	dsp->iConst109 = (int)(fminf(2048.0f, fmaxf(0.0f, fConst107 + -1.0f)));
	float fConst110 = floorf(0.219991f * fConst0 + 0.5f);
	float fConst111 = fConst110 / fConst0;
	float fConst112 = expf(-(3.4538777f * fConst111));
	float fConst113 = mydsp_faustpower2_f(fConst112);
	float fConst114 = 1.0f - fConst113;
	float fConst115 = 1.0f - fConst12 * fConst113;
	float fConst116 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fConst115) / mydsp_faustpower2_f(fConst114) + -1.0f));
	float fConst117 = fConst115 / fConst114;
	dsp->fConst118 = fConst117 - fConst116;
	dsp->fConst119 = expf(-(2.3025851f * fConst111)) / fConst112 + -1.0f;
	dsp->fConst120 = fConst112 * (fConst116 + (1.0f - fConst117));
	float fConst121 = floorf(0.019123f * fConst0 + 0.5f);
	dsp->iConst122 = (int)(fminf(16384.0f, fmaxf(0.0f, fConst110 - fConst121)));
	dsp->iConst123 = (int)(fminf(1024.0f, fmaxf(0.0f, fConst121 + -1.0f)));
	dsp->fConst124 = 2.0f * dsp->fConst3;
	dsp->fConst125 = 2.0f * dsp->fConst2;
	dsp->fConst126 = 44.1f / fConst0;
	dsp->fConst127 = 1.0f - dsp->fConst126;
}

void instanceInitmydsp(mydsp* dsp, int sample_rate) {
	instanceConstantsmydsp(dsp, sample_rate);
	instanceResetUserInterfacemydsp(dsp);
	instanceClearmydsp(dsp);
}

void initmydsp(mydsp* dsp, int sample_rate) {
	classInitmydsp(sample_rate);
	instanceInitmydsp(dsp, sample_rate);
}

void buildUserInterfacemydsp(mydsp* dsp, UIGlue* ui_interface) {
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Zita Light");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "tooltip", "-1 = dry, 1 = wet");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Dry/Wet Mix", &dsp->fVslider0, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "tooltip", "Output scale         factor");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "unit", "dB");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Level", &dsp->fVslider1, (FAUSTFLOAT)-6.0f, (FAUSTFLOAT)-7e+01f, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.1f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* input0 = inputs[0];
	FAUSTFLOAT* input1 = inputs[1];
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = dsp->fConst126 * (float)(dsp->fVslider0);
	float fSlow1 = dsp->fConst126 * powf(1e+01f, 0.05f * (float)(dsp->fVslider1));
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = dsp->fConst6 * dsp->fRec1[1];
			dsp->fRec13[0] = -(dsp->fConst19 * (dsp->fConst18 * dsp->fRec13[1] - (dsp->fRec6[1] + dsp->fRec6[2])));
			dsp->fRec12[0] = dsp->fConst21 * (dsp->fRec6[1] + dsp->fConst20 * dsp->fRec13[0]) + dsp->fConst16 * dsp->fRec12[1];
			dsp->fVec0[dsp->IOTA0 & 16383] = 0.35355338f * dsp->fRec12[0] + 1e-20f;
			float fTemp1 = (float)(input0[i0]);
			dsp->fVec1[dsp->IOTA0 & 16383] = fTemp1;
			float fTemp2 = 0.3f * dsp->fVec1[(dsp->IOTA0 - dsp->iConst24) & 16383];
			float fTemp3 = fTemp2 + dsp->fVec0[(dsp->IOTA0 - dsp->iConst23) & 16383] - 0.6f * dsp->fRec10[1];
			dsp->fVec2[dsp->IOTA0 & 4095] = fTemp3;
			dsp->fRec10[0] = dsp->fVec2[(dsp->IOTA0 - dsp->iConst25) & 4095];
			float fRec11 = 0.6f * fTemp3;
			dsp->fRec17[0] = -(dsp->fConst19 * (dsp->fConst18 * dsp->fRec17[1] - (dsp->fRec2[1] + dsp->fRec2[2])));
			dsp->fRec16[0] = dsp->fConst36 * (dsp->fRec2[1] + dsp->fConst35 * dsp->fRec17[0]) + dsp->fConst34 * dsp->fRec16[1];
			dsp->fVec3[dsp->IOTA0 & 16383] = 0.35355338f * dsp->fRec16[0] + 1e-20f;
			float fTemp4 = dsp->fVec3[(dsp->IOTA0 - dsp->iConst38) & 16383] + fTemp2 - 0.6f * dsp->fRec14[1];
			dsp->fVec4[dsp->IOTA0 & 2047] = fTemp4;
			dsp->fRec14[0] = dsp->fVec4[(dsp->IOTA0 - dsp->iConst39) & 2047];
			float fRec15 = 0.6f * fTemp4;
			float fTemp5 = fRec15 + fRec11;
			dsp->fRec21[0] = -(dsp->fConst19 * (dsp->fConst18 * dsp->fRec21[1] - (dsp->fRec4[1] + dsp->fRec4[2])));
			dsp->fRec20[0] = dsp->fConst50 * (dsp->fRec4[1] + dsp->fConst49 * dsp->fRec21[0]) + dsp->fConst48 * dsp->fRec20[1];
			dsp->fVec5[dsp->IOTA0 & 16383] = 0.35355338f * dsp->fRec20[0] + 1e-20f;
			float fTemp6 = dsp->fVec5[(dsp->IOTA0 - dsp->iConst52) & 16383] - (fTemp2 + 0.6f * dsp->fRec18[1]);
			dsp->fVec6[dsp->IOTA0 & 4095] = fTemp6;
			dsp->fRec18[0] = dsp->fVec6[(dsp->IOTA0 - dsp->iConst53) & 4095];
			float fRec19 = 0.6f * fTemp6;
			dsp->fRec25[0] = -(dsp->fConst19 * (dsp->fConst18 * dsp->fRec25[1] - (dsp->fRec8[1] + dsp->fRec8[2])));
			dsp->fRec24[0] = dsp->fConst64 * (dsp->fRec8[1] + dsp->fConst63 * dsp->fRec25[0]) + dsp->fConst62 * dsp->fRec24[1];
			dsp->fVec7[dsp->IOTA0 & 16383] = 0.35355338f * dsp->fRec24[0] + 1e-20f;
			float fTemp7 = dsp->fVec7[(dsp->IOTA0 - dsp->iConst66) & 16383] - (fTemp2 + 0.6f * dsp->fRec22[1]);
			dsp->fVec8[dsp->IOTA0 & 2047] = fTemp7;
			dsp->fRec22[0] = dsp->fVec8[(dsp->IOTA0 - dsp->iConst67) & 2047];
			float fRec23 = 0.6f * fTemp7;
			float fTemp8 = fRec23 + fRec19 + fTemp5;
			dsp->fRec29[0] = -(dsp->fConst19 * (dsp->fConst18 * dsp->fRec29[1] - (dsp->fRec3[1] + dsp->fRec3[2])));
			dsp->fRec28[0] = dsp->fConst78 * (dsp->fRec3[1] + dsp->fConst77 * dsp->fRec29[0]) + dsp->fConst76 * dsp->fRec28[1];
			dsp->fVec9[dsp->IOTA0 & 32767] = 0.35355338f * dsp->fRec28[0] + 1e-20f;
			float fTemp9 = (float)(input1[i0]);
			dsp->fVec10[dsp->IOTA0 & 16383] = fTemp9;
			float fTemp10 = 0.3f * dsp->fVec10[(dsp->IOTA0 - dsp->iConst24) & 16383];
			float fTemp11 = fTemp10 + 0.6f * dsp->fRec26[1] + dsp->fVec9[(dsp->IOTA0 - dsp->iConst80) & 32767];
			dsp->fVec11[dsp->IOTA0 & 4095] = fTemp11;
			dsp->fRec26[0] = dsp->fVec11[(dsp->IOTA0 - dsp->iConst81) & 4095];
			float fRec27 = -(0.6f * fTemp11);
			dsp->fRec33[0] = -(dsp->fConst19 * (dsp->fConst18 * dsp->fRec33[1] - (dsp->fRec7[1] + dsp->fRec7[2])));
			dsp->fRec32[0] = dsp->fConst92 * (dsp->fRec7[1] + dsp->fConst91 * dsp->fRec33[0]) + dsp->fConst90 * dsp->fRec32[1];
			dsp->fVec12[dsp->IOTA0 & 16383] = 0.35355338f * dsp->fRec32[0] + 1e-20f;
			float fTemp12 = dsp->fVec12[(dsp->IOTA0 - dsp->iConst94) & 16383] + fTemp10 + 0.6f * dsp->fRec30[1];
			dsp->fVec13[dsp->IOTA0 & 4095] = fTemp12;
			dsp->fRec30[0] = dsp->fVec13[(dsp->IOTA0 - dsp->iConst95) & 4095];
			float fRec31 = -(0.6f * fTemp12);
			dsp->fRec37[0] = -(dsp->fConst19 * (dsp->fConst18 * dsp->fRec37[1] - (dsp->fRec5[1] + dsp->fRec5[2])));
			dsp->fRec36[0] = dsp->fConst106 * (dsp->fRec5[1] + dsp->fConst105 * dsp->fRec37[0]) + dsp->fConst104 * dsp->fRec36[1];
			dsp->fVec14[dsp->IOTA0 & 32767] = 0.35355338f * dsp->fRec36[0] + 1e-20f;
			float fTemp13 = 0.6f * dsp->fRec34[1] + dsp->fVec14[(dsp->IOTA0 - dsp->iConst108) & 32767];
			dsp->fVec15[dsp->IOTA0 & 4095] = fTemp13 - fTemp10;
			dsp->fRec34[0] = dsp->fVec15[(dsp->IOTA0 - dsp->iConst109) & 4095];
			float fRec35 = 0.6f * (fTemp10 - fTemp13);
			dsp->fRec41[0] = -(dsp->fConst19 * (dsp->fConst18 * dsp->fRec41[1] - (dsp->fRec9[1] + dsp->fRec9[2])));
			dsp->fRec40[0] = dsp->fConst120 * (dsp->fRec9[1] + dsp->fConst119 * dsp->fRec41[0]) + dsp->fConst118 * dsp->fRec40[1];
			dsp->fVec16[dsp->IOTA0 & 32767] = 0.35355338f * dsp->fRec40[0] + 1e-20f;
			float fTemp14 = 0.6f * dsp->fRec38[1] + dsp->fVec16[(dsp->IOTA0 - dsp->iConst122) & 32767];
			dsp->fVec17[dsp->IOTA0 & 2047] = fTemp14 - fTemp10;
			dsp->fRec38[0] = dsp->fVec17[(dsp->IOTA0 - dsp->iConst123) & 2047];
			float fRec39 = 0.6f * (fTemp10 - fTemp14);
			dsp->fRec2[0] = dsp->fRec38[1] + dsp->fRec34[1] + dsp->fRec30[1] + dsp->fRec26[1] + dsp->fRec22[1] + dsp->fRec18[1] + dsp->fRec10[1] + dsp->fRec14[1] + fRec39 + fRec35 + fRec31 + fRec27 + fTemp8;
			dsp->fRec3[0] = dsp->fRec22[1] + dsp->fRec18[1] + dsp->fRec10[1] + dsp->fRec14[1] + fTemp8 - (dsp->fRec38[1] + dsp->fRec34[1] + dsp->fRec30[1] + dsp->fRec26[1] + fRec39 + fRec35 + fRec27 + fRec31);
			float fTemp15 = fRec19 + fRec23;
			dsp->fRec4[0] = dsp->fRec30[1] + dsp->fRec26[1] + dsp->fRec10[1] + dsp->fRec14[1] + fRec31 + fRec27 + fTemp5 - (dsp->fRec38[1] + dsp->fRec34[1] + dsp->fRec22[1] + dsp->fRec18[1] + fRec39 + fRec35 + fTemp15);
			dsp->fRec5[0] = dsp->fRec38[1] + dsp->fRec34[1] + dsp->fRec10[1] + dsp->fRec14[1] + fRec39 + fRec35 + fTemp5 - (dsp->fRec30[1] + dsp->fRec26[1] + dsp->fRec22[1] + dsp->fRec18[1] + fRec31 + fRec27 + fTemp15);
			float fTemp16 = fRec11 + fRec23;
			float fTemp17 = fRec15 + fRec19;
			dsp->fRec6[0] = dsp->fRec34[1] + dsp->fRec26[1] + dsp->fRec18[1] + dsp->fRec14[1] + fRec35 + fRec27 + fTemp17 - (dsp->fRec38[1] + dsp->fRec30[1] + dsp->fRec22[1] + dsp->fRec10[1] + fRec39 + fRec31 + fTemp16);
			dsp->fRec7[0] = dsp->fRec38[1] + dsp->fRec30[1] + dsp->fRec18[1] + dsp->fRec14[1] + fRec39 + fRec31 + fTemp17 - (dsp->fRec34[1] + dsp->fRec26[1] + dsp->fRec22[1] + dsp->fRec10[1] + fRec35 + fRec27 + fTemp16);
			float fTemp18 = fRec11 + fRec19;
			float fTemp19 = fRec15 + fRec23;
			dsp->fRec8[0] = dsp->fRec38[1] + dsp->fRec26[1] + dsp->fRec22[1] + dsp->fRec14[1] + fRec39 + fRec27 + fTemp19 - (dsp->fRec34[1] + dsp->fRec30[1] + dsp->fRec18[1] + dsp->fRec10[1] + fRec35 + fRec31 + fTemp18);
			dsp->fRec9[0] = dsp->fRec34[1] + dsp->fRec30[1] + dsp->fRec22[1] + dsp->fRec14[1] + fRec35 + fRec31 + fTemp19 - (dsp->fRec38[1] + dsp->fRec26[1] + dsp->fRec18[1] + dsp->fRec10[1] + fRec39 + fRec27 + fTemp18);
			float fTemp20 = 0.37f * (dsp->fRec3[0] + dsp->fRec4[0]);
			float fTemp21 = fTemp20 + fTemp0;
			dsp->fRec1[0] = fTemp21 - dsp->fConst5 * dsp->fRec1[2];
			float fTemp22 = dsp->fConst5 * dsp->fRec1[0];
			dsp->fRec0[0] = 0.5f * (fTemp22 + fTemp20 + dsp->fRec1[2] - fTemp0 + (dsp->fRec1[2] + fTemp22 - fTemp21)) + dsp->fConst3 * dsp->fRec0[1] - dsp->fConst2 * dsp->fRec0[2];
			dsp->fRec42[0] = fSlow0 + dsp->fConst127 * dsp->fRec42[1];
			float fTemp23 = dsp->fRec42[0] + 1.0f;
			float fTemp24 = 1.0f - 0.5f * fTemp23;
			dsp->fRec43[0] = fSlow1 + dsp->fConst127 * dsp->fRec43[1];
			output0[i0] = (FAUSTFLOAT)(0.5f * dsp->fRec43[0] * (fTemp1 * fTemp23 + fTemp24 * (2.0f * dsp->fRec0[2] + dsp->fConst125 * dsp->fRec0[0] - dsp->fConst124 * dsp->fRec0[1])));
			float fTemp25 = dsp->fConst6 * dsp->fRec45[1];
			float fTemp26 = 0.37f * (dsp->fRec3[0] - dsp->fRec4[0]);
			float fTemp27 = fTemp26 + fTemp25;
			dsp->fRec45[0] = fTemp27 - dsp->fConst5 * dsp->fRec45[2];
			float fTemp28 = dsp->fConst5 * dsp->fRec45[0];
			dsp->fRec44[0] = 0.5f * (fTemp28 + fTemp26 + dsp->fRec45[2] - fTemp25 + (dsp->fRec45[2] + fTemp28 - fTemp27)) + dsp->fConst3 * dsp->fRec44[1] - dsp->fConst2 * dsp->fRec44[2];
			output1[i0] = (FAUSTFLOAT)(0.5f * dsp->fRec43[0] * (fTemp9 * fTemp23 + fTemp24 * (2.0f * dsp->fRec44[2] + dsp->fConst125 * dsp->fRec44[0] - dsp->fConst124 * dsp->fRec44[1])));
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec2[2] = dsp->fRec2[1];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec3[2] = dsp->fRec3[1];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec4[2] = dsp->fRec4[1];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec5[2] = dsp->fRec5[1];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec6[2] = dsp->fRec6[1];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec7[2] = dsp->fRec7[1];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec8[2] = dsp->fRec8[1];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec9[2] = dsp->fRec9[1];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec1[2] = dsp->fRec1[1];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec0[2] = dsp->fRec0[1];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec45[2] = dsp->fRec45[1];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec44[2] = dsp->fRec44[1];
			dsp->fRec44[1] = dsp->fRec44[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
