// SPDX-License-Identifier: MIT
// cctest_csmith_bdc23c26.c --- cctest case csmith_bdc23c26 (csmith seed 3183623206)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x851fafc4 */

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

// Options:   -s 3183623206 -o /tmp/csmith_gen_n9pa4w8c/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   uint64_t  f3;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   const unsigned f1 : 11;
   uint64_t  f2;
   int16_t  f3;
};


static uint32_t g_8 = 18446744073709551615UL;
static int64_t g_43 = 0x14BA09A164E62B50LL;
static int16_t g_47 = (-1L);
static int32_t g_54[2] = {9L,9L};
static uint16_t g_56 = 0UL;
static uint16_t * const g_55[2] = {&g_56,&g_56};
static int32_t g_67 = 0L;
static union U1 g_82 = {{0UL,0UL,0x692AFB55L,0x8A086CC6B0C40B38LL}};
static int32_t g_87 = (-1L);
static int32_t *g_86 = &g_87;
static int16_t g_132 = 0x4AE7L;
static int32_t g_134 = (-5L);
static int32_t g_139 = 0xBD28546EL;
static uint32_t g_146 = 1UL;
static int8_t g_187 = 1L;
static int64_t g_209 = 0xC42AF917290AB121LL;
static uint8_t g_225[4] = {0x92L,0x92L,0x92L,0x92L};
static int32_t **g_236[5][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_86,&g_86,&g_86,&g_86,&g_86,&g_86,&g_86},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static int32_t ***g_235 = &g_236[1][6];
static uint8_t g_258 = 0xF7L;
static int16_t *g_285 = &g_132;
static uint16_t g_352 = 65535UL;
static const int32_t *g_388 = &g_139;
static const int32_t **g_387 = &g_388;
static union U1 *g_402 = &g_82;
static union U1 **g_401 = &g_402;
static union U1 *** const g_400 = &g_401;
static int64_t g_477 = 0xBA49C146A788BCEALL;
static const int32_t *g_493 = &g_54[1];
static struct S0 g_522[2][5] = {{{0xDAF15B81L,0xB24FDA75L,0xFC2C8920L,18446744073709551608UL},{0xDAF15B81L,0xB24FDA75L,0xFC2C8920L,18446744073709551608UL},{0xDAF15B81L,0xB24FDA75L,0xFC2C8920L,18446744073709551608UL},{0xDAF15B81L,0xB24FDA75L,0xFC2C8920L,18446744073709551608UL},{0xDAF15B81L,0xB24FDA75L,0xFC2C8920L,18446744073709551608UL}},{{0x003DEAD0L,18446744073709551608UL,-9L,0UL},{0x003DEAD0L,18446744073709551608UL,-9L,0UL},{0x003DEAD0L,18446744073709551608UL,-9L,0UL},{0x003DEAD0L,18446744073709551608UL,-9L,0UL},{0x003DEAD0L,18446744073709551608UL,-9L,0UL}}};
static int64_t *g_709 = &g_477;
static int64_t * const *g_708 = &g_709;
static int32_t g_750 = 0L;
static uint64_t *g_763 = &g_522[0][1].f3;
static uint16_t g_765 = 65527UL;
static uint16_t g_776 = 0x95FDL;
static int32_t ***g_777 = (void*)0;
static int32_t g_849 = 0x5CF90FF8L;
static int32_t *****g_854 = (void*)0;
static int32_t g_866 = 0xB2D95038L;
static const union U1 g_879[1][6][3] = {{{{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}}},{{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}}},{{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}}},{{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}}},{{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}}},{{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}},{{4UL,1UL,1L,0x63236A749E39653DLL}}}}};
static union U1 g_881[7] = {{{1UL,8UL,0x6F5C8782L,0xD165141234363133LL}},{{1UL,8UL,0x6F5C8782L,0xD165141234363133LL}},{{1UL,8UL,0x6F5C8782L,0xD165141234363133LL}},{{1UL,8UL,0x6F5C8782L,0xD165141234363133LL}},{{1UL,8UL,0x6F5C8782L,0xD165141234363133LL}},{{1UL,8UL,0x6F5C8782L,0xD165141234363133LL}},{{1UL,8UL,0x6F5C8782L,0xD165141234363133LL}}};
static int32_t * const *g_970 = &g_86;
static int32_t * const **g_969[1][5] = {{&g_970,&g_970,&g_970,&g_970,&g_970}};
static int32_t * const ***g_968[2][7] = {{&g_969[0][0],&g_969[0][0],&g_969[0][0],&g_969[0][0],&g_969[0][0],&g_969[0][0],&g_969[0][0]},{&g_969[0][0],&g_969[0][2],&g_969[0][0],&g_969[0][0],&g_969[0][2],&g_969[0][0],&g_969[0][0]}};
static uint64_t g_1008 = 0x338D1E8557447CE3LL;
static int32_t g_1034 = 0x583D80CEL;
static int32_t ****g_1103[1][7] = {{&g_777,&g_777,&g_777,&g_777,&g_777,&g_777,&g_777}};
static uint64_t g_1112 = 0xCBC3BC7AACEB60D0LL;
static int32_t g_1131[6] = {0x141166C6L,0x141166C6L,0x141166C6L,0x141166C6L,0x141166C6L,0x141166C6L};
static uint64_t g_1342 = 0UL;
static uint64_t * const g_1341 = &g_1342;
static uint64_t * const *g_1340[2] = {&g_1341,&g_1341};
static uint16_t g_1450[6][2][4] = {{{0xBBE1L,0x1EA2L,0x1EA2L,0xBBE1L},{0x207AL,0x1EA2L,0xD14BL,0x1EA2L}},{{0x1EA2L,1UL,0xD14BL,0xD14BL},{0x207AL,0x207AL,0x1EA2L,0xD14BL}},{{0xBBE1L,1UL,0xBBE1L,0x1EA2L},{0xBBE1L,0x1EA2L,0x1EA2L,0xBBE1L}},{{0x207AL,0x1EA2L,0xD14BL,0x1EA2L},{0x1EA2L,1UL,0xD14BL,0xD14BL}},{{0x207AL,0x207AL,0x1EA2L,0xD14BL},{0xBBE1L,1UL,0xBBE1L,0x1EA2L}},{{0xBBE1L,0x1EA2L,0x1EA2L,0xBBE1L},{0x207AL,0x1EA2L,0xD14BL,0x1EA2L}}};
static uint64_t g_1485 = 0x7D04F4BD82292860LL;
static int64_t g_1519 = 0x31A0B6A3530919EFLL;
static uint16_t g_1557 = 65535UL;
static uint32_t g_1717 = 0x814187DBL;
static uint16_t *g_1724 = &g_776;
static uint16_t **g_1723 = &g_1724;
static uint16_t * const *g_1740 = &g_55[0];
static uint16_t * const **g_1739 = &g_1740;
static int32_t *****g_1804 = (void*)0;
static int64_t ****g_1861 = (void*)0;
static int8_t g_1891[5][6][6] = {{{(-2L),0x0AL,(-5L),0x3DL,0x0AL,0xB8L},{0L,(-2L),(-5L),(-2L),0L,0xACL},{0x13L,(-2L),0xB8L,0x13L,0x0AL,0L},{0x13L,0x0AL,0L,(-2L),(-2L),0L},{0L,0L,0xB8L,0x3DL,(-2L),0xACL},{(-2L),0x0AL,(-5L),0x3DL,0x0AL,0xB8L}},{{0L,(-2L),(-5L),(-2L),0L,0xACL},{0x13L,(-2L),0xB8L,0x13L,0x0AL,0L},{0x13L,0x0AL,0L,(-2L),(-2L),0L},{0L,0L,0xB8L,0x3DL,(-2L),0xACL},{(-2L),0x0AL,(-5L),0x3DL,0x0AL,0xB8L},{0L,(-2L),(-5L),(-2L),0L,0xACL}},{{0x13L,(-2L),0xB8L,0x13L,0x0AL,0x3DL},{0x30L,4L,0x3DL,0x16L,0x16L,0x3DL},{1L,1L,0x13L,0x9CL,0x16L,(-2L)},{0x16L,4L,0x0AL,0x9CL,4L,0x13L},{1L,0x16L,0x0AL,0x16L,1L,(-2L)},{0x30L,0x16L,0x13L,0x30L,4L,0x3DL}},{{0x30L,4L,0x3DL,0x16L,0x16L,0x3DL},{1L,1L,0x13L,0x9CL,0x16L,(-2L)},{0x16L,4L,0x0AL,0x9CL,4L,0x13L},{1L,0x16L,0x0AL,0x16L,1L,(-2L)},{0x30L,0x16L,0x13L,0x30L,4L,0x3DL},{0x30L,4L,0x3DL,0x16L,0x16L,0x3DL}},{{1L,1L,0x13L,0x9CL,0x16L,(-2L)},{0x16L,4L,0x0AL,0x9CL,4L,0x13L},{1L,0x16L,0x0AL,0x16L,1L,(-2L)},{0x30L,0x16L,0x13L,0x30L,4L,0x3DL},{0x30L,4L,0x3DL,0x16L,0x16L,0x3DL},{1L,1L,0x13L,0x9CL,0x16L,(-2L)}}};
static uint16_t g_1910 = 0xEF89L;
static const uint64_t *g_1941 = (void*)0;
static const uint64_t **g_1940 = &g_1941;
static const uint64_t ***g_1939[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int64_t g_1981 = 2L;
static int64_t g_2022 = 3L;
static int8_t g_2030[7] = {0L,0L,0L,0L,0L,0L,0L};
static int8_t g_2036 = 0x4DL;
static int16_t ***g_2051 = (void*)0;
static int16_t ****g_2050[3][4][2] = {{{&g_2051,&g_2051},{&g_2051,&g_2051},{&g_2051,&g_2051},{&g_2051,&g_2051}},{{&g_2051,(void*)0},{&g_2051,(void*)0},{&g_2051,&g_2051},{&g_2051,&g_2051}},{{&g_2051,(void*)0},{&g_2051,(void*)0},{&g_2051,&g_2051},{&g_2051,&g_2051}}};
static int32_t g_2067 = 0xF2E4F19BL;
static const uint16_t **g_2093 = (void*)0;
static uint8_t g_2107 = 255UL;
static uint32_t g_2132 = 0x0399461FL;
static int8_t *g_2168 = (void*)0;
static union U1 *** const g_2182[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static union U1 *** const *g_2181 = &g_2182[2];
static int64_t **g_2190 = &g_709;
static int64_t ***g_2189 = &g_2190;
static int16_t *****g_2227 = &g_2050[0][1][1];
static uint64_t **g_2331 = &g_763;



static uint64_t  func_1(void);
static uint16_t  func_4(uint16_t  p_5, uint64_t  p_6, int8_t  p_7);
static int64_t  func_15(union U1  p_16, const uint32_t  p_17, struct S0  p_18, int32_t  p_19, int16_t  p_20);
static union U1  func_21(union U1  p_22, uint64_t  p_23, const uint8_t  p_24);
static union U1  func_25(struct S0  p_26);
static struct S0  func_31(int32_t * p_32, int32_t * p_33, int8_t  p_34, int32_t * p_35);
static int32_t * func_36(int32_t  p_37, const uint8_t  p_38);
static uint16_t * func_57(const uint64_t  p_58, uint64_t  p_59, int8_t  p_60, uint16_t * p_61);




static uint64_t  func_1(void)
{ 
    struct S0 l_27 = {1UL,18446744073709551615UL,0xEFBDE283L,18446744073709551607UL};
    const uint64_t l_1108 = 0x9612C9D99F865502LL;
    int32_t l_1774 = 4L;
    int32_t *l_1787 = &l_27.f2;
    int32_t **l_1786 = &l_1787;
    uint32_t l_1789 = 1UL;
    int32_t l_1792 = 0x7981F58AL;
    const int32_t l_1793 = 0xB43D1873L;
    uint64_t l_1822 = 0x5626BEC8E7935586LL;
    int32_t l_1847[4];
    int32_t *l_1850 = &g_54[0];
    int32_t l_1907 = 0x92262413L;
    int32_t l_1909 = 0x633A58BEL;
    int8_t l_1980[5][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
    int32_t l_1986 = 0xDB2F9336L;
    int32_t l_1989 = (-1L);
    uint32_t l_1990 = 4294967295UL;
    int32_t l_2027 = 0xFC4B03E3L;
    int32_t l_2028 = 0xBD921B0AL;
    int32_t l_2029[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
    uint64_t l_2031 = 0x41B8E2A6627841B2LL;
    int32_t *l_2095[3][7][1];
    int32_t ***l_2106 = &g_236[1][6];
    int32_t l_2134 = 3L;
    uint16_t **l_2147 = &g_1724;
    int64_t **l_2188[2];
    int64_t ** const *l_2187 = &l_2188[1];
    uint32_t l_2192 = 0UL;
    uint32_t l_2195[1];
    uint32_t l_2196 = 0x2B85414EL;
    int32_t l_2197 = 0x7E533C78L;
    union U1 ***l_2215[4][5] = {{&g_401,&g_401,&g_401,&g_401,&g_401},{&g_401,&g_401,&g_401,&g_401,&g_401},{&g_401,&g_401,&g_401,&g_401,&g_401},{&g_401,&g_401,&g_401,&g_401,&g_401}};
    union U1 **** const l_2214 = &l_2215[0][1];
    int32_t * const *l_2224[5][2][1] = {{{(void*)0},{&g_86}},{{(void*)0},{&g_86}},{{(void*)0},{&g_86}},{{(void*)0},{&g_86}},{{(void*)0},{&g_86}}};
    uint32_t l_2230 = 0xB92BDCCDL;
    uint32_t l_2284 = 0x502E58EBL;
    int16_t l_2308[4];
    int32_t *l_2309 = &l_2027;
    int8_t l_2338[2][7] = {{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)},{9L,9L,9L,9L,9L,9L,9L}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1847[i] = 0x5FED61C7L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
                l_2095[i][j][k] = &l_1907;
        }
    }
    for (i = 0; i < 2; i++)
        l_2188[i] = &g_709;
    for (i = 0; i < 1; i++)
        l_2195[i] = 0x76AC5173L;
    for (i = 0; i < 4; i++)
        l_2308[i] = 1L;
    l_1774 |= (safe_sub_func_int64_t_s_s(((func_4((1UL & g_8), g_8, (g_8 ^ ((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint64_t_u_u(0UL, func_15(func_21(func_25(l_27), g_139, l_27.f2), l_1108, l_27, l_27.f3, (*g_285)))) | 0xE0EEBDE5F1147F2BLL), g_881[2].f0.f2)), 0xF11D8FD3L)) != l_27.f0))) <= (*g_285)) ^ l_27.f1), (*g_1341)));
    (*g_86) &= ((**g_1723) == l_27.f2);
    for (g_187 = 0; (g_187 <= (-3)); g_187 = safe_sub_func_uint64_t_u_u(g_187, 5))
    { 
        uint64_t l_1779 = 0x74B3082AAC089264LL;
        int32_t l_1790 = 0x7DBA1F4CL;
        int32_t **l_1791 = &g_86;
        int32_t *l_1794 = &g_750;
        uint64_t **l_1815 = &g_763;
        uint16_t *l_1848[4][4][6] = {{{(void*)0,(void*)0,&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3]},{(void*)0,(void*)0,&g_1450[2][0][3],(void*)0,(void*)0,&g_1450[2][0][3]},{&g_1450[1][1][1],&g_352,(void*)0,&g_1450[2][0][3],&g_776,&g_1450[2][0][3]},{(void*)0,&g_1450[1][1][1],(void*)0,&g_765,(void*)0,&g_1450[2][0][3]}},{{&g_765,&g_765,&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3]},{&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3],&g_765},{&g_765,&g_1450[2][0][3],(void*)0,&g_765,(void*)0,&g_1450[1][1][1]},{(void*)0,&g_1450[2][0][3],&g_776,&g_1450[2][0][3],(void*)0,&g_352}},{{&g_1450[1][1][1],&g_1450[2][0][3],(void*)0,(void*)0,&g_1450[2][0][3],(void*)0},{(void*)0,&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3],(void*)0},{(void*)0,&g_765,(void*)0,(void*)0,(void*)0,&g_352},{&g_1450[2][0][3],&g_1450[1][1][1],&g_776,(void*)0,&g_776,&g_1450[1][1][1]}},{{&g_1450[2][0][3],&g_352,(void*)0,(void*)0,(void*)0,&g_765},{(void*)0,(void*)0,&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3],&g_1450[2][0][3]},{(void*)0,(void*)0,&g_1450[2][0][3],(void*)0,(void*)0,&g_1450[2][0][3]},{&g_1450[1][1][1],&g_352,(void*)0,&g_1450[2][0][3],&g_776,&g_1450[2][0][3]}}};
        uint32_t l_1863 = 4294967288UL;
        uint32_t l_1888[6] = {0xABD3A322L,0xABD3A322L,0xABD3A322L,0xABD3A322L,0xABD3A322L,0xABD3A322L};
        int16_t l_1892[1][7][2];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1892[i][j][k] = 0x868BL;
            }
        }
        (*l_1794) ^= (((((**g_1723) = ((((safe_sub_func_int16_t_s_s((((*g_285) = l_1779) >= (safe_div_func_int32_t_s_s((g_477 >= ((((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((l_1786 == &l_1787) <= (+(*g_1724))) , (l_1789 , (((((*l_1791) = func_36(((g_776 && l_1790) ^ l_1779), l_1790)) == &l_1774) ^ g_1112) == (**g_708)))), 2L)), 1UL)) != l_27.f0) != 0x2CL) & l_1792)), l_27.f1))), 0x638BL)) , (**l_1791)) <= l_1793) | 1UL)) >= 0L) >= g_866) < 0xCD5A84EAL);
        for (l_27.f3 = 12; (l_27.f3 >= 58); l_27.f3 = safe_add_func_int32_t_s_s(l_27.f3, 7))
        { 
            uint16_t l_1799 = 0x81C5L;
            int32_t ****l_1803 = &g_235;
            int32_t *****l_1802 = &l_1803;
            uint8_t *l_1805 = &g_225[1];
            int64_t **l_1846 = &g_709;
            int64_t ***l_1845[1][3][3] = {{{&l_1846,&l_1846,&l_1846},{&l_1846,&l_1846,&l_1846},{&l_1846,&l_1846,&l_1846}}};
            uint16_t ***l_1885[7] = {&g_1723,&g_1723,&g_1723,&g_1723,&g_1723,&g_1723,&g_1723};
            int32_t l_1908 = 0xFE89096FL;
            int i, j, k;
            if (((safe_rshift_func_uint8_t_u_s(0xDDL, l_1799)) < (safe_sub_func_uint8_t_u_u((l_1802 != (g_1804 = g_1804)), (++(*l_1805))))))
            { 
                uint8_t l_1808 = 0x75L;
                uint64_t ***l_1809 = (void*)0;
                uint64_t **l_1811 = &g_763;
                uint64_t ***l_1810 = &l_1811;
                uint64_t ***l_1812 = (void*)0;
                uint64_t **l_1814 = &g_763;
                uint64_t ***l_1813[2][6] = {{&l_1814,&l_1814,&l_1814,&l_1814,&l_1814,&l_1814},{&l_1814,&l_1814,&l_1814,&l_1814,&l_1814,&l_1814}};
                uint8_t *l_1816 = &g_225[1];
                int32_t *l_1819 = &g_87;
                int32_t *l_1820 = &g_1131[0];
                int32_t * const *l_1835[1];
                int32_t * const **l_1834 = &l_1835[0];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1835[i] = &l_1787;
                (*l_1791) = func_36((l_1808 || g_1034), ((*l_1816) |= (((l_1815 = ((*l_1810) = &g_763)) == &g_763) <= g_82.f1)));
                if ((*l_1794))
                { 
                    int8_t l_1818 = 0x05L;
                    l_1818 = (~0L);
                }
                else
                { 
                    int32_t *l_1821 = &g_849;
                    l_1820 = (func_31((*l_1791), l_1819, (**l_1791), l_1820) , l_1821);
                    if (l_1822)
                        continue;
                    (*l_1794) &= (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((**l_1791) , (*g_1341)), (!(safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((*g_285), (safe_mul_func_int8_t_s_s(g_54[0], ((*l_1819) <= (*l_1821)))))), g_881[2].f2))))) , g_43), g_8));
                }
                (*g_86) |= ((((*g_709) && ((void*)0 == l_1834)) & l_1793) && (*l_1820));
            }
            else
            { 
                int16_t l_1836 = 1L;
                (*g_86) = (l_1836 > (((((&g_1723 != (void*)0) && (g_1131[3] , ((*g_1341) > ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((l_1845[0][1][2] != &g_708), l_1847[1])) && l_1836), 4)), g_258)) == 0x11L)))) != g_522[0][1].f1) > (*g_285)) != l_1793));
            }
            if ((l_1848[1][0][0] != ((*g_1723) = (*g_1723))))
            { 
                int32_t *l_1849 = &l_1790;
                int16_t *l_1862 = &g_82.f3;
                l_1863 = ((**g_970) = ((g_82.f0 , 0UL) >= (*g_285)));
                return (**l_1791);
            }
            else
            { 
                uint16_t ****l_1886 = &l_1885[1];
                int32_t l_1887 = 0L;
                const int8_t l_1889 = 1L;
                int8_t *l_1890[5][7][1] = {{{&g_187},{&g_1891[4][3][4]},{&g_1891[2][1][1]},{&g_1891[4][3][4]},{&g_187},{&g_1891[2][1][1]},{&g_1891[2][1][1]}},{{&g_187},{&g_1891[4][3][4]},{&g_1891[2][1][1]},{&g_1891[4][3][4]},{&g_187},{&g_1891[2][1][1]},{&g_1891[2][1][1]}},{{&g_187},{&g_1891[4][3][4]},{&g_1891[2][1][1]},{&g_1891[4][3][4]},{&g_187},{&g_1891[2][1][1]},{&g_1891[2][1][1]}},{{&g_187},{&g_1891[4][3][4]},{&g_1891[2][1][1]},{&g_1891[4][3][4]},{&g_187},{&g_1891[2][1][1]},{&g_1891[2][1][1]}},{{&g_187},{&g_1891[4][3][4]},{&g_1891[2][1][1]},{&g_1891[4][3][4]},{&g_187},{&g_1891[2][1][1]},{&g_1891[2][1][1]}}};
                uint64_t *l_1893 = &g_522[0][1].f3;
                int32_t l_1894 = 0xFC2808B2L;
                int32_t *l_1895 = (void*)0;
                int32_t *l_1896 = &g_1131[3];
                int32_t *l_1897 = &g_67;
                int32_t *l_1898 = (void*)0;
                int32_t *l_1899 = &g_67;
                int32_t *l_1900 = &g_1131[2];
                int32_t *l_1901 = (void*)0;
                int32_t *l_1902 = (void*)0;
                int32_t *l_1903 = &l_1887;
                int32_t *l_1904 = &g_1131[3];
                int32_t *l_1905 = &g_87;
                int32_t *l_1906[5][7][3] = {{{&l_1887,&g_54[0],(void*)0},{&g_54[1],&l_1887,&g_67},{(void*)0,&l_1790,&l_1790},{(void*)0,(void*)0,&g_87},{&g_849,&l_1887,(void*)0},{&g_67,&g_849,&g_67},{&g_54[0],&l_1790,&g_1131[3]}},{{&g_87,&g_849,&g_1131[3]},{(void*)0,&l_1887,&g_1131[3]},{&g_1131[2],&l_1887,&g_1131[2]},{&g_54[0],&g_1131[3],&g_1131[3]},{(void*)0,&g_67,&g_1131[3]},{&g_849,(void*)0,&g_1131[3]},{&g_54[0],&l_1887,&g_67}},{{&g_849,&g_849,(void*)0},{(void*)0,&g_849,&l_1774},{&g_54[0],&g_54[0],&g_1131[3]},{&g_1131[2],&g_849,&g_54[0]},{(void*)0,&g_849,&g_1131[3]},{&g_87,&l_1887,&g_87},{&g_54[0],(void*)0,&g_1131[3]}},{{&g_67,&g_67,&g_54[0]},{&g_849,&g_1131[3],&g_1131[3]},{&g_1131[3],&l_1887,&l_1774},{&g_849,&l_1887,(void*)0},{&g_67,&g_849,&g_67},{&g_54[0],&l_1790,&g_1131[3]},{&g_87,&g_849,&g_1131[3]}},{{(void*)0,&l_1887,&g_1131[3]},{&g_1131[2],&l_1887,&g_1131[2]},{&g_54[0],&g_1131[3],&g_1131[3]},{(void*)0,&g_67,&g_1131[3]},{&g_849,(void*)0,&g_1131[3]},{&g_54[0],&l_1887,&g_67},{&g_849,&g_849,(void*)0}}};
                int i, j, k;
                (*l_1791) = func_36((l_1887 = (safe_div_func_uint16_t_u_u((&l_1108 != ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((*l_1794), (((!(*g_285)) , (g_1891[2][1][1] |= ((g_522[0][1].f3 && (safe_sub_func_int64_t_s_s((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((((1UL >= (&g_1740 != ((*l_1886) = l_1885[0]))) && (*l_1794)) <= (*l_1794)), 13)) <= (*l_1794)), 0x6AL)), 1UL)) , l_1887) ^ l_1888[0]), 0x7D9496B4E8C5239ALL))) > l_1889))) , (***g_1739)))), 1L)), (**l_1791))) >= (**g_970)), l_1892[0][0][1])), (*l_1850))) , l_1893)), 0x9C24L))), g_82.f0.f0);
                ++g_1910;
                l_1895 = &l_1887;
            }
        }
        (*l_1791) = (*l_1791);
        if ((*l_1794))
            continue;
    }
    if ((*g_493))
    { 
        int64_t l_1928 = (-10L);
        uint64_t **l_1943[3][7][1] = {{{&g_763},{(void*)0},{&g_763},{(void*)0},{&g_763},{(void*)0},{&g_763}},{{(void*)0},{&g_763},{(void*)0},{&g_763},{(void*)0},{&g_763},{(void*)0}},{{&g_763},{(void*)0},{&g_763},{(void*)0},{&g_763},{(void*)0},{&g_763}}};
        uint64_t ***l_1942 = &l_1943[0][3][0];
        uint8_t *l_1950 = &g_225[0];
        int32_t l_1975 = 0x63B209ECL;
        int32_t l_1976 = (-1L);
        int32_t l_1977 = 0L;
        int32_t l_1978 = (-8L);
        int32_t l_1979 = 0x27D57B06L;
        int32_t l_1982 = (-3L);
        int32_t l_1984 = (-7L);
        int32_t l_1985 = 1L;
        int32_t l_1987 = 0L;
        int32_t l_1988[6] = {0L,0L,0L,0L,0L,0L};
        int16_t **l_2048[3][5] = {{&g_285,&g_285,&g_285,&g_285,&g_285},{&g_285,&g_285,&g_285,&g_285,&g_285},{&g_285,&g_285,&g_285,&g_285,&g_285}};
        int16_t ***l_2047[4][1][2] = {{{&l_2048[2][1],&l_2048[2][1]}},{{&l_2048[2][1],&l_2048[2][1]}},{{&l_2048[2][1],&l_2048[2][1]}},{{&l_2048[2][1],&l_2048[2][1]}}};
        int16_t ****l_2046 = &l_2047[0][0][0];
        int16_t ****l_2053 = &g_2051;
        int32_t ***l_2089 = &g_236[2][4];
        uint16_t **l_2094 = &g_1724;
        const int32_t **l_2101[7][4][1] = {{{(void*)0},{&g_388},{&g_388},{&g_388}},{{&g_388},{&g_388},{&g_388},{&g_388}},{{(void*)0},{(void*)0},{(void*)0},{&g_388}},{{&g_388},{&g_388},{&g_388},{&g_388}},{{&g_388},{&g_388},{(void*)0},{(void*)0}},{{(void*)0},{&g_388},{&g_388},{&g_388}},{{&g_388},{&g_388},{&g_388},{&g_388}}};
        uint32_t l_2135 = 0x7E24B3D2L;
        union U1 ***l_2139 = &g_401;
        union U1 *** const *l_2138[7];
        int32_t *l_2163 = (void*)0;
        int32_t l_2179 = 0xBDDDD630L;
        int8_t *l_2200 = &g_1891[2][4][5];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_2138[i] = &l_2139;
        for (l_1822 = 0; (l_1822 < 34); l_1822 = safe_add_func_int64_t_s_s(l_1822, 6))
        { 
            int32_t l_1925 = 0xAF4832C5L;
            int8_t *l_1926[3][1][7] = {{{&g_1891[4][2][0],&g_1891[2][1][1],&g_1891[4][2][0],&g_1891[4][2][0],&g_1891[2][1][1],&g_1891[4][2][0],&g_1891[4][2][0]}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_1891[2][1][1],&g_1891[4][2][0],&g_1891[4][2][0],&g_1891[2][1][1],&g_1891[4][2][0],&g_1891[4][2][0],&g_1891[4][2][0]}}};
            int32_t l_1927 = 0x4C006724L;
            int32_t **l_1929 = &g_86;
            int i, j, k;
            l_1928 ^= ((9UL || (l_1927 &= ((safe_add_func_int16_t_s_s((g_881[2].f0.f0 ^ (*l_1850)), (safe_rshift_func_int16_t_s_s((*g_285), 2)))) == (g_1342 & (safe_lshift_func_int8_t_s_u((((*g_709) = (safe_sub_func_uint32_t_u_u((((g_879[0][0][2].f0.f2 != (safe_sub_func_uint16_t_u_u((&g_146 == (void*)0), 0xA04AL))) < g_209) & (*l_1850)), l_1925))) | 0xFF9D715B3014272FLL), l_1925)))))) <= l_1925);
            (*l_1929) = &l_1927;
        }
        for (g_139 = 0; (g_139 >= 12); g_139++)
        { 
            const int64_t l_1932 = (-1L);
            for (g_132 = 0; (g_132 <= 5); g_132 += 1)
            { 
                for (g_352 = 1; (g_352 <= 5); g_352 += 1)
                { 
                    int i;
                    if (g_1131[g_132])
                        break;
                    (*l_1850) ^= (-1L);
                    if (l_1932)
                        continue;
                }
            }
            (*l_1850) &= (safe_lshift_func_int16_t_s_u(l_1928, 2));
        }
        for (g_132 = 0; g_132 < 4; g_132 += 1)
        {
            l_1847[g_132] = 0xFAE99113L;
        }
        if ((safe_sub_func_uint16_t_u_u((((((g_1939[6] = g_1939[2]) != l_1942) >= (((safe_rshift_func_uint16_t_u_s(0x5B53L, 3)) ^ 0x55AAL) == 0x9AL)) <= (safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((*l_1950)--), (((((((0x248730C0L | (((-7L) == l_1928) , g_1450[1][1][3])) , l_1928) >= (*l_1850)) , (*l_1850)) , (*g_709)) | (*g_763)) , 0xE8L))) , g_82.f1), (*l_1850)))) != g_879[0][0][2].f1), (*g_285))))
        { 
            int32_t l_1963 = 1L;
            int32_t *l_1964 = &l_1907;
            int32_t *l_1965 = &g_1131[1];
            int32_t *l_1966 = &l_1907;
            int32_t *l_1967 = &l_1774;
            int32_t *l_1968 = &g_87;
            int32_t *l_1969 = &l_1909;
            int32_t *l_1970 = &g_750;
            int32_t *l_1971 = (void*)0;
            int32_t *l_1972 = &g_54[1];
            int32_t *l_1973 = &g_750;
            int32_t *l_1974[2][4];
            int16_t l_1983 = 0x28F4L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1974[i][j] = &g_54[1];
            }
            (*l_1850) = ((0xED949AE79F0A0A05LL == 0UL) != (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(((((&g_968[0][2] != &g_968[1][1]) ^ (((l_1928 && ((((((safe_lshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s((g_1450[2][0][3] >= ((**g_708) > (*l_1850))), (-5L))) > (*l_1850)), 1)) ^ (*l_1850)) , &g_968[0][4]) != (void*)0) & g_522[0][1].f3) ^ (*l_1850))) <= 255UL) ^ g_881[2].f0.f1)) != (*g_493)) < g_82.f0.f3), 1)), 0x0D1D3B42CE3AA260LL)));
            l_1990--;
        }
        else
        { 
            uint64_t l_2001 = 0x1476629737D23CDFLL;
            int32_t l_2019 = 0x397ED872L;
            int32_t l_2020 = 0x473C49C1L;
            int32_t l_2023 = 0xB01F4244L;
            int32_t l_2024[2][5] = {{0x4F5523E9L,0xE13268AAL,(-7L),(-7L),0xE13268AAL},{0x4F5523E9L,0xE13268AAL,(-7L),(-7L),0xE13268AAL}};
            int16_t l_2026[5];
            int32_t ***l_2087 = &g_236[1][6];
            int16_t ** const *l_2141 = &l_2048[0][0];
            int16_t ** const **l_2140[6][4][5] = {{{&l_2141,&l_2141,&l_2141,(void*)0,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,(void*)0}},{{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,(void*)0,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141}},{{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141}},{{&l_2141,&l_2141,(void*)0,(void*)0,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,(void*)0,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141}},{{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,(void*)0},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141}},{{&l_2141,&l_2141,(void*)0,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141},{&l_2141,&l_2141,&l_2141,&l_2141,&l_2141}}};
            int32_t *l_2146[7] = {&l_2134,&l_2134,&l_2134,&l_2134,&l_2134,&l_2134,&l_2134};
            const uint64_t l_2159 = 1UL;
            union U1 *** const **l_2180[6] = {&l_2138[4],&l_2138[4],&l_2138[4],&l_2138[4],&l_2138[4],&l_2138[4]};
            int64_t ****l_2191[4][1] = {{(void*)0},{&g_2189},{(void*)0},{&g_2189}};
            uint32_t *l_2194 = &g_146;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_2026[i] = 0xA8F9L;
            for (g_82.f2 = (-10); (g_82.f2 >= 42); g_82.f2++)
            { 
                uint64_t l_1995 = 0x73C2834634F7041CLL;
                if (l_1995)
                    break;
                return l_1995;
            }
            if ((((0x0A739D29L | g_879[0][0][2].f3) <= ((*g_1341) = 7UL)) , (((safe_sub_func_int64_t_s_s((*g_709), l_1988[3])) , (!(safe_lshift_func_uint8_t_u_u(255UL, 6)))) != ((l_2001 ^ 0x44L) ^ l_1988[3]))))
            { 
                int32_t l_2015 = (-9L);
                int32_t l_2021[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int8_t l_2025 = 0x44L;
                int32_t l_2097 = (-1L);
                int i;
                if ((((+((***g_1739)++)) == (safe_div_func_uint8_t_u_u((0xFF8DFF8C772F0069LL ^ (!(safe_sub_func_uint32_t_u_u((((0xA7DA30CBL & (*l_1850)) || (0UL != (*l_1850))) <= (safe_unary_minus_func_uint64_t_u(0x4E340E315AA069AFLL))), ((safe_lshift_func_int16_t_s_s((l_2015 > 0x6426FA2C5C385E48LL), 12)) & (*l_1850)))))), 255UL))) != l_2001))
                { 
                    int32_t *l_2017 = &g_750;
                    int32_t *l_2018[2][1];
                    uint32_t *l_2041 = &g_1717;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2018[i][j] = &l_1987;
                    }
                    (*l_1850) ^= (!(**g_708));
                    l_2031++;
                    l_2027 ^= (l_2021[4] |= (g_139 || (g_67 || (0x2BF80AFD421DEF15LL == ((safe_div_func_uint32_t_u_u(g_2036, (*g_493))) < (safe_add_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((*l_2041) &= (l_1976 | (((*g_1341) = ((*g_763) &= (l_2015 && l_1988[5]))) == 1UL))), l_1976)) >= 0xC3L), 0x2B8DL)))))));
                }
                else
                { 
                    int16_t *****l_2049 = &l_2046;
                    int16_t *****l_2052[7][2][3] = {{{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]},{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]}},{{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]},{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]}},{{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]},{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]}},{{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]},{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]}},{{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]},{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]}},{{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]},{&g_2050[1][3][0],(void*)0,&g_2050[1][3][0]}},{{&g_2050[1][3][0],&g_2050[1][3][0],&g_2050[2][2][1]},{&g_2050[2][2][1],&g_2050[1][3][0],&g_2050[2][2][1]}}};
                    uint32_t *l_2062[5][4] = {{&l_27.f1,&g_881[2].f0.f1,&l_27.f1,&g_881[2].f0.f1},{&l_27.f1,&g_881[2].f0.f1,&l_27.f1,&g_881[2].f0.f1},{&l_27.f1,&g_881[2].f0.f1,&l_27.f1,&g_881[2].f0.f1},{&l_27.f1,&g_881[2].f0.f1,&l_27.f1,&g_881[2].f0.f1},{&l_27.f1,&g_881[2].f0.f1,&l_27.f1,&g_881[2].f0.f1}};
                    int32_t l_2063[2][6] = {{(-9L),1L,0xB77CE632L,0xB77CE632L,1L,(-9L)},{0x7723E4D7L,(-9L),0xB77CE632L,(-9L),0x7723E4D7L,0x7723E4D7L}};
                    int8_t *l_2064 = (void*)0;
                    int8_t *l_2065 = (void*)0;
                    int8_t *l_2066 = &g_2036;
                    int i, j, k;
                    l_1988[4] = (safe_lshift_func_int8_t_s_u(((*l_2066) = ((safe_mul_func_uint16_t_u_u((*l_1850), ((((*l_2049) = l_2046) != (l_2053 = g_2050[1][3][0])) >= l_2024[0][4]))) <= (safe_lshift_func_int16_t_s_s((((l_1976 = (((safe_mul_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((**g_708) , g_522[0][1].f3), ((void*)0 != &g_1739))), (*l_1850))) | (*l_1850)), l_2026[0])) | g_522[0][1].f2) , l_1978)) , l_2063[0][0]) == l_2021[4]), 8)))), 7));
                }
                if ((g_2067 != (**g_708)))
                { 
                    uint32_t l_2068[7];
                    int8_t *l_2084 = &l_1980[2][1];
                    int32_t ****l_2088 = &l_2087;
                    const uint16_t *l_2091 = &g_352;
                    const uint16_t **l_2090[7][5][4] = {{{&l_2091,(void*)0,(void*)0,&l_2091},{(void*)0,&l_2091,&l_2091,&l_2091},{&l_2091,(void*)0,&l_2091,&l_2091},{&l_2091,&l_2091,&l_2091,(void*)0},{&l_2091,(void*)0,&l_2091,&l_2091}},{{&l_2091,(void*)0,(void*)0,&l_2091},{(void*)0,(void*)0,&l_2091,(void*)0},{(void*)0,(void*)0,&l_2091,&l_2091},{(void*)0,(void*)0,(void*)0,&l_2091},{&l_2091,&l_2091,&l_2091,&l_2091}},{{&l_2091,&l_2091,&l_2091,&l_2091},{&l_2091,&l_2091,&l_2091,(void*)0},{&l_2091,&l_2091,&l_2091,(void*)0},{(void*)0,(void*)0,(void*)0,&l_2091},{&l_2091,(void*)0,(void*)0,&l_2091}},{{&l_2091,(void*)0,(void*)0,&l_2091},{(void*)0,&l_2091,&l_2091,&l_2091},{(void*)0,&l_2091,&l_2091,&l_2091},{(void*)0,&l_2091,(void*)0,&l_2091},{&l_2091,&l_2091,&l_2091,&l_2091}},{{&l_2091,&l_2091,(void*)0,&l_2091},{&l_2091,(void*)0,&l_2091,&l_2091},{(void*)0,(void*)0,&l_2091,&l_2091},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_2091,&l_2091,&l_2091,(void*)0}},{{&l_2091,&l_2091,(void*)0,&l_2091},{(void*)0,&l_2091,&l_2091,&l_2091},{&l_2091,&l_2091,&l_2091,&l_2091},{(void*)0,(void*)0,&l_2091,&l_2091},{&l_2091,(void*)0,(void*)0,(void*)0}},{{&l_2091,(void*)0,&l_2091,&l_2091},{(void*)0,(void*)0,&l_2091,&l_2091},{&l_2091,(void*)0,&l_2091,(void*)0},{(void*)0,&l_2091,(void*)0,&l_2091},{&l_2091,(void*)0,&l_2091,&l_2091}}};
                    const uint16_t ***l_2092[2];
                    int32_t l_2096 = 7L;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_2068[i] = 0x3990FFCBL;
                    for (i = 0; i < 2; i++)
                        l_2092[i] = (void*)0;
                    (*l_1850) |= (l_2024[0][3] |= l_2068[4]);
                    (*l_1850) |= ((safe_mul_func_uint8_t_u_u(((**g_708) , ((!l_2068[4]) , (safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((l_1975 < ((((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((g_187 |= ((((safe_rshift_func_int8_t_s_s(((*l_2084) = g_881[2].f0.f0), 2)) ^ (((((*g_285) = 0x4B10L) || ((l_2089 = ((*l_2088) = l_2087)) != (g_522[0][1] , (void*)0))) , l_2021[1]) && l_2096)) , 1UL) < (**g_708))), 1)), l_1985)) , (**g_708)) != (-1L)) == (-1L))), l_1975)) & g_225[3]), l_2097)), (*g_1341))))), 0x11L)) > l_1928);
                    return (*g_763);
                }
                else
                { 
                    uint64_t l_2098[4][4][3] = {{{6UL,0UL,0UL},{0UL,0UL,0xC406D13B53BB8E87LL},{6UL,0UL,0xD9E10D4F074C2865LL},{0x87C1246BF972A186LL,0UL,0xC406D13B53BB8E87LL}},{{0x87C1246BF972A186LL,18446744073709551610UL,6UL},{0x0A685D562BBFFE05LL,18446744073709551615UL,6UL},{18446744073709551615UL,9UL,0UL},{0x0A685D562BBFFE05LL,9UL,0x6F271719B2E0BA89LL}},{{18446744073709551610UL,18446744073709551615UL,0UL},{18446744073709551610UL,18446744073709551610UL,6UL},{0x0A685D562BBFFE05LL,18446744073709551615UL,6UL},{18446744073709551615UL,9UL,0UL}},{{0x0A685D562BBFFE05LL,9UL,0x6F271719B2E0BA89LL},{18446744073709551610UL,18446744073709551615UL,0UL},{18446744073709551610UL,18446744073709551610UL,6UL},{0x0A685D562BBFFE05LL,18446744073709551615UL,6UL}}};
                    const int32_t ***l_2102 = &l_2101[2][3][0];
                    int8_t *l_2103 = &g_1891[2][1][1];
                    int32_t l_2114 = 0x98316328L;
                    int i, j, k;
                    --l_2098[1][0][1];
                    (*l_2102) = l_2101[2][3][0];
                    (*l_1850) = (((0xFB3AL && (((g_879[0][0][2].f2 || ((*l_2103) = g_225[1])) != l_2098[1][0][1]) <= ((*g_285) = ((safe_div_func_uint64_t_u_u(((*g_763) ^= (l_2098[1][3][0] > (((void*)0 != l_2106) == g_879[0][0][2].f3))), 0xA11E95E8B2C41968LL)) , (*g_285))))) || g_2107) ^ 1L);
                    (*l_1850) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((**g_1740) = ((**g_1723) = (((void*)0 == &l_2026[4]) | (((*g_285) = (safe_rshift_func_int16_t_s_u((1UL ^ (l_2114 = l_2098[1][0][1])), (g_352 & ((-3L) && 0L))))) >= 8UL)))) > (*l_1850)), 1)), 255UL));
                }
                for (l_1909 = 0; (l_1909 <= 3); l_1909 += 1)
                { 
                    int8_t *l_2128[5][7][7] = {{{&g_2030[5],&g_2036,&l_2025,&l_1980[2][1],&l_2025,&l_1980[2][0],&l_2025},{&l_2025,(void*)0,&g_2036,&l_1980[2][1],&l_1980[2][0],&l_2025,(void*)0},{&l_1980[2][1],(void*)0,&l_2025,&g_187,&g_187,&g_1891[4][2][3],(void*)0},{(void*)0,&l_1980[3][1],(void*)0,&g_2036,(void*)0,&l_2025,&l_1980[2][1]},{&g_1891[2][1][1],&l_2025,(void*)0,&g_1891[4][2][3],&g_187,&l_2025,&g_2030[5]},{&g_1891[4][2][3],&g_2030[5],(void*)0,(void*)0,&g_2030[5],&g_1891[4][2][3],&l_1980[4][1]},{&l_1980[2][1],&l_1980[2][1],&l_2025,&g_2030[5],&g_2036,&l_2025,&g_2030[6]}},{{&l_2025,(void*)0,&l_2025,&l_1980[4][1],&l_1980[2][1],&l_1980[2][0],&g_2036},{&l_1980[2][1],&l_1980[2][1],&l_1980[3][1],&l_2025,&l_1980[4][1],&g_2036,&g_187},{(void*)0,&g_2030[5],&l_1980[2][1],&l_1980[2][1],(void*)0,&l_2025,&l_1980[2][1]},{(void*)0,&l_2025,&l_1980[2][1],(void*)0,(void*)0,&g_2030[5],&g_2030[5]},{&l_1980[4][1],&l_1980[3][1],(void*)0,&l_1980[3][1],&l_1980[4][1],&l_2025,&l_2025},{(void*)0,(void*)0,&l_1980[0][1],&g_2036,&l_1980[2][1],&g_2030[5],(void*)0},{&g_2036,(void*)0,&g_2036,&g_2030[6],&g_2036,&l_2025,&l_1980[0][1]}},{{(void*)0,&g_2036,&g_2030[5],(void*)0,&g_2030[5],&l_1980[2][1],&l_1980[2][1]},{&l_1980[4][1],&g_2036,&g_187,&g_2036,&g_187,(void*)0,&l_1980[2][1]},{(void*)0,&g_187,&g_2030[5],&g_2036,(void*)0,(void*)0,(void*)0},{(void*)0,&l_2025,&l_2025,(void*)0,&g_187,&l_1980[2][1],&g_2036},{&l_1980[2][1],(void*)0,&g_1891[2][1][1],&g_2030[6],&l_1980[2][0],&g_2036,&g_1891[2][1][1]},{&l_2025,&l_1980[2][1],&g_2030[5],&g_2036,&l_2025,&l_1980[2][1],&g_2036},{&l_1980[2][1],&g_1891[4][2][3],(void*)0,&l_1980[3][1],(void*)0,&g_2036,(void*)0}},{{&g_1891[4][2][3],(void*)0,(void*)0,(void*)0,&g_2030[5],&g_1891[2][1][1],&l_1980[2][1]},{&g_1891[2][1][1],&g_2036,&l_2025,&l_2025,&l_1980[2][1],&l_1980[2][1],&l_2025},{&l_1980[2][1],&l_1980[2][1],&l_1980[2][1],(void*)0,&g_2036,&l_1980[2][0],&l_1980[4][1]},{&l_1980[2][1],&g_2036,(void*)0,&l_1980[2][1],&g_1891[2][1][1],&g_2030[5],&l_1980[2][1]},{(void*)0,(void*)0,&l_1980[2][1],(void*)0,&g_187,&l_1980[2][0],&g_1891[2][1][1]},{&g_2036,&g_2030[5],(void*)0,&g_2030[5],&l_1980[2][1],&l_1980[2][1],(void*)0},{&l_1980[2][0],&l_2025,&g_2036,(void*)0,(void*)0,&g_2030[6],&l_1980[2][1]}},{{&g_2036,&l_2025,&g_2036,&l_2025,&l_2025,&l_2025,&g_2036},{&g_2030[5],&g_2030[5],&g_2030[5],&l_1980[2][0],&l_1980[3][1],&l_2025,(void*)0},{&g_1891[4][2][3],(void*)0,&l_2025,&g_1891[2][1][1],&l_1980[2][0],&g_2036,&g_2036},{&g_187,&g_2036,&l_1980[4][1],&l_2025,&l_1980[3][1],&l_1980[2][1],&l_1980[2][1]},{(void*)0,&l_1980[2][1],&l_1980[0][1],&g_2030[6],&l_2025,&l_1980[3][1],&g_2030[5]},{&g_2030[5],(void*)0,&g_2030[5],(void*)0,(void*)0,&l_2025,&g_1891[2][1][1]},{&g_2030[5],(void*)0,&l_2025,&l_1980[2][1],&l_1980[2][1],&l_2025,(void*)0}}};
                    uint8_t l_2131 = 0x7EL;
                    int32_t l_2133[5][6][3] = {{{1L,(-1L),7L},{1L,(-1L),1L},{5L,1L,0xA00A49CFL},{0xE7C4BEF2L,1L,0xAA047A85L},{(-10L),(-1L),0xD3EC5925L},{0x6B8FCFDFL,(-1L),(-10L)}},{{(-10L),0x108AC6A7L,1L},{0xE7C4BEF2L,0xF93D6D71L,1L},{5L,0L,(-10L)},{1L,0x01544EF6L,0xD3EC5925L},{1L,0L,0xAA047A85L},{(-1L),0xF93D6D71L,0xA00A49CFL}},{{(-1L),0x108AC6A7L,1L},{1L,(-1L),7L},{1L,(-1L),1L},{5L,1L,0xA00A49CFL},{0xE7C4BEF2L,1L,0xAA047A85L},{(-10L),(-1L),0xD3EC5925L}},{{0x6B8FCFDFL,(-1L),(-10L)},{(-10L),0x108AC6A7L,1L},{0xE7C4BEF2L,0xF93D6D71L,1L},{5L,0L,(-10L)},{1L,0x01544EF6L,0xD3EC5925L},{1L,0L,0xAA047A85L}},{{(-1L),0xF93D6D71L,0xA00A49CFL},{(-1L),0x108AC6A7L,1L},{1L,(-1L),7L},{1L,(-1L),1L},{5L,1L,0xA00A49CFL},{0xE7C4BEF2L,1L,0xAA047A85L}}};
                    int i, j, k;
                    g_2132 ^= (((l_1847[l_1909] != l_2023) , ((!(safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(0x662CD814L, (safe_mod_func_int64_t_s_s((**g_708), (safe_lshift_func_int8_t_s_s(l_2021[1], ((safe_lshift_func_int8_t_s_s((g_2030[5] = 1L), (safe_div_func_uint16_t_u_u(((l_1847[l_1909] | l_2021[1]) <= (*l_1850)), 0xC516L)))) && 8UL))))))) , (**g_1740)), (***g_1739))) , g_82.f3), l_2021[3]))) , (*g_709))) && l_2131);
                    ++l_2135;
                    l_2138[0] = &g_400;
                }
                l_1977 &= (&g_2051 != l_2140[0][2][4]);
                (*l_1850) |= l_1987;
            }
            else
            { 
                uint64_t l_2148 = 0xD26275C866A3AEE2LL;
                int32_t l_2150 = 0xEE8C25C5L;
                int32_t *l_2154 = &l_2024[1][2];
                uint8_t l_2164 = 250UL;
                int32_t **l_2167 = &l_2154;
                if (((*l_1850) = (safe_sub_func_uint32_t_u_u((65535UL ^ (*g_1724)), ((safe_sub_func_int16_t_s_s(((l_2146[0] != (void*)0) <= ((void*)0 == l_2147)), ((*g_285) = (*g_285)))) <= l_2148)))))
                { 
                    uint32_t l_2149[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2149[i] = 3UL;
                    return l_2149[1];
                }
                else
                { 
                    l_2150 = 0xA55CE7A7L;
                }
                for (l_2134 = 0; (l_2134 == 26); ++l_2134)
                { 
                    int32_t **l_2153[3];
                    uint64_t * const *l_2160[1][1][1];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_2153[i] = &g_86;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_2160[i][j][k] = &g_1341;
                        }
                    }
                    l_2154 = (void*)0;
                    l_2163 = func_36(((**l_1786) = (safe_mod_func_int16_t_s_s((*g_285), (safe_mod_func_int32_t_s_s(l_2159, (g_1891[2][1][1] | ((*l_1850) = (((void*)0 == l_2160[0][0][0]) | ((*g_709) = (**g_708)))))))))), ((safe_add_func_int8_t_s_s(0x88L, g_1008)) == 0UL));
                    ++l_2164;
                }
                (*l_2167) = &l_2150;
                (**l_2167) = (((g_2168 = l_1950) == (void*)0) && (((((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(0L, (g_1008 <= (safe_mul_func_uint8_t_u_u(((*l_2154) , (safe_add_func_int32_t_s_s((*g_493), ((safe_add_func_int64_t_s_s((**l_2167), l_2179)) && (*g_493))))), 5UL))))), 0x3FAF67CDL)) > (*l_2154)) > (**g_708)) , (*g_2168)) == 0xE4L));
            }
            g_2181 = &g_400;
            l_2179 |= (safe_mul_func_int8_t_s_s(((**g_708) | (6UL & (safe_sub_func_int32_t_s_s(((l_2187 != (g_2189 = g_2189)) >= (l_2192 & ((*l_1850) & ((((+((*l_2194) ^= g_2036)) | l_2195[0]) <= (*g_1341)) || 0x112E7AF4L)))), g_8)))), l_2196));
            return (*l_1850);
        }
        l_1987 = (l_2197 >= ((*l_2200) ^= ((safe_lshift_func_uint16_t_u_u((1UL && ((*l_1850) ^= (&g_1717 == ((**g_708) , &g_1717)))), 3)) , 0x5CL)));
    }
    else
    { 
        uint8_t l_2203 = 0x9BL;
        int32_t **l_2225 = &l_1850;
        union U1 l_2226 = {{18446744073709551607UL,0UL,-1L,0x46B4ABC83731A3DALL}};
        uint8_t *l_2228 = &g_225[0];
        int8_t l_2229 = (-9L);
        int32_t **l_2245 = (void*)0;
        int64_t * const **l_2251 = &g_708;
        int64_t * const ***l_2250[1][2];
        uint16_t l_2254 = 0xE100L;
        uint16_t l_2289 = 0UL;
        int64_t l_2322 = 0L;
        uint16_t ***l_2328 = &l_2147;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_2250[i][j] = &l_2251;
        }
        (*g_86) |= ((safe_sub_func_int8_t_s_s(0x79L, 0UL)) >= l_2203);
        (*l_1850) = (+(safe_lshift_func_int16_t_s_s(((**g_970) == ((safe_div_func_int8_t_s_s(((((*g_285) |= (safe_unary_minus_func_uint8_t_u(((((safe_div_func_int8_t_s_s((l_2214 == (((((*l_2228) = (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s(g_2036, 3)) != (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((((**g_401) , ((*g_709) = (l_2224[0][1][0] != l_2225))) , (g_2227 = ((func_21(func_21(l_2226, (*g_763), g_139), (**l_2225), g_2030[2]) , (**g_401)) , &g_2050[1][3][0]))) != (void*)0) == (**l_2225)), 0)), (**l_2225)))), (**l_2225)))) , (void*)0) != (void*)0) , &g_2182[2])), l_2229)) > 0x0454L) , (-1L)) > (**l_2225))))) , (**l_2225)) , l_2230), 0x14L)) <= 6L)), 7)));
        for (l_1907 = 0; (l_1907 < (-11)); l_1907 = safe_sub_func_uint8_t_u_u(l_1907, 3))
        { 
            uint8_t l_2235 = 252UL;
            for (g_1557 = 0; (g_1557 != 48); g_1557 = safe_add_func_uint64_t_u_u(g_1557, 8))
            { 
                if (l_2235)
                    break;
            }
        }
        for (l_1792 = 0; (l_1792 <= (-23)); --l_1792)
        { 
            struct S0 *l_2239 = &g_522[0][2];
            struct S0 **l_2238 = &l_2239;
            int32_t *l_2247 = (void*)0;
            uint8_t l_2287[2][1][1];
            union U1 l_2313[3] = {{{0xE0FBE80FL,0x80766CAEL,0x64823220L,0UL}},{{0xE0FBE80FL,0x80766CAEL,0x64823220L,0UL}},{{0xE0FBE80FL,0x80766CAEL,0x64823220L,0UL}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_2287[i][j][k] = 255UL;
                }
            }
            (**l_2225) = (-1L);
            (**g_970) = ((void*)0 != &l_2226);
            (*l_2238) = &g_522[1][1];
            for (g_2022 = 0; (g_2022 >= (-26)); g_2022--)
            { 
                const int32_t ***l_2244 = &g_387;
                int32_t l_2246 = 6L;
                uint8_t l_2286[4] = {0UL,0UL,0UL,0UL};
                int i;
            }
        }
    }
    return (*g_1341);
}



