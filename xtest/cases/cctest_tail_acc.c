// SPDX-License-Identifier: MIT
// cctest_tail_acc.c --- cctest case tail_acc
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x15 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct acc_node {
   int val;
   struct acc_node *next;
};

static int acc_sum(const struct acc_node *p, int acc)
{
   if (!p)
      return acc;
   return acc_sum(p->next, acc + p->val);
}

int test_main(void)
{
   struct acc_node c = {3, 0};
   struct acc_node b = {5, &c};
   struct acc_node a = {13, &b};
   return acc_sum(&a, 0); /* 13+5+3 = 21 = 0x15 */
}
