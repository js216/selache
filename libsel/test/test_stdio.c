/* SPDX-License-Identifier: GPL-3.0 */
/* test_stdio.c --- Tests for formatted output functions */
/* Copyright (c) 2026 Jakob Kastelic */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define TEST(name) static void name(void)
#define ASSERT(cond) do { \
    if (!(cond)) { \
        printf("\033[31mFAIL:\033[0m %s:%d: %s\n", __FILE__, __LINE__, #cond); \
        exit(1); \
    } \
} while (0)
#define PASS(name) printf("\033[32mPASS:\033[0m %s\n", name)
#define RUN(fn) do { fn(); PASS(#fn); } while (0)

TEST(test_basic)
{
	char buf[64];
	int r;

	r = snprintf(buf, sizeof(buf), "hello");
	ASSERT(strcmp(buf, "hello") == 0);
	ASSERT(r == 5);
}

TEST(test_percent)
{
	char buf[64];
	int r;

	r = snprintf(buf, sizeof(buf), "100%%");
	ASSERT(strcmp(buf, "100%") == 0);
	ASSERT(r == 4);
}

TEST(test_d_positive)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%d", 42);
	ASSERT(strcmp(buf, "42") == 0);
}

TEST(test_d_negative)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%d", -123);
	ASSERT(strcmp(buf, "-123") == 0);
}

TEST(test_d_zero)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%d", 0);
	ASSERT(strcmp(buf, "0") == 0);
}

TEST(test_d_int_min)
{
	char buf[64];
	char expected[64];

	snprintf(buf, sizeof(buf), "%d", INT_MIN);
	sprintf(expected, "%d", INT_MIN);
	ASSERT(strcmp(buf, expected) == 0);
}

TEST(test_u_basic)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%u", 12345U);
	ASSERT(strcmp(buf, "12345") == 0);
}

TEST(test_x_lower)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%x", 0xdeadU);
	ASSERT(strcmp(buf, "dead") == 0);
}

TEST(test_x_upper)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%X", 0xbeefU);
	ASSERT(strcmp(buf, "BEEF") == 0);
}

TEST(test_x_hash)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%#x", 255U);
	ASSERT(strcmp(buf, "0xff") == 0);

	snprintf(buf, sizeof(buf), "%#X", 255U);
	ASSERT(strcmp(buf, "0XFF") == 0);

	snprintf(buf, sizeof(buf), "%#x", 0U);
	ASSERT(strcmp(buf, "0") == 0);
}

TEST(test_o_basic)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%o", 8U);
	ASSERT(strcmp(buf, "10") == 0);

	snprintf(buf, sizeof(buf), "%#o", 8U);
	ASSERT(strcmp(buf, "010") == 0);
}

TEST(test_s_normal)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%s", "world");
	ASSERT(strcmp(buf, "world") == 0);
}

TEST(test_s_null)
{
	char buf[64];
	const char *np = NULL;

	/* hide the NULL from the format checker via a volatile read */
	snprintf(buf, sizeof(buf), "%s", *(volatile const char **)&np);
	ASSERT(strcmp(buf, "(null)") == 0);
}

TEST(test_c_basic)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%c", 'A');
	ASSERT(strcmp(buf, "A") == 0);
}

TEST(test_p_basic)
{
	char buf[64];
	int dummy;

	snprintf(buf, sizeof(buf), "%p", (void *)&dummy);
	ASSERT(buf[0] == '0' && buf[1] == 'x');
	ASSERT(strlen(buf) > 2);
}

TEST(test_p_null)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%p", (void *)NULL);
	ASSERT(strcmp(buf, "(nil)") == 0);
}

TEST(test_width_right)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%10d", 42);
	ASSERT(strcmp(buf, "        42") == 0);
}

TEST(test_width_left)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%-10d|", 42);
	ASSERT(strcmp(buf, "42        |") == 0);
}

TEST(test_zero_pad)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%05d", 42);
	ASSERT(strcmp(buf, "00042") == 0);
}

