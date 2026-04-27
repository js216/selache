#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

struct rgb {
   int r;
   int g;
   int b;
};

/* @expect 0x6D */
int cctest_bf_only(void)
{
   struct {
      unsigned int r : 5;
      unsigned int g : 6;
      unsigned int b : 5;
   } rgb;
