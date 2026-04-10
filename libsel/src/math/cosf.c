/* SPDX-License-Identifier: MIT */
/* cosf.c --- Cosine via sine with phase shift */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

static const float half_pi = 1.57079632679489661923f;

float cosf(float x)
{
	if (isnan(x))
		return x;
	if (isinf(x))
		return NAN;

	return sinf(half_pi - x);
}
