// SPDX-License-Identifier: MIT
// cctest_math_inf_nan.c --- cctest case math_inf_nan
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1F */

#include <math.h>

int test_main(void)
{
   int score = 0;
   if (isnan(sqrt(-1.0))) score |= 0x01;
   if (isinf(log(0.0))) score |= 0x02;
   if (isnan(log(-1.0))) score |= 0x04;
   if (isinf(exp(800.0))) score |= 0x08;
   if (exp(-1000.0) == 0.0) score |= 0x10;
   return score;
}
