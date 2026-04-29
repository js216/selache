/* SPDX-License-Identifier: MIT */
/* assert.c --- Assertion failure handler */
/* Copyright (c) 2026 Jakob Kastelic */

__attribute__((weak)) void sel_assert_fail(const char *expr, const char *file, int line)
{
	(void)expr;
	(void)file;
	(void)line;
	extern void _Exit(int);
	_Exit(99);
}
