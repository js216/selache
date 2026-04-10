/* SPDX-License-Identifier: GPL-3.0 */
/* ceilf.c --- Ceiling via negated floor */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

float ceilf(float x)
{
	float f = floorf(x);

	if (isnan(x) || isinf(x) || x == 0.0f)
		return x;
	if (f == x)
		return x;
	return f + 1.0f;
}
