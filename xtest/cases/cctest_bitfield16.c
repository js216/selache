#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   bf.val = -1;                       /* 0b11 → sign-extends to -1 */
   return (bf.val < 0) ? 0xAA : 0xBB; /* 0xAA */
}

/* @expect 0xDF */
int cctest_bitfield16(void)
{
   struct {
      unsigned int lo : 16;
      unsigned int hi : 16;
   } bf;
