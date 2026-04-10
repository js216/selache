/* SPDX-License-Identifier: MIT */
/* exp.c --- Exponential of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double exp(double x)
{
	return (double)expf((float)x);
}
