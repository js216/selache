/* SPDX-License-Identifier: GPL-3.0 */
/* floor.c --- Floor of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double floor(double x)
{
	return (double)floorf((float)x);
}
