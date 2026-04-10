/* SPDX-License-Identifier: MIT */
/* test_math.c --- Tests for math functions against hardcoded values */
/* Copyright (c) 2026 Jakob Kastelic */

#include <stdio.h>
#include <stdlib.h>
#include "../include/math.h"

#define TEST(name) static void name(void)
#define ASSERT(cond) do { \
    if (!(cond)) { \
        printf("\033[31mFAIL:\033[0m %s:%d: %s\n", __FILE__, __LINE__, #cond); \
        exit(1); \
    } \
} while (0)
#define PASS(name) printf("\033[32mPASS:\033[0m %s\n", name)
#define RUN(fn) do { fn(); PASS(#fn); } while (0)

static int near(float a, float b, float tol)
{
	if (a == b)
		return 1;
	float diff = a - b;
	if (diff < 0)
		diff = -diff;
	return diff < tol;
}

/* --- fabsf --- */
TEST(test_fabsf)
{
	ASSERT(fabsf(3.5f) == 3.5f);
	ASSERT(fabsf(-3.5f) == 3.5f);
	ASSERT(fabsf(0.0f) == 0.0f);
	ASSERT(fabsf(-0.0f) == 0.0f);
	ASSERT(isnan(fabsf(NAN)));
	ASSERT(isinf(fabsf(INFINITY)));
	ASSERT(isinf(fabsf(-INFINITY)));
}

/* --- sqrtf --- */
TEST(test_sqrtf)
{
	ASSERT(near(sqrtf(4.0f), 2.0f, 1e-5f));
	ASSERT(near(sqrtf(9.0f), 3.0f, 1e-5f));
	ASSERT(near(sqrtf(2.0f), 1.41421356f, 1e-5f));
	ASSERT(sqrtf(0.0f) == 0.0f);
	ASSERT(sqrtf(1.0f) == 1.0f);
	ASSERT(isnan(sqrtf(-1.0f)));
	ASSERT(isnan(sqrtf(NAN)));
	ASSERT(isinf(sqrtf(INFINITY)));
}

/* --- sinf --- */
TEST(test_sinf)
{
	ASSERT(sinf(0.0f) == 0.0f);
	ASSERT(near(sinf(0.52359877f), 0.5f, 1e-5f));
	ASSERT(near(sinf(1.57079632f), 1.0f, 1e-5f));
	ASSERT(near(sinf(3.14159265f), 0.0f, 1e-5f));
	ASSERT(near(sinf(-1.57079632f), -1.0f, 1e-5f));
	ASSERT(isnan(sinf(NAN)));
	ASSERT(isnan(sinf(INFINITY)));
}

/* --- cosf --- */
TEST(test_cosf)
{
	ASSERT(near(cosf(0.0f), 1.0f, 1e-5f));
	ASSERT(near(cosf(1.57079632f), 0.0f, 1e-5f));
	ASSERT(near(cosf(3.14159265f), -1.0f, 1e-5f));
	ASSERT(near(cosf(-3.14159265f), -1.0f, 1e-5f));
	ASSERT(isnan(cosf(NAN)));
	ASSERT(isnan(cosf(INFINITY)));
}

/* --- tanf --- */
TEST(test_tanf)
{
	ASSERT(near(tanf(0.0f), 0.0f, 1e-5f));
	ASSERT(near(tanf(0.78539816f), 1.0f, 1e-5f));
	ASSERT(near(tanf(-0.78539816f), -1.0f, 1e-5f));
	ASSERT(isnan(tanf(NAN)));
	ASSERT(isnan(tanf(INFINITY)));
}

/* --- atanf --- */
TEST(test_atanf)
{
	ASSERT(near(atanf(0.0f), 0.0f, 1e-5f));
	ASSERT(near(atanf(1.0f), 0.78539816f, 1e-5f));
	ASSERT(near(atanf(-1.0f), -0.78539816f, 1e-5f));
	ASSERT(near(atanf(1000000.0f), 1.57079632f, 1e-4f));
	ASSERT(isnan(atanf(NAN)));
}

/* --- atan2f --- */
TEST(test_atan2f)
{
	ASSERT(near(atan2f(0.0f, 1.0f), 0.0f, 1e-5f));
	ASSERT(near(atan2f(1.0f, 1.0f), 0.78539816f, 1e-5f));
	ASSERT(near(atan2f(1.0f, 0.0f), 1.57079632f, 1e-5f));
	ASSERT(near(atan2f(0.0f, -1.0f), 3.14159265f, 1e-5f));
	ASSERT(isnan(atan2f(NAN, 1.0f)));
}

/* --- asinf --- */
TEST(test_asinf)
{
	ASSERT(near(asinf(0.0f), 0.0f, 1e-5f));
	ASSERT(near(asinf(0.5f), 0.52359877f, 1e-5f));
	ASSERT(near(asinf(1.0f), 1.57079632f, 1e-5f));
	ASSERT(near(asinf(-1.0f), -1.57079632f, 1e-5f));
	ASSERT(isnan(asinf(1.5f)));
	ASSERT(isnan(asinf(NAN)));
}

