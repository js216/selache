// SPDX-License-Identifier: MIT
// cctest_csmith_a9a75de3.c --- cctest case csmith_a9a75de3 (csmith seed 2846318051)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfe833626 */

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

// Options:   -s 2846318051 -o /tmp/csmith_gen_36ta_6ve/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 16;
   const unsigned f1 : 7;
   signed f2 : 14;
   unsigned f3 : 1;
   signed f4 : 14;
   const unsigned f5 : 15;
   unsigned f6 : 18;
};
#pragma pack(pop)

union U1 {
   int8_t * f0;
   uint64_t  f1;
   const uint32_t  f2;
   int32_t  f3;
};

union U2 {
   uint32_t  f0;
   uint64_t  f1;
};


static int8_t g_7 = 6L;
static int32_t g_15 = 8L;
static int32_t *g_19 = &g_15;
static int32_t **g_18[1] = {&g_19};
static int64_t g_47 = 0xF43993911E745C5BLL;
static uint32_t g_84 = 0x8C2BA284L;
static int16_t g_90 = (-1L);
static int8_t *g_94 = &g_7;
static uint32_t *g_101 = &g_84;
static uint32_t **g_100 = &g_101;
static int32_t g_109[5] = {0x0CA2F3F1L,0x0CA2F3F1L,0x0CA2F3F1L,0x0CA2F3F1L,0x0CA2F3F1L};
static int64_t g_142 = 0xA1CF02BA5F2539F9LL;
static int64_t *g_141 = &g_142;
static uint8_t g_144 = 0x50L;
static uint64_t g_145 = 0xD8F89D9CF70450DALL;
static union U2 g_157 = {0xC778BD25L};
static union U1 g_173 = {0};
static struct S0 g_179 = {173,1,-38,0,98,88,83};
static struct S0 g_181 = {29,2,59,0,-127,6,292};
static union U1 g_183[2][3] = {{{0},{0},{0}},{{0},{0},{0}}};
static uint32_t g_256[4][7] = {{18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL},{0x4656CEF8L,18446744073709551615UL,0x4656CEF8L,18446744073709551615UL,0x4656CEF8L,18446744073709551615UL,0x4656CEF8L},{18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL},{0x4656CEF8L,18446744073709551615UL,0x4656CEF8L,18446744073709551615UL,0x4656CEF8L,18446744073709551615UL,0x4656CEF8L}};
static const int32_t ****g_332 = (void*)0;
static int32_t ***g_334 = &g_18[0];
static int32_t ****g_333 = &g_334;
static int8_t g_377 = 0x3FL;
static uint64_t *g_398[4][5][7] = {{{&g_145,(void*)0,&g_145,&g_145,(void*)0,(void*)0,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,(void*)0,&g_145},{&g_145,(void*)0,&g_145,(void*)0,(void*)0,&g_145,(void*)0},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,(void*)0,&g_145,&g_145,&g_145,&g_145}},{{(void*)0,(void*)0,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,(void*)0,(void*)0,(void*)0,&g_145,&g_145},{(void*)0,&g_145,&g_145,&g_145,&g_145,(void*)0,&g_145},{&g_145,(void*)0,&g_145,(void*)0,(void*)0,(void*)0,(void*)0},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145,(void*)0}},{{&g_145,(void*)0,&g_145,&g_145,&g_145,(void*)0,&g_145},{&g_145,&g_145,(void*)0,&g_145,&g_145,&g_145,&g_145},{(void*)0,&g_145,&g_145,(void*)0,(void*)0,(void*)0,&g_145},{&g_145,(void*)0,(void*)0,&g_145,&g_145,(void*)0,(void*)0},{(void*)0,&g_145,&g_145,&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,(void*)0,&g_145,&g_145,(void*)0,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,(void*)0,&g_145,(void*)0},{&g_145,&g_145,(void*)0,(void*)0,&g_145,&g_145,(void*)0},{&g_145,&g_145,&g_145,&g_145,(void*)0,(void*)0,&g_145}}};
static const int32_t *g_437[1] = {&g_109[1]};
static uint16_t g_544 = 1UL;
static union U2 *g_554[5] = {&g_157,&g_157,&g_157,&g_157,&g_157};
static union U2 **g_553 = &g_554[1];
static union U2 **g_559 = &g_554[1];
static uint32_t *g_590 = &g_256[1][4];
static uint32_t **g_589 = &g_590;
static int64_t **g_804 = &g_141;
static int64_t ***g_803 = &g_804;
static int32_t * const *g_827 = &g_19;
static int32_t * const **g_826 = &g_827;
static struct S0 g_830 = {-181,4,-81,0,53,90,216};
static struct S0 *g_829 = &g_830;
static int8_t * const *g_879[6] = {&g_94,&g_94,&g_94,&g_94,&g_94,&g_94};
static int8_t * const **g_878 = &g_879[2];
static int8_t * const ***g_877 = &g_878;
static uint32_t ***g_978[1] = {(void*)0};
static uint32_t ****g_977 = &g_978[0];
static const uint32_t **** const *g_989 = (void*)0;
static int8_t g_997 = 0xA9L;
static struct S0 **g_1009[4] = {&g_829,&g_829,&g_829,&g_829};
static struct S0 *** const g_1008 = &g_1009[0];
static struct S0 ***g_1052 = &g_1009[1];
static struct S0 ****g_1051 = &g_1052;
static struct S0 * const *g_1056 = &g_829;
static struct S0 * const ** const g_1055 = &g_1056;
static struct S0 * const ** const *g_1054[4] = {&g_1055,&g_1055,&g_1055,&g_1055};
static uint32_t g_1103 = 0x884897DDL;
static uint32_t g_1183[1][7] = {{0x8EA38B45L,0x8EA38B45L,0x8EA38B45L,0x8EA38B45L,0x8EA38B45L,0x8EA38B45L,0x8EA38B45L}};
static const struct S0 g_1342 = {220,3,-121,0,21,83,9};
static const struct S0 *g_1341 = &g_1342;
static union U2 *g_1367 = &g_157;
static uint16_t g_1378 = 65535UL;
static uint8_t g_1463 = 1UL;
static uint64_t g_1532 = 1UL;
static int8_t g_1561 = 0x17L;
static int32_t *****g_1641 = &g_333;
static int16_t g_1667 = 0x64E1L;
static uint16_t g_1668 = 0x07EAL;
static union U1 *g_1679 = &g_183[1][1];
static union U1 **g_1678 = &g_1679;
static union U2 ***g_1813 = &g_559;
static union U2 ****g_1812 = &g_1813;
static uint32_t *****g_1963 = (void*)0;
static int16_t *g_2022 = (void*)0;
static int16_t ** const g_2021 = &g_2022;
static int8_t g_2118 = 0xB4L;
static uint16_t g_2127 = 65535UL;
static uint16_t g_2140 = 0x4687L;
static struct S0 g_2151[4][2] = {{{248,4,-25,0,52,159,336},{248,4,-25,0,52,159,336}},{{248,4,-25,0,52,159,336},{248,4,-25,0,52,159,336}},{{248,4,-25,0,52,159,336},{248,4,-25,0,52,159,336}},{{248,4,-25,0,52,159,336},{248,4,-25,0,52,159,336}}};
static int32_t g_2248 = 0x39C88BF8L;
static uint64_t g_2408 = 6UL;
static int32_t g_2436 = 0x759260AAL;
static uint16_t g_2492[2] = {0xEC9EL,0xEC9EL};
static const uint16_t **g_2515 = (void*)0;
static const uint16_t ***g_2514 = &g_2515;
static uint8_t g_2546 = 246UL;
static uint8_t * const *g_2549 = (void*)0;
static int8_t g_2562 = 0x67L;
static uint32_t g_2584 = 0UL;
static int64_t **g_2617[3] = {&g_141,&g_141,&g_141};
static int32_t g_2680[3][6] = {{(-2L),0xAD00917CL,(-2L),0xAD00917CL,(-2L),0xAD00917CL},{(-2L),0xAD00917CL,(-2L),0xAD00917CL,(-2L),0xAD00917CL},{(-2L),0xAD00917CL,(-2L),0xAD00917CL,(-2L),0xAD00917CL}};
static int64_t ** const *g_2686 = (void*)0;
static int64_t ** const **g_2685 = &g_2686;
static int64_t ** const ***g_2684 = &g_2685;
static uint8_t *g_2706 = &g_2546;
static uint16_t *g_2735 = &g_1668;
static uint16_t ** const g_2734[6][1] = {{&g_2735},{&g_2735},{&g_2735},{&g_2735},{&g_2735},{&g_2735}};
static uint16_t ** const *g_2733 = &g_2734[1][0];
static uint32_t * const * const g_2741 = &g_101;
static uint32_t * const * const *g_2740 = &g_2741;
static uint32_t * const * const **g_2739 = &g_2740;
static uint32_t * const * const ***g_2738 = &g_2739;
static uint8_t g_2755 = 0xFDL;
static const int8_t g_2789[2] = {1L,1L};
static const int8_t *g_2788 = &g_2789[0];
static const int8_t **g_2787[2] = {&g_2788,&g_2788};
static int16_t g_2950 = 0x7C74L;
static int16_t g_2966 = 0x6CE9L;
static uint8_t **g_3052[6][5][3] = {{{&g_2706,(void*)0,&g_2706},{(void*)0,(void*)0,(void*)0},{&g_2706,(void*)0,&g_2706},{&g_2706,(void*)0,(void*)0},{&g_2706,&g_2706,&g_2706}},{{&g_2706,(void*)0,&g_2706},{&g_2706,&g_2706,&g_2706},{(void*)0,(void*)0,&g_2706},{&g_2706,(void*)0,&g_2706},{(void*)0,(void*)0,(void*)0}},{{&g_2706,(void*)0,&g_2706},{&g_2706,(void*)0,(void*)0},{&g_2706,&g_2706,&g_2706},{&g_2706,(void*)0,&g_2706},{&g_2706,&g_2706,&g_2706}},{{(void*)0,(void*)0,&g_2706},{&g_2706,(void*)0,&g_2706},{(void*)0,(void*)0,(void*)0},{&g_2706,(void*)0,&g_2706},{&g_2706,(void*)0,(void*)0}},{{&g_2706,&g_2706,&g_2706},{&g_2706,(void*)0,&g_2706},{&g_2706,&g_2706,&g_2706},{(void*)0,(void*)0,&g_2706},{&g_2706,(void*)0,&g_2706}},{{(void*)0,(void*)0,(void*)0},{&g_2706,(void*)0,&g_2706},{&g_2706,(void*)0,(void*)0},{&g_2706,&g_2706,&g_2706},{&g_2706,(void*)0,&g_2706}}};
static int64_t ****g_3069 = &g_803;
static int64_t *****g_3068[7] = {&g_3069,&g_3069,&g_3069,&g_3069,&g_3069,&g_3069,&g_3069};
static int8_t g_3157 = 0x0DL;
static struct S0 g_3189[6][6][7] = {{{{253,3,-61,0,-126,150,1},{-206,5,69,0,89,69,41},{187,1,-96,0,112,55,72},{-189,5,-75,0,-56,89,232},{-27,9,13,0,102,105,63},{-207,1,20,0,90,0,298},{-207,1,20,0,90,0,298}},{{-9,6,-105,0,-127,176,166},{-182,0,-53,0,-33,75,70},{101,5,87,0,0,93,474},{-182,0,-53,0,-33,75,70},{-9,6,-105,0,-127,176,166},{220,3,31,0,-29,96,127},{-226,5,-41,0,-26,101,443}},{{-134,2,7,0,24,168,383},{90,6,-26,0,-71,88,264},{-48,8,-87,0,85,124,110},{-122,9,-5,0,-86,42,369},{-207,1,20,0,90,0,298},{187,1,-96,0,112,55,72},{-220,2,8,0,98,31,11}},{{-71,8,42,0,-69,7,275},{220,3,31,0,-29,96,127},{-156,9,87,0,39,73,219},{246,8,106,0,-42,157,146},{-36,4,-28,0,-90,111,74},{-0,5,-3,0,66,13,504},{162,9,37,0,27,7,52}},{{-134,2,7,0,24,168,383},{-122,9,-5,0,-86,42,369},{20,9,-43,0,-13,24,155},{98,1,-42,0,28,70,426},{20,9,-43,0,-13,24,155},{-122,9,-5,0,-86,42,369},{-134,2,7,0,24,168,383}},{{-9,6,-105,0,-127,176,166},{47,8,31,0,92,49,156},{-56,7,-54,0,55,81,335},{-243,9,6,0,-115,168,111},{160,1,-123,0,68,97,226},{-217,9,-68,0,-123,168,364},{101,5,87,0,0,93,474}}},{{{253,3,-61,0,-126,150,1},{-89,10,-28,0,54,54,340},{-150,1,-125,0,-8,121,215},{213,2,-116,0,0,20,368},{98,1,-42,0,28,70,426},{-220,2,8,0,98,31,11},{90,6,-26,0,-71,88,264}},{{-156,9,87,0,39,73,219},{51,5,77,0,105,32,276},{-56,7,-54,0,55,81,335},{139,3,92,0,-27,80,54},{191,9,100,0,72,85,485},{139,3,92,0,-27,80,54},{-56,7,-54,0,55,81,335}},{{25,8,-4,0,-10,178,471},{25,8,-4,0,-10,178,471},{20,9,-43,0,-13,24,155},{185,0,101,0,-3,16,20},{-206,5,69,0,89,69,41},{-48,8,-87,0,85,124,110},{-133,8,-117,0,18,129,507}},{{191,9,100,0,72,85,485},{44,6,89,0,37,129,392},{-156,9,87,0,39,73,219},{-42,2,-49,0,108,172,478},{101,5,87,0,0,93,474},{51,5,77,0,105,32,276},{40,0,-117,0,-33,28,510}},{{206,1,2,0,21,179,338},{187,1,-96,0,112,55,72},{-48,8,-87,0,85,124,110},{-207,1,20,0,90,0,298},{-206,5,69,0,89,69,41},{164,0,-18,0,-1,87,342},{-206,5,69,0,89,69,41}},{{162,9,37,0,27,7,52},{-235,4,49,0,65,89,470},{101,5,87,0,0,93,474},{-135,5,-83,0,66,87,50},{101,5,87,0,0,93,474},{47,8,31,0,92,49,156},{-135,10,71,0,-4,137,190}}},{{{213,2,-116,0,0,20,368},{90,6,-26,0,-71,88,264},{-189,5,-75,0,-56,89,232},{-133,8,-117,0,18,129,507},{-220,2,8,0,98,31,11},{-89,10,-28,0,54,54,340},{25,8,-4,0,-10,178,471}},{{-9,6,-105,0,-127,176,166},{-243,9,6,0,-115,168,111},{150,2,-51,0,-4,144,506},{-235,4,49,0,65,89,470},{-42,2,68,0,75,7,126},{51,5,77,0,105,32,276},{-135,10,71,0,-4,137,190}},{{25,8,-4,0,-10,178,471},{-150,1,-125,0,-8,121,215},{-27,9,13,0,102,105,63},{-27,9,13,0,102,105,63},{-150,1,-125,0,-8,121,215},{25,8,-4,0,-10,178,471},{185,0,101,0,-3,16,20}},{{160,1,-123,0,68,97,226},{-0,5,-3,0,66,13,504},{40,0,-117,0,-33,28,510},{-243,9,6,0,-115,168,111},{162,9,37,0,27,7,52},{44,6,89,0,37,129,392},{49,8,123,0,-57,135,454}},{{-23,3,50,0,-15,125,110},{206,1,2,0,21,179,338},{20,9,-43,0,-13,24,155},{-246,4,-103,0,-83,74,498},{213,2,-116,0,0,20,368},{187,1,-96,0,112,55,72},{98,1,-42,0,28,70,426}},{{-56,7,-54,0,55,81,335},{-0,5,-3,0,66,13,504},{101,5,87,0,0,93,474},{246,1,96,0,67,110,147},{-71,8,42,0,-69,7,275},{-235,4,49,0,65,89,470},{-9,6,-105,0,-127,176,166}}},{{{-220,2,8,0,98,31,11},{-150,1,-125,0,-8,121,215},{253,3,-61,0,-126,150,1},{187,1,-96,0,112,55,72},{164,0,-18,0,-1,87,342},{-48,8,-87,0,85,124,110},{-89,10,-28,0,54,54,340}},{{-36,4,-28,0,-90,111,74},{-243,9,6,0,-115,168,111},{49,8,123,0,-57,135,454},{51,5,77,0,105,32,276},{191,9,100,0,72,85,485},{75,8,-113,0,-23,86,319},{208,8,-0,0,-25,13,33}},{{253,3,-61,0,-126,150,1},{90,6,-26,0,-71,88,264},{-89,10,-28,0,54,54,340},{187,1,-96,0,112,55,72},{20,9,-43,0,-13,24,155},{20,9,-43,0,-13,24,155},{187,1,-96,0,112,55,72}},{{-42,2,68,0,75,7,126},{65,10,-92,0,3,105,436},{-42,2,68,0,75,7,126},{246,1,96,0,67,110,147},{49,8,123,0,-57,135,454},{-42,2,-49,0,108,172,478},{-240,9,-95,0,-41,155,110}},{{-207,1,20,0,90,0,298},{-189,5,-75,0,-56,89,232},{185,0,101,0,-3,16,20},{-246,4,-103,0,-83,74,498},{-122,9,-5,0,-86,42,369},{-150,1,-125,0,-8,121,215},{-206,5,69,0,89,69,41}},{{208,8,-0,0,-25,13,33},{139,3,92,0,-27,80,54},{-156,9,87,0,39,73,219},{-243,9,6,0,-115,168,111},{153,6,120,0,-4,166,397},{-42,2,-49,0,108,172,478},{-56,7,-54,0,55,81,335}}},{{{-48,8,-87,0,85,124,110},{-27,9,13,0,102,105,63},{-246,4,-103,0,-83,74,498},{-27,9,13,0,102,105,63},{-48,8,-87,0,85,124,110},{20,9,-43,0,-13,24,155},{213,2,-116,0,0,20,368}},{{-254,0,60,0,29,6,309},{220,3,31,0,-29,96,127},{249,0,-56,0,32,36,386},{-235,4,49,0,65,89,470},{-56,7,-54,0,55,81,335},{75,8,-113,0,-23,86,319},{-26,1,82,0,107,40,264}},{{90,6,-26,0,-71,88,264},{20,9,-43,0,-13,24,155},{-207,1,20,0,90,0,298},{-133,8,-117,0,18,129,507},{98,1,-42,0,28,70,426},{-48,8,-87,0,85,124,110},{-220,2,8,0,98,31,11}},{{-254,0,60,0,29,6,309},{-235,4,49,0,65,89,470},{-125,7,92,0,57,75,32},{-16,10,67,0,109,146,312},{-125,7,92,0,57,75,32},{-235,4,49,0,65,89,470},{-254,0,60,0,29,6,309}},{{-48,8,-87,0,85,124,110},{253,3,-61,0,-126,150,1},{-23,3,50,0,-15,125,110},{213,2,-116,0,0,20,368},{-27,9,13,0,102,105,63},{187,1,-96,0,112,55,72},{-246,4,-103,0,-83,74,498}},{{208,8,-0,0,-25,13,33},{240,5,100,0,-24,151,427},{-135,10,71,0,-4,137,190},{-0,5,-3,0,66,13,504},{-240,9,-95,0,-41,155,110},{44,6,89,0,37,129,392},{40,0,-117,0,-33,28,510}}},{{{-207,1,20,0,90,0,298},{-89,10,-28,0,54,54,340},{-23,3,50,0,-15,125,110},{25,8,-4,0,-10,178,471},{253,3,-61,0,-126,150,1},{25,8,-4,0,-10,178,471},{-23,3,50,0,-15,125,110}},{{-42,2,68,0,75,7,126},{225,8,-23,0,-60,83,101},{-125,7,92,0,57,75,32},{-182,0,-53,0,-33,75,70},{150,2,-51,0,-4,144,506},{51,5,77,0,105,32,276},{162,9,37,0,27,7,52}},{{253,3,-61,0,-126,150,1},{185,0,101,0,-3,16,20},{-207,1,20,0,90,0,298},{-23,3,50,0,-15,125,110},{-246,4,-103,0,-83,74,498},{-89,10,-28,0,54,54,340},{20,9,-43,0,-13,24,155}},{{-36,4,-28,0,-90,111,74},{75,8,-113,0,-23,86,319},{249,0,-56,0,32,36,386},{-42,2,-49,0,108,172,478},{150,2,-51,0,-4,144,506},{47,8,31,0,92,49,156},{150,2,-51,0,-4,144,506}},{{-220,2,8,0,98,31,11},{-246,4,-103,0,-83,74,498},{-246,4,-103,0,-83,74,498},{-220,2,8,0,98,31,11},{253,3,-61,0,-126,150,1},{-122,9,-5,0,-86,42,369},{206,1,2,0,21,179,338}},{{-56,7,-54,0,55,81,335},{51,5,77,0,105,32,276},{-156,9,87,0,39,73,219},{-138,5,-37,0,-75,39,173},{-240,9,-95,0,-41,155,110},{220,3,31,0,-29,96,127},{160,1,-123,0,68,97,226}}}};
static int16_t g_3220[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t *g_3245[5][1] = {{&g_157.f0},{&g_157.f0},{&g_157.f0},{&g_157.f0},{&g_157.f0}};
static int16_t g_3260 = 0x763AL;
static uint32_t g_3360 = 18446744073709551607UL;



static int8_t  func_1(void);
static int16_t  func_8(int8_t * p_9, int16_t  p_10);
static int32_t * func_12(uint64_t  p_13);
static int8_t  func_22(uint64_t  p_23, int8_t * p_24);
static int8_t * func_25(union U2  p_26, int8_t * p_27, uint8_t  p_28, int8_t * p_29);
static int8_t * func_31(int32_t  p_32);
static uint64_t  func_54(int32_t * const  p_55, const int64_t  p_56, uint32_t * p_57, int32_t *** p_58, uint32_t  p_59);
static uint32_t * func_64(union U1  p_65, union U1  p_66, int8_t * p_67, const uint64_t  p_68, uint64_t  p_69);




static int8_t  func_1(void)
{ 
    int8_t *l_6 = &g_7;
    int32_t l_11 = 0x71F09A2BL;
    uint64_t l_3154 = 0xBE13DBDEFDF5C917LL;
    int64_t *l_3158 = &g_142;
    const uint32_t *l_3165 = &g_84;
    const uint32_t **l_3164[5][3] = {{&l_3165,(void*)0,(void*)0},{&l_3165,&l_3165,&l_3165},{&l_3165,(void*)0,(void*)0},{&l_3165,&l_3165,&l_3165},{(void*)0,&l_3165,&l_3165}};
    const uint32_t ***l_3163 = &l_3164[3][0];
    const uint32_t ****l_3162 = &l_3163;
    const uint32_t *****l_3161 = &l_3162;
    uint8_t **l_3202[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_3215 = 0x786BF65E1D70B54ELL;
    int32_t l_3216 = 0x04BC0418L;
    int8_t l_3219 = 0x06L;
    int32_t l_3223 = 0x0DC7CC25L;
    int32_t l_3224[1];
    uint32_t l_3257 = 0x1CD13FFDL;
    uint16_t *l_3262 = &g_1378;
    const int16_t *l_3281[1];
    const int16_t **l_3280 = &l_3281[0];
    uint8_t l_3346[1][3][3];
    uint8_t l_3352 = 0x49L;
    int32_t *l_3356 = &l_11;
    int32_t *l_3357 = &g_183[1][1].f3;
    int32_t *l_3358 = &l_3224[0];
    int32_t *l_3359[1];
    struct S0 *l_3370 = &g_2151[0][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_3224[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_3281[i] = &g_3220[0];
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_3346[i][j][k] = 0x6DL;
        }
    }
    for (i = 0; i < 1; i++)
        l_3359[i] = &g_183[1][1].f3;
    if ((safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s((l_6 != &g_7), (g_7 , func_8(&g_7, l_11)))) >= (safe_add_func_int32_t_s_s((l_11 | l_11), l_11))), l_11)))
    { 
        int64_t *l_3159[7];
        uint32_t *** const l_3168 = &g_100;
        uint32_t *** const *l_3167[6];
        uint32_t *** const **l_3166 = &l_3167[1];
        uint64_t **l_3177[5][2][7] = {{{&g_398[0][0][3],&g_398[1][4][1],&g_398[1][4][1],&g_398[1][4][1],&g_398[1][4][1],&g_398[0][0][3],&g_398[1][1][2]},{&g_398[1][4][1],&g_398[2][0][1],&g_398[3][3][2],&g_398[1][4][1],&g_398[1][4][1],&g_398[3][3][2],&g_398[2][0][1]}},{{&g_398[1][4][1],&g_398[1][1][2],&g_398[0][0][3],&g_398[1][4][1],&g_398[1][4][1],&g_398[1][4][1],&g_398[1][4][1]},{&g_398[0][0][3],&g_398[2][0][1],&g_398[0][0][3],&g_398[1][4][1],&g_398[2][0][1],&g_398[1][1][2],&g_398[1][1][2]}},{{&g_398[2][0][1],&g_398[1][4][1],&g_398[3][3][2],&g_398[1][4][1],&g_398[2][0][1],&g_398[3][3][2],&g_398[1][4][1]},{&g_398[1][4][1],&g_398[1][1][2],&g_398[1][4][1],&g_398[1][4][1],&g_398[1][4][1],&g_398[1][1][2],&g_398[1][4][1]}},{{&g_398[0][0][3],&g_398[1][4][1],&g_398[1][1][2],&g_398[1][4][1],&g_398[1][4][1],&g_398[1][4][1],&g_398[1][1][2]},{&g_398[1][4][1],&g_398[1][4][1],&g_398[3][3][2],&g_398[2][0][1],&g_398[1][4][1],&g_398[3][3][2],&g_398[1][4][1]}},{{&g_398[2][0][1],&g_398[1][1][2],&g_398[1][1][2],&g_398[2][0][1],&g_398[1][4][1],&g_398[0][0][3],&g_398[2][0][1]},{&g_398[0][0][3],&g_398[1][4][1],&g_398[1][4][1],&g_398[1][4][1],&g_398[1][4][1],&g_398[0][0][3],&g_398[1][1][2]}}};
        uint64_t ***l_3178 = &l_3177[4][1][2];
        uint64_t *l_3179 = (void*)0;
        uint64_t *l_3180 = &g_2408;
        int8_t l_3181 = 1L;
        int32_t l_3204 = 0x1265301BL;
        int32_t l_3217 = 0x25D35AF0L;
        int32_t l_3218 = 0x6DF0976BL;
        int32_t l_3221 = 0x5C73FB6CL;
        int32_t l_3222 = 9L;
        int32_t l_3225 = (-1L);
        int32_t l_3226 = 0xFCBDE2ABL;
        union U1 l_3234 = {0};
        int32_t *l_3248 = &l_3224[0];
        int32_t *l_3249[1];
        uint64_t l_3250 = 18446744073709551612UL;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_3159[i] = &g_142;
        for (i = 0; i < 6; i++)
            l_3167[i] = &l_3168;
        for (i = 0; i < 1; i++)
            l_3249[i] = &g_2680[1][0];
        l_3154 = 0x825BFAE2L;
        if (((safe_mul_func_uint16_t_u_u(g_3157, (((***g_3069) = l_3158) != l_3159[0]))) , (!((l_3161 != (l_3166 = l_3166)) ^ (((*l_3180) = (safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((((*l_3178) = l_3177[4][1][2]) == &g_398[1][4][1]) | 0x101A71D1C73F24F6LL), 0)), 0xC4L)), g_544)), 12))) == l_11)))))
        { 
lbl_3247:
            l_3181 = (l_11 = l_11);
            (*g_826) = (*g_826);
        }
        else
        { 
            struct S0 l_3184 = {204,10,-46,0,-13,57,34};
            int8_t l_3200 = 0x22L;
            int32_t *l_3205 = &g_109[1];
            int32_t *l_3206 = &l_11;
            int32_t *l_3207 = &g_173.f3;
            int32_t *l_3208 = &g_2248;
            int32_t *l_3209 = &g_109[1];
            int32_t *l_3210 = (void*)0;
            int32_t *l_3211 = &g_183[1][1].f3;
            int32_t *l_3212 = &l_3204;
            int32_t *l_3213 = &g_2436;
            int32_t *l_3214[4] = {&l_11,&l_11,&l_11,&l_11};
            uint64_t l_3227 = 0x188ACC3D3073E66ALL;
            int8_t l_3246 = 0x6FL;
            int i;
            for (g_2127 = (-3); (g_2127 == 54); ++g_2127)
            { 
                uint64_t l_3201 = 0x0806305931951B4ALL;
                int32_t *l_3203[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_3203[i] = &g_2248;
                l_3204 |= (l_3184 , ((safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s((g_3189[2][3][2] , (((safe_lshift_func_uint16_t_u_u(l_3184.f5, ((&g_2706 == (((safe_add_func_uint8_t_u_u(((*g_2706)--), ((((*l_3180) = (safe_lshift_func_int16_t_s_s((!(!((l_11 , (*g_1813)) == (l_3181 , (*g_1813))))), l_3200))) >= l_3201) > l_3184.f4))) ^ 1L) , l_3202[2])) < 0x93L))) ^ g_3157) ^ (****g_2739))), 0x0EL)), l_3181)) , l_3184.f6));
            }
            l_3227++;
            for (g_1103 = 0; (g_1103 <= 2); g_1103 += 1)
            { 
                int i;
                (*l_3209) = ((safe_lshift_func_int8_t_s_u((((safe_mod_func_uint32_t_u_u(g_3220[g_1103], g_3220[(g_1103 + 1)])) , (g_3220[g_1103] , l_3234)) , (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((0x1EL != (((**l_3168) = (void*)0) == g_3245[1][0])), g_3220[g_1103])), 7UL)) , g_3220[(g_1103 + 1)]), l_3154)), l_3246)), l_3216))), 5)) != 0x717C592BL);
                if (l_3184.f6)
                    goto lbl_3247;
                if (l_3223)
                    break;
            }
            (*l_3209) |= l_3224[0];
        }
        l_3226 &= (l_3216 = 0x9E91098FL);
        --l_3250;
        for (l_3225 = (-21); (l_3225 <= 15); l_3225 = safe_add_func_uint16_t_u_u(l_3225, 7))
        { 
            int32_t *l_3255 = &l_3221;
            int32_t l_3256 = 0xAF4EF905L;
            (****g_1641) = l_3255;
            l_3257--;
            (****g_333) = 1L;
            l_3249[0] = &l_3256;
        }
    }
    else
    { 
        union U1 l_3261[2] = {{0},{0}};
        int32_t l_3265[5][4][3] = {{{(-5L),0xB0C89B4BL,0L},{0xA68DBD95L,0xA68DBD95L,(-2L)},{0x2B75404AL,0xB0C89B4BL,0L},{0xA68DBD95L,1L,(-2L)}},{{(-5L),0xB0C89B4BL,0L},{0xA68DBD95L,0xA68DBD95L,(-2L)},{0x2B75404AL,0xB0C89B4BL,0L},{0xA68DBD95L,1L,(-2L)}},{{(-5L),0xB0C89B4BL,0L},{0xA68DBD95L,0xA68DBD95L,(-2L)},{0x2B75404AL,0xB0C89B4BL,0L},{0xA68DBD95L,1L,(-2L)}},{{(-5L),0xB0C89B4BL,0L},{0xA68DBD95L,0xA68DBD95L,(-2L)},{0x2B75404AL,0xB0C89B4BL,0L},{0xA68DBD95L,1L,(-2L)}},{{(-5L),0xB0C89B4BL,0L},{0xA68DBD95L,0xA68DBD95L,(-2L)},{0x2B75404AL,0xB0C89B4BL,0L},{0xA68DBD95L,1L,(-2L)}}};
        uint32_t l_3290 = 0xD26497ABL;
        uint64_t l_3311 = 18446744073709551615UL;
        int32_t *l_3331 = &l_3265[1][3][0];
        int64_t l_3340 = 0x492DED8AFCC47B73LL;
        int32_t l_3351 = 0xCABF2272L;
        int32_t *l_3355 = &g_15;
        int i, j, k;
        for (l_3257 = 0; (l_3257 <= 3); l_3257 += 1)
        { 
            if (g_3260)
                break;
        }
        if (((((l_3261[0] , l_3262) == ((**g_589) , l_3262)) > ((safe_rshift_func_int16_t_s_u((((l_11 , l_3265[2][2][2]) && (safe_rshift_func_uint16_t_u_s(l_3265[2][2][2], l_3219))) != 0L), 9)) && l_3265[2][2][2])) , l_3224[0]))
        { 
            int32_t *l_3295 = &l_3224[0];
            for (g_15 = 0; (g_15 <= 0); g_15 += 1)
            { 
                uint32_t l_3291 = 0x9AAD0486L;
                for (g_84 = 0; (g_84 <= 0); g_84 += 1)
                { 
                    uint64_t l_3268 = 0x91BF546B32FF4D92LL;
                    int16_t *l_3269 = (void*)0;
                    int32_t *l_3289 = &l_3261[0].f3;
                    uint32_t *l_3292 = &l_3257;
                    uint8_t ** const l_3293 = &g_2706;
                    uint8_t ***l_3294 = &l_3202[2];
                    int i;
                    (*l_3294) = (((((l_3216 = l_3268) > (((**g_804) = ((safe_mul_func_int8_t_s_s(l_3224[0], 0xECL)) , (((*l_3292) = (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((l_3268 , (l_3280 == ((safe_mod_func_uint16_t_u_u((((l_3215 & (((*l_3289) = (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s(((safe_div_func_int32_t_s_s(l_3224[0], 0xABD7C96DL)) <= 0xC258C95F0E93A8AELL))) > (***g_878)), 0L))) & l_3290)) | 0x6DC2L) || 0x64C2L), 0x09CEL)) , &g_2022))), 4L)), l_3291)) < (***g_878)) ^ l_3291), l_3265[2][2][2])), 1L))) <= l_3224[0]))) <= l_3265[2][2][2])) <= l_3290) & 253UL) , l_3293);
                }
            }
            (*l_3295) ^= l_3290;
        }
        else
        { 
            uint8_t l_3305[4][6][4] = {{{0xC8L,0UL,0UL,0xC8L},{0UL,0xC8L,0UL,1UL},{0UL,0UL,0UL,0x3EL},{0xC8L,1UL,0x3EL,0x3EL},{0UL,0UL,0x5EL,1UL},{1UL,0xC8L,0x5EL,0xC8L}},{{0UL,0UL,0x3EL,0x5EL},{0xC8L,0UL,0UL,0xC8L},{0UL,0xC8L,0UL,1UL},{0UL,0UL,0UL,0x3EL},{0xC8L,1UL,0x3EL,0x3EL},{0UL,0UL,0UL,0x3EL}},{{0x3EL,0UL,0UL,0UL},{1UL,1UL,0x5EL,0UL},{0UL,1UL,1UL,0UL},{1UL,0UL,1UL,0x3EL},{1UL,1UL,1UL,0x5EL},{0UL,0x3EL,0x5EL,0x5EL}},{{1UL,1UL,0UL,0x3EL},{0x3EL,0UL,0UL,0UL},{1UL,1UL,0x5EL,0UL},{0UL,1UL,1UL,0UL},{1UL,0UL,1UL,0x3EL},{1UL,1UL,1UL,0x5EL}}};
            int64_t l_3315 = 0xDA4671C537A9C755LL;
            int32_t l_3325 = 0x92186C40L;
            int32_t l_3326 = 0x66B5294AL;
            int32_t l_3327[4];
            int8_t l_3332 = 0x45L;
            int16_t l_3333 = 0xA340L;
            int8_t l_3343 = 0x86L;
            int32_t *l_3349 = &l_3265[1][1][2];
            int32_t *l_3350[7] = {(void*)0,(void*)0,&g_109[1],(void*)0,(void*)0,&g_109[1],(void*)0};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_3327[i] = 0x63DC518AL;
            if ((~(safe_div_func_uint32_t_u_u(l_3219, 7UL))))
            { 
                int8_t l_3303 = 0x2CL;
                uint64_t *l_3304 = &l_3261[0].f1;
                union U2 ****l_3308[2][5][7] = {{{&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813},{&g_1813,&g_1813,&g_1813,&g_1813,(void*)0,&g_1813,&g_1813},{&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813},{&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813},{&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813}},{{(void*)0,&g_1813,&g_1813,&g_1813,(void*)0,(void*)0,(void*)0},{&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813},{&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813},{&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813},{(void*)0,&g_1813,&g_1813,&g_1813,&g_1813,&g_1813,(void*)0}}};
                int16_t **l_3310 = &g_2022;
                int16_t ***l_3309 = &l_3310;
                uint64_t *l_3312 = &l_3261[0].f1;
                uint64_t *l_3313[1];
                int32_t l_3314 = 0xD226A1DDL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_3313[i] = &g_145;
                l_3315 = (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((((**g_1678) , l_3215) , (l_3216 &= ((*l_3304) = l_3303))) || (l_3314 &= ((l_3305[2][4][3] , ((((safe_rshift_func_int8_t_s_u((((***g_1008) , &g_1813) != l_3308[1][2][0]), 5)) , (void*)0) == l_3309) | (-2L))) == l_3311))), 2)) && 1L), 0UL)) <= (***g_2740)) <= l_3305[3][2][3]);
            }
            else
            { 
                int32_t *l_3316 = &g_2680[1][1];
                int32_t *l_3317 = &g_2436;
                int32_t *l_3318 = &g_2436;
                int32_t *l_3319 = (void*)0;
                int32_t *l_3320 = (void*)0;
                int32_t *l_3321 = &g_173.f3;
                int32_t *l_3322 = &g_15;
                int32_t *l_3323 = &g_183[1][1].f3;
                int32_t *l_3324[6];
                uint64_t l_3328[5] = {0UL,0UL,0UL,0UL,0UL};
                uint64_t l_3337[4][4][7] = {{{1UL,5UL,0xDA199669FC4BF297LL,0x41AF4524E4073F82LL,4UL,4UL,0x41AF4524E4073F82LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,5UL,0x41AF4524E4073F82LL,18446744073709551615UL,0x6C6395A1590E759BLL},{0x41AF4524E4073F82LL,18446744073709551615UL,0x2C523DA17A706E8BLL,0x5EDAB7570FC12813LL,18446744073709551615UL,0xCDC72BD87724D1D6LL,18446744073709551615UL},{0x7A6943E40A056C49LL,5UL,5UL,0x7A6943E40A056C49LL,0x6C6395A1590E759BLL,18446744073709551615UL,0x41AF4524E4073F82LL}},{{4UL,1UL,5UL,0xDA199669FC4BF297LL,0x41AF4524E4073F82LL,4UL,4UL},{1UL,0x41AF4524E4073F82LL,0x2C523DA17A706E8BLL,0x41AF4524E4073F82LL,1UL,0UL,0x41AF4524E4073F82LL},{0x7A6943E40A056C49LL,0x6C6395A1590E759BLL,18446744073709551615UL,0x41AF4524E4073F82LL,5UL,18446744073709551615UL,18446744073709551615UL},{5UL,18446744073709551615UL,0xDA199669FC4BF297LL,0xDA199669FC4BF297LL,18446744073709551615UL,5UL,0x6C6395A1590E759BLL}},{{0x7A6943E40A056C49LL,0x41AF4524E4073F82LL,0xCDC72BD87724D1D6LL,0xDA199669FC4BF297LL,4UL,0x5EDAB7570FC12813LL,18446744073709551615UL},{5UL,0xCDC72BD87724D1D6LL,2UL,0x6C6395A1590E759BLL,2UL,0xCDC72BD87724D1D6LL,5UL},{0xCDC72BD87724D1D6LL,18446744073709551615UL,0x368CE0FFBDEAC135LL,2UL,5UL,0xCDC72BD87724D1D6LL,2UL},{0xDA199669FC4BF297LL,4UL,0x5EDAB7570FC12813LL,18446744073709551615UL,18446744073709551615UL,0x5EDAB7570FC12813LL,4UL}},{{18446744073709551615UL,0UL,0x368CE0FFBDEAC135LL,0x6C6395A1590E759BLL,0UL,2UL,4UL},{0x2C523DA17A706E8BLL,18446744073709551615UL,2UL,0x2C523DA17A706E8BLL,4UL,0x2C523DA17A706E8BLL,2UL},{5UL,5UL,0x7A6943E40A056C49LL,0x6C6395A1590E759BLL,18446744073709551615UL,0x41AF4524E4073F82LL,5UL},{5UL,2UL,0x368CE0FFBDEAC135LL,18446744073709551615UL,0xCDC72BD87724D1D6LL,0xCDC72BD87724D1D6LL,18446744073709551615UL}}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_3324[i] = &g_2680[1][1];
                l_3328[3]--;
                l_3331 = &l_11;
                (*l_3317) = ((void*)0 != (***g_877));
                (*g_1678) = (*g_1678);
                if (((void*)0 == l_3202[2]))
                { 
                    return (*g_2788);
                }
                else
                { 
                    int32_t l_3334 = 0x4B1C8515L;
                    int32_t l_3335 = 0x9A78DA0EL;
                    int32_t l_3336 = 0x30811BBCL;
                    int32_t l_3341 = 0L;
                    int32_t l_3342 = 0x9DDFDA17L;
                    int32_t l_3344 = 1L;
                    int32_t l_3345 = 3L;
                    l_3337[2][0][2]++;
                    --l_3346[0][2][2];
                }
            }
            l_3352--;
        }
        (*l_3355) &= ((*l_3331) = l_3154);
    }
    --g_3360;
    for (l_3216 = 0; (l_3216 == 1); l_3216 = safe_add_func_int8_t_s_s(l_3216, 7))
    { 
        uint16_t l_3367 = 0UL;
        int32_t l_3371 = 0x5D39C6F3L;
        (*l_3356) = (safe_sub_func_int8_t_s_s((*l_3356), ((*g_2706) || ((l_3367 &= (***g_803)) > ((safe_mod_func_uint32_t_u_u(((&g_977 != &g_977) > (((*l_3358) , l_3370) == l_3370)), l_3371)) > l_3371)))));
    }
    return (****g_877);
}



