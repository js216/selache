/* SPDX-License-Identifier: GPL-3.0 */
/* isupper.c --- Uppercase letter test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int isupper(int c)
{
	return c >= 'A' && c <= 'Z';
}
