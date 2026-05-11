// SPDX-License-Identifier: MIT
// cctest_csmith_daf28713.c --- cctest case csmith_daf28713 (csmith seed 3673327379)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcbefa7b0 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 3673327379 -o /tmp/csmith_gen_geynqnkn/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   signed f0 : 8;
};

union U1 {
   uint8_t  f0;
   uint32_t  f1;
};

union U2 {
   const int64_t  f0;
   uint16_t  f1;
   int8_t  f2;
   uint32_t  f3;
};


static int32_t g_2 = 0L;
static struct S0 g_29 = {12};
static int32_t g_37 = 0L;
static int64_t g_56 = 1L;
static int64_t g_60 = 0x8003DBE6A916C6C9LL;
static int16_t g_62 = 0x36CAL;
static union U1 g_79 = {0x18L};
static struct S0 g_117 = {-1};
static int32_t g_128 = 1L;
static int32_t g_129 = 1L;
static int32_t g_133 = 0x20FBFF59L;
static uint64_t g_136 = 0x90F2B86D1BDAACF2LL;
static union U2 g_171 = {-5L};



static union U2  func_1(void);
static int8_t  func_6(int16_t  p_7, uint8_t  p_8, uint32_t  p_9, uint64_t  p_10, int32_t  p_11);
static int16_t  func_12(int16_t  p_13, uint64_t  p_14);
static uint32_t  func_22(int32_t  p_23, uint64_t  p_24, struct S0  p_25, int32_t  p_26, int32_t  p_27);




static union U2  func_1(void)
{ 
    int8_t l_5[4] = {0x07L,0x07L,0x07L,0x07L};
    uint32_t l_28 = 0x64F943AFL;
    int32_t l_140[1][1];
    uint16_t l_141 = 0x3986L;
    int32_t l_169 = (-4L);
    const struct S0 l_170 = {14};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_140[i][j] = 0x421FF5D1L;
    }
    for (g_2 = (-20); (g_2 > (-20)); g_2++)
    { 
        uint64_t l_15[3][4] = {{0xD91E66C619A80BFBLL,0xD91E66C619A80BFBLL,0xD91E66C619A80BFBLL,0xD91E66C619A80BFBLL},{0xD91E66C619A80BFBLL,0xD91E66C619A80BFBLL,0xD91E66C619A80BFBLL,0xD91E66C619A80BFBLL},{0xD91E66C619A80BFBLL,0xD91E66C619A80BFBLL,0xD91E66C619A80BFBLL,0xD91E66C619A80BFBLL}};
        uint64_t l_149 = 18446744073709551615UL;
        int32_t l_150 = 0x2CC188F9L;
        int32_t l_151[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_151[i] = 0xC2B6DE28L;
        l_141 = (l_140[0][0] = ((l_5[2] , (func_6(func_12(l_15[2][3], (safe_sub_func_int16_t_s_s(0xA21EL, ((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(func_22(l_28, g_2, g_29, l_15[2][3], l_5[1]), l_15[2][3])) <= g_2), 3)) || g_2)))), g_2, l_15[1][2], g_2, l_28) , l_5[0])) && g_79.f0));
        if ((l_151[0] = (l_150 |= (safe_mod_func_uint64_t_u_u((!(((safe_mod_func_uint32_t_u_u(((g_62 = ((g_128 , l_15[1][2]) , (l_149 = (safe_div_func_uint32_t_u_u(4294967294UL, g_79.f0))))) | g_60), 1L)) == l_15[2][3]) | l_15[0][3])), g_136)))))
        { 
            g_117.f0 = 0xFA243B6BL;
        }
        else
        { 
            for (l_28 = 0; (l_28 < 39); l_28++)
            { 
                uint8_t l_154 = 0xF9L;
                union U2 l_155 = {0L};
                g_37 = l_154;
                return l_155;
            }
            l_169 &= ((safe_unary_minus_func_int32_t_s(((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((((-9L) <= ((safe_add_func_int16_t_s_s(g_133, (safe_add_func_uint64_t_u_u(g_79.f0, 0x379FE0895C1B54BBLL)))) != g_136)) || (-1L)), l_141)) & g_79.f0), l_140[0][0])), 1UL)) || l_5[2]))) != l_140[0][0]);
        }
    }
    g_117 = l_170;
    return g_171;
}



