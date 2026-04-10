/* SPDX-License-Identifier: GPL-3.0 */
/* truncf.c --- Truncation toward zero via IEEE 754 bit masking */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

float truncf(float x)
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

	if (e < 0)
		return signbit(x) ? -0.0f : 0.0f;

	m = 0x007FFFFFu >> e;
	conv.u &= ~m;
	return conv.f;
}
