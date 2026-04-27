#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xFE */
int cctest_char_plus_char(void)
{
   unsigned char a = 127;
   unsigned char b = 127;
   int sum         = a + b; /* promoted to int, no overflow */
   return sum;              /* 254 = 0xFE */
}
