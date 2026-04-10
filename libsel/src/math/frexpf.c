/* SPDX-License-Identifier: MIT */
/* frexpf.c --- Extract mantissa and exponent from IEEE 754 float */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

float frexpf(float x, int *exp)
{
	union { float f; unsigned int u; } conv;
	int e;

	*exp = 0;

	if (x == 0.0f || isnan(x) || isinf(x))
		return x;

	conv.f = x;
	e = (int)((conv.u >> 23) & 0xFF);

	if (e == 0) {
		conv.f = x * 8388608.0f;
		e = (int)((conv.u >> 23) & 0xFF) - 23;
	}

	*exp = e - 126;
	conv.u = (conv.u & 0x807FFFFFu) | 0x3F000000u;
	return conv.f;
}
