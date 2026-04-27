// SPDX-License-Identifier: MIT
// cctest_ring_buffer.c --- cctest case ring_buffer
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x12 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int test_main(void)
{
   int buf[4]        = {0, 0, 0, 0};
   unsigned int head = 0;
   for (int i = 1; i <= 6; i++) {
      buf[head & 3] = i;
      head++;
   }
   /* After 6 writes: buf[0]=4(was5? no), let me trace:
      i=1: buf[0]=1, head=1
      i=2: buf[1]=2, head=2
      i=3: buf[2]=3, head=3
      i=4: buf[3]=4, head=4
      i=5: buf[0]=5, head=5
      i=6: buf[1]=6, head=6
      buf = {5,6,3,4} */
   return buf[0] + buf[1] + buf[2] + buf[3]; /* 5+6+3+4 = 18? no that's 0x12. */
   /* Let me recalc: 5+6+3+4=18=0x12. */
}
