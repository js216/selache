#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* @expect 0x12 */
int cctest_local_enum(void)
{
   enum local_e { LE_A = 3, LE_B = 7, LE_C = 11 };
   enum local_e val = LE_B;
   return val + LE_C; /* 7 + 11 = 18 = 0x12 */
}
