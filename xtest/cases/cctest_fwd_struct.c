// SPDX-License-Identifier: MIT
// cctest_fwd_struct.c --- cctest case fwd_struct
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x44 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>



/* Forward-declared struct used as pointer before definition (C99 6.7.2.3) */
struct fwd_node;
static int fwd_val(struct fwd_node *p);
struct fwd_node { int val; struct fwd_node *next; };
static int fwd_val(struct fwd_node *p) { return p->val; }
int test_main(void) {
  struct fwd_node n;
  n.val = 0x44;
  n.next = 0;
  return fwd_val(&n); /* 0x44 */
}
