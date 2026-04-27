#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x80 */
int cctest_unsigned_div(void)
{
   unsigned int a = 0x80000000u; /* 2147483648 */
   unsigned int b = 0x10000u;    /* 65536 */
   unsigned int q = a / b;       /* 32768 = 0x8000 */
   return (int)(q >> 8);         /* 0x80 = 128 */
}
