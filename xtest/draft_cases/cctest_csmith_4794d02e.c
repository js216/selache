// SPDX-License-Identifier: MIT
// cctest_csmith_4794d02e.c --- cctest case csmith_4794d02e (csmith seed 1200934958)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x68b8a6e8 */

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

// Options:   -s 1200934958 -o /tmp/csmith_gen_qq0vazys/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   uint8_t  f3;
   int32_t  f4;
   int64_t  f5;
   int32_t  f6;
   const int32_t  f7;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   unsigned f1 : 17;
   struct S0  f2;
   int64_t  f3;
};


static int32_t g_7 = 1L;
static uint32_t g_11 = 0xFCE2949FL;
static int32_t g_22 = 0x4A0426A7L;
static int32_t g_31 = 0x32B7B88CL;
static int32_t g_61 = 0x71D1BA05L;
static int8_t g_62 = 0xF9L;
static uint16_t g_63[6] = {65535UL,1UL,65535UL,65535UL,1UL,65535UL};
static int32_t g_89 = 0x3E23DE17L;
static uint32_t g_92 = 0x1200BAF9L;
static int64_t g_134 = 0xA86A19192873BCDALL;
static int64_t g_137[7] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
static int8_t g_145 = 0xA1L;
static uint8_t g_147 = 1UL;
static int16_t g_153 = (-1L);
static int16_t g_155 = 6L;
static uint16_t g_157 = 65535UL;
static uint16_t g_178 = 65535UL;
static int32_t *g_182 = (void*)0;
static const union U1 g_239 = {0x9C60L};
static uint32_t g_241 = 1UL;
static struct S0 g_243 = {0xEDFD8EE761C6CB6CLL,4294967286UL,251UL,0xA7L,1L,-9L,0x3F9EEAFEL,-10L};
static struct S0 *g_242[3][4] = {{&g_243,&g_243,&g_243,&g_243},{&g_243,&g_243,&g_243,&g_243},{&g_243,&g_243,&g_243,&g_243}};
static struct S0 g_246 = {0xDFF747F28776ED50LL,0xF4A1DDCEL,0xBEL,0xDAL,-1L,0x2E776E5D696A6714LL,0xD73731C8L,2L};
static uint16_t g_253 = 0xBE9DL;
static int16_t g_291 = 0L;
static int32_t g_296 = (-1L);
static int16_t g_298[6] = {0xCE1DL,0xCE1DL,0xCE1DL,0xCE1DL,0xCE1DL,0xCE1DL};
static int16_t g_299 = 0x8B5CL;
static uint32_t g_300 = 18446744073709551615UL;
static uint64_t g_379 = 18446744073709551615UL;
static int32_t **g_410 = (void*)0;
static uint32_t **g_445 = (void*)0;
static uint32_t ***g_444[6][7] = {{&g_445,&g_445,&g_445,&g_445,&g_445,&g_445,&g_445},{(void*)0,&g_445,&g_445,(void*)0,&g_445,&g_445,(void*)0},{&g_445,&g_445,&g_445,&g_445,&g_445,&g_445,&g_445},{&g_445,&g_445,(void*)0,&g_445,&g_445,(void*)0,&g_445},{&g_445,&g_445,&g_445,&g_445,&g_445,&g_445,&g_445},{(void*)0,&g_445,(void*)0,(void*)0,&g_445,(void*)0,(void*)0}};
static uint32_t g_510 = 0xA4FB4C69L;
static int64_t g_513 = 0x5B7B2C6A256C074ALL;
static int32_t g_514 = 0x69F4E359L;
static int32_t g_515 = 0x59076EA8L;
static int32_t g_517[3] = {(-1L),(-1L),(-1L)};
static uint32_t g_518 = 8UL;
static int8_t g_581 = (-3L);
static uint64_t g_583 = 18446744073709551615UL;
static uint8_t g_660 = 255UL;
static uint64_t *g_686 = &g_583;
static uint64_t **g_685 = &g_686;
static union U1 **g_709[2][1] = {{(void*)0},{(void*)0}};
static uint32_t g_726 = 1UL;
static uint32_t g_729[5] = {0x6415F41CL,0x6415F41CL,0x6415F41CL,0x6415F41CL,0x6415F41CL};
static union U1 ***g_744 = &g_709[1][0];
static const uint8_t *g_777[4][6] = {{&g_243.f3,&g_660,&g_660,&g_660,&g_243.f3,(void*)0},{&g_660,&g_243.f3,(void*)0,(void*)0,&g_243.f3,&g_660},{&g_660,&g_660,&g_246.f2,&g_243.f3,&g_246.f2,&g_660},{&g_246.f2,&g_660,(void*)0,&g_660,&g_660,(void*)0}};
static const uint8_t **g_776 = &g_777[3][3];
static int8_t g_800 = (-2L);
static int8_t g_801 = (-8L);
static int16_t g_802 = 0x517AL;
static int8_t g_803 = 5L;
static int32_t g_804[1][2] = {{0L,0L}};
static int8_t g_806 = 0x14L;
static int32_t g_807 = 0xFFAFC920L;
static int64_t g_809 = (-1L);
static uint32_t g_811 = 4294967294UL;
static struct S0 **g_825[3] = {&g_242[2][1],&g_242[2][1],&g_242[2][1]};
static struct S0 ***g_824 = &g_825[0];
static uint32_t g_827 = 0x53C66FD4L;
static int32_t g_840 = 0xA0718F7FL;
static uint16_t g_878 = 0UL;
static int8_t g_912 = 0x8FL;
static uint16_t g_922 = 0xF560L;
static struct S0 g_938 = {0xF8E58193AC109D8FLL,0x064AEF8AL,1UL,0x4AL,0L,0x0085F41B37F2309ALL,-8L,0x214C1854L};
static uint32_t g_949 = 0xCB2DA21BL;
static const struct S0 *g_961 = (void*)0;
static const struct S0 **g_960 = &g_961;
static int32_t ***g_975 = &g_410;
static int32_t ****g_974 = &g_975;
static struct S0 g_1006 = {0L,0x2C35FFDCL,255UL,246UL,-1L,1L,0xC35F48A2L,0L};
static int32_t g_1007 = 0x908E90B3L;
static int16_t g_1008 = 0x5231L;
static uint16_t g_1033 = 9UL;
static int8_t *g_1044 = &g_803;
static uint8_t **g_1104[3] = {(void*)0,(void*)0,(void*)0};
static uint16_t g_1167 = 0xE81BL;
static uint32_t g_1304[3] = {0xCBD4D5C1L,0xCBD4D5C1L,0xCBD4D5C1L};
static union U1 ****g_1309[1][7] = {{&g_744,&g_744,&g_744,&g_744,&g_744,&g_744,&g_744}};
static union U1 *****g_1308 = &g_1309[0][6];
static union U1 g_1339 = {0L};
static uint64_t g_1364 = 0UL;
static struct S0 g_1451 = {0x89CE96485F003E32LL,7UL,7UL,0x87L,5L,0x277378114111AD3DLL,8L,4L};
static uint32_t g_1522 = 0UL;
static uint16_t g_1528 = 0xCE11L;
static uint32_t ****g_1579 = &g_444[3][4];
static int32_t g_1585 = 1L;
static const uint16_t g_1672 = 0UL;
static uint16_t **g_1674 = (void*)0;
static int8_t g_1677 = 0x0DL;
static int32_t g_1690 = 0L;
static uint32_t g_1692 = 4294967290UL;
static union U1 *****g_1716 = (void*)0;
static uint8_t g_1823 = 0UL;
static uint64_t ***g_1837 = &g_685;
static const uint8_t g_1844 = 0x8FL;
static int32_t *g_1845 = &g_89;
static uint32_t g_1985 = 4294967295UL;
static int16_t g_1990[6] = {0L,0L,0L,0L,0L,0L};
static uint32_t g_1991 = 0xEC69E200L;
static uint16_t g_2009 = 0x40C8L;
static uint16_t g_2023 = 0xB8AAL;
static uint16_t g_2039 = 65535UL;
static int32_t g_2079 = 0xBE85F5D2L;
static int32_t g_2080[6] = {0xE40E451AL,0xE40E451AL,0xE40E451AL,0xE40E451AL,0xE40E451AL,0xE40E451AL};
static uint16_t g_2081 = 65535UL;
static int32_t g_2111 = 0xF22C0CF6L;
static int8_t g_2112 = 0xD2L;
static int16_t g_2113 = (-9L);
static uint16_t g_2114[4][6][2] = {{{9UL,9UL},{1UL,1UL},{1UL,9UL},{9UL,65527UL},{9UL,65527UL},{9UL,9UL}},{{1UL,1UL},{1UL,9UL},{9UL,65527UL},{9UL,65527UL},{9UL,9UL},{1UL,1UL}},{{1UL,9UL},{9UL,65527UL},{9UL,65527UL},{9UL,9UL},{1UL,1UL},{1UL,9UL}},{{9UL,65527UL},{9UL,65527UL},{9UL,9UL},{1UL,1UL},{1UL,9UL},{9UL,65527UL}}};
static const union U1 *****g_2185 = (void*)0;
static const int16_t *g_2205 = &g_291;
static const int16_t **g_2204 = &g_2205;
static int8_t g_2231 = 1L;
static uint8_t ***g_2240 = &g_1104[2];
static uint8_t ****g_2239[1][7][3] = {{{&g_2240,&g_2240,&g_2240},{&g_2240,&g_2240,&g_2240},{&g_2240,&g_2240,&g_2240},{&g_2240,&g_2240,&g_2240},{&g_2240,&g_2240,&g_2240},{&g_2240,&g_2240,&g_2240},{&g_2240,&g_2240,&g_2240}}};
static int64_t g_2262[5][7] = {{(-2L),0x668BB26C25DF4A0BLL,1L,0x0909C611B41AD8D7LL,0xC38397F78229D0D2LL,0x0909C611B41AD8D7LL,1L},{0x32652A3CE2911FCALL,0x32652A3CE2911FCALL,0x0909C611B41AD8D7LL,0xF2764B86BBDEB4A3LL,(-1L),0L,(-2L)},{0xF2764B86BBDEB4A3LL,0x32652A3CE2911FCALL,(-1L),0L,0L,(-1L),0x32652A3CE2911FCALL},{(-1L),0x668BB26C25DF4A0BLL,0x32652A3CE2911FCALL,1L,(-1L),0x61A2532B57925138LL,0xF2764B86BBDEB4A3LL},{(-1L),(-2L),0xC38397F78229D0D2LL,0x0909C611B41AD8D7LL,0xB471407E5CE624ACLL,0xF2764B86BBDEB4A3LL,0x8D760CC9363E971BLL}};
static uint16_t g_2267 = 65535UL;
static uint32_t g_2300 = 18446744073709551611UL;
static int16_t *g_2306 = &g_155;
static int16_t **g_2305 = &g_2306;
static int16_t ***g_2304 = &g_2305;
static uint64_t * const *g_2328 = &g_686;
static uint64_t * const **g_2327 = &g_2328;
static int16_t g_2479[4] = {0x186AL,0x186AL,0x186AL,0x186AL};
static union U1 g_2642 = {1L};
static int16_t ****g_2650[7] = {&g_2304,&g_2304,&g_2304,&g_2304,&g_2304,&g_2304,&g_2304};
static int16_t *****g_2649 = &g_2650[4];
static int64_t *g_2744 = &g_1339.f3;
static int64_t **g_2743 = &g_2744;
static int16_t g_2769[3][4] = {{0x1FE0L,(-1L),0x1FE0L,0x1FE0L},{(-1L),(-1L),1L,(-1L)},{(-1L),0x1FE0L,0x1FE0L,(-1L)}};
static uint32_t g_2770 = 4294967290UL;
static int8_t g_2799 = (-4L);
static int32_t g_2800 = 0x78C007C7L;
static int32_t g_2801 = (-6L);
static int32_t g_2802 = 0x73196E86L;
static uint8_t g_2804 = 0x3CL;
static int8_t g_2844 = 3L;
static int32_t g_2918 = 0x1D825807L;
static int32_t g_2919[5][1] = {{0x51C98162L},{0x51C98162L},{0x51C98162L},{0x51C98162L},{0x51C98162L}};
static int32_t *****g_3052[4][2][1] = {{{&g_974},{&g_974}},{{&g_974},{&g_974}},{{&g_974},{&g_974}},{{&g_974},{&g_974}}};
static uint8_t *g_3056 = &g_1451.f3;
static const int16_t g_3091 = (-10L);
static int8_t g_3104 = (-6L);
static const uint64_t *g_3150 = &g_379;
static const uint64_t **g_3149 = &g_3150;
static const uint64_t ***g_3148 = &g_3149;
static const uint64_t ****g_3147 = &g_3148;
static union U1 g_3171[2] = {{-4L},{-4L}};
static const uint16_t ***g_3193 = (void*)0;
static const uint16_t ****g_3192[5] = {&g_3193,&g_3193,&g_3193,&g_3193,&g_3193};
static uint8_t g_3227[4][4] = {{250UL,250UL,250UL,250UL},{250UL,250UL,250UL,250UL},{250UL,250UL,250UL,250UL},{250UL,250UL,250UL,250UL}};
static union U1 g_3230 = {0x870AL};
static struct S0 **g_3274 = &g_242[2][1];
static struct S0 g_3343 = {0xB4629DF3969E9319LL,3UL,0x4FL,0xAFL,0L,0x67AE587D5A8D3798LL,-1L,0xF459B2C1L};
static int32_t g_3407 = 0x37DBC9A0L;
static int64_t g_3451[7] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
static uint64_t g_3467 = 18446744073709551615UL;
static union U1 *g_3531 = &g_3230;
static uint32_t g_3548 = 7UL;
static uint64_t *** const *g_3570 = &g_1837;
static uint64_t *** const **g_3569[6] = {&g_3570,&g_3570,&g_3570,&g_3570,&g_3570,&g_3570};
static const int32_t g_3627 = (-1L);
static int32_t g_3634[1] = {1L};
static union U1 g_3655 = {0xD1CCL};
static const uint32_t g_3668 = 0UL;
static int8_t g_3669 = 0xBDL;
static uint8_t g_3810[4] = {255UL,255UL,255UL,255UL};
static const uint32_t g_3874[4] = {0xAAF2AE6CL,0xAAF2AE6CL,0xAAF2AE6CL,0xAAF2AE6CL};
static const uint32_t g_3876 = 0x102B3B92L;
static int32_t g_3921 = 0L;
static int16_t g_3953 = 1L;
static uint64_t g_3963[2][2] = {{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}};
static int32_t g_3975 = 1L;



