/* SPDX-License-Identifier: MIT */
/* islower.c --- Lowercase letter test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

__attribute__((weak)) int islower(int c)
{
	return c >= 'a' && c <= 'z';
}
