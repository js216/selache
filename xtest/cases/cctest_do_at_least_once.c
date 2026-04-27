#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x01 */
int cctest_do_at_least_once(void)
{
   int count = 0;
   do {
      count++;
   } while (0);
   return count;
}
