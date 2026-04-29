/* SPDX-License-Identifier: MIT */
/* tanf.c --- Tangent as sine over cosine ratio */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) float tanf(float x)
{
	if (isnan(x))
		return x;
	if (isinf(x))
		return NAN;

	return sinf(x) / cosf(x);
}