/* --- acosf --- */
TEST(test_acosf)
{
	ASSERT(near(acosf(1.0f), 0.0f, 1e-5f));
	ASSERT(near(acosf(0.0f), 1.57079632f, 1e-5f));
	ASSERT(near(acosf(-1.0f), 3.14159265f, 1e-5f));
	ASSERT(near(acosf(0.5f), 1.04719755f, 1e-5f));
	ASSERT(isnan(acosf(1.5f)));
	ASSERT(isnan(acosf(NAN)));
}

/* --- expf --- */
TEST(test_expf)
{
	ASSERT(near(expf(0.0f), 1.0f, 1e-5f));
	ASSERT(near(expf(1.0f), 2.71828182f, 1e-4f));
	ASSERT(near(expf(-1.0f), 0.36787944f, 1e-5f));
	ASSERT(near(expf(2.0f), 7.38905609f, 1e-3f));
	ASSERT(isinf(expf(INFINITY)));
	ASSERT(expf(-INFINITY) == 0.0f);
	ASSERT(isnan(expf(NAN)));
}

/* --- logf --- */
TEST(test_logf)
{
	ASSERT(logf(1.0f) == 0.0f);
	ASSERT(near(logf(2.71828182f), 1.0f, 1e-5f));
	ASSERT(near(logf(2.0f), 0.69314718f, 1e-5f));
	ASSERT(near(logf(10.0f), 2.30258509f, 1e-4f));
	ASSERT(isinf(logf(0.0f)) && logf(0.0f) < 0.0f);
	ASSERT(isnan(logf(-1.0f)));
	ASSERT(isnan(logf(NAN)));
	ASSERT(isinf(logf(INFINITY)));
}

/* --- log2f --- */
TEST(test_log2f)
{
	ASSERT(near(log2f(1.0f), 0.0f, 1e-5f));
	ASSERT(near(log2f(2.0f), 1.0f, 1e-5f));
	ASSERT(near(log2f(8.0f), 3.0f, 1e-4f));
	ASSERT(near(log2f(1024.0f), 10.0f, 1e-3f));
}

/* --- log10f --- */
TEST(test_log10f)
{
	ASSERT(near(log10f(1.0f), 0.0f, 1e-5f));
	ASSERT(near(log10f(10.0f), 1.0f, 1e-5f));
	ASSERT(near(log10f(100.0f), 2.0f, 1e-4f));
	ASSERT(near(log10f(1000.0f), 3.0f, 1e-3f));
}

/* --- powf --- */
TEST(test_powf)
{
	ASSERT(near(powf(2.0f, 10.0f), 1024.0f, 1.0f));
	ASSERT(powf(0.0f, 0.0f) == 1.0f);
	ASSERT(powf(5.0f, 0.0f) == 1.0f);
	ASSERT(powf(0.0f, 5.0f) == 0.0f);
	ASSERT(near(powf(2.0f, 0.5f), 1.41421356f, 1e-3f));
	ASSERT(near(powf(-2.0f, 3.0f), -8.0f, 1e-3f));
	ASSERT(near(powf(-2.0f, 2.0f), 4.0f, 1e-3f));
	ASSERT(isnan(powf(-2.0f, 0.5f)));
	ASSERT(isnan(powf(NAN, 2.0f)));
}

/* --- floorf --- */
TEST(test_floorf)
{
	ASSERT(floorf(2.7f) == 2.0f);
	ASSERT(floorf(-2.7f) == -3.0f);
	ASSERT(floorf(0.0f) == 0.0f);
	ASSERT(floorf(3.0f) == 3.0f);
	ASSERT(floorf(-3.0f) == -3.0f);
	ASSERT(floorf(0.1f) == 0.0f);
	ASSERT(floorf(-0.1f) == -1.0f);
	ASSERT(isnan(floorf(NAN)));
	ASSERT(isinf(floorf(INFINITY)));
}

/* --- ceilf --- */
TEST(test_ceilf)
{
	ASSERT(ceilf(2.3f) == 3.0f);
	ASSERT(ceilf(-2.3f) == -2.0f);
	ASSERT(ceilf(0.0f) == 0.0f);
	ASSERT(ceilf(3.0f) == 3.0f);
	ASSERT(ceilf(-3.0f) == -3.0f);
	ASSERT(isnan(ceilf(NAN)));
	ASSERT(isinf(ceilf(INFINITY)));
}

/* --- truncf --- */
TEST(test_truncf)
{
	ASSERT(truncf(2.7f) == 2.0f);
	ASSERT(truncf(-2.7f) == -2.0f);
	ASSERT(truncf(0.0f) == 0.0f);
	ASSERT(truncf(3.0f) == 3.0f);
	ASSERT(isnan(truncf(NAN)));
}

/* --- roundf --- */
TEST(test_roundf)
{
	ASSERT(roundf(2.3f) == 2.0f);
	ASSERT(roundf(2.5f) == 3.0f);
	ASSERT(roundf(-2.3f) == -2.0f);
	ASSERT(roundf(-2.5f) == -3.0f);
	ASSERT(roundf(0.0f) == 0.0f);
	ASSERT(isnan(roundf(NAN)));
}

