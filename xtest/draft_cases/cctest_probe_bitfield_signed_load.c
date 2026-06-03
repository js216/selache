// SPDX-License-Identifier: MIT
// cctest_probe_bitfield_signed_load.c --- cctest case probe_bitfield_signed_load
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x52 */
/* @exp_ticks 0x70 */

struct bits {
   signed int a : 5;
   unsigned int b : 6;
};

int test_main(void)
{
   struct bits x = { -3, 17 };
   return x.a < 0 ? x.b + 65 : 0;
}
