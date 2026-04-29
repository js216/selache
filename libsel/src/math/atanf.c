/* SPDX-License-Identifier: MIT */
/* atanf.c --- Arctangent via polynomial with range reduction */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

static const float pi_over_2 = 1.5707963267948966f;
static const float pi_over_4 = 0.7853981633974483f;

static float atan_kernel(float a)
{
	float a2 = a * a;
	float r;
	r =  0.0028662257f;
	r = r * a2 - 0.0161657367f;
	r = r * a2 + 0.0429096138f;
	r = r * a2 - 0.0752896400f;
	r = r * a2 + 0.1065626393f;
	r = r * a2 - 0.1420889944f;
	r = r * a2 + 0.1999355085f;
	r = r * a2 - 0.3333333135f;
	return a + a * a2 * r;
}

__attribute__((weak)) float atanf(float x)
{
	float a, r, base;
	int neg;

	if (isnan(x))
		return x;
	if (x == 0.0f)
		return x;
	if (isinf(x))
		return x > 0 ? pi_over_2 : -pi_over_2;

	neg = x < 0.0f;
	a = neg ? -x : x;

	if (a <= 0.4142135623f) {
		r = atan_kernel(a);
		base = 0.0f;
	} else if (a <= 2.4142135623f) {
		r = atan_kernel((a - 1.0f) / (a + 1.0f));
		base = pi_over_4;
	} else {
		r = atan_kernel(-1.0f / a);
		base = pi_over_2;
	}

	r = base + r;

	if (neg)
		r = -r;
	return r;
}