/* --- fmodf --- */
TEST(test_fmodf)
{
	ASSERT(near(fmodf(5.5f, 2.0f), 1.5f, 1e-5f));
	ASSERT(near(fmodf(-5.5f, 2.0f), -1.5f, 1e-5f));
	ASSERT(near(fmodf(5.5f, -2.0f), 1.5f, 1e-5f));
	ASSERT(isnan(fmodf(INFINITY, 2.0f)));
	ASSERT(isnan(fmodf(5.0f, 0.0f)));
	ASSERT(fmodf(0.0f, 2.0f) == 0.0f);
}

/* --- frexpf --- */
TEST(test_frexpf)
{
	int exp;
	float m;
	m = frexpf(8.0f, &exp);
	ASSERT(near(m, 0.5f, 1e-5f));
	ASSERT(exp == 4);
	m = frexpf(0.0f, &exp);
	ASSERT(m == 0.0f);
	ASSERT(exp == 0);
	m = frexpf(1.0f, &exp);
	ASSERT(near(m, 0.5f, 1e-5f));
	ASSERT(exp == 1);
}

/* --- ldexpf --- */
TEST(test_ldexpf)
{
	ASSERT(near(ldexpf(1.0f, 3), 8.0f, 1e-5f));
	ASSERT(near(ldexpf(0.5f, 4), 8.0f, 1e-5f));
	ASSERT(ldexpf(0.0f, 10) == 0.0f);
	ASSERT(isinf(ldexpf(1.0f, 200)));
}

/* --- modff --- */
TEST(test_modff)
{
	float ipart;
	float fpart;
	fpart = modff(3.75f, &ipart);
	ASSERT(near(ipart, 3.0f, 1e-5f));
	ASSERT(near(fpart, 0.75f, 1e-5f));
	fpart = modff(-3.75f, &ipart);
	ASSERT(near(ipart, -3.0f, 1e-5f));
	ASSERT(near(fpart, -0.75f, 1e-5f));
	fpart = modff(0.0f, &ipart);
	ASSERT(ipart == 0.0f);
	ASSERT(fpart == 0.0f);
}

/* --- fminf/fmaxf --- */
TEST(test_fminf)
{
	ASSERT(fminf(1.0f, 2.0f) == 1.0f);
	ASSERT(fminf(-1.0f, 1.0f) == -1.0f);
	ASSERT(fminf(NAN, 1.0f) == 1.0f);
	ASSERT(fminf(1.0f, NAN) == 1.0f);
}

TEST(test_fmaxf)
{
	ASSERT(fmaxf(1.0f, 2.0f) == 2.0f);
	ASSERT(fmaxf(-1.0f, 1.0f) == 1.0f);
	ASSERT(fmaxf(NAN, 1.0f) == 1.0f);
	ASSERT(fmaxf(1.0f, NAN) == 1.0f);
}

/* --- copysignf --- */
TEST(test_copysignf)
{
	ASSERT(copysignf(3.0f, -1.0f) == -3.0f);
	ASSERT(copysignf(-3.0f, 1.0f) == 3.0f);
	ASSERT(copysignf(3.0f, 1.0f) == 3.0f);
	ASSERT(copysignf(-3.0f, -1.0f) == -3.0f);
}

/* --- double wrappers --- */
TEST(test_double_wrappers)
{
	ASSERT(fabs(-3.5) == 3.5);
	ASSERT(near((float)sqrt(4.0), 2.0f, 1e-5f));
	ASSERT(near((float)sin(0.0), 0.0f, 1e-5f));
	ASSERT(near((float)cos(0.0), 1.0f, 1e-5f));
	ASSERT(near((float)tan(0.0), 0.0f, 1e-5f));
	ASSERT(near((float)exp(0.0), 1.0f, 1e-5f));
	ASSERT(log(1.0) == 0.0);
	ASSERT(floor(2.7) == 2.0);
	ASSERT(ceil(2.3) == 3.0);
}

int main(void)
{
	RUN(test_fabsf);
	RUN(test_sqrtf);
	RUN(test_sinf);
	RUN(test_cosf);
	RUN(test_tanf);
	RUN(test_atanf);
	RUN(test_atan2f);
	RUN(test_asinf);
	RUN(test_acosf);
	RUN(test_expf);
	RUN(test_logf);
	RUN(test_log2f);
	RUN(test_log10f);
	RUN(test_powf);
	RUN(test_floorf);
	RUN(test_ceilf);
	RUN(test_truncf);
	RUN(test_roundf);
	RUN(test_fmodf);
	RUN(test_frexpf);
	RUN(test_ldexpf);
	RUN(test_modff);
	RUN(test_fminf);
	RUN(test_fmaxf);
	RUN(test_copysignf);
	RUN(test_double_wrappers);
	printf("all math tests passed\n");
	return 0;
}