static int16_t  func_8(int8_t * p_9, int16_t  p_10)
{ 
    int32_t *l_17 = (void*)0;
    int32_t **l_16 = &l_17;
    union U2 l_30 = {1UL};
    uint8_t *l_838 = &g_144;
    int32_t l_1331 = 0xDEB16EDAL;
    int64_t ** const **l_1332 = (void*)0;
    uint32_t *****l_1338 = &g_977;
    const struct S0 *l_1340 = &g_830;
    union U1 l_1366 = {0};
    const uint8_t l_1406[5] = {0x99L,0x99L,0x99L,0x99L,0x99L};
    struct S0 ***l_1467 = (void*)0;
    int32_t l_1474 = (-1L);
    int32_t l_1478[1];
    int8_t l_1489 = 3L;
    uint32_t l_1512 = 0x25A02512L;
    int8_t ***l_1519 = (void*)0;
    int8_t *** const *l_1518 = &l_1519;
    union U2 ***l_1580 = &g_553;
    union U2 ****l_1579 = &l_1580;
    uint64_t * const *l_1605 = &g_398[2][2][3];
    uint64_t l_1624 = 18446744073709551615UL;
    int8_t l_1636 = 0x5EL;
    int16_t l_1753 = 0x720DL;
    uint64_t l_1754 = 18446744073709551609UL;
    const uint32_t l_1794 = 4294967295UL;
    const uint16_t l_1795 = 1UL;
    int32_t l_1836 = (-3L);
    const uint64_t l_1847 = 0UL;
    uint32_t * const * const **l_1962 = (void*)0;
    uint32_t * const * const ***l_1961 = &l_1962;
    int16_t **l_2020 = (void*)0;
    uint32_t l_2024 = 0x440FD698L;
    uint16_t l_2027 = 0x7E07L;
    uint8_t l_2035 = 0x16L;
    uint16_t *l_2176 = &l_2027;
    uint16_t **l_2175 = &l_2176;
    struct S0 *****l_2180 = (void*)0;
    struct S0 *****l_2181 = &g_1051;
    int32_t l_2247 = 0xAB5B2332L;
    int32_t l_2268[6] = {7L,0x12637514L,0x12637514L,7L,0x12637514L,0x12637514L};
    int32_t *l_2270 = &g_15;
    const uint8_t l_2275 = 255UL;
    struct S0 ****l_2278 = &l_1467;
    int64_t *** const l_2289[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t ***l_2338 = &g_100;
    uint32_t l_2372[6][2] = {{0x809F092FL,0x809F092FL},{8UL,0x809F092FL},{0x809F092FL,8UL},{0x809F092FL,0x809F092FL},{8UL,0x809F092FL},{0x809F092FL,8UL}};
    int64_t l_2416 = (-5L);
    uint16_t l_2516[5];
    uint64_t l_2565 = 18446744073709551615UL;
    int64_t l_2679 = 2L;
    const uint8_t l_2759 = 0x60L;
    uint16_t l_2897 = 0xE01AL;
    int64_t l_2935[2][3][6] = {{{0x4F0C9CC08ED7D15BLL,1L,0xB2BAC5840618C054LL,0xA8B06BC6EFC9C470LL,0xA8B06BC6EFC9C470LL,0xB2BAC5840618C054LL},{0x4F0C9CC08ED7D15BLL,0x4F0C9CC08ED7D15BLL,0xA8B06BC6EFC9C470LL,0x31E74BB45B9907CCLL,4L,0x31E74BB45B9907CCLL},{1L,0x4F0C9CC08ED7D15BLL,1L,0xB2BAC5840618C054LL,0xA8B06BC6EFC9C470LL,0xA8B06BC6EFC9C470LL}},{{0x2FFDAE55E4CE0969LL,1L,1L,0x2FFDAE55E4CE0969LL,0x4F0C9CC08ED7D15BLL,0x31E74BB45B9907CCLL},{0x31E74BB45B9907CCLL,0x2FFDAE55E4CE0969LL,0xA8B06BC6EFC9C470LL,0x2FFDAE55E4CE0969LL,0x31E74BB45B9907CCLL,0xB2BAC5840618C054LL},{0x2FFDAE55E4CE0969LL,0x31E74BB45B9907CCLL,0xB2BAC5840618C054LL,0xB2BAC5840618C054LL,0x31E74BB45B9907CCLL,0x2FFDAE55E4CE0969LL}}};
    uint32_t l_2951 = 1UL;
    int32_t l_2980 = 0x33DF87DBL;
    uint32_t l_2996 = 0xCE212B90L;
    uint32_t l_3010 = 4294967289UL;
    int16_t l_3020 = 0x0B98L;
    int32_t l_3071 = 3L;
    uint8_t ***l_3120[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1478[i] = (-1L);
    for (i = 0; i < 5; i++)
        l_2516[i] = 0x7A22L;
    for (i = 0; i < 1; i++)
        l_3120[i] = &g_3052[5][4][2];
    (*l_16) = func_12(g_7);
    l_1331 ^= (g_18[0] == (((safe_mod_func_int8_t_s_s(func_22((**l_16), func_25(l_30, func_31(g_7), ((*l_838) = ((((*g_333) = (*g_333)) == (void*)0) > 0x166E568BB93D9D5BLL)), p_9)), g_181.f4)) | 247UL) , &l_17));
    if ((g_181.f3 || 0UL))
    { 
        uint32_t *l_1335 = &g_1183[0][2];
        union U1 *l_1364 = &g_183[1][1];
        int32_t l_1365 = 0x2F1EE157L;
        int64_t **l_1374[5];
        int16_t l_1379 = 0x396BL;
        uint8_t l_1405 = 247UL;
        int32_t *l_1408 = &g_183[1][1].f3;
        union U2 l_1443[2] = {{0x79FEB05DL},{0x79FEB05DL}};
        uint32_t l_1456[7][4] = {{1UL,0xCCE67B83L,4294967288UL,0xCCE67B83L},{7UL,4294967295UL,0UL,4294967288UL},{0xCCE67B83L,4294967295UL,4294967295UL,0xCCE67B83L},{4294967295UL,0xCCE67B83L,7UL,1UL},{4294967295UL,7UL,4294967295UL,0UL},{0xCCE67B83L,1UL,0UL,0UL},{7UL,7UL,4294967288UL,1UL}};
        int32_t l_1475 = 0x282B2D4BL;
        int32_t l_1480 = 1L;
        int32_t l_1481 = 0L;
        int32_t l_1482 = (-3L);
        int32_t l_1484 = 0x9CA2CEDCL;
        int32_t l_1485 = 0xB65723B0L;
        int32_t l_1487 = 0xEB827507L;
        int32_t l_1490 = (-2L);
        int32_t l_1491[4] = {(-1L),(-1L),(-1L),(-1L)};
        int32_t l_1620 = 0L;
        uint32_t **l_1692 = &g_101;
        uint16_t *l_1707 = &g_1378;
        int32_t l_1819 = (-3L);
        int16_t *l_1840[7] = {(void*)0,&g_90,&g_90,(void*)0,&g_90,&g_90,(void*)0};
        uint32_t * const * const l_1866 = (void*)0;
        uint32_t * const * const * const l_1865 = &l_1866;
        uint32_t * const * const * const *l_1864[4][5] = {{&l_1865,&l_1865,(void*)0,&l_1865,&l_1865},{&l_1865,&l_1865,&l_1865,(void*)0,&l_1865},{(void*)0,&l_1865,&l_1865,&l_1865,(void*)0},{&l_1865,&l_1865,&l_1865,(void*)0,&l_1865}};
        int16_t l_1884[2];
        struct S0 * const ** const l_1948 = &g_1056;
        union U2 **l_1954 = (void*)0;
        struct S0 l_2011[3] = {{158,6,-84,0,42,51,353},{158,6,-84,0,42,51,353},{158,6,-84,0,42,51,353}};
        int i, j;
        for (i = 0; i < 5; i++)
            l_1374[i] = &g_141;
        for (i = 0; i < 2; i++)
            l_1884[i] = 0L;
lbl_1993:
        if ((l_1332 == (((safe_div_func_uint8_t_u_u(p_10, (((((***g_878) = ((*l_17) , (***g_878))) , l_1335) != ((*g_589) = l_17)) ^ ((&g_145 != (void*)0) || p_10)))) | 0x21L) , &g_803)))
        { 
            int64_t l_1339 = 0x5F66785ABCBB7B6ELL;
            int32_t *l_1343[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1343[i] = &g_15;
            if ((((void*)0 != (*g_1008)) > (safe_add_func_int64_t_s_s(((void*)0 == l_1338), ((**g_804) ^= l_1339)))))
            { 
                uint16_t l_1345 = 0x49B8L;
                g_1341 = l_1340;
                (***g_333) = l_1343[0];
                for (g_157.f1 = 0; (g_157.f1 <= 0); g_157.f1 += 1)
                { 
                    int64_t l_1344 = 0xE65E6EC9974CD9F9LL;
                    l_1345++;
                    if (p_10)
                        continue;
                    if ((**g_827))
                        continue;
                }
                (***g_333) = (((!(((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(g_997, (safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_145, (+(safe_rshift_func_uint8_t_u_u(((g_1342.f3 , l_1364) == (void*)0), 5))))), 6)), l_1365)))) , (&g_553 == (void*)0)), p_10)), p_10)) , l_1366) , 1UL)) != 2UL) , (void*)0);
            }
            else
            { 
                uint16_t *l_1377 = &g_1378;
                int16_t *l_1398[7] = {&l_1379,&l_1379,&l_1379,&l_1379,&l_1379,&l_1379,&l_1379};
                int i;
                g_1367 = (void*)0;
                (**l_16) |= ((safe_div_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((*l_1377) = (((void*)0 == &l_1365) >= ((safe_lshift_func_uint16_t_u_s((l_1374[3] != ((g_544 = (safe_mul_func_uint8_t_u_u(g_179.f5, ((5UL ^ (((void*)0 != &g_977) >= g_830.f0)) > p_10)))) , (void*)0)), 5)) & p_10))), 1)) < l_1379), 248UL)) > (*g_141));
                for (l_1331 = 0; (l_1331 <= 0); l_1331 += 1)
                { 
                    int16_t **l_1384 = (void*)0;
                    int16_t *l_1386[2];
                    int16_t **l_1385 = &l_1386[0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1386[i] = (void*)0;
                    l_1366.f3 = (((!(safe_mul_func_int8_t_s_s(((*l_17) = (((safe_unary_minus_func_int32_t_s(((**g_100) > 0xDAF62A47L))) < ((&p_10 != ((*l_1385) = &p_10)) , l_1379)) != (safe_sub_func_uint16_t_u_u(((((+0L) < 0xE3FFL) || 0x2562L) , 7UL), g_1342.f0)))), (***g_878)))) == (*p_9)) <= 0x280BE665CA2D97F5LL);
                    l_1343[l_1331] = ((g_1378 != (safe_add_func_uint16_t_u_u(p_10, 0xBD28L))) , func_12(p_10));
                }
                (**l_16) = ((0x65EB496EL || ((((safe_mul_func_uint8_t_u_u((((*g_101)--) && (8L & (safe_rshift_func_int16_t_s_u((((l_1365 = 0xF961L) || (safe_mul_func_int16_t_s_s(l_1365, ((((safe_sub_func_int16_t_s_s((p_10 || ((**g_100) = p_10)), (safe_sub_func_uint16_t_u_u(((p_10 , p_10) >= (*l_17)), p_10)))) , &g_398[0][2][4]) == &g_398[1][4][1]) >= l_1405)))) | p_10), p_10)))), l_1406[0])) | (**g_804)) >= p_10) > 8L)) < 0x3EBDL);
            }
        }
        else
        { 
            int32_t l_1407[2];
            int8_t **l_1442 = (void*)0;
            int32_t l_1488 = 0x18E7653EL;
            const uint32_t *l_1523 = &g_84;
            const uint32_t **l_1522 = &l_1523;
            const uint32_t ***l_1521 = &l_1522;
            const uint32_t ****l_1520 = &l_1521;
            union U1 l_1541 = {0};
            int64_t *l_1571 = &g_142;
            uint16_t l_1599 = 0xFF9AL;
            int32_t l_1611 = 0x0FC4703AL;
            uint8_t l_1621 = 0x05L;
            union U1 **l_1677[6];
            struct S0 l_1697 = {-201,5,-19,0,-95,81,329};
            int16_t *l_1706 = &l_1379;
            uint32_t l_1768[6][5][3] = {{{4294967295UL,0x03613230L,8UL},{0x2B226347L,0x4CF10262L,0x4CF10262L},{0UL,0x388A84D4L,8UL},{0x02F67110L,1UL,4294967293UL},{0xC007140DL,0x03613230L,0xB9F26FD7L}},{{0x180B5BAAL,0xEBC72DB8L,0x180B5BAAL},{0xB9F26FD7L,0x03613230L,0xC007140DL},{4294967293UL,1UL,0x02F67110L},{8UL,0x388A84D4L,0UL},{0x4CF10262L,0x4CF10262L,0x2B226347L}},{{8UL,0xB9F26FD7L,0x388A84D4L},{4294967293UL,0x2B226347L,0xE41AD1D9L},{0xB9F26FD7L,0xF0929843L,0xF0929843L},{0x180B5BAAL,4294967293UL,0xE41AD1D9L},{0xC007140DL,1UL,0x388A84D4L}},{{0x02F67110L,4294967291UL,0x2B226347L},{0UL,0x0CBF6736L,0UL},{0x2B226347L,4294967291UL,0x02F67110L},{0x388A84D4L,1UL,0xC007140DL},{0xE41AD1D9L,4294967293UL,0x180B5BAAL}},{{0xF0929843L,0xF0929843L,0xB9F26FD7L},{0xE41AD1D9L,0x2B226347L,4294967293UL},{0x388A84D4L,0xB9F26FD7L,8UL},{0x2B226347L,0x4CF10262L,0x4CF10262L},{0UL,0x388A84D4L,8UL}},{{0x02F67110L,1UL,4294967293UL},{0xC007140DL,0x03613230L,0xB9F26FD7L},{0x180B5BAAL,0xEBC72DB8L,0x180B5BAAL},{0xB9F26FD7L,0x03613230L,0xC007140DL},{4294967293UL,1UL,0x02F67110L}}};
            int8_t l_1796 = (-10L);
            uint8_t l_1825 = 0x06L;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1407[i] = 0x955367A8L;
            for (i = 0; i < 6; i++)
                l_1677[i] = (void*)0;
            l_1408 = func_12((l_1407[1] , l_1407[0]));
            for (l_30.f0 = 0; (l_30.f0 != 56); l_30.f0 = safe_add_func_uint64_t_u_u(l_30.f0, 4))
            { 
                int16_t l_1434 = 1L;
                uint16_t *l_1435 = &g_1378;
                uint32_t *l_1436 = &g_157.f0;
                int32_t *l_1437 = &g_109[1];
                union U1 l_1445[5][6] = {{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}};
                int i, j;
            }
        }
        if ((((0x01L || (((safe_add_func_uint8_t_u_u(((p_10 = (-6L)) == (-1L)), ((((*p_9) &= ((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0xCF1DL, (((((*l_1707) = ((**g_100) <= (safe_sub_func_uint32_t_u_u((0x3699863CL <= ((((((((((***g_803) != l_1484) < 0x18ACD0E6048B2F95LL) , (*l_17)) && (*l_17)) && (*l_17)) == (*l_17)) && l_1456[6][2]) || 0xB8F1L) != (*l_17))), l_1847)))) , (**l_16)) == g_144) <= 0x4F15D8F9195B95F1LL))), 7)) == (**l_16))) == g_84) > 0xCC699283CB01A71CLL))) | (*l_17)) , g_181.f2)) || 0x751FL) && (**l_16)))
        { 
            int32_t *l_1850 = &l_1484;
            union U1 l_1851 = {0};
            uint32_t * const *l_1860 = &g_101;
            uint32_t * const **l_1859 = &l_1860;
            uint32_t * const ***l_1858 = &l_1859;
            uint32_t * const * const *l_1862 = &l_1860;
            uint32_t * const * const * const *l_1861 = &l_1862;
            int32_t l_1899 = 0L;
            int32_t l_1900 = 0x23C0B53EL;
            int32_t l_1901 = 0xBCE4B3DCL;
            int32_t l_1902 = 0xAFBE3CC9L;
            int32_t l_1904 = 0L;
            int32_t l_1905 = 0xD18F3316L;
            int32_t l_1906 = 0xC1CB3B4EL;
            int32_t l_1907 = 0x8C536D79L;
            uint64_t **l_1932 = &g_398[0][1][6];
            for (g_47 = (-10); (g_47 < (-20)); g_47 = safe_sub_func_int32_t_s_s(g_47, 1))
            { 
                return p_10;
            }
            (*l_16) = ((****g_1641) = l_1850);
        }
        else
        { 
            int8_t l_1937[1][2][4];
            union U1 l_1938[3][3] = {{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}};
            const int32_t *l_1972 = &l_1484;
            struct S0 l_1977 = {-231,4,34,0,-27,54,486};
            int32_t l_1998 = 0x7D4D807BL;
            int32_t l_1999 = 0x6227B1F2L;
            int32_t l_2000 = 0x47C5EFDAL;
            uint32_t l_2001 = 0x70EF816AL;
            int16_t * const *l_2004 = &l_1840[2];
            int16_t * const **l_2005 = &l_2004;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_1937[i][j][k] = 1L;
                }
            }
            (*l_17) ^= ((((safe_mod_func_int32_t_s_s(0x61C105CDL, (0xBAL || 1UL))) | l_1937[0][0][2]) == (l_1938[2][0] , 0xFCL)) ^ (p_10 <= p_10));
            for (l_1405 = 0; (l_1405 < 26); ++l_1405)
            { 
                int32_t l_1949[4][6][4] = {{{0xE5C3EBCBL,(-6L),0xE5C3EBCBL,0x68FEF0CEL},{(-6L),0xB6032120L,9L,0x8CCBACC3L},{0x8CCBACC3L,0x834C529DL,3L,0xB6032120L},{0x75650400L,3L,3L,0x75650400L},{0x8CCBACC3L,0x68FEF0CEL,9L,0xE5C3EBCBL},{(-6L),0x94FAF9FCL,0xE5C3EBCBL,5L}},{{0xE5C3EBCBL,5L,(-1L),5L},{3L,0x94FAF9FCL,0x834C529DL,0xE5C3EBCBL},{0L,0x68FEF0CEL,5L,0x75650400L},{0x834C529DL,3L,0xB6032120L,0xB6032120L},{0x834C529DL,0x834C529DL,5L,0x8CCBACC3L},{0L,0xB6032120L,0x834C529DL,0x68FEF0CEL}},{{3L,(-6L),(-1L),0x834C529DL},{0xE5C3EBCBL,(-6L),0xE5C3EBCBL,0x68FEF0CEL},{(-6L),0xB6032120L,9L,0x8CCBACC3L},{0x8CCBACC3L,0x834C529DL,3L,0xB6032120L},{0x834C529DL,0x75650400L,0x75650400L,0x834C529DL},{0x68FEF0CEL,0x94FAF9FCL,(-1L),0xB6032120L}},{{0x8CCBACC3L,9L,0xB6032120L,(-6L)},{0xB6032120L,(-6L),0L,(-6L)},{0x75650400L,9L,5L,0xB6032120L},{0xE5C3EBCBL,0x94FAF9FCL,(-6L),0x834C529DL},{5L,0x75650400L,3L,3L},{5L,5L,(-6L),0x68FEF0CEL}}};
                int i, j, k;
                (**l_16) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((!(safe_lshift_func_int16_t_s_s(p_10, 9))) || (l_1948 != ((*g_1679) , ((*g_1051) = l_1467)))) == l_1949[3][5][2]), (g_1183[0][2] , (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((**g_1812) = (*g_1813)) == l_1954), (**g_100))), 0x0CC10228L))))), g_181.f2));
                if ((safe_mod_func_uint32_t_u_u((**g_100), (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u((((**l_16) <= (((l_1961 == g_1963) , 4294967287UL) ^ (0x5067L || (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((***g_803), (**l_16))), 0x3FE9L)) != (*l_17)) <= (**l_16)) <= (*p_9)) || 0L), p_10)), p_10))))) >= l_1949[3][5][2]), l_1949[2][3][1])) || l_1949[3][5][2]), l_1949[1][5][0])))))
                { 
                    const int32_t **l_1973 = &g_437[0];
                    (*l_1973) = l_1972;
                    (*l_1408) = 0L;
                }
                else
                { 
                    int32_t l_1976 = 0x1BBD79B6L;
                    int32_t l_1986 = 0L;
                    l_1331 &= (safe_sub_func_int8_t_s_s(l_1976, (((***g_803) = (**l_16)) ^ ((l_1977 , ((safe_sub_func_int32_t_s_s((l_1977.f0 = p_10), (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_1986, ((safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint8_t_u_u((((((*p_9) & ((*l_838) ^= ((g_179.f3 = ((**l_1692) = (*g_101))) , 0x29L))) != 0xECL) <= (*l_1972)) , 255UL), 1UL)) ^ p_10) <= 1UL), g_179.f6)) == l_1949[1][3][1]) || l_1949[3][5][2]), (**l_16))) > (*l_1972)))), l_1949[3][5][2])), p_10)))) == l_1976)) >= l_1949[3][5][2]))));
                    (*g_1678) = (*g_1678);
                    if (p_10)
                        goto lbl_1993;
                }
                for (l_1620 = 17; (l_1620 != 11); --l_1620)
                { 
                    int32_t l_1996[6] = {0L,(-1L),0L,0L,(-1L),0L};
                    int32_t *l_1997[7] = {&l_1478[0],(void*)0,&l_1478[0],&l_1478[0],(void*)0,&l_1478[0],&l_1478[0]};
                    int i;
                    l_2001++;
                    return p_10;
                }
            }
            if (((**l_16) &= (&l_1840[6] == ((*l_2005) = l_2004))))
            { 
                struct S0 **l_2006 = &g_829;
                int32_t l_2023 = 1L;
                int32_t l_2033[6][4][1] = {{{6L},{0L},{0x69A0FD97L},{0xDE23A5BFL}},{{0xDE23A5BFL},{0x69A0FD97L},{0L},{6L}},{{0x69A0FD97L},{6L},{0L},{0x69A0FD97L}},{{0xDE23A5BFL},{0xDE23A5BFL},{0x69A0FD97L},{0L}},{{6L},{0x69A0FD97L},{6L},{0L}},{{0x69A0FD97L},{0xDE23A5BFL},{0xDE23A5BFL},{0x69A0FD97L}}};
                int i, j, k;
                (*l_2006) = (**l_1948);
                if (((*l_17) = 0L))
                { 
                    union U1 *l_2012 = &g_173;
                    int16_t l_2019 = 1L;
                    l_2024 ^= ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((l_2011[1] , (void*)0) == ((*g_1678) = l_2012)) < (safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((p_10 > (((safe_sub_func_uint64_t_u_u((l_2019 , ((((l_2020 != g_2021) > (*l_17)) != p_10) , l_2019)), l_2023)) == 2L) | (**g_804))) && (*l_1972)) & 0x3BCBL), 8UL)), 8))), 0xAFL)), (*l_1972))) | 0x001DL);
                    return (*l_17);
                }
                else
                { 
                    uint64_t **l_2025 = (void*)0;
                    int32_t *l_2026 = (void*)0;
                    int32_t *l_2030 = &l_1490;
                    int32_t *l_2031 = &l_1998;
                    int32_t *l_2032[1];
                    int8_t l_2034 = 0L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2032[i] = &g_109[1];
                    (*l_17) ^= (((((((*l_1972) < l_2023) , l_2025) != (void*)0) && (((p_9 == ((**g_1056) , &l_1406[0])) | 0xB803E4B91D4A9780LL) > 18446744073709551615UL)) , (**g_804)) , p_10);
                    (**g_334) = l_2026;
                    l_2027++;
                    l_2035++;
                    (*l_17) |= (l_1998 ^= (*l_1972));
                }
                for (p_10 = 0; p_10 < 2; p_10 += 1)
                {
                    union U2 tmp = {0x7002C88DL};
                    l_1443[p_10] = tmp;
                }
            }
            else
            { 
                int32_t *l_2038 = &l_1938[2][0].f3;
                int32_t *l_2039 = &l_1482;
                (*l_2039) &= ((*l_1408) = p_10);
            }
            if (g_830.f0)
                goto lbl_1993;
        }
    }
    else
    { 
        uint8_t l_2040 = 0x04L;
        uint32_t l_2047 = 0x4E34E150L;
        union U2 *l_2053 = &l_30;
        int32_t l_2079 = (-1L);
        int64_t **l_2109 = &g_141;
        const struct S0 l_2121[2] = {{-216,4,21,0,65,119,365},{-216,4,21,0,65,119,365}};
        int32_t l_2132 = (-5L);
        int32_t l_2136 = 1L;
        int32_t l_2137[4][2] = {{5L,5L},{5L,5L},{5L,5L},{5L,5L}};
        struct S0 *l_2148 = &g_179;
        struct S0 *l_2150 = &g_2151[0][1];
        uint16_t * const *l_2177 = &l_2176;
        int8_t l_2178 = 0xC1L;
        struct S0 *****l_2179[4][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        uint32_t l_2219[6] = {0x2DC6606AL,0x8F0E43DAL,0x8F0E43DAL,0x2DC6606AL,0x8F0E43DAL,0x8F0E43DAL};
        uint16_t l_2249 = 0x5F77L;
        int i, j, k;
        (**g_334) = (*l_16);
        --l_2040;
        (*l_17) &= (0xEDL | (safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((p_10 | (p_10 < (p_10 == ((**g_804) = 0xE89B7F6C52B28D6CLL)))), ((l_2040 ^ (((**g_559) , (*p_9)) || 0x1BL)) || (*p_9)))), l_2047)));
        for (g_47 = 8; (g_47 == (-26)); g_47 = safe_sub_func_uint8_t_u_u(g_47, 3))
        { 
            union U2 l_2059 = {4294967292UL};
            int64_t *l_2098 = &g_142;
            int32_t l_2099 = 7L;
            int32_t l_2119 = 0xEE5DB77AL;
            int32_t l_2134[6][4] = {{1L,0xC8FEE901L,0xC8FEE901L,1L},{0xC8FEE901L,1L,0xC8FEE901L,0xC8FEE901L},{1L,1L,0x35A32679L,1L},{1L,0xC8FEE901L,0xC8FEE901L,1L},{0xC8FEE901L,1L,0xC8FEE901L,0xC8FEE901L},{1L,1L,0x35A32679L,1L}};
            int8_t l_2138 = 0x24L;
            int i, j;
        }
        if ((0x53D8DA8E97EEDE0BLL ^ ((((safe_add_func_int16_t_s_s(0L, (-1L))) , (((l_2181 = (l_2180 = ((safe_mod_func_int64_t_s_s(((***g_803) |= (((safe_div_func_uint16_t_u_u((((*l_2053) , (safe_lshift_func_uint16_t_u_s(2UL, (p_10 <= (((((*l_2150) , 7UL) , l_2175) == l_2177) <= 0xA9BCA7B5L))))) || (*l_17)), 65535UL)) , l_2121[1].f2) >= p_10)), l_2178)) , l_2179[3][4][0]))) == l_2179[2][0][0]) > 3UL)) <= p_10) <= (*p_9))))
        { 
            union U2 *l_2182 = &l_30;
            union U2 **l_2183 = &l_2053;
            int32_t l_2204 = 0xBF3F0790L;
            int32_t l_2239 = 0xD4A066EEL;
            int32_t l_2241 = 0xD7EEACC2L;
            int32_t l_2242 = 0x19EC1828L;
            int32_t l_2244 = 0xC9AF00AFL;
            int32_t l_2245 = (-2L);
            int32_t l_2246[3][7] = {{8L,8L,8L,8L,8L,8L,8L},{1L,0xF5970FBDL,1L,0xF5970FBDL,1L,0xF5970FBDL,1L},{8L,8L,8L,8L,8L,8L,8L}};
            int i, j;
            (*l_2183) = ((**l_1580) = l_2182);
            l_2204 = (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_mul_func_uint64_t_u_u((safe_add_func_int64_t_s_s((**g_804), ((((-1L) | ((safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(p_10, p_10)), (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((((p_10 , (safe_lshift_func_int8_t_s_s(((*p_9) = (safe_add_func_int8_t_s_s((*p_9), (l_2204 || p_10)))), p_10))) && 0UL) || p_10), 12)) && (**l_16)), l_2204)))) > 6UL)) != 0x66L) <= l_2204))), 0L)), (*****g_1641))), 12));
            if (((**l_16) = l_2047))
            { 
                const uint8_t l_2207 = 5UL;
                int32_t l_2228 = 0xB821BFDBL;
                int32_t l_2229 = (-4L);
                int32_t l_2232 = (-8L);
                int32_t l_2243[7][2];
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_2243[i][j] = 7L;
                }
                for (l_2178 = 0; (l_2178 >= 8); l_2178 = safe_add_func_int16_t_s_s(l_2178, 1))
                { 
                    int8_t l_2218 = (-5L);
                    int32_t *l_2220 = &l_1331;
                    int32_t *l_2221 = &l_2204;
                    int32_t *l_2222 = &l_1478[0];
                    int32_t *l_2223 = &l_2137[1][0];
                    int32_t *l_2224 = &l_1366.f3;
                    int32_t *l_2225 = &g_109[2];
                    int32_t *l_2226 = &l_1478[0];
                    int32_t *l_2227 = &l_1366.f3;
                    int32_t *l_2230 = &l_2228;
                    int32_t *l_2231 = &l_1366.f3;
                    int32_t *l_2233 = &g_183[1][1].f3;
                    int32_t *l_2234 = &l_1366.f3;
                    int32_t *l_2235 = &l_2137[3][0];
                    int32_t *l_2236 = &g_109[3];
                    int32_t *l_2237 = (void*)0;
                    int32_t *l_2238[2][4];
                    int32_t l_2240 = 1L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_2238[i][j] = &l_2079;
                    }
                    (*l_16) = func_64(l_1366, (*g_1679), &g_2118, l_2207, ((((safe_mod_func_int32_t_s_s(((*g_19) &= l_2204), (safe_div_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((*l_838) = ((safe_mod_func_uint8_t_u_u(0x98L, (safe_sub_func_uint64_t_u_u((((g_2151[0][1].f3 ^ p_10) & l_2204) & l_2218), p_10)))) && l_2218)), l_2121[1].f4)) && 0x19B5F814L), l_2219[0])))) > (***g_878)) > 18446744073709551615UL) & p_10));
                    l_2249--;
                    if ((***g_334))
                        continue;
                }
            }
            else
            { 
                (*****g_1641) = p_10;
            }
        }
        else
        { 
            int32_t l_2252 = (-1L);
            int64_t ***l_2261 = &l_2109;
            int64_t ****l_2262[1][2];
            int64_t ***l_2263 = &l_2109;
            int32_t l_2269 = 0x889812E2L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_2262[i][j] = &g_803;
            }
            l_2252 &= (**l_16);
            l_2269 = (!((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_2268[4] ^= ((((*l_17) = ((l_2252 <= ((((*l_838) = (((*g_1367) , ((safe_add_func_int64_t_s_s(((!0x4D48L) != ((l_2263 = l_2261) != (void*)0)), ((((safe_lshift_func_int16_t_s_s(((((((void*)0 != p_9) && 0L) || p_10) < p_10) | 0x70L), p_10)) , l_2252) | (**l_16)) ^ (*p_9)))) , g_1963)) == g_1963)) ^ p_10) && (*g_141))) <= p_10)) , (*p_9)) , 0xABL)), 0xB7L)), l_2252)) >= 0L) , 0x4782L) ^ 7UL));
            return (*l_17);
        }
    }
    (*l_2270) |= p_10;
    if (((((*g_141) = (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_2275, (0x98L > ((safe_mod_func_int64_t_s_s(((((void*)0 == l_2278) , (safe_add_func_uint8_t_u_u(((*l_838) = (!(!((safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(((void*)0 == l_2289[1]), ((0x9EL | (*l_2270)) ^ (*g_94)))) , p_10), (***g_803))), 8UL)) == p_10)))), (-1L)))) || p_10), 18446744073709551614UL)) == g_179.f3)))), g_256[1][5]))) <= (*l_2270)) && p_10))
    { 
        (*l_16) = (void*)0;
    }
    else
    { 
        uint64_t l_2290 = 0x891831124197F755LL;
        union U2 *l_2322 = &l_30;
        int32_t l_2333[1][5] = {{0L,0L,0L,0L,0L}};
        union U1 **l_2378 = (void*)0;
        uint32_t ** const *l_2410 = &g_589;
        uint32_t ***l_2465 = &g_100;
        struct S0 **** const l_2519 = &g_1052;
        int32_t l_2561 = 0x7C08E446L;
        int64_t l_2563 = (-1L);
        union U1 l_2709 = {0};
        uint16_t ***l_2737 = &l_2175;
        int32_t *l_2745 = (void*)0;
        uint64_t l_2748 = 3UL;
        int32_t l_2771 = (-1L);
        uint32_t l_2790 = 0UL;
        int64_t l_2896[7][6][1] = {{{(-5L)},{(-3L)},{0x975504C684CE8A35LL},{(-3L)},{(-5L)},{4L}},{{(-8L)},{0x0720D272CCA4A6A3LL},{0x975504C684CE8A35LL},{0x01B47ED29560AC25LL},{0x32FF305981EB3E76LL},{4L}},{{0x32FF305981EB3E76LL},{0x01B47ED29560AC25LL},{0x975504C684CE8A35LL},{0x0720D272CCA4A6A3LL},{(-8L)},{4L}},{{(-5L)},{(-3L)},{0x975504C684CE8A35LL},{(-3L)},{(-5L)},{4L}},{{(-8L)},{0x0720D272CCA4A6A3LL},{0x975504C684CE8A35LL},{0x01B47ED29560AC25LL},{0x32FF305981EB3E76LL},{4L}},{{0x32FF305981EB3E76LL},{0x01B47ED29560AC25LL},{0xC58B7A997A3783A8LL},{0x32B3E9283211EB3FLL},{(-6L)},{0L}},{{0x975504C684CE8A35LL},{0x2F97DACD2365E07FLL},{0xC58B7A997A3783A8LL},{0x2F97DACD2365E07FLL},{0x975504C684CE8A35LL},{0L}}};
        uint16_t l_2972 = 1UL;
        uint64_t l_2997[1][2];
        int64_t **l_3045 = &g_141;
        uint8_t **l_3051 = &g_2706;
        uint8_t l_3096[1][2];
        uint8_t l_3101 = 0xAEL;
        uint32_t l_3136 = 0x94142566L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_2997[i][j] = 0UL;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_3096[i][j] = 1UL;
        }
        if ((l_2290 < p_10))
        { 
            int8_t **l_2306 = &g_94;
            int8_t ***l_2305[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int8_t ****l_2307 = &l_1519;
            int32_t l_2320 = 0x98699A9DL;
            struct S0 *****l_2321 = (void*)0;
            int i;
            (*l_2270) = (((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((p_10 <= (safe_sub_func_uint32_t_u_u(((safe_add_func_int64_t_s_s(0x03F5253A83723A68LL, (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((((p_10 , (((((****g_877) &= ((l_2305[3] == ((*l_2307) = l_1519)) && ((*g_101)++))) == ((safe_lshift_func_uint16_t_u_u(g_1667, 3)) & ((((((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s((((safe_div_func_int8_t_s_s((l_2320 > (*l_2270)), l_2290)) , &l_2278) == l_2321), 65535UL)) , 255UL) || (*l_2270)), p_10)), 0xA8L)) | 0xFEA0L) , l_2320) ^ g_144) == 0L) || p_10))) == 0L) , 0L)) , (*g_1679)) , (*g_829)) , p_10), p_10)), l_2290)) , 0xBF7BL), 14)))) | l_2290), l_2320))), 0x1792AF5FF9935640LL)), p_10)) < p_10) & 8UL);
        }
        else
        { 
            (***l_1579) = l_2322;
        }
    }
    return p_10;
}



