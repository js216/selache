#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x56 */
int cctest_volatile(void)
{
   volatile int x = 0x55;
   x              = x + 1;
   return x; /* 0x56 */
}
