// SPDX-License-Identifier: MIT
// cctest_csmith_0bb09d71.c --- cctest case csmith_0bb09d71 (csmith seed 196124017)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6939f1c2 */

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

// Options:   -s 196124017 -o /tmp/csmith_gen_2nt_kwc4/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
   const int32_t  f1;
   const int32_t  f2;
   const uint8_t  f3;
   uint8_t  f4;
   uint16_t  f5;
};

struct S1 {
   unsigned f0 : 5;
   signed f1 : 10;
   unsigned f2 : 11;
   signed f3 : 1;
   signed f4 : 10;
   const signed f5 : 30;
   signed f6 : 27;
};

union U2 {
   struct S0  f0;
   const signed f1 : 22;
   uint16_t  f2;
   uint64_t  f3;
};

union U3 {
   uint32_t  f0;
   int8_t * f1;
   int64_t  f2;
   int16_t  f3;
};


static const uint16_t g_2 = 1UL;
static int32_t g_3 = 1L;
static int8_t g_14 = 0xB6L;
static int8_t *g_13 = &g_14;
static uint64_t g_29 = 0xD8A0F8393131EC8ELL;
static union U2 g_49 = {{0xF41B6ADD7081DC49LL,-3L,0x0915D2BBL,0x99L,0x6DL,65535UL}};
static uint32_t g_58 = 5UL;
static int16_t g_60 = 0x474AL;
static int32_t g_64 = 0x1DF722E0L;
static int32_t g_79 = (-10L);
static uint8_t g_80 = 0xA3L;
static uint16_t g_83 = 1UL;
static int64_t g_87 = (-9L);
static int16_t g_88 = (-10L);
static int32_t g_89 = 0x5B66984BL;
static int32_t g_90 = 7L;
static uint32_t g_91 = 0UL;
static union U3 g_95 = {1UL};
static union U3 *g_94[4][6] = {{(void*)0,&g_95,&g_95,&g_95,&g_95,(void*)0},{&g_95,(void*)0,&g_95,(void*)0,&g_95,&g_95},{&g_95,(void*)0,(void*)0,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,(void*)0,(void*)0,&g_95}};
static int16_t *g_143 = &g_88;
static struct S1 g_154 = {3,15,42,0,-14,23641,-5666};
static uint64_t g_164 = 0xDF932BF644599FCFLL;
static int8_t g_166 = 0x88L;
static int32_t *g_169[5][6][2] = {{{&g_79,(void*)0},{&g_89,&g_79},{&g_90,&g_3},{&g_90,&g_79},{&g_89,(void*)0},{&g_79,(void*)0}},{{&g_89,&g_90},{&g_3,&g_79},{&g_79,&g_89},{&g_79,&g_89},{&g_79,&g_79},{&g_90,(void*)0}},{{&g_90,&g_89},{&g_3,(void*)0},{&g_79,&g_3},{(void*)0,&g_79},{(void*)0,&g_3},{&g_79,(void*)0}},{{&g_3,&g_89},{&g_90,(void*)0},{&g_90,&g_3},{&g_3,&g_79},{&g_79,&g_79},{&g_3,&g_3}},{{&g_90,(void*)0},{&g_90,&g_89},{&g_3,(void*)0},{&g_79,&g_3},{(void*)0,&g_79},{(void*)0,&g_3}}};
static uint8_t g_175 = 0xC1L;
static struct S1 g_198 = {3,-19,15,0,10,-20977,-10307};
static struct S1 g_334 = {4,-10,40,0,-3,-24350,-4223};
static const uint32_t g_367 = 0x568DA990L;
static const uint32_t *g_370 = (void*)0;
static struct S1 *g_417[5][2] = {{&g_154,&g_154},{&g_154,&g_154},{&g_154,&g_154},{&g_154,&g_154},{&g_154,&g_154}};
static struct S1 **g_416 = &g_417[4][1];
static const union U2 *g_424 = &g_49;
static const union U2 **g_423 = &g_424;
static struct S0 g_510 = {1L,-1L,-1L,0xDEL,7UL,0x601DL};
static int64_t *g_511[1][7][3] = {{{&g_87,&g_87,&g_87},{&g_510.f0,&g_510.f0,&g_510.f0},{&g_87,&g_87,&g_87},{&g_510.f0,&g_510.f0,&g_510.f0},{&g_87,&g_87,&g_87},{&g_510.f0,&g_510.f0,&g_510.f0},{&g_87,&g_87,&g_87}}};
static uint8_t *g_633 = (void*)0;
static uint8_t **g_632[5][7] = {{&g_633,&g_633,&g_633,&g_633,&g_633,&g_633,&g_633},{&g_633,&g_633,&g_633,&g_633,&g_633,&g_633,&g_633},{&g_633,&g_633,&g_633,&g_633,&g_633,&g_633,&g_633},{&g_633,&g_633,&g_633,&g_633,&g_633,&g_633,&g_633},{&g_633,&g_633,&g_633,&g_633,&g_633,&g_633,&g_633}};
static int8_t g_661[1][1][6] = {{{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}}};
static uint32_t **g_673 = (void*)0;
static uint8_t g_697 = 0x49L;
static const int8_t g_773 = 0x96L;
static int16_t g_808 = 0x11C6L;
static uint32_t g_816 = 0UL;
static struct S1 ***g_832 = &g_416;
static struct S1 ****g_831 = &g_832;
static uint64_t g_857[1] = {0x1C54EF3E582B9FC0LL};
static const int64_t *g_860 = &g_87;
static const int64_t **g_859 = &g_860;
static uint16_t g_877 = 0xC16DL;
static const union U3 *g_945[3] = {&g_95,&g_95,&g_95};
static const union U3 **g_944 = &g_945[0];
static const union U3 ***g_943[2][3] = {{&g_944,&g_944,(void*)0},{&g_944,&g_944,(void*)0}};
static const struct S0 *g_952[2][4] = {{&g_510,&g_510,&g_510,&g_510},{&g_510,&g_510,&g_510,&g_510}};
static const struct S0 **g_951 = &g_952[1][0];



static const int64_t  func_1(void);
static int8_t  func_7(struct S0  p_8, int8_t * p_9, uint32_t  p_10, uint32_t  p_11);
static int8_t  func_18(uint64_t  p_19, const int32_t  p_20, uint64_t  p_21, int32_t  p_22);
static union U3 * func_24(uint64_t  p_25);
static struct S0  func_26(int32_t  p_27);
static const struct S0  func_31(uint64_t * p_32, union U3 * p_33);
static union U3 * func_35(int8_t * p_36, uint16_t  p_37, int16_t  p_38);
static int8_t * func_39(int32_t  p_40, uint64_t * p_41, const int16_t  p_42);




static const int64_t  func_1(void)
{ 
    uint32_t l_6[2][2][5] = {{{4294967295UL,4294967295UL,5UL,5UL,4294967295UL},{1UL,0UL,1UL,0UL,1UL}},{{4294967295UL,5UL,5UL,4294967295UL,4294967295UL},{0xBBBDEBF8L,0UL,0xBBBDEBF8L,0UL,0xBBBDEBF8L}}};
    struct S0 l_12 = {0x8886A6C65B0B56CELL,0L,0x68729207L,0x65L,0x96L,4UL};
    int64_t l_900[5];
    int32_t l_1112 = 0x1C3DE481L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_900[i] = 0L;
    if (g_2)
    { 
        uint16_t l_23[3][2][3] = {{{0x5631L,0x5631L,0UL},{1UL,0UL,0UL}},{{0UL,65535UL,0x2FD6L},{1UL,65535UL,1UL}},{{0x5631L,0UL,0x2FD6L},{0x5631L,0x5631L,0UL}}};
        int i, j, k;
        for (g_3 = 16; (g_3 < 9); g_3 = safe_sub_func_int8_t_s_s(g_3, 2))
        { 
            union U3 l_15[6][2] = {{{0x3E731E7BL},{0x3E731E7BL}},{{0x3E731E7BL},{0x3E731E7BL}},{{0x3E731E7BL},{0x3E731E7BL}},{{0x3E731E7BL},{0x3E731E7BL}},{{0x3E731E7BL},{0x3E731E7BL}},{{0x3E731E7BL},{0x3E731E7BL}}};
            int32_t *l_1088 = &g_79;
            int i, j;
        }
    }
    else
    { 
        uint16_t l_1089 = 0x0058L;
        int32_t l_1094 = 0xF4CF5E42L;
        int32_t l_1117 = 0L;
        int32_t *l_1118[7][7][4] = {{{&l_1112,&l_1094,&g_90,&g_3},{&g_3,&l_1117,(void*)0,&l_1094},{&g_3,&l_1112,&l_1117,&g_79},{&g_3,&g_89,&g_90,&g_79},{(void*)0,&l_1094,&l_1094,(void*)0},{&g_79,(void*)0,&l_1112,&g_3},{&l_1094,&l_1112,&g_79,&g_3}},{{&l_1117,(void*)0,&l_1117,(void*)0},{(void*)0,&g_79,(void*)0,&g_3},{&g_79,&g_3,&g_89,&g_89},{&l_1117,&l_1094,&l_1117,&l_1112},{&g_3,&g_79,&g_3,&l_1094},{&g_90,&g_90,&l_1094,(void*)0},{(void*)0,&l_1094,&l_1117,&l_1117}},{{(void*)0,(void*)0,&l_1112,&g_90},{&g_79,&g_3,&l_1117,(void*)0},{&g_3,&l_1094,&l_1117,&l_1117},{&g_79,&l_1094,&g_79,(void*)0},{&l_1094,&g_3,(void*)0,&g_90},{(void*)0,(void*)0,&l_1094,&l_1117},{&g_89,&l_1094,(void*)0,(void*)0}},{{&g_3,&g_90,&l_1117,&l_1094},{&l_1117,&g_79,&g_90,&l_1112},{&g_89,&l_1094,&g_90,&g_89},{&g_79,&g_3,(void*)0,&g_3},{&l_1117,&g_79,&g_79,(void*)0},{&g_79,(void*)0,&g_89,&g_3},{(void*)0,&l_1112,&l_1117,&g_3}},{{&g_89,(void*)0,&g_89,(void*)0},{(void*)0,&l_1094,&l_1112,&g_79},{&g_3,&g_89,&l_1094,&l_1094},{&g_3,(void*)0,&l_1094,&g_89},{&g_3,&l_1094,&l_1112,&g_3},{(void*)0,&l_1117,&g_89,&g_90},{&g_89,&g_90,&l_1117,&g_3}},{{(void*)0,&l_1094,&g_89,&g_3},{&g_79,&l_1117,&g_79,(void*)0},{&l_1117,&g_90,(void*)0,&g_3},{&g_79,(void*)0,&g_90,&g_3},{&g_89,&l_1112,&g_90,(void*)0},{&l_1117,(void*)0,&l_1117,&l_1094},{&g_3,&g_79,(void*)0,&g_79}},{{&g_89,&l_1094,&l_1094,&g_89},{(void*)0,(void*)0,(void*)0,&l_1094},{&l_1094,&g_79,&g_79,&g_3},{&g_79,&g_89,&l_1117,&g_3},{&g_3,&g_79,&l_1117,&l_1094},{&g_79,(void*)0,&l_1112,&g_89},{(void*)0,&l_1094,&l_1117,&g_79}}};
        int32_t **l_1119 = &l_1118[6][6][2];
        int i, j, k;
        g_169[4][5][1] = ((l_1089 & (65529UL >= g_334.f6)) , (void*)0);
        for (g_14 = 0; (g_14 != (-27)); g_14 = safe_sub_func_int32_t_s_s(g_14, 1))
        { 
            int32_t *l_1092 = (void*)0;
            int32_t *l_1093[2][4];
            struct S1 l_1095[6] = {{4,16,27,-0,25,23633,-10118},{4,16,27,-0,25,23633,-10118},{4,16,27,-0,25,23633,-10118},{4,16,27,-0,25,23633,-10118},{4,16,27,-0,25,23633,-10118},{4,16,27,-0,25,23633,-10118}};
            uint16_t *l_1110 = &l_12.f5;
            int64_t *l_1111[4];
            int8_t *l_1113 = &g_661[0][0][0];
            int16_t *l_1114 = &g_95.f3;
            int16_t *l_1115 = (void*)0;
            int16_t *l_1116 = &g_60;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1093[i][j] = (void*)0;
            }
            for (i = 0; i < 4; i++)
                l_1111[i] = &g_510.f0;
            l_1094 = l_1089;
            l_1094 = (l_1095[5] , 6L);
            l_1117 = ((*g_143) == (g_808 = ((*l_1116) &= ((safe_mul_func_int16_t_s_s(((*l_1114) = (((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((*l_1113) = ((((l_6[0][1][2] & g_154.f0) >= (safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s(0x94L, (((l_1110 != &g_83) < (l_1112 = (l_1094 |= (*g_860)))) || 0x58AF649D5A0BBAC1LL))) < l_6[1][1][0]), l_12.f0)) , 0L) != 0x5406FB870DD619DALL), g_49.f0.f3)) , l_900[2]), 0x71F5L))) , (*g_424)) , (*g_13))), l_6[1][1][4])), 4UL)) > 0xF54BF42236D1F6ABLL) ^ l_1089)), l_1089)) , (*g_143)))));
        }
        (*l_1119) = l_1118[3][3][1];
    }
    return l_12.f2;
}



