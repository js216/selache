// SPDX-License-Identifier: MIT
// cctest_global_enum_dim.c --- cctest case global_enum_dim
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x10 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return s.a + s.b + s.c; /* 10+0+0 = 10 */
}

enum { DIM_VAL = 4 };

static int g_enum_dim[DIM_VAL];

int test_main(void)
{
   return (int)sizeof(g_enum_dim); /* 4 * 4 = 16 */
}
