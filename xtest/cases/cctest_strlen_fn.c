// SPDX-License-Identifier: MIT
// cctest_strlen_fn.c --- cctest case strlen_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0B */

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
   /* call libsel strlen explicitly */
   size_t n = strlen("hello world");
   return (int)n; /* 11 */
}
