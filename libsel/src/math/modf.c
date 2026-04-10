/* SPDX-License-Identifier: GPL-3.0 */
/* modf.c --- Split double into integer and fractional parts */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double modf(double x, double *iptr)
{
	float fi;
	float r = modff((float)x, &fi);
	*iptr = (double)fi;
	return (double)r;
}