static int8_t  func_1(void);
static int32_t  func_12(uint32_t * p_13, uint32_t * p_14, int64_t  p_15);
static uint32_t * func_16(uint32_t * p_17, int32_t  p_18, uint32_t * p_19);
static int32_t * func_27(const uint32_t * p_28);
static uint64_t  func_78(uint16_t  p_79, uint32_t * const  p_80, int32_t * p_81);
static int32_t * func_97(struct S0  p_98, int32_t  p_99, union U1  p_100, const int32_t  p_101);
static struct S0  func_102(uint64_t  p_103, int64_t  p_104, uint64_t  p_105, int64_t  p_106);
static int64_t  func_108(int32_t * p_109, int32_t  p_110);




static int8_t  func_1(void)
{ 
    uint32_t l_4 = 0xC04CCB63L;
    uint32_t *l_20 = &g_11;
    int32_t *l_3059 = &g_2919[3][0];
    int32_t l_3068 = (-5L);
    int32_t l_3069 = 1L;
    int32_t l_3070 = 1L;
    int32_t l_3071 = (-10L);
    int32_t l_3073 = 0xCA9D5E54L;
    const union U1 *l_3140[5] = {&g_1339,&g_1339,&g_1339,&g_1339,&g_1339};
    const union U1 **l_3139[5][1][5] = {{{&l_3140[0],(void*)0,&l_3140[2],(void*)0,&l_3140[0]}},{{&l_3140[0],(void*)0,&l_3140[2],(void*)0,&l_3140[0]}},{{&l_3140[0],(void*)0,&l_3140[2],(void*)0,&l_3140[0]}},{{&l_3140[0],(void*)0,&l_3140[2],(void*)0,&l_3140[0]}},{{&l_3140[0],(void*)0,&l_3140[2],(void*)0,&l_3140[0]}}};
    const union U1 ***l_3138 = &l_3139[4][0][2];
    const union U1 ****l_3137 = &l_3138;
    uint16_t *l_3226 = (void*)0;
    uint16_t **l_3225 = &l_3226;
    int32_t l_3249 = 0x9C7E1114L;
    const int16_t l_3251 = (-5L);
    struct S0 l_3284 = {9L,4294967292UL,246UL,0x0AL,0xB843A4A3L,0x76B0B98E63FC8FE8LL,0x9ECFD5A5L,0x858FD931L};
    uint16_t l_3287 = 0x9187L;
    uint8_t *l_3369[7][4][6] = {{{&g_2804,&g_3227[0][0],&g_660,(void*)0,&g_3343.f2,&g_938.f2},{(void*)0,&g_246.f3,&g_660,&g_246.f2,&g_246.f2,&l_3284.f3},{&g_1006.f3,&g_1823,&g_2804,&g_147,&g_3343.f3,&g_246.f2},{&g_3227[0][0],&g_246.f2,&g_938.f2,(void*)0,(void*)0,&g_938.f2}},{{&g_938.f2,&g_938.f2,&g_3227[0][0],(void*)0,&l_3284.f3,&g_3343.f3},{&g_147,&g_1006.f2,&g_243.f3,&g_938.f3,&g_660,&g_3227[0][0]},{&g_938.f3,&g_147,&g_243.f3,&g_1006.f3,&g_938.f2,&g_3343.f3},{&g_246.f2,&g_1006.f3,&g_3227[0][0],&g_3343.f2,(void*)0,&g_938.f2}},{{&g_3343.f2,(void*)0,&g_938.f2,&g_1006.f3,&g_938.f2,&g_246.f2},{&g_246.f3,&g_3227[0][0],&g_2804,&l_3284.f3,&g_660,&l_3284.f3},{&g_660,(void*)0,&g_660,&g_938.f3,&g_246.f2,&g_938.f2},{&g_938.f3,(void*)0,&g_660,&g_2804,&g_938.f2,&g_1006.f3}},{{&g_3227[0][0],&g_938.f2,&g_2804,&l_3284.f3,(void*)0,(void*)0},{&g_1006.f3,&g_938.f2,(void*)0,(void*)0,&g_2804,&g_3343.f3},{&g_938.f2,&l_3284.f3,&g_1006.f3,&g_246.f3,&g_246.f2,&g_1006.f2},{&g_3343.f2,&g_246.f2,&g_3227[0][0],(void*)0,&g_246.f2,&g_246.f2}},{{&g_3227[0][0],&g_938.f2,&g_938.f2,&g_3227[0][0],(void*)0,&l_3284.f3},{&g_246.f2,&g_3343.f3,&g_147,&g_2804,&g_1823,&g_1006.f3},{(void*)0,&g_3227[0][0],&g_938.f3,&g_1006.f3,&g_1823,&g_660},{&g_246.f2,&g_3343.f3,&g_246.f2,&g_938.f2,(void*)0,&g_660}},{{&g_2804,&g_938.f2,&g_3343.f2,&g_938.f3,&g_246.f2,&g_2804},{&g_660,&g_246.f2,&g_246.f3,&g_246.f2,&g_246.f2,&g_938.f2},{&g_2804,&l_3284.f3,&g_660,&l_3284.f3,&g_2804,&g_3227[0][0]},{(void*)0,&g_938.f2,&g_938.f3,&g_3343.f3,(void*)0,&g_243.f3}},{{&l_3284.f3,&g_938.f2,&g_1006.f2,&g_938.f2,(void*)0,&g_243.f3},{(void*)0,&g_938.f3,&g_938.f3,&g_1006.f2,&g_246.f2,&g_3227[0][0]},{(void*)0,&g_1823,&g_660,(void*)0,&g_938.f2,&g_938.f2},{(void*)0,&g_243.f3,&g_246.f3,&g_243.f3,&g_1006.f3,&g_2804}}};
    uint8_t * const *l_3403 = &g_3056;
    uint8_t * const **l_3402[3][7][2] = {{{&l_3403,&l_3403},{(void*)0,&l_3403},{&l_3403,(void*)0},{&l_3403,&l_3403},{&l_3403,(void*)0},{&l_3403,&l_3403},{(void*)0,&l_3403}},{{&l_3403,&l_3403},{(void*)0,&l_3403},{&l_3403,(void*)0},{&l_3403,&l_3403},{&l_3403,(void*)0},{&l_3403,&l_3403},{(void*)0,&l_3403}},{{&l_3403,&l_3403},{(void*)0,&l_3403},{&l_3403,(void*)0},{&l_3403,&l_3403},{&l_3403,(void*)0},{&l_3403,&l_3403},{(void*)0,&l_3403}}};
    union U1 *** const l_3435[1][7][7] = {{{&g_709[1][0],&g_709[0][0],&g_709[1][0],&g_709[0][0],&g_709[1][0],(void*)0,(void*)0},{(void*)0,&g_709[0][0],&g_709[0][0],&g_709[0][0],(void*)0,(void*)0,(void*)0},{&g_709[1][0],&g_709[0][0],&g_709[1][0],&g_709[0][0],&g_709[1][0],(void*)0,(void*)0},{(void*)0,&g_709[0][0],&g_709[0][0],&g_709[0][0],(void*)0,(void*)0,(void*)0},{&g_709[1][0],&g_709[0][0],&g_709[1][0],&g_709[0][0],&g_709[1][0],(void*)0,(void*)0},{(void*)0,&g_709[0][0],&g_709[0][0],&g_709[0][0],(void*)0,(void*)0,(void*)0},{&g_709[1][0],&g_709[0][0],&g_709[1][0],&g_709[0][0],&g_709[1][0],(void*)0,(void*)0}}};
    uint32_t ****l_3502 = &g_444[3][4];
    int64_t l_3503[4] = {0L,0L,0L,0L};
    int32_t l_3528 = 5L;
    uint32_t ***l_3533 = &g_445;
    union U1 *l_3534[7][7] = {{&g_3171[0],&g_2642,&g_3171[1],&g_3171[1],&g_3171[1],&g_2642,&g_3171[0]},{&g_3171[1],&g_3171[1],&g_2642,&g_3171[1],&g_3171[1],&g_3171[1],&g_3171[1]},{(void*)0,&g_1339,(void*)0,&g_1339,&g_3171[1],&g_3171[1],&g_3171[1]},{&g_3171[1],&g_1339,&g_2642,&g_2642,&g_1339,&g_3171[1],&g_1339},{(void*)0,&g_1339,&g_3171[1],&g_3171[1],&g_3171[1],&g_3171[1],&g_3171[1]},{&g_3171[1],&g_3171[1],&g_3171[1],&g_2642,&g_3171[1],&g_3171[1],&g_3171[1]},{&g_3171[0],&g_1339,&g_1339,&g_1339,&g_3171[0],&g_2642,&g_3171[1]}};
    int32_t * const **l_3535 = (void*)0;
    const int32_t l_3573 = 0xE11D3907L;
    int64_t l_3580 = 0x0596BF15E74FF042LL;
    int16_t l_3581 = 0x485EL;
    uint32_t l_3642[6];
    int16_t ****l_3664 = &g_2304;
    uint32_t l_3673 = 0x4C7F89DDL;
    int8_t l_3690 = 1L;
    uint32_t l_3698 = 18446744073709551606UL;
    uint64_t l_3726[6];
    uint32_t *l_3729[5];
    int8_t l_3748 = 0x82L;
    uint32_t l_3750[1][5] = {{0x1C0C1E87L,0x1C0C1E87L,0x1C0C1E87L,0x1C0C1E87L,0x1C0C1E87L}};
    struct S0 ***l_3788 = &g_3274;
    int32_t l_3797 = 0x9F2C791FL;
    const uint32_t *l_3873 = &g_3874[0];
    uint64_t l_3884[1];
    int16_t l_3885 = 0L;
    int16_t *l_3886 = &g_3171[1].f0;
    uint16_t l_3887 = 0x60E8L;
    uint32_t l_3957 = 1UL;
    int8_t **l_3974 = &g_1044;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_3642[i] = 1UL;
    for (i = 0; i < 6; i++)
        l_3726[i] = 0x7148FEAC25C4B784LL;
    for (i = 0; i < 5; i++)
        l_3729[i] = &g_1304[1];
    for (i = 0; i < 1; i++)
        l_3884[i] = 0UL;
    return (*l_3059);
}



