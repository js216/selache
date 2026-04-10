/* SPDX-License-Identifier: GPL-3.0 */
/* asin.c --- Arcsine of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double asin(double x)
{
	return (double)asinf((float)x);
}
