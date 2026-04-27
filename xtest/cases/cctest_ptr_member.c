// SPDX-License-Identifier: MIT
// cctest_ptr_member.c --- cctest case ptr_member
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1E */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct spair {
   int first;
   int second;
};

int test_main(void)
{
   struct spair p;
   p.first  = 10;
   p.second = 20;
   int *fp  = &p.first;
   return *fp + p.second; /* 30 = 0x1E */
}
