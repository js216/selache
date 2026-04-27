#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xCA */
int cctest_char_array(void)
{
   char s[] = "abcd";
   return s[0] + s[3] + (int)sizeof(s); /* 'a'+'d'+5 = 97+100+5 = 202 = 0xCA */
}
