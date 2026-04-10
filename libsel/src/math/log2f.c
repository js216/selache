/* SPDX-License-Identifier: MIT */
/* log2f.c --- Base-2 logarithm via natural logarithm */
/* Copyright (c) 2026 Jakob Kastelic */

#include "math.h"

static const float inv_ln2 = 1.44269504088896340736f;

float log2f(float x)
{
	return logf(x) * inv_ln2;
}
