#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   /* sizeof should be at least 4 + 12 = 16 */
   return (sizeof(s) >= 16) ? 0x55 : 0xAA;
}

static void divmod(int a, int b, int *q, int *r)
{
   *q = a / b;
   *r = a % b;
}

/* @expect 0x55 */
int cctest_out_ptr_pair(void)
{
   int q, r;
   divmod(17, 5, &q, &r);
   return (q == 3 && r == 2) ? 0x55 : 0xAA;
}
