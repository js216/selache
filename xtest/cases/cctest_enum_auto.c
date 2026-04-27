#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

enum seq { SEQ_A = 5, SEQ_B = SEQ_A + 3, SEQ_C = SEQ_B * 2 };

/* @expect 0x06 */
int cctest_enum_auto(void)
{
   enum seq { A, B, C, D };
