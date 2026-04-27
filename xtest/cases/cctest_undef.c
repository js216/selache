// SPDX-License-Identifier: MIT
// cctest_undef.c --- cctest case undef
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

#define UNDEF_VAL 10
#undef UNDEF_VAL
#define UNDEF_VAL 0x42

int test_main(void)
{
   return UNDEF_VAL; /* 0x42 */
}