static int8_t  func_6(int16_t  p_7, uint8_t  p_8, uint32_t  p_9, uint64_t  p_10, int32_t  p_11)
{ 
    uint64_t l_61 = 18446744073709551613UL;
    int32_t l_63 = 0xA8275BAEL;
    union U1 l_78 = {255UL};
    int32_t l_87 = 0x169712D5L;
    int32_t l_123 = 1L;
    int32_t l_126 = 0x642676EBL;
    int32_t l_127 = 0x5734830CL;
    int32_t l_130 = 0L;
    uint32_t l_139 = 1UL;
    l_63 = (+(p_9 | (safe_mul_func_uint8_t_u_u((g_60 = (g_37 & p_10)), (g_62 |= l_61)))));
    if ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(0x1DL, 4)), (safe_add_func_int16_t_s_s(g_62, (safe_div_func_int32_t_s_s((((l_63 & ((safe_mul_func_uint8_t_u_u(g_29.f0, 0x1DL)) | g_2)) && g_29.f0) != g_29.f0), g_37)))))))
    { 
        l_87 |= (safe_mod_func_int32_t_s_s((g_29.f0 = (safe_sub_func_uint32_t_u_u(((l_78 = (g_79 = l_78)) , ((p_9 & (safe_rshift_func_int16_t_s_u((((!(4294967292UL >= (safe_div_func_int32_t_s_s((((safe_div_func_uint16_t_u_u(((l_78 , g_37) || g_56), (-9L))) != p_11) & p_8), g_60)))) | g_56) || p_7), g_2))) > l_63)), 0x3419813DL))), p_7));
    }
    else
    { 
        int32_t l_88 = 1L;
        int32_t l_108 = 1L;
        uint32_t l_109 = 1UL;
        int32_t l_110 = 0x9C81172EL;
        int16_t l_122[5];
        int32_t l_124 = (-6L);
        int32_t l_125 = 0x9293347DL;
        int32_t l_131 = 6L;
        int32_t l_132 = 0x908F88A6L;
        int32_t l_134 = (-5L);
        int32_t l_135 = 0x33FEF3BFL;
        int i;
        for (i = 0; i < 5; i++)
            l_122[i] = (-1L);
        l_88 &= (0xC05DL | ((l_87 = 9L) & (((g_62 |= 0x6DD6L) ^ (l_63 = p_11)) | g_2)));
        if ((g_2 , (safe_div_func_int8_t_s_s((~((+(((((safe_sub_func_uint8_t_u_u((l_61 , g_2), ((((((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((((+(safe_lshift_func_uint16_t_u_u(p_9, 0))) , l_63) , l_88), (-8L))), g_2)), l_63)) , l_108), g_62)), l_109)) == p_8) || p_7) ^ p_10) , g_60) | 0x12B0ECC8L))) , l_87) <= p_7) && 0L) , p_8)) || p_10)), l_108))))
        { 
            g_37 = g_2;
        }
        else
        { 
            uint32_t l_111 = 0x7D4E8587L;
            struct S0 l_116 = {4};
            if ((p_10 && (-1L)))
            { 
                int32_t l_114 = 0xA95F2429L;
                --l_111;
                l_63 = g_2;
                l_114 |= g_62;
            }
            else
            { 
                struct S0 l_115 = {-12};
                g_117 = (l_116 = (g_29 = l_115));
                l_63 = ((safe_add_func_uint16_t_u_u(l_116.f0, (safe_add_func_uint64_t_u_u(g_56, g_79.f0)))) , 0x8FB111D0L);
            }
            return p_8;
        }
        ++g_136;
    }
    return l_139;
}



static int16_t  func_12(int16_t  p_13, uint64_t  p_14)
{ 
    const int64_t l_54 = 0x62ED5BB0C7F2BAC4LL;
    for (p_14 = 0; (p_14 > 1); p_14 = safe_add_func_uint64_t_u_u(p_14, 6))
    { 
        for (p_13 = (-3); (p_13 != (-19)); p_13 = safe_sub_func_uint16_t_u_u(p_13, 4))
        { 
            uint16_t l_45 = 0x5DFEL;
            int32_t l_55[2];
            int i;
            for (i = 0; i < 2; i++)
                l_55[i] = 0xAE4D7D9CL;
            for (g_37 = 25; (g_37 >= 2); g_37 = safe_sub_func_uint16_t_u_u(g_37, 1))
            { 
                int64_t l_44 = (-8L);
                int32_t l_50 = 0x2F53403EL;
                const union U2 l_53 = {8L};
                g_56 = (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((l_44 = (-2L)), 4)), ((((g_29.f0 = ((l_45++) != 0xCB11L)) & (safe_div_func_uint8_t_u_u(l_50, ((safe_div_func_uint8_t_u_u((l_53 , l_54), p_14)) & g_2)))) <= l_55[1]) <= p_13)));
            }
            g_29.f0 = p_13;
        }
    }
    return p_13;
}



static uint32_t  func_22(int32_t  p_23, uint64_t  p_24, struct S0  p_25, int32_t  p_26, int32_t  p_27)
{ 
    uint32_t l_32[5][3][4] = {{{0UL,0UL,0xFC1F7B40L,0x5C380A38L},{0x5C380A38L,0x88CA0E2CL,0xFC1F7B40L,0x88CA0E2CL},{0UL,18446744073709551612UL,0x7142B622L,0xFC1F7B40L}},{{0x88CA0E2CL,18446744073709551612UL,18446744073709551612UL,0x88CA0E2CL},{18446744073709551612UL,0x88CA0E2CL,0UL,0x5C380A38L},{18446744073709551612UL,0UL,18446744073709551612UL,0x7142B622L}},{{0x88CA0E2CL,0x5C380A38L,0x7142B622L,0x7142B622L},{0UL,0UL,0UL,0x7142B622L},{0x7142B622L,18446744073709551612UL,0UL,18446744073709551612UL}},{{0x2DE9E5A9L,0x5C380A38L,0xFC1F7B40L,0UL},{18446744073709551612UL,0x5C380A38L,0x5C380A38L,18446744073709551612UL},{0x5C380A38L,18446744073709551612UL,0x2DE9E5A9L,0x7142B622L}},{{0x5C380A38L,0x2DE9E5A9L,0x5C380A38L,0xFC1F7B40L},{18446744073709551612UL,0x7142B622L,0xFC1F7B40L,0xFC1F7B40L},{0x2DE9E5A9L,0x2DE9E5A9L,0UL,0x7142B622L}}};
    int i, j, k;
    for (p_26 = 10; (p_26 < 20); p_26++)
    { 
        l_32[0][2][1] |= 3L;
        g_29 = p_25;
    }
    return g_29.f0;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_171.f1, "g_171.f1", print_hash_value);
    transparent_crc(g_171.f2, "g_171.f2", print_hash_value);
    transparent_crc(g_171.f3, "g_171.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
