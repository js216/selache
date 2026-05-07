// SPDX-License-Identifier: MIT
// cctest_csmith_63d3a9b0.c --- cctest case csmith_63d3a9b0 (csmith seed 1674815920)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1bf14a5f */

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

// Options:   -s 1674815920 -o /tmp/csmith_gen_vwxa1ty0/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int16_t  f0;
};

struct S1 {
   const struct S0  f0;
   uint16_t  f1;
   uint32_t  f2;
   int16_t  f3;
   struct S0  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   signed f0 : 28;
};
#pragma pack(pop)

union U3 {
   uint16_t  f0;
   struct S0  f1;
   int16_t  f2;
};

union U4 {
   const struct S0  f0;
   uint64_t  f1;
};

union U5 {
   int64_t  f0;
   uint64_t  f1;
   uint16_t  f2;
   struct S0  f3;
};

union U6 {
   struct S0  f0;
   uint64_t  f1;
};


static union U6 g_6 = {{-1L}};
static uint8_t g_27 = 1UL;
static uint16_t g_39 = 0xC4B7L;
static int64_t g_40 = 5L;
static union U3 g_51 = {65526UL};
static union U4 g_72 = {{1L}};
static int32_t g_82 = 0x07302220L;
static int32_t *g_81 = &g_82;
static uint8_t g_102[3][1] = {{0x42L},{0x42L},{0x42L}};
static union U5 g_117 = {-8L};
static struct S2 g_125[7][1] = {{{2539}},{{8594}},{{8594}},{{2539}},{{8594}},{{8594}},{{2539}}};
static uint8_t *g_149 = &g_27;
static uint8_t **g_148 = &g_149;
static int32_t g_160 = 9L;
static int32_t **g_190 = &g_81;
static int16_t *g_237 = &g_51.f2;
static int16_t **g_236 = &g_237;
static int32_t ***g_256 = &g_190;
static int32_t g_269 = 0x8DED1CDCL;
static uint32_t g_283 = 0UL;
static int32_t g_302 = 0x62CEF5FAL;
static int16_t g_303 = 0x0532L;
static uint32_t g_304 = 18446744073709551606UL;
static union U4 g_312 = {{0xBF90L}};
static uint8_t g_320 = 5UL;
static int64_t g_323 = 2L;
static int64_t g_324 = (-9L);
static uint64_t g_325[6] = {0xC139FA897B0590F9LL,0xC139FA897B0590F9LL,0xC139FA897B0590F9LL,0xC139FA897B0590F9LL,0xC139FA897B0590F9LL,0xC139FA897B0590F9LL};
static int16_t g_354 = 0L;
static int16_t * const g_353 = &g_354;
static int16_t * const *g_352 = &g_353;
static const int32_t *g_359 = &g_160;
static struct S2 **g_365[1] = {(void*)0};
static uint8_t g_389 = 1UL;
static struct S1 g_409 = {{0L},0UL,0x350D279CL,-8L,{1L}};
static int64_t g_437[7][7][5] = {{{0x79CD59E5D14B2B6DLL,0x5E3FC0619C783061LL,(-2L),0x80C36692C0D943B2LL,(-1L)},{0x65B3739AFE914E7ALL,0x230814F4F9EC15FALL,1L,(-1L),0x6DBEE4DA2C610D86LL},{(-2L),0xF41BFAFFB6A51597LL,3L,0xFBB87651DE7662D7LL,0x80C36692C0D943B2LL},{0xF41BFAFFB6A51597LL,0x5F551FEE5F72F857LL,1L,5L,(-1L)},{0xF41BFAFFB6A51597LL,9L,(-1L),0x65B3739AFE914E7ALL,0x271E6D9B8B5A0E17LL},{(-2L),0x3F634CE5A61A3907LL,0xD54BD7E9FFF4F0F0LL,0x5E3FC0619C783061LL,0xFBB87651DE7662D7LL},{3L,(-1L),(-1L),(-2L),(-1L)}},{{0xE638051BDCD488DDLL,0xE638051BDCD488DDLL,0x170371D9B8707CB7LL,0x5E3FC0619C783061LL,0xD54BD7E9FFF4F0F0LL},{(-1L),(-1L),7L,(-7L),0xFBB87651DE7662D7LL},{0x4664D1F4282519BDLL,(-7L),0x2F7F7D65FC68337ELL,0L,1L},{0L,(-1L),5L,(-1L),(-1L)},{0xFC5A9C8A47113E96LL,0xE638051BDCD488DDLL,1L,0xDC5D14B4C910CA1BLL,1L},{8L,(-1L),0L,0L,(-7L)},{0x5E3FC0619C783061LL,0xA0C19D5F81449091LL,(-10L),9L,1L}},{{0L,0x5E3FC0619C783061LL,(-1L),9L,8L},{0xFBB87651DE7662D7LL,0x5BD9327C2083D566LL,(-1L),(-2L),0x2F7F7D65FC68337ELL},{0L,0xC1F87D238100C5ABLL,(-10L),0x08C7653ECA8A1A81LL,0x4664D1F4282519BDLL},{1L,8L,0L,0x5BD9327C2083D566LL,0xE638051BDCD488DDLL},{1L,1L,1L,1L,0L},{0xE638051BDCD488DDLL,0x08C7653ECA8A1A81LL,5L,1L,1L},{0x5BD9327C2083D566LL,8L,0x2F7F7D65FC68337ELL,(-1L),9L}},{{(-1L),(-5L),7L,1L,(-1L)},{0xC1F87D238100C5ABLL,3L,0x170371D9B8707CB7LL,1L,(-1L)},{(-5L),0x5E3FC0619C783061LL,(-1L),0x5BD9327C2083D566LL,(-2L)},{(-1L),7L,0L,0x08C7653ECA8A1A81LL,0xFC5A9C8A47113E96LL},{3L,1L,0x230814F4F9EC15FALL,(-2L),0xD54BD7E9FFF4F0F0LL},{0x2F7F7D65FC68337ELL,0xE638051BDCD488DDLL,(-5L),9L,0xD54BD7E9FFF4F0F0LL},{1L,2L,7L,9L,0xFC5A9C8A47113E96LL}},{{0x4664D1F4282519BDLL,9L,0xA97E7C0EF8D422A0LL,0L,(-2L)},{1L,(-1L),0xDC5D14B4C910CA1BLL,0xDC5D14B4C910CA1BLL,(-1L)},{0xFBB87651DE7662D7LL,0x2F7F7D65FC68337ELL,1L,(-1L),(-1L)},{8L,1L,0x65B3739AFE914E7ALL,0L,9L},{9L,0xA0C19D5F81449091LL,1L,(-7L),1L},{8L,9L,(-1L),0x5E3FC0619C783061LL,0L},{0xFBB87651DE7662D7LL,3L,0xF41BFAFFB6A51597LL,(-2L),0xE638051BDCD488DDLL}},{{1L,0xC1F87D238100C5ABLL,1L,1L,0x4664D1F4282519BDLL},{0x4664D1F4282519BDLL,0L,0L,3L,0x2F7F7D65FC68337ELL},{1L,0x08C7653ECA8A1A81LL,0x79CD59E5D14B2B6DLL,1L,8L},{0x2F7F7D65FC68337ELL,0x08C7653ECA8A1A81LL,0xDC5D14B4C910CA1BLL,(-1L),1L},{3L,0L,0x2F7F7D65FC68337ELL,0xD54BD7E9FFF4F0F0LL,(-7L)},{(-1L),0xC1F87D238100C5ABLL,1L,1L,1L},{(-5L),3L,(-5L),(-1L),(-1L)}},{{0xC1F87D238100C5ABLL,9L,(-1L),3L,1L},{(-1L),0xA0C19D5F81449091LL,9L,0x08C7653ECA8A1A81LL,0xFBB87651DE7662D7LL},{1L,(-1L),9L,5L,0L},{1L,0xC8210BEDAFE43279LL,0x80C36692C0D943B2LL,1L,9L},{(-5L),(-7L),0L,0L,(-1L)},{0x6B3A9FC1B6181162LL,0L,0xC8210BEDAFE43279LL,(-10L),0xDC5D14B4C910CA1BLL},{1L,(-2L),0xF41BFAFFB6A51597LL,(-1L),(-2L)}}};
static struct S0 g_460 = {0L};
static struct S0 *g_459 = &g_460;
static uint32_t g_473 = 0x2E31E6C7L;
static uint32_t g_476[1] = {1UL};
static int8_t g_482 = 0xFAL;
static uint8_t g_483 = 0xB8L;
static int32_t g_513 = (-10L);
static int32_t g_514 = (-1L);
static uint64_t g_515 = 0UL;
static uint32_t * const g_569[4][1] = {{(void*)0},{&g_473},{(void*)0},{&g_473}};
static uint32_t * const *g_568 = &g_569[3][0];
static struct S1 g_574 = {{0L},1UL,4294967294UL,0xA9DCL,{0x6A3EL}};
static struct S1 *g_573[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t g_586[6] = {0x36BAE004E2005762LL,0x36BAE004E2005762LL,0x36BAE004E2005762LL,0x36BAE004E2005762LL,0x36BAE004E2005762LL,0x36BAE004E2005762LL};
static uint8_t g_619 = 0xFCL;
static uint64_t g_628[4][4] = {{0x53A977D70C282ABALL,0x2A0F3CBC51CBFB13LL,18446744073709551608UL,18446744073709551608UL},{2UL,2UL,0xC54849CFDE55B947LL,0x2A0F3CBC51CBFB13LL},{0x2A0F3CBC51CBFB13LL,0x53A977D70C282ABALL,0xC54849CFDE55B947LL,0x53A977D70C282ABALL},{2UL,0x06635E825FBA1A54LL,18446744073709551608UL,0xC54849CFDE55B947LL}};
static struct S1 g_633[6][2][5] = {{{{{1L},65535UL,0xCA38B07EL,0x5FFDL,{0x5A62L}},{{1L},0xECCFL,0x1CA3BC5CL,1L,{0x7233L}},{{0x6840L},0xE671L,0xE3A81F48L,-1L,{0x70EFL}},{{0x05CBL},0xDC91L,0xC9B0A1CAL,1L,{0x80DEL}},{{0x67B4L},65533UL,0x42BADE8BL,0xEA1CL,{1L}}},{{{-1L},0x9C46L,1UL,0x64E0L,{-5L}},{{1L},65535UL,0xCA38B07EL,0x5FFDL,{0x5A62L}},{{-1L},65535UL,4294967293UL,-6L,{-1L}},{{0xFF40L},1UL,0x7DE3694AL,1L,{0L}},{{-1L},65535UL,4294967293UL,-6L,{-1L}}}},{{{{0xFF40L},1UL,0x7DE3694AL,1L,{0L}},{{0xFF40L},1UL,0x7DE3694AL,1L,{0L}},{{0x67B4L},65533UL,0x42BADE8BL,0xEA1CL,{1L}},{{0x05CBL},0xDC91L,0xC9B0A1CAL,1L,{0x80DEL}},{{0x6840L},0xE671L,0xE3A81F48L,-1L,{0x70EFL}}},{{{1L},2UL,0x78AE1E9FL,-4L,{0L}},{{0L},0x4227L,0x69578FEBL,9L,{0xF081L}},{{0x67B4L},65533UL,0x42BADE8BL,0xEA1CL,{1L}},{{0x4610L},0x11B9L,0x005FBCEAL,7L,{1L}},{{-1L},0x9C46L,1UL,0x64E0L,{-5L}}}},{{{{0x9185L},65535UL,0x5915918EL,-4L,{0xF589L}},{{0x67B4L},65533UL,0x42BADE8BL,0xEA1CL,{1L}},{{-1L},65535UL,4294967293UL,-6L,{-1L}},{{0x67B4L},65533UL,0x42BADE8BL,0xEA1CL,{1L}},{{0x9185L},65535UL,0x5915918EL,-4L,{0xF589L}}},{{{0x05CBL},0xDC91L,0xC9B0A1CAL,1L,{0x80DEL}},{{0L},0x4227L,0x69578FEBL,9L,{0xF081L}},{{0x6840L},0xE671L,0xE3A81F48L,-1L,{0x70EFL}},{{0x9185L},65535UL,0x5915918EL,-4L,{0xF589L}},{{0xFF40L},1UL,0x7DE3694AL,1L,{0L}}}},{{{{0x05CBL},0xDC91L,0xC9B0A1CAL,1L,{0x80DEL}},{{0xFF40L},1UL,0x7DE3694AL,1L,{0L}},{{-1L},0x9C46L,1UL,0x64E0L,{-5L}},{{1L},0xECCFL,0x1CA3BC5CL,1L,{0x7233L}},{{1L},0xECCFL,0x1CA3BC5CL,1L,{0x7233L}}},{{{0x9185L},65535UL,0x5915918EL,-4L,{0xF589L}},{{1L},65535UL,0xCA38B07EL,0x5FFDL,{0x5A62L}},{{0x9185L},65535UL,0x5915918EL,-4L,{0xF589L}},{{0L},0x4227L,0x69578FEBL,9L,{0xF081L}},{{0xFF40L},1UL,0x7DE3694AL,1L,{0L}}}},{{{{1L},2UL,0x78AE1E9FL,-4L,{0L}},{{1L},0xECCFL,0x1CA3BC5CL,1L,{0x7233L}},{{0xFF40L},1UL,0x7DE3694AL,1L,{0L}},{{0L},0x4227L,0x69578FEBL,9L,{0xF081L}},{{0x9185L},65535UL,0x5915918EL,-4L,{0xF589L}}},{{{0xFF40L},1UL,0x7DE3694AL,1L,{0L}},{{-1L},0x9C46L,1UL,0x64E0L,{-5L}},{{1L},0xECCFL,0x1CA3BC5CL,1L,{0x7233L}},{{1L},0xECCFL,0x1CA3BC5CL,1L,{0x7233L}},{{-1L},0x9C46L,1UL,0x64E0L,{-5L}}}},{{{{-1L},0x9C46L,1UL,0x64E0L,{-5L}},{{-3L},9UL,1UL,0xDA83L,{-1L}},{{0xFF40L},1UL,0x7DE3694AL,1L,{0L}},{{0x9185L},65535UL,0x5915918EL,-4L,{0xF589L}},{{0x6840L},0xE671L,0xE3A81F48L,-1L,{0x70EFL}}},{{{1L},65535UL,0xCA38B07EL,0x5FFDL,{0x5A62L}},{{-3L},9UL,1UL,0xDA83L,{-1L}},{{0x9185L},65535UL,0x5915918EL,-4L,{0xF589L}},{{0x67B4L},65533UL,0x42BADE8BL,0xEA1CL,{1L}},{{-1L},65535UL,4294967293UL,-6L,{-1L}}}}};
static uint32_t g_638 = 0x157EF4E0L;
static struct S1 g_687 = {{-1L},9UL,5UL,0L,{0L}};
static int32_t g_788 = 0xF44047C0L;
static int8_t g_789 = 0x23L;
static int64_t g_791 = (-1L);
static int32_t g_794 = 0x7CC1C54CL;
static uint16_t g_795[4] = {0xCE8DL,0xCE8DL,0xCE8DL,0xCE8DL};
static union U5 g_822 = {0xC1B1BE07F6814602LL};
static struct S1 **g_840 = &g_573[2];
static union U3 g_868 = {0x0745L};
static union U3 *g_867[7] = {&g_868,&g_868,&g_51,&g_868,&g_868,&g_51,&g_868};
static int32_t g_940 = 0x0F6A30A6L;
static int8_t g_973 = 0xA8L;
static int64_t g_974 = 0x47B6616DDB9F0211LL;
static int32_t g_975 = 0x68F9A026L;
static uint32_t g_982 = 0xB614AEEFL;
static uint32_t g_997 = 0x74404C1CL;
static int16_t g_1014 = 0x3194L;
static struct S0 ***g_1036 = (void*)0;
static struct S0 ****g_1035 = &g_1036;
static uint16_t g_1071 = 9UL;
static uint32_t g_1110 = 0UL;
static struct S1 g_1118 = {{0xD3E4L},65530UL,1UL,0L,{5L}};
static uint8_t g_1128 = 1UL;
static struct S1 **g_1137 = &g_573[4];
static uint32_t g_1149 = 0x5373F257L;
static union U6 g_1175 = {{2L}};
static struct S2 * const g_1190 = &g_125[4][0];
static struct S2 * const *g_1189 = &g_1190;
static struct S2 * const **g_1188 = &g_1189;
static struct S2 * const *** const g_1187 = &g_1188;
static struct S2 ***g_1263 = &g_365[0];
static struct S2 **** const g_1262[5] = {&g_1263,&g_1263,&g_1263,&g_1263,&g_1263};
static struct S1 g_1292 = {{0x2127L},7UL,8UL,0xFF7AL,{0x4A19L}};
static int16_t g_1304 = 0xF623L;
static int32_t g_1331[5] = {0L,0L,0L,0L,0L};
static int32_t g_1359 = 1L;
static union U4 **g_1377 = (void*)0;
static union U4 *g_1380 = (void*)0;
static union U4 ** const g_1379 = &g_1380;
static union U3 g_1426[1] = {{0x25B3L}};
static int32_t g_1435 = 8L;
static struct S2 *****g_1481 = (void*)0;
static uint64_t g_1496 = 0xD84A8B35D6EA5F8FLL;
static uint8_t g_1549 = 1UL;
static union U4 ***g_1565 = &g_1377;
static uint64_t g_1570 = 4UL;
static union U5 *** const *g_1582 = (void*)0;
static int16_t ***g_1670 = (void*)0;
static struct S1 g_1690 = {{1L},0UL,1UL,-9L,{0xA819L}};
static union U5 g_1705 = {-6L};
static union U5 *g_1704 = &g_1705;
static const int16_t *g_1746[6][3][2] = {{{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0}},{{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0}},{{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0}},{{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0}},{{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0}},{{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0},{&g_574.f0.f0,&g_574.f0.f0}}};
static const int16_t ** const g_1745 = &g_1746[0][1][0];
static const int16_t ** const *g_1744[7] = {&g_1745,&g_1745,(void*)0,&g_1745,&g_1745,(void*)0,&g_1745};
static const int16_t ** const **g_1743 = &g_1744[2];
static int16_t g_1748 = 0x5166L;



static union U5  func_1(void);
static struct S2  func_2(union U6  p_3, int32_t  p_4, int32_t  p_5);
static int32_t  func_7(uint32_t  p_8, uint64_t  p_9, uint32_t  p_10);
static uint64_t  func_17(uint8_t  p_18);
static uint8_t ** func_22(int8_t  p_23, uint8_t * p_24, const int32_t  p_25);
static struct S2  func_30(uint8_t ** p_31, uint64_t  p_32, int64_t  p_33, uint8_t * const * p_34, uint8_t * p_35);
static uint32_t  func_45(struct S2  p_46, uint8_t ** p_47, uint16_t  p_48);
static struct S2  func_49(union U3  p_50);




static union U5  func_1(void)
{ 
    int16_t l_11 = 8L;
    uint8_t *l_19 = (void*)0;
    int32_t l_20 = 0xCDA7209CL;
    int32_t *l_1706[7] = {&g_160,(void*)0,(void*)0,&g_160,(void*)0,(void*)0,&g_160};
    union U5 l_1755 = {-1L};
    int i;
    (****g_1187) = func_2(g_6, (g_1331[0] = func_7(l_11, (((g_6.f0.f0 || g_6.f0.f0) , (l_11 , (safe_lshift_func_uint8_t_u_s(((*g_149) = (safe_lshift_func_uint8_t_u_s(((!(func_17((l_20 = 0x18L)) ^ (-1L))) == 0xB2L), 1))), 1)))) | g_574.f4.f0), l_11)), g_1292.f0.f0);
    return l_1755;
}



static struct S2  func_2(union U6  p_3, int32_t  p_4, int32_t  p_5)
{ 
    uint8_t l_1710 = 255UL;
    const int16_t *l_1740 = (void*)0;
    const int16_t **l_1739 = &l_1740;
    const int16_t ** const *l_1738 = &l_1739;
    const int16_t ** const **l_1737 = &l_1738;
    union U3 l_1747 = {1UL};
    int32_t l_1751 = 0xFB697434L;
    struct S2 l_1754 = {-925};
    for (p_4 = 0; (p_4 <= 4); p_4 += 1)
    { 
        union U3 l_1713 = {65532UL};
        int32_t *l_1736[3];
        const int16_t ** const ***l_1741 = (void*)0;
        const int16_t ** const ***l_1742[4][4][7] = {{{&l_1737,&l_1737,(void*)0,&l_1737,&l_1737,&l_1737,(void*)0},{&l_1737,&l_1737,&l_1737,&l_1737,&l_1737,&l_1737,&l_1737},{&l_1737,(void*)0,&l_1737,&l_1737,&l_1737,(void*)0,&l_1737},{&l_1737,&l_1737,(void*)0,&l_1737,&l_1737,(void*)0,(void*)0}},{{&l_1737,&l_1737,(void*)0,&l_1737,&l_1737,&l_1737,&l_1737},{&l_1737,&l_1737,(void*)0,(void*)0,&l_1737,&l_1737,&l_1737},{(void*)0,&l_1737,&l_1737,(void*)0,&l_1737,&l_1737,&l_1737},{&l_1737,&l_1737,&l_1737,&l_1737,&l_1737,&l_1737,&l_1737}},{{&l_1737,&l_1737,(void*)0,&l_1737,&l_1737,&l_1737,&l_1737},{(void*)0,&l_1737,&l_1737,(void*)0,&l_1737,(void*)0,&l_1737},{&l_1737,&l_1737,(void*)0,(void*)0,&l_1737,&l_1737,&l_1737},{&l_1737,&l_1737,&l_1737,&l_1737,&l_1737,&l_1737,&l_1737}},{{&l_1737,&l_1737,(void*)0,&l_1737,&l_1737,&l_1737,&l_1737},{&l_1737,&l_1737,&l_1737,&l_1737,&l_1737,(void*)0,&l_1737},{&l_1737,(void*)0,&l_1737,&l_1737,&l_1737,&l_1737,&l_1737},{&l_1737,&l_1737,&l_1737,&l_1737,&l_1737,&l_1737,&l_1737}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1736[i] = &g_513;
        for (g_822.f1 = 0; (g_822.f1 <= 0); g_822.f1 += 1)
        { 
            int16_t l_1707[4];
            int32_t *l_1708 = &g_1331[0];
            int32_t *l_1709 = &g_160;
            uint32_t l_1724 = 1UL;
            int i;
            for (i = 0; i < 4; i++)
                l_1707[i] = 0x6415L;
            --l_1710;
            (**g_1189) = func_49(l_1713);
            if (g_1331[(g_822.f1 + 3)])
                break;
            (*l_1709) |= ((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((&g_573[2] == (((safe_add_func_uint64_t_u_u(18446744073709551615UL, p_4)) && p_3.f0.f0) , (void*)0)), 1)) || p_4) == (safe_div_func_int32_t_s_s((p_5 &= l_1724), l_1710))), p_4)), g_687.f4.f0)) != p_4);
        }
        g_794 = (safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((g_1331[p_4] <= ((safe_mod_func_int16_t_s_s(((0x9C8FL <= ((**g_352) = ((safe_mul_func_uint16_t_u_u((p_4 >= (~(g_82 = p_3.f0.f0))), ((p_4 , func_49((((g_868.f0 , (g_1743 = l_1737)) == &l_1738) , l_1747))) , 0UL))) ^ l_1710))) | l_1710), (-1L))) > p_4)) < l_1710), p_5)), 65535UL)) & p_5), l_1747.f2));
        if (g_1748)
            break;
        for (g_574.f2 = 8; (g_574.f2 <= 28); ++g_574.f2)
        { 
            (**g_256) = &p_4;
            l_1751 |= (-5L);
        }
        if (p_5)
        { 
            p_5 ^= 0L;
            (**g_256) = &p_4;
        }
        else
        { 
            struct S2 l_1752 = {-14152};
            (*g_190) = (void*)0;
            return l_1752;
        }
    }
    for (g_1014 = 3; (g_1014 >= 1); g_1014 -= 1)
    { 
        struct S2 l_1753 = {7384};
        return l_1753;
    }
    return l_1754;
}



