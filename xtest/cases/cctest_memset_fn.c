// SPDX-License-Identifier: MIT
// cctest_memset_fn.c --- cctest case memset_fn
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xAB */

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
   uint8_t buf[8];
   memset(buf, 0xAB, sizeof(buf));
   for (int i = 0; i < 8; i++)
      if (buf[i] != 0xAB) return 0;
   return buf[3];
}
