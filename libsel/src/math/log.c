/* SPDX-License-Identifier: MIT */
/* log.c --- Natural logarithm of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double log(double x)
{
	return (double)logf((float)x);
}
