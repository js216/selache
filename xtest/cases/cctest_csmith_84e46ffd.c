// SPDX-License-Identifier: MIT
// cctest_csmith_84e46ffd.c --- cctest case csmith_84e46ffd (csmith seed 2229563389)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xae67a84 */

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

// Options:   -s 2229563389 -o /tmp/csmith_gen_w924yxay/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 29;
   unsigned : 0;
   const signed f1 : 3;
   signed f2 : 2;
   unsigned f3 : 11;
   unsigned f4 : 24;
};
#pragma pack(pop)

struct S1 {
   uint8_t  f0;
   uint32_t  f1;
   int32_t  f2;
   const int32_t  f3;
};

union U2 {
   struct S1  f0;
};


static struct S1 g_18 = {0xDFL,0xE44142B9L,0x93C1DE6FL,0L};
static struct S0 g_29 = {5062,-1,-0,21,2034};
static int64_t g_83[5] = {0xFA5B36276A268257LL,0xFA5B36276A268257LL,0xFA5B36276A268257LL,0xFA5B36276A268257LL,0xFA5B36276A268257LL};
static uint16_t g_84 = 65535UL;
static uint16_t g_125 = 0xF4A5L;
static uint32_t g_163 = 18446744073709551615UL;
static union U2 g_168 = {{255UL,0xA345BFC9L,0x25464414L,0L}};
static int32_t g_220 = 0xE84944C1L;
static int8_t g_221 = 0x6DL;



static const uint16_t  func_1(void);
static struct S1  func_7(int8_t  p_8, int8_t  p_9, uint32_t  p_10, int16_t  p_11, int16_t  p_12);
static int8_t  func_15(struct S1  p_16, uint16_t  p_17);
static struct S0  func_23(union U2  p_24, int32_t  p_25, struct S0  p_26, uint8_t  p_27);




