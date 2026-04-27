#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x67 */
int cctest_struct_padding(void)
{
   struct {
      char a;
      int b;
      char c;
   } s;