static uint16_t  func_4(uint16_t  p_5, uint64_t  p_6, int8_t  p_7)
{ 
    uint64_t l_1146 = 0UL;
    uint32_t l_1149[3];
    int8_t l_1152 = 8L;
    const int32_t l_1173 = 0x56072FAFL;
    int8_t l_1177 = 0x44L;
    int64_t *l_1185 = &g_209;
    int32_t l_1212[1];
    uint32_t l_1269 = 4UL;
    int32_t *l_1285 = (void*)0;
    int32_t **l_1284 = &l_1285;
    int32_t ***l_1283 = &l_1284;
    union U1 *l_1290 = &g_82;
    int32_t l_1301 = 0xF4F93E8DL;
    uint16_t l_1334 = 1UL;
    int32_t *l_1410 = &l_1212[0];
    const int32_t *l_1473 = &g_87;
    int32_t l_1484[7];
    uint64_t **l_1536 = (void*)0;
    uint64_t ***l_1535 = &l_1536;
    union U1 ***l_1544 = &g_401;
    union U1 ****l_1543 = &l_1544;
    int64_t l_1616 = 1L;
    int32_t l_1669 = (-1L);
    int32_t l_1672 = 0x051BE65DL;
    uint32_t l_1673 = 4294967295UL;
    int16_t **l_1677 = &g_285;
    int16_t ***l_1676 = &l_1677;
    uint32_t l_1722[6][6][7] = {{{0x29FBD413L,0x0E165528L,0xD5AFC525L,1UL,0xCDC668E4L,4294967287UL,4294967295UL},{0x44A7637EL,0x25C6C857L,1UL,4UL,0x4BC89AEFL,0x13F92BACL,0x2A921F80L},{0xB93A0108L,0xFCF44EB1L,4294967295UL,0x4BC89AEFL,1UL,0x5B72E390L,0xF79A9D51L},{1UL,4294967294UL,4294967287UL,4294967291UL,0x841A7179L,0x29FBD413L,0xDA42181CL},{0x394D668EL,4294967292UL,0x1D4C08B9L,1UL,0x8FA216FCL,4294967292UL,1UL},{4294967295UL,0UL,0x1D4C08B9L,4294967295UL,0xA4EDC350L,0x4BC89AEFL,4294967292UL}},{{4294967291UL,0xDA42181CL,4294967287UL,0UL,0x10191DD7L,0xF0A30550L,0xC722FB38L},{4294967294UL,0xB93A0108L,4294967295UL,0x3FDA2F94L,4294967292UL,4294967295UL,0x78F68E5AL},{4294967295UL,0UL,1UL,4294967295UL,0xFCF44EB1L,0x8FA216FCL,0x8FA216FCL},{0x600F736DL,0x841A7179L,0x05A09057L,0x841A7179L,0x600F736DL,0xB1DB6D1EL,0xDA42181CL},{0UL,1UL,2UL,0x3FDA2F94L,1UL,0x4F22E6D9L,0xB50C5CBBL},{0x13F92BACL,0x600F736DL,4294967295UL,0x1D4C08B9L,8UL,4294967292UL,1UL}},{{0UL,0x3FDA2F94L,4294967292UL,4294967295UL,0x8E40EDA9L,1UL,4294967295UL},{0x600F736DL,3UL,0xA98BFB95L,1UL,3UL,0x6E8CD014L,4UL},{4294967295UL,0xB50C5CBBL,0x6E8CD014L,5UL,8UL,1UL,0x4BC89AEFL},{4294967294UL,1UL,8UL,0UL,0x2A921F80L,0x5CFFBB14L,4294967291UL},{4294967291UL,0xF79A9D51L,8UL,4UL,0x6E8CD014L,3UL,1UL},{4294967295UL,0x8E40EDA9L,0xF0C8F701L,4294967295UL,0xFCF44EB1L,3UL,4294967295UL}},{{0x394D668EL,0x3FDA2F94L,0x737F200BL,0x2A921F80L,4UL,0x5CFFBB14L,0UL},{1UL,0x6E8CD014L,0x4BC89AEFL,0xB50C5CBBL,0x4F22E6D9L,1UL,0x3FDA2F94L},{0xB93A0108L,0x44A7637EL,4294967295UL,0x8BFBD00DL,0xA4EDC350L,0x6E8CD014L,4294967295UL},{0x44A7637EL,0x841A7179L,1UL,1UL,1UL,1UL,0x841A7179L},{0x10191DD7L,0x4BC89AEFL,8UL,0x78F68E5AL,4294967295UL,4294967292UL,0x3FDA2F94L},{0x5B72E390L,8UL,4294967295UL,2UL,1UL,0x4F22E6D9L,0x1D4C08B9L}},{{0x841A7179L,0xDA42181CL,1UL,0x78F68E5AL,0UL,0xB1DB6D1EL,4294967295UL},{4UL,0x1D4C08B9L,0xA98BFB95L,1UL,4294967292UL,0x8FA216FCL,1UL},{4294967292UL,4UL,0x5B72E390L,0x8BFBD00DL,4294967289UL,4294967295UL,5UL},{0x841A7179L,4294967294UL,0UL,0xB50C5CBBL,0x5664689DL,0xF0A30550L,1UL},{0x6E8CD014L,6UL,0x2ED31275L,4294967292UL,0x0E165528L,0xD982BDE0L,1UL},{4294967295UL,0xA98BFB95L,0x4FBC4DC7L,0UL,0x4BC89AEFL,0x376880C2L,0UL}},{{0xF79A9D51L,0xA98BFB95L,0xB50C5CBBL,1UL,1UL,0x10191DD7L,4294967292UL},{0x5B72E390L,6UL,1UL,1UL,8UL,1UL,0xB93A0108L},{0x821587B2L,3UL,0x376880C2L,0xB450B71EL,0x13F92BACL,0x0E165528L,8UL},{5UL,1UL,1UL,1UL,0x8BFBD00DL,0UL,0x8BFBD00DL},{0xF0C8F701L,1UL,1UL,0xF0C8F701L,8UL,0xD982BDE0L,0x4BC89AEFL},{0xB450B71EL,0xD5AFC525L,0x376880C2L,1UL,0x25C6C857L,8UL,0x2ED31275L}}};
    struct S0 *l_1773 = &g_522[0][1];
    struct S0 **l_1772 = &l_1773;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1149[i] = 0xBBF52B84L;
    for (i = 0; i < 1; i++)
        l_1212[i] = 0xBAD1C73DL;
    for (i = 0; i < 7; i++)
        l_1484[i] = (-10L);
    ++l_1146;
    return (**g_1740);
}



