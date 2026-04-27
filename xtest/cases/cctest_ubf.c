#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x19 */
int cctest_ubf(void)
{
   struct {
      unsigned int x : 4;
      unsigned int y : 4;
   } bf;
