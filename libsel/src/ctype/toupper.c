/* SPDX-License-Identifier: MIT */
/* toupper.c --- Convert lowercase letter to uppercase */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

__attribute__((weak)) int toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return c - ('a' - 'A');
	return c;
}
