/* SPDX-License-Identifier: MIT */
/* log10f.c --- Base-10 logarithm via natural logarithm */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

static const float inv_ln10 = 0.43429448190325182765f;

float log10f(float x)
{
	return logf(x) * inv_ln10;
}
