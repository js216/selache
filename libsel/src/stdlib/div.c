/* SPDX-License-Identifier: MIT */
/* div.c --- Integer division with quotient and remainder */
/* Copyright (c) 2026 Jakob Kastelic */

typedef struct {
    int quot;
    int rem;
} sel_div_t;

__attribute__((weak)) sel_div_t div(int numer, int denom)
{
    sel_div_t result;
    result.quot = numer / denom;
    result.rem = numer % denom;
    return result;
}