static int32_t  func_7(uint32_t  p_8, uint64_t  p_9, uint32_t  p_10)
{ 
    struct S0 l_1156 = {1L};
    uint32_t l_1162[4][7] = {{4294967289UL,0xE2424141L,4294967289UL,9UL,9UL,4294967289UL,0xE2424141L},{0x3F7266AEL,0x2ED5FD24L,3UL,3UL,0x2ED5FD24L,0x3F7266AEL,0x2ED5FD24L},{4294967289UL,9UL,9UL,4294967289UL,0xE2424141L,4294967289UL,9UL},{8UL,8UL,0x3F7266AEL,3UL,0x3F7266AEL,8UL,8UL}};
    uint16_t l_1167 = 65527UL;
    uint64_t *l_1172 = &g_312.f1;
    int32_t l_1173 = 0L;
    union U6 *l_1174 = &g_1175;
    struct S2 l_1178 = {14927};
    uint64_t l_1237 = 18446744073709551615UL;
    uint8_t l_1288 = 5UL;
    int32_t l_1330 = (-6L);
    int32_t l_1332 = 0xC1F922EAL;
    int32_t l_1333 = (-4L);
    int32_t l_1357[4] = {0L,0L,0L,0L};
    int64_t l_1358 = 3L;
    uint64_t l_1362 = 1UL;
    union U5 l_1374 = {-4L};
    uint64_t l_1390 = 4UL;
    union U4 *l_1391[5] = {&g_72,&g_72,&g_72,&g_72,&g_72};
    union U4 *l_1392 = &g_72;
    struct S2 * const *** const *l_1393 = (void*)0;
    int64_t l_1401 = 0x1E26F9A98D7E6911LL;
    int16_t l_1411[2][2][3] = {{{6L,7L,0x05FCL},{0x006CL,7L,0x006CL}},{{(-1L),6L,0x05FCL},{(-1L),(-1L),6L}}};
    int32_t l_1412 = 1L;
    struct S1 l_1418 = {{-9L},0UL,5UL,1L,{9L}};
    int16_t ***l_1444 = &g_236;
    int16_t ****l_1443 = &l_1444;
    int32_t l_1536 = (-7L);
    uint8_t l_1553 = 6UL;
    struct S0 ***l_1588 = (void*)0;
    int32_t **l_1629 = &g_81;
    int32_t *** const l_1628 = &l_1629;
    int32_t *** const *l_1627[7][2] = {{&l_1628,&l_1628},{&l_1628,&l_1628},{&l_1628,&l_1628},{&l_1628,&l_1628},{&l_1628,&l_1628},{&l_1628,&l_1628},{&l_1628,&l_1628}};
    union U3 l_1635 = {0xA6A5L};
    struct S1 l_1679 = {{0xF8F5L},0x10E3L,4294967295UL,0L,{0xEDB1L}};
    int i, j, k;
    l_1173 &= (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((p_9 , ((l_1156 , (safe_mod_func_int16_t_s_s((~((((*g_353) = (safe_div_func_uint64_t_u_u((((*l_1172) = (l_1162[1][2] == (safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(l_1167, p_8)) == ((((safe_add_func_uint16_t_u_u(((((g_160 ^ 0UL) ^ p_10) != l_1167) ^ 0xFF8F26A08A7F59FDLL), l_1167)) , l_1162[1][2]) || l_1167) > l_1162[1][2])), p_8)))) > 0x9CB712E57AC1306DLL), g_82))) != g_409.f0.f0) , l_1156.f0)), p_8))) & g_283)), 0xCCC628CFL)), l_1162[1][2]));
    for (g_791 = 1; (g_791 <= 5); g_791 += 1)
    { 
        union U3 l_1176 = {0x0B60L};
        struct S2 *l_1177[7];
        struct S2 ***l_1192 = &g_365[0];
        struct S2 ****l_1191[3][4];
        struct S0 **l_1232 = (void*)0;
        int32_t l_1282 = 0x012EC2B5L;
        int32_t l_1284 = (-1L);
        int32_t l_1303[7];
        uint32_t l_1305 = 0xFB971EDAL;
        union U5 *l_1314 = &g_822;
        union U5 **l_1313[3];
        union U5 ***l_1312 = &l_1313[2];
        int16_t ***l_1318 = &g_236;
        int16_t ****l_1317 = &l_1318;
        int16_t l_1321[7][7] = {{8L,0xBB3AL,5L,0x9766L,0xE540L,0x3559L,0xE540L},{0L,0xAE6BL,0xAE6BL,0L,0xAB1BL,0x7774L,(-5L)},{0x3968L,5L,5L,0xBB3AL,0xBB3AL,0x650DL,0x3559L},{1L,1L,0x40C2L,0L,(-5L),1L,1L},{5L,(-2L),0xBB3AL,(-2L),5L,8L,0x68E1L},{0xAB1BL,0x3CB6L,1L,0L,0x7774L,0L,1L},{0x68E1L,0x68E1L,0xE540L,0xBB3AL,0x3559L,0x3968L,0x650DL}};
        int32_t l_1328 = (-1L);
        int8_t l_1361 = 0x12L;
        uint64_t l_1385 = 18446744073709551612UL;
        int i, j;
        for (i = 0; i < 7; i++)
            l_1177[i] = &g_125[0][0];
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_1191[i][j] = &l_1192;
        }
        for (i = 0; i < 7; i++)
            l_1303[i] = (-1L);
        for (i = 0; i < 3; i++)
            l_1313[i] = &l_1314;
        l_1174 = &g_6;
        l_1178 = func_49(l_1176);
        for (g_82 = 0; (g_82 <= 3); g_82 += 1)
        { 
            union U3 l_1195[1][1][5] = {{{{0xDF3BL},{0xDF3BL},{0xDF3BL},{0xDF3BL},{0xDF3BL}}}};
            int32_t l_1214[2][3] = {{0x55097671L,0x55097671L,0x55097671L},{0x096568E3L,0x096568E3L,0x096568E3L}};
            int32_t l_1215 = (-1L);
            union U4 l_1220[1] = {{{0L}}};
            uint8_t *** const * const l_1223 = (void*)0;
            int32_t l_1266 = 0xF4717C1FL;
            uint8_t l_1268 = 0x59L;
            struct S1 *l_1291 = &g_1292;
            const union U3 *l_1297 = &g_51;
            const union U3 **l_1296 = &l_1297;
            union U6 l_1316 = {{-8L}};
            uint8_t l_1334[3][2];
            struct S2 l_1344[5][2] = {{{-4484},{-4484}},{{-4484},{-4484}},{{-4484},{-4484}},{{-4484},{-4484}},{{-4484},{-4484}}};
            struct S0 *l_1348 = &g_574.f4;
            int64_t l_1360[5][5] = {{0x356C1D73E60C3F53LL,6L,0x356C1D73E60C3F53LL,0x356C1D73E60C3F53LL,6L},{1L,0L,0L,1L,0L},{6L,6L,4L,6L,6L},{0L,1L,0L,0L,1L},{6L,0x356C1D73E60C3F53LL,0x356C1D73E60C3F53LL,6L,0x356C1D73E60C3F53LL}};
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1334[i][j] = 255UL;
            }
        }
    }
    if ((((safe_sub_func_uint32_t_u_u((p_8 || p_9), l_1390)) != l_1390) ^ ((l_1391[0] = l_1391[0]) == ((*g_1379) = l_1392))))
    { 
        l_1178 = ((**g_1189) = (*g_1190));
        l_1393 = &g_1187;
        return p_8;
    }
    else
    { 
        int64_t l_1394 = 0x63A6013C9872824ELL;
        int32_t l_1408 = 1L;
        int32_t l_1409 = 0L;
        int32_t l_1410[1];
        uint32_t l_1413 = 0x57DFBE89L;
        uint16_t l_1421 = 65535UL;
        int16_t ***l_1440 = &g_236;
        int16_t ****l_1439[2][4] = {{&l_1440,(void*)0,&l_1440,(void*)0},{&l_1440,(void*)0,&l_1440,(void*)0}};
        struct S1 l_1447 = {{-5L},0xBFACL,0xD6AFE098L,-10L,{0x7502L}};
        union U5 l_1462[7][4][4] = {{{{0x8FD44BD9FB3D3875LL},{0x555288EE866E2CF2LL},{0L},{0xD9D124A9BE8883EBLL}},{{0L},{0xD9D124A9BE8883EBLL},{-1L},{0xE66E727EAB23E1D9LL}},{{0xBBE3EBDC66366129LL},{0x53ABF8B76FF99F03LL},{1L},{-1L}},{{1L},{1L},{-5L},{-5L}}},{{{0xE66E727EAB23E1D9LL},{0x6D5823F347AA1BC3LL},{0x14AED88CF12CB425LL},{-8L}},{{0xAC076973CE1BEFA4LL},{-1L},{0x79ADA3D44D898565LL},{0x7002381387505644LL}},{{5L},{-1L},{-9L},{-9L}},{{0x754C27852B0ACAEDLL},{0x754C27852B0ACAEDLL},{-9L},{1L}}},{{{0xD9D124A9BE8883EBLL},{-8L},{0xFB76CD3F9BED62B2LL},{0L}},{{1L},{-9L},{0x7EDB338940C9D10DLL},{0xFB76CD3F9BED62B2LL}},{{1L},{-9L},{0x3ADB1E02C2C2354ALL},{0L}},{{-9L},{-8L},{-8L},{1L}}},{{{-5L},{0x754C27852B0ACAEDLL},{1L},{-9L}},{{0x53ABF8B76FF99F03LL},{-1L},{-5L},{0x7002381387505644LL}},{{-1L},{-1L},{-1L},{-8L}},{{0x15B56D2F867151C6LL},{0x6D5823F347AA1BC3LL},{1L},{-5L}}},{{{2L},{1L},{0xBBE3EBDC66366129LL},{-1L}},{{0x2B9D63045FF894C8LL},{0x53ABF8B76FF99F03LL},{0x15B56D2F867151C6LL},{0xE66E727EAB23E1D9LL}},{{0x555288EE866E2CF2LL},{0xD9D124A9BE8883EBLL},{0L},{0xD9D124A9BE8883EBLL}},{{0x3ADB1E02C2C2354ALL},{0x555288EE866E2CF2LL},{2L},{1L}}},{{{0xEF75DDAFD85B2621LL},{-8L},{0L},{-9L}},{{0x79ADA3D44D898565LL},{0xFB76CD3F9BED62B2LL},{7L},{-7L}},{{0x79ADA3D44D898565LL},{0x881DB12A4CD8C7A1LL},{0L},{0L}},{{0xEF75DDAFD85B2621LL},{-7L},{2L},{1L}}},{{{0x3ADB1E02C2C2354ALL},{1L},{0L},{0L}},{{0x555288EE866E2CF2LL},{-5L},{0x15B56D2F867151C6LL},{-1L}},{{0L},{-5L},{6L},{0x7EDB338940C9D10DLL}},{{0xAFA8AA78B4BE85A2LL},{0L},{2L},{0x6535764E6B449555LL}}}};
        struct S0 ****l_1499 = (void*)0;
        union U6 l_1529 = {{0L}};
        int64_t l_1532 = 0x8E2CF530A5BA57D9LL;
        uint32_t l_1539 = 0xFCFFDCE2L;
        struct S2 l_1542 = {16184};
        int64_t l_1544 = (-9L);
        int32_t l_1547[4][5];
        int64_t l_1552 = 0x3B739011C4453E6BLL;
        union U4 ***l_1563 = &g_1377;
        union U5 *l_1703 = &l_1374;
        union U5 **l_1702[5];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1410[i] = (-1L);
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_1547[i][j] = (-9L);
        }
        for (i = 0; i < 5; i++)
            l_1702[i] = &l_1703;
        if (l_1394)
        { 
            uint64_t l_1397 = 0xBB5003FB47F15126LL;
            int32_t l_1398 = 0x3AEA8675L;
            int32_t *l_1399 = &g_1331[1];
            int32_t *l_1400 = (void*)0;
            int32_t l_1402 = 8L;
            int32_t *l_1403 = &g_82;
            int32_t *l_1404 = &l_1398;
            int32_t *l_1405 = &l_1330;
            int32_t *l_1406 = &g_82;
            int32_t *l_1407[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1407[i] = &g_513;
            for (g_312.f1 = 0; (g_312.f1 > 30); g_312.f1 = safe_add_func_uint64_t_u_u(g_312.f1, 9))
            { 
                l_1397 &= 0x9EE84A2FL;
                for (g_389 = 0; g_389 < 6; g_389 += 1)
                {
                    g_325[g_389] = 0xEA4F21A6360CB80ALL;
                }
            }
            ++l_1413;
        }
        else
        { 
            int16_t l_1434 = (-5L);
            int32_t l_1436 = 0L;
            uint32_t *l_1438 = (void*)0;
            uint32_t **l_1437 = &l_1438;
            for (l_1374.f2 = 12; (l_1374.f2 > 12); ++l_1374.f2)
            { 
                uint32_t *l_1433 = &l_1413;
                int16_t *****l_1441 = (void*)0;
                int16_t *****l_1442[4] = {&l_1439[0][2],&l_1439[0][2],&l_1439[0][2],&l_1439[0][2]};
                int32_t *l_1448[5][7] = {{&l_1410[0],&l_1333,&l_1330,&g_513,&l_1333,&g_513,&l_1333},{&l_1410[0],&l_1333,&l_1333,&l_1410[0],&g_794,&l_1410[0],&g_1331[2]},{&l_1357[2],&l_1410[0],&l_1330,&g_794,&g_794,&l_1330,&l_1410[0]},{&g_794,&l_1357[2],&g_513,&l_1333,&l_1333,&g_1331[2],&g_1331[2]},{&g_513,&l_1357[2],&g_794,&l_1357[2],&g_513,&l_1333,&l_1333}};
                int i, j;
                l_1436 &= (((l_1418 , ((safe_lshift_func_int8_t_s_u(p_9, l_1421)) > ((g_1435 = (safe_mul_func_int8_t_s_s(7L, (((safe_div_func_uint64_t_u_u((g_1426[0] , (((*l_1433) = (safe_add_func_uint64_t_u_u(g_1110, (safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s(0x5710A45C0014D8BCLL, p_8)), 0xFB3BL))))) != 0xE5DE6540L)), g_482)) || p_10) || l_1434)))) >= 0UL))) != (-8L)) < (*g_149));
                l_1437 = l_1437;
                l_1436 = ((((g_513 ^= (((l_1443 = (g_633[2][1][4].f4.f0 , l_1439[0][2])) == &l_1444) & (((*g_149) = (safe_rshift_func_int8_t_s_u((p_9 != (((l_1447 , (g_1426[0].f2 ^ 7L)) , p_9) > 0x2D4D5D918080CB10LL)), 5))) & l_1436))) <= l_1330) , 65535UL) , p_8);
            }
        }
        for (l_1332 = (-26); (l_1332 >= (-27)); --l_1332)
        { 
            struct S0 l_1453 = {-1L};
            int64_t *l_1457 = (void*)0;
            int64_t *l_1458 = &g_437[5][6][1];
            int32_t *l_1460[1];
            uint16_t *l_1461[3];
            uint32_t l_1517 = 0x802E4416L;
            int8_t l_1537[6] = {0xA2L,0xA2L,(-4L),0xA2L,0xA2L,(-4L)};
            int32_t l_1545[1];
            int16_t l_1546[6] = {0xA8B7L,0xA8B7L,(-1L),0xA8B7L,0xA8B7L,(-1L)};
            int i;
            for (i = 0; i < 1; i++)
                l_1460[i] = (void*)0;
            for (i = 0; i < 3; i++)
                l_1461[i] = &g_868.f0;
            for (i = 0; i < 1; i++)
                l_1545[i] = 4L;
            if ((safe_mul_func_uint16_t_u_u((l_1453 , (p_8 , (safe_div_func_uint64_t_u_u((+((*l_1458) = g_1304)), 0x1D6D6B14F198AE70LL)))), (g_303 <= (g_868.f0 |= ((g_125[3][0].f0 ^= ((l_1447.f4.f0 | ((!g_1118.f1) && p_8)) & l_1418.f4.f0)) < l_1447.f0.f0))))))
            { 
                for (g_269 = 0; (g_269 <= 1); g_269 += 1)
                { 
                    int i;
                    g_513 |= (g_1331[(g_269 + 2)] , (l_1462[6][1][0] , (safe_lshift_func_uint8_t_u_u((((**g_148) = ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((g_574.f0.f0 != ((++(*l_1172)) >= ((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_1330 = ((**g_352) < (safe_rshift_func_uint16_t_u_s(p_8, p_10)))), (l_1178.f0 &= (**g_352)))), 0x022AL)) | 0x668EBC9DL))) , 255UL) | (**g_148)), g_51.f2)), 5)) > 9L)) & 0x95L), 2))));
                    g_1331[(g_269 + 2)] = g_1331[g_269];
                    if ((*g_359))
                        continue;
                }
                for (g_974 = 0; (g_974 < (-19)); g_974 = safe_sub_func_uint64_t_u_u(g_974, 7))
                { 
                    g_359 = ((*g_190) = &l_1330);
                }
            }
            else
            { 
                uint32_t l_1484 = 0xF1C7D119L;
                uint32_t *l_1489 = &g_1292.f2;
                int32_t l_1491[3][6] = {{0xFDD5170DL,0x8A2C8F9BL,0x8A2C8F9BL,0xFDD5170DL,0xFDD5170DL,0x8A2C8F9BL},{0xFDD5170DL,0xFDD5170DL,0x8A2C8F9BL,0x8A2C8F9BL,0xFDD5170DL,0xFDD5170DL},{0xFDD5170DL,0x8A2C8F9BL,0x8A2C8F9BL,0xFDD5170DL,0xFDD5170DL,0x8A2C8F9BL}};
                int i, j;
                for (l_1173 = 0; (l_1173 != 0); l_1173 = safe_add_func_int8_t_s_s(l_1173, 8))
                { 
                    g_1481 = (void*)0;
                }
                l_1491[2][0] &= ((p_9 & (safe_div_func_uint64_t_u_u(l_1484, (safe_lshift_func_int16_t_s_s((p_10 != (l_1410[0] , (safe_mod_func_uint32_t_u_u(((*l_1489) = p_9), 1L)))), 3))))) != ((safe_unary_minus_func_int16_t_s((l_1484 , p_10))) && 1UL));
                for (g_389 = (-24); (g_389 > 15); ++g_389)
                { 
                    int8_t l_1494 = (-5L);
                    int32_t l_1495[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1495[i] = (-1L);
                    g_1496--;
                    l_1495[0] = ((g_6 , l_1499) == &g_1036);
                    l_1491[2][0] ^= (((safe_mod_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(((g_1292.f3 && (p_9 <= (safe_lshift_func_int16_t_s_s(((**g_352) |= (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_1418.f4.f0 && (*g_149)), (!0xD2D6D092L))), l_1237))), (((safe_rshift_func_int16_t_s_u(0x8423L, l_1447.f2)) == 0x9B59L) ^ g_974))))) >= p_10), 0x5EL)) > 18446744073709551606UL), l_1418.f4.f0)) < (**g_236)), 0xE8DEL)) != (-1L)) || 0x21D9BAD47B456898LL);
                }
                l_1491[2][0] &= (-5L);
            }
            for (g_1110 = 0; (g_1110 <= 16); g_1110++)
            { 
                uint32_t *l_1518 = &g_283;
                int32_t l_1530 = 1L;
                int32_t l_1533[1];
                struct S2 l_1543 = {-2830};
                int16_t l_1548 = 7L;
                int i;
                for (i = 0; i < 1; i++)
                    l_1533[i] = 0x4E88E5C6L;
                for (g_323 = 0; g_323 < 6; g_323 += 1)
                {
                    g_325[g_323] = 0xF4243CE68B41FCF8LL;
                }
                l_1517 = p_8;
            }
            g_1570 = (safe_add_func_int8_t_s_s(p_9, 0x9AL));
        }
        for (g_39 = (-25); (g_39 <= 34); ++g_39)
        { 
            uint32_t l_1579 = 0x4F5E7D30L;
            const struct S1 l_1592 = {{-9L},0xCAB4L,0x68BFF313L,0xB2AFL,{0xAF5AL}};
            int32_t l_1601 = 1L;
            union U5 * const l_1608 = &g_822;
            union U5 * const *l_1607 = &l_1608;
            int32_t l_1646 = 1L;
            int32_t l_1648 = (-8L);
            int32_t l_1649 = 0x42EFD9BAL;
            int32_t l_1651 = 8L;
            int32_t l_1656 = (-1L);
            int32_t l_1658 = 0xF5EC6728L;
            int32_t l_1659 = 0x01DED3AAL;
            int32_t l_1660 = (-5L);
            int32_t l_1661[5];
            int64_t l_1662[6];
            int16_t ** const *l_1669[3];
            int16_t ** const **l_1668 = &l_1669[2];
            int16_t ** const ***l_1667[2][2][2] = {{{&l_1668,&l_1668},{&l_1668,&l_1668}},{{&l_1668,&l_1668},{&l_1668,&l_1668}}};
            struct S2 *l_1698 = &l_1542;
            struct S2 **l_1697[4] = {&l_1698,&l_1698,&l_1698,&l_1698};
            int32_t *l_1700 = &l_1409;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1661[i] = (-1L);
            for (i = 0; i < 6; i++)
                l_1662[i] = 0x542C781A9818DE6DLL;
            for (i = 0; i < 3; i++)
                l_1669[i] = &g_236;
            for (g_791 = 0; (g_791 <= 4); g_791 = safe_add_func_uint8_t_u_u(g_791, 2))
            { 
                int32_t *l_1575 = &g_513;
                int32_t *l_1576 = (void*)0;
                int32_t *l_1577 = &g_794;
                int32_t *l_1578[4][7] = {{&g_82,&g_82,&g_513,&g_513,&g_82,&g_82,&g_513},{(void*)0,&l_1408,(void*)0,&l_1408,(void*)0,&l_1408,(void*)0},{&g_82,&g_513,&g_513,&g_82,&g_82,&g_513,&g_513},{&l_1410[0],&l_1408,&l_1410[0],&l_1408,&l_1410[0],&l_1408,&l_1410[0]}};
                union U5 *** const **l_1583 = &g_1582;
                int i, j;
                l_1579++;
                (*l_1583) = g_1582;
            }
        }
        (***g_1188) = (l_1462[6][1][0] , l_1542);
        g_1704 = &l_1462[6][1][0];
    }
    return p_9;
}