static int8_t  func_7(struct S0  p_8, int8_t * p_9, uint32_t  p_10, uint32_t  p_11)
{ 
    uint16_t l_904[4][3];
    uint64_t *l_939 = &g_164;
    int8_t l_946 = 0x8DL;
    int32_t l_979[2][2][5] = {{{0x86976518L,0x86976518L,0x86976518L,0x86976518L,0x86976518L},{0L,0L,0L,0L,0L}},{{0x86976518L,0x86976518L,0x86976518L,0x86976518L,0x86976518L},{0L,0L,0L,0L,0L}}};
    struct S1 * const *l_984 = &g_417[4][1];
    struct S1 * const **l_983 = &l_984;
    uint32_t l_989 = 5UL;
    uint8_t * const l_999[3][4][6] = {{{&g_697,&g_510.f4,(void*)0,&g_697,(void*)0,(void*)0},{(void*)0,&g_510.f4,&g_80,(void*)0,&g_80,&g_510.f4},{&g_175,&g_510.f4,(void*)0,&g_510.f4,&g_510.f4,(void*)0},{(void*)0,(void*)0,&g_510.f4,(void*)0,&g_697,(void*)0}},{{&g_510.f4,(void*)0,&g_175,(void*)0,&g_510.f4,&g_510.f4},{(void*)0,&g_510.f4,&g_175,&g_80,(void*)0,(void*)0},{&g_510.f4,&g_80,&g_510.f4,(void*)0,&g_510.f4,(void*)0},{(void*)0,&g_510.f4,(void*)0,&g_510.f4,&g_80,&g_510.f4}},{{(void*)0,(void*)0,&g_80,&g_175,&g_510.f4,(void*)0},{&g_510.f4,&g_510.f4,(void*)0,&g_175,(void*)0,&g_510.f4},{(void*)0,&g_697,(void*)0,&g_510.f4,(void*)0,(void*)0},{(void*)0,&g_510.f4,&g_510.f4,(void*)0,&g_510.f4,&g_175}}};
    int32_t *l_1000 = &g_79;
    int16_t l_1017 = (-1L);
    uint8_t l_1050 = 0x16L;
    uint64_t l_1078 = 0UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_904[i][j] = 0xF137L;
    }
    g_169[4][0][1] = &g_89;
lbl_992:
    for (g_166 = 16; (g_166 >= (-2)); g_166 = safe_sub_func_uint16_t_u_u(g_166, 4))
    { 
        uint32_t l_903[2][4];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_903[i][j] = 18446744073709551613UL;
        }
        return l_903[0][1];
    }
    if (l_904[1][0])
    { 
        uint32_t *l_911 = &g_91;
        uint32_t **l_910 = &l_911;
        uint32_t ***l_912 = &l_910;
        uint32_t **l_913 = &l_911;
        int32_t *l_914 = (void*)0;
        int32_t *l_915 = &g_89;
        int32_t l_916 = 0xFC91314AL;
        int32_t l_917 = 3L;
        l_917 = ((l_904[1][0] || ((~g_3) || (0UL != ((safe_div_func_int16_t_s_s(0xEAF0L, (+(+(((1UL >= ((((*l_915) &= (((*l_912) = l_910) != l_913)) || p_11) & 1UL)) < 0xC3L) <= l_904[1][0]))))) > (**g_859))))) <= l_916);
    }
    else
    { 
        uint8_t *l_934 = &g_175;
        const uint64_t *l_940 = &g_857[0];
        union U3 **l_942 = &g_94[3][2];
        union U3 *** const l_941[7][1] = {{&l_942},{&l_942},{&l_942},{&l_942},{&l_942},{&l_942},{&l_942}};
        const int32_t l_947[1][4] = {{0xF03F0F06L,0xF03F0F06L,0xF03F0F06L,0xF03F0F06L}};
        int32_t *l_948 = (void*)0;
        int32_t *l_949 = &g_90;
        int16_t l_982 = 0xFAB5L;
        int32_t *l_987[5];
        int32_t l_988[7][6][1] = {{{8L},{8L},{7L},{8L},{8L},{7L}},{{8L},{8L},{7L},{8L},{8L},{7L}},{{8L},{8L},{7L},{8L},{8L},{7L}},{{8L},{8L},{7L},{8L},{8L},{7L}},{{8L},{8L},{7L},{8L},{8L},{7L}},{{8L},{8L},{7L},{8L},{8L},{7L}},{{8L},{8L},{7L},{8L},{8L},{7L}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_987[i] = &g_90;
        (*l_949) = ((safe_add_func_int64_t_s_s((((l_904[1][0] < (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((p_8.f4 == (safe_mul_func_uint16_t_u_u((((+p_8.f4) ^ (!((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((*l_934)++), ((l_939 != l_940) & (l_941[4][0] != g_943[0][0])))), g_510.f4)) <= l_946))) != l_947[0][0]), p_8.f3))), 6)), (*p_9))), 15))) , 0x73D8L) == 0xC335L), l_947[0][1])) < (*g_13));
        for (g_87 = 2; (g_87 >= 0); g_87 -= 1)
        { 
            uint32_t l_953 = 1UL;
            uint16_t *l_958 = (void*)0;
            uint16_t *l_959[3];
            int32_t l_960 = 0L;
            uint32_t *l_963 = &g_91;
            int32_t l_964[7][1][2] = {{{0xFDAAAC7EL,0xFDAAAC7EL}},{{0L,0xFDAAAC7EL}},{{0xFDAAAC7EL,0L}},{{0xFDAAAC7EL,0xFDAAAC7EL}},{{0L,0xFDAAAC7EL}},{{0xFDAAAC7EL,0L}},{{0xFDAAAC7EL,0xFDAAAC7EL}}};
            union U2 *l_986[6][3][4] = {{{&g_49,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_49,&g_49},{(void*)0,&g_49,(void*)0,(void*)0}},{{&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,(void*)0,(void*)0},{(void*)0,&g_49,&g_49,&g_49}},{{(void*)0,&g_49,(void*)0,&g_49},{&g_49,&g_49,(void*)0,(void*)0},{(void*)0,&g_49,&g_49,&g_49}},{{&g_49,&g_49,&g_49,&g_49},{(void*)0,&g_49,&g_49,&g_49},{(void*)0,&g_49,&g_49,&g_49}},{{&g_49,&g_49,(void*)0,&g_49},{&g_49,&g_49,(void*)0,&g_49},{&g_49,&g_49,&g_49,&g_49}},{{&g_49,&g_49,(void*)0,&g_49},{&g_49,&g_49,(void*)0,(void*)0},{&g_49,(void*)0,&g_49,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_959[i] = (void*)0;
            l_964[4][0][0] ^= ((*l_949) = ((!(g_951 == &g_952[1][2])) >= (l_953 && (safe_sub_func_int8_t_s_s((((*l_963) = ((((g_198.f2 &= (((safe_rshift_func_uint16_t_u_s((l_960 ^= l_953), 3)) | ((g_877 = p_8.f3) | ((*g_13) > 0x43L))) || g_510.f5)) | p_10) , p_8.f4) != l_953)) ^ 4294967293UL), 255UL)))));
            if (p_10)
            { 
                return l_904[1][2];
            }
            else
            { 
                if (p_8.f3)
                    break;
                if (p_8.f0)
                    continue;
            }
            for (g_29 = 0; (g_29 <= 2); g_29 += 1)
            { 
                int64_t **l_973 = (void*)0;
                int64_t **l_974 = &g_511[0][6][2];
                int64_t *l_975 = &g_49.f0.f0;
                int16_t *l_978[7][4] = {{(void*)0,(void*)0,&g_60,(void*)0},{&g_88,&g_88,(void*)0,&g_60},{(void*)0,&g_88,&g_88,(void*)0},{&g_88,(void*)0,&g_88,(void*)0},{&g_88,&g_88,&g_88,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_88,&g_88,&g_60,(void*)0}};
                int8_t *l_980 = &g_14;
                const int32_t l_981 = 2L;
                int32_t l_985 = (-3L);
                int i, j;
                (*l_949) = (safe_sub_func_int8_t_s_s(((0xD7L || (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((p_10 ^ ((l_975 = ((*l_974) = (void*)0)) == (void*)0)), ((((safe_div_func_int16_t_s_s((l_979[1][0][0] = g_154.f0), g_198.f6)) , l_980) != p_9) ^ p_11))) != 0x28L), 0L)), l_946)) | 0UL) ^ l_981)) == l_946), (-1L)));
                l_985 = ((l_982 , l_983) != (*g_831));
                (*l_949) ^= ((*p_9) && (-5L));
                (*g_423) = l_986[2][2][1];
                for (g_83 = 0; g_83 < 5; g_83 += 1)
                {
                    for (l_985 = 0; l_985 < 7; l_985 += 1)
                    {
                        g_632[g_83][l_985] = &g_633;
                    }
                }
            }
        }
        l_989--;
        if (l_989)
            goto lbl_992;
    }
    (*l_1000) = (p_11 ^ (((safe_rshift_func_uint16_t_u_s(p_8.f1, 10)) < 0xDE741584863120FALL) & (safe_sub_func_int64_t_s_s((l_979[1][0][0] = l_979[1][0][0]), ((((safe_div_func_int8_t_s_s(((p_8.f0 || ((l_904[1][0] & (((void*)0 == l_999[2][3][4]) > p_8.f2)) != 0x1DA542ECL)) <= g_88), p_8.f5)) && 0UL) == l_946) && 0x4A44062AL)))));
    for (g_79 = 0; (g_79 != (-6)); g_79 = safe_sub_func_uint16_t_u_u(g_79, 6))
    { 
        int32_t *l_1003 = &g_90;
        int32_t *l_1004 = (void*)0;
        int32_t *l_1005 = &g_89;
        int32_t *l_1006 = (void*)0;
        int32_t *l_1007 = &l_979[1][0][1];
        int32_t *l_1008 = &l_979[1][0][0];
        int32_t *l_1009 = &l_979[1][1][4];
        int32_t *l_1010 = &g_89;
        int32_t *l_1011 = (void*)0;
        int32_t *l_1012 = &g_90;
        int32_t *l_1013 = (void*)0;
        int32_t *l_1014 = &g_90;
        int32_t *l_1015 = &l_979[0][1][0];
        int32_t *l_1016[1];
        uint16_t l_1018 = 65530UL;
        uint64_t l_1022 = 0UL;
        int64_t *l_1029 = &g_510.f0;
        int i;
        for (i = 0; i < 1; i++)
            l_1016[i] = &l_979[1][0][0];
        ++l_1018;
        for (p_11 = 0; (p_11 <= 2); p_11 += 1)
        { 
            int32_t l_1021[4][6][4] = {{{1L,0xA3B8450FL,(-1L),0xDE4D2D72L},{0x40FD037BL,0x003B862DL,1L,(-1L)},{0xC93C11B5L,0x003B862DL,0xC93C11B5L,0xDE4D2D72L},{0x003B862DL,0xA3B8450FL,1L,(-3L)},{(-3L),(-1L),0x40FD037BL,0xA3B8450FL},{1L,0x40FD037BL,0x40FD037BL,1L}},{{(-3L),0xDE4D2D72L,1L,0xC93C11B5L},{0x003B862DL,0x114CD538L,0xC93C11B5L,0xF2D32D0CL},{0xC93C11B5L,0xF2D32D0CL,1L,0xF2D32D0CL},{0x40FD037BL,0x114CD538L,(-1L),0xC93C11B5L},{1L,0xDE4D2D72L,0xF2D32D0CL,1L},{(-1L),0x40FD037BL,0xA3B8450FL,0xA3B8450FL}},{{(-1L),(-1L),0xF2D32D0CL,(-3L)},{1L,0xA3B8450FL,(-1L),0xDE4D2D72L},{0x40FD037BL,0x003B862DL,1L,(-1L)},{0xC93C11B5L,0x003B862DL,0xC93C11B5L,0xDE4D2D72L},{0x003B862DL,0xA3B8450FL,1L,(-3L)},{(-3L),(-1L),0x40FD037BL,0xA3B8450FL}},{{1L,0x40FD037BL,0x40FD037BL,1L},{(-3L),0xDE4D2D72L,1L,0xC93C11B5L},{0x003B862DL,0x114CD538L,0xC93C11B5L,0xF2D32D0CL},{0xC93C11B5L,0xF2D32D0CL,1L,0xF2D32D0CL},{0x40FD037BL,0x114CD538L,(-1L),0xC93C11B5L},{1L,0xDE4D2D72L,0xF2D32D0CL,1L}}};
            int16_t *l_1030 = (void*)0;
            int16_t *l_1031 = &g_60;
            struct S1 l_1060 = {3,27,28,-0,7,-19130,7626};
            int32_t *l_1077[3][6][3] = {{{&g_79,(void*)0,&l_979[1][0][0]},{(void*)0,&l_1021[0][4][0],&l_1021[0][4][0]},{&l_979[1][0][0],&g_79,&l_1021[1][1][3]},{&g_3,(void*)0,&l_979[1][0][4]},{&l_979[1][0][0],&l_979[1][0][0],&g_79},{(void*)0,&g_3,&g_3}},{{&g_79,&l_979[1][0][0],&g_79},{&l_1021[0][4][0],(void*)0,&g_3},{(void*)0,&g_79,&g_79},{&g_3,&g_3,&l_979[1][0][4]},{&l_1021[1][1][3],&g_79,&l_979[1][0][0]},{&l_979[1][0][0],&l_979[1][0][0],&g_3}},{{&g_79,&l_1021[1][1][3],&g_79},{&g_3,&l_979[1][0][0],&g_3},{&l_1021[3][3][2],&g_79,&l_1021[2][5][2]},{&l_1021[0][4][0],&g_3,&g_3},{&l_1021[2][5][2],&l_1021[3][3][2],&g_79},{&g_3,&l_1021[0][4][0],&g_3}}};
            uint32_t l_1085 = 4294967286UL;
            int i, j, k;
            l_1022--;
            (*l_1007) |= (((safe_mul_func_int16_t_s_s((0xCE8CF57A53CECCD4LL | (**g_859)), (safe_lshift_func_int16_t_s_u(((*l_1031) = ((l_1029 = l_1029) == (void*)0)), 5)))) , (((safe_rshift_func_uint16_t_u_s(g_154.f4, 8)) , (g_49.f3 = (--(*l_939)))) >= ((((**g_951) , 253UL) && (*g_13)) & p_8.f2))) | 0L);
            for (g_29 = 0; (g_29 <= 2); g_29 += 1)
            { 
                int64_t l_1048[3][1][7] = {{{0L,0L,0L,0L,0L,0L,0L}},{{0L,0x941077EAF03F313ELL,0x941077EAF03F313ELL,0L,0x941077EAF03F313ELL,0x941077EAF03F313ELL,0L}},{{0x941077EAF03F313ELL,0L,0x941077EAF03F313ELL,0x941077EAF03F313ELL,0L,0x941077EAF03F313ELL,0x941077EAF03F313ELL}}};
                int32_t l_1049[2];
                int32_t l_1065 = (-3L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1049[i] = 2L;
                for (g_510.f5 = 0; (g_510.f5 <= 2); g_510.f5 += 1)
                { 
                    uint32_t *l_1040 = &g_95.f0;
                    uint32_t *l_1041 = &g_95.f0;
                    uint32_t *l_1042 = &l_989;
                    int32_t l_1045[3][2] = {{1L,1L},{0x7A04DC67L,1L},{1L,0x7A04DC67L}};
                    union U3 **l_1061 = &g_94[2][0];
                    int i, j;
                    l_1021[2][5][2] = ((((*p_9) || ((***g_832) , ((((l_1021[3][2][1] != ((*l_1014) &= ((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((((g_198.f3 >= ((*l_1008) >= l_1021[2][5][2])) ^ ((((*l_1040) = ((*l_1042)++)) , ((18446744073709551611UL | l_1021[0][5][3]) , l_1045[2][1])) || p_10)) <= 0x4E06BA1727CC6424LL), 6)) && p_8.f0), p_8.f4)) < p_8.f0))) != 4294967290UL) , 5L) || p_8.f4))) || g_90) == 0xADL);
                    g_169[1][5][1] = (((*p_9) || (1UL && (safe_rshift_func_uint8_t_u_u((l_1050--), 0)))) , (p_11 , &g_3));
                    (*l_1008) = ((safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((l_1060 , (((*l_1061) = &g_95) != ((*g_944) = g_945[g_510.f5]))), (safe_lshift_func_uint16_t_u_s(l_1045[2][1], ((&l_1000 == (void*)0) == p_8.f4))))), p_8.f4)) < l_1060.f4))), (*l_1008))) , 6L);
                    l_1065 = ((*l_1008) &= (~p_11));
                }
            }
            if (p_8.f2)
                break;
            for (g_80 = 17; (g_80 > 41); ++g_80)
            { 
                int32_t l_1079 = (-7L);
                int32_t l_1080 = 0x4875047FL;
                int32_t l_1081 = 9L;
                int32_t l_1082 = 0x944D9D45L;
                int32_t l_1083 = 0x55D59F9EL;
                int32_t l_1084 = (-10L);
                l_1060.f3 = (*l_1000);
                for (l_1018 = (-17); (l_1018 <= 13); ++l_1018)
                { 
                    uint16_t l_1071 = 0x5006L;
                    int32_t l_1072[5];
                    uint16_t *l_1075[2];
                    int32_t **l_1076[7];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1072[i] = 0L;
                    for (i = 0; i < 2; i++)
                        l_1075[i] = &g_877;
                    for (i = 0; i < 7; i++)
                        l_1076[i] = (void*)0;
                    g_632[4][5] = (void*)0;
                    (*l_1009) |= (((3UL && (-1L)) != (!(l_1072[3] = l_1071))) != (l_1071 ^ (safe_lshift_func_uint16_t_u_u(1UL, (g_49.f2 = g_3)))));
                    l_1077[2][5][1] = l_1008;
                }
                if (l_1078)
                    continue;
                --l_1085;
                if ((*l_1000))
                    continue;
            }
        }
        (*l_1010) = (*l_1000);
    }
    return (*l_1000);
}



