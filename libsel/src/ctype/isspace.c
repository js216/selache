/* SPDX-License-Identifier: GPL-3.0 */
/* isspace.c --- Whitespace character test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int isspace(int c)
{
	return c == ' '  || c == '\t' || c == '\n' ||
	       c == '\r' || c == '\f' || c == '\v';
}
