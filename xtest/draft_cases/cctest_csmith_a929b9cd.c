// SPDX-License-Identifier: MIT
// cctest_csmith_a929b9cd.c --- cctest case csmith_a929b9cd (csmith seed 2838084045)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa84cbfb5 */

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

// Options:   -s 2838084045 -o /tmp/csmith_gen_xbwo_uqb/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 5;
   uint8_t  f1;
   unsigned f2 : 8;
   unsigned f3 : 12;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   uint64_t  f1;
   uint64_t  f2;
   const uint8_t  f3;
   uint32_t  f4;
};


static int32_t g_4 = 0x10E164CAL;
static int32_t g_14 = (-1L);
static uint64_t g_32 = 0xA219909D073D4C46LL;
static uint16_t g_34 = 0x373CL;
static union U1 g_41 = {0xC910760BL};
static int8_t g_57 = 0x3EL;
static int32_t g_62 = 0xC0717824L;
static uint8_t g_70 = 0x4CL;
static int32_t g_82 = 0x018F8C21L;
static struct S0 g_83 = {0,1UL,9,8};
static int16_t g_92 = 0x2AE0L;
static int32_t *g_97 = &g_62;
static int32_t * const *g_96 = &g_97;
static uint16_t g_99[4] = {65535UL,65535UL,65535UL,65535UL};
static int32_t g_110 = (-1L);
static int32_t **g_142 = &g_97;
static int32_t ***g_141 = &g_142;
static uint8_t g_148 = 0xAEL;
static uint8_t ***g_168 = (void*)0;
static uint8_t *g_172[6][7] = {{&g_83.f1,&g_83.f1,(void*)0,(void*)0,&g_83.f1,(void*)0,(void*)0},{(void*)0,&g_70,&g_83.f1,&g_70,(void*)0,&g_83.f1,&g_148},{&g_148,&g_70,(void*)0,(void*)0,&g_83.f1,&g_148,&g_83.f1},{&g_70,&g_83.f1,&g_83.f1,&g_148,&g_83.f1,&g_83.f1,&g_148},{&g_148,(void*)0,&g_148,&g_83.f1,&g_83.f1,&g_83.f1,&g_148},{(void*)0,&g_148,&g_148,&g_83.f1,&g_148,&g_148,&g_83.f1}};
static uint8_t **g_171 = &g_172[5][6];
static uint8_t ***g_170 = &g_171;
static const int32_t g_184[7][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
static int8_t g_241 = (-9L);
static int64_t g_263[7] = {(-1L),0x3E1C250E55875A12LL,(-1L),(-1L),0x3E1C250E55875A12LL,(-1L),(-1L)};
static int8_t g_310 = 9L;
static uint64_t g_311 = 18446744073709551613UL;
static int32_t g_325 = 0x50AAFC2DL;
static int8_t g_326[3][3] = {{(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L)},{(-2L),(-2L),(-2L)}};
static int32_t g_327[4][7] = {{(-1L),(-1L),(-6L),(-1L),(-1L),(-6L),(-1L)},{(-1L),(-6L),(-6L),(-1L),(-6L),(-6L),(-1L)},{(-6L),(-1L),(-6L),(-6L),(-1L),(-6L),(-6L)},{(-1L),(-1L),(-6L),(-1L),(-1L),(-6L),(-1L)}};
static uint32_t g_328 = 18446744073709551611UL;
static uint32_t g_336 = 0x89DACE0EL;
static uint64_t ** const g_338 = (void*)0;
static uint64_t ** const *g_337 = &g_338;
static uint16_t **g_341 = (void*)0;
static int32_t g_364 = 0xDBCD3C21L;
static int32_t g_365 = (-5L);
static int64_t g_366 = 0L;
static uint32_t g_372[1][6] = {{0x111350BEL,0x111350BEL,0x111350BEL,0x111350BEL,0x111350BEL,0x111350BEL}};
static int64_t g_409 = (-5L);
static int32_t g_413 = (-1L);
static int32_t g_414 = 1L;
static int32_t g_415 = 0xF0B5B4A8L;
static int16_t g_416[4][1] = {{0L},{0L},{0L},{0L}};
static uint16_t g_417 = 0xDB36L;
static int32_t g_444 = 0x0D6A4D54L;
static int16_t g_445 = 1L;
static uint64_t g_446 = 0UL;
static int32_t g_465 = (-5L);
static int32_t g_489[6] = {1L,1L,1L,1L,1L,1L};
static union U1 g_521 = {2L};
static int16_t g_523[5][2][7] = {{{(-8L),0xF48FL,(-1L),(-8L),1L,(-1L),(-1L)},{1L,0xD2C6L,(-10L),0xD2C6L,1L,0x944DL,1L}},{{1L,(-8L),(-1L),0xF48FL,(-8L),(-8L),0xF48FL},{0xF37DL,0xD2C6L,0xF37DL,5L,1L,5L,0xF37DL}},{{1L,0xF48FL,0xC1DCL,1L,1L,0xC1DCL,0xF48FL},{1L,5L,1L,0xD2C6L,1L,5L,1L}},{{(-8L),1L,(-1L),(-1L),1L,(-8L),(-1L)},{1L,0xD2C6L,(-4L),0xD2C6L,1L,0x944DL,1L}},{{1L,(-1L),(-1L),1L,(-8L),(-1L),0xF48FL},{1L,0xD2C6L,1L,5L,1L,5L,1L}}};
static uint8_t g_526[7][6][2] = {{{0x7DL,5UL},{5UL,0x7DL},{253UL,0x46L},{253UL,0x7DL},{5UL,5UL},{0x7DL,253UL}},{{0x46L,253UL},{0x7DL,5UL},{5UL,0x7DL},{253UL,0x46L},{253UL,0x7DL},{5UL,5UL}},{{0x7DL,253UL},{0x46L,253UL},{0x7DL,5UL},{5UL,0x7DL},{253UL,0x46L},{253UL,0x7DL}},{{5UL,5UL},{0x7DL,253UL},{0x46L,253UL},{0x7DL,5UL},{5UL,0x7DL},{253UL,0UL}},{{0x7DL,0x46L},{4UL,4UL},{0x46L,0x7DL},{0UL,0x7DL},{0x46L,4UL},{4UL,0x46L}},{{0x7DL,0UL},{0x7DL,0x46L},{4UL,4UL},{0x46L,0x7DL},{0UL,0x7DL},{0x46L,4UL}},{{4UL,0x46L},{0x7DL,0UL},{0x7DL,0x46L},{4UL,4UL},{0x46L,0x7DL},{0UL,0x7DL}}};
static uint32_t g_546 = 0xED65EE55L;
static uint8_t ****g_551 = &g_168;
static uint8_t *****g_550 = &g_551;
static int8_t g_590 = (-6L);
static int8_t g_599 = (-9L);
static int8_t g_602 = 0L;
static int64_t g_604 = (-8L);
static uint32_t g_608 = 0x249B33C7L;
static union U1 ****g_616 = (void*)0;
static int32_t g_681 = 1L;
static int32_t g_682 = 8L;
static uint16_t g_683[5][4][3] = {{{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L}},{{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L}},{{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L}},{{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L}},{{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L},{0xF887L,0xF887L,0xC633L}}};
static int32_t g_706 = 0x8BB915D8L;
static uint32_t g_715 = 0x61027097L;
static int16_t g_807 = 0xB260L;
static uint32_t g_828 = 0xB452060DL;
static uint32_t g_849 = 0x95BBEE1AL;
static int16_t g_865 = 0xA620L;
static uint32_t g_866 = 0x5A1484ADL;
static uint16_t g_895[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static union U1 g_899[7] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
static int8_t g_933 = (-1L);
static uint32_t g_937 = 4294967292UL;
static uint64_t g_956 = 0xE12E4A8907C9121DLL;
static uint64_t g_959 = 0xFB18212F7B55D527LL;
static uint8_t g_976[5] = {255UL,255UL,255UL,255UL,255UL};
static struct S0 *g_994 = &g_83;
static struct S0 **g_993 = &g_994;
static uint8_t *****g_1121 = &g_551;
static uint16_t ***g_1139 = &g_341;
static int64_t g_1150 = 0x875AD22062D71EC4LL;
static uint64_t g_1151 = 0xFBE6374015D6E6DBLL;
static uint32_t g_1199 = 0xE9647F3DL;
static uint8_t g_1207 = 0xD8L;
static uint32_t g_1266 = 0x62C1D6B8L;
static int32_t g_1272 = 8L;
static int8_t g_1304 = 0L;
static int32_t g_1329 = (-1L);
static int32_t g_1331 = 0x18CF0EE6L;
static uint64_t g_1332 = 0xA75F3FB5C58BF910LL;
static int16_t *g_1359 = &g_523[1][0][1];
static int16_t **g_1358[4] = {&g_1359,&g_1359,&g_1359,&g_1359};
static int16_t ***g_1357 = &g_1358[2];
static uint16_t ** const *g_1370 = &g_341;
static uint16_t ** const **g_1369 = &g_1370;
static int8_t g_1402[4] = {(-1L),(-1L),(-1L),(-1L)};
static int64_t g_1403 = 2L;
static int64_t g_1404 = 0L;
static uint8_t g_1405 = 1UL;
static int32_t g_1460 = 0xD1FCF7C0L;
static uint64_t g_1463 = 0x470CE78448AEF767LL;
static union U1 **g_1471 = (void*)0;
static int32_t ****g_1484 = &g_141;
static int32_t g_1563 = 0xEDFF6E3AL;
static int32_t g_1595 = 1L;
static int32_t g_1596 = 0x031E1201L;
static int32_t g_1604[1] = {1L};
static uint32_t g_1608 = 0xBF36CBDEL;
static int64_t *g_1879 = &g_1404;
static int64_t **g_1878[5] = {&g_1879,&g_1879,&g_1879,&g_1879,&g_1879};
static union U1 g_1922 = {0xEE162169L};
static union U1 *g_1921 = &g_1922;
static int64_t *g_1961 = (void*)0;
static uint8_t ***g_2002 = &g_171;
static uint8_t **** const g_2001 = &g_2002;
static uint8_t **** const *g_2000 = &g_2001;
static uint32_t g_2147 = 1UL;



static int8_t  func_1(void);
static int32_t  func_6(int32_t * p_7, uint16_t  p_8);
static int32_t * func_9(int8_t  p_10);
static uint32_t  func_19(int8_t  p_20);
static int8_t  func_21(int32_t ** const  p_22, int8_t  p_23);
static int32_t ** const  func_24(int8_t  p_25, int32_t ** p_26, int16_t  p_27, uint32_t  p_28);
static int32_t  func_35(uint64_t  p_36, int32_t ** p_37);
static int32_t  func_46(int64_t  p_47, int32_t  p_48, int32_t  p_49);




static int8_t  func_1(void)
{ 
    uint32_t l_2 = 0x708EF6B8L;
    int32_t *l_3 = &g_4;
    int32_t l_1906[2];
    uint8_t l_1910 = 247UL;
    int32_t *l_1917 = &g_1563;
    int32_t l_1943[4][3][2] = {{{0L,0L},{1L,0L},{0L,(-1L)}},{{0L,0L},{1L,0L},{0L,(-1L)}},{{7L,7L},{1L,7L},{7L,(-1L)}},{{0L,0L},{1L,0L},{0L,(-1L)}}};
    int64_t *l_1963 = &g_409;
    uint64_t l_1979[5];
    uint32_t l_1980 = 18446744073709551612UL;
    uint8_t **** const *l_1999 = (void*)0;
    const int8_t l_2015[4] = {0x9BL,0x9BL,0x9BL,0x9BL};
    union U1 *l_2021 = &g_899[1];
    uint16_t *** const *l_2023 = &g_1139;
    uint16_t *** const **l_2022[7][1][6] = {{{&l_2023,&l_2023,&l_2023,(void*)0,(void*)0,&l_2023}},{{&l_2023,&l_2023,(void*)0,&l_2023,&l_2023,&l_2023}},{{&l_2023,&l_2023,&l_2023,&l_2023,(void*)0,(void*)0}},{{&l_2023,&l_2023,&l_2023,&l_2023,&l_2023,&l_2023}},{{&l_2023,&l_2023,(void*)0,&l_2023,&l_2023,&l_2023}},{{&l_2023,&l_2023,(void*)0,(void*)0,&l_2023,&l_2023}},{{&l_2023,&l_2023,&l_2023,&l_2023,&l_2023,&l_2023}}};
    uint16_t *****l_2024 = (void*)0;
    union U1 ***l_2032 = (void*)0;
    union U1 ****l_2031 = &l_2032;
    const uint32_t l_2041 = 0xAAB770E9L;
    uint64_t l_2109 = 0UL;
    int32_t ** const *l_2178 = &g_142;
    int32_t ** const ** const l_2177 = &l_2178;
    uint32_t l_2264 = 0UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1906[i] = 0x124DEFEDL;
    for (i = 0; i < 5; i++)
        l_1979[i] = 0xB8740B0CDDC4E510LL;
    if (((*l_3) = l_2))
    { 
        int32_t l_5 = (-1L);
        int32_t l_1557 = 0xA22D157FL;
        int32_t l_1904 = (-1L);
        int32_t l_1905 = (-1L);
        int32_t l_1907 = 0L;
        int32_t l_1908 = (-5L);
        int32_t l_1909 = 0x05C1E689L;
        int32_t **l_1918 = &l_1917;
        int64_t *l_1962 = &g_604;
        uint16_t ***l_1964 = &g_341;
        const uint64_t l_1975 = 0UL;
        int64_t l_1978 = 0x558F98A139C4C752LL;
        int32_t l_1984 = 0xE284D51CL;
    }
    else
    { 
        uint8_t l_1988 = 0x25L;
        struct S0 l_1989 = {4,0xE8L,6,58};
        uint16_t l_1996[6][5][7] = {{{3UL,0xC0AEL,65531UL,0xFA1BL,0xF80BL,0xDB91L,65531UL},{65531UL,1UL,0UL,0xF80BL,0x866EL,65534UL,4UL},{0UL,0xC0AEL,0xDB91L,0x160CL,0x866EL,0UL,65529UL},{8UL,1UL,65535UL,65532UL,0xF80BL,0x6EE3L,0x5A16L},{0UL,65530UL,0xA965L,65532UL,1UL,65535UL,0xAA39L}},{{65531UL,4UL,0xD8C8L,0x160CL,65528UL,0UL,0x5A16L},{3UL,8UL,0xD8C8L,0xF80BL,5UL,0xA965L,65529UL},{0xE523L,65531UL,0xA965L,0xFA1BL,0x1D97L,0UL,4UL},{0x2D02L,65531UL,65535UL,0UL,0UL,65535UL,65531UL},{0x1B49L,8UL,0xDB91L,0x866EL,0x1D97L,0x6EE3L,6UL}},{{0x1B49L,4UL,0UL,65528UL,5UL,0UL,1UL},{0x2D02L,65530UL,65531UL,0x866EL,65528UL,65534UL,1UL},{0xE523L,1UL,0UL,0UL,1UL,0xDB91L,6UL},{3UL,0xC0AEL,65531UL,0xFA1BL,0xF80BL,0xDB91L,65531UL},{65531UL,1UL,0UL,0xF80BL,0x866EL,65534UL,4UL}},{{0UL,0xC0AEL,0xDB91L,0x160CL,0x866EL,0UL,65529UL},{8UL,1UL,65535UL,65532UL,0xF80BL,0x6EE3L,0x5A16L},{0UL,65530UL,0xA965L,65532UL,1UL,65535UL,0xAA39L},{65531UL,4UL,0xD8C8L,0x160CL,65528UL,0UL,0x5A16L},{3UL,8UL,0xD8C8L,0xF80BL,5UL,0xA965L,65529UL}},{{0xE523L,65531UL,0xA965L,0xFA1BL,0x1D97L,0UL,4UL},{0x2D02L,65531UL,65535UL,0UL,0UL,65535UL,65531UL},{0x1B49L,8UL,0xDB91L,0x866EL,0x1D97L,0x6EE3L,6UL},{0x1B49L,4UL,0UL,65528UL,5UL,0UL,1UL},{0x2D02L,65530UL,65531UL,0x866EL,65528UL,65534UL,1UL}},{{0xE523L,1UL,0UL,0UL,1UL,0xDB91L,9UL},{6UL,0UL,5UL,9UL,3UL,0xF80BL,0x2AB8L},{0x5359L,1UL,0xF1FAL,3UL,0xB784L,0x1D97L,0UL},{0xAFF3L,0UL,0xF80BL,0x2E40L,0xB784L,0xFA1BL,0x4664L},{0x3CDFL,1UL,65532UL,0xE523L,3UL,0x19EBL,0x7E66L}}};
        uint64_t *l_2003 = (void*)0;
        uint64_t *l_2004 = &g_32;
        int32_t l_2005[4][2][2] = {{{0x078500D4L,0L},{0x078500D4L,0x078500D4L}},{{0L,0x078500D4L},{0x078500D4L,0L}},{{0x078500D4L,0x078500D4L},{0L,0x078500D4L}},{{0x078500D4L,0L},{0x078500D4L,0x078500D4L}}};
        int i, j, k;
        for (g_365 = (-23); (g_365 > (-28)); --g_365)
        { 
            uint32_t l_1987 = 4294967287UL;
            (*l_1917) = l_1987;
            if (l_1987)
                goto lbl_2016;
        }
        (*g_142) = func_9((l_1988 <= ((l_1989 , (l_2005[0][1][0] = (safe_div_func_uint64_t_u_u(((*l_2004) &= (((safe_mul_func_int8_t_s_s((*l_1917), l_1989.f2)) && (safe_rshift_func_uint8_t_u_u((*l_3), ((++l_1996[1][3][0]) >= (&g_551 != (g_2000 = l_1999)))))) & l_1989.f0)), l_1989.f0)))) != 0x5333C6A73D9426F4LL)));
lbl_2016:
        for (g_241 = 0; (g_241 >= (-15)); g_241--)
        { 
            uint64_t l_2012 = 0x3BA7D6D916F6CD7ELL;
            union U1 *l_2013 = &g_41;
            int32_t l_2014 = 0xCD1453D2L;
            (*l_3) = ((9L != (l_1996[1][3][0] >= ((l_1989.f0 ^ ((((((((****g_1484) = ((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint32_t_u((l_2012 = g_263[4]))))) > (l_2005[0][1][0] != ((void*)0 == l_2013)))) & l_2014) <= l_2005[0][1][0]) || g_14) > 0xF2E25357L) != 0x6DL) || l_2015[0])) <= (*l_1917)))) , (-5L));
        }
        (*l_3) |= l_1996[1][3][0];
    }
    if ((((safe_rshift_func_int8_t_s_s(g_715, 1)) < ((l_2021 == l_2021) == g_937)) , (l_2022[3][0][2] == (l_2024 = l_2024))))
    { 
        union U1 ***l_2029 = &g_1471;
        union U1 ****l_2028 = &l_2029;
        union U1 *****l_2030[4];
        int32_t l_2034 = 0L;
        uint8_t *l_2035 = &g_526[2][1][1];
        int32_t l_2068[3];
        uint32_t *l_2069 = (void*)0;
        int32_t *****l_2110 = &g_1484;
        uint16_t l_2122 = 8UL;
        int32_t l_2146 = 0x4D4C4FD7L;
        uint32_t l_2149 = 3UL;
        int32_t l_2171 = (-1L);
        int32_t l_2221 = 0x4EF7629EL;
        struct S0 l_2262 = {0,0x49L,3,58};
        int i;
        for (i = 0; i < 4; i++)
            l_2030[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_2068[i] = 0xD94AD884L;
        if ((safe_div_func_int32_t_s_s(0x3048BBF0L, ((!((l_2031 = l_2028) != g_616)) , (+((*l_2035)--))))))
        { 
            int64_t l_2040 = (-1L);
            int64_t l_2052 = 0L;
            const int8_t l_2064 = (-1L);
            int8_t l_2070 = 7L;
            int32_t l_2121 = 0x77902B76L;
            for (g_1404 = 0; (g_1404 <= 0); g_1404 += 1)
            { 
                uint64_t l_2063 = 0x702FCFCB6E3D595BLL;
                union U1 l_2065 = {0xC64DAD1BL};
                (****g_1484) |= (((0xEAL == l_2040) && (l_2041 , (((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s(l_2052, (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(65532UL, 0x6EB4L)) >= (((safe_mul_func_uint16_t_u_u(l_2063, l_2064)) == l_2063) <= l_2052)), g_364)), 0xD2BCL)), l_2034)))) & 0xA1L) >= 0UL) | (*l_1917)), l_2034)), l_2034)), l_2064)) | g_310) || (*g_1879)), l_2063)) == 0xAC83FC0F319D7643LL) != l_2040))) , 0x34E1888DL);
                for (g_1332 = 0; (g_1332 <= 0); g_1332 += 1)
                { 
                    (*g_993) = (*g_993);
                }
                if (l_2040)
                    continue;
                if (((((l_2065 , ((safe_lshift_func_uint16_t_u_u(((l_2034 = ((void*)0 == &g_338)) & 0xD515L), l_2068[2])) , ((void*)0 == l_2069))) == 255UL) | 0x6B639340A9CF096ELL) , 0x5C9E7A91L))
                { 
                    uint32_t l_2087 = 18446744073709551614UL;
                    uint64_t *l_2088[2];
                    int8_t *l_2106 = &g_599;
                    int8_t **l_2105 = &l_2106;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2088[i] = (void*)0;
                    l_2070 = (**g_96);
                    (*l_3) = (((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_add_func_int8_t_s_s(g_409, (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((g_681 == ((*g_97) = (*l_3))), (***g_1357))), 0)), (g_32 = l_2087))))) | (safe_mod_func_int16_t_s_s((l_2068[2] == (-6L)), 65529UL))), (*l_1917))), l_2065.f3)) ^ l_2052), 8)) & g_1922.f3), l_2034)) <= l_2040) == l_2087);
                    if (l_2087)
                        break;
                    (**g_142) = ((*l_1917) &= l_2070);
                    (*l_1917) |= ((**g_142) || ((**g_142) = (safe_add_func_int8_t_s_s(((l_2068[2] ^ ((safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(0x99L, (((((safe_add_func_int8_t_s_s(l_2087, (*l_3))) <= (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((&g_602 != ((*l_2105) = &g_1304)), 3)), g_417))) , g_706) > l_2064) | (***g_1357)))) && (****g_1484)), (-4L))) != (*l_3))) || g_899[2].f0), 9L))));
                }
                else
                { 
                    (*l_1917) &= ((*g_97) = (***g_141));
                }
                for (g_866 = 0; (g_866 <= 0); g_866 += 1)
                { 
                    int i, j;
                    (***g_141) = ((g_372[g_866][(g_1404 + 4)] && (safe_rshift_func_int16_t_s_u(1L, 13))) ^ 0xC8L);
                    (**g_96) ^= ((l_2109 & 0L) == g_1604[0]);
                    l_2110 = &g_1484;
                }
            }
            for (g_1199 = (-26); (g_1199 >= 55); g_1199 = safe_add_func_uint16_t_u_u(g_1199, 5))
            { 
                int32_t *l_2115 = (void*)0;
                int32_t *l_2116 = (void*)0;
                int32_t *l_2117 = &g_682;
                int32_t l_2118 = 0x5A38CB88L;
                int32_t *l_2119[4][6][2] = {{{&g_1604[0],&l_1943[0][1][0]},{&g_682,&l_1943[1][0][1]},{&l_1906[0],&g_682},{&g_1272,&g_465},{&g_465,(void*)0},{&l_1906[0],&l_1943[0][1][0]}},{{(void*)0,&l_1943[0][1][0]},{&l_1906[0],(void*)0},{&g_465,&g_465},{&g_1272,&g_682},{&l_1906[0],&l_1943[1][0][1]},{&g_682,&l_1943[0][1][0]}},{{&g_1604[0],&g_682},{&g_465,&g_1272},{&g_465,&g_682},{&g_1604[0],&l_1943[0][1][0]},{&g_682,&l_1943[1][0][1]},{&l_1906[0],&g_682}},{{&g_1272,&g_465},{&g_465,(void*)0},{&l_1906[0],&l_1943[0][1][0]},{(void*)0,&l_1943[0][1][0]},{&l_1906[0],(void*)0},{&g_465,&g_465}}};
                int16_t l_2120 = (-3L);
                int i, j, k;
                for (l_2040 = 18; (l_2040 < 19); l_2040 = safe_add_func_int16_t_s_s(l_2040, 1))
                { 
                    (**g_142) = (**g_142);
                }
                ++l_2122;
                (*g_97) = (((**g_142) == ((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(l_2040, 0)), (+((((l_2121 = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((*l_1917), (l_2052 , (0L <= ((l_2146 = (safe_mod_func_uint8_t_u_u(((((*l_1917) != ((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((**l_2031) == (**l_2028)), 0L)), 1L)), (*****l_2110))) , 1UL), (***g_1357))) < 0L) && (-5L)) & l_2040)) ^ (*l_1917)) , 0x98L), 0x89L))) , 1L))))), g_365))) , (*g_97)) & 0x65C71CB4L) , 0x31L)))), g_2147)) , 0x04A4504CL)) , l_2052);
                for (l_2120 = 0; (l_2120 >= 0); l_2120 -= 1)
                { 
                    int64_t l_2148 = 0x4711D831D0EE5C34LL;
                    int i, j;
                    --l_2149;
                    (****g_1484) |= (g_416[(l_2120 + 2)][l_2120] || 7UL);
                    (*l_1917) = 1L;
                }
            }
            return g_263[1];
        }
        else
        { 
            int32_t l_2156[1][7][1] = {{{3L},{(-1L)},{3L},{(-1L)},{3L},{(-1L)},{3L}}};
            const union U1 l_2157 = {0xF3C24DE1L};
            int32_t l_2172 = (-1L);
            uint64_t l_2232 = 0xE395387ACC0CA32CLL;
            int16_t *l_2233 = &g_865;
            uint32_t l_2265 = 0xE47A2DD9L;
            uint16_t l_2275 = 0xA457L;
            int i, j, k;
            for (g_409 = 0; (g_409 >= 22); g_409 = safe_add_func_uint16_t_u_u(g_409, 3))
            { 
                int32_t l_2162 = 0x60BBDB0EL;
                int8_t *l_2167 = &g_1402[1];
                uint64_t *l_2170 = &g_446;
                (*l_3) = ((l_2172 ^= ((*****l_2110) = ((*g_1879) = (safe_sub_func_int64_t_s_s(l_2156[0][6][0], (l_2157 , (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((++(*l_2035)), ((safe_div_func_int8_t_s_s(((*l_2167) = 0x2CL), (safe_mul_func_uint8_t_u_u(1UL, (((*l_2170) = (&g_616 != &g_616)) | l_2171))))) <= 0x2AADL))) | l_2162), l_2157.f0)))))))) > (*l_3));
                return (*l_3);
            }
            for (g_521.f4 = 0; (g_521.f4 <= 0); g_521.f4 += 1)
            { 
                int16_t **l_2180[5];
                int16_t ***l_2179 = &l_2180[4];
                struct S0 *l_2223 = &g_83;
                int i;
                for (i = 0; i < 5; i++)
                    l_2180[i] = &g_1359;
            }
            for (g_608 = (-7); (g_608 >= 39); g_608 = safe_add_func_uint32_t_u_u(g_608, 1))
            { 
                (*l_1917) |= ((*****l_2110) = 0x57CE046DL);
            }
            (*l_3) &= (safe_mul_func_uint8_t_u_u(((*****l_2110) == ((void*)0 == (**l_2177))), ((g_1199 &= (((*l_2233) = ((*g_1359) = (((g_1922.f0 == ((*l_2035) &= ((****l_2177) >= (safe_mul_func_uint8_t_u_u((7L > (l_2232 ^ (*****l_2110))), l_2156[0][4][0]))))) , (**g_142)) >= g_1596))) | l_2156[0][6][0])) , g_41.f0)));
            for (g_41.f1 = 1; (g_41.f1 <= 4); g_41.f1 += 1)
            { 
                uint16_t l_2239 = 0x33C5L;
                int32_t *l_2242 = (void*)0;
                int32_t *l_2263 = &g_325;
                uint32_t *l_2266[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2266[i][j] = &g_1266;
                }
                for (g_1922.f1 = 0; (g_1922.f1 <= 3); g_1922.f1 += 1)
                { 
                    int i;
                    return l_1979[(g_1922.f1 + 1)];
                }
            }
        }
    }
    else
    { 
        int8_t *l_2286 = &g_933;
        uint32_t *l_2289 = &g_866;
        int32_t l_2298 = 1L;
        int32_t l_2299[6][6];
        int8_t l_2313 = 0xD3L;
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6; j++)
                l_2299[i][j] = 0L;
        }
