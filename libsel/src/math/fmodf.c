/* SPDX-License-Identifier: MIT */
/* fmodf.c --- Floating-point remainder */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) float fmodf(float x, float y)
{
	float q;

	if (isnan(x) || isnan(y) || isinf(x) || y == 0.0f)
		return NAN;
	if (isinf(y))
		return x;
	if (x == 0.0f)
		return x;

	q = truncf(x / y);
	return x - q * y;
}
