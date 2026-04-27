#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct vec2 {
   int x;
   int y;
};

static int dot(struct vec2 a, struct vec2 b)
{
   return a.x * b.x + a.y * b.y;
}

/* @expect 0x0B */
int cctest_struct_param(void)
{
   struct vec2 a;
   struct vec2 b;
   a.x = 3;
   a.y = 4;
   b.x = 1;
   b.y = 2;
   return dot(a, b); /* 3+8=11 = 0xB */
}
