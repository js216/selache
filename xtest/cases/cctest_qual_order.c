#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x42 */
int cctest_qual_order(void)
{
   const volatile int a = 0x42;
   volatile const int b = 0x42;
   int const volatile c = 0x42;
   return (a == b && b == c) ? 0x42 : 0;
}
