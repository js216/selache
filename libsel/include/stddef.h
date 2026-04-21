/* SPDX-License-Identifier: MIT */
/* stddef.h --- Standard type definitions */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef _STDDEF_H
#define _STDDEF_H

#if defined(__SELACHE__)
typedef unsigned int size_t;
typedef int ptrdiff_t;
#define offsetof(type, member) \
    ((size_t)((char *)&((type *)0)->member - (char *)0))
#elif defined(__ADSPSHARC__)
/* the SHARC+ C compiler builtin expects size_t = unsigned long. Long and int are both
   32-bit under -char-size-8, so this matches any other uint32_t use. */
typedef unsigned long size_t;
typedef signed long ptrdiff_t;
#define offsetof(type, member) \
    ((size_t)((char *)&((type *)0)->member - (char *)0))
#else
typedef __SIZE_TYPE__ size_t;
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#define offsetof(type, member) __builtin_offsetof(type, member)
#endif

#define NULL ((void *)0)

#endif