lbl_2304:
        (*g_993) = (void*)0;
        if (((safe_rshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((*l_3) ^= ((void*)0 == &g_1358[2])), (safe_lshift_func_int8_t_s_u(((*l_2286) = 1L), ((safe_lshift_func_uint16_t_u_u(((((*l_2289)++) ^ (safe_add_func_int16_t_s_s(((-1L) ^ (safe_rshift_func_int8_t_s_s((-1L), 3))), (((safe_lshift_func_int8_t_s_u((g_1403 != (l_2298 = (****l_2177))), l_2299[0][1])) != 0xADL) , (-9L))))) <= (***l_2178)), (*l_1917))) | (***l_2178)))))), (*g_1879))), 5)) <= g_1266))
        { 
            int32_t *l_2300[6] = {&g_110,&g_110,&g_110,&g_110,&g_110,&g_110};
            uint32_t l_2301[2];
            union U1 ***l_2311 = &g_1471;
            int i;
            for (i = 0; i < 2; i++)
                l_2301[i] = 0x044A6B43L;
            (*l_1917) |= (**g_142);
            ++l_2301[1];
            (*l_3) |= 0x2123D20BL;
            for (g_1329 = 2; (g_1329 >= 0); g_1329 -= 1)
            { 
                uint32_t l_2312 = 0xFDDF871BL;
                uint16_t l_2320 = 0x1845L;
                if (l_2299[0][1])
                { 
                    if (l_2041)
                        goto lbl_2304;
                    if (l_2299[0][1])
                        continue;
                    l_2298 ^= (*g_97);
                }
                else
                { 
                    uint64_t *l_2306[5] = {&g_1463,&g_1463,&g_1463,&g_1463,&g_1463};
                    uint64_t **l_2305 = &l_2306[1];
                    uint64_t ***l_2307 = &l_2305;
                    int i;
                    (*l_3) |= (**g_142);
                    (*l_2307) = l_2305;
                }
                for (g_1150 = 2; (g_1150 >= 0); g_1150 -= 1)
                { 
                    struct S0 *l_2308 = &g_83;
                    int i, j;
                    (*g_993) = l_2308;
                    (****l_2177) = (g_326[g_1150][g_1150] > (safe_sub_func_int32_t_s_s(((l_2311 == &g_1471) , (***g_141)), ((l_2313 |= l_2312) , (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((0x972808DE535CC306LL == (*l_3)), l_2299[0][1])), l_2320)), (-6L)))))));
                }
            }
        }
        else
        { 
            uint16_t l_2321 = 0xE97CL;
            (***l_2177) = func_9(l_2321);
        }
        for (g_1463 = 0; g_1463 < 4; g_1463 += 1)
        {
            for (g_956 = 0; g_956 < 1; g_956 += 1)
            {
                g_416[g_1463][g_956] = 1L;
            }
        }
    }
    return g_604;
}



