#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x2A */
int cctest_ptr_to_ptr(void)
{
   int x    = 42;
   int *p   = &x;
   int **pp = &p;
   return **pp; /* 42 = 0x2A */
}
