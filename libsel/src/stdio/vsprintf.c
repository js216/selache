/* SPDX-License-Identifier: MIT */
/* vsprintf.c --- Formatted output into an unsized buffer */
/* Copyright (c) 2026 Jakob Kastelic */

#include "stddef.h"
#include "stdarg.h"

int vsnprintf(char *buf, size_t size, const char *fmt, va_list ap);

__attribute__((weak)) int vsprintf(char *buf, const char *fmt, va_list ap)
{
	return vsnprintf(buf, (size_t)-1, fmt, ap);
}