static int8_t  func_18(uint64_t  p_19, const int32_t  p_20, uint64_t  p_21, int32_t  p_22)
{ 
    uint64_t *l_28 = &g_29;
    int32_t l_113 = 0x678AA32FL;
    union U3 **l_667 = &g_94[2][0];
    struct S1 ***l_671[4] = {&g_416,&g_416,&g_416,&g_416};
    struct S1 ****l_670 = &l_671[3];
    const union U2 l_672 = {{-9L,0x75821560L,0x0BCBA515L,255UL,1UL,0UL}};
    uint32_t ***l_674 = &g_673;
    int64_t *l_679 = (void*)0;
    int64_t *l_680 = &g_510.f0;
    uint32_t **l_681 = (void*)0;
    int32_t l_693 = 0xC866F919L;
    int32_t l_696 = 0x7F174C07L;
    int16_t l_713 = 1L;
    int32_t *l_721 = &l_693;
    int32_t *l_722 = &l_113;
    int32_t l_723 = (-7L);
    int32_t l_724 = 0x6B65F75FL;
    int32_t l_725[5] = {0x5AC1815AL,0x5AC1815AL,0x5AC1815AL,0x5AC1815AL,0x5AC1815AL};
    uint32_t l_729 = 0xF32FFB8BL;
    uint8_t **l_766 = &g_633;
    int32_t *l_780 = &g_64;
    int32_t **l_779 = &l_780;
    int32_t ***l_778 = &l_779;
    int32_t **l_783[5];
    const int32_t *l_785 = &l_725[2];
    const int32_t **l_784 = &l_785;
    struct S0 *l_878[2][2];
    int i, j;
    for (i = 0; i < 5; i++)
        l_783[i] = &g_169[0][3][1];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_878[i][j] = &g_510;
    }
    (*l_667) = func_24((func_26(((g_14 , ((*l_28) = 18446744073709551615UL)) <= p_22)) , l_113));
    if ((((((safe_mod_func_uint8_t_u_u(((&g_416 != ((*l_670) = (void*)0)) , ((l_672 , (((*l_674) = g_673) == (((*l_680) = (0x463EL > (((~((safe_mod_func_uint32_t_u_u(((~(p_19 < p_22)) == 0x34043DDBL), p_21)) , p_22)) || 0xDB3A49B5L) > p_22))) , l_681))) || 1UL)), l_113)) , l_667) == l_667) && p_19) & 4294967295UL))
    { 
        int8_t l_694 = 0x03L;
        int32_t l_695[5] = {0x653123A4L,0x653123A4L,0x653123A4L,0x653123A4L,0x653123A4L};
        struct S0 l_702 = {0L,0x6523790FL,0xC5593CABL,0x09L,253UL,65535UL};
        int32_t **l_720[3];
        int16_t l_726 = 0x2219L;
        int32_t l_727 = 0xA89212C8L;
        int64_t l_728 = 0L;
        union U2 *l_732 = &g_49;
        int i;
        for (i = 0; i < 3; i++)
            l_720[i] = &g_169[0][4][1];
        for (g_89 = 0; (g_89 < 14); g_89++)
        { 
            int32_t *l_684 = &g_79;
            int32_t *l_685 = &l_113;
            int32_t *l_686 = &l_113;
            int32_t *l_687 = &g_90;
            int32_t *l_688 = &l_113;
            int32_t *l_689 = (void*)0;
            int32_t *l_690 = &g_90;
            int32_t *l_691 = &g_79;
            int32_t *l_692[6];
            int i;
            for (i = 0; i < 6; i++)
                l_692[i] = &g_79;
            if (p_22)
                break;
            g_697--;
            (*l_684) &= (l_696 ^= (l_113 >= (safe_div_func_uint8_t_u_u(((l_702 , p_20) & ((*l_28) = (safe_lshift_func_uint8_t_u_s(l_702.f3, 1)))), 1UL))));
            for (g_14 = 11; (g_14 > (-21)); g_14 = safe_sub_func_uint8_t_u_u(g_14, 9))
            { 
                int64_t l_710 = (-1L);
                int32_t l_711[7][7][3] = {{{1L,(-1L),1L},{0x2817C124L,(-1L),0x00E2840FL},{0xF502CB58L,(-1L),(-1L)},{0x00E2840FL,(-2L),0x01C0BDFDL},{0xF502CB58L,(-1L),0xF502CB58L},{0x2817C124L,0xA1D54D4AL,0x01C0BDFDL},{1L,1L,(-1L)}},{{(-1L),0xA1D54D4AL,0x00E2840FL},{(-1L),(-1L),1L},{(-1L),(-2L),(-1L)},{1L,(-1L),1L},{0x2817C124L,(-1L),0x00E2840FL},{0xF502CB58L,(-1L),(-1L)},{0x00E2840FL,(-2L),0x01C0BDFDL}},{{0xF502CB58L,(-1L),0xF502CB58L},{0x2817C124L,0xA1D54D4AL,0x01C0BDFDL},{1L,1L,(-1L)},{(-1L),0xA1D54D4AL,0x00E2840FL},{(-1L),(-1L),1L},{(-1L),(-2L),(-1L)},{1L,(-1L),1L}},{{0x2817C124L,(-1L),0x00E2840FL},{0xF502CB58L,(-1L),(-1L)},{0x00E2840FL,(-2L),0x01C0BDFDL},{0xF502CB58L,(-1L),0xF502CB58L},{0x2817C124L,0xA1D54D4AL,0x01C0BDFDL},{1L,1L,(-1L)},{(-1L),0xA1D54D4AL,0x00E2840FL}},{{(-1L),(-1L),1L},{(-1L),(-2L),(-1L)},{1L,(-1L),1L},{0x2817C124L,(-1L),0x00E2840FL},{0xF502CB58L,(-1L),(-1L)},{0x00E2840FL,(-2L),0x01C0BDFDL},{0xF502CB58L,(-1L),0xF502CB58L}},{{0x2817C124L,0xA1D54D4AL,0x01C0BDFDL},{1L,1L,(-1L)},{(-1L),0xA1D54D4AL,0x00E2840FL},{(-1L),(-1L),1L},{(-1L),(-2L),(-1L)},{1L,(-1L),1L},{0x2817C124L,0xA1D54D4AL,(-1L)}},{{1L,0xF502CB58L,0xF502CB58L},{(-1L),(-1L),(-1L)},{1L,1L,1L},{0x00E2840FL,0xC017D8B2L,(-1L)},{(-1L),(-1L),0xF502CB58L},{0x01C0BDFDL,0xC017D8B2L,(-1L)},{0xF502CB58L,1L,(-1L)}}};
                int32_t **l_719 = &l_691;
                int i, j, k;
                (*l_690) |= (((l_702.f3 && (((safe_rshift_func_uint16_t_u_u(p_21, 13)) && p_20) ^ (p_22 & 0xF4L))) == (0xFB99C13ACAB7F29ELL >= 1UL)) , p_20);
            }
        }
        l_722 = (l_721 = &l_695[1]);
        l_729++;
        (*g_423) = l_732;
        (*l_721) = (safe_add_func_int64_t_s_s(((*l_680) &= (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((*l_732) , ((*l_721) , (((((!((-10L) ^ (p_20 < (5L || g_334.f5)))) , (safe_mod_func_uint32_t_u_u((((p_20 >= p_21) > p_20) >= g_154.f5), p_21))) || p_19) <= (*l_722)) || g_367))), (*l_721))), p_21))), 8UL));
    }
    else
    { 
        union U2 l_742 = {{0x6D6C9C5357231AA1LL,0x1562E071L,0L,0x4BL,0x30L,3UL}};
        uint8_t **l_743 = &g_633;
        int32_t ***l_781 = &l_779;
        if ((((l_742 , ((void*)0 == l_743)) | p_20) , l_742.f0.f5))
        { 
            uint32_t l_752 = 4294967293UL;
            union U2 l_763 = {{-5L,0L,2L,3UL,0x06L,65527UL}};
            (*l_721) &= ((safe_rshift_func_uint8_t_u_s(0x0EL, ((safe_mod_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u((p_22 == l_752), (safe_sub_func_int8_t_s_s((((((((0x08L ^ ((safe_div_func_int64_t_s_s(((*l_680) = ((2UL ^ (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(((((((*g_13) >= (safe_add_func_uint8_t_u_u((l_763 , 2UL), 1UL))) == p_21) <= 0x69AC255984CCFC92LL) , 0xBA92A96EL) , p_21), 9)), 6))) & 7L)), 0x92A98B27977957C7LL)) , (-1L))) ^ 0x5FC7L) || p_19) < g_89) | 65533UL) & 0x0D6B72D1L) >= 0x541F176476AB71BFLL), 0x81L)))) != 9L), l_763.f0.f3)), (*l_722))) != 0x0812L))) , p_22);
            return p_22;
        }
        else
        { 
            uint8_t ***l_767 = &g_632[4][3];
            uint32_t *l_768 = &g_91;
            uint16_t *l_782 = &l_742.f0.f5;
            (*l_722) |= (safe_div_func_int64_t_s_s((l_742.f0.f0 <= ((*l_768) = (&g_633 == ((*l_767) = l_766)))), ((safe_div_func_uint32_t_u_u(1UL, (safe_add_func_uint32_t_u_u(p_22, (g_773 & (safe_unary_minus_func_uint8_t_u(250UL))))))) , (*l_721))));
            (*l_721) = ((l_742 , ((l_672 , l_742) , ((safe_unary_minus_func_uint8_t_u((((*l_782) ^= (safe_add_func_int64_t_s_s((*l_721), (l_778 == (g_510 , l_781))))) , p_22))) ^ g_154.f4))) & 0UL);
        }
    }
