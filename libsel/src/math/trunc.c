/* SPDX-License-Identifier: MIT */
/* trunc.c --- Truncation of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double trunc(double x)
{
	return (double)truncf((float)x);
}
