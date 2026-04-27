#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xC8 */
int cctest_int_promo(void)
{
   char a = 10;
   char b = 20;
   return a * b; /* 200 = 0xC8 */
}
