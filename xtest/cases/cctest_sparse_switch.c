// SPDX-License-Identifier: MIT
// cctest_sparse_switch.c --- cctest case sparse_switch
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int sparse_switch(int x)
{
   switch (x) {
      case 0: return 1;
      case 100: return 2;
      case 1000: return 3;
      case 9999: return 4;
      default: return 0;
   }
}

int test_main(void)
{
   return sparse_switch(0) + sparse_switch(100) + sparse_switch(1000) +
          sparse_switch(9999);
   /* 1+2+3+4 = 10 = 0x0A */
}
