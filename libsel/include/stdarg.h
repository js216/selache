/* SPDX-License-Identifier: GPL-3.0 */
/* stdarg.h --- Variable argument list support */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef _STDARG_H
#define _STDARG_H

#ifdef __SELACHE__
typedef int *__va_list;
#define va_list __va_list
#define va_start(ap, last) ((void)((ap) = (int *)&(last) - 1))
#define va_arg(ap, type) (*(type *)((ap)--))
#define va_end(ap) ((void)0)
#define va_copy(dest, src) ((dest) = (src))
#else
typedef __builtin_va_list va_list;
#define va_start(ap, last) __builtin_va_start(ap, last)
#define va_arg(ap, type)   __builtin_va_arg(ap, type)
#define va_end(ap)         __builtin_va_end(ap)
#define va_copy(dest, src) __builtin_va_copy(dest, src)
#endif

#endif
