// SPDX-License-Identifier: MIT
// cctest_twos_compl.c --- cctest case twos_compl
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
   unsigned int u = (unsigned int)(-1);
   return (u == 0xFFFFFFFFu) ? 0x55 : 0xAA;
}
