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
/* The SHARC+ C compiler stores variadics in 32-bit-word-tagged DM
   slots, one slot per argument. va_list is a word pointer;
   __builtin_va_start wants the last-named-arg size measured in
   32-bit slots (so 1 for any up-to-4-byte arg). va_arg steps the
   pointer by one slot per argument. Anything larger than 4 bytes
   per argument is not supported. */
typedef unsigned int *va_list;
#define _SEL_VA_SLOTS(X) (((sizeof(X) + 3U) >> 2) ? ((sizeof(X) + 3U) >> 2) : 1)
#define va_start(ap, v) \
    ((ap) = (va_list)__builtin_va_start((void *)&(v), _SEL_VA_SLOTS(v)))
#define va_arg(ap, t) (*(t *)(ap++))
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
