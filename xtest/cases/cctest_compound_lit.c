// SPDX-License-Identifier: MIT
// cctest_compound_lit.c --- cctest case compound_lit
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x0A */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct cpt {
   int x;
   int y;
};

static int cpt_sum(struct cpt p)
{
   return p.x + p.y;
}

int test_main(void)
{
   return cpt_sum((struct cpt){3, 7}); /* 10 = 0xA */
}
