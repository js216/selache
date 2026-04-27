#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int gval = 0x55;

static int *get_ptr(void)
{
   return &gval;
}

/* @expect 0x55 */
int cctest_fnptr_ret_ptr(void)
{
   int *(*fp)(void) = get_ptr;
   return *fp(); /* 0x55 */
}
