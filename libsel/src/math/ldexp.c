/* SPDX-License-Identifier: GPL-3.0 */
/* ldexp.c --- Multiply double by power of two */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double ldexp(double x, int exp)
{
	return (double)ldexpf((float)x, exp);
}
