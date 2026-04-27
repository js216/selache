#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int gcd(int a, int b)
{
   while (b != 0) {
      int t = b;
      b     = a % b;
      a     = t;
   }
   return a;
}

/* @expect 0x06 */
int cctest_gcd(void)
{
   return gcd(48, 18); /* 6 */
}
