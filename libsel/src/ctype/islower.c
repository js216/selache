/* SPDX-License-Identifier: GPL-3.0 */
/* islower.c --- Lowercase letter test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int islower(int c)
{
	return c >= 'a' && c <= 'z';
}
