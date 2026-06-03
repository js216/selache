// SPDX-License-Identifier: MIT
// cctest_probe_bitfield_signed_global.c --- cctest case probe_bitfield_signed_global
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x58 */
/* @exp_ticks 0x70 */

struct bits {
   signed int a : 5;
   unsigned int b : 6;
};

static struct bits g = { -5, 23 };

int test_main(void)
{
   return g.a < 0 ? g.b + 65 : 0;
}
