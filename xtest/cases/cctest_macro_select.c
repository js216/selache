#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define FIRST_ARG(x)     (x)
#define FIRST_ARG(a, b)  (a)
#define SECOND_ARG(a, b) (b)

/* @expect 0x55 */
int cctest_macro_select(void)
{
   int x = FIRST_ARG(0x55, 0xAA);
   int y = SECOND_ARG(0xAA, 0x55);
   return (x == 0x55 && y == 0x55) ? 0x55 : 0xAA;
}
