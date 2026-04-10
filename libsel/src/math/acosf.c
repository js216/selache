/* SPDX-License-Identifier: MIT */
/* acosf.c --- Arccosine via pi/2 minus arcsine */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

static const float pi_over_2 = 1.5707963267948966f;

float acosf(float x)
{
	if (isnan(x))
		return x;
	if (x < -1.0f || x > 1.0f)
		return NAN;

	return pi_over_2 - asinf(x);
}
