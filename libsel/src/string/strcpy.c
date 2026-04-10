/* SPDX-License-Identifier: GPL-3.0 */
/* strcpy.c --- Copy a string */
/* Copyright (c) 2026 Jakob Kastelic */

#include "string.h"

char *strcpy(char *dest, const char *src)
{
    char *ret = dest;

    while ((*dest++ = *src++) != '\0') {
    }

    return ret;
}
