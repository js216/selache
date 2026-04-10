/* SPDX-License-Identifier: GPL-3.0 */
/* isgraph.c --- Printable non-space character test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int isgraph(int c)
{
	return c > ' ' && c <= '~';
}
