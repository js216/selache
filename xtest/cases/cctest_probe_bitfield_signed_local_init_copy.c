// SPDX-License-Identifier: MIT
// cctest_probe_bitfield_signed_local_init_copy.c --- cctest case probe_bitfield_signed_local_init_copy
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x59 */
/* @exp_ticks 0x80 */

struct bits {
   signed int a : 5;
   unsigned int b : 6;
};

int test_main(void)
{
   struct bits x = { -6, 24 };
   int v = x.a;
   return v < 0 ? x.b + 65 : 0;
}
