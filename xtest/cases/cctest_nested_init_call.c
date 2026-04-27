#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int helper_add(int x, int y)
{
   return x + y;
}

static int helper_mul(int a, int b)
{
   return a * b;
}

struct s2 {
   int a;
   int b;
};

/* @expect 0x0F */
int cctest_nested_init_call(void)
{
   struct s2 arr[2] = {
       {helper_add(1, 2), helper_mul(3, 4)},
       {helper_add(5, 6), helper_mul(7, 8)}
   };
   return arr[0].a + arr[0].b; /* 3 + 12 = 15 = 0x0F */
}
