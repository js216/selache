#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   s.val    = -5;    /* stored as 8-bit: 0xFB */
   int wide = s.val; /* sign-extends to -5 */
   return (wide == -5) ? 0x55 : 0xAA;
}

/* @expect 0x55 */
int cctest_const_complit(void)
{
   const int *p = (const int[]){10, 20, 30};
   return (p[0] + p[1] + p[2] == 60) ? 0x55 : 0xAA;
}
