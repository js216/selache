// SPDX-License-Identifier: MIT
// cctest_csmith_4c2338b1.c --- cctest case csmith_4c2338b1 (csmith seed 1277376689)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xab757f71 */

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

// Options:   -s 1277376689 -o /tmp/csmith_gen_2i_j41cv/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint64_t  f1;
   uint64_t  f2;
   signed f3 : 21;
   const unsigned f4 : 25;
   int64_t  f5;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};

union U2 {
   uint8_t  f0;
   uint32_t  f1;
   const int32_t  f2;
   uint32_t  f3;
};

union U3 {
   uint16_t  f0;
};


static int16_t g_6 = 0xB081L;
static union U3 g_8 = {8UL};
static union U2 g_18[5] = {{0x94L},{0x94L},{0x94L},{0x94L},{0x94L}};
static int64_t g_27[4] = {0x384B6D700D1A0C84LL,0x384B6D700D1A0C84LL,0x384B6D700D1A0C84LL,0x384B6D700D1A0C84LL};
static int8_t g_29 = 0xC8L;
static int32_t g_43[5][1] = {{1L},{0x6F5D9AEBL},{1L},{0x6F5D9AEBL},{1L}};
static uint8_t g_180 = 0x56L;
static uint32_t g_230 = 18446744073709551615UL;
static int32_t g_239 = (-1L);
static struct S0 g_268 = {0x43L,1UL,1UL,-825,493,-9L};
static union U1 g_269 = {-9L};
static uint16_t g_315[5] = {0xB14FL,0xB14FL,0xB14FL,0xB14FL,0xB14FL};



static int32_t  func_1(void);
static int64_t  func_2(int16_t  p_3, uint32_t  p_4, union U3  p_5);
static uint16_t  func_11(uint8_t  p_12, uint8_t  p_13, int16_t  p_14, union U2  p_15);
static int8_t  func_23(uint32_t  p_24, int64_t  p_25);




static int32_t  func_1(void)
{ 
    int32_t l_7 = 0xA028EA38L;
    if (((func_2(((g_6 , l_7) == 0x4515L), g_6, g_8) <= g_268.f0) <= 0L))
    { 
        uint64_t l_332 = 0UL;
        int32_t l_341 = 0x80A16CC3L;
        int32_t l_342 = 0xBB9E6809L;
        l_342 = (safe_add_func_uint32_t_u_u((l_332 == (((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((g_8.f0 = (((g_269 = ((safe_rshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u((((l_341 = l_7) && (g_315[3] = g_239)) , 1UL), g_268.f4)), 8)) , g_269)) , l_7) | g_29)) <= l_332), l_7)), 12)) >= g_27[3]) >= 0UL)), g_18[0].f0));
        return l_7;
    }
    else
    { 
        uint32_t l_343 = 1UL;
        ++l_343;
        return g_18[0].f0;
    }
}



static int64_t  func_2(int16_t  p_3, uint32_t  p_4, union U3  p_5)
{ 
    int32_t l_9[5] = {3L,3L,3L,3L,3L};
    int i;
    for (p_3 = 4; (p_3 >= 1); p_3 -= 1)
    { 
        uint8_t l_10 = 1UL;
        int32_t l_17 = 0x3E3F36A5L;
        for (p_5.f0 = 0; (p_5.f0 <= 4); p_5.f0 += 1)
        { 
            const union U2 l_16 = {0UL};
            int32_t l_329 = 0xBFA6F946L;
            int i;
            l_10 = 0x889E022AL;
            if (l_9[p_3])
                continue;
            l_329 = ((l_9[p_3] , (func_11(g_8.f0, (l_17 = ((l_16 , (l_10 & l_9[3])) ^ g_6)), l_9[p_3], g_18[0]) <= 1UL)) | 18446744073709551610UL);
        }
    }
    return g_315[0];
}