static int64_t  func_15(union U1  p_16, const uint32_t  p_17, struct S0  p_18, int32_t  p_19, int16_t  p_20)
{ 
    int32_t l_1109[5][7][5] = {{{(-5L),0x787FA122L,0x0B34C8DEL,0x099917CEL,(-5L)},{0x76A139FEL,0x4CFE370AL,0xB217F1F6L,0xACD3776DL,0xACD3776DL},{0x85BC6ABFL,0x787FA122L,0x85BC6ABFL,0xF79683F4L,0x6B4A7967L},{0x690808F1L,0x4ECEC92FL,0xEC971A5CL,0x4CFE370AL,(-5L)},{0x06804A25L,0xF79683F4L,1L,7L,(-5L)},{0xACD3776DL,(-1L),0xEC971A5CL,(-5L),(-9L)},{1L,(-10L),0x85BC6ABFL,0x798A5594L,(-1L)}},{{(-5L),0L,0xB217F1F6L,0xEC971A5CL,0L},{0x06804A25L,0x798A5594L,0x0B34C8DEL,0x798A5594L,0x06804A25L},{(-9L),0x4CFE370AL,0x0AF9FF0CL,(-5L),0x4ECEC92FL},{0x85BC6ABFL,1L,(-1L),7L,0x6B4A7967L},{0L,0L,0x536A23BDL,0x4CFE370AL,0x4ECEC92FL},{(-5L),7L,1L,0xF79683F4L,0x06804A25L},{0x4ECEC92FL,(-1L),0x4CFE370AL,0xACD3776DL,0L}},{{1L,0x9BAD9875L,(-1L),0x099917CEL,(-1L)},{0x4ECEC92FL,0x4ECEC92FL,0xCB28903EL,0xEC971A5CL,(-9L)},{(-5L),0x099917CEL,0x0B34C8DEL,0x787FA122L,(-5L)},{0L,0x4CFE370AL,(-2L),0xACD3776DL,(-5L)},{0x85BC6ABFL,0x099917CEL,0x85BC6ABFL,0x9BAD9875L,0x6B4A7967L},{(-9L),0x4ECEC92FL,(-1L),0x4CFE370AL,0xACD3776DL},{0x06804A25L,0x9BAD9875L,1L,(-10L),(-5L)}},{{(-5L),(-1L),(-1L),(-5L),0x690808F1L},{1L,7L,0x85BC6ABFL,1L,(-1L)},{0xACD3776DL,0L,(-2L),0xEC971A5CL,0x76A139FEL},{0x06804A25L,1L,0x0B34C8DEL,1L,0x06804A25L},{0x690808F1L,0x4CFE370AL,0xCB28903EL,(-5L),0L},{0x85BC6ABFL,0x798A5594L,(-1L),(-10L),0x6B4A7967L},{0x76A139FEL,0L,0x4CFE370AL,0x4CFE370AL,0L}},{{(-5L),(-10L),1L,0x9BAD9875L,0x06804A25L},{0L,(-1L),0x536A23BDL,0xACD3776DL,0x76A139FEL},{1L,0xF79683F4L,(-1L),0x787FA122L,(-1L)},{0L,0x4ECEC92FL,0x0AF9FF0CL,0xEC971A5CL,0x690808F1L},{(-5L),0x787FA122L,0x0B34C8DEL,0x099917CEL,(-5L)},{0x76A139FEL,0x4CFE370AL,0xB217F1F6L,0xACD3776DL,0xACD3776DL},{0x85BC6ABFL,0x787FA122L,0x85BC6ABFL,0xF79683F4L,0x6B4A7967L}}};
    int32_t *l_1110[6] = {&g_750,(void*)0,(void*)0,&g_750,(void*)0,(void*)0};
    int32_t l_1111[5][3][4] = {{{(-1L),5L,0x0BA542D9L,0xC0728F43L},{0x518E41DCL,0x41075FD6L,0L,0x0BA542D9L},{1L,1L,0x70087CC7L,(-1L)}},{{1L,0L,0L,1L},{0x518E41DCL,(-1L),0x0BA542D9L,0L},{(-1L),1L,0x8EE4247DL,0xC0728F43L}},{{0x41075FD6L,0x518E41DCL,0L,0xC0728F43L},{0x6C7207ADL,1L,0x6C7207ADL,0L},{1L,(-1L),(-1L),1L}},{{0x41075FD6L,0L,0x0BA542D9L,(-1L)},{0L,1L,0x0BA542D9L,0x0BA542D9L},{0x41075FD6L,0x41075FD6L,(-1L),0xC0728F43L}},{{1L,5L,0x6C7207ADL,(-1L)},{0x6C7207ADL,(-1L),0L,0x6C7207ADL},{0x41075FD6L,(-1L),0x8EE4247DL,(-1L)}}};
    int32_t *l_1115[4][5];
    uint16_t *l_1122 = &g_352;
    uint16_t *l_1129[1];
    int32_t l_1130 = 0xD1CF992DL;
    uint32_t l_1132 = 18446744073709551615UL;
    int64_t *l_1142 = (void*)0;
    uint8_t l_1145 = 0UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_1115[i][j] = &l_1111[3][2][2];
    }
    for (i = 0; i < 1; i++)
        l_1129[i] = &g_765;
    --g_1112;
    l_1115[1][4] = &l_1109[0][6][1];
    l_1145 = (p_19 = ((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((--(*l_1122)), 15)), ((safe_div_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((((l_1132++) | 0x8E80L) != (((*g_86) ^= (safe_rshift_func_int16_t_s_s((*g_285), 5))) != ((~(g_225[0] ^ ((safe_sub_func_int8_t_s_s(0xEBL, (((void*)0 == l_1142) == (safe_sub_func_uint32_t_u_u((p_16.f0.f2 && p_16.f0.f0), p_18.f1))))) | 4L))) <= g_225[3]))), (*g_285))) | (**g_708)) == g_1008), g_879[0][0][2].f0.f1)) , (*g_709)))) == (-3L)), (*g_285))) , p_20));
    return (**g_708);
}



