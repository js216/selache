/* SPDX-License-Identifier: MIT */
/* stdlib.h --- General utilities: memory, conversions, search, sort */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef _STDLIB_H
#define _STDLIB_H

#include <stddef.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#define RAND_MAX 32767

typedef struct {
    int quot;
    int rem;
} div_t;

typedef struct {
    long quot;
    long rem;
} ldiv_t;

typedef struct {
    long long quot;
    long long rem;
} lldiv_t;

void *malloc(size_t size);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void  free(void *ptr);

int       atoi(const char *nptr);
long      atol(const char *nptr);
long long atoll(const char *nptr);

long               strtol(const char *nptr, char **endptr, int base);
unsigned long      strtoul(const char *nptr, char **endptr, int base);
long long          strtoll(const char *nptr, char **endptr, int base);
unsigned long long strtoull(const char *nptr, char **endptr, int base);

int       abs(int j);
long      labs(long j);
long long llabs(long long j);

div_t   div(int numer, int denom);
ldiv_t  ldiv(long numer, long denom);
lldiv_t lldiv(long long numer, long long denom);

int  rand(void);
void srand(unsigned seed);

void abort(void);
void exit(int status);
void _Exit(int status);
int  atexit(void (*func)(void));

void *bsearch(const void *key, const void *base, size_t nmemb,
              size_t size, int (*compar)(const void *, const void *));
void  qsort(void *base, size_t nmemb, size_t size,
            int (*compar)(const void *, const void *));

#endif