static int32_t * func_12(uint64_t  p_13)
{ 
    int32_t *l_14 = &g_15;
    return l_14;
}



static int8_t  func_22(uint64_t  p_23, int8_t * p_24)
{ 
    union U1 l_874 = {0};
    int32_t l_876 = 0x1BB8A995L;
    uint8_t *l_897[6];
    int32_t l_898 = 0xA336CEB0L;
    uint64_t *l_925 = (void*)0;
    uint8_t l_939 = 0xA8L;
    uint16_t l_945[2][3][1] = {{{65531UL},{0x3152L},{65531UL}},{{0x3152L},{65531UL},{0x3152L}}};
    union U2 ** const *l_962 = &g_553;
    union U2 ** const **l_961 = &l_962;
    const int8_t *l_970[2];
    const int8_t **l_969 = &l_970[0];
    const int8_t ***l_968 = &l_969;
    const int8_t ****l_967[2];
    uint32_t ****l_980 = (void*)0;
    int64_t ***l_1094[1][7] = {{&g_804,&g_804,&g_804,&g_804,&g_804,&g_804,&g_804}};
    uint16_t l_1095 = 1UL;
    uint32_t **l_1111 = &g_590;
    uint16_t l_1132 = 65535UL;
    int32_t l_1267[2];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_897[i] = &g_144;
    for (i = 0; i < 2; i++)
        l_970[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_967[i] = &l_968;
    for (i = 0; i < 2; i++)
        l_1267[i] = 3L;
    for (g_145 = 1; (g_145 <= 4); g_145 += 1)
    { 
        union U1 l_873[6] = {{0},{0},{0},{0},{0},{0}};
        const int32_t l_875[4][6][3] = {{{5L,0xBB1F73DAL,0x0B65D353L},{0x4AA7FD51L,2L,0x4AA7FD51L},{0x67A3EB30L,5L,4L},{0x4AE52B77L,(-1L),0x4AA7FD51L},{4L,0x67A3EB30L,0x0B65D353L},{(-10L),0x7B3DA26DL,0xBB9EA3A0L}},{{4L,4L,6L},{0x4AE52B77L,(-5L),0xD18F1CBCL},{0x67A3EB30L,4L,0x67A3EB30L},{0x4AA7FD51L,0x7B3DA26DL,0xEEE96D57L},{5L,0x67A3EB30L,0x67A3EB30L},{0xEEE96D57L,(-1L),0xD18F1CBCL}},{{0xBB1F73DAL,5L,6L},{0xEEE96D57L,2L,0xBB9EA3A0L},{5L,0xBB1F73DAL,0x0B65D353L},{0x4AA7FD51L,2L,0x4AA7FD51L},{0x67A3EB30L,5L,4L},{0x4AE52B77L,(-1L),0x4AA7FD51L}},{{4L,0x67A3EB30L,0x0B65D353L},{(-10L),0x7B3DA26DL,0xBB9EA3A0L},{4L,4L,6L},{0x4AE52B77L,(-5L),0xD18F1CBCL},{0x67A3EB30L,4L,0x67A3EB30L},{0x4AA7FD51L,0x7B3DA26DL,0xEEE96D57L}}};
        int i, j, k;
        (**g_334) = func_64(l_873[5], l_874, p_24, l_875[0][5][1], l_876);
        (**g_334) = &l_876;
    }
    l_898 ^= (((((void*)0 == g_877) && (safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(l_876, (l_876 & (safe_div_func_int64_t_s_s((**g_804), (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((l_874 , (safe_lshift_func_uint8_t_u_s((g_144 = (+((safe_lshift_func_int16_t_s_s(g_179.f6, g_544)) , l_876))), 4))), 1)), l_876)) & (**g_804)), g_179.f2))))))), 4))) | l_876) > 1L);
    for (g_144 = 0; (g_144 > 5); ++g_144)
    { 
        uint8_t l_911 = 0xA5L;
        int16_t *l_916 = &g_90;
        uint64_t *l_930 = &l_874.f1;
        uint16_t *l_931 = &g_544;
        union U1 l_936 = {0};
        int8_t **l_975 = &g_94;
        int8_t ***l_974 = &l_975;
        int8_t ****l_973[2];
        int32_t *l_981 = (void*)0;
        int32_t l_1023 = 0L;
        int32_t l_1024[4][6] = {{0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL},{0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL},{0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL},{0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL,0x4FEED1AEL}};
        union U2 l_1064 = {0xDF9806D6L};
        union U2 ***l_1145[2][5] = {{&g_553,&g_559,&g_553,&g_553,&g_559},{&g_559,&g_553,&g_553,&g_559,&g_553}};
        union U2 ****l_1144 = &l_1145[0][0];
        int16_t l_1203 = 0x9472L;
        uint32_t **l_1204 = (void*)0;
        int i, j;
        for (i = 0; i < 2; i++)
            l_973[i] = &l_974;
        for (g_544 = 0; (g_544 <= 40); g_544++)
        { 
            for (g_377 = 0; (g_377 >= 0); g_377 -= 1)
            { 
                int32_t **l_903 = &g_19;
                (*l_903) = (**g_826);
            }
            for (g_15 = 0; (g_15 != 0); g_15 = safe_add_func_uint8_t_u_u(g_15, 6))
            { 
                int32_t *l_906 = &l_876;
                int32_t *l_907 = &l_898;
                int32_t *l_908 = &g_173.f3;
                int32_t *l_909 = &g_109[1];
                int32_t *l_910[4] = {&g_109[1],&g_109[1],&g_109[1],&g_109[1]};
                int i;
                --l_911;
            }
        }
        (***g_334) = (safe_add_func_int16_t_s_s(((*l_916) &= ((**g_100) || p_23)), (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(((void*)0 != l_925), (8L == 7L))), ((*l_930) = (safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((((*g_94) || g_179.f1) | l_911) >= l_898), 0x6837L)) | p_23), g_544))))), 1)), 0x70L))));
    }
    return (****g_877);
}



