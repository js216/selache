/* SPDX-License-Identifier: MIT */
/* cos.c --- Cosine of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) double cos(double x)
{
	return (double)cosf((float)x);
}
