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
int cctest_div_mod_identity(void)
{
   int a = -17, b = 5;
   int q = a / b; /* -3 */
   int r = a % b; /* -2 */
   return (q * b + r == a) ? 0x55 : 0xAA;
}
