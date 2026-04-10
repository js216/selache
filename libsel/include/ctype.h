/* SPDX-License-Identifier: MIT */
/* ctype.h --- Character classification and conversion (C99 7.4) */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef LIBSEL_CTYPE_H
#define LIBSEL_CTYPE_H

int isalnum(int c);
int isalpha(int c);
int isblank(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);
int tolower(int c);
int toupper(int c);

#endif
