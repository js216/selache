// SPDX-License-Identifier: MIT
// cctest_buf_view.c --- cctest case buf_view
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

struct buf_view {
   const int *data;
   int len;
};

static int buf_sum(const struct buf_view *v)
{
   int s = 0;
   for (int i = 0; i < v->len; i++)
      s += v->data[i];
   return s;
}

int test_main(void)
{
   const int arr[] = {1, 2, 3, 4, 5};
   struct buf_view v;
   v.data = arr;
   v.len  = 5;
   return buf_sum(&v); /* 15 = 0x0F */
}