static union U1  func_21(union U1  p_22, uint64_t  p_23, const uint8_t  p_24)
{ 
    uint16_t *l_148 = &g_56;
    uint16_t **l_147 = &l_148;
    int32_t l_155 = 0L;
    int32_t l_156 = 0x98B4FF7EL;
    int32_t l_157 = 0xF730CBF7L;
    int32_t l_158 = 9L;
    int16_t l_159 = 3L;
    int32_t l_160[3][5] = {{0x3E97851FL,1L,1L,0x3E97851FL,1L},{0x3E97851FL,0x3E97851FL,(-8L),0x3E97851FL,0x3E97851FL},{1L,0x3E97851FL,1L,1L,0x3E97851FL}};
    uint32_t l_161 = 0xA33768ACL;
    int32_t l_200 = 8L;
    int64_t *l_212 = &g_209;
    int32_t ** const l_213 = &g_86;
    int32_t l_221 = 0xC071142AL;
    int32_t ***l_238 = &g_236[1][2];
    union U1 *l_246 = &g_82;
    union U1 **l_245[6];
    uint32_t l_252 = 0xAD158495L;
    uint64_t l_278[1][6] = {{0x957AB5B4982E0E20LL,0x957AB5B4982E0E20LL,0x957AB5B4982E0E20LL,0x957AB5B4982E0E20LL,0x957AB5B4982E0E20LL,0x957AB5B4982E0E20LL}};
    int8_t l_430 = 0xA5L;
    int64_t l_431 = 0xFD180341F62EF876LL;
    uint32_t l_478 = 0x73E60D9AL;
    int32_t l_499 = 0xA91D8012L;
    int32_t ****l_502 = (void*)0;
    struct S0 l_510 = {1UL,2UL,0L,18446744073709551608UL};
    uint32_t l_530 = 0x494D3821L;
    uint8_t l_546 = 0x81L;
    uint8_t l_560 = 1UL;
    uint32_t l_595 = 0x68C00933L;
    int32_t l_597 = 0x9050B042L;
    int64_t ***l_810 = (void*)0;
    int64_t * const **l_812[5][7][1] = {{{&g_708},{&g_708},{&g_708},{(void*)0},{&g_708},{&g_708},{&g_708}},{{&g_708},{(void*)0},{&g_708},{&g_708},{&g_708},{(void*)0},{&g_708}},{{&g_708},{&g_708},{&g_708},{(void*)0},{&g_708},{&g_708},{&g_708}},{{(void*)0},{&g_708},{&g_708},{&g_708},{&g_708},{(void*)0},{&g_708}},{{&g_708},{&g_708},{(void*)0},{&g_708},{&g_708},{&g_708},{&g_708}}};
    int32_t *l_822 = &g_522[0][1].f2;
    int32_t **l_821 = &l_822;
    int32_t *** const l_820[1][6] = {{&l_821,&l_821,(void*)0,&l_821,&l_821,(void*)0}};
    int32_t l_868 = 0x044F896AL;
    uint32_t l_870 = 9UL;
    const uint32_t l_974 = 2UL;
    int16_t l_1000 = 0L;
    int32_t * const l_1033 = &g_1034;
    int32_t * const *l_1032 = &l_1033;
    int16_t **l_1037[7] = {&g_285,&g_285,&g_285,&g_285,&g_285,&g_285,&g_285};
    int16_t ***l_1036 = &l_1037[2];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_245[i] = &l_246;
    return p_22;
}



