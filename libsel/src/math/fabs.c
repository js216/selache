/* SPDX-License-Identifier: MIT */
/* fabs.c --- Absolute value of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double fabs(double x)
{
	return (double)fabsf((float)x);
}
