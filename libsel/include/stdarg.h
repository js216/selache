/* SPDX-License-Identifier: MIT */
/* stdarg.h --- Variable argument list support */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef _STDARG_H
#define _STDARG_H

#ifdef __SELACHE__
/* SHARC+ pushes every argument (including the named ones) onto the
   caller's stack in reverse order, so the callee sees arg k at
   DM(I6 + k + 1). The first variadic arg therefore lives one slot
   past the last named arg, and variadic args extend upward in memory
   (increasing addresses). __builtin_va_start_sel returns the address
   of that first variadic arg directly; va_arg walks upward via
   post-increment. The last-named-arg parameter is unused by the
   macro but kept for C99 source-level compatibility with stdarg. */
typedef int *__va_list;
#define va_list __va_list
#define va_start(ap, last) ((void)(sizeof(last)), \
    ((ap) = (int *)__builtin_va_start_sel()))
#define va_arg(ap, type) (*(type *)((ap)++))
#define va_end(ap) ((void)0)
#define va_copy(dest, src) ((dest) = (src))
#elif defined(__ADSPSHARC__)
/* SHARC+ with -char-size-8 uses byte addressing. __builtin_va_start
   takes the last-named-arg size in BYTES, rounded up to a 4-byte
   boundary. va_list is a byte pointer; va_arg advances it by the
   argument's 4-byte-aligned size. Arguments larger than 4 bytes
   per slot are not used by libsel. */
typedef unsigned char *va_list;
#define _SEL_VA_BND(X) ((sizeof(X) + 3U) & ~3U)
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
