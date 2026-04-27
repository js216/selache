// SPDX-License-Identifier: MIT
// cctest_global_desig.c --- cctest case global_desig
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x28 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static struct {
   int a;
   int b;
   int c;
} g_desig_struct = {.c = 30, .a = 10};

int test_main(void)
{
   return g_desig_struct.a + g_desig_struct.b + g_desig_struct.c;
   /* 10 + 0 + 30 = 40 = 0x28 */
}
