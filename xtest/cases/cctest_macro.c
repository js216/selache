#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))

/* @expect 0x17 */
int cctest_macro(void)
{
   return MAX(3, 7) + SQUARE(4); /* 7+16=23 = 0x17 */
}
