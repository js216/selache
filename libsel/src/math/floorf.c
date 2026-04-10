/* SPDX-License-Identifier: GPL-3.0 */
/* floorf.c --- Floor via IEEE 754 bit manipulation */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

float floorf(float x)
{
	union { float f; unsigned int u; } conv;
	int e;
	unsigned int m;

	if (isnan(x) || isinf(x) || x == 0.0f)
		return x;

	conv.f = x;
	e = (int)((conv.u >> 23) & 0xFF) - 127;

	if (e >= 23)
		return x;

	if (e < 0) {
		if (conv.u & 0x80000000u)
			return -1.0f;
		return 0.0f;
	}

	m = 0x007FFFFFu >> e;
	if ((conv.u & m) == 0)
		return x;

	if (conv.u & 0x80000000u)
		conv.u += m;
	conv.u &= ~m;
	return conv.f;
}
