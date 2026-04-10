/* SPDX-License-Identifier: GPL-3.0 */
/* round.c --- Round a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double round(double x)
{
	return (double)roundf((float)x);
}