static uint16_t  func_11(uint8_t  p_12, uint8_t  p_13, int16_t  p_14, union U2  p_15)
{ 
    uint64_t l_42 = 18446744073709551615UL;
    uint64_t l_44 = 0xCEA67F41B6ADD708LL;
    int32_t l_52 = (-1L);
    uint32_t l_72 = 0x0F3F00C7L;
    int32_t l_73 = (-4L);
    uint32_t l_74 = 7UL;
    int64_t l_133 = 0x00B4203E263A393DLL;
    int32_t l_185 = 0x7B8070DBL;
    uint64_t l_186[3];
    union U2 l_206[5] = {{0x0EL},{0x0EL},{0x0EL},{0x0EL},{0x0EL}};
    int32_t l_238 = 3L;
    int32_t l_241 = (-1L);
    union U1 l_294[2] = {{0x729FL},{0x729FL}};
    int i;
    for (i = 0; i < 3; i++)
        l_186[i] = 0x3372F705CCF7F129LL;
    for (p_13 = 0; (p_13 == 45); ++p_13)
    { 
        uint32_t l_26 = 4294967288UL;
        const int32_t l_28 = 0x360ABED9L;
        int32_t l_39 = (-2L);
        if (((((0xCB09L > (safe_sub_func_uint8_t_u_u(p_14, 0x68L))) | ((g_27[3] |= (((func_23(l_26, g_18[0].f0) & p_15.f0) | g_6) & p_13)) , g_8.f0)) == l_28) | 3UL))
        { 
            g_29 = 0xAD8A0F83L;
            return p_14;
        }
        else
        { 
            int32_t l_40 = 0xD8EDCE5FL;
            uint16_t l_41 = 0x878FL;
            g_43[1][0] = ((l_42 = (((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((g_18[0].f3 = (safe_mul_func_int16_t_s_s((((5UL && g_29) ^ (safe_lshift_func_int8_t_s_s((((+(l_39 = p_13)) > ((((g_18[4] , 0x319B20E9505C00D4LL) < 0xEBDA3FA0B5BCDCECLL) || l_28) , 0x65L)) >= p_14), l_26))) < p_15.f0), l_40))) , 18446744073709551612UL) & p_13), p_13)), l_26)) ^ g_8.f0) | l_41)) , l_26);
            if (g_29)
                continue;
            l_44 = 0xCFF5F9F7L;
        }
        if (p_12)
            break;
        l_52 = ((l_28 , ((safe_unary_minus_func_int64_t_s((((safe_mod_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int64_t_s((l_44 && (+g_27[3])))), 10)) & l_42) == g_27[3]), l_42)) && g_8.f0) != l_44))) ^ g_29)) >= 0xD480L);
    }
    l_73 = (p_13 , (((safe_add_func_int32_t_s_s((((safe_div_func_int32_t_s_s((((((l_52 ^= g_43[0][0]) , ((safe_div_func_int64_t_s_s((~(((safe_div_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((l_52 || ((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((safe_sub_func_uint32_t_u_u(p_13, 4294967293UL)) | g_8.f0) || l_52), l_42)), l_44)) ^ p_15.f0)), 0x41BCL)), g_43[3][0])), g_8.f0)) != 18446744073709551615UL) < p_15.f0)), 3L)) , l_72)) && p_13) , 0x6DF6458A24A778B6LL) > 0L), l_42)) <= l_44) & l_72), (-1L))) < 0x0BA7DF88L) < g_27[3]));
    if ((g_43[1][0] && ((++l_74) ^ (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_72 & (((0L ^ ((g_43[2][0] > 0x8CL) >= p_12)) < l_44) > g_18[0].f0)), g_27[1])), 0x37B8L)))))
    { 
        uint64_t l_84 = 0UL;
        int32_t l_98 = (-9L);
        int32_t l_99 = 3L;
        int32_t l_179 = (-8L);
        uint32_t l_211 = 0x4A55CD80L;
        int32_t l_234 = 0xB466F09CL;
        int32_t l_237 = 0x2C580385L;
        int32_t l_240[4];
        const union U3 l_271 = {0x4FD8L};
        int i;
        for (i = 0; i < 4; i++)
            l_240[i] = 7L;
        if (((+(((safe_div_func_uint8_t_u_u(((((0UL == (l_84++)) >= ((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u(0x3220CCB0868ECCACLL, (safe_rshift_func_uint16_t_u_u((!(g_29 != (l_99 ^= ((safe_add_func_int64_t_s_s((p_14 ^ l_98), (-1L))) , p_14)))), 0)))) , 0L) <= g_27[3]), l_98)) || l_44), l_98)) >= 0UL)) & p_14) & 0xF8EF8B48L), p_12)) , p_14) , g_43[3][0])) | 65535UL))
        { 
            int64_t l_119 = (-3L);
            int32_t l_122[3];
            int i;
            for (i = 0; i < 3; i++)
                l_122[i] = (-1L);
            for (l_98 = (-5); (l_98 <= 15); l_98++)
            { 
                uint32_t l_118 = 0x142826ECL;
                l_122[0] = (l_52 &= (safe_div_func_uint8_t_u_u(0UL, (~(safe_mod_func_int8_t_s_s(((((safe_mod_func_int32_t_s_s(0x8B0AA5F9L, (safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s(((l_119 = l_118) ^ ((safe_mul_func_int8_t_s_s((g_18[0].f0 || 0xE480CDBF83720D76LL), p_15.f0)) < l_74)), p_14)) ^ p_13) & g_27[3]), l_122[0])), 5)) && p_14))))) , g_29) ^ p_13) < 1UL), l_84))))));
                return l_118;
            }
            for (l_74 = 0; (l_74 > 34); l_74++)
            { 
                if (g_6)
                    break;
                if (p_13)
                    break;
            }
        }
        else
        { 
            uint32_t l_132 = 4UL;
            int32_t l_134 = 0xEA66F312L;
            int32_t l_145 = (-1L);
            int32_t l_161[5][1];
            uint8_t l_164 = 250UL;
            int32_t l_178[2][3][4] = {{{0x5C42DACBL,0x5C42DACBL,0xA6F6121FL,0x5C42DACBL},{0x5C42DACBL,0x2B47A6F6L,0x2B47A6F6L,0x5C42DACBL},{0x2B47A6F6L,0x5C42DACBL,0x2B47A6F6L,0x2B47A6F6L}},{{0x5C42DACBL,0x5C42DACBL,0xA6F6121FL,0x2B47A6F6L},{0x2B47A6F6L,0xA6F6121FL,0xA6F6121FL,0x2B47A6F6L},{0xA6F6121FL,0x2B47A6F6L,0xA6F6121FL,0xA6F6121FL}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_161[i][j] = 0xD604849EL;
            }
            if (((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((p_13 <= (safe_lshift_func_uint16_t_u_s((l_133 |= (~(l_132 = l_84))), (g_6 = 1L)))) ^ (l_134 != 5L)), g_18[0].f0)), l_52)) || p_13))
            { 
                l_52 = p_15.f0;
            }
            else
            { 
                int32_t l_160[2][1];
                int32_t l_162 = (-10L);
                int32_t l_163 = 0x17659CEBL;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_160[i][j] = (-5L);
                }
                g_43[1][0] = (l_52 = (+(5UL >= (0x40E8L < g_8.f0))));
                g_43[1][0] = (safe_lshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((((safe_unary_minus_func_int16_t_s(l_145)) , ((g_18[4] , (safe_mul_func_int16_t_s_s(g_43[1][0], (l_163 ^= (((l_162 = (safe_add_func_uint32_t_u_u((~(safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((!(l_134 = ((safe_add_func_int16_t_s_s(((l_160[1][0] = (safe_div_func_int16_t_s_s(((g_27[1] = 1L) & l_133), p_15.f0))) == g_29), 6L)) & g_43[1][0]))), p_14)) >= 2L), l_161[3][0]))), l_84))) , 0x81D4L) < p_13))))) , 0xE6D6L)) , g_18[0].f0) || p_13), 6)) == l_98), g_8.f0)) , l_133) || 18446744073709551615UL), g_43[1][0])) >= g_43[2][0]) <= p_12), g_6));
            }
            l_164++;
            if (l_72)
            { 
                int32_t l_171 = 0xE2B492AEL;
                l_52 = (l_171 = (safe_add_func_int64_t_s_s(0x9F8D79D57AA8C2C0LL, (((p_12 > ((p_14 >= (safe_rshift_func_int16_t_s_u(g_8.f0, 2))) , l_84)) == l_74) > l_72))));
            }
            else
            { 
                int32_t l_176 = 0L;
                int32_t l_177[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_177[i] = 0x21ADA0F0L;
                g_43[2][0] = (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_176, 15)), 0x46L)) > (((((g_180++) || (safe_mul_func_int8_t_s_s((0x7CL != (g_29 != g_27[3])), l_177[0]))) != l_42) ^ 0x03L) || p_14)) ^ 0x89CDC83B1EF4386DLL);
                ++l_186[1];
            }
        }
        for (l_72 = 0; (l_72 == 22); ++l_72)
        { 
            int32_t l_195[1];
            int32_t l_208 = 0L;
            int32_t l_209 = 0L;
            int32_t l_236[3];
            uint16_t l_243 = 0x174EL;
            int i;
            for (i = 0; i < 1; i++)
                l_195[i] = 1L;
            for (i = 0; i < 3; i++)
                l_236[i] = 0x4B2A3510L;
            if (((g_27[2] &= (g_6 & (safe_mul_func_uint8_t_u_u(p_15.f0, (g_180 = (((safe_add_func_int16_t_s_s(p_15.f0, (p_15.f0 >= p_13))) <= g_18[0].f0) == l_195[0])))))) <= 1UL))
            { 
                uint8_t l_207 = 5UL;
                l_208 = (safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((0L != (safe_mul_func_uint16_t_u_u((18446744073709551615UL || (safe_add_func_uint64_t_u_u((0x259DFFE3AFA29F62LL && (((g_18[0].f3 = (safe_mod_func_uint64_t_u_u((((l_206[2] , g_43[1][0]) > l_207) >= 0xB04089B8L), 1L))) , p_15.f0) , p_12)), g_180))), l_42))), l_99)), 4));
            }
            else
            { 
                int8_t l_210[1][5][3] = {{{0xBFL,0xBFL,0xBFL},{0x3BL,0x3BL,0x3BL},{0xBFL,0xBFL,0xBFL},{0x3BL,0x3BL,0x3BL},{0xBFL,0xBFL,0xBFL}}};
                int32_t l_233 = 7L;
                int32_t l_235 = 5L;
                int32_t l_242[2][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_242[i][j] = 0xEDF6B542L;
                }
                ++l_211;
                g_43[1][0] = ((((safe_rshift_func_uint8_t_u_u((g_180 ^= 0UL), (safe_add_func_int16_t_s_s((g_6 = ((l_233 = ((safe_mul_func_uint16_t_u_u(p_15.f0, (l_209 = (safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((g_29 = ((safe_rshift_func_int16_t_s_s((((((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(4294967293UL, (--g_230))), g_18[0].f0)) > g_43[0][0]) ^ p_15.f0) == 0x19L) , l_210[0][4][2]), p_15.f0)) ^ p_14)), 0)) >= l_210[0][1][1]), 1UL))))) > p_14)) | g_43[4][0])), p_15.f0)))) && p_14) | 4294967294UL) , g_6);
                l_243--;
            }
            l_179 = ((safe_sub_func_int16_t_s_s(((l_234 ^= (safe_lshift_func_uint16_t_u_s(g_6, (+l_185)))) && (safe_rshift_func_uint16_t_u_s(0xBC99L, 0))), g_27[3])) || l_186[1]);
        }
        if (((safe_unary_minus_func_int64_t_s(((((0x59E5E0E0025C80A1LL & (safe_mul_func_int16_t_s_s(((((safe_mod_func_int32_t_s_s((l_133 > (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_14, g_230)), g_8.f0))), p_14)) <= p_15.f0) , g_239) == g_27[1]), g_27[3]))) >= g_180) && g_18[0].f0) | 0x5BL))) & p_15.f0))
        { 
            int16_t l_270 = 0L;
            if ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((((p_14 < (g_27[3] != (safe_add_func_int16_t_s_s((((((g_268 , (g_269 , l_99)) || g_180) >= 1UL) ^ 0x3806708EL) | g_29), l_270)))) || g_6) <= g_29) , g_29), p_14)), 7)))
            { 
                l_179 = ((l_271 , (p_15 , l_185)) ^ 3L);
                return p_15.f0;
            }
            else
            { 
                return g_27[3];
            }
        }
        else
        { 
            g_268.f3 |= p_15.f0;
        }
    }
    else
    { 
        int32_t l_284 = (-5L);
        int32_t l_301[2];
        union U2 l_310 = {0xEBL};
        int i;
        for (i = 0; i < 2; i++)
            l_301[i] = 0x4D5240C9L;
        g_268.f3 = p_13;
        l_52 = ((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((g_43[1][0] , l_52) & (safe_sub_func_uint8_t_u_u((p_15.f0 <= ((((safe_rshift_func_int8_t_s_s(l_72, 7)) <= p_13) & 65527UL) > p_15.f0)), l_74))), 1UL)), l_284)) ^ 2UL), 65532UL)) & p_12), g_29)) || 65532UL);
        if (((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(g_43[1][0], (g_6 ^= (!((safe_sub_func_uint32_t_u_u(((g_269 = (l_294[1] = l_294[1])) , g_268.f3), (safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(0x2637144DL, g_268.f5)) && p_14), l_186[1])), 3)))) | p_14))))), p_14)), 0x52L)) & 0xFEBCL))
        { 
            int16_t l_316 = 0L;
            l_316 |= (l_301[0] , ((((safe_add_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((l_310 , (l_52 ^= g_6)) | (+((safe_add_func_uint8_t_u_u((+p_14), g_269.f0)) != 0x07CB16B7EB9182EELL))) , l_301[0]), p_14)), p_15.f0)), p_15.f0)) != g_315[3]), 0xF4A1L)) || g_268.f2) >= 0x2BCDFAA7L) | p_13));
        }
        else
        { 
            uint32_t l_325 = 0xBFDCD4D2L;
            int32_t l_328[3][4] = {{(-1L),(-1L),0x0EE1BF02L,(-1L)},{(-1L),4L,4L,(-1L)},{4L,(-1L),4L,4L}};
            int i, j;
            l_284 = (safe_div_func_int32_t_s_s(g_43[3][0], ((~((p_13 != (g_29 &= 0xE9L)) & ((~(safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((p_13 < (-7L)), g_43[1][0])) & g_230) > p_14), p_14))) && l_325))) & l_301[0])));
            for (g_269.f2 = 0; (g_269.f2 == 41); ++g_269.f2)
            { 
                l_328[2][1] = (g_43[4][0] = (g_18[0] , (-1L)));
            }
        }
    }
    return g_29;
}



static int8_t  func_23(uint32_t  p_24, int64_t  p_25)
{ 
    return g_18[0].f0;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_18[i].f0, "g_18[i].f0", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_27[i], "g_27[i]", print_hash_value);

    }
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_43[i][j], "g_43[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_268.f0, "g_268.f0", print_hash_value);
    transparent_crc(g_268.f1, "g_268.f1", print_hash_value);
    transparent_crc(g_268.f2, "g_268.f2", print_hash_value);
    transparent_crc(g_268.f3, "g_268.f3", print_hash_value);
    transparent_crc(g_268.f4, "g_268.f4", print_hash_value);
    transparent_crc(g_268.f5, "g_268.f5", print_hash_value);
    transparent_crc(g_269.f2, "g_269.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_315[i], "g_315[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
