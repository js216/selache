#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0xFF */
int cctest_bitnot_unsigned(void)
{
   unsigned int a = 0xFFFFFF00;
   unsigned int b = ~a;    /* 0x000000FF */
   return (int)(b & 0xFF); /* 0xFF */
}