static int32_t  func_6(int32_t * p_7, uint16_t  p_8)
{ 
    int8_t l_1558 = 3L;
    uint8_t ***** const l_1566 = &g_551;
    uint8_t *****l_1567 = &g_551;
    int32_t l_1568 = 1L;
    uint8_t *l_1569 = &g_83.f1;
    int32_t ***l_1574 = &g_142;
    union U1 ** const *l_1576[5];
    union U1 ** const **l_1575[2][5] = {{&l_1576[4],&l_1576[4],&l_1576[1],&l_1576[1],&l_1576[1]},{&l_1576[4],&l_1576[4],&l_1576[1],&l_1576[1],&l_1576[1]}};
    int32_t l_1593 = (-1L);
    int32_t l_1594[3];
    uint64_t *l_1634 = (void*)0;
    int32_t l_1653 = 0x072D7FD9L;
    int32_t l_1786 = 0x01BB92FEL;
    const uint32_t *l_1807 = &g_1608;
    struct S0 l_1876 = {0,255UL,13,29};
    int64_t * const *l_1880[5][7][2] = {{{&g_1879,&g_1879},{(void*)0,&g_1879},{(void*)0,&g_1879},{&g_1879,(void*)0},{&g_1879,(void*)0},{&g_1879,&g_1879},{(void*)0,&g_1879}},{{(void*)0,&g_1879},{&g_1879,&g_1879},{(void*)0,&g_1879},{&g_1879,&g_1879},{&g_1879,&g_1879},{&g_1879,&g_1879},{(void*)0,&g_1879}},{{(void*)0,&g_1879},{&g_1879,&g_1879},{&g_1879,&g_1879},{&g_1879,&g_1879},{(void*)0,&g_1879},{&g_1879,&g_1879},{(void*)0,&g_1879}},{{(void*)0,&g_1879},{&g_1879,(void*)0},{&g_1879,(void*)0},{&g_1879,&g_1879},{(void*)0,&g_1879},{(void*)0,&g_1879},{&g_1879,&g_1879}},{{(void*)0,&g_1879},{&g_1879,&g_1879},{&g_1879,&g_1879},{&g_1879,&g_1879},{(void*)0,&g_1879},{(void*)0,&g_1879},{&g_1879,&g_1879}}};
    int16_t ***l_1891 = (void*)0;
    uint32_t l_1892 = 0x5DE37094L;
    uint64_t l_1894[4];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1576[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_1594[i] = 0L;
    for (i = 0; i < 4; i++)
        l_1894[i] = 0x030136F78CB658B9LL;
    for (g_521.f1 = 1; (g_521.f1 <= 6); g_521.f1 += 1)
    { 
        return l_1558;
    }
    if ((((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_1563, 5)), (p_8 <= (safe_mod_func_uint16_t_u_u((((l_1566 != (l_1567 = l_1567)) ^ 1L) ^ (((*l_1569)--) ^ (safe_sub_func_int32_t_s_s(0L, l_1558)))), 0x8BCAL))))) , (*g_1484)) == l_1574))
    { 
        uint16_t *l_1577[7];
        int32_t l_1590 = 1L;
        int32_t l_1592 = 0xBD78D544L;
        int32_t l_1597 = 0xF49896A1L;
        int32_t l_1598 = 0x0388A299L;
        int32_t l_1599 = 0xD4ED008EL;
        int32_t l_1600 = 2L;
        int32_t l_1601 = 0x9042ECF3L;
        int32_t l_1602 = 1L;
        int32_t l_1603 = 0x99663EC8L;
        int32_t l_1605 = 4L;
        int32_t l_1606[2];
        int i;
        for (i = 0; i < 7; i++)
            l_1577[i] = &g_34;
        for (i = 0; i < 2; i++)
            l_1606[i] = 0x1BBF71DEL;
        (***g_141) |= (&p_8 != (((l_1575[0][2] = (void*)0) == g_616) , l_1577[2]));
        for (g_83.f1 = 0; (g_83.f1 < 10); ++g_83.f1)
        { 
            int32_t *l_1580 = &g_465;
            int32_t *l_1581 = &g_681;
            int32_t *l_1582 = &g_14;
            int32_t *l_1583 = &g_14;
            int32_t *l_1584 = &g_1563;
            int32_t *l_1585 = &g_465;
            int32_t *l_1586 = &g_1331;
            int32_t *l_1587 = (void*)0;
            int32_t *l_1588 = &g_14;
            int32_t *l_1589[6] = {&g_110,&g_364,&g_364,&g_110,&g_364,&g_364};
            int64_t l_1591 = 0x9E4B6B42F031BA84LL;
            int16_t l_1607 = 0x8178L;
            int i;
            g_1608--;
            for (l_1568 = 0; l_1568 < 1; l_1568 += 1)
            {
                for (g_41.f0 = 0; g_41.f0 < 6; g_41.f0 += 1)
                {
                    g_372[l_1568][g_41.f0] = 0x849B8AAEL;
                }
            }
            for (g_807 = 0; (g_807 <= (-23)); --g_807)
            { 
                uint8_t l_1613 = 0x09L;
                (****g_1484) &= ((p_8 < l_1606[1]) && l_1613);
            }
        }
    }
    else
    { 
        int16_t l_1618 = 0L;
        uint64_t *l_1635 = (void*)0;
        int32_t l_1641 = (-10L);
        int32_t l_1642 = 0x9A1CB741L;
        int32_t l_1644 = 0x725332F3L;
        int32_t l_1645 = 2L;
        int32_t l_1646 = 0xBFF5DE29L;
        int32_t l_1647 = 0x0922B33EL;
        int32_t l_1648 = 1L;
        int32_t l_1649 = (-1L);
        int32_t l_1650 = (-10L);
        int32_t l_1651[5][5][2] = {{{0x99E189CEL,0L},{(-5L),0xC66C7679L},{1L,(-5L)},{0x4408245CL,(-8L)},{0x4408245CL,(-5L)}},{{1L,0xC66C7679L},{(-5L),0L},{0x99E189CEL,(-5L)},{0x0B27FA43L,(-1L)},{(-1L),1L}},{{(-9L),1L},{(-1L),(-1L)},{0x0B27FA43L,(-5L)},{0x99E189CEL,0L},{(-5L),0xC66C7679L}},{{1L,(-5L)},{0x4408245CL,(-8L)},{0x4408245CL,(-5L)},{1L,0xC66C7679L},{(-5L),0L}},{{0x99E189CEL,(-5L)},{0x0B27FA43L,(-1L)},{(-1L),1L},{(-9L),1L},{(-1L),(-1L)}}};
        uint32_t l_1654[7][5] = {{0x5E2FA49FL,0x46C12B4EL,0x3C71AFABL,1UL,0x3C71AFABL},{0x3C71AFABL,0x3C71AFABL,0x2642463FL,1UL,1UL},{0x46C12B4EL,0x5E2FA49FL,0x5E2FA49FL,0x46C12B4EL,0x3C71AFABL},{0x46C12B4EL,1UL,0x817E134DL,0x817E134DL,1UL},{0x3C71AFABL,0x5E2FA49FL,0x817E134DL,0x2642463FL,0x2642463FL},{0x5E2FA49FL,0x3C71AFABL,0x5E2FA49FL,0x817E134DL,0x2642463FL},{1UL,0x46C12B4EL,0x2642463FL,0x46C12B4EL,1UL}};
        int16_t l_1668 = 0xB7B1L;
        int64_t l_1672 = 0x6CD39240312AC8D9LL;
        union U1 l_1708[1] = {{0x42FC010DL}};
        int32_t ****l_1723[1][7][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint32_t l_1751 = 0xBF9FF55AL;
        uint8_t l_1836 = 0x78L;
        int16_t **l_1847 = (void*)0;
        struct S0 l_1865 = {0,255UL,1,56};
        int i, j, k;
        for (g_62 = 0; (g_62 > (-12)); --g_62)
        { 
            for (g_445 = (-15); (g_445 != (-2)); g_445 = safe_add_func_uint16_t_u_u(g_445, 1))
            { 
                (*p_7) ^= 0x845067F9L;
                return (*p_7);
            }
            if ((**g_142))
                break;
        }
        if (l_1618)
        { 
            struct S0 l_1619 = {4,253UL,13,43};
            int8_t l_1624 = 3L;
            uint16_t ****l_1640 = &g_1139;
            l_1619 = (*g_994);
            (**l_1574) = func_9(((safe_lshift_func_int8_t_s_s(0x55L, 6)) || (l_1619.f0 <= ((((safe_mul_func_int8_t_s_s(g_99[3], (l_1624 & (1UL != (safe_rshift_func_int8_t_s_u(((((safe_lshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_u((+(l_1641 = (safe_add_func_int32_t_s_s((((l_1635 = l_1634) == ((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((l_1640 != &g_1370), (***g_141))), l_1618)) , l_1634)) || (*g_97)), (**g_142))))), 15)) , 0x48A3C36CL) | (***l_1574)), 3)) == g_328) , (-8L)) > l_1618), 3)))))) || p_8) & p_8) | 0x05BB9D64FDAD668ALL))));
        }
        else
        { 
            int32_t *l_1643[4] = {&g_1331,&g_1331,&g_1331,&g_1331};
            int16_t l_1652[3][4][4] = {{{0x7B1DL,0x71C4L,0x71C4L,0x7B1DL},{0xA43DL,0x71C4L,0x3CEEL,0x7B1DL},{0x7B1DL,0x71C4L,0x71C4L,0x7B1DL},{0xA43DL,0x71C4L,0x3CEEL,0x7B1DL}},{{0x7B1DL,0x71C4L,0x71C4L,0x7B1DL},{0xA43DL,0x71C4L,0x3CEEL,0x7B1DL},{0x7B1DL,0x71C4L,0x71C4L,0x7B1DL},{0xA43DL,0x71C4L,0x3CEEL,0x7B1DL}},{{0x7B1DL,0x71C4L,0x71C4L,0x7B1DL},{0xA43DL,0x71C4L,0x3CEEL,0x7B1DL},{0x7B1DL,0x71C4L,0x71C4L,0x7B1DL},{0xA43DL,0x71C4L,0x3CEEL,0x7B1DL}}};
            int64_t *l_1665 = &g_366;
            uint16_t l_1673 = 0x7978L;
            uint64_t l_1698[3];
            uint16_t ****l_1713 = (void*)0;
            uint16_t ***** const l_1712[4] = {&l_1713,&l_1713,&l_1713,&l_1713};
            int32_t ** const *l_1725 = &g_142;
            int32_t ** const **l_1724 = &l_1725;
            int16_t **l_1738 = &g_1359;
            int32_t l_1740[3];
            uint32_t *l_1750 = &g_1199;
            uint8_t l_1752 = 0x01L;
            int64_t l_1785 = 0L;
            int32_t l_1839 = 0x2C6769E5L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1698[i] = 0x2275EA6FCE991094LL;
            for (i = 0; i < 3; i++)
                l_1740[i] = 0x96BDCF8DL;
            (*p_7) = (*p_7);
lbl_1788:
            --l_1654[0][2];
            for (g_414 = (-22); (g_414 == 2); g_414++)
            { 
                uint32_t *l_1661 = &g_1199;
                int32_t l_1667 = 0xF5F9A882L;
                int32_t l_1671[6] = {2L,2L,2L,2L,2L,2L};
                int8_t *l_1678[6][7] = {{&g_241,&g_1304,&g_602,&g_241,&g_241,&g_602,&g_933},{&g_602,&g_326[2][1],&g_310,&g_1402[0],&g_933,&l_1558,&g_933},{&g_602,&g_241,&g_241,&g_602,&g_933,&g_602,&g_241},{&g_933,&g_326[2][1],&g_602,&g_1402[0],&g_602,&g_326[2][1],&g_933},{&g_326[2][1],&g_241,&g_1304,&g_241,&g_326[2][1],&g_326[2][1],&g_241},{&l_1558,&g_326[2][1],&l_1558,&l_1558,&g_602,&g_1304,&g_933}};
                uint32_t l_1705 = 1UL;
                int32_t l_1714 = 0L;
                int16_t **l_1739 = (void*)0;
                int i, j;
            }
            if (((((((!(safe_add_func_uint16_t_u_u((g_416[1][0] <= ((***l_1574) > (safe_mul_func_int16_t_s_s((****l_1724), (((safe_div_func_int16_t_s_s((((((*l_1750) = (safe_sub_func_uint16_t_u_u(0xB5DAL, 0x1578L))) != (**g_96)) ^ (0x93L && p_8)) , (***g_1357)), (***l_1574))) ^ p_8) >= p_8))))), (***l_1574)))) == p_8) == 1UL) <= p_8) , l_1751) & p_8))
            { 
                (*g_97) = l_1752;
            }
            else
            { 
                int64_t l_1756 = 0L;
                int32_t l_1778 = 1L;
                int64_t l_1787[5];
                int8_t l_1801 = 0x32L;
                struct S0 *l_1841[7] = {&g_83,&g_83,&g_83,&g_83,&g_83,&g_83,&g_83};
                uint8_t *l_1851 = &g_1405;
                union U1 *l_1869[4][4][3] = {{{&l_1708[0],&g_41,&l_1708[0]},{(void*)0,&l_1708[0],(void*)0},{&l_1708[0],&g_41,&g_899[5]},{(void*)0,&l_1708[0],(void*)0}},{{&g_41,&l_1708[0],(void*)0},{&l_1708[0],&g_899[2],&g_899[5]},{&g_899[5],(void*)0,(void*)0},{&l_1708[0],&g_521,&l_1708[0]}},{{&g_899[5],&l_1708[0],(void*)0},{&l_1708[0],&l_1708[0],&l_1708[0]},{&g_41,&l_1708[0],&g_899[2]},{(void*)0,&l_1708[0],&l_1708[0]}},{{&l_1708[0],&g_521,&g_41},{(void*)0,(void*)0,&l_1708[0]},{&l_1708[0],&g_899[2],&g_899[2]},{&l_1708[0],&l_1708[0],&l_1708[0]}}};
                union U1 * const *l_1868 = &l_1869[2][2][1];
                union U1 * const **l_1867 = &l_1868;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1787[i] = 0xBADC50FA9EEA71B5LL;
                for (g_1403 = (-28); (g_1403 < (-16)); g_1403++)
                { 
                    int32_t ** const ***l_1755 = &l_1724;
                    const int32_t l_1757 = 0x88CA65FDL;
                    uint64_t *l_1776 = (void*)0;
                    uint64_t *l_1777[1][1][7] = {{{&g_959,&g_1151,&g_959,&g_959,&g_1151,&g_959,&g_959}}};
                    int i, j, k;
                    (**g_1484) = &p_7;
                    (*l_1755) = (g_465 , &l_1725);
                    l_1653 &= (l_1756 && ((l_1757 | ((**g_96) = ((safe_lshift_func_uint16_t_u_u((0x4122ED57L & (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((***l_1725), (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((***g_1357) = (safe_rshift_func_int8_t_s_u((p_8 , (((l_1778 ^= 0x890EEA77520564F8LL) > ((((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((p_8 | 252UL), l_1756)), p_8)), (***l_1574))) == l_1785) , g_444) >= l_1786)) && g_1329)), 3))), p_8)), 0x5EL)))), p_8)), (***l_1574))), 65535UL)), l_1787[3]))), 9)) , (*p_7)))) == 0x9BL));
                    if (g_1563)
                        goto lbl_1788;
                }
                (*g_994) = (**g_993);
                if ((safe_mod_func_uint32_t_u_u(((g_417 = 0UL) <= (safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((((*l_1665) &= (safe_mul_func_uint8_t_u_u((****l_1724), ((safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((l_1801 < (safe_mul_func_uint16_t_u_u((l_1756 >= (((+(**g_142)) < (safe_div_func_int32_t_s_s((((((l_1787[3] , g_32) == (***l_1574)) && 0xE3054C1CL) | 4294967295UL) < p_8), p_8))) | g_41.f0)), 0xD1FFL))), 3UL)), p_8)) | 0UL)))) < (****l_1724)) == (*p_7)), (****l_1724))), 0x35B86042L))), 0xD67E1F0FL)))
                { 
                    int8_t *l_1818 = &g_310;
                    int32_t l_1831[4][1][4];
                    uint8_t *l_1837 = &g_1405;
                    uint8_t l_1838 = 249UL;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_1831[i][j][k] = (-1L);
                        }
                    }
                    (**l_1725) = (*g_142);
                    (*g_97) &= (l_1807 == (void*)0);
                    l_1839 ^= (0x47L | ((safe_mul_func_int8_t_s_s((((safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((*l_1818) = 0L), (((*l_1837) = (safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((***l_1574) = (safe_lshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((--(*l_1569)), (safe_rshift_func_int8_t_s_s((g_599 |= (((l_1836 > 65535UL) < p_8) > (g_1304 & (l_1568 &= (***g_141))))), 2)))), 1L)) , 0xACL) ^ p_8), l_1778))), 0x29L)), 7)) | g_263[1]), 0x8CL))) && l_1831[1][0][0]))), 250UL)), 0x2EL)), l_1838)) , (***l_1574)) & p_8), 0L)) & p_8));
                }
                else
                { 
                    uint8_t l_1840 = 0x9AL;
                    return l_1840;
                }
                l_1841[2] = (*g_993);
                if ((p_8 == (4294967295UL | (safe_mul_func_int16_t_s_s((((*l_1750) = g_895[4]) | (4294967293UL > ((***l_1574) , 0xDFF54F82L))), (safe_lshift_func_int16_t_s_s((4294967295UL | g_523[0][0][5]), 13)))))))
                { 
                    int16_t ** const l_1846[4] = {&g_1359,&g_1359,&g_1359,&g_1359};
                    const uint8_t *l_1850 = &g_521.f3;
                    const uint8_t **l_1849 = &l_1850;
                    int32_t l_1860 = 0x93272887L;
                    int i;
                    l_1847 = l_1846[0];
                    if (l_1836)
                        goto lbl_1848;
lbl_1848:
                    (*g_142) = p_7;
                    if (l_1836)
                        goto lbl_1866;
                    (*p_7) = (((*l_1849) = (void*)0) == l_1851);
lbl_1866:
                    l_1860 = ((***g_141) = (safe_rshift_func_int16_t_s_u((((((safe_rshift_func_uint16_t_u_s(p_8, (safe_mod_func_uint8_t_u_u(p_8, ((*l_1851) = ((safe_lshift_func_uint8_t_u_s(((*l_1569) &= l_1860), ((safe_rshift_func_uint16_t_u_u(p_8, 13)) & (((g_92 < ((safe_lshift_func_int8_t_s_u(((l_1865 , (l_1778 = (***l_1574))) , l_1860), 7)) > l_1787[3])) || p_8) || p_8)))) | 0xE206L)))))) , 65531UL) , (***l_1574)) && 0L) != l_1756), l_1787[1])));
                    l_1860 |= (*p_7);
                }
                else
                { 
                    union U1 * const ***l_1870 = &l_1867;
                    (*l_1870) = l_1867;
                    return (****g_1484);
                }
            }
        }
        (***g_141) = (*p_7);
        (***g_141) = (***l_1574);
    }
    for (g_1272 = 0; (g_1272 <= 3); g_1272 += 1)
    { 
        int64_t l_1873 = 0x47C6B7D837BF3603LL;
        uint64_t *l_1887 = &g_521.f1;
        const union U1 l_1890 = {0x1D6E3EB0L};
        uint16_t *l_1893 = &g_34;
        int32_t l_1895 = 0x15295C6FL;
        l_1873 = (p_8 == (safe_rshift_func_uint8_t_u_s(((*l_1569) = 249UL), 6)));
        l_1653 = (safe_rshift_func_int16_t_s_u((((l_1876 , (p_8 | (((l_1873 && 0x8E8FC4A2L) , (l_1873 < p_8)) || p_8))) && 0L) == 0x6ECCEB999A2746DDLL), 10));
        l_1593 &= (!(g_1878[0] == ((***l_1574) , l_1880[2][2][1])));
        l_1895 = (safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_1873, ((((((((*l_1887)++) , (*g_1359)) , (l_1890 , l_1891)) != (void*)0) , ((*l_1893) = ((l_1890 , (-1L)) >= l_1892))) || l_1894[3]) | (***l_1574)))), (***l_1574))), l_1890.f0));
        for (g_828 = 0; (g_828 <= 3); g_828 += 1)
        { 
            return l_1873;
        }
    }
    return (***l_1574);
}