static uint64_t  func_17(uint8_t  p_18)
{ 
    int64_t l_21[2][2];
    uint8_t *l_26[7][7][5] = {{{&g_27,&g_27,&g_27,&g_27,&g_27},{(void*)0,&g_27,&g_27,(void*)0,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{(void*)0,(void*)0,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,(void*)0,&g_27},{&g_27,&g_27,&g_27,&g_27,(void*)0},{&g_27,&g_27,&g_27,&g_27,&g_27}},{{&g_27,&g_27,&g_27,(void*)0,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,(void*)0,&g_27,&g_27,(void*)0},{&g_27,&g_27,(void*)0,&g_27,(void*)0},{&g_27,(void*)0,&g_27,(void*)0,&g_27},{&g_27,(void*)0,(void*)0,(void*)0,&g_27},{(void*)0,&g_27,&g_27,&g_27,&g_27}},{{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,(void*)0,&g_27,(void*)0},{(void*)0,(void*)0,&g_27,&g_27,&g_27},{(void*)0,&g_27,&g_27,&g_27,&g_27},{&g_27,(void*)0,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,(void*)0,&g_27,&g_27,&g_27}},{{&g_27,&g_27,&g_27,&g_27,&g_27},{(void*)0,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,(void*)0,&g_27,&g_27},{&g_27,&g_27,(void*)0,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,(void*)0,&g_27,&g_27,&g_27}},{{(void*)0,&g_27,&g_27,(void*)0,&g_27},{&g_27,(void*)0,&g_27,(void*)0,&g_27},{&g_27,&g_27,&g_27,&g_27,(void*)0},{&g_27,&g_27,(void*)0,&g_27,&g_27},{&g_27,&g_27,(void*)0,&g_27,(void*)0},{(void*)0,&g_27,&g_27,&g_27,&g_27},{(void*)0,&g_27,&g_27,&g_27,&g_27}},{{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{(void*)0,(void*)0,(void*)0,&g_27,&g_27}},{{&g_27,&g_27,&g_27,&g_27,&g_27},{(void*)0,(void*)0,(void*)0,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,(void*)0,(void*)0,(void*)0},{&g_27,&g_27,&g_27,(void*)0,&g_27}}};
    struct S0 *l_700 = &g_6.f0;
    int32_t l_737 = 0xE4E759E6L;
    struct S1 l_760 = {{0L},0xBFE1L,4294967295UL,1L,{-8L}};
    int32_t l_763 = 0xD8CE2368L;
    int16_t **l_770[1];
    int16_t l_834 = (-1L);
    struct S1 **l_839 = (void*)0;
    uint32_t l_850 = 0xFE896D69L;
    uint8_t ***l_881 = (void*)0;
    int32_t **l_919 = &g_81;
    union U6 l_934 = {{1L}};
    struct S2 l_944 = {-4155};
    int32_t l_995 = 0xEDBC1478L;
    int32_t l_996 = 0x5D586BD9L;
    int8_t l_1007 = 0xF0L;
    int16_t l_1013 = (-1L);
    struct S2 l_1033[3] = {{-13448},{-13448},{-13448}};
    uint16_t l_1127 = 65530UL;
    int32_t l_1148[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_21[i][j] = 0x02268F62C4DF8E3BLL;
    }
    for (i = 0; i < 1; i++)
        l_770[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_1148[i] = (-1L);
lbl_1005:
    if (l_21[0][0])
    { 
        uint16_t *l_38 = &g_39;
        uint8_t * const *l_41 = &l_26[0][4][0];
        uint8_t *l_42[5];
        uint8_t ***l_698 = &g_148;
        int32_t l_709 = 1L;
        union U4 **l_722 = (void*)0;
        int8_t l_755 = 0x5CL;
        int32_t l_792[1];
        int i;
        for (i = 0; i < 5; i++)
            l_42[i] = &g_27;
        for (i = 0; i < 1; i++)
            l_792[i] = 0xF90AB5B4L;
lbl_818:
        (*l_698) = func_22(l_21[0][0], l_26[3][6][3], (safe_lshift_func_uint16_t_u_u(((func_30(&l_26[5][0][1], (g_40 = (safe_add_func_int16_t_s_s(((((*l_38) = p_18) == g_6.f0.f0) == p_18), p_18))), p_18, l_41, l_42[4]) , &p_18) != (*g_148)), 13)));
        if (((!p_18) < ((l_700 != l_700) < (safe_add_func_int16_t_s_s((**g_352), (safe_lshift_func_uint8_t_u_s((((**g_236) = 0xA363L) < (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((0L == p_18), l_709)), l_709))), 0)))))))
        { 
            int32_t l_712 = 0x5E80FA03L;
            for (g_409.f1 = 13; (g_409.f1 < 21); g_409.f1 = safe_add_func_int64_t_s_s(g_409.f1, 3))
            { 
                uint64_t *l_713[7][5] = {{(void*)0,(void*)0,(void*)0,&g_628[0][0],&g_325[5]},{&g_325[0],&g_515,&g_325[5],&g_628[0][0],(void*)0},{&g_325[5],&g_117.f1,&g_515,&g_515,&g_117.f1},{&g_117.f1,&g_628[0][2],&g_325[5],&g_515,&g_117.f1},{&g_117.f1,&g_628[0][2],&g_515,(void*)0,&g_325[0]},{&g_325[5],&g_325[5],&g_325[5],&g_325[5],(void*)0},{&g_117.f1,&g_117.f1,&g_117.f1,&g_628[0][0],(void*)0}};
                int8_t *l_720 = (void*)0;
                int8_t *l_721 = &g_482;
                uint8_t ***l_723 = &g_148;
                uint8_t ****l_724 = &l_698;
                int i, j;
                (***g_256) &= ((g_628[1][3] = (g_460.f0 != l_712)) <= (safe_add_func_int16_t_s_s(p_18, (safe_mod_func_uint64_t_u_u(0x4031AD093B9F63C3LL, ((g_72.f1 = ((((g_117 , (safe_sub_func_int8_t_s_s(((*l_700) , ((*l_721) = ((-8L) >= g_323))), p_18))) ^ 0x77L) , (void*)0) != l_722)) | g_409.f4.f0))))));
                (*l_724) = l_723;
                for (g_40 = 29; (g_40 > (-8)); g_40 = safe_sub_func_uint64_t_u_u(g_40, 3))
                { 
                    (*g_190) = (void*)0;
                    return p_18;
                }
            }
            for (g_269 = 0; (g_269 >= (-1)); g_269 = safe_sub_func_uint16_t_u_u(g_269, 7))
            { 
                int64_t *l_729 = &l_21[0][0];
                int64_t *l_730 = &g_117.f0;
                uint32_t *l_736 = &g_638;
                int32_t *l_738 = &g_513;
                (*l_738) &= ((((((*l_730) = ((*l_729) = (-9L))) ^ ((l_709 == (((***g_256) = (+g_687.f4.f0)) == ((*l_736) = ((((safe_sub_func_int16_t_s_s((**g_352), ((**g_236) = (safe_mul_func_uint16_t_u_u((&g_353 == (void*)0), ((*g_352) != (*g_236))))))) >= (*g_353)) >= 0xFCC6BF423096DD48LL) || p_18)))) ^ 0xFACAC039L)) < l_737) ^ 0x283E677521C8DD27LL) <= 0x95D906CAL);
            }
            for (g_574.f2 = 1; (g_574.f2 <= 4); g_574.f2 += 1)
            { 
                return g_40;
            }
        }
        else
        { 
            uint32_t *l_741 = &g_473;
            uint32_t **l_740[2];
            uint32_t ***l_739 = &l_740[0];
            int8_t *l_756 = &g_482;
            struct S2 *l_758 = (void*)0;
            struct S2 **l_757[6][6][3] = {{{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,(void*)0,(void*)0},{&l_758,(void*)0,&l_758}},{{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,(void*)0,(void*)0},{&l_758,(void*)0,&l_758}},{{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,(void*)0,(void*)0},{&l_758,(void*)0,&l_758}},{{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,(void*)0,(void*)0},{&l_758,(void*)0,&l_758}},{{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,(void*)0,(void*)0},{&l_758,(void*)0,&l_758}},{{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,&l_758,&l_758},{&l_758,(void*)0,(void*)0},{&l_758,(void*)0,&l_758}}};
            int32_t l_759 = 6L;
            struct S1 l_771[5] = {{{-1L},0x49D1L,0x715D1E22L,5L,{0xB3DAL}},{{-1L},0x49D1L,0x715D1E22L,5L,{0xB3DAL}},{{-1L},0x49D1L,0x715D1E22L,5L,{0xB3DAL}},{{-1L},0x49D1L,0x715D1E22L,5L,{0xB3DAL}},{{-1L},0x49D1L,0x715D1E22L,5L,{0xB3DAL}}};
            int32_t l_787 = 0x82082C74L;
            int32_t l_790[6][4][7] = {{{(-1L),(-1L),0xD21A7548L,0x1B8304EAL,0L,(-1L),0xB53C5685L},{5L,4L,1L,0xE090691DL,0x018E85B0L,0xE67C7FC8L,0x72DBD7E8L},{5L,(-9L),0x9CFF8917L,3L,4L,0x9CFF8917L,0x5FF8045EL},{0x880333D3L,0x19E10E38L,0xDB1A58E1L,0x018E85B0L,0x55E10568L,(-9L),4L}},{{5L,0xB53C5685L,0x8CB2A156L,1L,0x1B8304EAL,0x72DBD7E8L,(-1L)},{0x1B8304EAL,1L,0x49A7F9EDL,0x1F6B6FDCL,0x9F790591L,9L,9L},{9L,(-1L),0xE090691DL,4L,0xAF2646D1L,(-1L),9L},{0xDB1A58E1L,7L,(-3L),0xE090691DL,9L,(-1L),(-1L)}},{{7L,3L,9L,0xD21A7548L,0xE090691DL,0x6049ECEAL,1L},{(-1L),0x0141344CL,0L,0xA915FCB6L,3L,0L,(-1L)},{0x2BBBD242L,1L,(-7L),(-7L),1L,0x2BBBD242L,0x9CFF8917L},{0L,0x19E10E38L,7L,(-1L),0xB1B37DDEL,0x6049ECEAL,(-1L)}},{{(-1L),5L,1L,0xE090691DL,0x8790A022L,9L,0x55E10568L},{0L,0x19E10E38L,0x9C68149FL,3L,(-3L),(-1L),0x0141344CL},{(-1L),1L,(-1L),(-1L),6L,3L,0xB1B37DDEL},{0xE67C7FC8L,0x0141344CL,0L,0xB1B37DDEL,0x8790A022L,5L,0x39B1AE5CL}},{{(-8L),0xE67C7FC8L,0x9CFF8917L,0x0C6671AAL,1L,3L,0x0EC9B188L},{0x39B1AE5CL,0xB1B37DDEL,3L,6L,(-1L),(-1L),1L},{6L,(-1L),0x0EC9B188L,6L,3L,6L,0xD21A7548L},{0L,0xE090691DL,0xA92AC865L,0x0C6671AAL,0xAF2646D1L,0x27346146L,0x9CFF8917L}},{{1L,(-1L),0x6049ECEAL,0xB1B37DDEL,(-1L),7L,0x19E10E38L},{1L,5L,0L,(-1L),0x0C6671AAL,0x0C6671AAL,(-1L)},{0x2BBBD242L,6L,0x2BBBD242L,3L,(-1L),9L,0x0EC9B188L},{0xA915FCB6L,1L,0x6049ECEAL,0xE090691DL,0xD21A7548L,3L,0xE67C7FC8L}}};
            int64_t l_793[5][4];
            struct S2 ***l_814[5];
            struct S2 ****l_813 = &l_814[4];
            struct S1 **l_842 = &g_573[2];
            struct S1 ***l_841 = &l_842;
            struct S1 ***l_843 = (void*)0;
            struct S1 **l_845 = &g_573[3];
            struct S1 ***l_844 = &l_845;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_740[i] = &l_741;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                    l_793[i][j] = 0x47284CB379C12CCDLL;
            }
            for (i = 0; i < 5; i++)
                l_814[i] = (void*)0;
            (*g_81) = ((((void*)0 != l_739) || ((((((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((-4L), (safe_div_func_int8_t_s_s(((*l_756) = ((((((**g_236) , (((*l_698) = &g_149) != (((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((~(safe_lshift_func_uint16_t_u_s(0UL, (**g_236)))) || 0x560CL) != 0x7BL), p_18)), g_325[5])) == 6L) , &l_26[3][6][3]))) , p_18) != p_18) > (-10L)) ^ l_755)), (-7L))))) == p_18), p_18)) , (void*)0) == l_757[2][2][1]) | l_759) , l_760) , l_759)) <= 0xAF9AL);
            for (g_409.f3 = (-28); (g_409.f3 > 15); g_409.f3 = safe_add_func_uint64_t_u_u(g_409.f3, 9))
            { 
                int32_t l_782 = 0x455EE3CBL;
                int32_t *l_783 = &l_759;
                int32_t *l_784 = &g_160;
                int32_t *l_785 = &l_763;
                int32_t *l_786[2][5] = {{&l_759,&l_709,&g_82,&g_82,&l_709},{&l_759,&l_709,&g_82,&g_82,&l_709}};
                union U5 *l_821[1][3][7] = {{{&g_822,&g_117,&g_822,&g_822,&g_117,&g_822,&g_822},{&g_822,&g_822,&g_117,&g_822,&g_822,&g_117,&g_822},{&g_117,&g_822,&g_822,&g_117,&g_822,&g_822,&g_117}}};
                int i, j, k;
                l_763 |= ((***g_256) = 1L);
                (*g_81) = (((safe_mod_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_s((0x65486BA0L && (safe_lshift_func_uint8_t_u_s((l_770[0] == (void*)0), ((l_771[2] , ((safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((0x72L == ((((safe_rshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((*l_38) = g_325[5]), g_304)), 0xCA2C57DBL)) || g_102[1][0]), (**g_148))) == g_409.f0.f0) == p_18) && 0x0CL)) & (*g_149)), p_18)), p_18)) <= l_782)) || g_633[2][1][4].f1)))), 7)) || (*g_81)) ^ p_18) <= p_18), l_709)) | g_409.f2) , l_771[2].f2);
                g_795[2]++;
                (*l_783) = (safe_rshift_func_int8_t_s_u((((*l_741)++) , ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((l_771[2].f4 , p_18) < (safe_mul_func_uint16_t_u_u(g_312.f0.f0, (~((**g_190) = (0x6CL && (safe_add_func_uint8_t_u_u((*g_149), p_18)))))))), 6)), 3)), l_793[1][2])) , g_409.f2)), p_18));
                for (g_791 = 3; (g_791 >= 0); g_791 -= 1)
                { 
                    struct S2 *****l_815 = &l_813;
                    struct S2 ****l_817 = (void*)0;
                    struct S2 *****l_816 = &l_817;
                    union U5 *l_820 = (void*)0;
                    union U5 **l_819[5][3] = {{(void*)0,(void*)0,(void*)0},{&l_820,&l_820,&l_820},{(void*)0,(void*)0,(void*)0},{&l_820,&l_820,&l_820},{(void*)0,(void*)0,(void*)0}};
                    int64_t *l_833 = &g_437[0][1][3];
                    int i, j;
                    (*l_816) = ((*l_815) = l_813);
                    if (g_638)
                        goto lbl_818;
                    l_821[0][1][1] = &g_117;
                    (*g_81) |= (safe_mul_func_uint16_t_u_u(0xE7BEL, (((((safe_mul_func_int16_t_s_s(((g_51 , l_771[2].f4) , 0x3D58L), ((safe_div_func_int64_t_s_s(((*l_833) = (((safe_lshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(p_18, 0xFFBDL)), ((l_771[2] , 0x1CE6886B22C7E0B4LL) , 0x4652L))) , 0x97A8L) ^ p_18)), (*l_784))) < l_834))) , g_460.f0) >= 0x5C5FL) , 0L) || p_18)));
                    if (l_792[0])
                        break;
                }
            }
            if (g_687.f2)
                goto lbl_1005;
            (**g_256) = ((safe_lshift_func_int16_t_s_s(((*g_353) = ((safe_sub_func_int16_t_s_s((l_21[0][0] == (((g_840 = l_839) == ((*l_844) = ((*l_841) = &g_573[2]))) > ((safe_sub_func_int8_t_s_s(((*g_459) , g_323), (*g_149))) > (safe_sub_func_uint8_t_u_u((p_18 = ((((0x5604L && 1UL) , 1UL) < l_737) == l_755)), 0xB7L))))), l_792[0])) , 0xAE71L)), l_760.f4.f0)) , (**g_256));
        }
        (*g_81) |= l_850;
        for (l_760.f3 = 0; (l_760.f3 <= (-15)); l_760.f3 = safe_sub_func_uint32_t_u_u(l_760.f3, 1))
        { 
            uint32_t l_855 = 0xDD2805DDL;
            for (g_409.f1 = 0; (g_409.f1 > 6); g_409.f1 = safe_add_func_uint64_t_u_u(g_409.f1, 6))
            { 
                l_855--;
                if (p_18)
                    break;
            }
        }
    }
    else
    { 
        int32_t *l_858 = &l_763;
        int32_t *l_859 = &g_794;
        int32_t *l_860 = &g_794;
        int32_t *l_861[3];
        uint8_t l_862 = 5UL;
        union U3 *l_865 = (void*)0;
        union U3 **l_866[5] = {&l_865,&l_865,&l_865,&l_865,&l_865};
        union U4 *l_870 = &g_72;
        union U4 **l_869 = &l_870;
        int64_t l_921 = (-1L);
        uint64_t l_936 = 1UL;
        uint32_t l_941 = 0x694B254AL;
        uint32_t *l_961[2][4][6] = {{{&g_473,&l_760.f2,&g_473,&g_574.f2,&g_574.f2,(void*)0},{(void*)0,&l_760.f2,&l_760.f2,(void*)0,(void*)0,&l_760.f2},{&g_473,&g_473,&l_760.f2,(void*)0,(void*)0,(void*)0},{&g_409.f2,(void*)0,&g_574.f2,&g_473,&g_638,&l_760.f2}},{{&g_574.f2,&g_409.f2,&g_574.f2,(void*)0,&g_473,(void*)0},{&l_760.f2,&l_760.f2,&g_638,&l_760.f2,&g_638,&g_473},{&l_760.f2,&g_638,&g_473,&g_574.f2,(void*)0,&g_409.f2},{&g_574.f2,&g_473,(void*)0,&g_574.f2,&l_760.f2,&l_760.f2}}};
        uint32_t **l_960[1];
        uint64_t l_976 = 0x9A19C746039BC216LL;
        struct S0 l_1004[1][1] = {{{0xE05DL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_861[i] = &g_160;
        for (i = 0; i < 1; i++)
            l_960[i] = &l_961[0][3][3];
        l_862--;
        g_867[0] = l_865;
        (*l_869) = &g_72;
lbl_948:
        for (g_513 = 0; (g_513 == 11); g_513 = safe_add_func_int32_t_s_s(g_513, 2))
        { 
            int32_t l_876 = 0xBE14797BL;
            int32_t l_877 = 0x76B380C4L;
            const struct S1 l_906[7] = {{{0xFF6BL},0xC7D8L,0xD4A1B436L,0xFAA0L,{-2L}},{{0xFF6BL},0xC7D8L,0xD4A1B436L,0xFAA0L,{-2L}},{{0xFF6BL},0xC7D8L,0xD4A1B436L,0xFAA0L,{-2L}},{{0xFF6BL},0xC7D8L,0xD4A1B436L,0xFAA0L,{-2L}},{{0xFF6BL},0xC7D8L,0xD4A1B436L,0xFAA0L,{-2L}},{{0xFF6BL},0xC7D8L,0xD4A1B436L,0xFAA0L,{-2L}},{{0xFF6BL},0xC7D8L,0xD4A1B436L,0xFAA0L,{-2L}}};
            union U4 *l_909 = (void*)0;
            uint16_t l_910[6][5] = {{0UL,1UL,0UL,0x4362L,0x199CL},{0UL,0x87B0L,0x199CL,0x87B0L,0UL},{0UL,0x87B0L,1UL,0UL,1UL},{1UL,1UL,0x199CL,0UL,65531UL},{0x87B0L,0UL,0UL,0x87B0L,1UL},{0x87B0L,0UL,0x4362L,0x4362L,0UL}};
            int32_t **l_920 = &g_81;
            int i, j;
            for (g_574.f3 = 3; (g_574.f3 < 26); ++g_574.f3)
            { 
                uint32_t l_878 = 0xA3F33E51L;
                union U5 l_882 = {-1L};
                uint8_t *l_885 = &g_619;
                uint8_t ** const l_884 = &l_885;
                uint8_t ** const *l_883 = &l_884;
                uint8_t ** const *l_887[4][2][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_884,&l_884,&l_884,&l_884,&l_884,&l_884,&l_884}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_884,&l_884,&l_884,&l_884,&l_884,&l_884,&l_884}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_884,&l_884,&l_884,&l_884,&l_884,&l_884,&l_884}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_884,&l_884,&l_884,&l_884,&l_884,&l_884,&l_884}}};
                uint8_t ** const **l_886 = &l_887[3][1][0];
                int32_t l_888 = 1L;
                int i, j, k;
                (**g_190) &= ((safe_unary_minus_func_int16_t_s((*g_353))) < p_18);
                --l_878;
                l_888 &= (((l_881 != ((*l_886) = (l_883 = (l_882 , l_881)))) , p_18) > ((*l_859) |= (**g_190)));
            }
            for (g_51.f2 = 0; (g_51.f2 <= 0); g_51.f2 += 1)
            { 
                uint32_t l_889 = 0xEC9371E6L;
                l_889--;
            }
            (*l_860) ^= ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((p_18 | (((*g_353) = (safe_rshift_func_uint16_t_u_s((((((safe_lshift_func_int8_t_s_s(((void*)0 == &l_737), 3)) , l_906[3]) , (safe_rshift_func_uint8_t_u_u(((l_909 = (void*)0) == (void*)0), p_18))) < (**g_148)) , 0x4B52L), 15))) <= 0x7DD5L)), (*g_81))), l_910[0][4])), 0x09E8L)), 8)) <= p_18);
            (***g_256) &= (safe_sub_func_int32_t_s_s((-10L), ((safe_sub_func_int8_t_s_s(l_910[0][4], (safe_div_func_uint16_t_u_u((((safe_div_func_int8_t_s_s(((0x72L & ((0x5769L != 65533UL) == ((**g_236) &= ((*g_353) = ((l_919 == l_920) <= l_921))))) == 0xD0645434L), 253UL)) ^ p_18) == 18446744073709551611UL), g_320)))) < (*l_860))));
            return p_18;
        }
        for (g_117.f0 = 0; (g_117.f0 >= (-4)); g_117.f0 = safe_sub_func_uint16_t_u_u(g_117.f0, 3))
        { 
            struct S0 l_926 = {-10L};
            uint64_t l_935 = 0UL;
            int32_t l_939[4] = {0x38064E56L,0x38064E56L,0x38064E56L,0x38064E56L};
            struct S2 l_947 = {13758};
            int16_t l_964 = 7L;
            union U4 l_985 = {{0x63BCL}};
            union U3 **l_988[4];
            int i;
            for (i = 0; i < 4; i++)
                l_988[i] = (void*)0;
            for (g_323 = 0; (g_323 > (-15)); --g_323)
            { 
                uint32_t *l_930 = &g_473;
                int8_t *l_937 = &g_482;
                if (((l_926 , (!0xE8552F80L)) > ((*l_937) ^= ((1UL | (safe_lshift_func_int16_t_s_s((((**g_352) ^ 6L) <= ((*l_930) = (**l_919))), 1))) >= ((!(p_18 &= ((*g_149) ^= (safe_rshift_func_int8_t_s_s((((l_934 , l_935) ^ g_409.f2) && l_936), 6))))) == (*l_860))))))
                { 
                    int32_t l_938 = 0x00F88D58L;
                    l_941--;
                    (**g_190) |= 1L;
                }
                else
                { 
                    struct S2 *l_945[6];
                    struct S2 l_946 = {10301};
                    int i;
                    for (i = 0; i < 6; i++)
                        l_945[i] = &g_125[6][0];
                    l_947 = (l_946 = l_944);
                    if (g_687.f1)
                        goto lbl_948;
                }
            }
            (*l_860) &= (p_18 && (g_586[2] || ((safe_rshift_func_int8_t_s_s(0L, g_633[2][1][4].f3)) > p_18)));
            for (g_409.f3 = 0; (g_409.f3 == (-21)); g_409.f3--)
            { 
                union U6 l_955[6] = {{{0x8AEEL}},{{0x8AEEL}},{{-7L}},{{0x8AEEL}},{{0x8AEEL}},{{-7L}}};
                int32_t l_962 = (-1L);
                int32_t l_963 = 0xA3094BC6L;
                int32_t l_965 = 0x4E22CE89L;
                int32_t l_966 = (-6L);
                int8_t l_967 = 0x6FL;
                int32_t l_968 = 1L;
                int32_t l_969 = 0x240A94C2L;
                int32_t l_970 = 0L;
                int32_t l_971 = (-1L);
                int64_t l_972 = 0x2338DA04F5018737LL;
                int32_t l_994 = 5L;
                int i;
                for (g_822.f1 = 4; (g_822.f1 >= 33); g_822.f1 = safe_add_func_int32_t_s_s(g_822.f1, 5))
                { 
                    if (p_18)
                        break;
                }
                (***g_256) = (l_955[4] , (p_18 >= (g_476[0] , (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((**g_352) = (4L && 4294967293UL)), 13)), (((void*)0 == l_960[0]) ^ g_473))))));
                l_976++;
                for (p_18 = 0; (p_18 < 55); ++p_18)
                { 
                    int32_t l_981 = 0x2656A679L;
                    int8_t *l_993 = &l_967;
                    --g_982;
                    (*l_860) |= (l_985 , (safe_rshift_func_int8_t_s_u((l_988[2] != (void*)0), (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((**l_919), ((*l_993) = g_795[3]))), 1)))));
                }
                ++g_997;
            }
            (*l_860) = ((safe_add_func_uint16_t_u_u((l_939[1] != ((safe_add_func_int32_t_s_s(8L, (l_935 != (l_1004[0][0] , 0xC437L)))) < ((**l_919) = l_935))), ((g_974 < 0x102B196E526CB3D4LL) | 0x06B07292L))) != 8L);
        }
    }
    if ((**l_919))
    { 
        int32_t *l_1006 = (void*)0;
        struct S0 **l_1029[6][6] = {{&l_700,&l_700,&l_700,&l_700,&l_700,&l_700},{&l_700,&l_700,&l_700,&l_700,&l_700,&l_700},{&l_700,&l_700,&l_700,&l_700,&l_700,&l_700},{&l_700,&l_700,&l_700,&l_700,&l_700,&l_700},{&l_700,&l_700,&l_700,&l_700,&l_700,&l_700},{&l_700,&l_700,&l_700,&l_700,&l_700,&l_700}};
        struct S0 *** const l_1028 = &l_1029[1][1];
        struct S1 l_1034 = {{0x825FL},65535UL,4294967290UL,1L,{0x957AL}};
        uint32_t **l_1054 = (void*)0;
        uint32_t ***l_1053[4];
        int32_t l_1064[6] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
        uint8_t l_1082 = 8UL;
        int64_t *l_1123 = &g_117.f0;
        uint8_t l_1124 = 0xFDL;
        struct S1 **l_1136 = &g_573[0];
        uint32_t l_1145 = 4294967295UL;
        int32_t *l_1146 = &l_996;
        int32_t *l_1147[2];
        int i, j;
        for (i = 0; i < 4; i++)
            l_1053[i] = &l_1054;
        for (i = 0; i < 2; i++)
            l_1147[i] = &l_995;
        (**g_256) = l_1006;
        if (((l_1007 , (safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((+(l_1013 , g_1014)), (p_18 ^ ((p_18 || (p_18 >= (safe_mod_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(0xE1L, (*g_149))), 0x232F3820E80678B2LL)))) , 0xAE213861L)))), 0xA1L))) == g_574.f4.f0))
        { 
            uint64_t l_1025 = 18446744073709551612UL;
            struct S2 l_1032 = {-5699};
            for (g_354 = (-28); (g_354 >= (-8)); g_354 = safe_add_func_uint32_t_u_u(g_354, 4))
            { 
                for (g_269 = 4; (g_269 >= 0); g_269 -= 1)
                { 
                    int32_t *l_1021 = &g_160;
                    int32_t *l_1022 = (void*)0;
                    int32_t *l_1023 = &l_995;
                    int32_t *l_1024 = (void*)0;
                    struct S0 ***l_1031 = (void*)0;
                    struct S0 ****l_1030 = &l_1031;
                    --l_1025;
                    (*l_1030) = l_1028;
                }
                if (p_18)
                    continue;
                l_1033[2] = l_1032;
                (*l_919) = (*g_190);
            }
            l_1032.f0 = ((l_1034 , g_1035) != (void*)0);
        }
        else
        { 
            union U4 l_1042 = {{6L}};
            int32_t l_1065 = 1L;
            int32_t *l_1066 = &g_513;
            int32_t *l_1067 = &l_763;
            int32_t *l_1068 = &g_160;
            int32_t *l_1069 = &g_513;
            int32_t *l_1070[6][6][7] = {{{&l_995,&l_1064[3],&g_788,&l_1064[3],&l_1065,&g_788,&g_82},{&l_1064[0],&l_996,(void*)0,&l_1065,(void*)0,&l_996,&l_1064[0]},{&g_82,&g_788,&l_1065,&l_1064[3],&g_788,&l_1064[3],&l_995},{&l_1065,&l_1064[0],&l_995,&l_995,&l_1064[0],&l_1065,&g_82},{&g_82,&l_995,&g_513,&g_788,(void*)0,&l_1065,&l_1065},{&l_995,&l_996,&l_1065,&l_996,&l_995,&l_996,&l_1065}},{{&l_1064[3],&l_995,&l_1065,&l_1064[3],(void*)0,&g_82,(void*)0},{&l_1065,&l_763,&l_763,&l_1065,&l_996,&l_1064[4],&g_788},{&l_1064[3],&l_1064[3],(void*)0,&g_788,&l_763,&l_763,&g_788},{&l_995,&l_1065,&l_995,&l_1064[4],&l_763,&l_1064[0],&g_788},{&g_82,&l_1065,(void*)0,(void*)0,&l_1064[5],(void*)0,(void*)0},{&l_763,&l_763,&l_996,&g_82,(void*)0,&l_1064[0],&l_1065}},{{&g_788,&l_1065,&l_763,&l_995,&l_995,&l_763,&l_1065},{&l_763,&l_996,&l_763,&l_995,(void*)0,&l_1064[4],&g_82},{&l_763,&g_82,&l_1064[5],&l_1065,&l_1064[5],&g_82,&l_763},{&g_82,&l_1064[4],(void*)0,&l_995,&l_763,&l_996,&l_763},{&l_1065,&l_763,&l_995,&l_995,&l_763,&l_1065,&g_788},{&l_1065,&l_1064[0],(void*)0,&g_82,&l_996,&l_763,&l_763}},{{(void*)0,(void*)0,&l_1064[5],(void*)0,(void*)0,&l_1065,&g_82},{&g_788,&l_1064[0],&l_763,&l_1064[4],&l_995,&l_1065,&l_995},{&g_788,&l_763,&l_763,&g_788,(void*)0,&l_1064[3],&l_1064[3]},{&g_788,&l_1064[4],&l_996,&l_1065,&l_763,&l_763,&l_1065},{(void*)0,&g_82,(void*)0,&l_1064[3],&l_1065,&l_995,&l_1064[3]},{&l_1065,&l_996,&l_995,&l_996,&l_1065,&l_996,&l_995}},{{&l_1065,&l_1065,(void*)0,&g_788,&g_513,&l_995,&g_82},{&g_82,&l_763,&l_763,&l_1064[0],&l_1064[0],&l_763,&l_763},{&l_763,&l_1065,&l_1065,(void*)0,&g_513,&l_1064[3],&g_788},{&l_763,&l_1065,&l_1065,&l_763,&l_1065,&l_1065,&l_763},{&g_788,&l_1064[3],&g_513,(void*)0,&l_1065,&l_1065,&l_763},{&l_763,&l_763,&l_1064[0],&l_1064[0],&l_763,&l_763,&g_82}},{{&g_82,&l_995,&g_513,&g_788,(void*)0,&l_1065,&l_1065},{&l_995,&l_1065,&g_788,&l_1065,&l_1064[0],(void*)0,&g_82},{(void*)0,&l_763,(void*)0,&l_1065,&l_995,&g_788,&l_995},{&l_763,&l_1065,&l_1065,&l_763,&l_1065,&l_996,&l_995},{(void*)0,&l_1065,&g_82,&l_1065,&g_788,&g_788,&l_1065},{&l_1064[0],&g_82,&l_1064[0],&l_996,&l_996,&l_763,&l_995}}};
            struct S1 l_1083 = {{0L},0x8FD7L,0x80DC3DB8L,1L,{-9L}};
            int8_t *l_1088 = &l_1007;
            uint64_t *l_1089 = &g_312.f1;
            uint64_t l_1114 = 0x86B2DB35194DAA42LL;
            const int64_t l_1122 = 0x6C4075316F55BC3ALL;
            int16_t ***l_1142 = &g_236;
            int i, j, k;
            for (l_996 = 0; (l_996 >= 0); l_996 -= 1)
            { 
                int32_t *l_1041 = &g_794;
                uint32_t *l_1052 = &g_633[2][1][4].f2;
                uint32_t **l_1051 = &l_1052;
                uint32_t ***l_1050[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1050[i] = &l_1051;
                (*l_1041) = (safe_sub_func_int8_t_s_s(g_476[l_996], (safe_rshift_func_uint16_t_u_u(g_476[l_996], 2))));
                for (g_997 = 0; (g_997 <= 0); g_997 += 1)
                { 
                    uint32_t *l_1047 = &l_1034.f2;
                    const int32_t l_1061 = 1L;
                    int32_t *l_1062 = (void*)0;
                    int32_t *l_1063[4][5][4] = {{{&g_513,&g_513,&g_794,&g_513},{&g_513,(void*)0,(void*)0,&g_513},{(void*)0,&g_513,(void*)0,(void*)0},{&g_513,&g_513,&g_794,&g_513},{&g_513,(void*)0,(void*)0,&g_513}},{{(void*)0,&g_513,(void*)0,(void*)0},{&g_513,&g_513,&g_794,&g_513},{&g_513,(void*)0,(void*)0,&g_513},{(void*)0,&g_513,(void*)0,(void*)0},{&g_513,&g_513,&g_794,&g_513}},{{&g_513,(void*)0,(void*)0,&g_513},{(void*)0,&g_513,(void*)0,(void*)0},{&g_513,&g_513,&g_794,&g_513},{&g_513,(void*)0,(void*)0,&g_513},{(void*)0,&g_513,(void*)0,(void*)0}},{{&g_513,&g_513,&g_794,&g_513},{&g_513,(void*)0,(void*)0,&g_513},{(void*)0,&g_513,(void*)0,(void*)0},{&g_513,&g_513,&g_794,&g_513},{&g_513,(void*)0,(void*)0,&g_513}}};
                    int i, j, k;
                    l_1064[3] ^= (l_1042 , ((*l_1041) , ((safe_add_func_int64_t_s_s((p_18 ^ (-1L)), (safe_sub_func_uint8_t_u_u(((((*l_1047)--) & (l_1050[0] != l_1053[1])) < (safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((-2L), 11)) | (**g_148)), p_18)), g_1014))), l_1061)))) && p_18)));
                }
            }
            g_1071--;
            if ((safe_mul_func_uint16_t_u_u(p_18, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((((safe_div_func_uint32_t_u_u(l_1082, (l_1083 , ((-1L) ^ (safe_sub_func_uint64_t_u_u(((*l_1089) = (((*l_1088) = ((l_1083.f0 , (p_18 , (safe_lshift_func_int8_t_s_u(0L, 7)))) >= p_18)) | 255UL)), g_389)))))) == 0xF499L) != (*g_149)) <= (*l_1068)) && g_687.f4.f0), 13)), 5UL)))))
            { 
                uint8_t l_1092 = 247UL;
                int32_t l_1095 = 0x13B6B2A3L;
                int32_t l_1096 = (-1L);
                int32_t l_1097[1];
                uint8_t l_1098 = 1UL;
                uint32_t l_1101 = 18446744073709551614UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_1097[i] = 0xF002DA03L;
                for (g_409.f2 = 0; (g_409.f2 >= 44); g_409.f2 = safe_add_func_uint32_t_u_u(g_409.f2, 4))
                { 
                    l_1092--;
                    ++l_1098;
                }
                l_1101--;
            }
            else
            { 
                int64_t l_1106[3];
                int32_t l_1109 = 0xA3982F4DL;
                struct S1 *l_1117 = &g_1118;
                struct S2 *l_1144 = &g_125[3][0];
                int i;
                for (i = 0; i < 3; i++)
                    l_1106[i] = 0x426A777413969F66LL;
                for (g_303 = 0; (g_303 <= 5); ++g_303)
                { 
                    int16_t l_1107 = 3L;
                    int32_t l_1108[2][7][2] = {{{0x00297F14L,(-1L)},{0x46D27E07L,0x40B51F7AL},{0x46D27E07L,(-1L)},{0x00297F14L,(-2L)},{(-1L),8L},{(-1L),9L},{0xDC19A22DL,0x3D1EF79AL}},{{0x3D1EF79AL,0x00297F14L},{0x43C3D621L,0x00297F14L},{0x3D1EF79AL,0x3D1EF79AL},{0xDC19A22DL,9L},{(-1L),8L},{(-1L),(-2L)},{0x00297F14L,(-1L)}}};
                    int i, j, k;
                    g_1110--;
                }
                for (g_160 = 5; (g_160 >= 0); g_160 -= 1)
                { 
                    int32_t l_1113[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1113[i] = 0x5C6065D8L;
                    if (g_586[g_160])
                        break;
                    if (g_586[g_160])
                        break;
                    l_1114--;
                }
                for (l_1114 = 0; (l_1114 <= 0); l_1114 += 1)
                { 
                    l_1117 = &g_687;
                }
                if (((+(safe_sub_func_int16_t_s_s(p_18, 0xF8C3L))) == (l_1122 < ((void*)0 == l_1123))))
                { 
                    int8_t l_1131 = 9L;
                    l_1124--;
                    (*l_1067) |= (((void*)0 != &g_365[0]) & (l_1127 ^ (g_1128 ^ (safe_lshift_func_int8_t_s_u(l_1131, 3)))));
                }
                else
                { 
                    struct S1 **l_1134 = &g_573[2];
                    struct S1 ***l_1135[3];
                    int16_t ***l_1143 = &l_770[0];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1135[i] = &l_1134;
                    (*l_1066) = ((((l_1106[0] , l_1034) , l_1106[1]) >= p_18) && (safe_sub_func_int16_t_s_s(((g_840 = l_1134) != (g_1137 = l_1136)), (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(p_18, (-5L))) == 1UL), g_868.f0)))));
                    l_1143 = l_1142;
                }
                (*l_1144) = l_944;
            }
            return l_1145;
        }
        ++g_1149;
    }
    else
    { 
        return g_409.f4.f0;
    }
    return g_304;
}



