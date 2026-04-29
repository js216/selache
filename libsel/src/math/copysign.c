/* SPDX-License-Identifier: MIT */
/* copysign.c --- Copy sign bit between doubles */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) double copysign(double x, double y)
{
	return (double)copysignf((float)x, (float)y);
}