static int32_t * func_9(int8_t  p_10)
{ 
    uint64_t l_1021 = 0x09B53C2405B6C019LL;
    int32_t l_1022[5] = {0x5B2E5650L,0x5B2E5650L,0x5B2E5650L,0x5B2E5650L,0x5B2E5650L};
    uint8_t * const *l_1036 = &g_172[5][1];
    int32_t l_1076 = 0x3B04A3BFL;
    uint8_t ** const *l_1110[6];
    uint8_t ** const * const *l_1109 = &l_1110[0];
    union U1 *l_1158 = (void*)0;
    struct S0 *l_1176[3];
    int32_t l_1197 = 0xCD73C584L;
    int8_t l_1203 = (-7L);
    int8_t l_1206 = 0x07L;
    int32_t l_1211 = 0L;
    uint16_t *l_1225 = &g_683[2][2][1];
    int32_t l_1349 = 0L;
    uint16_t ****l_1368[6];
    int32_t l_1386 = 1L;
    uint16_t *l_1391 = (void*)0;
    int32_t *l_1395 = &g_465;
    int8_t l_1436 = 1L;
    int32_t l_1442 = 3L;
    int8_t l_1470[3];
    uint8_t l_1487[5][4][3] = {{{250UL,255UL,255UL},{250UL,250UL,248UL},{0UL,9UL,0x15L},{248UL,251UL,0x62L}},{{0UL,0x1AL,253UL},{251UL,248UL,0x62L},{255UL,250UL,0x15L},{1UL,0UL,248UL}},{{248UL,0x70L,255UL},{253UL,0x70L,253UL},{0xD1L,0UL,255UL},{0x35L,250UL,0UL}},{{249UL,248UL,9UL},{248UL,0x1AL,0xE0L},{249UL,251UL,253UL},{0x35L,9UL,0xD6L}},{{0xD1L,250UL,255UL},{253UL,255UL,255UL},{248UL,0xF9L,0xD6L},{1UL,0xDBL,253UL}}};
    int64_t *l_1500 = (void*)0;
    int16_t **l_1503 = (void*)0;
    struct S0 **l_1516 = &g_994;
    int32_t l_1535[5] = {1L,1L,1L,1L,1L};
    int32_t *l_1556 = &g_1272;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1110[i] = &g_171;
    for (i = 0; i < 3; i++)
        l_1176[i] = &g_83;
    for (i = 0; i < 6; i++)
        l_1368[i] = &g_1139;
    for (i = 0; i < 3; i++)
        l_1470[i] = (-9L);
    return l_1556;
}



