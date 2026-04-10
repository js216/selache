/* SPDX-License-Identifier: MIT */
/* stddef.h --- Standard type definitions */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef _STDDEF_H
#define _STDDEF_H

#ifdef __SELACHE__
typedef unsigned int size_t;
typedef int ptrdiff_t;
#define offsetof(type, member) ((size_t)&((type *)0)->member)
#else
typedef __SIZE_TYPE__ size_t;
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#define offsetof(type, member) __builtin_offsetof(type, member)
#endif

#define NULL ((void *)0)

#endif
