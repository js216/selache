/* SPDX-License-Identifier: MIT */
/* logf.c --- Natural logarithm via IEEE 754 decomposition and polynomial */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

static const float ln2 = 0.69314718055994530942f;

__attribute__((weak)) float logf(float x)
{
	union { float f; unsigned int u; } conv;
	int e;
	float f, s, s2, r;

	if (isnan(x))
		return x;
	if (x < 0.0f)
		return NAN;
	if (x == 0.0f)
		return -INFINITY;
	if (isinf(x))
		return x;

	conv.f = x;
	e = (int)((conv.u >> 23) & 0xFF) - 127;
	conv.u = (conv.u & 0x007FFFFFu) | 0x3F800000u;
	f = conv.f;

	if (f > 1.41421356f) {
		f *= 0.5f;
		e++;
	}

	f -= 1.0f;
	s = f / (2.0f + f);
	s2 = s * s;

	r = 0.2392950207f;
	r = r * s2 + 0.2850074744f;
	r = r * s2 + 0.4000059962f;
	r = r * s2 + 0.6666666507f;

	return (float)e * ln2 + f - s * (f - r * s2);
}
