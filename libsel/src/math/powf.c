/* SPDX-License-Identifier: MIT */
/* powf.c --- Power function via exp and log */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

static int is_odd_int(float y)
{
	float t = truncf(y);
	if (t != y)
		return 0;
	return fmodf(fabsf(t), 2.0f) == 1.0f;
}

static int is_int(float y)
{
	return truncf(y) == y;
}

__attribute__((weak)) float powf(float x, float y)
{
	if (y == 0.0f)
		return 1.0f;
	if (x == 1.0f)
		return 1.0f;
	if (isnan(x) || isnan(y))
		return NAN;
	if (x == 0.0f) {
		if (y > 0.0f)
			return 0.0f;
		return INFINITY;
	}
	if (isinf(y)) {
		float ax = fabsf(x);
		if (ax == 1.0f)
			return 1.0f;
		if (y > 0.0f)
			return ax > 1.0f ? INFINITY : 0.0f;
		return ax > 1.0f ? 0.0f : INFINITY;
	}
	if (isinf(x)) {
		if (x > 0.0f)
			return y > 0.0f ? INFINITY : 0.0f;
		if (y > 0.0f)
			return is_odd_int(y) ? -INFINITY : INFINITY;
		return is_odd_int(y) ? -0.0f : 0.0f;
	}
	if (x < 0.0f) {
		if (!is_int(y))
			return NAN;
		if (is_odd_int(y))
			return -expf(y * logf(-x));
		return expf(y * logf(-x));
	}
	return expf(y * logf(x));
}
