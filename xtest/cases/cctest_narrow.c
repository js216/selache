#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x64 */
int cctest_narrow(void)
{
   unsigned int u = 0xFFFFFF9C;
   signed char sc = (signed char)u; /* 0x9C → -100 */
   return (int)sc + 200;            /* 100 = 0x64 */
}
