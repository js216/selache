// SPDX-License-Identifier: MIT
// cctest_offsetof.c --- cctest case offsetof
// Copyright (c) 2026 Jakob Kastelic

/* @expect 2 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct off_s {
   int a;
   int b;
   int c;
};

int test_main(void)
{
   struct off_s s;
   int off = (int)((char *)&s.c - (char *)&s);
   return off / (int)sizeof(int); /* 2 (third member) */
}
