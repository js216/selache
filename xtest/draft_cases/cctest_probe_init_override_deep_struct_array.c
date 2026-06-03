// SPDX-License-Identifier: MIT
// cctest_probe_init_override_deep_struct_array.c --- cctest case probe_init_override_deep_struct_array
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6d */
/* @exp_ticks 0x70 */

struct inner {
   int v[3];
};

struct outer {
   struct inner in[2];
};

static struct outer g = {
   .in[1].v[0] = 3,
   .in[1].v[1] = 4,
   .in[1].v[0] = 10,
   .in[0].v[2] = 5
};

int test_main(void)
{
   return g.in[1].v[0] * 10 + g.in[1].v[1] + g.in[0].v[2];
}
