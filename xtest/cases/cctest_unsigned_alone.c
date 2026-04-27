#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x12C */
int cctest_unsigned_alone(void)
{
   unsigned a = 100;
   unsigned b = 200;
   return (int)(a + b); /* 300 = 0x12C */
}
