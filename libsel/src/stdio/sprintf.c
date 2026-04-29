/* SPDX-License-Identifier: MIT */
/* sprintf.c --- Formatted output into an unsized buffer (variadic) */
/* Copyright (c) 2026 Jakob Kastelic */

#include "stddef.h"
#include "stdarg.h"

int vsprintf(char *buf, const char *fmt, va_list ap);

__attribute__((weak)) int sprintf(char *buf, const char *fmt, ...)
{
	va_list ap;
	int ret;

	va_start(ap, fmt);
	ret = vsprintf(buf, fmt, ap);
	va_end(ap);
	return ret;
}