static union U1  func_25(struct S0  p_26)
{ 
    uint16_t l_28 = 0x172DL;
    uint16_t *l_39 = (void*)0;
    uint16_t *l_40 = &l_28;
    int16_t *l_46[1][5][3] = {{{&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47}}};
    int32_t l_48 = 0x07758A8CL;
    int32_t *l_53[1];
    int32_t **l_144 = &l_53[0];
    int32_t *l_145 = &g_82.f0.f2;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_53[i] = &g_54[1];
    ++l_28;
    (*l_144) = (func_31(func_36(((g_43 = (++(*l_40))) == (g_47 = (18446744073709551611UL && (safe_div_func_int16_t_s_s((((l_48 = (0xE630971CL && p_26.f1)) | (+(!(safe_rshift_func_int16_t_s_u(((void*)0 == l_53[0]), 15))))) || 1UL), g_54[1]))))), g_8), g_86, g_56, l_53[0]) , &l_48);
    g_146 ^= (func_31(func_36(((*l_145) |= (l_46[0][4][0] == (void*)0)), (p_26.f0 , g_132)), &g_87, p_26.f3, (*l_144)) , (-1L));
    return g_82;
}



static struct S0  func_31(int32_t * p_32, int32_t * p_33, int8_t  p_34, int32_t * p_35)
{ 
    uint8_t l_122 = 0xB8L;
    int32_t l_143[6] = {0x13692C56L,0x449CDFC8L,0x449CDFC8L,0x13692C56L,0x449CDFC8L,0x449CDFC8L};
    int i;
    for (p_34 = 0; (p_34 != 24); p_34 = safe_add_func_uint8_t_u_u(p_34, 8))
    { 
        union U1 l_105 = {{18446744073709551615UL,0xE1357373L,1L,6UL}};
        uint16_t *l_111 = &g_56;
        uint16_t l_131[6][7][5] = {{{2UL,2UL,65535UL,0x7DA8L,65535UL},{1UL,0UL,0UL,0x7269L,0x77ACL},{0x7DA8L,0UL,0x7DA8L,0x8E9AL,1UL},{0UL,0UL,1UL,0UL,65535UL},{65535UL,2UL,2UL,65535UL,0x7DA8L},{0x3977L,0UL,1UL,65535UL,0xD0CFL},{9UL,0x87E1L,0x7DA8L,0x87E1L,9UL}},{{0x97E1L,0UL,0UL,65535UL,1UL},{0UL,0x475AL,65535UL,65535UL,0x475AL},{0x77ACL,0x0D89L,0x3977L,0UL,1UL},{0x87E1L,65535UL,9UL,0x8E9AL,9UL},{1UL,4UL,0x97E1L,0x7269L,0xD0CFL},{0x87E1L,65535UL,0UL,0x7DA8L,0x7DA8L},{0x77ACL,0x0382L,0x77ACL,0xABFAL,65535UL}},{{0UL,65535UL,0x87E1L,0x475AL,1UL},{0x97E1L,4UL,1UL,0UL,0x77ACL},{9UL,65535UL,0x87E1L,1UL,65535UL},{0x3977L,0x0D89L,0x77ACL,0x0D89L,0x3977L},{65535UL,0x475AL,0UL,1UL,2UL},{0UL,0UL,0x97E1L,0UL,0x36C3L},{0x7DA8L,0x87E1L,9UL,0x475AL,2UL}},{{1UL,0UL,0x3977L,0xABFAL,0x3977L},{2UL,2UL,65535UL,0x7DA8L,65535UL},{1UL,0UL,0UL,0x7269L,0x77ACL},{0x7DA8L,0UL,0x7DA8L,0x8E9AL,1UL},{0UL,0UL,1UL,0UL,65535UL},{65535UL,2UL,2UL,65535UL,0x7DA8L},{0x3977L,0UL,1UL,65535UL,0xD0CFL}},{{9UL,0x87E1L,0x7DA8L,0x87E1L,9UL},{0x97E1L,0UL,0UL,65535UL,1UL},{0UL,0x475AL,65535UL,65535UL,0x475AL},{0x77ACL,0x0D89L,0x3977L,0UL,1UL},{0x87E1L,65535UL,9UL,0x8E9AL,9UL},{1UL,4UL,0x97E1L,0x7269L,0xD0CFL},{0x87E1L,65535UL,0UL,0x7DA8L,0x7DA8L}},{{0x77ACL,0x0382L,0x77ACL,0xABFAL,65535UL},{0UL,65535UL,0x87E1L,0x475AL,65535UL},{1UL,0xABFAL,0x3454L,4UL,0x36C3L},{0UL,2UL,0UL,65535UL,9UL},{0UL,0x0382L,0x36C3L,0x0382L,0UL},{2UL,65535UL,0x7DA8L,65535UL,0x8E9AL},{0x77ACL,0UL,1UL,4UL,0x97E1L}}};
        int i, j, k;
        for (g_67 = 0; (g_67 != (-30)); g_67 = safe_sub_func_uint32_t_u_u(g_67, 1))
        { 
            int8_t l_100 = 0xA0L;
            uint64_t l_115[4][2];
            int8_t *l_133[6][7] = {{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,&l_100},{&l_100,&l_100,&l_100,&l_100,&l_100,&l_100,(void*)0},{(void*)0,&l_100,&l_100,(void*)0,&l_100,&l_100,(void*)0},{&l_100,(void*)0,&l_100,&l_100,(void*)0,&l_100,&l_100},{(void*)0,(void*)0,&l_100,&l_100,&l_100,&l_100,&l_100}};
            uint32_t l_137 = 0UL;
            int32_t *l_138 = &g_54[1];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_115[i][j] = 2UL;
            }
        }
    }
    (*g_86) |= 9L;
    return g_82.f0;
}