static uint32_t  func_19(int8_t  p_20)
{ 
    int32_t *l_1014 = &g_681;
    l_1014 = (**g_141);
    for (g_92 = (-30); (g_92 <= 28); g_92 = safe_add_func_uint32_t_u_u(g_92, 3))
    { 
        union U1 *l_1019[3];
        union U1 **l_1018 = &l_1019[1];
        union U1 ***l_1017 = &l_1018;
        int32_t l_1020[3][2][5] = {{{0L,0x4561FE3CL,0L,0L,0x4561FE3CL},{0x4561FE3CL,0L,0L,0x4561FE3CL,0L}},{{0x4561FE3CL,0x4561FE3CL,0x784135EBL,0x4561FE3CL,0L},{0x784135EBL,0L,0x784135EBL,0x784135EBL,0L}},{{0L,0x784135EBL,0x784135EBL,0L,0x784135EBL},{0L,0L,0x4561FE3CL,0L,0L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1019[i] = &g_899[2];
        (*g_97) &= (l_1017 == &l_1018);
        return l_1020[1][1][3];
    }
    return p_20;
}



static int8_t  func_21(int32_t ** const  p_22, int8_t  p_23)
{ 
    int32_t l_977 = 0x9A570092L;
    uint64_t *l_978 = &g_899[2].f2;
    uint64_t *l_979 = &g_521.f2;
    uint64_t *l_980 = (void*)0;
    uint64_t *l_981 = &g_899[2].f2;
    uint64_t *l_982 = &g_446;
    int32_t l_983 = (-1L);
    uint8_t ***l_984 = &g_171;
    int16_t **l_988[7];
    union U1 l_1006 = {0x39381F7CL};
    uint16_t *l_1007 = &g_417;
    int32_t * const **l_1010 = (void*)0;
    int32_t *l_1011[4][5][2] = {{{&g_110,&g_465},{(void*)0,(void*)0},{(void*)0,&g_110},{(void*)0,&g_364},{&g_364,&g_364}},{{&g_364,&g_110},{&g_682,(void*)0},{&g_465,(void*)0},{(void*)0,(void*)0},{&g_465,(void*)0}},{{&g_682,&g_110},{&g_364,&g_364},{&g_364,&g_364},{(void*)0,&g_110},{(void*)0,(void*)0}},{{(void*)0,&g_465},{&g_110,(void*)0},{&g_682,&g_110},{&g_682,(void*)0},{&g_110,&g_465}}};
    uint8_t l_1012[6] = {0x75L,0x75L,0x29L,0x75L,0x75L,0x29L};
    struct S0 l_1013 = {2,0x76L,14,63};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_988[i] = (void*)0;
    (**p_22) ^= (((*l_982) |= l_977) & (((l_983 |= 2UL) , l_984) != (**g_550)));
    for (g_608 = 0; (g_608 >= 15); g_608 = safe_add_func_uint32_t_u_u(g_608, 3))
    { 
        int16_t ***l_987 = (void*)0;
        l_988[3] = (void*)0;
    }
    l_1012[5] = ((**p_22) = (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((void*)0 == g_993), (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((((+((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s(((l_1006 , g_325) && ((--(*l_1007)) >= ((((void*)0 != l_980) , &g_96) != l_1010))), p_23)), 4)), 1L)) < 1UL)) , g_899[2].f0) , p_23), p_23)) == (-1L)), l_977)))) == g_310), 0xBD0DL)));
    (**g_993) = l_1013;
    return p_23;
}



