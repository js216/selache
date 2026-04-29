/* SPDX-License-Identifier: MIT */
/* isalpha.c --- Alphabetic character test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

__attribute__((weak)) int isalpha(int c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
