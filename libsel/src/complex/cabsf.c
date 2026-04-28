/* SPDX-License-Identifier: MIT */
/* cabsf.c --- Magnitude of a float complex number */
/* Copyright (c) 2026 Jakob Kastelic */

#include "complex.h"
#include "math.h"

float cabsf(float _Complex z)
{
	float re = ((float *)&z)[0];
	float im = ((float *)&z)[1];
	return sqrtf(re * re + im * im);
}
