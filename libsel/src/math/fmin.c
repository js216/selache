/* SPDX-License-Identifier: GPL-3.0 */
/* fmin.c --- Minimum of two doubles */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double fmin(double x, double y)
{
	return (double)fminf((float)x, (float)y);
}
