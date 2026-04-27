#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0 */
int cctest_empty_struct_init(void)
{
   struct {
      int a;
      int b;
   } s = {0};