static uint8_t ** func_22(int8_t  p_23, uint8_t * p_24, const int32_t  p_25)
{ 
    int8_t l_678 = (-1L);
    int32_t *l_679[3];
    uint16_t l_680[2][5][7] = {{{6UL,0x7F56L,6UL,0x94FDL,6UL,0x94FDL,6UL},{0x66EDL,0x66EDL,0x7880L,0x0BB3L,5UL,0x83DDL,0x8504L},{2UL,0x797CL,2UL,0x94FDL,65535UL,0x797CL,65535UL},{0x7039L,0x0BB3L,0x0BB3L,0x7039L,5UL,0x7880L,65535UL},{6UL,0x115FL,65529UL,0x115FL,6UL,0x797CL,65529UL}},{{0x83DDL,0x66EDL,0x8504L,0x8504L,0x66EDL,0x83DDL,65535UL},{65535UL,0x94FDL,2UL,0x797CL,2UL,0x94FDL,65535UL},{0x83DDL,0x8504L,65535UL,0x7039L,0x7039L,65535UL,0x8504L},{6UL,0x94FDL,6UL,0x7F56L,6UL,0x7F56L,6UL},{0x7039L,0x66EDL,65535UL,0x0BB3L,0x83DDL,0x83DDL,0x0BB3L}}};
    struct S0 *l_688[4][2][7] = {{{&g_409.f4,&g_574.f4,&g_409.f4,&g_574.f4,&g_409.f4,&g_574.f4,&g_409.f4},{&g_687.f4,&g_409.f4,&g_409.f4,&g_687.f4,&g_687.f4,&g_409.f4,&g_409.f4}},{{&g_6.f0,&g_574.f4,&g_6.f0,&g_574.f4,&g_6.f0,&g_574.f4,&g_6.f0},{&g_687.f4,&g_687.f4,&g_409.f4,&g_409.f4,&g_687.f4,&g_687.f4,&g_409.f4}},{{&g_409.f4,&g_574.f4,&g_409.f4,&g_574.f4,&g_409.f4,&g_574.f4,&g_409.f4},{&g_687.f4,&g_409.f4,&g_409.f4,&g_687.f4,&g_687.f4,&g_409.f4,&g_409.f4}},{{&g_6.f0,&g_574.f4,&g_6.f0,&g_574.f4,&g_6.f0,&g_574.f4,&g_6.f0},{&g_687.f4,&g_687.f4,&g_409.f4,&g_409.f4,&g_687.f4,&g_687.f4,&g_409.f4}}};
    union U6 * const l_696 = &g_6;
    union U6 * const *l_695 = &l_696;
    uint8_t **l_697 = &g_149;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_679[i] = &g_82;
    l_680[1][2][4]++;
    (*g_81) &= (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((p_23 > ((g_687 , l_688[1][1][1]) != (((safe_sub_func_uint32_t_u_u(p_25, (safe_mod_func_uint16_t_u_u(p_25, ((safe_add_func_int64_t_s_s(((void*)0 != l_695), g_409.f0.f0)) , p_23))))) > g_476[0]) , l_688[1][1][1]))), (*g_149))), (**g_148)));
    (*g_190) = (**g_256);
    return l_697;
}



