// SPDX-License-Identifier: MIT
// cctest_rec_local_arr.c --- cctest case rec_local_arr
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0C */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int rec_arr_sum(int depth)
{
   int buf[4];
   buf[0] = depth;
   buf[1] = depth * 2;
   if (depth <= 1)
      return buf[0] + buf[1];
   return buf[0] + rec_arr_sum(depth - 1);
}

int test_main(void)
{
   return rec_arr_sum(4); /* 4+3+2+(1+2) = 12 = 0x0C */
}
