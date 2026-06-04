// SPDX-License-Identifier: MIT
// cctest_probe_init_override.c --- cctest case probe_init_override
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x49 */
/* @exp_ticks 0x40 */

static int a[6] = { [1] = 5, [3] = 9, [1] = 7, [5] = 3 };

int test_main(void)
{
   return a[1] * 10 + a[3] - a[5] * 2;
}
