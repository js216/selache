/* SPDX-License-Identifier: MIT */
/* fmax.c --- Maximum of two doubles */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double fmax(double x, double y)
{
	return (double)fmaxf((float)x, (float)y);
}
