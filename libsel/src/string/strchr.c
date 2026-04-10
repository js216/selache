/* SPDX-License-Identifier: MIT */
/* strchr.c --- Find first occurrence of a character in a string */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

char *strchr(const char *s, int c)
{
    char ch = (char)c;

    while (*s != '\0') {
        if (*s == ch) {
            return (char *)s;
        }
        s++;
    }

    if (ch == '\0') {
        return (char *)s;
    }

    return NULL;
}
