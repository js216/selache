/* SPDX-License-Identifier: GPL-3.0 */
/* atan2f.c --- Two-argument arctangent with quadrant handling */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

static const float pi_val = 3.14159265358979323846f;
static const float pi_over_2 = 1.5707963267948966f;

float atan2f(float y, float x)
{
	if (isnan(x) || isnan(y))
		return NAN;

	if (y == 0.0f) {
		if (x > 0.0f || (x == 0.0f && !signbit(x)))
			return signbit(y) ? -0.0f : 0.0f;
		return signbit(y) ? -pi_val : pi_val;
	}

	if (x == 0.0f)
		return y > 0.0f ? pi_over_2 : -pi_over_2;

	if (isinf(x) && isinf(y)) {
		float px = x > 0.0f ? (float)M_PI_4 : 3.0f * (float)M_PI_4;
		return y > 0.0f ? px : -px;
	}

	if (isinf(x)) {
		if (x > 0.0f)
			return y > 0.0f ? 0.0f : -0.0f;
		return y > 0.0f ? pi_val : -pi_val;
	}

	if (isinf(y))
		return y > 0.0f ? pi_over_2 : -pi_over_2;

	if (x > 0.0f)
		return atanf(y / x);

	if (y >= 0.0f)
		return atanf(y / x) + pi_val;

	return atanf(y / x) - pi_val;
}
