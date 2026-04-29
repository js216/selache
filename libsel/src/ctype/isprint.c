/* SPDX-License-Identifier: MIT */
/* isprint.c --- Printable character test (including space) */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

__attribute__((weak)) int isprint(int c)
{
	return c >= ' ' && c <= '~';
}
