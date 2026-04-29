/* SPDX-License-Identifier: MIT */
/* roundf.c --- Round to nearest integer, ties away from zero */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) float roundf(float x)
{
	if (isnan(x) || isinf(x) || x == 0.0f)
		return x;

	if (x >= 0.0f)
		return floorf(x + 0.5f);
	return ceilf(x - 0.5f);
}
