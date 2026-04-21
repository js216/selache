/* SPDX-License-Identifier: MIT */
/* assert.h --- Runtime assertion macro */
/* Copyright (c) 2026 Jakob Kastelic */

#undef assert

#ifdef NDEBUG
#define assert(e) ((void)0)
#else
/* The failure hook is named `sel_assert_fail` instead of the
   glibc-style `__assert_fail` so static analysers do not flag
   users of this header for touching a reserved identifier. */
extern void sel_assert_fail(const char *expr, const char *file, int line);
#define assert(e) ((e) ? ((void)0) : sel_assert_fail(#e, __FILE__, __LINE__))
#endif

/* C11's static_assert / _Static_assert. Older cross compilers
   stop at C99 and reject the keyword, so fall back to a
   negative-sized array typedef -- the condition failing yields a
   size of -1 and a compile error pointing at the line. The msg
   argument is accepted for source compatibility with C11 but
   discarded. Native support is preferred whenever
   __STDC_VERSION__ reports C11+. */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
/* compiler provides _Static_assert and <assert.h> macro static_assert */
#else
#define _SEL_SA_CAT2(a, b) a##b
#define _SEL_SA_CAT(a, b) _SEL_SA_CAT2(a, b)
#define static_assert(cond, msg) \
    typedef char _SEL_SA_CAT(_sel_sa_, __LINE__)[(cond) ? 1 : -1]
#define _Static_assert(cond, msg) static_assert(cond, msg)
#endif
