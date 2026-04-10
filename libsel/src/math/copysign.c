/* SPDX-License-Identifier: GPL-3.0 */
/* copysign.c --- Copy sign bit between doubles */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double copysign(double x, double y)
{
	return (double)copysignf((float)x, (float)y);
}
