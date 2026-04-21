/* SPDX-License-Identifier: MIT */
/* stdio.h --- Minimal standard I/O */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef _STDIO_H
#define _STDIO_H

#include "stddef.h"
#include "stdarg.h"

/* Single-byte sink. The application must supply this; printf pushes
   every output byte through it. Returns the character cast to int,
   or a negative value on error. */
int putchar(const int c);

/* Minimal printf supporting %s, %c, %d, %x (with optional zero-pad
   and width). Output is routed through putchar. */
int printf(const char *fmt, ...);

int snprintf(char *buf, size_t size, const char *fmt, ...);
int sprintf(char *buf, const char *fmt, ...);
int vsnprintf(char *buf, size_t size, const char *fmt, va_list ap);
int vsprintf(char *buf, const char *fmt, va_list ap);

#endif
