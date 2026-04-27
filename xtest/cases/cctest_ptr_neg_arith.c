#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   u.u = 0x44332211;
   /* SHARC is little-endian for -char-size-8 */
   return u.b[0] + u.b[3]; /* 0x11 + 0x44 = 0x55 */
}

/* @expect 0x14 */
int cctest_ptr_neg_arith(void)
{
   int arr[5] = {10, 20, 30, 40, 50};
   int *p     = &arr[4];
   p          = p - 3;
   return *p; /* arr[1] = 20 = 0x14 */
}
