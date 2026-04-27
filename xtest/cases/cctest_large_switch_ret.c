// SPDX-License-Identifier: MIT
// cctest_large_switch_ret.c --- cctest case large_switch_ret
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xAA */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int color_val(int c)
{
   switch (c) {
      case 0: return 10;
      case 1: return 20;
      case 2: return 30;
      case 3: return 40;
      case 4: return 50;
      case 5: return 60;
      case 6: return 70;
      case 7: return 80;
      case 8: return 90;
      case 9: return 100;
      case 10: return 110;
      case 11: return 120;
      case 12: return 130;
      case 13: return 140;
      case 14: return 150;
      case 15: return 160;
      default: return 0;
   }
}

int test_main(void)
{
   return color_val(6) + color_val(9); /* 70+100 = 170 = 0xAA */
}
