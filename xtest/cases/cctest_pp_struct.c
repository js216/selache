// SPDX-License-Identifier: MIT
// cctest_pp_struct.c --- cctest case pp_struct
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct ppn {
   int val;
};

int test_main(void)
{
   struct ppn s;
   s.val           = 0x42;
   struct ppn *p   = &s;
   struct ppn **pp = &p;
   return (*pp)->val; /* 0x42 */
}
