/* SPDX-License-Identifier: GPL-3.0 */
/* test_support.c --- Tests for errno and assert support */
/* Copyright (c) 2026 Jakob Kastelic */

#include <stdio.h>
#include <stdlib.h>

#define TEST(name) static void name(void)
#define ASSERT_TEST(cond) do { \
    if (!(cond)) { \
        printf("\033[31mFAIL:\033[0m %s:%d: %s\n", __FILE__, __LINE__, #cond); \
        exit(1); \
    } \
} while (0)
#define PASS(name) printf("\033[32mPASS:\033[0m %s\n", name)
#define RUN(fn) do { fn(); PASS(#fn); } while (0)

#include "../include/errno.h"

TEST(test_errno_readwrite)
{
	errno = 0;
	ASSERT_TEST(errno == 0);
	errno = EDOM;
	ASSERT_TEST(errno == 1);
	errno = ERANGE;
	ASSERT_TEST(errno == 2);
	errno = 0;
}

TEST(test_errno_macros)
{
	ASSERT_TEST(EDOM != 0);
	ASSERT_TEST(ERANGE != 0);
	ASSERT_TEST(EILSEQ != 0);
	ASSERT_TEST(EDOM != ERANGE);
	ASSERT_TEST(EDOM != EILSEQ);
	ASSERT_TEST(ERANGE != EILSEQ);
}

TEST(test_assert_pass)
{
	#include "../include/assert.h"
	assert(1);
	assert(2 + 2 == 4);
}

TEST(test_assert_fail_symbol)
{
	extern void __assert_fail(const char *, const char *, int);
	void (*fn)(const char *, const char *, int) = __assert_fail;
	ASSERT_TEST(fn != NULL);
}

TEST(test_ndebug)
{
	#define NDEBUG
	#include "../include/assert.h"
	assert(0);
	#undef NDEBUG
	#include "../include/assert.h"
}

int main(void)
{
	RUN(test_errno_readwrite);
	RUN(test_errno_macros);
	RUN(test_assert_pass);
	RUN(test_assert_fail_symbol);
	RUN(test_ndebug);
	printf("all support tests passed\n");
	return 0;
}