static struct S2  func_30(uint8_t ** p_31, uint64_t  p_32, int64_t  p_33, uint8_t * const * p_34, uint8_t * p_35)
{ 
    struct S2 *l_488 = (void*)0;
    struct S2 *l_489 = &g_125[5][0];
    uint8_t **l_490 = &g_149;
    int32_t l_590 = (-7L);
    int64_t *l_591 = &g_437[5][6][1];
    int32_t *l_592 = &g_82;
    int8_t *l_594 = &g_482;
    int32_t l_618[1][7][7] = {{{1L,(-5L),0x14269E5AL,0x087AEA02L,0x087AEA02L,0x14269E5AL,(-5L)},{1L,0L,0x48A93D07L,0xA7BF99D2L,0xEA48A71AL,(-2L),(-2L)},{0x4E77618CL,1L,0x087AEA02L,1L,0x4E77618CL,0xEB125F05L,0xBB3AC60CL},{(-1L),0L,0L,0xA7BF99D2L,0L,0xA7BF99D2L,0L},{0xBB3AC60CL,0xBB3AC60CL,0x1689FA06L,0x087AEA02L,(-5L),5L,0x14269E5AL},{(-1L),0xA7BF99D2L,0x645D82A7L,0x645D82A7L,0xA7BF99D2L,(-1L),0L},{0x4E77618CL,0x1689FA06L,1L,1L,(-5L),(-5L),1L}}};
    int16_t l_624 = 0x72D6L;
    struct S1 *l_651[7][5] = {{&g_409,&g_409,&g_633[3][1][1],&g_633[3][1][1],&g_409},{&g_409,&g_574,&g_409,&g_574,&g_409},{&g_409,&g_633[3][1][1],&g_633[3][1][1],&g_409,&g_409},{&g_409,&g_574,&g_409,&g_574,&g_409},{&g_409,&g_409,&g_633[3][1][1],&g_633[3][1][1],&g_409},{&g_409,&g_574,&g_409,&g_574,&g_409},{&g_409,&g_633[3][1][1],&g_633[3][1][1],&g_409,&g_409}};
    struct S0 **l_655 = &g_459;
    union U3 l_661 = {0x6D6BL};
    struct S2 ***l_676 = &g_365[0];
    int i, j, k;
    (*l_592) = (safe_rshift_func_uint8_t_u_u((func_45(((*l_489) = func_49(g_51)), (p_32 , l_490), p_33) , (((*l_591) = l_590) ^ p_32)), 2));
    (*g_81) &= ((!((*l_594) = 0x77L)) ^ (safe_mul_func_int16_t_s_s(4L, 0xA462L)));
    for (g_515 = 0; (g_515 <= 4); g_515 += 1)
    { 
        struct S1 *l_599 = &g_409;
        uint64_t *l_604 = (void*)0;
        uint64_t *l_605 = &g_117.f1;
        int32_t l_608 = (-5L);
        int32_t *l_609 = &g_513;
        int32_t l_610 = 0x8271C945L;
        int32_t *l_617[5];
        int i;
        for (i = 0; i < 5; i++)
            l_617[i] = (void*)0;
    }
    for (g_304 = (-1); (g_304 <= 41); g_304 = safe_add_func_int16_t_s_s(g_304, 5))
    { 
        int32_t *l_625 = (void*)0;
        int32_t *l_626 = &g_513;
        int32_t *l_627[7];
        struct S1 * const l_631[1][3][3] = {{{(void*)0,&g_409,(void*)0},{&g_574,&g_574,&g_574},{(void*)0,&g_409,(void*)0}}};
        struct S1 *l_632 = &g_633[2][1][4];
        uint32_t l_673 = 0xCD16D096L;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_627[i] = &g_82;
        (*l_592) ^= 0L;
        g_628[0][0]++;
        l_632 = l_631[0][1][0];
        for (p_32 = 0; (p_32 == 30); p_32 = safe_add_func_int32_t_s_s(p_32, 9))
        { 
            int32_t l_652 = (-10L);
            union U4 l_653 = {{2L}};
            uint32_t *l_654 = &g_409.f2;
            uint8_t *l_656 = &g_102[1][0];
            l_590 ^= ((safe_sub_func_uint16_t_u_u(p_32, p_32)) && ((*l_626) = (g_638 ^ (safe_rshift_func_uint8_t_u_s((**g_148), (((0x46976AE7EE241F77LL & (((safe_div_func_uint16_t_u_u((((((*l_656) ^= (((!(&g_459 != ((((*l_654) &= (safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u((+((*l_592) = (&g_633[2][1][4] == l_651[2][4]))), l_652)) || (-1L)) , l_653) , p_33), p_32)), 251UL))) && (*g_81)) , l_655))) >= g_389) , 0x6BL)) >= 0x03L) , 0UL) <= 0xC2C9L), p_33)) & g_482) >= g_51.f0)) && g_6.f0.f0) ^ p_33))))));
            if (l_652)
                continue;
        }
        for (g_409.f1 = 0; (g_409.f1 <= 42); g_409.f1 = safe_add_func_int64_t_s_s(g_409.f1, 4))
        { 
            const struct S0 l_662[5] = {{0x12AEL},{0x12AEL},{0x12AEL},{0x12AEL},{0x12AEL}};
            int32_t l_671 = 0L;
            struct S1 **l_672 = &g_573[2];
            struct S2 ****l_677 = &l_676;
            int i;
            (***g_256) = ((*l_626) ^= (safe_sub_func_int32_t_s_s((0x17D8L > ((l_661 , &g_460) == (l_662[3] , (*l_655)))), (l_662[3].f0 >= (safe_add_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(((*l_592) == l_662[3].f0), g_302)) || g_82) || 1UL), (*p_35))) < 3L) <= l_671), g_409.f1)) , l_672) != l_672), 0x0EL))))));
            ++l_673;
            (*l_677) = l_676;
        }
    }
    return (*l_489);
}