static const uint16_t  func_1(void)
{ 
    int64_t l_21[5] = {0x6A0B59785734CB44LL,0x6A0B59785734CB44LL,0x6A0B59785734CB44LL,0x6A0B59785734CB44LL,0x6A0B59785734CB44LL};
    int32_t l_22 = 0xE40424B9L;
    int32_t l_139[1][1][3];
    int64_t l_208 = 0L;
    uint16_t l_282 = 0x3E87L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_139[i][j][k] = (-1L);
        }
    }
    if ((!(safe_lshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((l_139[0][0][1] |= (func_7(((safe_lshift_func_int8_t_s_s((-4L), func_15(g_18, ((safe_sub_func_int32_t_s_s(((l_22 = l_21[0]) >= (0xC6D0L != 0x5F4BL)), 0xB14151C8L)) , l_21[4])))) == l_21[0]), g_29.f0, g_29.f3, g_29.f0, g_29.f0) , g_84)), (-1L))), l_21[0]))))
    { 
        uint8_t l_142 = 255UL;
        int8_t l_159[2][2] = {{1L,1L},{1L,1L}};
        uint32_t l_160 = 4294967288UL;
        int i, j;
        for (g_18.f0 = 0; (g_18.f0 != 0); g_18.f0 = safe_add_func_int32_t_s_s(g_18.f0, 7))
        { 
            union U2 l_158 = {{0x47L,0xDD330705L,-7L,0L}};
            --l_142;
            g_18.f2 = (g_29.f2 = (safe_rshift_func_int16_t_s_s(((l_22 ^= ((safe_mod_func_uint32_t_u_u(g_18.f2, (safe_rshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(((((((g_84 = (~(((safe_add_func_uint8_t_u_u((l_158 , l_142), ((g_18 , g_18) , l_158.f0.f3))) != l_158.f0.f1) & g_18.f1))) > l_21[0]) & l_139[0][0][1]) , 0x09L) & g_29.f0) < l_142), 1UL)), l_159[0][0])) && l_160) & 8UL), g_18.f0)))) >= l_142)) | g_83[3]), 4)));
            return l_142;
        }
    }
    else
    { 
        int8_t l_161 = 0x72L;
        int8_t l_162 = 0x60L;
        const uint16_t l_219 = 0x086FL;
        int32_t l_222[2][1][3];
        uint8_t l_257 = 0x36L;
        int32_t l_298 = 0x1AE0B1E6L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_222[i][j][k] = 0L;
            }
        }
        --g_163;
        if ((g_168.f0.f2 = (g_29.f3 == (safe_div_func_uint8_t_u_u((g_168 , (g_18.f0 = g_29.f3)), 253UL)))))
        { 
            int16_t l_181 = (-10L);
            for (g_163 = 0; (g_163 < 51); ++g_163)
            { 
                g_168.f0.f2 = (((safe_sub_func_int16_t_s_s(l_22, (g_125--))) , g_29) , (((~((safe_lshift_func_int8_t_s_u((l_139[0][0][2] || (safe_unary_minus_func_uint8_t_u((((safe_div_func_uint8_t_u_u(g_168.f0.f1, 255UL)) == g_163) , g_83[3])))), 3)) != g_83[1])) == 1UL) | l_181));
            }
        }
        else
        { 
            int32_t l_195 = 8L;
            int32_t l_203 = 4L;
            for (l_162 = 12; (l_162 <= 28); ++l_162)
            { 
                int16_t l_189 = 9L;
                int32_t l_192[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_192[i] = 2L;
                l_192[1] &= (((safe_sub_func_uint64_t_u_u((((l_189 = ((+(safe_rshift_func_int8_t_s_u(g_125, 4))) & g_84)) ^ (g_168.f0.f1 >= (safe_lshift_func_uint16_t_u_s((((((g_168.f0.f3 || 1L) | g_168.f0.f0) <= g_29.f1) == l_161) == g_168.f0.f3), 4)))) < g_168.f0.f2), g_29.f0)) && 255UL) >= l_21[0]);
                g_18.f2 = ((safe_mul_func_int8_t_s_s((((((l_195 & (g_29.f2 ^ (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((!(safe_add_func_int16_t_s_s(9L, ((l_203 = 0L) == 0xC0381DD72E9D2D60LL)))), g_168.f0.f2)), l_139[0][0][1])))) , g_29.f3) != g_18.f3) > l_195) > g_83[3]), l_21[0])) == (-1L));
            }
            g_29.f2 = ((((g_168.f0.f1 , ((0x23L >= ((g_163 | (safe_mod_func_int32_t_s_s(l_161, g_168.f0.f0))) >= l_161)) == l_203)) && l_208) < 0x63BE11BCL) ^ g_29.f2);
        }
        if (((((l_222[1][0][0] = (g_221 = (g_220 = ((((((safe_mul_func_int8_t_s_s(((+(safe_rshift_func_uint8_t_u_s(((((l_161 ^ (safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((((!(l_161 ^ (g_84 && 0x55697939L))) , 0x80L) , 0L), l_162)), l_219))) != 0x1397AC89L) <= 0xC8D63AE9L) ^ g_83[3]), 1))) , g_29.f4), l_161)) , 0xAA4CL) , 4294967295UL) | 0L) , g_29.f0) <= g_18.f3)))) || l_222[1][0][0]) & g_18.f3) , g_18.f1))
        { 
            int16_t l_227 = 0xB9A7L;
            uint16_t l_228 = 0xCB71L;
            g_18.f2 ^= 0x0BEB1B7EL;
            for (g_84 = 0; (g_84 <= 0); g_84 += 1)
            { 
                g_168.f0.f2 = (0xB0L <= (l_228 |= ((safe_mul_func_uint16_t_u_u((!((+((0xD81846CFL && g_125) , l_227)) | 0x2AC475FAL)), 0L)) & g_163)));
                g_29.f2 &= g_29.f3;
            }
        }
        else
        { 
            uint8_t l_229 = 0x95L;
            int32_t l_281[3];
            int i;
            for (i = 0; i < 3; i++)
                l_281[i] = 0x19DA46A6L;
            l_229 = l_162;
            l_222[1][0][1] = g_18.f0;
            if ((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(g_168.f0.f0, 6)), (safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(g_84, 15)), (safe_add_func_uint64_t_u_u(l_21[0], ((safe_mul_func_int16_t_s_s(((-2L) && g_29.f4), g_168.f0.f0)) >= g_168.f0.f2))))))))
            { 
                union U2 l_252 = {{0UL,3UL,1L,1L}};
                uint32_t l_283 = 0xC7476B03L;
                int8_t l_284[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_284[i] = 0xD4L;
                g_220 &= ((l_222[1][0][0] |= (safe_rshift_func_uint16_t_u_u((l_252.f0.f2 = (safe_mod_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((g_84 != ((l_252 , (((safe_rshift_func_int8_t_s_u(g_18.f2, ((safe_mul_func_int16_t_s_s(g_168.f0.f0, 65533UL)) >= g_84))) | 0xD15F0D24C40AD006LL) ^ g_168.f0.f2)) <= l_139[0][0][1])), l_257)) & g_163) , l_21[4]), g_168.f0.f2)), 13)) > l_229) != 255UL), l_208))), 1))) >= l_257);
                l_252.f0.f2 &= (safe_add_func_int32_t_s_s((l_139[0][0][0] <= g_220), (safe_lshift_func_uint16_t_u_s(l_161, ((safe_mod_func_int64_t_s_s(((g_18.f1 == g_168.f0.f1) || l_21[4]), 18446744073709551615UL)) || l_22)))));
                l_284[2] &= (safe_mod_func_int8_t_s_s(((((safe_unary_minus_func_int8_t_s(((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((-1L), l_252.f0.f3)), (safe_unary_minus_func_uint32_t_u((~((safe_add_func_uint32_t_u_u((l_281[2] = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(l_229, (safe_rshift_func_uint8_t_u_s(((l_252.f0.f2 == l_257) != l_219), l_21[0])))), l_252.f0.f1))), g_29.f0)) || 0x3462L)))))) <= g_18.f1))) <= l_282) , 0L) && l_283), l_229));
            }
            else
            { 
                uint32_t l_297[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_297[i] = 0UL;
                l_281[2] |= 0L;
                l_298 = ((safe_sub_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((l_139[0][0][1] = (((safe_mod_func_uint64_t_u_u(g_220, 1L)) ^ (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_222[1][0][1] = g_84), ((safe_div_func_int16_t_s_s(((l_297[1] |= g_18.f2) != 1L), 65535UL)) , 1L))), 65535UL))) >= 0x2DL)), g_18.f0)) > g_168.f0.f0), 0x5CAF21F3CBF744FCLL)) <= 0UL);
            }
        }
    }
    return l_21[0];
}



