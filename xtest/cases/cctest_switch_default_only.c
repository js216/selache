#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x33 */
int cctest_switch_default_only(void)
{
   int x = 99;
   switch (x) {
      default: return 0x33;
   }
}
