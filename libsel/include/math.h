/* SPDX-License-Identifier: MIT */
/* math.h --- Mathematical functions (C99 7.12) */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef LIBSEL_MATH_H
#define LIBSEL_MATH_H

#define HUGE_VALF (__builtin_huge_valf())
#define HUGE_VAL  ((double)HUGE_VALF)
#define INFINITY  (__builtin_inff())
#define NAN       (__builtin_nanf(""))

#define isnan(x)      __builtin_isnan(x)
#define isinf(x)      __builtin_isinf(x)
#define isfinite(x)   __builtin_isfinite(x)
#define signbit(x)    __builtin_signbit(x)
#define fpclassify(x) __builtin_fpclassify(FP_NAN, FP_INFINITE, FP_NORMAL, FP_SUBNORMAL, FP_ZERO, (x))

#define FP_NAN       0
#define FP_INFINITE  1
#define FP_ZERO      2
#define FP_SUBNORMAL 3
#define FP_NORMAL    4

#define M_PI     3.14159265358979323846
#define M_PI_2   1.57079632679489661923
#define M_PI_4   0.78539816339744830962
#define M_E      2.71828182845904523536
#define M_LN2    0.69314718055994530942
#define M_LN10   2.30258509299404568402
#define M_LOG2E  1.44269504088896340736
#define M_LOG10E 0.43429448190325182765

/* Basic */
float fabsf(float x);
double fabs(double x);
float sqrtf(float x);
double sqrt(double x);

/* Trigonometric */
float sinf(float x);
double sin(double x);
float cosf(float x);
double cos(double x);
float tanf(float x);
double tan(double x);
float asinf(float x);
double asin(double x);
float acosf(float x);
double acos(double x);
float atanf(float x);
double atan(double x);
float atan2f(float y, float x);
double atan2(double y, double x);

/* Exponential and logarithmic */
float expf(float x);
double exp(double x);
float logf(float x);
double log(double x);
float log2f(float x);
double log2(double x);
float log10f(float x);
double log10(double x);

/* Power */
float powf(float x, float y);
double pow(double x, double y);

/* Rounding */
float floorf(float x);
double floor(double x);
float ceilf(float x);
double ceil(double x);
float truncf(float x);
double trunc(double x);
float roundf(float x);
double round(double x);

/* Remainder */
float fmodf(float x, float y);
double fmod(double x, double y);

/* Decomposition */
float frexpf(float x, int *exp);
double frexp(double x, int *exp);
float ldexpf(float x, int exp);
double ldexp(double x, int exp);
float modff(float x, float *iptr);
double modf(double x, double *iptr);

/* Min/Max/Other */
float fminf(float x, float y);
double fmin(double x, double y);
float fmaxf(float x, float y);
double fmax(double x, double y);
float copysignf(float x, float y);
double copysign(double x, double y);

#endif