static struct S1  func_7(int8_t  p_8, int8_t  p_9, uint32_t  p_10, int16_t  p_11, int16_t  p_12)
{ 
    union U2 l_99 = {{0UL,0x18921B67L,-1L,0xE0523CF7L}};
    int32_t l_108 = 0xFB7A05A8L;
    g_18.f2 = ((safe_mul_func_int8_t_s_s(((((p_10 ^ g_18.f1) , (l_99.f0.f2 = ((~(l_99 , g_29.f4)) ^ l_99.f0.f0))) < g_18.f2) && g_29.f1), 0x90L)) , l_99.f0.f2);
    for (l_99.f0.f1 = 10; (l_99.f0.f1 < 3); l_99.f0.f1 = safe_sub_func_int8_t_s_s(l_99.f0.f1, 9))
    { 
        uint16_t l_124 = 65535UL;
        int32_t l_127 = 0x90DF5CE3L;
        for (g_18.f2 = (-11); (g_18.f2 >= (-18)); g_18.f2 = safe_sub_func_int8_t_s_s(g_18.f2, 2))
        { 
            const int8_t l_126 = 0L;
            if ((l_108 = ((safe_mul_func_uint16_t_u_u((1L && ((safe_sub_func_int8_t_s_s(((g_84 ^ (0x7DACB8C3E15B5572LL > ((0x98B50884L | p_10) ^ g_29.f3))) ^ p_10), 1UL)) | l_99.f0.f1)), 0x0F4DL)) || g_29.f1)))
            { 
                int64_t l_123 = 1L;
                l_127 = ((((g_84 <= (((safe_lshift_func_int16_t_s_u(((l_108 = g_18.f0) , (g_125 |= (safe_add_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((((4294967289UL || (safe_div_func_uint64_t_u_u((g_18.f1 <= 0xEEL), (-9L)))) , 0xBD4EL) <= g_29.f3), 7)) <= l_123), g_29.f3)) , l_124), 0x1A5A11BA0C28541DLL)) || p_8) , p_9), 0xA0L)))), 11)) == l_126) != l_126)) && 0UL) || (-4L)) & l_127);
            }
            else
            { 
                g_29.f2 = g_18.f0;
            }
        }
    }
    for (g_18.f2 = 0; (g_18.f2 != 26); g_18.f2 = safe_add_func_int16_t_s_s(g_18.f2, 1))
    { 
        int16_t l_138 = 0xBB32L;
        for (g_84 = 0; (g_84 <= 4); g_84 += 1)
        { 
            int32_t l_137 = 0xC530126AL;
            for (p_11 = 0; (p_11 <= 4); p_11 += 1)
            { 
                uint32_t l_136[3][1][5] = {{{1UL,0xE01F0FAEL,0xE01F0FAEL,1UL,0xE01F0FAEL}},{{0x4B6610EEL,0x4B6610EEL,4UL,0x4B6610EEL,0x4B6610EEL}},{{0xE01F0FAEL,1UL,0xE01F0FAEL,0xE01F0FAEL,1UL}}};
                int i, j, k;
                g_29.f2 = (0x1A3DL || ((((safe_mul_func_int8_t_s_s((g_83[p_11] != (l_136[1][0][0] &= (g_83[3] , (((safe_unary_minus_func_int8_t_s((safe_mod_func_uint32_t_u_u((g_29.f0 = ((((+((g_29.f3 < 0x4C1B6DC2EE892D9DLL) <= l_99.f0.f3)) && l_99.f0.f1) || 0UL) == 1L)), l_99.f0.f2)))) != g_83[3]) != p_10)))), l_137)) , l_138) & g_83[p_11]) | 0xB863L));
            }
        }
    }
    return l_99.f0;
}



