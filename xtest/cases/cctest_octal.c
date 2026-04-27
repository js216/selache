#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x7F */
int cctest_octal(void)
{
   int a = 0177; /* 127 = 0x7F */
   return a;
}