static int32_t  func_12(uint32_t * p_13, uint32_t * p_14, int64_t  p_15)
{ 
    const uint32_t *l_29 = &g_11;
    int32_t *l_3025 = &g_1585;
    int32_t l_3031 = 0xD4287C16L;
    union U1 **l_3043 = (void*)0;
    int32_t l_3045 = (-8L);
    int32_t *l_3048 = &g_2111;
    int32_t **l_3049 = &g_182;
    for (g_22 = 16; (g_22 != 1); g_22--)
    { 
        uint32_t l_3030[6][4] = {{0x6BD4ED8EL,0x6BD4ED8EL,0xAA0E2BA8L,0x6BD4ED8EL},{0x6BD4ED8EL,0xFB2E6024L,0xFB2E6024L,0x6BD4ED8EL},{0xFB2E6024L,0x6BD4ED8EL,0xFB2E6024L,0xFB2E6024L},{0x6BD4ED8EL,0x6BD4ED8EL,0xAA0E2BA8L,0x6BD4ED8EL},{0x6BD4ED8EL,0xFB2E6024L,0xFB2E6024L,0x6BD4ED8EL},{0xFB2E6024L,0x6BD4ED8EL,0xFB2E6024L,0xFB2E6024L}};
        uint32_t *l_3044[3];
        int32_t *l_3046 = &g_89;
        int32_t *l_3047[2];
        int i, j;
        for (i = 0; i < 3; i++)
            l_3044[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_3047[i] = &g_89;
        l_3047[0] = (((((l_3025 = func_27(l_29)) == (l_3046 = ((((safe_sub_func_uint16_t_u_u(((l_3030[4][0] ^ ((l_3031 || ((!((g_938.f1 , (safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((l_3030[4][0] && ((*g_2744) = (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((safe_add_func_uint8_t_u_u((l_3043 == l_3043), l_3030[1][1])) , l_29) == l_3044[0]) != p_15), (-1L))), p_15)))) != l_3031), l_3045)), 0))) || 0xB8BCL)) != 8UL)) > 0x686BD966C9633A9FLL)) < p_15), p_15)) , l_3031) < 0L) , p_13))) & l_3031) >= l_3030[4][1]) , (void*)0);
    }
    (*l_3048) &= (*g_1845);
    (*l_3049) = func_27(l_3025);
    return (*l_3048);
}



