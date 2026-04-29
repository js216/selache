/* SPDX-License-Identifier: MIT */
/* fmod.c --- Floating-point remainder of doubles */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) double fmod(double x, double y)
{
	return (double)fmodf((float)x, (float)y);
}
