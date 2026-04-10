/* SPDX-License-Identifier: GPL-3.0 */
/* cos.c --- Cosine of a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double cos(double x)
{
	return (double)cosf((float)x);
}