static int32_t ** const  func_24(int8_t  p_25, int32_t ** p_26, int16_t  p_27, uint32_t  p_28)
{ 
    uint16_t *l_33 = &g_34;
    uint8_t l_38[6][1][1];
    int8_t *l_56 = &g_57;
    int32_t *l_459 = (void*)0;
    int32_t **l_458 = &l_459;
    int32_t *l_462 = &g_364;
    uint64_t *l_463 = &g_41.f2;
    int32_t *l_464 = &g_465;
    int16_t l_471 = 0L;
    uint8_t *l_474 = &g_148;
    int16_t *l_475 = (void*)0;
    int16_t *l_476[3];
    int32_t l_477 = 5L;
    int32_t * const **l_481[4][2] = {{&g_96,&g_96},{&g_96,&g_96},{&g_96,&g_96},{&g_96,&g_96}};
    int64_t l_488 = 0xC9F1E5D0C2D5766ELL;
    int32_t *l_513 = &g_465;
    int32_t *l_514[1];
    int16_t l_600 = (-9L);
    union U1 *l_621 = (void*)0;
    union U1 **l_649 = &l_621;
    union U1 ***l_648 = &l_649;
    union U1 ***l_650 = &l_649;
    struct S0 **l_657 = (void*)0;
    struct S0 l_667 = {4,0x13L,15,35};
    int32_t l_750 = (-1L);
    uint8_t **** const l_805 = (void*)0;
    int8_t l_820 = 0xA7L;
    int8_t l_837 = 0x71L;
    uint16_t l_858[3][7] = {{1UL,0x3A32L,1UL,1UL,0x3A32L,1UL,1UL},{65535UL,65535UL,1UL,65535UL,65535UL,1UL,65535UL},{0x3A32L,1UL,1UL,0x3A32L,1UL,1UL,0x3A32L}};
    int8_t l_877 = 0xDAL;
    uint64_t l_880 = 1UL;
    int64_t l_894[1][3];
    int64_t l_914 = (-8L);
    const uint64_t *l_970 = &g_41.f1;
    const uint64_t **l_969 = &l_970;
    const uint64_t ***l_968 = &l_969;
    const uint64_t ****l_967[5][4][6] = {{{&l_968,(void*)0,&l_968,&l_968,&l_968,&l_968},{&l_968,&l_968,(void*)0,&l_968,&l_968,&l_968},{&l_968,&l_968,&l_968,&l_968,&l_968,(void*)0},{&l_968,&l_968,&l_968,&l_968,&l_968,&l_968}},{{(void*)0,&l_968,(void*)0,&l_968,&l_968,&l_968},{&l_968,&l_968,&l_968,(void*)0,&l_968,&l_968},{&l_968,(void*)0,(void*)0,(void*)0,&l_968,&l_968},{&l_968,&l_968,&l_968,&l_968,&l_968,&l_968}},{{(void*)0,(void*)0,&l_968,&l_968,&l_968,&l_968},{&l_968,&l_968,&l_968,&l_968,&l_968,(void*)0},{&l_968,(void*)0,&l_968,&l_968,&l_968,&l_968},{&l_968,&l_968,&l_968,&l_968,&l_968,&l_968}},{{&l_968,(void*)0,&l_968,&l_968,&l_968,&l_968},{&l_968,&l_968,&l_968,&l_968,&l_968,&l_968},{&l_968,&l_968,&l_968,(void*)0,&l_968,(void*)0},{&l_968,&l_968,&l_968,&l_968,&l_968,&l_968}},{{&l_968,&l_968,&l_968,(void*)0,&l_968,&l_968},{&l_968,&l_968,&l_968,(void*)0,&l_968,&l_968},{(void*)0,&l_968,&l_968,&l_968,(void*)0,&l_968},{(void*)0,&l_968,&l_968,&l_968,&l_968,&l_968}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_38[i][j][k] = 255UL;
        }
    }
    for (i = 0; i < 3; i++)
        l_476[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_514[i] = &g_62;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_894[i][j] = 0xAEA13B1FB0B6906BLL;
    }
    return (*g_141);
}



static int32_t  func_35(uint64_t  p_36, int32_t ** p_37)
{ 
    int32_t l_460 = (-1L);
    int32_t *l_461 = &g_110;
    (*l_461) = l_460;
    return p_36;
}



