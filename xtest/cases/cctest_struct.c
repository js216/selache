#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct point {
   int x;
   int y;
};

/* @expect 0x1E */
int cctest_struct(void)
{
   struct point p;
   p.x = 10;
   p.y = 20;
   return p.x + p.y; /* 30 = 0x1E */
}
