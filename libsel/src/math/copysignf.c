/* SPDX-License-Identifier: MIT */
/* copysignf.c --- Copy sign bit between floats via bit manipulation */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

__attribute__((weak)) float copysignf(float x, float y)
{
	union { float f; unsigned int u; } cx, cy;
	cx.f = x;
	cy.f = y;
	cx.u = (cx.u & 0x7FFFFFFFu) | (cy.u & 0x80000000u);
	return cx.f;
}
