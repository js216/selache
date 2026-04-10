/* SPDX-License-Identifier: MIT */
/* isalnum.c --- Alphanumeric character test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int isalnum(int c)
{
	return (c >= 'A' && c <= 'Z') ||
	       (c >= 'a' && c <= 'z') ||
	       (c >= '0' && c <= '9');
}