lbl_790:
    g_169[1][4][1] = &g_90;
    (*l_784) = &p_20;
    for (g_697 = 0; (g_697 == 32); g_697++)
    { 
        const int64_t l_801 = 6L;
        int32_t l_811 = 0x5B7CA14BL;
        int32_t l_813 = 1L;
        int32_t l_814 = 0L;
        struct S1 l_830[4][6][1] = {{{{1,27,43,0,20,31619,-8079}},{{2,-17,23,-0,1,-1640,-5004}},{{0,2,17,-0,22,-26906,1038}},{{0,1,12,0,-5,1446,-128}},{{0,2,17,-0,22,-26906,1038}},{{2,-17,23,-0,1,-1640,-5004}}},{{{1,27,43,0,20,31619,-8079}},{{2,-17,23,-0,1,-1640,-5004}},{{0,2,17,-0,22,-26906,1038}},{{0,1,12,0,-5,1446,-128}},{{0,2,17,-0,22,-26906,1038}},{{2,-17,23,-0,1,-1640,-5004}}},{{{1,27,43,0,20,31619,-8079}},{{2,-17,23,-0,1,-1640,-5004}},{{0,2,17,-0,22,-26906,1038}},{{0,1,12,0,-5,1446,-128}},{{0,2,17,-0,22,-26906,1038}},{{2,-17,23,-0,1,-1640,-5004}}},{{{1,27,43,0,20,31619,-8079}},{{2,-17,23,-0,1,-1640,-5004}},{{0,2,17,-0,22,-26906,1038}},{{0,1,12,0,-5,1446,-128}},{{0,2,17,-0,22,-26906,1038}},{{2,-17,23,-0,1,-1640,-5004}}}};
        struct S0 *l_880 = (void*)0;
        int i, j, k;
        for (p_21 = (-15); (p_21 >= 35); p_21 = safe_add_func_uint64_t_u_u(p_21, 5))
        { 
            if (g_334.f1)
                goto lbl_790;
        }
        if (p_22)
        { 
            uint32_t l_809 = 4294967295UL;
            int32_t l_812 = 4L;
            int32_t l_815 = 0x77270C67L;
            for (g_49.f3 = (-27); (g_49.f3 > 2); g_49.f3++)
            { 
                union U2 l_810 = {{0xE157B32FAEB6B1A9LL,0xF0D7299BL,0xB29F9199L,0x23L,2UL,0UL}};
                for (l_729 = (-30); (l_729 != 59); l_729 = safe_add_func_int8_t_s_s(l_729, 1))
                { 
                    int8_t l_797 = (-1L);
                    struct S1 l_800 = {1,15,28,0,12,-25065,-2340};
                    l_811 = (safe_lshift_func_int8_t_s_s((l_766 != &g_633), (l_797 || (safe_add_func_int64_t_s_s((l_800 , l_801), (p_20 > (safe_mod_func_uint32_t_u_u((((((safe_sub_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(((*g_424) , g_808), p_20)) || 255UL), l_809)) < 0x1AF6247E054F8757LL) , l_810) , 0xC8A37498C0DC40F6LL) | 0UL), l_810.f0.f4))))))));
                    g_816++;
                    return p_22;
                }
                if (l_815)
                    continue;
                if (l_809)
                    break;
            }
            if (l_809)
                continue;
        }
        else
        { 
            int32_t l_820 = 0xBBE748F3L;
            int32_t l_833[1];
            int32_t l_834 = 0xC7F21AC1L;
            const int64_t **l_862[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            union U2 l_872 = {{1L,-1L,0x5D612E43L,0x96L,0xE0L,1UL}};
            int64_t l_875 = (-4L);
            int i;
            for (i = 0; i < 1; i++)
                l_833[i] = (-1L);
            (*l_784) = &p_20;
            if ((l_811 = ((+g_64) == (p_21 != ((*l_680) = 0x34209B36E6D5F900LL)))))
            { 
                uint32_t ***l_825[7][1];
                int16_t l_837 = (-1L);
                struct S1 l_854 = {4,-27,23,0,29,26266,10622};
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_825[i][j] = &l_681;
                }
                l_820 ^= (&l_681 != &g_673);
                l_834 ^= (safe_mul_func_int8_t_s_s(p_19, (safe_add_func_uint8_t_u_u((l_825[1][0] != &g_673), (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_833[0] = (l_830[1][4][0] , (g_831 == (void*)0))) != l_820), p_21)), 14))))));
                for (g_89 = 0; (g_89 == (-29)); g_89--)
                { 
                    uint16_t l_853 = 0xAB27L;
                    int32_t l_858 = 8L;
                    const int64_t ***l_861 = (void*)0;
                    l_858 = ((((l_837 != ((((safe_sub_func_uint16_t_u_u((((*g_13) = ((((safe_div_func_uint64_t_u_u((((safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_uint64_t_u(0UL)) , (safe_lshift_func_uint16_t_u_s(l_830[1][4][0].f6, 15))), (safe_lshift_func_int16_t_s_s(l_853, ((p_19 = 9UL) , (((l_854 , (safe_rshift_func_uint16_t_u_u(g_857[0], g_510.f2))) | p_22) && p_21)))))) > p_20), l_853)), l_854.f2)) || 0UL) && g_367), p_21)) , 2L) , l_820) == 0x9C8084A7L)) != l_814), (**l_784))) , p_20) < 8L) && p_22)) | l_854.f1) <= (**l_784)) < l_830[1][4][0].f3);
                    l_833[0] ^= ((&g_511[0][0][1] == (l_862[4] = g_859)) || 3UL);
                }
            }
            else
            { 
                return (*g_13);
            }
            (*l_784) = &p_20;
            for (l_820 = (-12); (l_820 == (-10)); l_820 = safe_add_func_uint64_t_u_u(l_820, 1))
            { 
                uint16_t l_869 = 65535UL;
                uint32_t l_876 = 0xF22C5B57L;
                struct S0 **l_879 = &l_878[1][1];
                union U3 ***l_881 = (void*)0;
                union U3 ***l_882 = &l_667;
                union U2 *l_885 = (void*)0;
                int32_t l_886 = (-6L);
                for (g_60 = 0; (g_60 <= 5); g_60 = safe_add_func_int32_t_s_s(g_60, 4))
                { 
                    return p_22;
                }
                for (l_814 = 17; (l_814 > (-29)); --l_814)
                { 
                    ++l_869;
                    l_833[0] ^= p_22;
                    l_830[1][4][0].f1 = (((p_22 >= ((((((((void*)0 == &g_94[2][4]) < (l_872 , p_20)) & ((((l_830[1][4][0].f2 <= ((*l_680) = (safe_mod_func_uint32_t_u_u((l_875 == p_19), p_20)))) , 0xE93C18F0DCB21233LL) | p_19) , l_876)) || 0x86CFL) > p_21) ^ g_175) , g_877)) == p_19) >= 0L);
                    if (p_20)
                        break;
                }
                l_880 = ((*l_879) = l_878[1][1]);
                if ((65535UL >= (((*l_882) = &g_94[2][0]) != &g_94[2][0])))
                { 
                    if (p_22)
                        break;
                }
                else
                { 
                    uint8_t *l_895 = (void*)0;
                    uint8_t *l_896 = &g_49.f0.f4;
                    uint8_t *l_897 = &g_80;
                    l_830[1][4][0].f6 &= 0L;
                    l_886 = ((safe_sub_func_uint32_t_u_u(((void*)0 != l_885), (-5L))) ^ p_21);
                    if (p_22)
                        break;
                    l_830[1][4][0].f4 |= ((p_20 == (safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s((l_872 , ((safe_mod_func_uint8_t_u_u((p_21 | ((**l_784) == (safe_div_func_int64_t_s_s((((**g_859) && l_876) == ((((*l_897)--) <= (0xA565D416L ^ 1L)) && 0xAD1E9EC6L)), g_88)))), 0x09L)) , 0x28L)), 0x33L)), p_20))) <= 0x8BACL);
                    if (l_886)
                        continue;
                }
                if (l_872.f0.f4)
                    break;
            }
        }
    }
    return (*g_13);
}



