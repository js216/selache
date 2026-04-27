#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define SELF_REF SELF_REF

/* @expect 0x42 */
int cctest_macro_self_ref(void)
{
   /* SELF_REF expands to SELF_REF (not infinite loop -- stops at
    * self-reference) */
   /* We can't use SELF_REF as a value, but the fact it compiles proves the
    * guard works */
   int SELF_REF = 0x42;
   return SELF_REF; /* 0x42 */
}
