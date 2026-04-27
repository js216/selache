// SPDX-License-Identifier: MIT
// cctest_enum_sizeof.c --- cctest case enum_sizeof
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0C */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum sizeof_enum { SE_INTS = sizeof(int), SE_DBL = SE_INTS * 2 };

int test_main(void)
{
   return SE_INTS + SE_DBL; /* 4 + 8 = 12 = 0x0C */
}
