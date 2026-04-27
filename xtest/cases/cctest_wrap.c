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
int cctest_wrap(void)
{
   unsigned int a = 0;
   a              = a - 1; /* 0xFFFFFFFF */
   return (int)(a >> 24);  /* 0xFF */
}
