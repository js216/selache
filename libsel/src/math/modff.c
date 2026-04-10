/* SPDX-License-Identifier: GPL-3.0 */
/* modff.c --- Split float into integer and fractional parts */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

float modff(float x, float *iptr)
{
	float t;

	if (isnan(x)) {
		*iptr = x;
		return x;
	}
	if (isinf(x)) {
		*iptr = x;
		return signbit(x) ? -0.0f : 0.0f;
	}

	t = truncf(x);
	*iptr = t;
	return x - t;
}
