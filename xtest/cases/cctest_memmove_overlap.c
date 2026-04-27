// SPDX-License-Identifier: MIT
// cctest_memmove_overlap.c --- cctest case memmove forward-overlap
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x414243 */

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
   /* Classic forward-overlap case: shift "ABCDEF" right by one with
    * memmove(buf+1, buf, 5). memcpy is undefined here and would
    * typically clobber bytes; memmove must produce the correct
    * post-state {'A','A','B','C','D','E','F'}. */
   char buf[8] = "ABCDEF";  /* buf[6] = '\0', buf[7] = '\0' */
   memmove(buf + 1, buf, 5);

   /* Verify the full shifted region: A A B C D E F. */
   if (buf[0] != 'A') return 0;
   if (buf[1] != 'A') return 0;
   if (buf[2] != 'B') return 0;
   if (buf[3] != 'C') return 0;
   if (buf[4] != 'D') return 0;
   if (buf[5] != 'E') return 0;
   if (buf[6] != 'F') return 0;
   if (buf[7] != '\0') return 0;

   /* Distinguishing: a naive forward memcpy would have written
    * buf[1]='A', then buf[2] would read the freshly-written buf[1]
    * giving 'A' instead of 'B'. We've checked buf[2]=='B' above,
    * so memmove handled the overlap. Encode three witness bytes
    * ('A','B','C' = the key positions that prove correctness). */
   return ((unsigned)(unsigned char)buf[1] << 16)
        | ((unsigned)(unsigned char)buf[2] << 8)
        | (unsigned)(unsigned char)buf[3];
   /* = 0x41 << 16 | 0x42 << 8 | 0x43 = 0x414243 */
}
