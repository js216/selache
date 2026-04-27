// SPDX-License-Identifier: MIT
// cctest_eval_op.c --- cctest case eval_op
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x11 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int eval_op(int op, int a, int b)
{
   switch (op) {
      case '+': return a + b;
      case '-': return a - b;
      case '*': return a * b;
      case '&': return a & b;
      default: return 0;
   }
}

int test_main(void)
{
   int r = eval_op('+', 3, 4); /* 7 */
   r     = eval_op('*', r, 2); /* 14 */
   r     = eval_op('-', r, 1); /* 13 */
   r     = eval_op('+', r, 4); /* 17 = 0x11 */
   return r;
}
