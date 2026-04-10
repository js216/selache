/* SPDX-License-Identifier: MIT */
/* tan.c --- Tangent of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double tan(double x)
{
	return (double)tanf((float)x);
}
