/* SPDX-License-Identifier: MIT */
/* iscntrl.c --- Control character test */
/* Copyright (c) 2026 Jakob Kastelic */

#include "ctype.h"

int iscntrl(int c)
{
	return (c >= 0 && c <= 0x1f) || c == 0x7f;
}
