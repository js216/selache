#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 9 */
int cctest_all_compound(void)
{
   int x = 100;
   x /= 5;    /* 20 */
   x %= 7;    /* 6 */
   x &= 0xF;  /* 6 */
   x |= 0x10; /* 0x16 */
   x ^= 0x04; /* 0x12 */
   x >>= 1;   /* 9 */
   return x;
}
