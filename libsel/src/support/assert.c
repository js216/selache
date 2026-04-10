/* SPDX-License-Identifier: GPL-3.0 */
/* assert.c --- Assertion failure handler */
/* Copyright (c) 2026 Jakob Kastelic */

void __assert_fail(const char *expr, const char *file, int line)
{
	(void)expr;
	(void)file;
	(void)line;
	extern void _Exit(int);
	_Exit(99);
}
