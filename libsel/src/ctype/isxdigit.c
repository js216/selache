/* SPDX-License-Identifier: MIT */
/* isxdigit.c --- Hexadecimal digit test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

__attribute__((weak)) int isxdigit(int c)
{
	return (c >= '0' && c <= '9') ||
	       (c >= 'A' && c <= 'F') ||
	       (c >= 'a' && c <= 'f');
}
