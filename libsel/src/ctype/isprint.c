/* SPDX-License-Identifier: MIT */
/* isprint.c --- Printable character test (including space) */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int isprint(int c)
{
	return c >= ' ' && c <= '~';
}
