/* SPDX-License-Identifier: MIT */
/* atan2.c --- Two-argument arctangent of doubles */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

double atan2(double y, double x)
{
	return (double)atan2f((float)y, (float)x);
}
