/* SPDX-License-Identifier: MIT */
/* llabs.c --- Absolute value of long long */
/* Copyright (c) 2026 Jakob Kastelic */

long long llabs(long long n)
{
    return n < 0 ? -n : n;
}
