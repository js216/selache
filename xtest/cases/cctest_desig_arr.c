// SPDX-License-Identifier: MIT
// cctest_desig_arr.c --- cctest case desig_arr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct arrwrap {
   int a[3];
   int n;
};

int test_main(void)
{
   struct arrwrap s = {
       .a = {1, 2, 3},
         .n = 4
   };
   return s.a[0] + s.a[1] + s.a[2] + s.n; /* 10 = 0xA */
}