static uint32_t * func_16(uint32_t * p_17, int32_t  p_18, uint32_t * p_19)
{ 
    int32_t *l_21 = &g_22;
    (*l_21) = p_18;
    return l_21;
}



static int32_t * func_27(const uint32_t * p_28)
{ 
    int32_t *l_30 = &g_31;
    int32_t *l_32 = &g_31;
    int32_t *l_33 = &g_31;
    int32_t *l_34 = (void*)0;
    int32_t *l_35 = &g_31;
    int32_t *l_36 = (void*)0;
    int32_t *l_37 = &g_31;
    int32_t *l_38 = &g_31;
    int32_t *l_39 = &g_31;
    int32_t *l_40 = &g_31;
    int32_t *l_41 = (void*)0;
    int32_t *l_42 = &g_31;
    int32_t *l_43 = &g_31;
    int32_t *l_44 = &g_31;
    int32_t l_45 = 0xB03BE465L;
    int32_t *l_46 = &g_31;
    int32_t *l_47 = (void*)0;
    int32_t l_48[7][3][6] = {{{(-2L),(-8L),7L,0L,0x5DE082ADL,0x2C3CC8C9L},{0xBB531EAAL,0x9CEC02DFL,1L,(-2L),9L,(-8L)},{0L,0xB12DB22CL,0x140DE197L,(-2L),0L,0x83FAA058L}},{{0L,(-7L),0x73ECFB86L,0x5DE082ADL,0x6E82A74DL,0x6E82A74DL},{0x63704BAEL,(-2L),(-2L),0x63704BAEL,0x13A4B1F0L,0L},{1L,0x140DE197L,0x13C444C9L,0x8F438361L,(-1L),1L}},{{(-7L),0L,0x61B8CE22L,(-1L),(-1L),(-3L)},{1L,0x140DE197L,1L,7L,0x13A4B1F0L,0x6422F8DCL},{0xE95866B3L,(-2L),0x89B93B3BL,1L,0x6E82A74DL,(-2L)}},{{0x2C3CC8C9L,(-7L),0x9CEC02DFL,8L,0L,1L},{(-1L),0xB12DB22CL,0x5DE082ADL,0x140DE197L,9L,1L},{0x5DE082ADL,0x9CEC02DFL,1L,0x9CEC02DFL,0x5DE082ADL,0xA44F34D8L}},{{0L,(-8L),(-2L),9L,0x13C444C9L,0x13A4B1F0L},{7L,7L,(-7L),(-8L),0x140DE197L,0x13A4B1F0L},{1L,0x7DA19AE8L,(-2L),0x73ECFB86L,0x2C3CC8C9L,0xA44F34D8L}},{{0x140DE197L,(-1L),1L,0L,0xA44F34D8L,1L},{0x89B93B3BL,0x83FAA058L,0x5DE082ADL,1L,0L,1L},{0xB5B0D69BL,0xA44F34D8L,0x9CEC02DFL,1L,0x89B93B3BL,(-2L)}},{{0x6422F8DCL,0x61B8CE22L,0x89B93B3BL,0x89B93B3BL,0x97C31676L,(-2L)},{7L,0x13C444C9L,0xA44F34D8L,0x7DA19AE8L,(-1L),8L},{(-2L),0x83FAA058L,0x97C31676L,0x6422F8DCL,0xB12DB22CL,(-8L)}}};
    int32_t *l_49 = &l_45;
    int32_t *l_50 = &l_45;
    int32_t *l_51 = &l_48[4][0][2];
    int32_t *l_52 = &g_31;
    int32_t *l_53 = &g_31;
    int32_t *l_54 = &l_45;
    int32_t *l_55 = (void*)0;
    int32_t *l_56 = &l_48[4][0][2];
    int32_t *l_57 = &l_48[4][0][2];
    int32_t *l_58 = &l_48[3][1][4];
    int32_t *l_59 = &l_45;
    int32_t *l_60[3][5][6] = {{{&l_45,&g_7,&l_45,&g_7,&g_7,&l_45},{&l_45,&l_45,&g_7,&l_48[4][0][2],&g_7,&l_45},{&g_7,&g_7,&l_48[4][0][2],&l_48[4][0][2],&g_7,&g_7},{&l_45,&g_7,&l_48[4][0][2],&g_7,&l_45,&l_45},{&l_45,&g_7,&g_7,&l_45,&g_7,&l_45}},{{&l_45,&g_7,&l_45,&g_7,&g_7,&l_45},{&l_45,&l_45,&g_7,&l_48[4][0][2],&g_7,&l_45},{&g_7,&g_7,&l_48[4][0][2],&l_48[4][0][2],&g_7,&g_7},{&l_45,&g_7,&l_48[4][0][2],&g_7,&l_45,&l_45},{&l_45,&g_7,&g_7,&l_45,&g_7,&l_45}},{{&l_45,&g_7,&l_45,&g_7,&g_7,&l_45},{&l_45,&l_45,&g_7,&l_48[4][0][2],&g_7,&l_45},{&g_7,&g_7,&l_48[4][0][2],&l_48[4][0][2],&g_7,&g_7},{&l_45,&g_7,&l_48[4][0][2],&g_7,&l_45,&l_45},{&l_45,&g_7,&g_7,&l_45,&g_7,&l_45}}};
    uint16_t l_73 = 0x4D62L;
    int32_t *l_3024 = (void*)0;
    int i, j, k;
    --g_63[1];
    for (g_31 = (-11); (g_31 < (-24)); --g_31)
    { 
        uint64_t l_70 = 0UL;
        for (g_62 = (-15); (g_62 <= 25); ++g_62)
        { 
            if (l_70)
                break;
        }
        return &g_22;
    }
    (*l_51) &= (safe_rshift_func_uint8_t_u_s(l_73, ((safe_sub_func_int32_t_s_s(0x6CBFC796L, (safe_mod_func_uint64_t_u_u(func_78(g_62, l_35, &l_48[4][0][2]), (safe_lshift_func_uint16_t_u_s((~((*g_1044) < (*l_53))), (*l_38))))))) == (**g_2305))));
    return l_3024;
}