static int8_t * func_25(union U2  p_26, int8_t * p_27, uint8_t  p_28, int8_t * p_29)
{ 
    uint32_t l_843[4];
    int32_t l_857[5][4][6] = {{{(-3L),0x32E9EED4L,0xA6D8CD43L,(-1L),0x63852396L,0xA6D8CD43L},{0x0DBEC480L,0x83B400B4L,0x63852396L,(-1L),0x63852396L,0x83B400B4L},{(-1L),0x32E9EED4L,0xDC6DA277L,(-1L),0x32E9EED4L,0x63852396L},{0x0DBEC480L,0x63852396L,0xDC6DA277L,(-1L),0x83B400B4L,0x83B400B4L}},{{(-3L),0x63852396L,0x63852396L,(-3L),0x32E9EED4L,0xA6D8CD43L},{(-3L),0x32E9EED4L,0xA6D8CD43L,(-1L),0x63852396L,0xA6D8CD43L},{0x0DBEC480L,0x83B400B4L,0x63852396L,(-1L),0x63852396L,0x83B400B4L},{(-1L),0x32E9EED4L,0x7A1B1BEAL,0x32E9EED4L,0x23D3DE34L,0x7C1025EBL}},{{0x63852396L,0x7C1025EBL,0x7A1B1BEAL,0xA6D8CD43L,0L,0L},{0xDC6DA277L,0x7C1025EBL,0x7C1025EBL,0xDC6DA277L,0x23D3DE34L,0x3354F1E5L},{0xDC6DA277L,0x23D3DE34L,0x3354F1E5L,0xA6D8CD43L,0x7C1025EBL,0x3354F1E5L},{0x63852396L,0L,0x7C1025EBL,0x32E9EED4L,0x7C1025EBL,0L}},{{0xA6D8CD43L,0x23D3DE34L,0x7A1B1BEAL,0x32E9EED4L,0x23D3DE34L,0x7C1025EBL},{0x63852396L,0x7C1025EBL,0x7A1B1BEAL,0xA6D8CD43L,0L,0L},{0xDC6DA277L,0x7C1025EBL,0x7C1025EBL,0xDC6DA277L,0x23D3DE34L,0x3354F1E5L},{0xDC6DA277L,0x23D3DE34L,0x3354F1E5L,0xA6D8CD43L,0x7C1025EBL,0x3354F1E5L}},{{0x63852396L,0L,0x7C1025EBL,0x32E9EED4L,0x7C1025EBL,0L},{0xA6D8CD43L,0x23D3DE34L,0x7A1B1BEAL,0x32E9EED4L,0x23D3DE34L,0x7C1025EBL},{0x63852396L,0x7C1025EBL,0x7A1B1BEAL,0xA6D8CD43L,0L,0L},{0xDC6DA277L,0x7C1025EBL,0x7C1025EBL,0xDC6DA277L,0x23D3DE34L,0x3354F1E5L}}};
    int32_t l_866[2][4][1] = {{{0L},{0x159930A0L},{0L},{0x159930A0L}},{{0L},{0x159930A0L},{0L},{0x159930A0L}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_843[i] = 0x6A1C20DEL;
    for (g_142 = (-22); (g_142 != (-17)); g_142 = safe_add_func_int16_t_s_s(g_142, 1))
    { 
        int32_t *l_841 = (void*)0;
        int32_t *l_842[2][5][6] = {{{&g_109[4],&g_109[4],&g_109[0],&g_109[4],&g_109[4],&g_109[0]},{&g_109[4],&g_109[4],&g_109[0],&g_109[4],&g_109[4],&g_109[0]},{&g_109[4],&g_109[4],&g_109[0],&g_109[4],&g_109[4],&g_109[0]},{&g_109[4],&g_109[4],&g_109[0],&g_109[4],&g_109[4],&g_109[0]},{&g_109[4],&g_109[4],&g_109[0],&g_109[4],&g_109[4],&g_109[0]}},{{&g_109[4],&g_109[4],&g_109[0],&g_109[4],&g_109[4],&g_109[0]},{&g_109[4],&g_109[4],&g_109[0],&g_109[4],&g_109[4],&g_109[0]},{&g_109[4],&g_109[4],&g_109[0],&g_109[4],&g_109[4],&g_109[0]},{&g_109[4],&g_109[4],&g_109[0],&g_109[4],&g_109[4],&g_109[0]},{&g_109[4],&g_109[4],&g_109[0],&g_109[4],&g_109[4],&g_109[0]}}};
        uint64_t *l_864 = &g_173.f1;
        uint64_t *l_865[4][7][6] = {{{&g_145,&g_145,(void*)0,&g_173.f1,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_173.f1,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_173.f1,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_173.f1,&g_145,&g_145},{&g_173.f1,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,(void*)0,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_173.f1,&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_173.f1,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,(void*)0},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145}},{{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_173.f1,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,(void*)0,&g_145,&g_145,(void*)0}}};
        uint64_t l_867 = 0xDDF5524C3D34B5ADLL;
        int8_t **l_871[3][3];
        int8_t ***l_870 = &l_871[1][0];
        int8_t ****l_872 = &l_870;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_871[i][j] = &g_94;
        }
        l_843[0]--;
        l_857[0][0][5] = ((safe_div_func_int16_t_s_s((((~(safe_mul_func_uint16_t_u_u(g_179.f5, (1UL >= (l_843[1] && ((void*)0 != &g_590)))))) > ((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u(p_28, (l_843[3] & g_830.f6))) != p_28), 2)), 2UL)) >= l_843[0])) || p_28), g_179.f6)) && p_26.f0);
        l_866[0][3][0] = (safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((0xF40CEBB8L == ((((safe_rshift_func_uint16_t_u_u(((l_857[1][1][3] >= (*p_27)) > 2UL), 7)) == (l_867++)) > (((*l_872) = l_870) != (void*)0)) , ((((l_857[4][1][2] |= 18446744073709551606UL) ^ l_843[0]) <= p_28) && (*p_27)))) >= g_256[2][6]), 0xE42ECFD58F25C7E3LL)), (*p_27)));
    }
    return p_27;
}



