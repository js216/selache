#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int first_char(const char *s)
{
   return s[0];
}

/* @expect 0x68 */
int cctest_str_param(void)
{
   return first_char("hello"); /* 'h' = 104 = 0x68 */
}
