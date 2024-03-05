/*
 * faustdistorsion.h
 *
 *  Created on: Mar 5, 2024
 *      Author: Luca
 */

#ifndef INC_FAUSTDISTORSION_H_
#define INC_FAUSTDISTORSION_H_

#include <math.h>
#include <stdint.h>
#include <stdlib.h>

#include "conversion.h"


float mydsp_faustpower2_f(float value);

void faustdistorsion(int16_t* signal, int signalsize, float gaind);

#endif /* INC_FAUSTDISTORSION_H_ */

