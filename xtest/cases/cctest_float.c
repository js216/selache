#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x0E */
int cctest_float(void)
{
   float a = 3.0f;
   float b = 4.0f;
   float c = a * b + 2.0f;
   return (int)c;
}