static int8_t * func_31(int32_t  p_32)
{ 
    uint16_t l_33[4];
    int32_t l_34 = 0x8F08877EL;
    int32_t l_35[2][3] = {{(-1L),(-1L),(-1L)},{1L,1L,1L}};
    int32_t *l_36 = &l_35[0][2];
    int32_t *l_37 = &l_35[0][2];
    int32_t *l_38[7] = {&l_35[0][2],&l_35[0][2],&l_35[1][0],&l_35[0][2],&l_35[0][2],&l_35[1][0],&l_35[0][2]};
    uint32_t l_39 = 0x6D4C01E0L;
    union U1 l_70 = {0};
    int32_t ***l_104 = &g_18[0];
    struct S0 *l_178 = &g_179;
    struct S0 *l_180 = &g_181;
    union U1 *l_182 = &g_183[1][1];
    uint32_t l_214 = 0xCE790EACL;
    uint64_t *l_300 = (void*)0;
    union U2 l_390[4] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
    int8_t l_411[5][4] = {{0xBCL,7L,0xBCL,0xBCL},{7L,7L,0xF5L,7L},{7L,0xBCL,0xBCL,7L},{0xBCL,7L,0xBCL,0xBCL},{7L,7L,0xF5L,7L}};
    uint32_t l_418 = 0xEF0E12ACL;
    int8_t *l_421[1];
    union U1 l_426 = {0};
    uint8_t l_515 = 1UL;
    uint32_t ***l_536 = &g_100;
    int32_t l_540 = (-1L);
    int32_t l_541 = 0xEF116C23L;
    uint8_t l_597[6] = {247UL,0x2FL,0x2FL,247UL,0x2FL,0x2FL};
    int8_t l_602 = 0xEAL;
    const int8_t l_654 = (-1L);
    uint16_t l_675 = 65533UL;
    int64_t **l_801 = (void*)0;
    int64_t ***l_800 = &l_801;
    int8_t l_833 = 0x0AL;
    uint32_t l_834 = 7UL;
    int8_t *l_837 = &l_411[0][3];
    int i, j;
    for (i = 0; i < 4; i++)
        l_33[i] = 0x07AFL;
    for (i = 0; i < 1; i++)
        l_421[i] = (void*)0;
    l_34 &= l_33[3];
    l_39++;
    for (g_7 = 3; (g_7 >= 0); g_7 -= 1)
    { 
        int64_t *l_46 = &g_47;
        int32_t **l_50[4][4][6] = {{{(void*)0,&l_38[5],&l_38[2],&l_37,(void*)0,(void*)0},{(void*)0,&l_38[2],(void*)0,(void*)0,&l_37,(void*)0},{(void*)0,&l_38[2],(void*)0,(void*)0,(void*)0,&l_37},{&l_37,&l_38[5],(void*)0,&l_37,(void*)0,(void*)0}},{{&l_36,&l_37,(void*)0,&l_38[5],&l_38[2],&l_37},{(void*)0,(void*)0,(void*)0,&l_37,&l_38[2],&l_38[5]},{&l_36,&l_38[5],&l_37,(void*)0,&l_37,&l_38[5]},{&l_37,(void*)0,(void*)0,&l_38[2],(void*)0,&l_37}},{{&l_37,&l_37,(void*)0,(void*)0,&l_37,(void*)0},{&l_36,&l_37,&l_36,&l_37,(void*)0,&l_38[2]},{(void*)0,(void*)0,&l_36,&l_38[5],&l_37,(void*)0},{&l_38[2],&l_38[5],(void*)0,&l_38[5],&l_38[2],&l_37}},{{(void*)0,(void*)0,(void*)0,&l_37,&l_38[2],&l_38[5]},{&l_36,&l_38[5],&l_37,(void*)0,&l_37,&l_38[5]},{&l_37,(void*)0,(void*)0,&l_38[2],(void*)0,&l_37},{&l_37,&l_37,(void*)0,(void*)0,&l_37,(void*)0}}};
        int32_t ***l_51 = &l_50[3][0][0];
        uint32_t *l_52 = &l_39;
        int8_t *l_71 = &g_7;
        uint16_t l_165[1][2];
        union U1 l_174 = {0};
        int16_t l_204 = 1L;
        int8_t l_212 = 0x64L;
        uint64_t *l_238 = &l_70.f1;
        int16_t l_257 = (-10L);
        union U2 l_265 = {0x18704473L};
        const uint64_t l_312[6][3][4] = {{{0xC05B540A995F434BLL,6UL,6UL,0xC05B540A995F434BLL},{6UL,0xC05B540A995F434BLL,6UL,6UL},{0xC05B540A995F434BLL,0xC05B540A995F434BLL,1UL,0xC05B540A995F434BLL}},{{0xC05B540A995F434BLL,6UL,6UL,0xC05B540A995F434BLL},{6UL,0xC05B540A995F434BLL,6UL,6UL},{0xC05B540A995F434BLL,0xC05B540A995F434BLL,1UL,0xC05B540A995F434BLL}},{{0xC05B540A995F434BLL,6UL,6UL,0xC05B540A995F434BLL},{6UL,0xC05B540A995F434BLL,6UL,6UL},{0xC05B540A995F434BLL,0xC05B540A995F434BLL,1UL,0xC05B540A995F434BLL}},{{0xC05B540A995F434BLL,6UL,6UL,0xC05B540A995F434BLL},{6UL,0xC05B540A995F434BLL,6UL,6UL},{0xC05B540A995F434BLL,0xC05B540A995F434BLL,1UL,0xC05B540A995F434BLL}},{{0xC05B540A995F434BLL,6UL,6UL,0xC05B540A995F434BLL},{6UL,0xC05B540A995F434BLL,6UL,6UL},{0xC05B540A995F434BLL,0xC05B540A995F434BLL,1UL,0xC05B540A995F434BLL}},{{0xC05B540A995F434BLL,6UL,6UL,0xC05B540A995F434BLL},{6UL,0xC05B540A995F434BLL,6UL,6UL},{0xC05B540A995F434BLL,0xC05B540A995F434BLL,1UL,0xC05B540A995F434BLL}}};
        uint64_t l_512 = 0xB515C64266B1C546LL;
        int8_t l_568[7][1][2];
        uint32_t l_570 = 18446744073709551608UL;
        uint32_t l_737 = 1UL;
        uint64_t l_753[7] = {0x2A86BE79801AC14DLL,0x2A86BE79801AC14DLL,0x2A86BE79801AC14DLL,0x2A86BE79801AC14DLL,0x2A86BE79801AC14DLL,0x2A86BE79801AC14DLL,0x2A86BE79801AC14DLL};
        uint32_t l_780[1][6][6] = {{{1UL,0xDA93B348L,0xDA93B348L,1UL,18446744073709551615UL,1UL},{1UL,18446744073709551615UL,1UL,0xDA93B348L,0xDA93B348L,1UL},{0x0D141159L,0x0D141159L,0xDA93B348L,18446744073709551608UL,0xDA93B348L,0x0D141159L},{0xDA93B348L,18446744073709551615UL,18446744073709551608UL,18446744073709551608UL,18446744073709551615UL,0xDA93B348L},{0x0D141159L,0xDA93B348L,18446744073709551608UL,0xDA93B348L,0x0D141159L,0x0D141159L},{1UL,0xDA93B348L,0xDA93B348L,1UL,18446744073709551615UL,1UL}}};
        uint32_t ***l_810[3][1][7];
        int8_t l_813 = 0x7EL;
        int32_t ****l_831 = (void*)0;
        uint8_t l_832 = 0x2FL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_165[i][j] = 0x56BDL;
        }
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_568[i][j][k] = 0x3CL;
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 7; k++)
                    l_810[i][j][k] = (void*)0;
            }
        }
        (*l_37) = ((safe_lshift_func_uint16_t_u_s(0x8144L, 7)) , (safe_mod_func_int32_t_s_s(0x22F0F5B8L, ((*l_52) |= (((*l_46) = 0x329794902820A3D5LL) <= (safe_rshift_func_int16_t_s_u((-3L), (((*l_51) = l_50[2][0][5]) == &g_19))))))));
    }
    return &g_377;
}



