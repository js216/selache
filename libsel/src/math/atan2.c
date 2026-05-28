/* SPDX-License-Identifier: MIT */
/* atan2.c --- Two-argument arctangent of doubles */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

static const double pi_val = 3.14159265358979323846;
static const double pi_over_2 = 1.5707963267948966;
static const double pi_over_4 = 0.7853981633974483;

__attribute__((weak)) double atan2(double y, double x)
{
	if (isnan(x) || isnan(y))
		return NAN;

	if (y == 0.0) {
		if (x > 0.0 || (x == 0.0 && !signbit(x)))
			return signbit(y) ? -0.0 : 0.0;
		return signbit(y) ? -pi_val : pi_val;
	}

	if (x == 0.0)
		return y > 0.0 ? pi_over_2 : -pi_over_2;

	if (isinf(x) && isinf(y)) {
		double px = x > 0.0 ? pi_over_4 : 3.0 * pi_over_4;
		return y > 0.0 ? px : -px;
	}

	if (isinf(x)) {
		if (x > 0.0)
			return y > 0.0 ? 0.0 : -0.0;
		return y > 0.0 ? pi_val : -pi_val;
	}

	if (isinf(y))
		return y > 0.0 ? pi_over_2 : -pi_over_2;

	if (x > 0.0)
		return (double)atanf((float)(y / x));

	if (y >= 0.0)
		return (double)atanf((float)(y / x)) + pi_val;

	return (double)atanf((float)(y / x)) - pi_val;
}
