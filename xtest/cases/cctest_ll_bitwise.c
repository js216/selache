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
int cctest_ll_bitwise(void)
{
   long long a = 0x00FF00FF00FF00FFLL;
   long long b = 0xFF00FF00FF00FF00LL;
   long long c = a | b;
   return (c == -1LL) ? 0x55 : 0xAA; /* all bits set = -1 */
}
