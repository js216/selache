/* SPDX-License-Identifier: MIT */
/* isxdigit.c --- Hexadecimal digit test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int isxdigit(int c)
{
	return (c >= '0' && c <= '9') ||
	       (c >= 'A' && c <= 'F') ||
	       (c >= 'a' && c <= 'f');
}
