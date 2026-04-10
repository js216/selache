/* SPDX-License-Identifier: GPL-3.0 */
/* isdigit.c --- Decimal digit test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int isdigit(int c)
{
	return c >= '0' && c <= '9';
}