static uint32_t  func_45(struct S2  p_46, uint8_t ** p_47, uint16_t  p_48)
{ 
    uint32_t l_493 = 8UL;
    int32_t l_497 = (-5L);
    int32_t l_501 = 2L;
    uint16_t l_502 = 0xC631L;
    struct S1 *l_571 = &g_409;
    struct S2 l_577 = {4528};
    struct S2 l_579 = {15251};
    uint8_t l_587 = 1UL;
    for (g_302 = (-20); (g_302 == 5); g_302 = safe_add_func_uint16_t_u_u(g_302, 8))
    { 
        int32_t l_498[2][4][7] = {{{1L,5L,0xA8684DB0L,(-1L),5L,0x78612298L,0xE3905655L},{0xA40A2988L,1L,(-2L),(-1L),0L,(-2L),0x4F09820AL},{0x85E88D1CL,(-2L),0x830A52AEL,0xA8684DB0L,(-1L),(-1L),0xA8684DB0L},{0x830A52AEL,0x45BFBE83L,0x830A52AEL,0x86D6DA56L,(-10L),0L,(-9L)}},{{(-10L),0x923163A0L,(-1L),(-1L),0xE3905655L,0xBB4FA76DL,0x104D1C60L},{1L,(-9L),1L,0x78612298L,(-1L),0L,1L},{0xDA052EB0L,0x78612298L,(-9L),(-1L),0x104D1C60L,(-1L),(-9L)},{0x78612298L,0x78612298L,0xBB4FA76DL,(-10L),0x923163A0L,(-1L),(-1L)}}};
        int32_t l_499 = 0x8BA208C5L;
        int32_t l_500[3][4];
        union U4 *l_527 = &g_72;
        int64_t l_546 = 6L;
        union U6 l_547 = {{0x8588L}};
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_500[i][j] = (-1L);
        }
        if (l_493)
        { 
            int32_t *l_494 = &g_160;
            int32_t *l_495 = &g_160;
            int32_t *l_496[1];
            int i;
            for (i = 0; i < 1; i++)
                l_496[i] = (void*)0;
            --l_502;
        }
        else
        { 
            const uint8_t *l_506 = (void*)0;
            const uint8_t **l_505 = &l_506;
            int32_t l_512 = 0x33D5AC11L;
            struct S2 l_535 = {13406};
            if (((*p_47) != ((*l_505) = (*g_148))))
            { 
                uint16_t l_509 = 0x007FL;
                int32_t l_511[6][7];
                struct S2 *l_537 = (void*)0;
                struct S2 *l_538 = &l_535;
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_511[i][j] = 0xB2F88E17L;
                }
                if (((**g_190) |= (0xB1L && (g_483 ^ (0x5FE190DD1E963A68LL <= (safe_lshift_func_int16_t_s_u(l_500[0][3], l_509)))))))
                { 
                    int32_t *l_510[7] = {&l_497,&l_497,&l_497,&l_497,&l_497,&l_497,&l_497};
                    struct S2 *l_518 = &g_125[2][0];
                    int i;
                    ++g_515;
                    (*l_518) = p_46;
                    if ((*g_81))
                        continue;
                }
                else
                { 
                    int64_t *l_534 = &g_324;
                    struct S2 *l_536 = &l_535;
                    (**g_190) ^= (safe_mod_func_uint32_t_u_u(((p_48 >= (0x46107DB0D48962ACLL != 0x7A89DF4B1FA80B8FLL)) < (-1L)), (safe_mod_func_uint64_t_u_u(((-8L) == (safe_mod_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s(((void*)0 == l_527), g_302)) <= g_354) <= l_499) && l_512), (*g_237)))), p_46.f0))));
                    (**g_190) ^= (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(0xB54BL, ((255UL ^ ((void*)0 == &g_283)) == (safe_div_func_uint64_t_u_u(((((&g_117 == &g_117) ^ ((((*l_534) |= p_46.f0) & l_512) != p_46.f0)) <= p_46.f0) == 0xEFD2L), g_325[5]))))), 13));
                    (*g_190) = (*g_190);
                    (*l_536) = l_535;
                }
                (*l_538) = l_535;
                if ((*g_81))
                    continue;
            }
            else
            { 
                uint16_t l_539 = 65535UL;
                const struct S2 l_542 = {-10678};
                struct S2 *l_543 = &l_535;
                l_539++;
                (*l_543) = l_542;
            }
        }
        for (g_51.f2 = 25; (g_51.f2 != (-5)); --g_51.f2)
        { 
            uint64_t *l_548 = &g_325[5];
            const int32_t l_559 = 8L;
            uint32_t * const **l_570 = &g_568;
            struct S1 **l_572[7][4][4] = {{{&l_571,(void*)0,&l_571,&l_571},{&l_571,(void*)0,(void*)0,&l_571},{&l_571,(void*)0,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571}},{{(void*)0,&l_571,&l_571,(void*)0},{&l_571,&l_571,&l_571,&l_571},{(void*)0,&l_571,&l_571,&l_571},{(void*)0,&l_571,&l_571,(void*)0}},{{&l_571,&l_571,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571}},{{&l_571,&l_571,(void*)0,(void*)0},{(void*)0,&l_571,&l_571,&l_571},{(void*)0,&l_571,(void*)0,&l_571},{&l_571,&l_571,&l_571,(void*)0}},{{&l_571,&l_571,(void*)0,&l_571},{&l_571,&l_571,&l_571,&l_571},{&l_571,(void*)0,&l_571,&l_571},{&l_571,(void*)0,&l_571,&l_571}},{{&l_571,(void*)0,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571},{&l_571,&l_571,&l_571,&l_571}},{{&l_571,&l_571,(void*)0,&l_571},{&l_571,(void*)0,&l_571,&l_571},{&l_571,(void*)0,(void*)0,&l_571},{(void*)0,&l_571,&l_571,&l_571}}};
            int i, j, k;
            (*g_81) = ((l_546 && ((l_547 , 0x4CDAF3530299EC87LL) || (++(*l_548)))) == (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_add_func_int64_t_s_s(g_409.f3, (safe_mul_func_int8_t_s_s(l_559, (safe_unary_minus_func_uint64_t_u((((((((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((+((((safe_mod_func_int8_t_s_s((((*l_570) = g_568) != ((*l_527) , &g_569[2][0])), 1L)) | 0xD4B2F84B74EBB8BELL) , (void*)0) != (void*)0)), 3)), l_559)) != 0x506325F4L) < g_482) & p_48) || g_409.f1) , 0xB21EA59DCF31961CLL) || l_559))))))) , (-9L)), (**p_47))), 8)));
            g_573[2] = l_571;
        }
        for (g_304 = 0; (g_304 < 53); g_304++)
        { 
            struct S2 *l_578[4];
            int32_t *l_582 = &g_82;
            int32_t l_583 = (-8L);
            int32_t *l_584 = &l_497;
            int32_t *l_585[1][4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_578[i] = &g_125[2][0];
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_585[i][j] = (void*)0;
            }
            l_579 = (l_577 = (p_46 = l_577));
            for (g_51.f0 = 9; (g_51.f0 < 33); g_51.f0 = safe_add_func_uint32_t_u_u(g_51.f0, 2))
            { 
                return l_497;
            }
            l_587--;
        }
    }
    return g_125[3][0].f0;
}



