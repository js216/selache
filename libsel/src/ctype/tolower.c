/* SPDX-License-Identifier: MIT */
/* tolower.c --- Convert uppercase letter to lowercase */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

__attribute__((weak)) int tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + ('a' - 'A');
	return c;
}
