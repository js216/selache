#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 2 */
int cctest_unsigned_mod(void)
{
   unsigned int a = 17, b = 5;
   return (int)(a % b); /* 2 */
}