static struct S2  func_49(union U3  p_50)
{ 
    int64_t *l_66[7] = {&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40};
    int32_t l_67 = (-7L);
    int32_t l_73 = 0xF49CF94AL;
    int16_t *l_74 = &g_51.f2;
    uint8_t *l_75 = &g_27;
    int32_t *l_76 = (void*)0;
    int32_t *l_77 = &l_73;
    union U4 l_85 = {{0xCCB2L}};
    union U6 l_106 = {{6L}};
    uint32_t l_151 = 0x205434A3L;
    int8_t l_156 = 0x3AL;
    struct S2 l_161 = {-14002};
    int32_t **l_196 = (void*)0;
    int32_t ***l_195 = &l_196;
    int16_t *l_225[4][6][4] = {{{&g_51.f2,&g_51.f2,&g_51.f2,&g_51.f2},{&g_51.f2,&g_51.f2,&g_51.f2,&g_51.f2},{&g_51.f2,&g_51.f2,(void*)0,&g_51.f2},{&g_51.f2,&g_51.f2,&g_51.f2,&g_51.f2},{&g_51.f2,&g_51.f2,&g_51.f2,&g_51.f2},{&g_51.f2,&g_51.f2,(void*)0,&g_51.f2}},{{&g_51.f2,(void*)0,(void*)0,&g_51.f2},{(void*)0,&g_51.f2,(void*)0,(void*)0},{&g_51.f2,&g_51.f2,&g_51.f2,&g_51.f2},{&g_51.f2,(void*)0,(void*)0,&g_51.f2},{(void*)0,&g_51.f2,(void*)0,(void*)0},{&g_51.f2,&g_51.f2,&g_51.f2,&g_51.f2}},{{&g_51.f2,(void*)0,(void*)0,&g_51.f2},{(void*)0,&g_51.f2,(void*)0,(void*)0},{&g_51.f2,&g_51.f2,&g_51.f2,&g_51.f2},{&g_51.f2,(void*)0,(void*)0,&g_51.f2},{(void*)0,&g_51.f2,(void*)0,(void*)0},{&g_51.f2,&g_51.f2,&g_51.f2,&g_51.f2}},{{&g_51.f2,(void*)0,(void*)0,&g_51.f2},{(void*)0,&g_51.f2,(void*)0,(void*)0},{&g_51.f2,&g_51.f2,&g_51.f2,&g_51.f2},{&g_51.f2,(void*)0,(void*)0,&g_51.f2},{(void*)0,&g_51.f2,(void*)0,(void*)0},{&g_51.f2,&g_51.f2,&g_51.f2,&g_51.f2}}};
    int16_t **l_226 = &l_225[2][1][3];
    uint16_t l_227[3];
    uint8_t l_228 = 0xE6L;
    uint8_t *l_229 = &g_102[2][0];
    uint64_t *l_230 = (void*)0;
    uint64_t *l_231 = &l_85.f1;
    uint64_t *l_232 = &g_72.f1;
    union U5 l_250[4][5] = {{{0L},{0L},{0L},{0L},{0L}},{{0x0AD08EFB34F4D14CLL},{0x0AD08EFB34F4D14CLL},{-1L},{0x0AD08EFB34F4D14CLL},{0x0AD08EFB34F4D14CLL}},{{0L},{0L},{0L},{0L},{0L}},{{0x0AD08EFB34F4D14CLL},{0x3B64E57383A1794BLL},{0x3B64E57383A1794BLL},{0x0AD08EFB34F4D14CLL},{0x3B64E57383A1794BLL}}};
    uint64_t l_258 = 0xE77FC21528008291LL;
    int64_t l_267 = 0xEE959467824FA916LL;
    struct S2 *l_367 = &g_125[3][0];
    struct S2 **l_366 = &l_367;
    struct S2 **l_370[4][5] = {{(void*)0,&l_367,&l_367,(void*)0,&l_367},{&l_367,&l_367,&l_367,&l_367,&l_367},{(void*)0,&l_367,&l_367,(void*)0,&l_367},{&l_367,&l_367,&l_367,&l_367,&l_367}};
    union U4 *l_402 = (void*)0;
    uint32_t *l_404 = (void*)0;
    uint32_t **l_403 = &l_404;
    int32_t l_412 = (-1L);
    int16_t l_416[4];
    struct S0 *l_457 = &l_106.f0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_227[i] = 65533UL;
    for (i = 0; i < 4; i++)
        l_416[i] = 1L;
    (*l_77) = ((2UL && (p_50.f0 ^ g_6.f0.f0)) <= (safe_mod_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((*l_75) = ((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((l_67 = g_27) && p_50.f0) >= 0x461BL), ((safe_mod_func_uint32_t_u_u((((safe_div_func_int16_t_s_s(((*l_74) = ((g_72 , l_73) , p_50.f2)), 0x4B17L)) >= p_50.f2) != (-2L)), g_40)) || l_73))), 0x0536403AC46406CCLL)) & l_73), p_50.f0)), p_50.f0)) , p_50.f0)), l_73)), 0xCC76BF08EAF53593LL)) > g_39), g_39)));
    return (**l_366);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6.f0.f0, "g_6.f0.f0", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_51.f0, "g_51.f0", print_hash_value);
    transparent_crc(g_51.f2, "g_51.f2", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_102[i][j], "g_102[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_125[i][j].f0, "g_125[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_312.f1, "g_312.f1", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_325[i], "g_325[i]", print_hash_value);

    }
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_409.f0.f0, "g_409.f0.f0", print_hash_value);
    transparent_crc(g_409.f1, "g_409.f1", print_hash_value);
    transparent_crc(g_409.f2, "g_409.f2", print_hash_value);
    transparent_crc(g_409.f3, "g_409.f3", print_hash_value);
    transparent_crc(g_409.f4.f0, "g_409.f4.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_437[i][j][k], "g_437[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_460.f0, "g_460.f0", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_476[i], "g_476[i]", print_hash_value);

    }
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    transparent_crc(g_574.f0.f0, "g_574.f0.f0", print_hash_value);
    transparent_crc(g_574.f1, "g_574.f1", print_hash_value);
    transparent_crc(g_574.f2, "g_574.f2", print_hash_value);
    transparent_crc(g_574.f3, "g_574.f3", print_hash_value);
    transparent_crc(g_574.f4.f0, "g_574.f4.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_586[i], "g_586[i]", print_hash_value);

    }
    transparent_crc(g_619, "g_619", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_628[i][j], "g_628[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_633[i][j][k].f0.f0, "g_633[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_633[i][j][k].f1, "g_633[i][j][k].f1", print_hash_value);
                transparent_crc(g_633[i][j][k].f2, "g_633[i][j][k].f2", print_hash_value);
                transparent_crc(g_633[i][j][k].f3, "g_633[i][j][k].f3", print_hash_value);
                transparent_crc(g_633[i][j][k].f4.f0, "g_633[i][j][k].f4.f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_687.f0.f0, "g_687.f0.f0", print_hash_value);
    transparent_crc(g_687.f1, "g_687.f1", print_hash_value);
    transparent_crc(g_687.f2, "g_687.f2", print_hash_value);
    transparent_crc(g_687.f3, "g_687.f3", print_hash_value);
    transparent_crc(g_687.f4.f0, "g_687.f4.f0", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_795[i], "g_795[i]", print_hash_value);

    }
    transparent_crc(g_822.f0, "g_822.f0", print_hash_value);
    transparent_crc(g_822.f1, "g_822.f1", print_hash_value);
    transparent_crc(g_822.f2, "g_822.f2", print_hash_value);
    transparent_crc(g_868.f0, "g_868.f0", print_hash_value);
    transparent_crc(g_868.f2, "g_868.f2", print_hash_value);
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_973, "g_973", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    transparent_crc(g_975, "g_975", print_hash_value);
    transparent_crc(g_982, "g_982", print_hash_value);
    transparent_crc(g_997, "g_997", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    transparent_crc(g_1071, "g_1071", print_hash_value);
    transparent_crc(g_1110, "g_1110", print_hash_value);
    transparent_crc(g_1118.f0.f0, "g_1118.f0.f0", print_hash_value);
    transparent_crc(g_1118.f1, "g_1118.f1", print_hash_value);
    transparent_crc(g_1118.f2, "g_1118.f2", print_hash_value);
    transparent_crc(g_1118.f3, "g_1118.f3", print_hash_value);
    transparent_crc(g_1118.f4.f0, "g_1118.f4.f0", print_hash_value);
    transparent_crc(g_1128, "g_1128", print_hash_value);
    transparent_crc(g_1149, "g_1149", print_hash_value);
    transparent_crc(g_1175.f0.f0, "g_1175.f0.f0", print_hash_value);
    transparent_crc(g_1292.f0.f0, "g_1292.f0.f0", print_hash_value);
    transparent_crc(g_1292.f1, "g_1292.f1", print_hash_value);
    transparent_crc(g_1292.f2, "g_1292.f2", print_hash_value);
    transparent_crc(g_1292.f3, "g_1292.f3", print_hash_value);
    transparent_crc(g_1292.f4.f0, "g_1292.f4.f0", print_hash_value);
    transparent_crc(g_1304, "g_1304", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1331[i], "g_1331[i]", print_hash_value);

    }
    transparent_crc(g_1359, "g_1359", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1426[i].f0, "g_1426[i].f0", print_hash_value);
        transparent_crc(g_1426[i].f2, "g_1426[i].f2", print_hash_value);

    }
    transparent_crc(g_1435, "g_1435", print_hash_value);
    transparent_crc(g_1496, "g_1496", print_hash_value);
    transparent_crc(g_1549, "g_1549", print_hash_value);
    transparent_crc(g_1570, "g_1570", print_hash_value);
    transparent_crc(g_1690.f0.f0, "g_1690.f0.f0", print_hash_value);
    transparent_crc(g_1690.f1, "g_1690.f1", print_hash_value);
    transparent_crc(g_1690.f2, "g_1690.f2", print_hash_value);
    transparent_crc(g_1690.f3, "g_1690.f3", print_hash_value);
    transparent_crc(g_1690.f4.f0, "g_1690.f4.f0", print_hash_value);
    transparent_crc(g_1705.f0, "g_1705.f0", print_hash_value);
    transparent_crc(g_1705.f1, "g_1705.f1", print_hash_value);
    transparent_crc(g_1705.f2, "g_1705.f2", print_hash_value);
    transparent_crc(g_1748, "g_1748", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
