// SPDX-License-Identifier: MIT
// cctest_mul_zero.c --- cctest case mul_zero
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

      struct {
         unsigned int lo : 16;
         unsigned int hi : 16;
      } parts;
   } u;

   u.raw      = 0;
   u.parts.lo = 0x1234;
   u.parts.hi = 0x5678;
   return (u.raw == 0x56781234u) ? 0x55 : 0xAA;
}

int test_main(void)
{
   volatile int x = 42;
   return x * 0;
}
