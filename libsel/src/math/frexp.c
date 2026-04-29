/* SPDX-License-Identifier: MIT */
/* frexp.c --- Extract mantissa and exponent from a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) double frexp(double x, int *exp)
{
	return (double)frexpf((float)x, exp);
}
