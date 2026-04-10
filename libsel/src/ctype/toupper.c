/* SPDX-License-Identifier: GPL-3.0 */
/* toupper.c --- Convert lowercase letter to uppercase */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return c - ('a' - 'A');
	return c;
}
