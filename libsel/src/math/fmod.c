/* SPDX-License-Identifier: GPL-3.0 */
/* fmod.c --- Floating-point remainder of doubles */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double fmod(double x, double y)
{
	return (double)fmodf((float)x, (float)y);
}
