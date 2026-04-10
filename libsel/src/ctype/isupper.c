/* SPDX-License-Identifier: MIT */
/* isupper.c --- Uppercase letter test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int isupper(int c)
{
	return c >= 'A' && c <= 'Z';
}