static union U3 * func_24(uint64_t  p_25)
{ 
    int16_t *l_114 = &g_88;
    int32_t l_117 = 0x2B9B809EL;
    int64_t *l_118 = (void*)0;
    int64_t *l_119[6][6];
    int32_t l_120 = 0x83291AC2L;
    uint8_t *l_121[7];
    int32_t l_122 = 0L;
    struct S0 l_123 = {0x4A59180C45E7516BLL,5L,-8L,0x3EL,5UL,5UL};
    union U3 *l_139 = &g_95;
    const struct S1 l_243 = {4,23,6,-0,-9,17043,-6098};
    int32_t l_297 = 1L;
    int32_t l_299 = 1L;
    int32_t l_300 = (-1L);
    int32_t l_303 = (-1L);
    int32_t l_306[3];
    int32_t l_308 = (-10L);
    uint32_t l_311[5];
    struct S1 *l_333 = &g_334;
    uint32_t *l_342 = &g_91;
    const uint32_t *l_366 = &g_367;
    uint32_t l_464 = 0xF586F801L;
    int32_t *l_475 = &g_64;
    int64_t *l_507 = &l_123.f0;
    uint8_t l_513 = 247UL;
    uint32_t l_556 = 0xC232CA2AL;
    int64_t l_618[2];
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
            l_119[i][j] = &g_95.f2;
    }
    for (i = 0; i < 7; i++)
        l_121[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_306[i] = 0x77C40B2AL;
    for (i = 0; i < 5; i++)
        l_311[i] = 6UL;
    for (i = 0; i < 2; i++)
        l_618[i] = 0L;
    if ((((void*)0 != l_114) >= (l_122 ^= (g_64 ^ (((((safe_sub_func_int16_t_s_s(g_58, ((l_117 && (l_117 & (((l_120 = (((p_25 && l_117) && p_25) && l_117)) > 0x299F8D79D57AA8C2LL) <= p_25))) | 0x34DD4F9EB425E417LL))) , p_25) == l_117) ^ g_95.f0) < l_117)))))
    { 
        uint32_t l_124 = 0x1ADA0F0CL;
        struct S1 l_138[4] = {{0,-6,0,-0,0,16769,-2387},{0,-6,0,-0,0,16769,-2387},{0,-6,0,-0,0,16769,-2387},{0,-6,0,-0,0,16769,-2387}};
        int32_t *l_170[4][4][4] = {{{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79}},{{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79}},{{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79}},{{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79}}};
        int32_t l_192[2][4][2] = {{{1L,1L},{0x7E0EC33EL,1L},{1L,0x7E0EC33EL},{1L,1L}},{{0x7E0EC33EL,1L},{1L,0x7E0EC33EL},{1L,1L},{0x7E0EC33EL,1L}}};
        uint16_t *l_215 = (void*)0;
        uint64_t *l_287 = &g_164;
        int16_t l_304[7];
        uint64_t l_314 = 0UL;
        int64_t l_382 = 0xD26710AEF6A1A9C6LL;
        int32_t l_383 = (-6L);
        const uint32_t *l_393[7] = {&g_58,&g_91,&g_91,&g_58,&g_91,&g_91,&g_58};
        int16_t l_396 = 0x4777L;
        union U3 l_412 = {0x3CDD0013L};
        uint8_t *l_500[3][5] = {{&l_123.f4,&l_123.f4,&l_123.f4,&l_123.f4,&l_123.f4},{&g_80,&g_80,&g_80,&g_80,&g_80},{&l_123.f4,&l_123.f4,&l_123.f4,&l_123.f4,&l_123.f4}};
        uint32_t l_501 = 0UL;
        int64_t **l_512 = &l_118;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_304[i] = (-3L);
        if ((g_49.f0.f4 >= (l_123 , l_124)))
        { 
            int16_t *l_142[3][5] = {{(void*)0,(void*)0,(void*)0,&g_95.f3,&g_95.f3},{(void*)0,(void*)0,(void*)0,&g_95.f3,&g_95.f3},{(void*)0,(void*)0,(void*)0,&g_95.f3,&g_95.f3}};
            int32_t l_145 = 1L;
            union U3 ** const l_153 = &g_94[1][5];
            int64_t l_173 = (-1L);
            struct S1 *l_197 = &g_198;
            int i, j;
            for (l_123.f4 = 0; (l_123.f4 <= 5); l_123.f4 += 1)
            { 
                int32_t l_141[2];
                int16_t * const l_144 = &g_95.f3;
                int16_t l_146 = 0L;
                uint64_t *l_155 = &g_29;
                uint64_t *l_156 = (void*)0;
                uint64_t *l_157 = (void*)0;
                uint64_t *l_158 = (void*)0;
                uint64_t *l_159 = &g_49.f3;
                uint64_t *l_160 = &g_49.f3;
                uint64_t *l_161 = (void*)0;
                uint64_t *l_162 = (void*)0;
                uint64_t *l_163[4][3] = {{(void*)0,&g_49.f3,(void*)0},{(void*)0,&g_49.f3,(void*)0},{(void*)0,&g_49.f3,(void*)0},{(void*)0,&g_49.f3,(void*)0}};
                int8_t *l_165 = &g_166;
                int32_t *l_168 = (void*)0;
                int32_t **l_167[1][4][3] = {{{&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168},{&l_168,&l_168,&l_168}}};
                union U3 *l_180 = &g_95;
                uint64_t l_190 = 18446744073709551606UL;
                uint8_t l_191 = 3UL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_141[i] = 0x72F705CCL;
                g_89 &= (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((+((((safe_div_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u((l_138[3] , ((void*)0 == l_139)), (l_123.f3 == ((safe_unary_minus_func_uint8_t_u(l_141[1])) && ((*l_139) , ((((l_145 = ((g_143 = l_142[2][2]) != l_144)) || p_25) ^ (*g_13)) , p_25)))))) || p_25) == 0L) && 0xA9CCBCD5L), 0x322DFB8AL)) != 1L) , 7UL) >= 1UL)), l_138[3].f4)) >= 18446744073709551615UL), 0x120889FCL)), p_25));
                g_169[4][5][1] = (((*l_165) = ((*g_13) |= ((l_117 &= ((*l_155) = (l_146 | ((safe_mod_func_int32_t_s_s((((-5L) && l_138[3].f3) || (safe_div_func_uint8_t_u_u((((0x0E78EEBDL >= ((-2L) > (safe_div_func_uint8_t_u_u((l_153 == (g_154 , (void*)0)), p_25)))) & g_154.f5) , l_124), p_25))), p_25)) , 1L)))) < p_25))) , (void*)0);
                (*l_153) = func_35(func_39((l_170[2][2][3] == (g_154 , &g_79)), &g_164, p_25), (p_25 <= g_58), g_154.f6);
                for (g_49.f3 = 0; (g_49.f3 <= 5); g_49.f3 += 1)
                { 
                    uint16_t *l_171 = &g_83;
                    int32_t l_172 = 1L;
                    int32_t l_174 = 0L;
                    int32_t l_193[3][7][2] = {{{(-1L),0x6622A97DL},{0x387034F7L,(-6L)},{0x7762DA65L,(-1L)},{(-8L),(-1L)},{0x7762DA65L,(-6L)},{0x387034F7L,0x6622A97DL},{(-1L),1L}},{{0x33BC691BL,0x33BC691BL},{2L,0xCBF52318L},{(-6L),(-8L)},{0xF3AA05D0L,(-1L)},{0xCBF52318L,0xF3AA05D0L},{0x432ADD22L,0xBD277505L},{0x432ADD22L,0xF3AA05D0L}},{{0xCBF52318L,(-1L)},{0xF3AA05D0L,(-8L)},{(-6L),0xCBF52318L},{2L,0x33BC691BL},{0x33BC691BL,1L},{(-1L),0x6622A97DL},{0x387034F7L,(-6L)}}};
                    int32_t l_194 = (-6L);
                    struct S1 *l_196 = &g_154;
                    struct S1 **l_195[7][3] = {{&l_196,&l_196,(void*)0},{&l_196,(void*)0,(void*)0},{(void*)0,&l_196,(void*)0},{&l_196,&l_196,&l_196},{&l_196,(void*)0,(void*)0},{&l_196,&l_196,(void*)0},{&l_196,(void*)0,(void*)0}};
                    int i, j, k;
                    l_120 = (((*l_171) = l_145) > g_95.f3);
                    --g_175;
                    l_145 = ((l_194 &= ((safe_div_func_uint8_t_u_u((((g_87 ^= ((l_180 != ((*l_153) = &g_95)) | (l_193[1][0][1] &= ((safe_mul_func_uint16_t_u_u((((+(safe_sub_func_int8_t_s_s((g_49.f2 , (g_2 | (0x2CF825CBD8DA2AADLL != 18446744073709551615UL))), (((((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_190 | 0x20846C0F34640477LL), l_172)), l_191)) != 0x5E9E9086L) || l_174) > l_192[0][1][1]) ^ l_117)))) , g_49.f1) || g_49.f3), p_25)) > l_145)))) && 5L) < p_25), 0xFEL)) && l_193[1][3][0])) || g_29);
                    l_197 = &l_138[3];
                }
                for (g_49.f3 = 0; (g_49.f3 <= 5); g_49.f3 += 1)
                { 
                    return l_180;
                }
            }
            for (g_64 = (-17); (g_64 <= 8); ++g_64)
            { 
                for (g_166 = 0; (g_166 == 0); g_166++)
                { 
                    uint32_t l_208[1][2][3];
                    int32_t l_209 = 0x3495F283L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_208[i][j][k] = 0xA586F34CL;
                        }
                    }
                    l_145 &= ((safe_unary_minus_func_uint8_t_u(251UL)) , (((((safe_rshift_func_uint16_t_u_s(((4294967293UL >= (l_209 = ((g_154.f1 == (l_114 != l_114)) , l_208[0][1][2]))) <= (&p_25 == (void*)0)), l_208[0][1][2])) & 0L) == 0xF570L) <= l_208[0][1][2]) != 1L));
                }
            }
        }
        else
        { 
            union U3 *l_210 = &g_95;
            int32_t *l_213 = &l_192[0][1][1];
            int32_t l_219 = (-8L);
            int32_t l_276 = 0xF3BF3C09L;
            int32_t l_293 = 1L;
            int32_t l_298 = (-1L);
            int32_t l_302[4][5][5] = {{{0L,0xBA5FABDFL,(-1L),0x12EE13CEL,0x44D20F8EL},{(-1L),(-2L),0x2F78FB5FL,(-1L),0x2F78FB5FL},{0x44D20F8EL,0x44D20F8EL,(-9L),0L,0L},{(-1L),0L,2L,0x5464B650L,0x5464B650L},{0L,0xA2B2D58DL,0L,0xD11A3A0CL,(-1L)}},{{2L,0L,(-1L),0x5914214FL,0x24FDA9CDL},{(-9L),0x44D20F8EL,0x44D20F8EL,(-9L),0L},{0x2F78FB5FL,(-2L),(-1L),0x24FDA9CDL,0L},{(-1L),0xBA5FABDFL,0L,0xBA5FABDFL,(-1L)},{(-2L),0x5914214FL,2L,0x24FDA9CDL,0x6CEE686AL}},{{0x94C0A7CFL,0x12EE13CEL,(-9L),(-9L),0x12EE13CEL},{0x5464B650L,(-1L),0x2F78FB5FL,0x5914214FL,0x6CEE686AL},{0xBA5FABDFL,(-9L),(-1L),0xD11A3A0CL,(-1L)},{0x6CEE686AL,0x6CEE686AL,(-2L),0x5464B650L,0L},{0xBA5FABDFL,0L,0x94C0A7CFL,0L,0L}},{{0x5464B650L,(-3L),0x5464B650L,(-1L),0x24FDA9CDL},{0x94C0A7CFL,0L,0xBA5FABDFL,0x12EE13CEL,(-1L)},{(-2L),0x6CEE686AL,0x6CEE686AL,(-2L),0x5464B650L},{(-1L),(-9L),0xBA5FABDFL,(-1L),0L},{0x2F78FB5FL,(-1L),0x5464B650L,(-1L),0x2F78FB5FL}}};
            uint16_t l_371 = 0x800BL;
            union U3 *l_372 = &g_95;
            uint32_t l_384 = 0xEA0DF2E8L;
            uint32_t l_397 = 0UL;
            struct S1 l_427 = {4,-31,31,0,-29,7808,3695};
            int16_t *l_437 = &l_304[6];
            int i, j, k;
lbl_438:
            if ((l_210 == l_210))
            { 
                uint32_t l_221 = 0x01677435L;
                int32_t l_235 = 0L;
                int32_t l_236 = 0xEFE3EA39L;
                union U3 l_253 = {0x5DAA8CFCL};
                for (l_123.f5 = 11; (l_123.f5 > 12); l_123.f5++)
                { 
                    int32_t **l_214 = &l_170[2][2][3];
                    (*l_214) = l_213;
                    (*l_213) ^= ((void*)0 != l_215);
                    (*l_213) = (0UL & (*l_213));
                    l_120 ^= (l_123.f3 , p_25);
                    if (p_25)
                        continue;
                }
                for (p_25 = (-24); (p_25 != 14); p_25++)
                { 
                    int64_t l_218 = 1L;
                    int32_t l_220 = 0xF0AC8AB5L;
                    uint32_t *l_254 = &l_221;
                    uint64_t *l_255[3];
                    union U2 *l_256 = &g_49;
                    union U2 **l_257 = &l_256;
                    int32_t l_275 = 0x2856A77FL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_255[i] = &g_164;
                    ++l_221;
                    (*l_213) = (safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_25, 0x32L)), l_123.f1)), (safe_unary_minus_func_int8_t_s((safe_mod_func_uint8_t_u_u((g_175++), (+((safe_mul_func_int8_t_s_s(((g_90 ^ (&g_60 != &g_88)) && ((safe_unary_minus_func_int8_t_s(0xADL)) <= l_123.f5)), l_218)) >= 0xE4922329L)))))))), g_154.f4));
                    l_236 = (((l_235 ^= ((p_25 != ((l_170[2][2][3] != (((l_243 , ((((safe_add_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((!(safe_sub_func_uint64_t_u_u((((&g_80 == l_121[1]) != (((safe_div_func_int32_t_s_s((l_219 |= ((*l_213) &= p_25)), ((*l_254) = (((*l_210) = l_253) , 4294967287UL)))) < 18446744073709551608UL) ^ 1L)) < l_236), g_3))), g_154.f0)) & g_154.f3) & 0xC9ECL), p_25)) | l_253.f0) == p_25) == 1L)) < 0xF6654D6EL) , (void*)0)) != 252UL)) ^ 0UL)) <= 0x6F7B0DDA55B130C0LL) && p_25);
                    (*l_257) = l_256;
                    l_236 |= (safe_div_func_int8_t_s_s((((p_25 , (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_275 |= ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(2L, (((p_25 > (*l_213)) | (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((+(l_220 = 0x3FL)) || (&g_60 == (p_25 , &g_88))), l_120)) > g_154.f2), 0x0FL))) , p_25))), g_49.f0.f4)) , 0x2F19D240A8BBBD35LL)) != g_198.f4), p_25)), p_25)), g_154.f1))) != g_198.f5) <= p_25), l_276));
                }
            }
            else
            { 
                uint64_t l_288 = 0x2B1F8A0E35A3C055LL;
                int32_t l_289 = 0xEF30CB72L;
                int32_t l_290[3];
                const uint32_t l_349 = 3UL;
                uint32_t *l_394 = &g_58;
                int i;
                for (i = 0; i < 3; i++)
                    l_290[i] = (-1L);
                for (g_164 = 0; (g_164 > 21); g_164++)
                { 
                    int64_t l_281 = 0x25E59AA8C128384ALL;
                    int32_t l_291 = 0xACD234F3L;
                    int32_t l_292 = 0x5AEE1A6EL;
                    int32_t l_294 = 4L;
                    int32_t l_295 = (-4L);
                    int32_t l_296 = (-1L);
                    int32_t l_301 = (-1L);
                    int32_t l_305 = 0xA9E8DBBFL;
                    int32_t l_307 = 0xA62F74E0L;
                    int32_t l_309 = 1L;
                    int32_t l_310 = 0x34512622L;
                    l_290[2] &= (safe_mul_func_uint8_t_u_u((((((0UL && ((0x8BEBL >= l_281) , (+1L))) , (l_288 = (((g_154 , (safe_sub_func_int64_t_s_s((func_31(&g_164, func_35(func_39((safe_mul_func_int8_t_s_s(p_25, l_281)), l_287, l_123.f4), g_198.f0, p_25)) , 2L), 0x20DD8B0E59E16A0ELL))) > p_25) , (-10L)))) <= p_25) ^ l_289) <= p_25), 248UL));
                    l_311[3]++;
                    --l_314;
                }
                if (l_290[2])
                { 
                    struct S1 l_326 = {4,16,28,0,-9,-16053,-7922};
                    (*l_213) = ((((*l_213) & (safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint8_t_u_s(((*l_213) && (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((l_326 , (6UL || (safe_rshift_func_int8_t_s_s(((void*)0 == &g_94[0][5]), 1)))) > l_326.f2) ^ p_25), 0L)), 2L)), p_25))), 6))))) > l_326.f2) < g_154.f5);
                }
                else
                { 
                    const struct S1 **l_329 = (void*)0;
                    struct S1 **l_330 = (void*)0;
                    struct S1 *l_332 = &l_138[3];
                    struct S1 **l_331[3];
                    struct S0 l_354 = {0x050EAE0AA558F39ALL,1L,0xA151212FL,0UL,0xACL,65534UL};
                    uint32_t *l_364 = (void*)0;
                    uint32_t **l_365 = &l_364;
                    const uint32_t *l_369 = &g_367;
                    const uint32_t **l_368[5][7] = {{&l_369,&l_369,&l_369,&l_369,&l_369,&l_369,&l_369},{&l_369,&l_369,&l_369,&l_369,&l_369,&l_369,&l_369},{&l_369,&l_369,&l_369,&l_369,&l_369,&l_369,&l_369},{&l_369,&l_369,&l_369,&l_369,&l_369,&l_369,&l_369},{&l_369,&l_369,&l_369,&l_369,&l_369,&l_369,&l_369}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_331[i] = &l_332;
                    (*l_213) &= (-1L);
                    if (l_243.f4)
                        goto lbl_335;
lbl_335:
                    l_333 = (void*)0;
                    (*l_213) = (safe_mul_func_uint16_t_u_u(65535UL, (safe_div_func_int64_t_s_s((((*l_342) = (safe_add_func_int8_t_s_s(l_123.f0, ((*l_213) <= ((void*)0 == l_342))))) , p_25), ((safe_rshift_func_int8_t_s_u(((*g_13) ^= (*l_213)), p_25)) || 0xF4L)))));
                    l_371 |= (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((*g_143) = ((p_25 & l_349) > (((g_14 > (safe_rshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((l_354 , (safe_mul_func_uint8_t_u_u((*l_213), (((safe_div_func_int16_t_s_s((!(safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(((((((*l_365) = l_364) != (g_370 = (l_366 = &g_91))) != p_25) && 0x04L) != p_25), g_95.f0)), 4294967294UL))), g_49.f0.f1)) > p_25) > (-1L))))), l_354.f1)), p_25))) != (-1L)) & 0xEDC58E0FB35F5CADLL))), 0x6C90L)), (-5L)));
                    return l_372;
                }
                for (g_49.f0.f0 = 0; (g_49.f0.f0 <= 24); g_49.f0.f0++)
                { 
                    int16_t l_375 = 1L;
                    int32_t l_376 = 0x96F8BF46L;
                    int32_t l_377 = (-5L);
                    int32_t l_378 = 0xF8EBE1B8L;
                    int32_t l_379 = 1L;
                    int32_t l_380 = 0xE3F1882AL;
                    int32_t l_381[4];
                    uint16_t *l_395[1][4] = {{&g_83,&g_83,&g_83,&g_83}};
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_381[i] = 0xD82E4F69L;
                    l_384--;
                    l_219 = ((((&g_58 != (void*)0) ^ p_25) || p_25) || (((g_80 , (safe_mod_func_uint16_t_u_u(((*l_213) = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_393[3] == l_394), 7)), g_49.f0.f1))), 0xBFFFL))) || p_25) < g_64));
                }
            }
            l_397--;
            for (l_123.f0 = 0; (l_123.f0 <= 1); l_123.f0 += 1)
            { 
                uint32_t l_404 = 1UL;
                int32_t l_405 = 0L;
                int32_t *l_426 = &l_120;
                int16_t *l_436 = &l_412.f3;
                for (g_90 = 0; (g_90 <= 1); g_90 += 1)
                { 
                    l_405 = ((((p_25 >= g_49.f0.f2) != ((l_404 |= ((((+(g_58 && (l_306[0] = 0xCBE2AC29L))) ^ 0x2A1C68D5L) ^ (~(g_80 , ((0x0DC1L || (*g_143)) && 0xF967L)))) <= p_25)) >= 18446744073709551612UL)) , p_25) != p_25);
                    (*l_213) = ((safe_unary_minus_func_int8_t_s(l_404)) == (func_26(l_404) , (safe_sub_func_uint8_t_u_u((*l_213), ((+(((((safe_sub_func_int8_t_s_s((l_412 , (+(7L || ((((-2L) ^ 0xE110L) > g_87) <= 0x33L)))), p_25)) || g_175) ^ p_25) || 0x5EL) >= p_25)) >= l_404)))));
                    (*l_213) &= ((safe_lshift_func_int16_t_s_s(0x745CL, 10)) ^ ((*l_287) = 0x2307BBEE2798C22ALL));
                }
                for (g_166 = 0; (g_166 <= 1); g_166 += 1)
                { 
                    int8_t l_420[6] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
                    struct S1 **l_422 = &l_333;
                    struct S1 ***l_421 = &l_422;
                    int i;
                    (*l_213) |= (g_416 != ((safe_rshift_func_uint8_t_u_s((l_420[2] >= p_25), 2)) , ((*l_421) = &g_417[4][0])));
                }
                (*l_213) |= (&l_138[3] == (g_49 , (*g_416)));
                if (((*l_213) = (((g_423 = g_423) == (void*)0) | g_334.f1)))
                { 
                    int32_t **l_425 = (void*)0;
                    l_426 = &l_117;
                    if (l_243.f2)
                        continue;
                }
                else
                { 
                    if ((*l_213))
                        break;
                }
                (*l_213) &= (l_427 , (safe_div_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((!(p_25 , (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((*l_426), (((l_436 != l_437) < g_367) >= l_243.f1))), (*g_13))))))), (*g_143))));
                for (g_175 = 0; (g_175 <= 1); g_175 += 1)
                { 
                    uint32_t l_457 = 0x1342B040L;
                    int32_t *l_458 = &g_79;
                    int32_t **l_459 = &l_170[0][3][1];
                    if (g_367)
                        goto lbl_438;
                    (*l_426) &= (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((*l_436) &= (safe_add_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((0xE1886215CF8234F8LL > (g_154.f0 >= ((safe_sub_func_int32_t_s_s(((*l_213) = p_25), (safe_div_func_uint32_t_u_u(4294967286UL, (-6L))))) <= (safe_sub_func_uint16_t_u_u(g_49.f0.f1, (safe_mul_func_int16_t_s_s((g_80 != l_123.f0), p_25))))))), p_25)) , l_457) != 0x27925623L), (*g_143)))), 5)), 2));
                    (*l_459) = l_458;
                    (*l_458) |= p_25;
                }
            }
            if (((*l_213) >= ((**g_416) , ((*l_342) = ((safe_lshift_func_uint16_t_u_u(0UL, (&g_169[4][2][1] == (void*)0))) >= (g_95.f0 <= ((safe_add_func_int8_t_s_s(((l_120 , 0xDDL) < 0x0FL), (*l_213))) == l_464)))))))
            { 
                int32_t *l_474[3][5] = {{&l_308,&g_64,&l_308,&g_64,&l_308},{&l_308,&l_308,&l_308,&l_308,&l_308},{&l_308,&g_64,&l_308,&g_64,&l_308}};
                int32_t **l_473[7][1] = {{(void*)0},{&l_474[2][1]},{(void*)0},{&l_474[2][1]},{(void*)0},{&l_474[2][1]},{(void*)0}};
                int32_t l_479 = 0L;
                int i, j;
                for (g_49.f2 = 0; g_49.f2 < 5; g_49.f2 += 1)
                {
                    for (g_60 = 0; g_60 < 6; g_60 += 1)
                    {
                        for (g_80 = 0; g_80 < 2; g_80 += 1)
                        {
                            g_169[g_49.f2][g_60][g_80] = &l_300;
                        }
                    }
                }
                if ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_div_func_uint64_t_u_u(((*g_143) != (safe_rshift_func_uint8_t_u_s(((g_95.f3 = ((l_213 != (l_475 = l_170[1][2][2])) && ((l_306[0] = (1L || g_334.f2)) > p_25))) || (safe_sub_func_int16_t_s_s(((+p_25) < (-1L)), 0xA7E8L))), p_25))), g_91)) != l_464) && l_479), 14)), (*g_143))))
                { 
                    return &g_95;
                }
                else
                { 
                    uint32_t l_480[5][2] = {{18446744073709551609UL,0xA14A4196L},{18446744073709551609UL,0xA14A4196L},{18446744073709551609UL,0xA14A4196L},{18446744073709551609UL,0xA14A4196L},{18446744073709551609UL,0xA14A4196L}};
                    int32_t l_483 = 0x2B9CF852L;
                    int i, j;
                    l_480[0][0]++;
                    l_483 &= 0L;
                    (*l_213) ^= p_25;
                    return &g_95;
                }
            }
            else
            { 
                int32_t **l_484 = (void*)0;
                int32_t **l_485 = &g_169[4][5][1];
                const uint8_t *l_497 = &l_123.f4;
                const uint8_t **l_498 = (void*)0;
                const uint8_t **l_499 = &l_497;
                (*l_485) = &l_302[3][2][0];
                (*l_213) = p_25;
                (*l_213) = ((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_25, ((0x59741C425DD13764LL | (safe_lshift_func_uint8_t_u_s((g_80 = ((p_25 <= ((!((safe_mod_func_uint16_t_u_u(((((((safe_mul_func_int16_t_s_s(((((*l_499) = l_497) == l_500[0][1]) < (((&l_382 == (void*)0) , g_198.f5) , g_198.f1)), p_25)) , l_501) >= g_80) < l_123.f4) < p_25) , p_25), 0x0898L)) == 0x1AAEL)) , g_64)) & g_164)), 7))) >= (-5L)))), g_79)) , p_25);
                for (l_371 = 0; (l_371 >= 40); ++l_371)
                { 
                    return l_139;
                }
            }
        }
        l_299 &= ((l_300 = (l_306[0] = ((((((safe_lshift_func_uint16_t_u_s((+((((l_507 == ((*l_512) = (g_511[0][4][2] = ((l_243.f2 <= ((&l_412 != ((((*l_507) = (-1L)) , (safe_mod_func_int32_t_s_s(l_297, (g_510 , 0xEE852844L)))) , &l_412)) == l_308)) , (void*)0)))) , &l_396) == &g_60) <= (*g_13))), p_25)) , (void*)0) != l_215) > g_164) != l_513) & l_311[3]))) || 0xB00121A3L);
    }
    else
    { 
        uint8_t l_521 = 255UL;
        uint32_t **l_531 = &l_342;
        int32_t l_558 = 8L;
        int32_t **l_579 = &l_475;
        union U3 *l_581 = &g_95;
        const union U2 l_638[4] = {{{7L,0xBE76B8D5L,0x7DA0A0AAL,0xB7L,7UL,0x8D41L}},{{7L,0xBE76B8D5L,0x7DA0A0AAL,0xB7L,7UL,0x8D41L}},{{7L,0xBE76B8D5L,0x7DA0A0AAL,0xB7L,7UL,0x8D41L}},{{7L,0xBE76B8D5L,0x7DA0A0AAL,0xB7L,7UL,0x8D41L}}};
        int32_t l_654 = (-6L);
        int32_t l_655 = 0L;
        int32_t l_656 = (-3L);
        int32_t l_657[5][1];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_657[i][j] = 0x537EA634L;
        }
        for (g_49.f2 = 0; (g_49.f2 <= 1); g_49.f2 += 1)
        { 
            int32_t l_514 = 5L;
            int32_t *l_530 = &l_306[1];
            int32_t ***l_580 = &l_579;
            int8_t *l_625 = &g_14;
            struct S1 l_641 = {0,15,37,-0,29,6360,-9611};
            int32_t l_658[4] = {1L,1L,1L,1L};
            int i;
            if ((g_510.f3 <= ((*g_13) = (*g_13))))
            { 
                uint16_t l_519 = 3UL;
                uint32_t **l_532 = &l_342;
                int32_t l_537 = 0x6AFFB6BBL;
                if ((p_25 & ((**g_423) , l_514)))
                { 
                    uint16_t *l_520[3];
                    int32_t *l_529 = &l_120;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_520[i] = &g_83;
                    (*l_529) ^= (((*l_114) = (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((7L <= p_25), l_519)), (--l_521)))) , ((safe_mul_func_uint16_t_u_u((((0xA0L & (l_243.f5 | 18446744073709551615UL)) <= (+(safe_sub_func_int8_t_s_s((*g_13), l_521)))) == p_25), 0x38D2L)) < l_123.f3));
                }
                else
                { 
                    uint16_t *l_535 = (void*)0;
                    uint16_t *l_536[2][6][1] = {{{&l_123.f5},{&l_519},{&l_519},{&l_519},{&l_519},{&l_123.f5}},{{&l_519},{&l_519},{&l_519},{&l_519},{&l_123.f5},{&l_519}}};
                    int i, j, k;
                    l_530 = (l_519 , &g_90);
                    (*l_530) = (((l_531 == (p_25 , l_532)) < ((l_537 = 0xC44AL) | (safe_mul_func_uint16_t_u_u(l_243.f4, (!0x14A3L))))) >= (!(safe_mul_func_int8_t_s_s(((*g_13) = p_25), l_519))));
                    return &g_95;
                }
                if (p_25)
                    continue;
                (*l_530) = (((safe_unary_minus_func_int32_t_s((safe_unary_minus_func_uint8_t_u(0xDCL)))) & l_537) > ((((void*)0 == &l_139) & (((0x7473L == (safe_unary_minus_func_uint8_t_u(g_95.f3))) | (safe_sub_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((~((((safe_unary_minus_func_int8_t_s(l_243.f6)) != l_513) <= p_25) | 0xDBB1L)), 0x707AL)), 2UL))) & (*g_143))) > l_537));
                for (l_519 = 0; l_519 < 5; l_519 += 1)
                {
                    l_311[l_519] = 18446744073709551615UL;
                }
            }
            else
            { 
                union U2 l_553[1][3] = {{{{7L,1L,1L,255UL,0xA0L,65530UL}},{{7L,1L,1L,255UL,0xA0L,65530UL}},{{7L,1L,1L,255UL,0xA0L,65530UL}}}};
                int32_t *l_557[4][3][7] = {{{(void*)0,&g_90,&g_90,&g_89,(void*)0,(void*)0,&l_297},{&g_3,(void*)0,&l_299,&l_306[0],(void*)0,&l_300,(void*)0},{&l_306[0],(void*)0,&l_299,&g_89,&l_299,(void*)0,&l_306[0]}},{{&l_306[0],(void*)0,&g_90,&l_306[0],(void*)0,(void*)0,(void*)0},{&g_3,&g_90,&l_120,&l_306[0],&l_299,&l_300,&l_297},{(void*)0,&g_90,&g_90,&g_89,(void*)0,(void*)0,&l_297}},{{&g_3,(void*)0,&l_299,&l_306[0],(void*)0,&l_300,(void*)0},{&l_306[0],(void*)0,&l_299,&g_89,&l_299,(void*)0,&l_306[0]},{&l_306[0],(void*)0,&g_90,&l_306[0],(void*)0,(void*)0,(void*)0}},{{&g_3,&g_90,&l_120,&l_306[0],&l_299,&l_300,&l_297},{(void*)0,&g_90,&g_90,&g_89,(void*)0,(void*)0,&l_297},{&g_3,(void*)0,&l_299,&l_306[0],(void*)0,&l_300,(void*)0}}};
                int i, j, k;
                if (((*l_530) = (l_558 |= (l_553[0][1] , (safe_div_func_int16_t_s_s((l_553[0][1].f0.f0 < (((l_556 == (((*l_530) != 0xF448059CL) > (((l_557[0][1][3] != &g_89) == g_91) , l_521))) & p_25) || (*g_13))), (*l_530)))))))
                { 
                    int32_t **l_559 = &l_557[3][1][0];
                    (*l_559) = &g_90;
                    if (p_25)
                        continue;
                    (*l_530) = (safe_sub_func_uint64_t_u_u(g_64, 0L));
                }
                else
                { 
                    return &g_95;
                }
                if (p_25)
                { 
                    int32_t **l_562 = (void*)0;
                    int32_t **l_563 = &l_530;
                    (*l_563) = &g_79;
                }
                else
                { 
                    uint8_t l_578 = 255UL;
                    l_300 |= ((safe_mul_func_uint8_t_u_u(((((0x8EL ^ 0L) < (safe_div_func_int8_t_s_s(((1UL || (safe_rshift_func_int8_t_s_s((*g_13), 0))) || ((safe_add_func_uint64_t_u_u(18446744073709551613UL, (((g_91 == ((safe_add_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((*g_13) ^ (*l_530)), 0xADL)), 2)) || l_521), (-9L))) && g_164)) && p_25) == 0x41ECD508C4F34E57LL))) || 0UL)), l_578))) != g_334.f1) , p_25), 249UL)) , (*l_530));
                }
                l_558 = ((*l_530) &= p_25);
            }
            if ((&l_475 == ((*l_580) = l_579)))
            { 
                uint32_t l_582 = 5UL;
                int64_t * const *l_592 = (void*)0;
                int64_t * const **l_591 = &l_592;
                int32_t l_595 = 0xFED5E37AL;
                uint32_t l_619 = 8UL;
                const union U2 l_623 = {{-4L,0xD19D5194L,3L,255UL,0x86L,0UL}};
                uint64_t *l_624[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_624[i] = &g_164;
                for (l_464 = 0; (l_464 <= 4); l_464 += 1)
                { 
                    int i;
                    (*l_530) ^= l_311[l_464];
                    return l_581;
                }
                if (l_582)
                    break;
                l_595 = (safe_sub_func_uint16_t_u_u((0x4554638D5F15072ALL <= (safe_div_func_int64_t_s_s((p_25 , (((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0x11L, (((*l_591) = &g_511[0][3][1]) == (void*)0))), (safe_div_func_uint32_t_u_u(l_123.f2, p_25)))) || 0xA9L) & 0x3ABF2C88L)), 0x3881D815180B1002LL))), p_25));
                for (g_88 = 0; (g_88 <= 1); g_88 += 1)
                { 
                    int32_t **l_596 = &l_530;
                    (*l_596) = &l_514;
                }
                for (g_87 = 0; (g_87 >= 0); g_87 -= 1)
                { 
                    uint64_t *l_608 = &g_29;
                    uint64_t *l_609 = &g_164;
                    union U2 l_616 = {{-2L,4L,0xCBEC8390L,0xB6L,252UL,65530UL}};
                    int32_t ** const l_617 = &l_475;
                    (*l_530) = ((g_58 < p_25) & ((safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u((--(*l_342)), (safe_add_func_uint64_t_u_u(((!p_25) , ((*l_609) = ((*l_608) = 0x363895343C7AA64DLL))), ((((!((void*)0 == &g_370)) , ((~(safe_rshift_func_int16_t_s_u((((((safe_add_func_int16_t_s_s((0x5389L & g_154.f2), p_25)) ^ (-1L)) , l_616) , (void*)0) == l_617), 6))) & p_25)) ^ g_79) == l_618[0]))))), 0xDF0D46D24C77493BLL)) <= l_619));
                    (*l_530) = (safe_mul_func_int8_t_s_s((l_521 <= ((+4294967295UL) > ((l_623 , ((func_31(l_624[2], func_35(l_625, (safe_lshift_func_int8_t_s_s(((1UL & ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((((*g_13) = (g_90 , l_616.f0.f1)) & l_521), g_334.f6)), l_582)) <= l_582)) == l_616.f0.f1), l_616.f0.f3)), l_311[0])) , (*l_530)) ^ l_623.f0.f5)) > 2L))), g_64));
                }
            }
            else
            { 
                const uint8_t *l_635 = &l_123.f3;
                const uint8_t **l_634 = &l_635;
                int32_t *l_636 = (void*)0;
                int32_t *l_637 = &g_90;
                uint64_t l_644 = 0xBD6D32BCA0A44360LL;
                int32_t l_649 = 0x09C8C2B9L;
                int32_t l_650 = 0xE41E18B0L;
                int32_t l_651 = (-1L);
                int32_t l_652 = (-1L);
                int32_t l_653 = 0x94541482L;
                int32_t l_659 = 1L;
                int32_t l_660[4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_660[i][j] = 0x94E5626EL;
                }
                l_300 |= ((*l_637) = ((*l_530) = ((l_521 , g_632[4][3]) != l_634)));
                if (((*l_637) = (-5L)))
                { 
                    int32_t *l_645 = &l_122;
                    int32_t *l_646 = &l_514;
                    int32_t *l_647 = (void*)0;
                    int32_t *l_648[1][6] = {{&l_306[1],&l_306[1],&l_306[1],&l_306[1],&l_306[1],&l_306[1]}};
                    uint32_t l_662 = 0xBDADF46EL;
                    int i, j;
                    (*l_530) ^= ((p_25 , ((*l_637) & (l_638[0] , (safe_rshift_func_uint8_t_u_u(l_243.f6, ((l_641 , (((safe_div_func_uint32_t_u_u(((0x21721A93L | (*l_637)) < 6L), p_25)) == p_25) < l_644)) <= 0x03C6L)))))) != g_334.f1);
                    l_662++;
                }
                else
                { 
                    union U3 *l_665 = (void*)0;
                    return l_665;
                }
            }
            for (l_303 = 0; (l_303 <= 0); l_303 += 1)
            { 
                int32_t **l_666 = &g_169[4][5][1];
                (*l_666) = &l_658[1];
                for (g_166 = 0; (g_166 <= 1); g_166 += 1)
                { 
                    int i, j, k;
                    if ((*l_530))
                        break;
                    g_169[(l_303 + 3)][g_166][g_166] = &g_90;
                    (*l_530) &= l_243.f5;
                }
            }
        }
    }
    return l_139;
}



