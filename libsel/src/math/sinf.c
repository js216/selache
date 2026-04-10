/* SPDX-License-Identifier: GPL-3.0 */
/* sinf.c --- Sine via Cody-Waite range reduction and minimax polynomial */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

static const float two_over_pi = 0.63661977236758134308f;

static const float cw_c1 = 1.5707963267341256f;
static const float cw_c2 = 7.5497894158615964e-08f;

static float kernel_sin(float x)
{
	float x2 = x * x;
	float r;
	r = -1.9515295891e-4f;
	r = r * x2 + 8.3321608736e-3f;
	r = r * x2 + -1.6666654611e-1f;
	r = r * x2 + 1.0f;
	return r * x;
}

static float kernel_cos(float x)
{
	float x2 = x * x;
	float r;
	r = 2.4390448928e-5f;
	r = r * x2 + -1.3888397014e-3f;
	r = r * x2 + 4.1666641831e-2f;
	r = r * x2 + -4.9999999702e-1f;
	r = r * x2 + 1.0f;
	return r;
}

float sinf(float x)
{
	float r, y;
	int q;

	if (isnan(x))
		return x;
	if (isinf(x))
		return NAN;
	if (x == 0.0f)
		return x;

	q = (int)(x * two_over_pi + (x >= 0.0f ? 0.5f : -0.5f));
	r = x - (float)q * cw_c1;
	r = r - (float)q * cw_c2;

	q = q & 3;

	switch (q) {
	case 0: y = kernel_sin(r); break;
	case 1: y = kernel_cos(r); break;
	case 2: y = -kernel_sin(r); break;
	case 3: y = -kernel_cos(r); break;
	default: y = 0.0f; break;
	}

	return y;
}
