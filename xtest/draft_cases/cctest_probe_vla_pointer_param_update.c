// SPDX-License-Identifier: MIT
// cctest_probe_vla_pointer_param_update.c --- cctest case probe_vla_pointer_param_update
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x33 */
/* @exp_ticks 0xa0 */

static int update(int n, int (*row)[n])
{
   (*row)[1] += (*row)[3];
   return (*row)[1] + (*row)[2];
}

int test_main(void)
{
   int n = 4;
   int row[n];
   row[0] = 5;
   row[1] = 11;
   row[2] = 17;
   row[3] = 23;
   return update(n, &row);
}
