/* SPDX-License-Identifier: MIT */
/* test_stdlib.c --- Tests for stdlib functions */
/* Copyright (c) 2026 Jakob Kastelic */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <errno.h>

#define TEST(name) static void name(void)
#define ASSERT(cond) do { \
    if (!(cond)) { \
        printf("\033[31mFAIL:\033[0m %s:%d: %s\n", __FILE__, __LINE__, #cond); \
        exit(1); \
    } \
} while (0)
#define PASS(name) printf("\033[32mPASS:\033[0m %s\n", name)
#define RUN(fn) do { fn(); PASS(#fn); } while (0)

TEST(test_atoi)
{
    ASSERT(atoi("123") == 123);
    ASSERT(atoi("-456") == -456);
    ASSERT(atoi("0") == 0);
    ASSERT(atoi("  42") == 42);
    ASSERT(atoi("+99") == 99);
    ASSERT(atoi("123abc") == 123);
    ASSERT(atoi("abc") == 0);
}

TEST(test_atol)
{
    ASSERT(atol("123") == 123L);
    ASSERT(atol("-456") == -456L);
    ASSERT(atol("0") == 0L);
    ASSERT(atol("  42") == 42L);
    ASSERT(atol("+99") == 99L);
}

TEST(test_strtol)
{
    char *end;

    ASSERT(strtol("123", &end, 10) == 123L);
    ASSERT(*end == '\0');

    ASSERT(strtol("0xff", &end, 16) == 255L);
    ASSERT(*end == '\0');

    ASSERT(strtol("0xFF", &end, 0) == 255L);

    ASSERT(strtol("077", &end, 8) == 63L);

    ASSERT(strtol("077", &end, 0) == 63L);

    ASSERT(strtol("  -42", &end, 10) == -42L);

    ASSERT(strtol("123xyz", &end, 10) == 123L);
    ASSERT(*end == 'x');

    /* overflow */
    errno = 0;
    strtol("99999999999999999999", &end, 10);
    ASSERT(errno == ERANGE);

    /* underflow */
    errno = 0;
    strtol("-99999999999999999999", &end, 10);
    ASSERT(errno == ERANGE);
}

TEST(test_strtoul)
{
    char *end;

    ASSERT(strtoul("123", &end, 10) == 123UL);
    ASSERT(strtoul("0xff", &end, 16) == 255UL);
    ASSERT(strtoul("0xff", &end, 0) == 255UL);

    /* overflow */
    errno = 0;
    strtoul("99999999999999999999", &end, 10);
    ASSERT(errno == ERANGE);
}

TEST(test_malloc_free)
{
    int *p = (int *)malloc(sizeof(int) * 10);
    ASSERT(p != NULL);
    p[0] = 42;
    p[9] = 99;
    ASSERT(p[0] == 42);
    ASSERT(p[9] == 99);
    free(p);

    /* allocate multiple blocks */
    int *a = (int *)malloc(100);
    int *b = (int *)malloc(200);
    int *c = (int *)malloc(300);
    ASSERT(a != NULL);
    ASSERT(b != NULL);
    ASSERT(c != NULL);
    ASSERT(a != b);
    ASSERT(b != c);
    free(b);
    free(a);
    free(c);

    /* reallocate after free */
    int *d = (int *)malloc(100);
    ASSERT(d != NULL);
    free(d);
}

TEST(test_calloc)
{
    unsigned char *p = (unsigned char *)calloc(100, 1);
    int i;
    ASSERT(p != NULL);
    for (i = 0; i < 100; i++)
        ASSERT(p[i] == 0);
    free(p);
}

TEST(test_realloc)
{
    /* grow */
    int *p = (int *)malloc(sizeof(int) * 4);
    ASSERT(p != NULL);
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p = (int *)realloc(p, sizeof(int) * 8);
    ASSERT(p != NULL);
    ASSERT(p[0] == 10);
    ASSERT(p[1] == 20);
    ASSERT(p[2] == 30);
    ASSERT(p[3] == 40);

    /* shrink */
    p = (int *)realloc(p, sizeof(int) * 2);
    ASSERT(p != NULL);
    ASSERT(p[0] == 10);
    ASSERT(p[1] == 20);
    free(p);

    /* NULL ptr acts as malloc */
    p = (int *)realloc(NULL, sizeof(int) * 4);
    ASSERT(p != NULL);
    free(p);

    /* size 0 acts as free */
    p = (int *)malloc(sizeof(int) * 4);
    ASSERT(realloc(p, 0) == NULL);
}

