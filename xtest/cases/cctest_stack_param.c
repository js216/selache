#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int four_args(int a, int b, int c, int d)
{
   return a + b + c + d;
}

/* @expect 0x0A */
int cctest_stack_param(void)
{
   return four_args(1, 2, 3, 4); /* 10 = 0xA */
}
