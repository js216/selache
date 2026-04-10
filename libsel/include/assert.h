/* SPDX-License-Identifier: GPL-3.0 */
/* assert.h --- Runtime assertion macro */
/* Copyright (c) 2026 Jakob Kastelic */

#undef assert

#ifdef NDEBUG
#define assert(e) ((void)0)
#else
extern void __assert_fail(const char *expr, const char *file, int line);
#define assert(e) ((e) ? ((void)0) : __assert_fail(#e, __FILE__, __LINE__))
#endif
