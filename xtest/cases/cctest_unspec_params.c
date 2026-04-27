// SPDX-License-Identifier: MIT
// cctest_unspec_params.c --- cctest case unspec_params
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

   /* &s.i should be aligned to 4 */
   int offset = (char *)&s.i - (char *)&s;
   return (offset >= 2) ? 0x55 : 0xAA; /* at least 2 bytes gap for alignment */
}

static int unspec_params()
{
   return 0x42;
}

int test_main(void)
{
   return unspec_params();
}
