/* SPDX-License-Identifier: MIT */
/* asin.c --- Arcsine of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) double asin(double x)
{
	return (double)asinf((float)x);
}
