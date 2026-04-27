#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x50 */
int cctest_const_fold(void)
{
   const int a = 2 + 3;     /* 5 */
   const int b = a * 4;     /* 20 */
   const int c = b - a + 5; /* 20 */
   return c * 4;            /* 80 = 0x50 */
}
