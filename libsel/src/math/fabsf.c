/* SPDX-License-Identifier: GPL-3.0 */
/* fabsf.c --- Absolute value of a float */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

float fabsf(float x)
{
	union { float f; unsigned int u; } conv;
	conv.f = x;
	conv.u &= 0x7FFFFFFFu;
	return conv.f;
}
