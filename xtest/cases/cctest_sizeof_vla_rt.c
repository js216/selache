// SPDX-License-Identifier: MIT
// cctest_sizeof_vla_rt.c --- cctest case sizeof_vla_rt
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14 */

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
   int n = 5;
   int vla[n];
   return (int)sizeof(vla); /* 20 */
}
