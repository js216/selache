// SPDX-License-Identifier: MIT
// cctest_iscntrl.c --- cctest case iscntrl
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x33 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int test_main(void)
{
   int r = 0;
   if (iscntrl('\n')) r |= 0x01;
   if (iscntrl('\t')) r |= 0x02;
   if (!iscntrl(' ')) r |= 0x10;
   if (!iscntrl('A')) r |= 0x20;
   return r;
}
