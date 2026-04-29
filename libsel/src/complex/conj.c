/* SPDX-License-Identifier: MIT */
/* conj.c --- Complex conjugate of a double complex number */
/* Copyright (c) 2026 Jakob Kastelic */

#include "complex.h"

__attribute__((weak)) double _Complex conj(double _Complex z)
{
	double _Complex r = z;
	((double *)&r)[1] = -((double *)&r)[1];
	return r;
}
