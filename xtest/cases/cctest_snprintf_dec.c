// SPDX-License-Identifier: MIT
// cctest_snprintf_dec.c --- cctest case snprintf_dec
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0F */

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
   char buf[16] = {0};
   int n = snprintf(buf, sizeof(buf), "%d", 15);
   if (n != 2) return 0;
   if (buf[0] != '1' || buf[1] != '5') return 0;
   return 15;
}