TEST(test_zero_pad_neg)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%08d", -42);
	ASSERT(strcmp(buf, "-0000042") == 0);
}

TEST(test_plus_flag)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%+d", 42);
	ASSERT(strcmp(buf, "+42") == 0);

	snprintf(buf, sizeof(buf), "%+d", -42);
	ASSERT(strcmp(buf, "-42") == 0);
}

TEST(test_space_flag)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "% d", 42);
	ASSERT(strcmp(buf, " 42") == 0);

	snprintf(buf, sizeof(buf), "% d", -42);
	ASSERT(strcmp(buf, "-42") == 0);
}

TEST(test_precision_string)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%.3s", "abcdef");
	ASSERT(strcmp(buf, "abc") == 0);
}

TEST(test_precision_int)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%.5d", 42);
	ASSERT(strcmp(buf, "00042") == 0);
}

TEST(test_star_width)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%*d", 8, 42);
	ASSERT(strcmp(buf, "      42") == 0);
}

TEST(test_star_precision)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%.*s", 3, "abcdef");
	ASSERT(strcmp(buf, "abc") == 0);
}

TEST(test_length_l)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%ld", 123456789L);
	ASSERT(strcmp(buf, "123456789") == 0);
}

TEST(test_length_ll)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%lld", 9876543210LL);
	ASSERT(strcmp(buf, "9876543210") == 0);
}

TEST(test_length_h)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%hd", (short)32767);
	ASSERT(strcmp(buf, "32767") == 0);
}

TEST(test_length_hh)
{
	char buf[64];

	snprintf(buf, sizeof(buf), "%hhd", (signed char)-1);
	ASSERT(strcmp(buf, "-1") == 0);
}

TEST(test_trunc_small_buf)
{
	char buf[6];
	int r;

	r = snprintf(buf, sizeof(buf), "hello world");
	ASSERT(strcmp(buf, "hello") == 0);
	ASSERT(r == 11);
}

TEST(test_trunc_size_zero)
{
	char buf[4];
	int r;

	buf[0] = 'X';
	r = snprintf(buf, 0, "hello");
	ASSERT(buf[0] == 'X');
	ASSERT(r == 5);
}

TEST(test_trunc_size_one)
{
	char buf[4];
	int r;

	r = snprintf(buf, 1, "hello");
	ASSERT(buf[0] == '\0');
	ASSERT(r == 5);
}

TEST(test_combined)
{
	char buf[128];

	snprintf(buf, sizeof(buf), "%-10s|%05d|%x", "foo", 42, 255U);
	ASSERT(strcmp(buf, "foo       |00042|ff") == 0);
}

TEST(test_sprintf_basic)
{
	char buf[128];
	int r;

	r = sprintf(buf, "val=%d", 99);
	ASSERT(strcmp(buf, "val=99") == 0);
	ASSERT(r == 6);
}

int main(void)
{
	RUN(test_basic);
	RUN(test_percent);
	RUN(test_d_positive);
	RUN(test_d_negative);
	RUN(test_d_zero);
	RUN(test_d_int_min);
	RUN(test_u_basic);
	RUN(test_x_lower);
	RUN(test_x_upper);
	RUN(test_x_hash);
	RUN(test_o_basic);
	RUN(test_s_normal);
	RUN(test_s_null);
	RUN(test_c_basic);
	RUN(test_p_basic);
	RUN(test_p_null);
	RUN(test_width_right);
	RUN(test_width_left);
	RUN(test_zero_pad);
	RUN(test_zero_pad_neg);
	RUN(test_plus_flag);
	RUN(test_space_flag);
	RUN(test_precision_string);
	RUN(test_precision_int);
	RUN(test_star_width);
	RUN(test_star_precision);
	RUN(test_length_l);
	RUN(test_length_ll);
	RUN(test_length_h);
	RUN(test_length_hh);
	RUN(test_trunc_small_buf);
	RUN(test_trunc_size_zero);
	RUN(test_trunc_size_one);
	RUN(test_combined);
	RUN(test_sprintf_basic);
	printf("all stdio tests passed\n");
	return 0;
}
