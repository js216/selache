#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 8 */
int cctest_bitfield(void)
{
   struct {
      int x : 4;
      int y : 4;
   } bf;
