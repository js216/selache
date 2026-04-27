// SPDX-License-Identifier: MIT
// cctest_extern_fndef.c --- cctest case extern_fndef
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x42 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

extern int cctest_extern_fndef(void);

int test_main(void)
{
   return 0x42;
}
