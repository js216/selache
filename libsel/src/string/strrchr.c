/* SPDX-License-Identifier: MIT */
/* strrchr.c --- Find last occurrence of a character in a string */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

char *strrchr(const char *s, int c)
{
    char ch = (char)c;
    const char *last = NULL;

    while (*s != '\0') {
        if (*s == ch) {
            last = s;
        }
        s++;
    }

    if (ch == '\0') {
        return (char *)s;
    }

    return (char *)last;
}