static uint64_t  func_78(uint16_t  p_79, uint32_t * const  p_80, int32_t * p_81)
{ 
    int64_t l_88 = 5L;
    int32_t l_90[3];
    union U1 l_1589 = {0x6D8FL};
    const union U1 *l_2190 = &g_239;
    const union U1 **l_2189 = &l_2190;
    const union U1 ***l_2188 = &l_2189;
    const union U1 ****l_2187 = &l_2188;
    const union U1 *****l_2186 = &l_2187;
    uint64_t l_2196 = 18446744073709551606UL;
    union U1 *l_2200 = (void*)0;
    int16_t *l_2250 = &l_1589.f0;
    int16_t * const *l_2249 = &l_2250;
    int16_t * const ** const l_2248 = &l_2249;
    uint64_t ****l_2459 = &g_1837;
    uint32_t l_2480 = 4294967287UL;
    int32_t l_2514 = 0x63097D1FL;
    int8_t l_2553 = 0L;
    int32_t * const *l_2564 = &g_182;
    int32_t * const ** const l_2563 = &l_2564;
    uint64_t *****l_2596 = &l_2459;
    uint8_t ***l_2657 = (void*)0;
    int32_t l_2676 = (-1L);
    int32_t l_2765 = 0x77D82784L;
    int32_t l_2788 = 4L;
    uint32_t l_2811 = 0xFCC9F71DL;
    uint16_t l_2817 = 0x91E2L;
    struct S0 l_2819 = {0xBF4A3CA5AAD50324LL,4294967295UL,0x54L,1UL,1L,4L,-1L,-9L};
    int32_t **l_2820 = &g_1845;
    uint8_t l_2847 = 0xF7L;
    struct S0 ***l_2863 = &g_825[0];
    int8_t l_2940 = (-1L);
    int8_t l_3005 = (-6L);
    int i;
    for (i = 0; i < 3; i++)
        l_90[i] = 1L;
    return (*g_686);
}



