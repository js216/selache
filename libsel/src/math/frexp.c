/* SPDX-License-Identifier: GPL-3.0 */
/* frexp.c --- Extract mantissa and exponent from a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double frexp(double x, int *exp)
{
	return (double)frexpf((float)x, exp);
}
