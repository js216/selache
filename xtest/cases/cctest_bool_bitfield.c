#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 1 */
int cctest_bool_bitfield(void)
{
   struct {
      _Bool a : 1;
      _Bool b : 1;
   } bf;
