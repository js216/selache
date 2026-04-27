#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int ret_char(void)
{
   char c = 0x42;
   return c; /* promoted to int */
}

/* @expect 0x42 */
int cctest_ret_conv(void)
{
   return ret_char(); /* 0x42 */
}
