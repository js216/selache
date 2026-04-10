/* SPDX-License-Identifier: MIT */
/* strstr.c --- Find a substring within a string */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

char *strstr(const char *haystack, const char *needle)
{
    const char *h;
    const char *n;

    if (*needle == '\0') {
        return (char *)haystack;
    }

    while (*haystack != '\0') {
        h = haystack;
        n = needle;

        while (*h == *n && *n != '\0') {
            h++;
            n++;
        }

        if (*n == '\0') {
            return (char *)haystack;
        }

        haystack++;
    }

    return NULL;
}
