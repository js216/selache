/* SPDX-License-Identifier: MIT */
/* cimagf.c --- Imaginary part of a float complex number */
/* Copyright (c) 2026 Jakob Kastelic */

#include "complex.h"

float cimagf(float _Complex z)
{
	return ((float *)&z)[1];
}
