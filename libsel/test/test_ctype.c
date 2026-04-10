/* SPDX-License-Identifier: MIT */
/* test_ctype.c --- Exhaustive tests for ctype functions */
/* Copyright (c) 2026 Jakob Kastelic */

#include <stdio.h>
#include <stdlib.h>
#include "../include/ctype.h"

#define TEST(name) static void name(void)
#define ASSERT(cond) do { \
    if (!(cond)) { \
        printf("\033[31mFAIL:\033[0m %s:%d: %s\n", __FILE__, __LINE__, #cond); \
        exit(1); \
    } \
} while (0)
#define PASS(name) printf("\033[32mPASS:\033[0m %s\n", name)
#define RUN(fn) do { fn(); PASS(#fn); } while (0)

TEST(test_isdigit)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if (c >= '0' && c <= '9')
			ASSERT(isdigit(c));
		else
			ASSERT(!isdigit(c));
	}
	ASSERT(!isdigit(-1));
}

TEST(test_isalpha)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			ASSERT(isalpha(c));
		else
			ASSERT(!isalpha(c));
	}
	ASSERT(!isalpha(-1));
}

TEST(test_isalnum)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
		    (c >= '0' && c <= '9'))
			ASSERT(isalnum(c));
		else
			ASSERT(!isalnum(c));
	}
	ASSERT(!isalnum(-1));
}

TEST(test_isblank)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if (c == ' ' || c == '\t')
			ASSERT(isblank(c));
		else
			ASSERT(!isblank(c));
	}
	ASSERT(!isblank(-1));
}

TEST(test_iscntrl)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if ((c >= 0 && c <= 0x1f) || c == 0x7f)
			ASSERT(iscntrl(c));
		else
			ASSERT(!iscntrl(c));
	}
	ASSERT(!iscntrl(-1));
}

TEST(test_isgraph)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if (c > ' ' && c <= '~')
			ASSERT(isgraph(c));
		else
			ASSERT(!isgraph(c));
	}
	ASSERT(!isgraph(-1));
}

TEST(test_islower)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if (c >= 'a' && c <= 'z')
			ASSERT(islower(c));
		else
			ASSERT(!islower(c));
	}
	ASSERT(!islower(-1));
}

TEST(test_isupper)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if (c >= 'A' && c <= 'Z')
			ASSERT(isupper(c));
		else
			ASSERT(!isupper(c));
	}
	ASSERT(!isupper(-1));
}

TEST(test_isprint)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if (c >= ' ' && c <= '~')
			ASSERT(isprint(c));
		else
			ASSERT(!isprint(c));
	}
	ASSERT(!isprint(-1));
}

TEST(test_ispunct)
{
	int c;
	for (c = 0; c <= 127; c++) {
		int expect = (c >= '!' && c <= '/') ||
		             (c >= ':' && c <= '@') ||
		             (c >= '[' && c <= '`') ||
		             (c >= '{' && c <= '~');
		if (expect)
			ASSERT(ispunct(c));
		else
			ASSERT(!ispunct(c));
	}
	ASSERT(!ispunct(-1));
}

TEST(test_isspace)
{
	int c;
	for (c = 0; c <= 127; c++) {
		int expect = (c == ' ' || c == '\t' || c == '\n' ||
		              c == '\r' || c == '\f' || c == '\v');
		if (expect)
			ASSERT(isspace(c));
		else
			ASSERT(!isspace(c));
	}
	ASSERT(!isspace(-1));
}

TEST(test_isxdigit)
{
	int c;
	for (c = 0; c <= 127; c++) {
		int expect = (c >= '0' && c <= '9') ||
		             (c >= 'A' && c <= 'F') ||
		             (c >= 'a' && c <= 'f');
		if (expect)
			ASSERT(isxdigit(c));
		else
			ASSERT(!isxdigit(c));
	}
	ASSERT(!isxdigit(-1));
}

TEST(test_tolower)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if (c >= 'A' && c <= 'Z')
			ASSERT(tolower(c) == c + ('a' - 'A'));
		else
			ASSERT(tolower(c) == c);
	}
	ASSERT(tolower(-1) == -1);
}

TEST(test_toupper)
{
	int c;
	for (c = 0; c <= 127; c++) {
		if (c >= 'a' && c <= 'z')
			ASSERT(toupper(c) == c - ('a' - 'A'));
		else
			ASSERT(toupper(c) == c);
	}
	ASSERT(toupper(-1) == -1);
}

int main(void)
{
	RUN(test_isdigit);
	RUN(test_isalpha);
	RUN(test_isalnum);
	RUN(test_isblank);
	RUN(test_iscntrl);
	RUN(test_isgraph);
	RUN(test_islower);
	RUN(test_isupper);
	RUN(test_isprint);
	RUN(test_ispunct);
	RUN(test_isspace);
	RUN(test_isxdigit);
	RUN(test_tolower);
	RUN(test_toupper);
	printf("all ctype tests passed\n");
	return 0;
}