static struct S0  func_26(int32_t  p_27)
{ 
    uint64_t l_30[5][4] = {{0UL,0UL,0x8CDAB0B826FBC79ALL,0x8CDAB0B826FBC79ALL},{0UL,0UL,0x8CDAB0B826FBC79ALL,0x8CDAB0B826FBC79ALL},{0UL,0UL,0x8CDAB0B826FBC79ALL,0x8CDAB0B826FBC79ALL},{0UL,0UL,0x8CDAB0B826FBC79ALL,0x8CDAB0B826FBC79ALL},{0UL,0UL,0x8CDAB0B826FBC79ALL,0x8CDAB0B826FBC79ALL}};
    union U2 l_56 = {{-5L,0x3D53AF4BL,8L,0x48L,0UL,0xFB79L}};
    union U3 *l_108[2][5] = {{&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95}};
    int32_t l_109[7][6] = {{0L,0x3AA6B801L,0x95AB7803L,0x95AB7803L,0x3AA6B801L,0L},{0xE43BDDC6L,0L,0x95AB7803L,0L,0xE43BDDC6L,0xE43BDDC6L},{0L,0L,0L,0L,0x3AA6B801L,0L},{0L,0x3AA6B801L,0L,0L,0L,0L},{0xE43BDDC6L,0xE43BDDC6L,0L,0x95AB7803L,0L,0xE43BDDC6L},{0L,0x3AA6B801L,0x95AB7803L,0x95AB7803L,0x3AA6B801L,0L},{0xE43BDDC6L,0L,0x95AB7803L,0L,0xE43BDDC6L,0xE43BDDC6L}};
    int32_t *l_112 = &l_109[4][2];
    int32_t **l_111 = &l_112;
    int i, j;
    for (p_27 = 3; (p_27 >= 0); p_27 -= 1)
    { 
        union U2 l_34 = {{0x34D7AEB8F83F3A8ALL,0xD584D75FL,0L,2UL,6UL,0x5AD8L}};
        if (l_30[0][0])
            break;
        for (g_29 = 0; (g_29 <= 3); g_29 += 1)
        { 
            uint32_t *l_57 = &g_58;
            int16_t *l_59[2][6][4] = {{{&g_60,(void*)0,&g_60,&g_60},{(void*)0,(void*)0,&g_60,(void*)0},{(void*)0,&g_60,&g_60,&g_60},{(void*)0,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60},{&g_60,&g_60,(void*)0,(void*)0}},{{&g_60,(void*)0,&g_60,&g_60},{&g_60,(void*)0,&g_60,&g_60},{(void*)0,(void*)0,&g_60,(void*)0},{(void*)0,&g_60,&g_60,&g_60},{(void*)0,&g_60,&g_60,&g_60},{&g_60,&g_60,&g_60,&g_60}}};
            int32_t l_61 = 0x92E769E8L;
            int32_t *l_62 = (void*)0;
            int32_t *l_63 = &g_64;
            uint64_t *l_65 = &g_29;
            union U3 **l_96 = &g_94[3][4];
            int32_t *l_101 = &l_61;
            struct S0 l_102 = {-1L,0xCD109C4FL,0xD0F06499L,0xBDL,252UL,5UL};
            int i, j, k;
            (*l_101) = (func_31((l_34 , (void*)0), ((*l_96) = func_35(func_39(((*l_63) = (safe_lshift_func_uint16_t_u_u((0x594A39B7B3FA8726LL <= ((((((safe_add_func_int8_t_s_s((g_49 , ((safe_mul_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(((((safe_div_func_int16_t_s_s((g_60 = ((l_34.f0 , 0xA6L) >= (((((*l_57) = (l_56 , l_56.f0.f4)) ^ 0UL) == p_27) != l_34.f0.f4))), l_61)) && g_3) < l_56.f0.f3) | p_27), 0L)) , 0xCC824F9D4896031DLL) | l_34.f0.f3), l_34.f0.f0)) > l_56.f0.f0)), 0L)) & 1L) && p_27) < 1UL) || 1UL) > g_49.f0.f4)), g_49.f0.f3))), l_65, g_14), g_3, p_27))) , g_49.f0.f4);
            return l_102;
        }
    }
    for (p_27 = 9; (p_27 > 20); p_27 = safe_add_func_uint16_t_u_u(p_27, 2))
    { 
        uint8_t l_105 = 5UL;
        int32_t *l_110 = &l_109[1][3];
        if (l_105)
            break;
        if (p_27)
            break;
        l_109[1][3] &= (((safe_mul_func_int8_t_s_s((((g_14 != 65530UL) && p_27) | 0x08B280BBL), (&g_95 != l_108[1][3]))) >= p_27) || p_27);
        (*l_110) |= p_27;
    }
    (*l_111) = &g_89;
    return g_49.f0;
}



