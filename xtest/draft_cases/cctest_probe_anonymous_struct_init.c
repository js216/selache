// SPDX-License-Identifier: MIT
// cctest_probe_anonymous_struct_init.c --- cctest case probe_anonymous_struct_init
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x36 */
/* @exp_ticks 0x60 */

struct box {
   int tag;
   struct {
      int x;
      int y;
   };
};

int test_main(void)
{
   struct box b = { .tag = 8, .x = 19, .y = 27 };
   return b.tag + b.x + b.y;
}
