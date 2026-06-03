// SPDX-License-Identifier: MIT
// cctest_probe_vla_bound_capture.c --- cctest case probe_vla_bound_capture
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1d */
/* @exp_ticks 0x80 */

int test_main(void)
{
   int n = 5;
   typedef int row_t[n];
   n = 9;
   row_t row;
   row[0] = n;
   return (int)sizeof(row) + row[0];
}