TEST(test_abs)
{
    ASSERT(abs(5) == 5);
    ASSERT(abs(-5) == 5);
    ASSERT(abs(0) == 0);
}

TEST(test_labs)
{
    ASSERT(labs(5L) == 5L);
    ASSERT(labs(-5L) == 5L);
    ASSERT(labs(0L) == 0L);
}

TEST(test_llabs)
{
    ASSERT(llabs(5LL) == 5LL);
    ASSERT(llabs(-5LL) == 5LL);
    ASSERT(llabs(0LL) == 0LL);
}

TEST(test_div)
{
    div_t r;
    r = div(17, 5);
    ASSERT(r.quot == 3);
    ASSERT(r.rem == 2);

    r = div(-17, 5);
    ASSERT(r.quot == -3);
    ASSERT(r.rem == -2);

    r = div(17, -5);
    ASSERT(r.quot == -3);
    ASSERT(r.rem == 2);
}

TEST(test_ldiv)
{
    ldiv_t r;
    r = ldiv(17L, 5L);
    ASSERT(r.quot == 3L);
    ASSERT(r.rem == 2L);

    r = ldiv(-17L, 5L);
    ASSERT(r.quot == -3L);
    ASSERT(r.rem == -2L);
}

TEST(test_lldiv)
{
    lldiv_t r;
    r = lldiv(17LL, 5LL);
    ASSERT(r.quot == 3LL);
    ASSERT(r.rem == 2LL);

    r = lldiv(-17LL, 5LL);
    ASSERT(r.quot == -3LL);
    ASSERT(r.rem == -2LL);
}

static int cmp_int(const void *a, const void *b)
{
    return *(const int *)a - *(const int *)b;
}

static int cmp_str(const void *a, const void *b)
{
    return strcmp(*(const char *const *)a, *(const char *const *)b);
}

TEST(test_qsort)
{
    int arr[] = {5, 3, 1, 4, 2};
    qsort(arr, 5, sizeof(int), cmp_int);
    ASSERT(arr[0] == 1);
    ASSERT(arr[1] == 2);
    ASSERT(arr[2] == 3);
    ASSERT(arr[3] == 4);
    ASSERT(arr[4] == 5);

    /* string array */
    const char *strs[] = {"banana", "apple", "cherry"};
    qsort(strs, 3, sizeof(const char *), cmp_str);
    ASSERT(strcmp(strs[0], "apple") == 0);
    ASSERT(strcmp(strs[1], "banana") == 0);
    ASSERT(strcmp(strs[2], "cherry") == 0);

    /* empty array */
    qsort(arr, 0, sizeof(int), cmp_int);

    /* single element */
    int single[] = {42};
    qsort(single, 1, sizeof(int), cmp_int);
    ASSERT(single[0] == 42);
}

TEST(test_bsearch)
{
    int arr[] = {1, 2, 3, 4, 5};
    int key;
    int *found;

    key = 3;
    found = (int *)bsearch(&key, arr, 5, sizeof(int), cmp_int);
    ASSERT(found != NULL);
    ASSERT(*found == 3);

    key = 6;
    found = (int *)bsearch(&key, arr, 5, sizeof(int), cmp_int);
    ASSERT(found == NULL);

    /* empty array */
    found = (int *)bsearch(&key, arr, 0, sizeof(int), cmp_int);
    ASSERT(found == NULL);
}

TEST(test_rand_srand)
{
    int r1, r2, r3;

    srand(12345);
    r1 = rand();
    r2 = rand();
    r3 = rand();

    /* same seed produces same sequence */
    srand(12345);
    ASSERT(rand() == r1);
    ASSERT(rand() == r2);
    ASSERT(rand() == r3);

    /* different seed produces different sequence */
    srand(99999);
    ASSERT(rand() != r1 || rand() != r2);
}

int main(void)
{
    RUN(test_atoi);
    RUN(test_atol);
    RUN(test_strtol);
    RUN(test_strtoul);
    RUN(test_malloc_free);
    RUN(test_calloc);
    RUN(test_realloc);
    RUN(test_abs);
    RUN(test_labs);
    RUN(test_llabs);
    RUN(test_div);
    RUN(test_ldiv);
    RUN(test_lldiv);
    RUN(test_qsort);
    RUN(test_bsearch);
    RUN(test_rand_srand);

    printf("all stdlib tests passed\n");
    return 0;
}
