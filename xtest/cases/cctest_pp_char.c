// SPDX-License-Identifier: MIT
// cctest_pp_char.c --- cctest case pp_char
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x41 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int test_main(void)
{
#if 'A' == 65
   return 0x41;
#else
   return 0;
#endif
}
