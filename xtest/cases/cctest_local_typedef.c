#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x1E */
int cctest_local_typedef(void)
{
   typedef int myint;
   myint a = 10, b = 20;
   return a + b; /* 30 = 0x1E */
}
