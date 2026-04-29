/* SPDX-License-Identifier: MIT */
/* cabs.c --- Magnitude of a double complex number */
/* Copyright (c) 2026 Jakob Kastelic */

#include "complex.h"
#include "math.h"

__attribute__((weak)) double cabs(double _Complex z)
{
	double re = ((double *)&z)[0];
	double im = ((double *)&z)[1];
	return sqrt(re * re + im * im);
}
