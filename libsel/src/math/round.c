/* SPDX-License-Identifier: MIT */
/* round.c --- Round a double */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) double round(double x)
{
	return (double)roundf((float)x);
}
