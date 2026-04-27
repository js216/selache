// SPDX-License-Identifier: MIT
// cctest_fnptr_null_check.c --- cctest case fnptr_null_check
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x30 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

int test_main(void)
{
   int (*fp)(int, int)      = helper_add;
   int (*null_fp)(int, int) = 0;
   int r                    = 0;
   if (fp)
      r += fp(0x10, 0x20); /* non-null → call: 0x30 */
   if (null_fp)
      r += 0xFF; /* null → skip */
   return r;     /* 0x30 */
}
