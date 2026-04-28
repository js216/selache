/* SPDX-License-Identifier: MIT */
/* conjf.c --- Complex conjugate of a float complex number */
/* Copyright (c) 2026 Jakob Kastelic */

#include "complex.h"

float _Complex conjf(float _Complex z)
{
	float _Complex r = z;
	((float *)&r)[1] = -((float *)&r)[1];
	return r;
}
