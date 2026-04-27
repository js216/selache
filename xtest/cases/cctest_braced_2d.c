// SPDX-License-Identifier: MIT
// cctest_braced_2d.c --- cctest case braced_2d
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int fwd_static(int x)
{
   return x + 1;
}

int test_main(void)
{
   int m[2][3] = {
       {1, 2, 3},
       {4, 5, 6}
   };
   return m[0][0] + m[0][2] + m[1][1] + m[1][2]; /* 1+3+5+6 = 15 = 0x0F */
}
