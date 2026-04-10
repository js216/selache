/* SPDX-License-Identifier: GPL-3.0 */
/* atol.c --- Convert string to long */
/* Copyright (c) 2026 Jakob Kastelic */

int isspace(int c);

long atol(const char *s)
{
    long result = 0;
    int sign = 1;

    while (isspace((unsigned char)*s))
        s++;

    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}