static const struct S0  func_31(uint64_t * p_32, union U3 * p_33)
{ 
    int32_t *l_98 = &g_90;
    int32_t **l_97 = &l_98;
    int32_t *l_99[5];
    const struct S0 l_100 = {-4L,0xA393D434L,0x7D5AD653L,0x03L,1UL,0xD308L};
    int i;
    for (i = 0; i < 5; i++)
        l_99[i] = &g_79;
    g_89 |= (((*l_97) = (void*)0) == (void*)0);
    return l_100;
}



static union U3 * func_35(int8_t * p_36, uint16_t  p_37, int16_t  p_38)
{ 
    int32_t *l_82[3][4][1] = {{{&g_3},{&g_79},{&g_79},{&g_79}},{{&g_79},{&g_3},{&g_79},{&g_79}},{{&g_79},{&g_79},{&g_3},{&g_79}}};
    int32_t l_86 = 0x29D1CA74L;
    int i, j, k;
    g_83--;
    ++g_91;
    return g_94[2][0];
}



static int8_t * func_39(int32_t  p_40, uint64_t * p_41, const int16_t  p_42)
{ 
    uint8_t l_70 = 0UL;
    union U3 l_73[5][4][3] = {{{{0x778B6DB4L},{18446744073709551615UL},{18446744073709551615UL}},{{1UL},{18446744073709551615UL},{0x577B3F78L}},{{0x778B6DB4L},{0x9CA1FCACL},{18446744073709551610UL}},{{9UL},{1UL},{0x577B3F78L}}},{{{0x23A2E2E9L},{18446744073709551615UL},{18446744073709551615UL}},{{0x1E79BFF9L},{1UL},{1UL}},{{0x97ADA246L},{0x9CA1FCACL},{0UL}},{{0x1E79BFF9L},{18446744073709551615UL},{0x7CC017F0L}}},{{{0x23A2E2E9L},{18446744073709551615UL},{0UL}},{{9UL},{0xE630EE3EL},{1UL}},{{0x778B6DB4L},{18446744073709551615UL},{18446744073709551615UL}},{{1UL},{18446744073709551615UL},{0x577B3F78L}}},{{{0x778B6DB4L},{0x9CA1FCACL},{18446744073709551610UL}},{{9UL},{1UL},{0x577B3F78L}},{{0x23A2E2E9L},{18446744073709551615UL},{18446744073709551615UL}},{{0x1E79BFF9L},{1UL},{1UL}}},{{{0x97ADA246L},{0x9CA1FCACL},{0UL}},{{0x1E79BFF9L},{18446744073709551615UL},{0x7CC017F0L}},{{0x23A2E2E9L},{18446744073709551615UL},{0UL}},{{9UL},{0xE630EE3EL},{1UL}}}};
    uint8_t *l_76 = &g_49.f0.f4;
    struct S1 l_77 = {2,-21,38,0,-13,-31728,-170};
    int32_t *l_78 = &g_79;
    int8_t *l_81 = &g_14;
    int i, j, k;
    (*l_78) ^= ((safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_70, p_42)), (safe_sub_func_uint8_t_u_u((((l_73[4][0][0] , ((safe_mul_func_uint8_t_u_u(((*l_76) = l_73[4][0][0].f0), (p_40 == (((l_77 , g_2) , p_42) ^ g_2)))) <= 0x3F082F4DE99E491DLL)) > 0UL) >= l_77.f5), (*g_13))))) <= l_77.f1);
    (*l_78) = 0x84F12CA1L;
    g_80 |= ((*l_78) >= p_40);
    return l_81;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_49.f0.f0, "g_49.f0.f0", print_hash_value);
    transparent_crc(g_49.f0.f1, "g_49.f0.f1", print_hash_value);
    transparent_crc(g_49.f0.f2, "g_49.f0.f2", print_hash_value);
    transparent_crc(g_49.f0.f3, "g_49.f0.f3", print_hash_value);
    transparent_crc(g_49.f0.f4, "g_49.f0.f4", print_hash_value);
    transparent_crc(g_49.f0.f5, "g_49.f0.f5", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_95.f3, "g_95.f3", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1, "g_154.f1", print_hash_value);
    transparent_crc(g_154.f2, "g_154.f2", print_hash_value);
    transparent_crc(g_154.f3, "g_154.f3", print_hash_value);
    transparent_crc(g_154.f4, "g_154.f4", print_hash_value);
    transparent_crc(g_154.f5, "g_154.f5", print_hash_value);
    transparent_crc(g_154.f6, "g_154.f6", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    transparent_crc(g_198.f1, "g_198.f1", print_hash_value);
    transparent_crc(g_198.f2, "g_198.f2", print_hash_value);
    transparent_crc(g_198.f3, "g_198.f3", print_hash_value);
    transparent_crc(g_198.f4, "g_198.f4", print_hash_value);
    transparent_crc(g_198.f5, "g_198.f5", print_hash_value);
    transparent_crc(g_198.f6, "g_198.f6", print_hash_value);
    transparent_crc(g_334.f0, "g_334.f0", print_hash_value);
    transparent_crc(g_334.f1, "g_334.f1", print_hash_value);
    transparent_crc(g_334.f2, "g_334.f2", print_hash_value);
    transparent_crc(g_334.f3, "g_334.f3", print_hash_value);
    transparent_crc(g_334.f4, "g_334.f4", print_hash_value);
    transparent_crc(g_334.f5, "g_334.f5", print_hash_value);
    transparent_crc(g_334.f6, "g_334.f6", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_510.f0, "g_510.f0", print_hash_value);
    transparent_crc(g_510.f1, "g_510.f1", print_hash_value);
    transparent_crc(g_510.f2, "g_510.f2", print_hash_value);
    transparent_crc(g_510.f3, "g_510.f3", print_hash_value);
    transparent_crc(g_510.f4, "g_510.f4", print_hash_value);
    transparent_crc(g_510.f5, "g_510.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_661[i][j][k], "g_661[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_697, "g_697", print_hash_value);
    transparent_crc(g_773, "g_773", print_hash_value);
    transparent_crc(g_808, "g_808", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_857[i], "g_857[i]", print_hash_value);

    }
    transparent_crc(g_877, "g_877", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
