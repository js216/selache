// SPDX-License-Identifier: MIT
// cctest_pp_logic.c --- cctest case pp_logic
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x55 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define PP_X 1
#define PP_Y 0

int test_main(void)
{
#if defined(PP_X) && !defined(PP_Z) && (PP_X > PP_Y)
   return 0x55;
#else
   return 0xAA;
#endif
}
