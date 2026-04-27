// SPDX-License-Identifier: MIT
// cctest_opaque_handle.c --- cctest case opaque_handle
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

typedef struct opaque_s opaque_t;

struct opaque_s {
   int val;
   opaque_t *next;
};

int test_main(void)
{
   opaque_t a, b;
   a.val  = 10;
   a.next = &b;
   b.val  = 20;
   b.next = 0;
   return a.val + a.next->val; /* 30 = 0x1E */
}
