/* SPDX-License-Identifier: GPL-3.0 */
/* tolower.c --- Convert uppercase letter to lowercase */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + ('a' - 'A');
	return c;
}
