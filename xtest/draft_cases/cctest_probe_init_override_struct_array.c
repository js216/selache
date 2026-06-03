// SPDX-License-Identifier: MIT
// cctest_probe_init_override_struct_array.c --- cctest case probe_init_override_struct_array
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7a */
/* @exp_ticks 0x60 */

struct rec {
   int a;
   int b;
};

static struct rec rows[2] = {
   [1].a = 4,
   [1].b = 8,
   [1].a = 11,
   [0].b = 12
};

int test_main(void)
{
   return rows[1].a * 10 + rows[1].b + rows[0].b / 3;
}
