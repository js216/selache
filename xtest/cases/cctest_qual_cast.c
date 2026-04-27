#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x55 */
int cctest_qual_cast(void)
{
   int x         = 0x55;
   int *p        = &x;
   const int *cp = (const int *)p; /* cast adds qualifier */
   return *cp;                     /* 0x55 */
}