static int32_t  func_46(int64_t  p_47, int32_t  p_48, int32_t  p_49)
{ 
    int32_t l_60 = 0x30BEC3A4L;
    int32_t l_111 = 0xDFF1806AL;
    int32_t **l_131 = &g_97;
    int32_t ***l_130 = &l_131;
    uint8_t *l_144 = &g_70;
    uint8_t **l_143 = &l_144;
    int32_t l_147 = 0x2CB814C8L;
    union U1 l_165[5][5] = {{{1L},{1L},{1L},{1L},{1L}},{{0x996D64ECL},{0x996D64ECL},{0x996D64ECL},{0x996D64ECL},{0x996D64ECL}},{{1L},{1L},{1L},{1L},{1L}},{{0x996D64ECL},{0x996D64ECL},{0x996D64ECL},{0x996D64ECL},{0x996D64ECL}},{{1L},{1L},{1L},{1L},{1L}}};
    struct S0 l_215 = {0,0x46L,4,38};
    uint64_t *l_257[1][7][2] = {{{&l_165[2][3].f2,&l_165[2][3].f2},{&l_165[2][3].f2,&l_165[2][3].f2},{&l_165[2][3].f2,&l_165[2][3].f2},{&l_165[2][3].f2,&l_165[2][3].f2},{&l_165[2][3].f2,&l_165[2][3].f2},{&l_165[2][3].f2,&l_165[2][3].f2},{&l_165[2][3].f2,&l_165[2][3].f2}}};
    int32_t l_262 = 0L;
    int8_t l_268 = 0L;
    int8_t *l_269[2][4][1];
    int32_t *l_290 = &l_262;
    int32_t l_367 = 5L;
    int32_t l_369 = 0L;
    int32_t l_370 = (-10L);
    int16_t l_371 = 0x134EL;
    uint64_t *l_382 = &g_32;
    uint8_t ****l_456 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_269[i][j][k] = (void*)0;
        }
    }
    for (p_49 = 0; (p_49 < 18); p_49 = safe_add_func_int64_t_s_s(p_49, 3))
    { 
        int32_t *l_61 = &g_62;
        struct S0 l_84 = {2,0x70L,2,61};
        const uint8_t *l_120 = &g_41.f3;
        int32_t **l_123[6] = {&g_97,&l_61,&g_97,&g_97,&l_61,&g_97};
        int32_t **l_124 = (void*)0;
        int32_t **l_125[4];
        int32_t **l_126 = &g_97;
        uint8_t * const ***l_173 = (void*)0;
        uint32_t *l_192 = &l_165[2][3].f4;
        union U1 l_197 = {0L};
        uint32_t l_236 = 6UL;
        uint8_t l_238[7][6] = {{7UL,0x60L,0xDDL,0UL,0x22L,2UL},{0xDDL,251UL,0x24L,0x92L,253UL,0x24L},{0xDDL,0x22L,0x92L,0UL,0xC7L,0UL},{7UL,0x22L,7UL,0x24L,253UL,0x92L},{2UL,251UL,7UL,2UL,0x22L,0UL},{0UL,0x60L,0x92L,2UL,0x6FL,0x24L},{2UL,0x6FL,0x24L,0x24L,0x6FL,2UL}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_125[i] = &l_61;
        (*l_61) ^= l_60;
        if (((*l_61) ^= 0x0D28CDD5L))
        { 
            uint8_t *l_69 = &g_70;
            int32_t l_77 = (-1L);
            uint64_t *l_80[1];
            int32_t *l_81 = &g_82;
            int i;
            for (i = 0; i < 1; i++)
                l_80[i] = &g_32;
            (*l_81) ^= (safe_lshift_func_uint16_t_u_s((((safe_div_func_uint16_t_u_u(g_41.f4, (safe_add_func_uint8_t_u_u(g_41.f3, ((*l_69) |= g_32))))) || (l_60 = ((safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_77, p_48)), (safe_mul_func_int8_t_s_s((*l_61), g_62)))) != p_48), g_41.f4)) != 0L))) != 1L), (*l_61)));
            if (g_82)
                continue;
            l_84 = g_83;
        }
        else
        { 
            int32_t *l_85 = &g_62;
            int32_t l_90 = 0x4B0596E7L;
            int16_t *l_91 = &g_92;
            int16_t l_93[5][1][4] = {{{(-4L),0xA3AAL,0L,0x5580L}},{{(-5L),0xC31BL,0x9540L,0xC31BL}},{{0xC31BL,0L,(-4L),0xC31BL}},{{(-4L),0xC31BL,0x5580L,0x5580L}},{{0xA3AAL,0xA3AAL,0x9540L,(-5L)}}};
            int i, j, k;
            l_85 = l_85;
            if ((safe_div_func_uint32_t_u_u(0xC497A14FL, (((safe_mod_func_uint64_t_u_u(((p_48 , (((void*)0 == &g_70) | ((*l_91) |= (l_90 , (*l_85))))) < (0x17BB4FD8ED9CDEFDLL > 0xA36ED293A85175EFLL)), (*l_85))) | g_70) ^ p_49))))
            { 
                uint64_t l_109 = 0x516CEA6E34B743E6LL;
                uint8_t * const l_116 = &g_83.f1;
                union U1 l_122 = {0L};
                for (g_62 = 0; (g_62 <= 0); g_62 += 1)
                { 
                    uint16_t *l_98[1];
                    int32_t l_100 = 0x64C941E8L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_98[i] = &g_99[1];
                    l_111 = (safe_mod_func_uint16_t_u_u((((((l_100 = ((void*)0 == g_96)) , ((*l_61) & (((p_47 , (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((((((safe_rshift_func_int16_t_s_s(0xE529L, (safe_lshift_func_uint8_t_u_s(((l_60 = (*g_97)) && l_60), l_109)))) >= g_70) || g_110) && 1L) ^ g_83.f1) && (-9L)) < p_48) < 0x0DL), p_48)), (-3L)))) ^ p_47) > g_99[1]))) >= p_47) , p_47) && g_41.f3), 0x31FBL));
                    return (*g_97);
                }
                for (g_32 = 0; (g_32 <= 3); g_32 += 1)
                { 
                    uint8_t *l_117 = &g_70;
                    int32_t l_121 = 1L;
                    int i;
                    if (g_99[g_32])
                        break;
                    l_121 = ((&g_99[g_32] == &g_99[g_32]) && (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_116 == l_117), ((((((void*)0 == &l_109) | ((safe_sub_func_uint8_t_u_u((l_120 != l_117), l_109)) && g_99[g_32])) && p_48) & p_49) && 0xD20EL))), g_41.f0)));
                    (*l_61) |= (l_122 , 1L);
                }
            }
            else
            { 
                for (g_82 = 0; (g_82 <= 0); g_82 += 1)
                { 
                    int i;
                    return g_99[g_82];
                }
                for (l_111 = 0; (l_111 <= 3); l_111 += 1)
                { 
                    int i;
                    if (g_99[l_111])
                        break;
                    (*g_97) = 0x7E908363L;
                }
            }
        }
        (*l_126) = (*g_96);
        for (g_110 = 0; (g_110 > (-14)); g_110--)
        { 
            int32_t ***l_129 = &l_123[0];
            int16_t *l_136 = &g_92;
            int8_t *l_137 = (void*)0;
            uint16_t *l_138 = &g_99[2];
            l_130 = l_129;
        }
    }
