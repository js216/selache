// SPDX-License-Identifier: MIT
// cctest_date_macro.c --- cctest case date_macro
// Copyright (c) 2026 Jakob Kastelic

/* @expect 1 */

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
   const char *d = __DATE__;
   return (d[0] != '\0') ? 1 : 0; /* 1 */
}
