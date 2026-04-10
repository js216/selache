/* SPDX-License-Identifier: GPL-3.0 */
/* atan.c --- Arctangent of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double atan(double x)
{
	return (double)atanf((float)x);
}
