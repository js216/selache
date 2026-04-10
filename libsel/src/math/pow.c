/* SPDX-License-Identifier: MIT */
/* pow.c --- Power function for doubles */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double pow(double x, double y)
{
	return (double)powf((float)x, (float)y);
}
