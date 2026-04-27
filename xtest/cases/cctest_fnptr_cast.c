// SPDX-License-Identifier: MIT
// cctest_fnptr_cast.c --- cctest case fnptr_cast
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

static int fncast_target(int x)
{
   return x + 1;
}

int test_main(void)
{
   int (*fp)(int)   = fncast_target;
   void (*vp)(void) = (void (*)(void))fp; /* cast to different fnptr */
   int (*rp)(int)   = (int (*)(int))vp;   /* cast back */
   return rp(0x41);                       /* 0x42 */
}