lbl_455:
    g_263[1] &= (((g_57 ^ (((safe_lshift_func_int16_t_s_u((p_49 || (((((void*)0 != &l_143) ^ (g_32 = g_41.f4)) > (safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(6UL, (((p_47 & g_184[3][0]) && p_48) | g_241))) <= 0x68L), (**l_131)))) , (***g_141))), p_49)) != p_49) <= l_262)) == p_47) != g_62);
    if ((safe_div_func_int64_t_s_s(((void*)0 == l_257[0][5][1]), (safe_lshift_func_int16_t_s_s((0x84L >= ((g_57 = l_268) != (**l_131))), 11)))))
    { 
        int32_t l_270 = 0xDCA3CA68L;
        struct S0 l_286 = {2,255UL,11,42};
        int32_t l_308 = (-1L);
        int32_t l_309[6] = {1L,1L,1L,1L,1L,1L};
        int32_t *l_323 = &l_262;
        int32_t *l_324[3][2] = {{&l_111,&l_309[2]},{&l_111,&l_111},{&l_309[2],&l_111}};
        uint64_t ** const **l_339[3][5] = {{&g_337,(void*)0,&g_337,&g_337,&g_337},{&g_337,&g_337,&g_337,&g_337,&g_337},{&g_337,&g_337,(void*)0,&g_337,(void*)0}};
        int i, j;
        if (l_270)
        { 
            uint16_t *l_274 = &g_99[1];
            uint16_t **l_273 = &l_274;
            int32_t l_289 = 0x2D7BAE0BL;
            for (g_32 = 0; (g_32 != 41); g_32++)
            { 
                uint64_t **l_282 = (void*)0;
                uint64_t **l_283 = (void*)0;
                uint64_t **l_284 = &l_257[0][5][1];
                struct S0 *l_285[1][7];
                uint32_t *l_287[4];
                int32_t l_288[7] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_285[i][j] = (void*)0;
                }
                for (i = 0; i < 4; i++)
                    l_287[i] = &l_165[2][3].f4;
                for (g_241 = 0; (g_241 <= 0); g_241 += 1)
                { 
                    uint16_t ***l_275 = &l_273;
                    (*l_275) = l_273;
                    if ((**g_142))
                        continue;
                }
                (**l_131) = (safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_48, ((((safe_add_func_uint32_t_u_u((0UL && ((((*l_284) = &g_32) == ((l_215 = l_215) , ((g_83.f0 = ((l_286 , g_184[6][1]) != p_48)) , (void*)0))) || 0x47F5L)), l_288[6])) , g_41.f4) >= g_110) & p_48))), l_289));
                (**g_141) = l_290;
            }
        }
        else
        { 
            uint64_t l_295[5] = {1UL,1UL,1UL,1UL,1UL};
            int32_t l_296 = 1L;
            int32_t *l_301 = (void*)0;
            int32_t *l_302 = &l_296;
            int32_t *l_303 = (void*)0;
            int32_t *l_304 = &l_147;
            int32_t *l_305 = &g_62;
            int32_t *l_306 = &g_110;
            int32_t *l_307[1][1];
            int32_t * const **l_320 = &g_96;
            int64_t *l_322 = &g_263[3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_307[i][j] = &g_110;
            }
            (*l_290) &= (((((((0xFAA92D2BL || ((safe_mul_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(((((l_295[0] = 0xFBBCL) ^ l_296) , 0x2A883877L) , (safe_add_func_int32_t_s_s((p_49 > (g_148 || (safe_rshift_func_uint8_t_u_u(p_49, 2)))), (**l_131)))), p_49)) == l_296), p_48)) ^ (**g_142))) > (**g_96)) >= 247UL) > 252UL) , l_295[0]) & p_49) == p_48);
            g_311++;
            (**l_131) ^= ((*l_290) = (((p_48 && (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(l_286.f3, ((((*l_320) = &l_305) == (void*)0) || (*l_302)))), 5)), ((((g_83 , ((*l_322) = ((!(((*l_290) == (-9L)) != p_48)) | 0xF947L))) >= 0x6C251B4D85EDA7B5LL) | g_70) <= (-1L))))) < 5UL) ^ p_48));
            (*l_306) |= ((*l_290) != (l_309[2] != (*l_305)));
        }
        ++g_328;
        g_337 = (((+((g_41 , (p_49 != g_62)) && p_48)) | ((safe_sub_func_int8_t_s_s(((void*)0 != &g_83), (g_57 = (((((((safe_mod_func_uint64_t_u_u(((**l_131) | g_336), (*l_323))) ^ p_48) ^ p_47) == 0x8CL) < g_184[3][0]) != (-7L)) , g_70)))) , 0x0723L)) , g_337);
        (*l_323) = 0L;
    }
    else
    { 
        struct S0 *l_340 = &l_215;
        int32_t l_345 = 0xB767AB59L;
        int8_t l_354 = 0L;
        int32_t l_360 = 0x50418DC9L;
        int32_t l_363 = 0xE88C7C0DL;
        int32_t l_368 = 0x85BC1C06L;
        int32_t *l_420 = &l_370;
        uint8_t l_434 = 1UL;
        uint64_t * const l_435 = &g_32;
        uint8_t *****l_457 = &l_456;
        (*l_340) = g_83;
lbl_452:
        g_341 = (void*)0;
        for (l_215.f1 = 0; (l_215.f1 >= 49); ++l_215.f1)
        { 
            uint64_t l_346[5][7][2] = {{{18446744073709551608UL,0x6CD7EB502D3D8FC9LL},{1UL,0x2EF95A972FD26389LL},{0x459777C8B334DFD4LL,18446744073709551608UL},{0xBC106F210D6E8F57LL,0x459777C8B334DFD4LL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551606UL,0UL},{0xBC106F210D6E8F57LL,0xC976F2A4D9E29D05LL}},{{0UL,0x2EF95A972FD26389LL},{0x425BB4C828D8C5E5LL,18446744073709551613UL},{18446744073709551608UL,0x1F560E41B89A63BALL},{1UL,1UL},{0xC976F2A4D9E29D05LL,18446744073709551613UL},{1UL,18446744073709551607UL},{0x6AE12270CDB3F5A9LL,0x1F560E41B89A63BALL}},{{0UL,0x6AE12270CDB3F5A9LL},{0x6CD7EB502D3D8FC9LL,18446744073709551606UL},{0x6CD7EB502D3D8FC9LL,0x6AE12270CDB3F5A9LL},{0UL,0x1F560E41B89A63BALL},{0x6AE12270CDB3F5A9LL,18446744073709551607UL},{18446744073709551606UL,0xC976F2A4D9E29D05LL},{0xECA9D412B1CDF8BALL,0xE43F0D7356911E72LL}},{{0xE43F0D7356911E72LL,0UL},{0x1F560E41B89A63BALL,0xC976F2A4D9E29D05LL},{0xF649D345928B8DCBLL,0x4982D3B8498343F8LL},{0x6AE12270CDB3F5A9LL,0xECA9D412B1CDF8BALL},{0x425BB4C828D8C5E5LL,0x6AE12270CDB3F5A9LL},{0x8696A82E25330AEALL,5UL},{0x6CD7EB502D3D8FC9LL,18446744073709551615UL}},{{0x425BB4C828D8C5E5LL,0x1F560E41B89A63BALL},{18446744073709551615UL,0x4982D3B8498343F8LL},{18446744073709551606UL,0UL},{0x1F560E41B89A63BALL,0xE43F0D7356911E72LL},{0UL,0xE43F0D7356911E72LL},{0x1F560E41B89A63BALL,0UL},{18446744073709551606UL,0x4982D3B8498343F8LL}}};
            uint64_t ** const *l_352 = &g_338;
            int16_t *l_353 = &g_92;
            int32_t l_361 = 0x5F8135FBL;
            int32_t l_362 = (-1L);
            uint8_t **** const l_405 = &g_168;
            int8_t *l_406 = &g_241;
            int8_t l_427[7];
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_427[i] = 0L;
            if ((!(g_82 == ((((l_346[2][2][0] = l_345) == (safe_unary_minus_func_int64_t_s((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(0xCE29L, (((((g_83 , ((g_4 <= (0x98L == (&g_338 == l_352))) , g_263[3])) , l_353) == l_353) || 0x59F38E30L) == p_49))) >= 5L), 3))))) & 0L) || l_354))))
            { 
                uint8_t l_355 = 253UL;
                int32_t *l_358 = &l_60;
                int32_t *l_359[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_359[i] = &l_60;
                --l_355;
                ++g_372[0][1];
                if ((***g_141))
                    break;
            }
            else
            { 
                if ((***g_141))
                { 
                    int32_t l_377[7][2][5] = {{{0x256FF441L,0x2E70326CL,0x2E70326CL,0x256FF441L,0x4ED03645L},{0x256FF441L,(-1L),(-1L),(-1L),(-1L)}},{{0x4ED03645L,0x2E70326CL,(-1L),4L,4L},{0x2E70326CL,0x4ED03645L,0x2E70326CL,(-1L),4L}},{{(-1L),0x256FF441L,4L,0x256FF441L,(-1L)},{0x2E70326CL,0x256FF441L,0x4ED03645L,(-1L),0x4ED03645L}},{{0x4ED03645L,0x4ED03645L,4L,(-1L),1L},{0x256FF441L,0x2E70326CL,0x2E70326CL,0x256FF441L,0x4ED03645L}},{{0x256FF441L,(-1L),(-1L),(-1L),(-1L)},{0x4ED03645L,0x2E70326CL,(-1L),4L,4L}},{{0x2E70326CL,0x4ED03645L,0x2E70326CL,(-1L),4L},{(-1L),0x256FF441L,4L,0x256FF441L,(-1L)}},{{0x2E70326CL,0x256FF441L,0x4ED03645L,(-1L),0x4ED03645L},{0x4ED03645L,0x4ED03645L,4L,(-1L),1L}}};
                    int i, j, k;
                    (*l_290) |= (safe_mul_func_int8_t_s_s((((((((g_325 , ((l_377[6][0][1] , (safe_lshift_func_uint8_t_u_u(((0x9BL ^ 0L) <= (safe_add_func_uint32_t_u_u((l_346[2][1][1] && 9L), (g_41.f3 ^ p_49)))), 0))) , g_184[3][0])) , l_363) , (**l_131)) != p_48) | l_362) , (void*)0) != l_382), 0x0DL));
                }
                else
                { 
                    return (**g_142);
                }
                if (p_48)
                    continue;
            }
            if ((***g_141))
            { 
                int32_t l_394 = (-1L);
                uint8_t *l_404 = &g_148;
                uint8_t ** const l_403 = &l_404;
                uint8_t ** const *l_402 = &l_403;
                uint8_t ** const **l_401 = &l_402;
                uint8_t ** const ***l_400 = &l_401;
                int64_t *l_407 = &g_263[6];
                int64_t *l_408 = &g_409;
                int32_t l_412 = 0x39AEE4F8L;
                const int32_t *l_430 = &l_362;
                const int32_t **l_429 = &l_430;
                const int32_t ***l_428[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_428[i] = &l_429;
                if ((p_48 = ((**g_96) = ((((((safe_div_func_uint32_t_u_u(4294967287UL, (safe_sub_func_int64_t_s_s(((*l_408) &= ((~((~(~(safe_div_func_int16_t_s_s((((((g_366 = ((*l_407) = (&l_354 == (((safe_add_func_uint16_t_u_u(l_394, ((((~(g_311 = ((*l_290) , (((safe_sub_func_uint64_t_u_u((((**l_403) = ((safe_mod_func_uint64_t_u_u(((0UL != ((((*l_400) = (void*)0) == l_405) || (-1L))) >= 0x13F7L), p_49)) && 65528UL)) , l_394), 0x599DA618B0B13288LL)) != p_49) & p_49)))) == p_48) , p_49) >= 9UL))) & 0x44L) , l_406)))) > 0xAC0DA609329CD438LL) != p_48) , l_394) == l_394), 65535UL)))) <= g_336)) && 255UL)), p_48)))) , p_49) <= l_361) | l_394) < 18446744073709551615UL) != g_184[1][1]))))
                { 
                    int32_t *l_410 = &l_147;
                    int32_t *l_411[2][3] = {{&l_363,&l_363,&l_363},{&l_361,&l_361,&l_361}};
                    int i, j;
                    (**g_141) = (**g_141);
                    --g_417;
                    l_420 = (**g_141);
                    return (**g_142);
                }
                else
                { 
                    int32_t ***l_431 = &l_131;
                    (**l_131) = ((((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(l_361, 4)) , g_83.f0), g_326[2][2])) < (((safe_mod_func_int16_t_s_s(l_427[1], ((l_428[0] == l_431) , (safe_mul_func_int8_t_s_s((l_434 < p_49), (-1L)))))) , l_435) == (void*)0)) , (*l_420)) , (**l_131));
                }
                (**l_131) = (safe_rshift_func_uint8_t_u_u(1UL, 2));
                for (g_311 = 0; (g_311 <= 1); g_311 += 1)
                { 
                    int32_t *l_438 = &l_360;
                    int32_t *l_439 = &l_345;
                    int32_t *l_440 = &l_147;
                    int32_t l_441 = 0xBCAA90B5L;
                    int32_t *l_442 = &g_62;
                    int32_t *l_443[3][3] = {{&l_60,(void*)0,&l_60},{&l_345,&l_345,&l_345},{&l_60,(void*)0,&l_60}};
                    int8_t l_451 = 0x50L;
                    int i, j;
                    (***g_141) = (l_408 != l_435);
                    --g_446;
                    (*l_442) |= ((g_99[(g_311 + 2)] ^ p_47) , (safe_lshift_func_uint8_t_u_u(l_451, (*l_420))));
                    if (l_394)
                        goto lbl_452;
                    (**l_131) = 0x09B52407L;
                }
            }
            else
            { 
                uint64_t l_454 = 0UL;
                if ((**l_131))
                { 
                    struct S0 *l_453 = &g_83;
                    (*l_420) &= (***g_141);
                    (*l_453) = g_83;
                }
                else
                { 
                    return l_454;
                }
            }
            if ((**g_96))
                break;
            if (g_32)
                goto lbl_455;
        }
        (*l_457) = l_456;
        (*l_340) = g_83;
    }
    return p_48;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f3, "g_41.f3", print_hash_value);
    transparent_crc(g_41.f4, "g_41.f4", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_99[i], "g_99[i]", print_hash_value);

    }
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_184[i][j], "g_184[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_241, "g_241", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_263[i], "g_263[i]", print_hash_value);

    }
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_326[i][j], "g_326[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_327[i][j], "g_327[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_372[i][j], "g_372[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_416[i][j], "g_416[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_489[i], "g_489[i]", print_hash_value);

    }
    transparent_crc(g_521.f0, "g_521.f0", print_hash_value);
    transparent_crc(g_521.f3, "g_521.f3", print_hash_value);
    transparent_crc(g_521.f4, "g_521.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_523[i][j][k], "g_523[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_526[i][j][k], "g_526[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_546, "g_546", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_683[i][j][k], "g_683[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_865, "g_865", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_895[i], "g_895[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_899[i].f0, "g_899[i].f0", print_hash_value);
        transparent_crc(g_899[i].f3, "g_899[i].f3", print_hash_value);
        transparent_crc(g_899[i].f4, "g_899[i].f4", print_hash_value);

    }
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_956, "g_956", print_hash_value);
    transparent_crc(g_959, "g_959", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_976[i], "g_976[i]", print_hash_value);

    }
    transparent_crc(g_1150, "g_1150", print_hash_value);
    transparent_crc(g_1151, "g_1151", print_hash_value);
    transparent_crc(g_1199, "g_1199", print_hash_value);
    transparent_crc(g_1207, "g_1207", print_hash_value);
    transparent_crc(g_1266, "g_1266", print_hash_value);
    transparent_crc(g_1272, "g_1272", print_hash_value);
    transparent_crc(g_1304, "g_1304", print_hash_value);
    transparent_crc(g_1329, "g_1329", print_hash_value);
    transparent_crc(g_1331, "g_1331", print_hash_value);
    transparent_crc(g_1332, "g_1332", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1402[i], "g_1402[i]", print_hash_value);

    }
    transparent_crc(g_1403, "g_1403", print_hash_value);
    transparent_crc(g_1404, "g_1404", print_hash_value);
    transparent_crc(g_1405, "g_1405", print_hash_value);
    transparent_crc(g_1460, "g_1460", print_hash_value);
    transparent_crc(g_1463, "g_1463", print_hash_value);
    transparent_crc(g_1563, "g_1563", print_hash_value);
    transparent_crc(g_1595, "g_1595", print_hash_value);
    transparent_crc(g_1596, "g_1596", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1604[i], "g_1604[i]", print_hash_value);

    }
    transparent_crc(g_1608, "g_1608", print_hash_value);
    transparent_crc(g_1922.f0, "g_1922.f0", print_hash_value);
    transparent_crc(g_1922.f3, "g_1922.f3", print_hash_value);
    transparent_crc(g_1922.f4, "g_1922.f4", print_hash_value);
    transparent_crc(g_2147, "g_2147", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
