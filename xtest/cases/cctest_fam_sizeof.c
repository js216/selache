// SPDX-License-Identifier: MIT
// cctest_fam_sizeof.c --- cctest case fam_sizeof
// Copyright (c) 2026 Jakob Kastelic

/* @expect 4 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct fam_s {
   int n;
   int data[];
};

int test_main(void)
{
   return (int)sizeof(
       struct fam_s); /* only sizeof(int) for n; FAM not counted */
}
