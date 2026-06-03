// SPDX-License-Identifier: MIT
// cctest_probe_vla_typedef_pointer_param.c --- cctest case probe_vla_typedef_pointer_param
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x26 */
/* @exp_ticks 0xa0 */

static int use(int n)
{
   typedef int row_t[n];
   row_t row;
   row[0] = 13;
   row[n - 1] = 25;
   row_t *p = &row;
   return (*p)[0] + (*p)[n - 1];
}

int test_main(void)
{
   return use(4);
}
