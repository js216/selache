#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define PASTE(a, b) a##b

/* @expect 0x42 */
int cctest_token_paste(void)
{
   int xy = 0x42;
   return PASTE(x, y); /* 0x42 */
}
