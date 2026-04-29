/* SPDX-License-Identifier: MIT */
/* sin.c --- Sine of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) double sin(double x)
{
	return (double)sinf((float)x);
}
