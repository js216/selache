// SPDX-License-Identifier: MIT
// cctest_multi_goto_label.c --- cctest case multi_goto_label
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

int test_main(void)
{
   goto second;
first:
second:
   return 0x55;
}
