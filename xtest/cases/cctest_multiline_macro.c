#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define MULTI_LINE_MACRO(a, b) ((a) + (b))

/* @expect 0x30 */
int cctest_multiline_macro(void)
{
   return MULTI_LINE_MACRO(0x10, 0x20); /* 0x30 */
}
