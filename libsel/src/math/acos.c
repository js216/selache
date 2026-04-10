/* SPDX-License-Identifier: MIT */
/* acos.c --- Arccosine of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double acos(double x)
{
	return (double)acosf((float)x);
}