static uint64_t  func_54(int32_t * const  p_55, const int64_t  p_56, uint32_t * p_57, int32_t *** p_58, uint32_t  p_59)
{ 
    uint32_t l_105 = 0x7CD4424CL;
    int32_t *l_108 = &g_109[1];
    int32_t l_110 = (-1L);
    uint64_t l_111 = 0x0042110810DBFEEELL;
    int32_t *l_114[4][6] = {{&g_109[0],&g_109[1],&g_109[0],&l_110,&l_110,&g_109[0]},{&l_110,&l_110,&g_109[0],&g_109[1],&g_109[0],&l_110},{&g_109[0],(void*)0,&g_109[1],&g_109[1],(void*)0,&g_109[0]},{&l_110,&g_109[0],&g_109[1],&g_109[0],&l_110,&l_110}};
    int64_t l_115 = 0xF3F8A80EA506B424LL;
    int32_t l_116[1];
    int16_t l_117 = 0x42DCL;
    int32_t l_118 = (-1L);
    uint16_t l_119 = 65535UL;
    int32_t * const *l_138 = (void*)0;
    int32_t * const **l_137 = &l_138;
    int i, j;
    for (i = 0; i < 1; i++)
        l_116[i] = (-9L);
    --l_105;
    l_111++;
    --l_119;
    for (l_105 = (-6); (l_105 >= 49); ++l_105)
    { 
        int32_t l_139[2][5] = {{0xDB9409CFL,0xDB9409CFL,0xDB9409CFL,0xDB9409CFL,0xDB9409CFL},{(-9L),(-9L),(-9L),(-9L),(-9L)}};
        int32_t l_146 = 0L;
        int32_t l_147 = 0xF58C2C69L;
        int i, j;
        for (l_119 = 0; (l_119 == 26); l_119 = safe_add_func_uint8_t_u_u(l_119, 1))
        { 
            int32_t * const *l_136 = (void*)0;
            int32_t * const **l_135[7][2] = {{&l_136,&l_136},{&l_136,&l_136},{&l_136,&l_136},{&l_136,&l_136},{&l_136,&l_136},{&l_136,&l_136},{&l_136,&l_136}};
            int32_t * const ***l_134[4][2] = {{&l_135[4][1],&l_135[4][1]},{&l_135[4][1],&l_135[4][1]},{&l_135[4][1],&l_135[4][1]},{&l_135[4][1],&l_135[4][1]}};
            int64_t *l_140 = &l_115;
            uint8_t *l_143 = &g_144;
            int i, j;
            l_147 ^= (safe_mul_func_uint16_t_u_u(0x2ABAL, ((((safe_div_func_uint32_t_u_u((*g_101), (l_146 = ((*l_108) &= (((safe_lshift_func_uint8_t_u_u((g_145 ^= ((*l_143) = ((-1L) || (((((safe_div_func_uint16_t_u_u(((l_137 = (void*)0) == &l_138), l_139[1][2])) <= ((g_141 = l_140) == &l_115)) , p_56) & l_139[1][2]) , (*p_55))))), 0)) | l_139[1][2]) < (*g_94)))))) < 5UL) <= g_142) || g_7)));
        }
    }
    return p_56;
}



