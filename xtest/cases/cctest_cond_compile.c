// SPDX-License-Identifier: MIT
// cctest_cond_compile.c --- cctest case cond_compile
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x20 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define CCTEST_COND_VAL 2

int test_main(void)
{
#if CCTEST_COND_VAL == 1
   return 0x10;
#elif CCTEST_COND_VAL == 2
   return 0x20;
#else
   return 0x30;
#endif
}
