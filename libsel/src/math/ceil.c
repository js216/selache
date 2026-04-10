/* SPDX-License-Identifier: MIT */
/* ceil.c --- Ceiling of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double ceil(double x)
{
	return (double)ceilf((float)x);
}
