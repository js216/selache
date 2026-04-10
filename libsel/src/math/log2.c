/* SPDX-License-Identifier: MIT */
/* log2.c --- Base-2 logarithm of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double log2(double x)
{
	return (double)log2f((float)x);
}
