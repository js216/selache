// SPDX-License-Identifier: MIT
// cctest_probe_anonymous_struct_global.c --- cctest case probe_anonymous_struct_global
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3c */
/* @exp_ticks 0x60 */

struct box {
   int tag;
   struct {
      int x;
      int y;
   };
};

static struct box g = { .tag = 10, .x = 21, .y = 29 };

int test_main(void)
{
   return g.tag + g.x + g.y;
}
