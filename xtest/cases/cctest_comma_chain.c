#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

   return (int)sizeof(union u); /* sizeof(double)=4 with -double-size-32 */
}

/* @expect 0x14 */
int cctest_comma_chain(void)
{
   int x = 10;
   int y = (x += 5, x += 5, x);
   return y; /* 20 */
}
