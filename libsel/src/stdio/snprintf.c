/* SPDX-License-Identifier: MIT */
/* snprintf.c --- Formatted output into a sized buffer (variadic) */
/* Copyright (c) 2026 Jakob Kastelic */

#include "stddef.h"
#include "stdarg.h"

int vsnprintf(char *buf, size_t size, const char *fmt, va_list ap);

int snprintf(char *buf, size_t size, const char *fmt, ...)
{
	va_list ap;
	int ret;

	va_start(ap, fmt);
	ret = vsnprintf(buf, size, fmt, ap);
	va_end(ap);
	return ret;
}
