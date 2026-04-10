/* SPDX-License-Identifier: MIT */
/* log10.c --- Base-10 logarithm of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double log10(double x)
{
	return (double)log10f((float)x);
}
