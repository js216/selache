// SPDX-License-Identifier: MIT
// cctest_probe_funcptr_array_param.c --- cctest case probe_funcptr_array_param
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x23 */
/* @exp_ticks 0x200 */

static int a(void)
{
   return 3;
}

static int b(void)
{
   return 5;
}

static int sum(int (*fp[2])(void))
{
   return fp[0]() * 10 + fp[1]();
}

int test_main(void)
{
   int (*tbl[2])(void) = { a, b };
   return sum(tbl);
}
