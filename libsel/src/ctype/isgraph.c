/* SPDX-License-Identifier: MIT */
/* isgraph.c --- Printable non-space character test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

__attribute__((weak)) int isgraph(int c)
{
	return c > ' ' && c <= '~';
}
