/* SPDX-License-Identifier: MIT */
/* sqrtf.c --- Square root via Newton-Raphson iteration */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

float sqrtf(float x)
{
	union { float f; unsigned int u; } conv;
	float guess;
	int i;

	if (x < 0.0f)
		return NAN;
	if (x == 0.0f || isnan(x) || isinf(x))
		return x;

	conv.f = x;
	conv.u = (conv.u >> 1) + 0x1FC00000u;
	guess = conv.f;

	for (i = 0; i < 4; i++)
		guess = (guess + x / guess) * 0.5f;

	return guess;
}
