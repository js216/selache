// SPDX-License-Identifier: MIT
// cctest_binary_tree.c --- cctest case binary_tree
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

struct tnode {
   int val;
   struct tnode *left;
   struct tnode *right;
};

static int tree_sum(struct tnode *n)
{
   if (!n)
      return 0;
   return n->val + tree_sum(n->left) + tree_sum(n->right);
}

int test_main(void)
{
   struct tnode a, b, c, d;
   d.val   = 4;
   d.left  = 0;
   d.right = 0;
   c.val   = 3;
   c.left  = 0;
   c.right = 0;
   b.val   = 2;
   b.left  = &d;
   b.right = 0;
   a.val   = 1;
   a.left  = &b;
   a.right = &c;
   return tree_sum(&a); /* 1+2+3+4 = 10 = 0xA */
}
