#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x2D */
int cctest_struct_computed_idx(void)
{
   struct {
      int a;
      int b;
   } arr[4];
