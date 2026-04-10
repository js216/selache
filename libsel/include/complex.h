/* SPDX-License-Identifier: MIT */
/* complex.h --- Complex number support */
/* Copyright (c) 2026 Jakob Kastelic */

#ifndef _COMPLEX_H
#define _COMPLEX_H

#define complex _Complex
#define _Complex_I ((__extension__ 1.0fi))
#define I _Complex_I

extern float crealf(float _Complex);
extern double creal(double _Complex);
extern float cimagf(float _Complex);
extern double cimag(double _Complex);
extern float cabsf(float _Complex);
extern double cabs(double _Complex);
extern float _Complex conjf(float _Complex);
extern double _Complex conj(double _Complex);

#endif
