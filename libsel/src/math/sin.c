/* SPDX-License-Identifier: GPL-3.0 */
/* sin.c --- Sine of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double sin(double x)
{
	return (double)sinf((float)x);
}