static uint32_t * func_64(union U1  p_65, union U1  p_66, int8_t * p_67, const uint64_t  p_68, uint64_t  p_69)
{ 
    union U1 l_72 = {0};
    int32_t l_74 = 0x4028E047L;
    int32_t *l_75 = &l_72.f3;
    int32_t **l_96[6][1][7] = {{{&l_75,&l_75,(void*)0,&l_75,(void*)0,&l_75,&l_75}},{{(void*)0,&g_19,&l_75,&g_19,(void*)0,(void*)0,&g_19}},{{&g_19,&l_75,&g_19,(void*)0,(void*)0,&g_19,&l_75}},{{&g_19,&g_19,&l_75,&l_75,&g_19,&g_19,&g_19}},{{&g_19,(void*)0,(void*)0,&g_19,&l_75,&g_19,(void*)0}},{{(void*)0,(void*)0,&g_19,&l_75,&g_19,(void*)0,(void*)0}}};
    int32_t *l_97[5];
    uint32_t ***l_102 = &g_100;
    int32_t l_103[7];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_97[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_103[i] = 0x4B2721D8L;
    l_75 = func_12((l_72 , (+l_74)));
    for (l_74 = 0; (l_74 >= 17); l_74 = safe_add_func_uint32_t_u_u(l_74, 6))
    { 
        uint32_t *l_83 = &g_84;
        uint32_t **l_82 = &l_83;
        int32_t l_87 = 0x3D01D8AAL;
        uint32_t l_93 = 0x9B52FFB4L;
        int32_t **l_95 = &l_75;
        (*l_95) = func_12(((safe_mul_func_uint8_t_u_u((p_67 == (((g_19 != ((*l_82) = g_19)) != (safe_mod_func_int16_t_s_s(((l_87 > ((safe_mul_func_int8_t_s_s((g_90 = ((void*)0 != &g_19)), ((safe_mod_func_int16_t_s_s(((((l_93 , 0xFEB948C0L) && (*g_19)) == g_47) || p_68), (-2L))) || 0xEC16D211L))) || p_68)) , p_69), (*l_75)))) , g_94)), (*g_94))) != 0UL));
    }
    l_97[3] = &l_74;
    l_103[0] ^= (safe_mul_func_uint16_t_u_u(p_68, ((p_68 , ((*l_102) = g_100)) == &g_101)));
    return (*g_100);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_109[i], "g_109[i]", print_hash_value);

    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_157.f0, "g_157.f0", print_hash_value);
    transparent_crc(g_179.f0, "g_179.f0", print_hash_value);
    transparent_crc(g_179.f1, "g_179.f1", print_hash_value);
    transparent_crc(g_179.f2, "g_179.f2", print_hash_value);
    transparent_crc(g_179.f3, "g_179.f3", print_hash_value);
    transparent_crc(g_179.f4, "g_179.f4", print_hash_value);
    transparent_crc(g_179.f5, "g_179.f5", print_hash_value);
    transparent_crc(g_179.f6, "g_179.f6", print_hash_value);
    transparent_crc(g_181.f0, "g_181.f0", print_hash_value);
    transparent_crc(g_181.f1, "g_181.f1", print_hash_value);
    transparent_crc(g_181.f2, "g_181.f2", print_hash_value);
    transparent_crc(g_181.f3, "g_181.f3", print_hash_value);
    transparent_crc(g_181.f4, "g_181.f4", print_hash_value);
    transparent_crc(g_181.f5, "g_181.f5", print_hash_value);
    transparent_crc(g_181.f6, "g_181.f6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_256[i][j], "g_256[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_830.f0, "g_830.f0", print_hash_value);
    transparent_crc(g_830.f1, "g_830.f1", print_hash_value);
    transparent_crc(g_830.f2, "g_830.f2", print_hash_value);
    transparent_crc(g_830.f3, "g_830.f3", print_hash_value);
    transparent_crc(g_830.f4, "g_830.f4", print_hash_value);
    transparent_crc(g_830.f5, "g_830.f5", print_hash_value);
    transparent_crc(g_830.f6, "g_830.f6", print_hash_value);
    transparent_crc(g_997, "g_997", print_hash_value);
    transparent_crc(g_1103, "g_1103", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1183[i][j], "g_1183[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1342.f0, "g_1342.f0", print_hash_value);
    transparent_crc(g_1342.f1, "g_1342.f1", print_hash_value);
    transparent_crc(g_1342.f2, "g_1342.f2", print_hash_value);
    transparent_crc(g_1342.f3, "g_1342.f3", print_hash_value);
    transparent_crc(g_1342.f4, "g_1342.f4", print_hash_value);
    transparent_crc(g_1342.f5, "g_1342.f5", print_hash_value);
    transparent_crc(g_1342.f6, "g_1342.f6", print_hash_value);
    transparent_crc(g_1378, "g_1378", print_hash_value);
    transparent_crc(g_1463, "g_1463", print_hash_value);
    transparent_crc(g_1532, "g_1532", print_hash_value);
    transparent_crc(g_1561, "g_1561", print_hash_value);
    transparent_crc(g_1667, "g_1667", print_hash_value);
    transparent_crc(g_1668, "g_1668", print_hash_value);
    transparent_crc(g_2118, "g_2118", print_hash_value);
    transparent_crc(g_2127, "g_2127", print_hash_value);
    transparent_crc(g_2140, "g_2140", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2151[i][j].f0, "g_2151[i][j].f0", print_hash_value);
            transparent_crc(g_2151[i][j].f1, "g_2151[i][j].f1", print_hash_value);
            transparent_crc(g_2151[i][j].f2, "g_2151[i][j].f2", print_hash_value);
            transparent_crc(g_2151[i][j].f3, "g_2151[i][j].f3", print_hash_value);
            transparent_crc(g_2151[i][j].f4, "g_2151[i][j].f4", print_hash_value);
            transparent_crc(g_2151[i][j].f5, "g_2151[i][j].f5", print_hash_value);
            transparent_crc(g_2151[i][j].f6, "g_2151[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(g_2248, "g_2248", print_hash_value);
    transparent_crc(g_2408, "g_2408", print_hash_value);
    transparent_crc(g_2436, "g_2436", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2492[i], "g_2492[i]", print_hash_value);

    }
    transparent_crc(g_2546, "g_2546", print_hash_value);
    transparent_crc(g_2562, "g_2562", print_hash_value);
    transparent_crc(g_2584, "g_2584", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_2680[i][j], "g_2680[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2755, "g_2755", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2789[i], "g_2789[i]", print_hash_value);

    }
    transparent_crc(g_2950, "g_2950", print_hash_value);
    transparent_crc(g_2966, "g_2966", print_hash_value);
    transparent_crc(g_3157, "g_3157", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_3189[i][j][k].f0, "g_3189[i][j][k].f0", print_hash_value);
                transparent_crc(g_3189[i][j][k].f1, "g_3189[i][j][k].f1", print_hash_value);
                transparent_crc(g_3189[i][j][k].f2, "g_3189[i][j][k].f2", print_hash_value);
                transparent_crc(g_3189[i][j][k].f3, "g_3189[i][j][k].f3", print_hash_value);
                transparent_crc(g_3189[i][j][k].f4, "g_3189[i][j][k].f4", print_hash_value);
                transparent_crc(g_3189[i][j][k].f5, "g_3189[i][j][k].f5", print_hash_value);
                transparent_crc(g_3189[i][j][k].f6, "g_3189[i][j][k].f6", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_3220[i], "g_3220[i]", print_hash_value);

    }
    transparent_crc(g_3260, "g_3260", print_hash_value);
    transparent_crc(g_3360, "g_3360", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
