#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x37 */
int cctest_fib(void)
{
   int a = 0, b = 1;
   for (int i = 0; i < 10; i++) {
      int t = a + b;
      a     = b;
      b     = t;
   }
   return a; /* fib(10) = 55 = 0x37 */
}
