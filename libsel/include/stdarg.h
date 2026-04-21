/* SPDX-License-Identifier: MIT */
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
#elif defined(__ADSPSHARC__)
/* the SHARC+ C compiler on SHARC+ uses byte-addressed variadic arg slots rounded up
   to 4 bytes. va_list is a byte pointer; __builtin_va_start wants the
   last-named-arg size in bytes; va_arg steps by the rounded-up byte
   size of the target type. */
typedef char *va_list;
#define _SEL_VA_BND(X) ((sizeof(X) + 3UL) & ~3UL)
#define va_start(ap, v) \
    ((ap) = (va_list)__builtin_va_start((void *)&(v), _SEL_VA_BND(v)))
#define va_arg(ap, t) \
    (*(t *)(((ap) += _SEL_VA_BND(t)) - _SEL_VA_BND(t)))
#define va_copy(dst, src) ((dst) = (src))
#define va_end(ap) ((void)((ap) = 0))
#else
typedef __builtin_va_list va_list;
#define va_start(ap, last) __builtin_va_start(ap, last)
#define va_arg(ap, type)   __builtin_va_arg(ap, type)
#define va_end(ap)         __builtin_va_end(ap)
#define va_copy(dest, src) __builtin_va_copy(dest, src)
#endif

#endif