static int32_t * func_36(int32_t  p_37, const uint8_t  p_38)
{ 
    uint32_t l_62[2];
    int i;
    for (i = 0; i < 2; i++)
        l_62[i] = 4294967295UL;
    for (g_43 = 1; (g_43 >= 0); g_43 -= 1)
    { 
        struct S0 l_65 = {0UL,0x8CFB9963L,-2L,2UL};
        int32_t *l_66 = &g_67;
        uint16_t *l_68 = (void*)0;
        int i;
        (*l_66) = (g_55[0] != (g_54[g_43] , (g_54[g_43] , func_57(g_54[1], g_43, (((*l_66) = (l_62[0] , (safe_div_func_uint8_t_u_u((l_65 , g_8), 251UL)))) | 1L), l_68))));
    }
    return &g_54[1];
}



static uint16_t * func_57(const uint64_t  p_58, uint64_t  p_59, int8_t  p_60, uint16_t * p_61)
{ 
    uint16_t *l_70 = &g_56;
    uint16_t **l_69 = &l_70;
    int32_t *l_73 = &g_54[1];
    int32_t l_83 = 1L;
    int32_t **l_84 = &l_73;
    (*l_73) ^= ((((*l_69) = p_61) != (void*)0) ^ (safe_lshift_func_uint8_t_u_s(g_56, 7)));
    l_83 |= ((safe_sub_func_uint8_t_u_u((g_54[0] && ((((safe_mul_func_int8_t_s_s(((*l_73) < 1UL), p_59)) , ((safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u((g_82 , 0x8DL), g_47)), g_47)) > (*l_73))) || (*l_73)) <= p_58)), 5UL)) , (*l_73));
    if (g_47)
        goto lbl_85;
