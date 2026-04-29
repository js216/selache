/* SPDX-License-Identifier: MIT */
/* atan.c --- Arctangent of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) double atan(double x)
{
	return (double)atanf((float)x);
}
