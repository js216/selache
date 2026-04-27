// SPDX-License-Identifier: MIT
// cctest_sizeof_deref_null.c --- cctest case sizeof_deref_null
// Copyright (c) 2026 Jakob Kastelic

/* @expect 4 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.a = 5;
   bf.b = 10;
   bf.c = 3;
   bf.d = 7;
   return bf.a * bf.d + bf.b + bf.c; /* 35 + 10 + 3 = 48 = 0x30 */
}

int test_main(void)
{
   int *p = 0;
   return (int)sizeof(*p); /* sizeof(int) = 4, *p is NOT evaluated */
}
