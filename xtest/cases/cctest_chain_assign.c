#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x15 */
int cctest_chain_assign(void)
{
   int a, b, c;
   a = b = c = 7;
   return a + b + c; /* 21 = 0x15 */
}
