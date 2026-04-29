/* SPDX-License-Identifier: MIT */
/* isblank.c --- Blank character test (space or tab) */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

__attribute__((weak)) int isblank(int c)
{
	return c == ' ' || c == '\t';
}