static int32_t * func_97(struct S0  p_98, int32_t  p_99, union U1  p_100, const int32_t  p_101)
{ 
    int32_t **l_1590 = (void*)0;
    int32_t **l_1591 = &g_182;
    uint32_t *l_1605 = &g_1006.f1;
    uint8_t l_1607 = 0xE4L;
    int64_t l_1641[5];
    union U1 ****l_1682 = &g_744;
    uint16_t l_1686 = 0x2FB4L;
    int32_t l_1691[5] = {1L,1L,1L,1L,1L};
    uint8_t l_1717 = 0x24L;
    uint64_t ***l_1833 = &g_685;
    uint16_t ***l_1838 = (void*)0;
    uint32_t l_1843 = 1UL;
    int32_t l_1873[4][4] = {{0x6B54FF2CL,(-1L),0x6B54FF2CL,0x6B54FF2CL},{(-1L),(-1L),0x7E9D0ED2L,(-1L)},{(-1L),0x6B54FF2CL,0x6B54FF2CL,(-1L)},{0x6B54FF2CL,(-1L),0x6B54FF2CL,0x6B54FF2CL}};
    const int32_t *l_1887[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    struct S0 *l_1916 = &g_246;
    const union U1 *l_1939 = (void*)0;
    const union U1 **l_1938 = &l_1939;
    const union U1 ***l_1937[2][3] = {{&l_1938,&l_1938,&l_1938},{&l_1938,&l_1938,&l_1938}};
    const union U1 ****l_1936 = &l_1937[1][2];
    int8_t **l_2133 = (void*)0;
    uint32_t *** const *l_2146 = &g_444[3][4];
    const int16_t l_2158 = 0xD0B7L;
    int i, j;
    for (i = 0; i < 5; i++)
        l_1641[i] = 0x9E0A46443B208195LL;
    (*l_1591) = &p_99;
    (**g_824) = &p_98;
    for (g_1339.f0 = 5; (g_1339.f0 >= 0); g_1339.f0 -= 1)
    { 
        uint32_t *l_1606 = (void*)0;
        int32_t *l_1608 = &g_1007;
        uint64_t *l_1626 = &g_379;
        int32_t l_1627 = 0xA6438737L;
    }
    if (((**l_1591) = p_101))
    { 
        uint8_t l_1713 = 0x25L;
        union U1 **** const l_1718 = &g_744;
        int32_t l_1744 = 0xEAD91B05L;
        uint16_t *l_1856 = (void*)0;
        uint16_t ** const l_1855 = &l_1856;
        struct S0 * const l_1933 = &g_1006;
        int32_t l_1934 = 3L;
        int32_t l_1956 = 0xAC4E7F57L;
        uint32_t l_1977[2];
        int32_t l_1983[5];
        int32_t l_2022 = (-10L);
        int16_t l_2033 = 0xCE53L;
        int32_t l_2034 = 9L;
        union U1 *l_2073[2][7] = {{&g_1339,&g_1339,&g_1339,&g_1339,&g_1339,&g_1339,&g_1339},{&g_1339,&g_1339,&g_1339,&g_1339,&g_1339,&g_1339,&g_1339}};
        union U1 ** const l_2072 = &l_2073[0][4];
        int8_t l_2120[6][5] = {{8L,8L,8L,8L,8L},{1L,1L,1L,1L,1L},{8L,8L,8L,8L,8L},{1L,1L,1L,1L,1L},{8L,8L,8L,8L,8L},{1L,1L,1L,1L,1L}};
        uint16_t **l_2126 = &l_1856;
        int8_t **l_2132[6][6][2] = {{{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044}},{{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044}},{{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044}},{{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044}},{{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044}},{{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044},{&g_1044,&g_1044}}};
        int64_t l_2147 = 8L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1977[i] = 0x8C83769AL;
        for (i = 0; i < 5; i++)
            l_1983[i] = 0xCE4B187CL;
        (*l_1591) = ((safe_add_func_int64_t_s_s(p_98.f1, p_101)) , (((void*)0 == (*g_685)) , (*l_1591)));
    }
    else
    { 
        union U1 *****l_2161 = &g_1309[0][6];
        int32_t l_2162[6][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
        int i, j;
        (*l_1591) = &p_99;
        for (g_2009 = 24; (g_2009 != 47); ++g_2009)
        { 
            uint8_t l_2155 = 0x97L;
            int64_t *l_2156 = (void*)0;
            int64_t *l_2163 = &g_1339.f2.f5;
            for (g_1451.f6 = 0; g_1451.f6 < 7; g_1451.f6 += 1)
            {
                g_137[g_1451.f6] = 5L;
            }
            (*l_1591) = &p_99;
            (*g_1845) = (safe_mod_func_int32_t_s_s((-1L), (((((safe_rshift_func_int16_t_s_u((((*l_2163) = ((((safe_unary_minus_func_int8_t_s((((**l_1591) = l_2155) > p_98.f7))) > (g_1364 , ((!l_2158) | ((p_98.f4 , (((safe_add_func_int64_t_s_s((g_1451.f0 = ((g_1308 = l_2161) != (void*)0)), g_2113)) != 0x06CF11EBL) > g_938.f7)) <= l_2162[0][5])))) , (*g_1044)) && p_98.f2)) < 0x14375C27D9A3A0B6LL), 15)) , p_98.f1) != 0x827F898DL) , p_98.f6) , p_98.f0)));
        }
    }
    return &g_1007;
}



static struct S0  func_102(uint64_t  p_103, int64_t  p_104, uint64_t  p_105, int64_t  p_106)
{ 
    int64_t l_1210 = (-4L);
    int32_t l_1251 = 0xABD21E0EL;
    int8_t l_1273 = 1L;
    struct S0 l_1282 = {0xE82A09B89852D66ELL,0x8E9F7540L,0xDBL,0UL,0x551043D0L,0x9C86E98FB3DAE249LL,0xB6EDE4E3L,0L};
    int32_t l_1303 = 0L;
    int32_t **l_1318 = &g_182;
    union U1 * const l_1390[5][4] = {{&g_1339,&g_1339,&g_1339,&g_1339},{&g_1339,&g_1339,&g_1339,&g_1339},{&g_1339,&g_1339,&g_1339,&g_1339},{&g_1339,&g_1339,&g_1339,&g_1339},{&g_1339,&g_1339,&g_1339,&g_1339}};
    uint64_t l_1410[5] = {0x90A303FA9D866CB7LL,0x90A303FA9D866CB7LL,0x90A303FA9D866CB7LL,0x90A303FA9D866CB7LL,0x90A303FA9D866CB7LL};
    union U1 ***l_1422 = &g_709[0][0];
    uint32_t l_1499 = 4UL;
    uint32_t ****l_1578[1];
    uint16_t l_1581 = 0xB4A8L;
    int32_t *l_1582 = (void*)0;
    int32_t *l_1583 = &g_1007;
    int32_t *l_1584[4][3][3] = {{{&l_1251,(void*)0,(void*)0},{(void*)0,(void*)0,&g_89},{&g_7,&g_89,&g_89}},{{(void*)0,&g_89,(void*)0},{&l_1303,&l_1303,(void*)0},{&g_89,&g_89,&l_1303}},{{&g_296,&g_89,&l_1251},{&g_296,(void*)0,&l_1303},{&g_89,(void*)0,&g_89}},{{&l_1303,&g_296,&l_1303},{(void*)0,&g_296,&l_1251},{&g_7,&g_296,&l_1303}}};
    uint64_t l_1586 = 0x0A89ED6E1BE5C372LL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1578[i] = &g_444[3][5];
    l_1210 ^= p_105;
    for (g_243.f6 = 0; (g_243.f6 != 28); g_243.f6++)
    { 
        uint8_t *** const l_1220 = &g_1104[2];
        int32_t l_1225 = 0xFECCEA17L;
        const struct S0 l_1281 = {0x82C0038450A70E35LL,0xBC8A96DBL,0xC4L,0x64L,0xBB58E13AL,0L,0x618C37CCL,1L};
        union U1 l_1291 = {0xD230L};
        uint64_t l_1337 = 1UL;
        union U1 *l_1338 = &g_1339;
        uint8_t l_1387[3][7][7] = {{{0xB3L,0xB3L,0x59L,0x87L,250UL,0x87L,0x59L},{0xB3L,0xB3L,0x59L,0x87L,250UL,0x87L,0x59L},{0xB3L,0xB3L,0x59L,0x87L,250UL,0x87L,0x59L},{0xB3L,0xB3L,0x59L,0x87L,250UL,0x87L,0x59L},{0xB3L,0xB3L,0x59L,0x87L,250UL,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L}},{{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L}},{{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L},{250UL,250UL,0xB3L,0x9BL,0x87L,0x9BL,0xB3L}}};
        uint32_t ****l_1401 = &g_444[3][4];
        uint32_t *****l_1400 = &l_1401;
        struct S0 * const *l_1436 = &g_242[2][1];
        struct S0 *l_1450 = &g_1451;
        int16_t l_1457 = 9L;
        union U1 * const *l_1468 = (void*)0;
        union U1 * const **l_1467 = &l_1468;
        union U1 * const ***l_1466 = &l_1467;
        int32_t *l_1479 = &g_31;
        int32_t l_1521 = 1L;
        int32_t l_1525 = 0x5A97F019L;
        int32_t l_1526 = 0L;
        int32_t l_1527[4][6] = {{5L,0xC8360F2AL,0xC8360F2AL,5L,0xC8360F2AL,0xC8360F2AL},{5L,0xC8360F2AL,0xC8360F2AL,5L,0xC8360F2AL,0xC8360F2AL},{5L,0xC8360F2AL,0xC8360F2AL,5L,0xC8360F2AL,0xC8360F2AL},{5L,0xC8360F2AL,0xC8360F2AL,5L,0xC8360F2AL,0xC8360F2AL}};
        const int16_t l_1567 = 0x3578L;
        uint32_t l_1576 = 0x8741E559L;
        int i, j, k;
        for (g_811 = (-17); (g_811 != 28); g_811 = safe_add_func_uint16_t_u_u(g_811, 5))
        { 
            uint8_t ***l_1219[6] = {&g_1104[0],&g_1104[0],&g_1104[0],&g_1104[0],&g_1104[0],&g_1104[0]};
            uint8_t ****l_1218 = &l_1219[2];
            int64_t *l_1223 = &g_246.f0;
            union U1 l_1224[3][7][6] = {{{{1L},{0x537CL},{0L},{5L},{0L},{0x537CL}},{{0L},{1L},{0xD621L},{0xE09BL},{0xE09BL},{0xD621L}},{{0L},{0L},{0xE09BL},{5L},{-1L},{5L}},{{1L},{0L},{1L},{0xD621L},{0xE09BL},{0xE09BL}},{{0x537CL},{1L},{1L},{0x537CL},{0L},{5L}},{{5L},{0x537CL},{0xE09BL},{0x537CL},{5L},{0xD621L}},{{0x537CL},{5L},{0xD621L},{0xD621L},{5L},{0x537CL}}},{{{1L},{0x537CL},{0L},{5L},{0L},{1L}},{{-1L},{5L},{0xE09BL},{0L},{0L},{0xE09BL}},{{-1L},{-1L},{0L},{0xD621L},{0x537CL},{0xD621L}},{{5L},{-1L},{5L},{0xE09BL},{0L},{0L}},{{1L},{5L},{5L},{1L},{-1L},{0xD621L}},{{0xD621L},{1L},{0L},{1L},{0xD621L},{0xE09BL}},{{1L},{0xD621L},{0xE09BL},{0xE09BL},{0xD621L},{1L}}},{{{5L},{1L},{-1L},{0xD621L},{-1L},{1L}},{{-1L},{5L},{0xE09BL},{0L},{0L},{0xE09BL}},{{-1L},{-1L},{0L},{0xD621L},{0x537CL},{0xD621L}},{{5L},{-1L},{5L},{0xE09BL},{0L},{0L}},{{1L},{5L},{5L},{1L},{-1L},{0xD621L}},{{0xD621L},{1L},{0L},{1L},{0xD621L},{0xE09BL}},{{1L},{0xD621L},{0xE09BL},{0xE09BL},{0xD621L},{1L}}}};
            int32_t l_1226 = 3L;
            uint16_t *l_1235 = &g_878;
            uint16_t *l_1236 = &g_922;
            int32_t *l_1239 = &g_1007;
            int i, j, k;
            l_1226 = (((~((safe_div_func_int8_t_s_s(((((*l_1218) = &g_1104[2]) != l_1220) | (((((safe_lshift_func_int16_t_s_s(((((*l_1223) = p_103) >= (l_1224[0][0][5] , ((l_1225 , g_583) , ((g_379 >= l_1225) == l_1225)))) & (*g_1044)), 13)) ^ 0x9692L) == (-1L)) || 0xB4A83F02L) > p_105)), (*g_1044))) != g_804[0][1])) | p_105) >= p_103);
            (*l_1239) = ((**g_685) , (safe_sub_func_uint16_t_u_u(((((*g_1044) = ((safe_add_func_int16_t_s_s((l_1210 , ((safe_rshift_func_uint16_t_u_s((g_178 ^= (safe_mod_func_int32_t_s_s((((((*l_1236) = ((*l_1235) = g_147)) | (((void*)0 != (**g_974)) > (safe_rshift_func_int8_t_s_s(l_1226, 3)))) , ((l_1225 | p_106) , (void*)0)) != &l_1226), p_105))), 8)) < g_243.f3)), 0x7E07L)) | p_105)) & l_1210) >= p_103), p_106)));
        }
    }
    ++l_1586;
    return l_1282;
}



static int64_t  func_108(int32_t * p_109, int32_t  p_110)
{ 
    uint8_t l_113 = 0x6AL;
    int8_t l_114 = 2L;
    uint16_t *l_121 = &g_63[5];
    int8_t *l_130 = (void*)0;
    int8_t *l_131 = (void*)0;
    int8_t *l_132 = &g_62;
    int64_t *l_133 = &g_134;
    int8_t *l_135 = &l_114;
    int64_t *l_136 = &g_137[2];
    uint32_t *l_138 = (void*)0;
    uint32_t **l_139 = &l_138;
    int32_t l_142 = 0x2812A6D4L;
    int32_t l_144 = (-1L);
    int32_t l_146[4] = {7L,7L,7L,7L};
    int32_t *l_192 = &l_142;
    struct S0 l_260[6][1] = {{{7L,4294967289UL,246UL,1UL,0x750D66DCL,1L,0xA8FA0F41L,0x198974C4L}},{{4L,4294967287UL,0x26L,0x4FL,0x5BABCDBCL,0x0492071BF1117703LL,0xB86BBE56L,-5L}},{{4L,4294967287UL,0x26L,0x4FL,0x5BABCDBCL,0x0492071BF1117703LL,0xB86BBE56L,-5L}},{{7L,4294967289UL,246UL,1UL,0x750D66DCL,1L,0xA8FA0F41L,0x198974C4L}},{{4L,4294967287UL,0x26L,0x4FL,0x5BABCDBCL,0x0492071BF1117703LL,0xB86BBE56L,-5L}},{{4L,4294967287UL,0x26L,0x4FL,0x5BABCDBCL,0x0492071BF1117703LL,0xB86BBE56L,-5L}}};
    uint32_t l_337 = 18446744073709551615UL;
    uint32_t ****l_566 = (void*)0;
    int8_t l_578 = 1L;
    union U1 l_639 = {0x72EFL};
    uint64_t *l_670 = &g_583;
    uint64_t **l_669 = &l_670;
    uint16_t l_671 = 65527UL;
    const uint32_t l_753 = 0x891639FAL;
    int32_t l_830 = 0xC5059936L;
    struct S0 ** const l_850[3][6][4] = {{{(void*)0,(void*)0,&g_242[2][1],&g_242[2][1]},{&g_242[2][1],&g_242[2][1],(void*)0,&g_242[2][1]},{&g_242[1][0],(void*)0,&g_242[1][0],(void*)0},{&g_242[1][0],(void*)0,(void*)0,&g_242[1][0]},{&g_242[2][1],(void*)0,&g_242[2][1],(void*)0},{(void*)0,(void*)0,&g_242[2][1],&g_242[2][1]}},{{&g_242[2][1],&g_242[2][1],(void*)0,&g_242[2][1]},{&g_242[1][0],(void*)0,&g_242[1][0],(void*)0},{&g_242[1][0],(void*)0,(void*)0,&g_242[1][0]},{&g_242[2][1],(void*)0,&g_242[2][1],(void*)0},{(void*)0,(void*)0,&g_242[2][1],&g_242[2][1]},{&g_242[2][1],&g_242[2][1],(void*)0,&g_242[2][1]}},{{&g_242[1][0],(void*)0,&g_242[1][0],(void*)0},{&g_242[1][0],(void*)0,(void*)0,&g_242[1][0]},{&g_242[2][1],(void*)0,&g_242[2][1],(void*)0},{(void*)0,(void*)0,&g_242[2][1],&g_242[2][1]},{&g_242[2][1],&g_242[2][1],(void*)0,&g_242[2][1]},{&g_242[1][0],(void*)0,&g_242[1][0],(void*)0}}};
    struct S0 **l_963 = &g_242[2][1];
    int32_t ***l_1011 = &g_410;
    struct S0 *l_1142[7] = {&g_243,&g_938,&g_243,&g_243,&g_938,&g_243,&g_243};
    int32_t *l_1189 = &l_146[0];
    int32_t *l_1190 = &l_144;
    int32_t *l_1191 = &l_142;
    int32_t *l_1192[4];
    uint32_t l_1193 = 1UL;
    uint8_t ***l_1197[6][2];
    uint8_t ****l_1196 = &l_1197[4][1];
    int8_t l_1207 = 4L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1192[i] = &l_144;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_1197[i][j] = &g_1104[2];
    }
    return g_1006.f4;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_137[i], "g_137[i]", print_hash_value);

    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_239.f0, "g_239.f0", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_243.f0, "g_243.f0", print_hash_value);
    transparent_crc(g_243.f1, "g_243.f1", print_hash_value);
    transparent_crc(g_243.f2, "g_243.f2", print_hash_value);
    transparent_crc(g_243.f3, "g_243.f3", print_hash_value);
    transparent_crc(g_243.f4, "g_243.f4", print_hash_value);
    transparent_crc(g_243.f5, "g_243.f5", print_hash_value);
    transparent_crc(g_243.f6, "g_243.f6", print_hash_value);
    transparent_crc(g_243.f7, "g_243.f7", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2, "g_246.f2", print_hash_value);
    transparent_crc(g_246.f3, "g_246.f3", print_hash_value);
    transparent_crc(g_246.f4, "g_246.f4", print_hash_value);
    transparent_crc(g_246.f5, "g_246.f5", print_hash_value);
    transparent_crc(g_246.f6, "g_246.f6", print_hash_value);
    transparent_crc(g_246.f7, "g_246.f7", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_298[i], "g_298[i]", print_hash_value);

    }
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_515, "g_515", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_517[i], "g_517[i]", print_hash_value);

    }
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_729[i], "g_729[i]", print_hash_value);

    }
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_804[i][j], "g_804[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_840, "g_840", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_938.f0, "g_938.f0", print_hash_value);
    transparent_crc(g_938.f1, "g_938.f1", print_hash_value);
    transparent_crc(g_938.f2, "g_938.f2", print_hash_value);
    transparent_crc(g_938.f3, "g_938.f3", print_hash_value);
    transparent_crc(g_938.f4, "g_938.f4", print_hash_value);
    transparent_crc(g_938.f5, "g_938.f5", print_hash_value);
    transparent_crc(g_938.f6, "g_938.f6", print_hash_value);
    transparent_crc(g_938.f7, "g_938.f7", print_hash_value);
    transparent_crc(g_949, "g_949", print_hash_value);
    transparent_crc(g_1006.f0, "g_1006.f0", print_hash_value);
    transparent_crc(g_1006.f1, "g_1006.f1", print_hash_value);
    transparent_crc(g_1006.f2, "g_1006.f2", print_hash_value);
    transparent_crc(g_1006.f3, "g_1006.f3", print_hash_value);
    transparent_crc(g_1006.f4, "g_1006.f4", print_hash_value);
    transparent_crc(g_1006.f5, "g_1006.f5", print_hash_value);
    transparent_crc(g_1006.f6, "g_1006.f6", print_hash_value);
    transparent_crc(g_1006.f7, "g_1006.f7", print_hash_value);
    transparent_crc(g_1007, "g_1007", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1033, "g_1033", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1304[i], "g_1304[i]", print_hash_value);

    }
    transparent_crc(g_1339.f0, "g_1339.f0", print_hash_value);
    transparent_crc(g_1364, "g_1364", print_hash_value);
    transparent_crc(g_1451.f0, "g_1451.f0", print_hash_value);
    transparent_crc(g_1451.f1, "g_1451.f1", print_hash_value);
    transparent_crc(g_1451.f2, "g_1451.f2", print_hash_value);
    transparent_crc(g_1451.f3, "g_1451.f3", print_hash_value);
    transparent_crc(g_1451.f4, "g_1451.f4", print_hash_value);
    transparent_crc(g_1451.f5, "g_1451.f5", print_hash_value);
    transparent_crc(g_1451.f6, "g_1451.f6", print_hash_value);
    transparent_crc(g_1451.f7, "g_1451.f7", print_hash_value);
    transparent_crc(g_1522, "g_1522", print_hash_value);
    transparent_crc(g_1528, "g_1528", print_hash_value);
    transparent_crc(g_1585, "g_1585", print_hash_value);
    transparent_crc(g_1672, "g_1672", print_hash_value);
    transparent_crc(g_1677, "g_1677", print_hash_value);
    transparent_crc(g_1690, "g_1690", print_hash_value);
    transparent_crc(g_1692, "g_1692", print_hash_value);
    transparent_crc(g_1823, "g_1823", print_hash_value);
    transparent_crc(g_1844, "g_1844", print_hash_value);
    transparent_crc(g_1985, "g_1985", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1990[i], "g_1990[i]", print_hash_value);

    }
    transparent_crc(g_1991, "g_1991", print_hash_value);
    transparent_crc(g_2009, "g_2009", print_hash_value);
    transparent_crc(g_2023, "g_2023", print_hash_value);
    transparent_crc(g_2039, "g_2039", print_hash_value);
    transparent_crc(g_2079, "g_2079", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2080[i], "g_2080[i]", print_hash_value);

    }
    transparent_crc(g_2081, "g_2081", print_hash_value);
    transparent_crc(g_2111, "g_2111", print_hash_value);
    transparent_crc(g_2112, "g_2112", print_hash_value);
    transparent_crc(g_2113, "g_2113", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2114[i][j][k], "g_2114[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2231, "g_2231", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_2262[i][j], "g_2262[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2267, "g_2267", print_hash_value);
    transparent_crc(g_2300, "g_2300", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2479[i], "g_2479[i]", print_hash_value);

    }
    transparent_crc(g_2642.f0, "g_2642.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2769[i][j], "g_2769[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2770, "g_2770", print_hash_value);
    transparent_crc(g_2799, "g_2799", print_hash_value);
    transparent_crc(g_2800, "g_2800", print_hash_value);
    transparent_crc(g_2801, "g_2801", print_hash_value);
    transparent_crc(g_2802, "g_2802", print_hash_value);
    transparent_crc(g_2804, "g_2804", print_hash_value);
    transparent_crc(g_2844, "g_2844", print_hash_value);
    transparent_crc(g_2918, "g_2918", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2919[i][j], "g_2919[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3091, "g_3091", print_hash_value);
    transparent_crc(g_3104, "g_3104", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_3171[i].f0, "g_3171[i].f0", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_3227[i][j], "g_3227[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3230.f0, "g_3230.f0", print_hash_value);
    transparent_crc(g_3343.f0, "g_3343.f0", print_hash_value);
    transparent_crc(g_3343.f1, "g_3343.f1", print_hash_value);
    transparent_crc(g_3343.f2, "g_3343.f2", print_hash_value);
    transparent_crc(g_3343.f3, "g_3343.f3", print_hash_value);
    transparent_crc(g_3343.f4, "g_3343.f4", print_hash_value);
    transparent_crc(g_3343.f5, "g_3343.f5", print_hash_value);
    transparent_crc(g_3343.f6, "g_3343.f6", print_hash_value);
    transparent_crc(g_3343.f7, "g_3343.f7", print_hash_value);
    transparent_crc(g_3407, "g_3407", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_3451[i], "g_3451[i]", print_hash_value);

    }
    transparent_crc(g_3467, "g_3467", print_hash_value);
    transparent_crc(g_3548, "g_3548", print_hash_value);
    transparent_crc(g_3627, "g_3627", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_3634[i], "g_3634[i]", print_hash_value);

    }
    transparent_crc(g_3655.f0, "g_3655.f0", print_hash_value);
    transparent_crc(g_3668, "g_3668", print_hash_value);
    transparent_crc(g_3669, "g_3669", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_3810[i], "g_3810[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_3874[i], "g_3874[i]", print_hash_value);

    }
    transparent_crc(g_3876, "g_3876", print_hash_value);
    transparent_crc(g_3921, "g_3921", print_hash_value);
    transparent_crc(g_3953, "g_3953", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_3963[i][j], "g_3963[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3975, "g_3975", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
