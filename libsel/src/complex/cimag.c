/* SPDX-License-Identifier: MIT */
/* cimag.c --- Imaginary part of a double complex number */
/* Copyright (c) 2026 Jakob Kastelic */

#include "complex.h"

double cimag(double _Complex z)
{
	return ((double *)&z)[1];
}