lbl_85:
    (*l_84) = &g_67;
    for (g_82.f2 = 0; g_82.f2 < 2; g_82.f2 += 1)
    {
        g_54[g_82.f2] = 0x239D1334L;
    }
    return p_61;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_54[i], "g_54[i]", print_hash_value);

    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_82.f1, "g_82.f1", print_hash_value);
    transparent_crc(g_82.f2, "g_82.f2", print_hash_value);
    transparent_crc(g_82.f3, "g_82.f3", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_225[i], "g_225[i]", print_hash_value);

    }
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_522[i][j].f0, "g_522[i][j].f0", print_hash_value);
            transparent_crc(g_522[i][j].f1, "g_522[i][j].f1", print_hash_value);
            transparent_crc(g_522[i][j].f2, "g_522[i][j].f2", print_hash_value);
            transparent_crc(g_522[i][j].f3, "g_522[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_879[i][j][k].f0.f0, "g_879[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_879[i][j][k].f0.f1, "g_879[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_879[i][j][k].f0.f2, "g_879[i][j][k].f0.f2", print_hash_value);
                transparent_crc(g_879[i][j][k].f0.f3, "g_879[i][j][k].f0.f3", print_hash_value);
                transparent_crc(g_879[i][j][k].f1, "g_879[i][j][k].f1", print_hash_value);
                transparent_crc(g_879[i][j][k].f2, "g_879[i][j][k].f2", print_hash_value);
                transparent_crc(g_879[i][j][k].f3, "g_879[i][j][k].f3", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_881[i].f0.f0, "g_881[i].f0.f0", print_hash_value);
        transparent_crc(g_881[i].f0.f1, "g_881[i].f0.f1", print_hash_value);
        transparent_crc(g_881[i].f0.f2, "g_881[i].f0.f2", print_hash_value);
        transparent_crc(g_881[i].f0.f3, "g_881[i].f0.f3", print_hash_value);
        transparent_crc(g_881[i].f1, "g_881[i].f1", print_hash_value);
        transparent_crc(g_881[i].f2, "g_881[i].f2", print_hash_value);
        transparent_crc(g_881[i].f3, "g_881[i].f3", print_hash_value);

    }
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1112, "g_1112", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1131[i], "g_1131[i]", print_hash_value);

    }
    transparent_crc(g_1342, "g_1342", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1450[i][j][k], "g_1450[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1485, "g_1485", print_hash_value);
    transparent_crc(g_1519, "g_1519", print_hash_value);
    transparent_crc(g_1557, "g_1557", print_hash_value);
    transparent_crc(g_1717, "g_1717", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1891[i][j][k], "g_1891[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1910, "g_1910", print_hash_value);
    transparent_crc(g_1981, "g_1981", print_hash_value);
    transparent_crc(g_2022, "g_2022", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2030[i], "g_2030[i]", print_hash_value);

    }
    transparent_crc(g_2036, "g_2036", print_hash_value);
    transparent_crc(g_2067, "g_2067", print_hash_value);
    transparent_crc(g_2107, "g_2107", print_hash_value);
    transparent_crc(g_2132, "g_2132", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
