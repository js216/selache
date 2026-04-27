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
int cctest_overflow_detect(void)
{
   unsigned int a   = 0xFFFFFFFF;
   unsigned int b   = 1;
   unsigned int sum = a + b;
   int overflowed   = (sum < a); /* wrapped → sum < a */
   return overflowed ? 0x55 : 0xAA;
}
