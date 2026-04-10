/* SPDX-License-Identifier: MIT */
/* ldexpf.c --- Multiply float by power of two via exponent adjustment */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

float ldexpf(float x, int exp)
{
	union { float f; unsigned int u; } conv;
	int e;

	if (x == 0.0f || isnan(x) || isinf(x))
		return x;

	conv.f = x;
	e = (int)((conv.u >> 23) & 0xFF) + exp;

	if (e >= 255)
		return x > 0.0f ? INFINITY : -INFINITY;
	if (e <= 0)
		return x > 0.0f ? 0.0f : -0.0f;

	conv.u = (conv.u & ~(0xFFu << 23)) | ((unsigned int)e << 23);
	return conv.f;
}
