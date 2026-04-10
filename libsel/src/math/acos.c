/* SPDX-License-Identifier: GPL-3.0 */
/* acos.c --- Arccosine of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double acos(double x)
{
	return (double)acosf((float)x);
}
