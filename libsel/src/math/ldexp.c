/* SPDX-License-Identifier: MIT */
/* ldexp.c --- Multiply double by power of two */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) double ldexp(double x, int exp)
{
	return (double)ldexpf((float)x, exp);
}
