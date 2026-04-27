#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static int tp_val_42 = 0x42;
#define TP_GET(prefix, num) prefix##_val_##num

/* @expect 0x42 */
int cctest_token_paste_id(void)
{
   return TP_GET(tp, 42);
}
