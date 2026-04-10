/* SPDX-License-Identifier: MIT */
/* sqrt.c --- Square root of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double sqrt(double x)
{
	return (double)sqrtf((float)x);
}
