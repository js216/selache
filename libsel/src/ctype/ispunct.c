/* SPDX-License-Identifier: MIT */
/* ispunct.c --- Punctuation character test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

__attribute__((weak)) int ispunct(int c)
{
	return (c >= '!' && c <= '/') ||
	       (c >= ':' && c <= '@') ||
	       (c >= '[' && c <= '`') ||
	       (c >= '{' && c <= '~');
}
