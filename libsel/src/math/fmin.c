/* SPDX-License-Identifier: MIT */
/* fmin.c --- Minimum of two doubles */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) double fmin(double x, double y)
{
	return (double)fminf((float)x, (float)y);
}
