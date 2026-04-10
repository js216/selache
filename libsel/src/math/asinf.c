/* SPDX-License-Identifier: MIT */
/* asinf.c --- Arcsine via atan2 identity */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

float asinf(float x)
{
	if (isnan(x))
		return x;
	if (x < -1.0f || x > 1.0f)
		return NAN;
	if (x == 0.0f)
		return x;

	return atan2f(x, sqrtf(1.0f - x * x));
}
