// SPDX-License-Identifier: MIT
// cctest_chain_deref.c --- cctest case chain_deref
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct chain {
   int val;
   struct chain *next;
};

int test_main(void)
{
   struct chain c, b, a;
   c.val  = 30;
   c.next = 0;
   b.val  = 20;
   b.next = &c;
   a.val  = 10;
   a.next = &b;
   return a.next->next->val; /* 30 = 0x1E */
}
