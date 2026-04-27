#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xE2 */
int cctest_divmod(void)
{
   int a = 100, b = 7;
   return (a / b) * 0x10 + (a % b);
}
