/* SPDX-License-Identifier: GPL-3.0 */
/* test_string.c --- Tests for string.h functions */
/* Copyright (c) 2026 Jakob Kastelic */

#include <stdio.h>
#include <stdlib.h>
#include "../include/string.h"

#define TEST(name) static void name(void)
#define ASSERT(cond) do { \
    if (!(cond)) { \
        printf("\033[31mFAIL:\033[0m %s:%d: %s\n", __FILE__, __LINE__, #cond); \
        exit(1); \
    } \
} while (0)
#define PASS(name) printf("\033[32mPASS:\033[0m %s\n", name)
#define RUN(fn) do { fn(); PASS(#fn); } while (0)

TEST(test_memcpy)
{
    char src[] = "hello";
    char dst[8];

    memcpy(dst, src, 6);
    ASSERT(dst[0] == 'h' && dst[4] == 'o' && dst[5] == '\0');

    /* zero length */
    dst[0] = 'x';
    memcpy(dst, src, 0);
    ASSERT(dst[0] == 'x');
}

TEST(test_memmove)
{
    char buf[16] = "abcdef";

    /* non-overlapping */
    memmove(buf + 8, buf, 6);
    ASSERT(buf[8] == 'a' && buf[12] == 'e');

    /* forward overlap: src before dest */
    char ov1[] = "0123456789";
    memmove(ov1 + 2, ov1, 5);
    ASSERT(ov1[2] == '0' && ov1[3] == '1' && ov1[6] == '4');

    /* backward overlap: dest before src */
    char ov2[] = "0123456789";
    memmove(ov2, ov2 + 2, 5);
    ASSERT(ov2[0] == '2' && ov2[1] == '3' && ov2[4] == '6');
}

TEST(test_memset)
{
    char buf[8];

    memset(buf, 'A', 5);
    ASSERT(buf[0] == 'A' && buf[4] == 'A');

    /* zero length */
    buf[0] = 'B';
    memset(buf, 'C', 0);
    ASSERT(buf[0] == 'B');

    /* fill with 0 */
    memset(buf, 0, 5);
    ASSERT(buf[0] == '\0' && buf[4] == '\0');
}

TEST(test_memcmp)
{
    ASSERT(memcmp("abc", "abc", 3) == 0);
    ASSERT(memcmp("abc", "abd", 3) < 0);
    ASSERT(memcmp("abd", "abc", 3) > 0);
    ASSERT(memcmp("abx", "aby", 2) == 0);
}

TEST(test_memchr)
{
    const char *s = "hello";
    ASSERT(memchr(s, 'l', 5) == s + 2);
    ASSERT(memchr(s, 'z', 5) == NULL);
    ASSERT(memchr(s, 'h', 0) == NULL);
}

TEST(test_strlen)
{
    ASSERT(strlen("") == 0);
    ASSERT(strlen("hello") == 5);
}

TEST(test_strcmp)
{
    ASSERT(strcmp("abc", "abc") == 0);
    ASSERT(strcmp("abc", "abd") < 0);
    ASSERT(strcmp("abd", "abc") > 0);
    ASSERT(strcmp("", "a") < 0);
    ASSERT(strcmp("a", "") > 0);
}

TEST(test_strncmp)
{
    ASSERT(strncmp("abcx", "abcy", 3) == 0);
    ASSERT(strncmp("abc", "abd", 3) < 0);
    ASSERT(strncmp("abc", "abc", 0) == 0);
}

TEST(test_strcpy)
{
    char buf[16];
    strcpy(buf, "hello");
    ASSERT(buf[0] == 'h' && buf[5] == '\0');
}

TEST(test_strncpy)
{
    char buf[8];

    strncpy(buf, "hi", 8);
    ASSERT(buf[0] == 'h' && buf[1] == 'i');
    /* padding with NUL */
    ASSERT(buf[2] == '\0' && buf[7] == '\0');
}

TEST(test_strcat)
{
    char buf[16] = "hello";
    strcat(buf, " world");
    ASSERT(buf[0] == 'h' && buf[5] == ' ' && buf[10] == 'd' && buf[11] == '\0');
}

TEST(test_strncat)
{
    char buf[16] = "hello";
    strncat(buf, " world!", 6);
    ASSERT(buf[5] == ' ' && buf[10] == 'd' && buf[11] == '\0');
}

TEST(test_strchr)
{
    const char *s = "abcabc";

    /* found at start */
    ASSERT(strchr(s, 'a') == s);
    /* found in middle */
    ASSERT(strchr(s, 'b') == s + 1);
    /* not found */
    ASSERT(strchr(s, 'z') == NULL);
    /* NUL char search */
    ASSERT(strchr(s, '\0') == s + 6);
}

TEST(test_strrchr)
{
    const char *s = "abcabc";

    ASSERT(strrchr(s, 'a') == s + 3);
    ASSERT(strrchr(s, 'c') == s + 5);
    ASSERT(strrchr(s, 'z') == NULL);
    ASSERT(strrchr(s, '\0') == s + 6);
}

TEST(test_strstr)
{
    const char *s = "hello world";

    ASSERT(strstr(s, "world") == s + 6);
    ASSERT(strstr(s, "xyz") == NULL);
    ASSERT(strstr(s, "") == s);
}

TEST(test_strpbrk)
{
    const char *s = "hello";

    ASSERT(strpbrk(s, "lo") == s + 2);
    ASSERT(strpbrk(s, "xyz") == NULL);
}

TEST(test_strspn)
{
    ASSERT(strspn("aabbc", "ab") == 4);
    ASSERT(strspn("xyz", "ab") == 0);
    ASSERT(strspn("", "ab") == 0);
}

TEST(test_strcspn)
{
    ASSERT(strcspn("hello", "lo") == 2);
    ASSERT(strcspn("hello", "xyz") == 5);
    ASSERT(strcspn("", "ab") == 0);
}

TEST(test_strtok)
{
    char s[] = "one,,two,three";
    char *tok;

    tok = strtok(s, ",");
    ASSERT(tok != NULL);
    ASSERT(strcmp(tok, "one") == 0);

    tok = strtok(NULL, ",");
    ASSERT(tok != NULL);
    ASSERT(strcmp(tok, "two") == 0);

    tok = strtok(NULL, ",");
    ASSERT(tok != NULL);
    ASSERT(strcmp(tok, "three") == 0);

    tok = strtok(NULL, ",");
    ASSERT(tok == NULL);
}

TEST(test_strerror)
{
    ASSERT(strerror(0) != NULL);
    ASSERT(strerror(1) != NULL);
}

int main(void)
{
    RUN(test_memcpy);
    RUN(test_memmove);
    RUN(test_memset);
    RUN(test_memcmp);
    RUN(test_memchr);
    RUN(test_strlen);
    RUN(test_strcmp);
    RUN(test_strncmp);
    RUN(test_strcpy);
    RUN(test_strncpy);
    RUN(test_strcat);
    RUN(test_strncat);
    RUN(test_strchr);
    RUN(test_strrchr);
    RUN(test_strstr);
    RUN(test_strpbrk);
    RUN(test_strspn);
    RUN(test_strcspn);
    RUN(test_strtok);
    RUN(test_strerror);

    printf("all string tests passed\n");
    return 0;
}
