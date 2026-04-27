#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x63 */
int cctest_for_scope(void)
{
   int i = 99;
   for (int i = 0; i < 5; i++)
      ;
   return i; /* outer i still 99 = 0x63 */
}
