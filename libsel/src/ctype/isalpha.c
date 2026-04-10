/* SPDX-License-Identifier: MIT */
/* isalpha.c --- Alphabetic character test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int isalpha(int c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
