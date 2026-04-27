// SPDX-License-Identifier: MIT
// cctest_compound_desig.c --- cctest case compound_desig
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x28 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct dlit {
   int x;
   int y;
   int z;
};

static int dlit_sum(struct dlit s)
{
   return s.x + s.y + s.z;
}

int test_main(void)
{
   return dlit_sum((struct dlit){.z = 30, .x = 10}); /* 10+0+30 = 40 = 0x28 */
}
