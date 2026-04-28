/* SPDX-License-Identifier: MIT */
/* crealf.c --- Real part of a float complex number */
/* Copyright (c) 2026 Jakob Kastelic */

#include "complex.h"

float crealf(float _Complex z)
{
	return ((float *)&z)[0];
}