static int8_t  func_15(struct S1  p_16, uint16_t  p_17)
{ 
    union U2 l_28 = {{251UL,1UL,0x118158FBL,2L}};
    int32_t l_92 = 1L;
    int32_t l_93[1];
    int i;
    for (i = 0; i < 1; i++)
        l_93[i] = 1L;
    if ((func_23(l_28, l_28.f0.f0, g_29, (safe_sub_func_int64_t_s_s(((((((safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(l_28.f0.f3, l_28.f0.f1)), l_28.f0.f1)), g_29.f1)) < l_28.f0.f0) <= 4UL) ^ 3L) & g_18.f1) <= 0x198FL), 0x6D983A5C25CCEB8ALL))) , g_18.f1))
    { 
        for (l_28.f0.f1 = 0; (l_28.f0.f1 < 56); l_28.f0.f1 = safe_add_func_uint8_t_u_u(l_28.f0.f1, 1))
        { 
            for (p_16.f2 = 1; (p_16.f2 <= 4); p_16.f2 += 1)
            { 
                int i;
                if (g_83[p_16.f2])
                    break;
            }
        }
    }
    else
    { 
        int32_t l_91 = (-10L);
        int32_t l_94 = 0xD3416FBBL;
        int32_t l_95 = 0x12148021L;
        l_95 &= (((l_94 = ((g_83[4] = (((safe_add_func_int32_t_s_s(((l_28.f0.f2 > (((((l_92 = l_91) == ((((l_93[0] = p_17) || (l_91 != l_28.f0.f2)) , 0x6EF8CBCAL) < g_83[3])) , g_29.f1) | g_29.f0) & l_91)) != 0x57AD53B930988C8CLL), g_18.f3)) | g_29.f2) , g_83[2])) == l_28.f0.f0)) <= g_29.f2) > p_16.f1);
    }
    return g_29.f3;
}



static struct S0  func_23(union U2  p_24, int32_t  p_25, struct S0  p_26, uint8_t  p_27)
{ 
    uint64_t l_74 = 0x553F327E0E8BB0E3LL;
    int32_t l_80 = (-1L);
    for (g_18.f2 = (-5); (g_18.f2 <= (-3)); g_18.f2++)
    { 
        uint64_t l_48 = 0UL;
        uint16_t l_57 = 65527UL;
        int32_t l_78 = 1L;
        int32_t l_81[3];
        int i;
        for (i = 0; i < 3; i++)
            l_81[i] = 0xD198D803L;
        g_29.f2 &= (safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_29.f0, 13)), (safe_mul_func_uint8_t_u_u((++l_48), p_26.f0)))), ((safe_rshift_func_uint16_t_u_u(((18446744073709551607UL <= (safe_mul_func_uint8_t_u_u((((p_24.f0.f0 , p_26.f0) , (-5L)) | g_18.f2), p_26.f3))) != 0L), p_24.f0.f2)) ^ 0L)));
        if ((0xF9F0L | (l_57 ^= 4L)))
        { 
            uint32_t l_58 = 18446744073709551615UL;
            int32_t l_61 = 0xEC59C4D3L;
            l_58 |= 0x162A9717L;
            l_61 = (g_29.f2 = (safe_lshift_func_int16_t_s_s(0x81CFL, 12)));
            g_29.f2 = (((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((((p_26.f4 || 0x2FFD363BF156DE04LL) || (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(l_74, ((p_27 > g_29.f2) , 1L))), p_24.f0.f2))) < l_58), g_18.f1)), l_74)) != (-1L)), 6)), g_29.f1)) == l_74) <= 0xC0F60069L);
        }
        else
        { 
            int8_t l_77 = (-9L);
            int32_t l_79 = 0x2C2F6A78L;
            int32_t l_82 = (-10L);
            for (p_27 = 0; (p_27 > 52); p_27 = safe_add_func_uint64_t_u_u(p_27, 9))
            { 
                ++g_84;
                if (p_24.f0.f3)
                    break;
            }
        }
    }
    return p_26;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
    transparent_crc(g_29.f2, "g_29.f2", print_hash_value);
    transparent_crc(g_29.f3, "g_29.f3", print_hash_value);
    transparent_crc(g_29.f4, "g_29.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_168.f0.f0, "g_168.f0.f0", print_hash_value);
    transparent_crc(g_168.f0.f1, "g_168.f0.f1", print_hash_value);
    transparent_crc(g_168.f0.f2, "g_168.f0.f2", print_hash_value);
    transparent_crc(g_168.f0.f3, "g_168.f0.f3", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
