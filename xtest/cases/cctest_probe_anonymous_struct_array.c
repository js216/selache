// SPDX-License-Identifier: MIT
// cctest_probe_anonymous_struct_array.c --- cctest case probe_anonymous_struct_array
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x47 */
/* @exp_ticks 0x70 */

struct box {
   int tag;
   struct {
      int x;
      int y;
   };
};

int test_main(void)
{
   struct box rows[2] = {
      { .tag = 1, .x = 2, .y = 3 },
      { .tag = 11, .x = 27, .y = 30 }
   };
   return rows[1].tag + rows[1].x + rows[1].y + rows[0].y;
}
