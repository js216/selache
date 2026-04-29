/* SPDX-License-Identifier: MIT */
/* fmaxf.c --- Maximum of two floats with NaN handling */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) float fmaxf(float x, float y)
{
	if (isnan(x))
		return y;
	if (isnan(y))
		return x;
	return x > y ? x : y;
}
