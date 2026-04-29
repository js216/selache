/* SPDX-License-Identifier: MIT */
/* creal.c --- Real part of a double complex number */
/* Copyright (c) 2026 Jakob Kastelic */

#include "complex.h"

__attribute__((weak)) double creal(double _Complex z)
{
	return ((double *)&z)[0];
}
