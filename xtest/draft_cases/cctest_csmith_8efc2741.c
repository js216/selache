// SPDX-License-Identifier: MIT
// cctest_csmith_8efc2741.c --- cctest case csmith_8efc2741 (csmith seed 2398889793)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x45c37fb5 */

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

// Options:   -s 2398889793 -o /tmp/csmith_gen_xljy_tud/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   signed f1 : 20;
   const uint32_t  f2;
   int64_t  f3;
   unsigned f4 : 1;
   unsigned f5 : 22;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   unsigned f1 : 26;
   int8_t  f2;
};

union U2 {
   int8_t  f0;
   uint16_t  f1;
   const int64_t  f2;
   uint32_t  f3;
   const uint16_t  f4;
};

union U3 {
   const int8_t * const  f0;
   int8_t  f1;
   unsigned f2 : 3;
};

union U4 {
   uint16_t  f0;
   int8_t * f1;
   const uint16_t  f2;
};

union U5 {
   int8_t  f0;
   uint64_t  f1;
};


static int32_t g_2 = 0xA062B000L;
static uint8_t g_19 = 0x37L;
static uint8_t *g_18 = &g_19;
static int32_t g_21[6][2] = {{0x4BB323FAL,0xE055A24BL},{0xE055A24BL,0x4BB323FAL},{0xE055A24BL,0xE055A24BL},{0x4BB323FAL,0xE055A24BL},{0xE055A24BL,0x4BB323FAL},{0xE055A24BL,0xE055A24BL}};
static int32_t g_34[2] = {0x2CE33A90L,0x2CE33A90L};
static uint8_t g_66 = 0x52L;
static uint32_t g_74 = 0xEEA102A8L;
static uint16_t g_81 = 1UL;
static uint32_t g_106 = 1UL;
static uint64_t g_111 = 18446744073709551615UL;
static uint64_t g_126 = 0xE35B4FB637DDF4F0LL;
static int64_t g_156 = 0xEE10C3079E446C72LL;
static uint32_t g_157 = 0x53DA9491L;
static int32_t g_162 = 0x001A3C86L;
static int32_t *g_161 = &g_162;
static union U4 g_166[4][1] = {{{0UL}},{{65535UL}},{{0UL}},{{65535UL}}};
static int16_t g_168 = (-8L);
static int8_t g_170 = 0xE2L;
static int32_t g_173 = (-1L);
static uint32_t g_176 = 4UL;
static union U2 g_180[4] = {{0xB5L},{0xB5L},{0xB5L},{0xB5L}};
static uint8_t g_216 = 0x10L;
static union U4 *g_220 = &g_166[2][0];
static union U4 **g_219 = &g_220;
static union U1 g_222 = {0xE982C83CL};
static union U1 *g_221 = &g_222;
static int16_t g_228 = 7L;
static int64_t g_230 = 0xC8013064C4D074B3LL;
static uint8_t g_231[5] = {0x50L,0x50L,0x50L,0x50L,0x50L};
static union U2 *g_238 = &g_180[3];
static union U2 **g_237 = &g_238;
static uint32_t g_243 = 0x3806CF38L;
static uint32_t * const *g_246 = (void*)0;
static uint8_t **g_256 = &g_18;
static uint8_t ***g_255[5][6][5] = {{{&g_256,(void*)0,&g_256,&g_256,(void*)0},{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,(void*)0,&g_256,(void*)0},{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,(void*)0}},{{&g_256,&g_256,(void*)0,&g_256,(void*)0},{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,(void*)0,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,(void*)0},{(void*)0,(void*)0,&g_256,&g_256,&g_256}},{{&g_256,&g_256,&g_256,(void*)0,(void*)0},{&g_256,&g_256,&g_256,(void*)0,&g_256},{&g_256,&g_256,(void*)0,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256}},{{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,(void*)0,&g_256,(void*)0,&g_256},{&g_256,&g_256,&g_256,(void*)0,&g_256},{&g_256,(void*)0,(void*)0,&g_256,(void*)0},{&g_256,&g_256,&g_256,&g_256,&g_256}},{{&g_256,&g_256,&g_256,&g_256,(void*)0},{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,(void*)0,&g_256},{&g_256,&g_256,(void*)0,(void*)0,(void*)0},{&g_256,&g_256,&g_256,&g_256,(void*)0}}};
static union U5 g_280 = {0x35L};
static uint32_t g_289 = 1UL;
static int8_t g_293 = (-7L);
static int16_t g_294 = (-2L);
static uint8_t g_295 = 255UL;
static union U3 g_305 = {0};
static int32_t g_315 = (-4L);
static uint32_t g_328[5][6][7] = {{{4294967288UL,0xD74C9B7BL,0x88B700F5L,0xF7320741L,4294967289UL,0x35E5ED20L,1UL},{1UL,0x3956FF6CL,0UL,1UL,4294967288UL,8UL,0x0251FE1EL},{1UL,0x0AC22FB0L,0x34341926L,0x34341926L,0x0AC22FB0L,1UL,4294967293UL},{0xF41DDBBDL,1UL,0x4FFEA528L,0x3956FF6CL,4294967295UL,0x986ED9D8L,4294967295UL},{0x07E18782L,4294967294UL,9UL,1UL,4294967288UL,4294967292UL,4294967287UL},{4294967289UL,1UL,1UL,4UL,4UL,1UL,1UL}},{{4294967289UL,0x0AC22FB0L,4294967295UL,4294967292UL,4294967295UL,0UL,0x35E5ED20L},{0xD87E3969L,0x3956FF6CL,4294967295UL,8UL,0xBD8878C4L,4294967291UL,0x205401C7L},{4294967295UL,0xD74C9B7BL,0x35E5ED20L,4294967292UL,0x0AC22FB0L,0x0AC22FB0L,0x88B700F5L},{0UL,0x4A44A834L,0UL,8UL,4294967295UL,1UL,0x986ED9D8L},{4294967288UL,0x7AF90630L,1UL,6UL,4294967295UL,4294967294UL,4294967293UL},{0x4A44A834L,0xF41DDBBDL,0x3956FF6CL,4294967289UL,0xBD8878C4L,1UL,1UL}},{{0xD74C9B7BL,4294967295UL,6UL,4294967295UL,0xD74C9B7BL,0x0AC22FB0L,0x07E18782L},{4294967291UL,4294967295UL,0x4FFEA528L,0x205401C7L,1UL,0x3956FF6CL,0UL},{0x35E5ED20L,0x0AC22FB0L,4294967288UL,4294967287UL,4294967289UL,0xD74C9B7BL,0x57D721A5L},{4294967291UL,0x205401C7L,0x0251FE1EL,0x986ED9D8L,0x0251FE1EL,0x205401C7L,4294967291UL},{0xD74C9B7BL,1UL,0UL,0x07E18782L,4294967295UL,0x88B700F5L,6UL},{0x4A44A834L,4294967295UL,0xD87E3969L,4UL,0x986ED9D8L,0UL,4294967295UL}},{{4294967288UL,9UL,0UL,0x34341926L,1UL,0x34341926L,0UL},{0UL,0UL,0x0251FE1EL,4294967288UL,0xF41DDBBDL,0x4FFEA528L,0x60A8B19DL},{1UL,1UL,4294967288UL,0UL,6UL,9UL,0x0AC22FB0L},{4294967295UL,0x3956FF6CL,0x4FFEA528L,1UL,0xF41DDBBDL,1UL,0xF41DDBBDL},{0x57D721A5L,6UL,6UL,0x57D721A5L,1UL,4294967295UL,0xF7320741L},{1UL,0x4FFEA528L,0x3956FF6CL,4294967295UL,0x986ED9D8L,4294967295UL,4294967288UL}},{{0UL,4294967288UL,1UL,1UL,4294967295UL,0x35E5ED20L,0xF7320741L},{4294967288UL,0x0251FE1EL,0UL,0UL,0x0251FE1EL,4294967288UL,0xF41DDBBDL},{0x34341926L,0UL,9UL,4294967288UL,4294967289UL,4294967293UL,0x0AC22FB0L},{4UL,0xD87E3969L,4294967295UL,0x4A44A834L,1UL,4294967291UL,0x60A8B19DL},{0x07E18782L,0UL,1UL,0xD74C9B7BL,0xD74C9B7BL,1UL,0UL},{0x986ED9D8L,0x0251FE1EL,0x205401C7L,4294967291UL,0xBD8878C4L,8UL,4294967295UL}}};
static int64_t g_333[5][6] = {{0L,0x38DD8F448834F832LL,0x38DD8F448834F832LL,0L,6L,0L},{0L,6L,0L,0x38DD8F448834F832LL,0x38DD8F448834F832LL,0L},{1L,1L,0x38DD8F448834F832LL,9L,0x38DD8F448834F832LL,1L},{0x38DD8F448834F832LL,6L,9L,9L,6L,0x38DD8F448834F832LL},{1L,0x38DD8F448834F832LL,9L,0x38DD8F448834F832LL,1L,1L}};
static int8_t *g_384[2] = {&g_180[0].f0,&g_180[0].f0};
static int8_t **g_383[2] = {&g_384[1],&g_384[1]};
static uint32_t g_390[1] = {0xED175345L};
static int16_t g_404 = 0x6494L;
static int32_t g_411 = 0L;
static uint32_t g_412 = 0x27F940FCL;
static int8_t g_426 = 3L;
static uint64_t g_632 = 0x9EC67DBAE745EA02LL;
static int16_t g_652 = 3L;
static const int32_t g_659 = 0x0A8BB978L;
static const int32_t *g_660 = &g_315;
static int64_t g_666[4][7][2] = {{{1L,0x430DB922382183AALL},{1L,1L},{0xE76EFE8513EE8BEBLL,0x51B624C946D383CBLL},{0x430DB922382183AALL,0xE76EFE8513EE8BEBLL},{1L,0xF357D5298DB4CEBCLL},{0x51B624C946D383CBLL,0xC8085648B647FCCDLL},{0xC8085648B647FCCDLL,0xC8085648B647FCCDLL}},{{0x51B624C946D383CBLL,0xF357D5298DB4CEBCLL},{1L,0xE76EFE8513EE8BEBLL},{0x430DB922382183AALL,0x51B624C946D383CBLL},{0x0753075074D43C1FLL,0x430DB922382183AALL},{0xFF3C335D4E02EE63LL,(-6L)},{0xFF3C335D4E02EE63LL,0x430DB922382183AALL},{0x0753075074D43C1FLL,0x51B624C946D383CBLL}},{{0x430DB922382183AALL,0xE76EFE8513EE8BEBLL},{1L,0xF357D5298DB4CEBCLL},{0x51B624C946D383CBLL,0xC8085648B647FCCDLL},{0xC8085648B647FCCDLL,0xC8085648B647FCCDLL},{0x51B624C946D383CBLL,0xF357D5298DB4CEBCLL},{1L,0xE76EFE8513EE8BEBLL},{0x430DB922382183AALL,0x51B624C946D383CBLL}},{{0x0753075074D43C1FLL,0x430DB922382183AALL},{0xFF3C335D4E02EE63LL,(-6L)},{0xFF3C335D4E02EE63LL,0x430DB922382183AALL},{0x0753075074D43C1FLL,0x51B624C946D383CBLL},{0x430DB922382183AALL,0xE76EFE8513EE8BEBLL},{1L,0xF357D5298DB4CEBCLL},{0x51B624C946D383CBLL,0xC8085648B647FCCDLL}}};
static int32_t g_671 = (-4L);
static int16_t g_672[2][5] = {{0L,0L,0L,0L,0L},{0xC4F4L,0xC4F4L,0xC4F4L,0xC4F4L,0xC4F4L}};
static int64_t g_673 = (-1L);
static uint32_t g_674[3] = {8UL,8UL,8UL};
static uint16_t *g_692 = &g_81;
static const union U5 *g_702 = &g_280;
static const union U5 **g_701 = &g_702;
static const int64_t g_735 = 0x3C5D39734E5A01DBLL;
static union U2 **g_743 = &g_238;
static struct S0 g_747 = {4294967287UL,-5,4294967290UL,-1L,0,1634};
static struct S0 * const g_746 = &g_747;
static uint8_t g_811 = 0x03L;
static union U2 ***g_836 = &g_743;
static const union U2 g_858 = {1L};
static union U3 g_871 = {0};
static uint32_t *g_897[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static uint32_t **g_896 = &g_897[3][0];
static uint32_t ***g_895 = &g_896;
static uint32_t ****g_894 = &g_895;
static int64_t g_980 = 0x7983FA24402971BBLL;
static int64_t g_981 = (-7L);
static uint64_t g_984 = 0x2822A06238A457D6LL;
static int32_t g_988 = 1L;
static int16_t g_989 = 0x3435L;
static int32_t g_990 = 0x7C20274AL;
static int32_t g_992[3] = {(-1L),(-1L),(-1L)};
static int16_t g_993[6] = {1L,1L,1L,1L,1L,1L};
static int64_t g_994 = (-9L);
static int8_t g_995 = (-1L);
static uint8_t g_1024 = 4UL;
static int16_t g_1133 = 1L;
static int8_t g_1217 = 0L;
static uint8_t g_1271[3] = {1UL,1UL,1UL};
static union U5 g_1277 = {0L};
static const union U5 g_1438[7] = {{0x69L},{0x69L},{0x69L},{0x69L},{0x69L},{0x69L},{0x69L}};
static uint16_t g_1442 = 0UL;
static union U4 g_1466 = {1UL};
static union U4 *g_1465[3][1] = {{&g_1466},{&g_1466},{&g_1466}};
static uint64_t *g_1471 = (void*)0;
static uint64_t **g_1470 = &g_1471;
static uint8_t g_1482 = 0x6DL;
static union U5 ****g_1588 = (void*)0;
static uint32_t g_1599 = 0x1F6190E4L;
static union U3 * const *g_1621 = (void*)0;
static union U3 * const **g_1620[6] = {&g_1621,(void*)0,(void*)0,&g_1621,(void*)0,(void*)0};
static int16_t **g_1649 = (void*)0;



static union U5  func_1(void);
static int8_t ** func_13(uint8_t  p_14, uint32_t  p_15);
static int32_t * func_22(uint32_t  p_23, int32_t  p_24, union U2  p_25);
static int8_t  func_28(union U1  p_29);
static int32_t  func_37(uint16_t  p_38);
static const union U1  func_45(uint8_t * p_46, uint8_t * p_47, uint32_t  p_48, int8_t * p_49);
static uint8_t * func_50(union U5  p_51);
static uint8_t ** func_57(int64_t  p_58, uint32_t  p_59, uint8_t  p_60, int32_t  p_61);




static union U5  func_1(void)
{ 
    int8_t l_3 = 5L;
    int8_t *l_8 = &l_3;
    union U1 *l_1112 = (void*)0;
    union U5 l_1126 = {0L};
    uint32_t ***l_1128 = &g_896;
    uint16_t l_1131 = 0x49ACL;
    int32_t l_1189 = (-1L);
    int32_t l_1194[7][4][1] = {{{7L},{(-8L)},{7L},{0L}},{{7L},{(-8L)},{7L},{0xAA6137B4L}},{{(-1L)},{0xAA6137B4L},{7L},{(-8L)}},{{7L},{0L},{7L},{(-8L)}},{{7L},{0xAA6137B4L},{(-1L)},{0xAA6137B4L}},{{7L},{(-8L)},{7L},{0L}},{{7L},{(-8L)},{7L},{0xAA6137B4L}}};
    uint32_t l_1218 = 0xD4D727FEL;
    uint32_t l_1219 = 18446744073709551615UL;
    int32_t *l_1297 = &g_411;
    int16_t l_1298 = (-3L);
    int8_t l_1302 = 0x4CL;
    int64_t l_1314 = 1L;
    union U4 l_1317 = {0x933DL};
    uint8_t l_1324[1][4] = {{3UL,3UL,3UL,3UL}};
    union U2 l_1338 = {0x88L};
    uint32_t l_1371 = 0xC5F8FC31L;
    uint8_t ****l_1386[3];
    int64_t l_1391[3][1][1];
    int32_t l_1420[6];
    int32_t l_1439 = (-1L);
    uint16_t l_1503 = 0x7926L;
    union U1 *l_1541 = &g_222;
    uint32_t l_1548 = 1UL;
    union U5 *l_1587 = &g_1277;
    union U5 **l_1586[3];
    union U5 ***l_1585 = &l_1586[2];
    union U5 ****l_1584[3];
    int8_t ****l_1589 = (void*)0;
    uint32_t l_1617 = 18446744073709551615UL;
    int16_t l_1632[1];
    const union U5 **l_1733[1];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1386[i] = (void*)0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1391[i][j][k] = 0x72321B3892E03892LL;
        }
    }
    for (i = 0; i < 6; i++)
        l_1420[i] = 0x2D58EF34L;
    for (i = 0; i < 3; i++)
        l_1586[i] = &l_1587;
    for (i = 0; i < 3; i++)
        l_1584[i] = &l_1585;
    for (i = 0; i < 1; i++)
        l_1632[i] = 1L;
    for (i = 0; i < 1; i++)
        l_1733[i] = (void*)0;
    if ((g_2 , l_3))
    { 
        int8_t *l_7 = &l_3;
        int8_t **l_6[3][7][6] = {{{&l_7,&l_7,(void*)0,&l_7,(void*)0,(void*)0},{&l_7,(void*)0,&l_7,&l_7,&l_7,&l_7},{&l_7,&l_7,&l_7,&l_7,&l_7,&l_7},{&l_7,&l_7,&l_7,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_7,&l_7,&l_7,&l_7},{&l_7,&l_7,&l_7,&l_7,&l_7,&l_7},{&l_7,&l_7,&l_7,&l_7,&l_7,&l_7}},{{&l_7,&l_7,&l_7,(void*)0,&l_7,(void*)0},{&l_7,(void*)0,&l_7,(void*)0,(void*)0,&l_7},{&l_7,(void*)0,(void*)0,(void*)0,&l_7,(void*)0},{&l_7,&l_7,(void*)0,&l_7,&l_7,&l_7},{(void*)0,(void*)0,(void*)0,(void*)0,&l_7,&l_7},{&l_7,&l_7,&l_7,(void*)0,&l_7,&l_7},{&l_7,&l_7,(void*)0,&l_7,(void*)0,&l_7}},{{&l_7,&l_7,&l_7,&l_7,&l_7,&l_7},{&l_7,&l_7,&l_7,&l_7,&l_7,&l_7},{&l_7,&l_7,(void*)0,(void*)0,&l_7,(void*)0},{&l_7,&l_7,&l_7,&l_7,&l_7,&l_7},{&l_7,&l_7,(void*)0,&l_7,&l_7,&l_7},{&l_7,&l_7,&l_7,&l_7,&l_7,&l_7},{&l_7,&l_7,&l_7,(void*)0,&l_7,&l_7}}};
        uint8_t l_11 = 0x31L;
        uint8_t *l_12 = &l_11;
        int32_t l_20 = 0xAE45661CL;
        int8_t ***l_1096[2];
        union U1 *l_1111 = &g_222;
        int16_t *l_1138 = (void*)0;
        uint64_t l_1169 = 0x046A99B0A2DFD859LL;
        uint32_t **l_1174 = &g_897[0][0];
        uint64_t l_1186 = 0xFCAD1B97C8DCCC3ALL;
        int32_t l_1197[1];
        union U5 ***l_1226 = (void*)0;
        uint32_t l_1264 = 4294967286UL;
        const union U3 l_1293 = {0};
        int32_t **l_1296[3][7] = {{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,(void*)0,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161,&g_161}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1096[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_1197[i] = 0x1B7DD22EL;
lbl_1220:
        (*g_161) = (safe_lshift_func_int8_t_s_u(1L, ((**g_256) = (((l_8 = &l_3) != (void*)0) , ((safe_lshift_func_uint8_t_u_u(((*l_12) = (l_11 , 255UL)), 4)) ^ ((*l_8) = ((g_383[0] = func_13((0x49L == (safe_add_func_uint64_t_u_u((l_12 != g_18), l_20))), l_3)) != &g_384[1])))))));
        if ((safe_div_func_int8_t_s_s((l_3 | g_993[4]), (0xBF18774DL && (((*g_161) |= l_11) < (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(0UL, 4)), 10)), (((safe_lshift_func_int8_t_s_s((-2L), 5)) == (*g_692)) , l_3))))))))
        { 
            const union U5 l_1124 = {7L};
            int8_t **l_1127 = &g_384[1];
            int16_t *l_1140 = &g_672[0][4];
            for (g_293 = 4; (g_293 == (-14)); g_293--)
            { 
                int8_t l_1125 = 1L;
                union U1 **l_1141 = &l_1111;
                struct S0 l_1143 = {0x8E6F890BL,-616,0UL,1L,0,1980};
                for (g_66 = 0; (g_66 != 56); g_66 = safe_add_func_uint8_t_u_u(g_66, 4))
                { 
                    union U1 **l_1113[5] = {&g_221,&g_221,&g_221,&g_221,&g_221};
                    uint32_t l_1129 = 0x1D5F883DL;
                    int32_t l_1130 = 0x63BE1051L;
                    int32_t *l_1132[7][6] = {{(void*)0,&g_34[0],(void*)0,&g_34[0],(void*)0,&g_34[0]},{(void*)0,&g_34[0],(void*)0,&g_34[0],(void*)0,&g_34[0]},{(void*)0,&g_34[0],(void*)0,&g_34[0],(void*)0,&g_34[0]},{(void*)0,&g_34[0],(void*)0,&g_34[0],(void*)0,&g_34[0]},{(void*)0,&g_34[0],(void*)0,&g_34[0],(void*)0,&g_34[0]},{(void*)0,&g_34[0],(void*)0,&g_34[0],(void*)0,&g_34[0]},{(void*)0,&g_34[0],(void*)0,&g_34[0],(void*)0,&g_34[0]}};
                    int16_t **l_1139 = &l_1138;
                    union U5 *l_1142 = &l_1126;
                    int i, j;
                    (*g_161) &= (l_1111 != (g_221 = l_1112));
                    g_1133 &= (l_1131 = (0xB242L == ((((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(((*g_238) , (safe_rshift_func_int8_t_s_u((l_1129 = (((*g_161) = (((safe_mul_func_uint16_t_u_u((l_1124 , (l_1125 && (l_1126 , ((void*)0 == l_1127)))), (*g_692))) , l_1128) == (*g_894))) || l_1126.f0)), 2))), 5)) && l_1124.f0), (*g_660))) == g_858.f0), l_1130)) & 255UL) , 0x3D03L) , (*g_692))));
                    (*g_161) &= 1L;
                    if ((*g_660))
                        break;
                    (*g_161) = ((((safe_add_func_int32_t_s_s(0x254D9F4EL, l_11)) || 0xFEL) , ((safe_lshift_func_uint16_t_u_u((((*l_1139) = l_1138) != l_1140), ((l_1141 == ((((*l_1142) = (*g_702)) , l_1143) , &g_221)) != 0x1FL))) >= l_1143.f0)) ^ 0x040A74B2L);
                }
            }
        }
        else
        { 
            int16_t l_1165 = (-6L);
            int32_t l_1190[2][1];
            int32_t l_1191 = 1L;
            int32_t l_1195 = (-1L);
            int32_t l_1196 = 0xE635AA55L;
            int32_t l_1199 = 0x3152BC78L;
            int32_t l_1200 = 0xF4F14A9CL;
            uint32_t l_1290 = 0UL;
            int32_t *l_1295 = &l_1197[0];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1190[i][j] = 0xFE01C459L;
            }
            for (g_126 = 0; (g_126 >= 2); g_126++)
            { 
                uint16_t l_1154 = 0x9CC8L;
                const union U5 ** const l_1175[3][3][1] = {{{&g_702},{&g_702},{&g_702}},{{&g_702},{&g_702},{&g_702}},{{&g_702},{&g_702},{&g_702}}};
                int32_t l_1192 = 0x46FF49DBL;
                int32_t l_1193 = 0xD1971EA8L;
                int32_t l_1198[3];
                union U2 l_1225 = {0x41L};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1198[i] = 0x8123B289L;
                for (g_294 = 18; (g_294 > (-27)); g_294--)
                { 
                    return (**g_701);
                }
                g_161 = func_22(l_11, ((*g_161) = l_1131), (**g_237));
                for (g_157 = 0; (g_157 < 19); ++g_157)
                { 
                    uint64_t *l_1166[5] = {&g_632,&g_632,&g_632,&g_632,&g_632};
                    const int32_t l_1170 = 8L;
                    int32_t l_1171[4];
                    int32_t **l_1187 = (void*)0;
                    int32_t **l_1188[1][1];
                    uint32_t l_1201 = 0x9900F3EBL;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_1171[i] = 0x8B28E3B7L;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1188[i][j] = (void*)0;
                    }
                    l_1171[1] &= ((*g_161) ^= ((((safe_sub_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(l_1154, (safe_mul_func_uint8_t_u_u(((**g_256) = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((safe_sub_func_int64_t_s_s(l_1165, (g_984 = 18446744073709551611UL))) > ((*g_692) = (*g_692))) != g_333[3][4]) < ((safe_sub_func_int16_t_s_s((((**g_219) , g_289) | 1L), 0L)) || (-4L))), l_20)), 0x3AL)), l_1169))), l_1170)))) , (-1L)), 0x9FL)) == g_989) < l_1126.f0) | l_1154));
                    g_161 = func_22(((safe_add_func_uint16_t_u_u(((void*)0 == l_1174), (l_1175[1][1][0] != ((*g_221) , (void*)0)))) , ((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(l_1186, ((**g_836) != (void*)0))) >= l_3) || l_1131), g_672[0][4])), 12)), 2)), l_1186)) <= 0x7BL)), (*g_161), (***g_836));
                    ++l_1201;
                    g_161 = ((safe_mod_func_int16_t_s_s(0x93B6L, ((((safe_sub_func_uint64_t_u_u(g_858.f0, (l_11 , ((*g_221) , (safe_rshift_func_uint8_t_u_u((l_1197[0] = ((**g_256) = (safe_add_func_uint16_t_u_u(((*g_692)--), (g_222.f2 <= ((*g_746) , (g_992[1] >= l_1189))))))), 4)))))) > 0xA5B4L) > g_1024) & g_170))) , &l_1198[0]);
                    g_161 = func_22(((*g_746) , ((((l_1193 ^ (l_1194[6][2][0] < (g_871 , 251UL))) < (((+((l_1191 && ((*g_692) ^ (*g_692))) || l_1194[4][2][0])) , g_1217) <= l_1218)) <= l_1219) >= l_1197[0])), l_3, (**g_237));
                }
                if (g_293)
                    goto lbl_1220;
                (*g_161) = (l_1186 && ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((g_81 , 0x7CL), 0xE3L)), (l_1225 , l_1198[2]))) | (l_1226 == (void*)0)));
            }
            for (l_1126.f0 = 1; (l_1126.f0 >= 0); l_1126.f0 -= 1)
            { 
                struct S0 l_1244 = {0x696203ADL,-699,4294967295UL,0x9E57D9876B6129EBLL,0,1451};
                uint64_t *l_1245[6];
                uint32_t *l_1246[7][7][3] = {{{(void*)0,(void*)0,&g_674[2]},{&g_390[0],(void*)0,&g_289},{(void*)0,&g_674[2],&g_74},{&g_328[0][3][5],&g_243,&g_289},{&g_243,&g_176,&g_674[2]},{&g_157,&g_243,&g_243},{&g_289,&g_674[2],(void*)0}},{{&g_157,(void*)0,(void*)0},{&g_243,(void*)0,(void*)0},{&g_328[0][3][5],&g_74,&g_243},{(void*)0,(void*)0,&g_674[2]},{&g_390[0],(void*)0,&g_289},{(void*)0,&g_674[2],&g_74},{&g_328[0][3][5],&g_243,&g_289}},{{&g_674[2],(void*)0,(void*)0},{&g_289,(void*)0,(void*)0},{&g_74,&g_747.f0,&l_1244.f0},{&g_289,&g_176,&g_289},{&g_674[2],&g_747.f0,&l_1244.f0},{&g_243,&g_289,(void*)0},{(void*)0,&g_747.f0,(void*)0}},{{(void*)0,&g_176,&l_1218},{(void*)0,&g_747.f0,&g_328[0][3][5]},{&g_243,(void*)0,&l_1218},{&g_674[2],(void*)0,(void*)0},{&g_289,(void*)0,(void*)0},{&g_74,&g_747.f0,&l_1244.f0},{&g_289,&g_176,&g_289}},{{&g_674[2],&g_747.f0,&l_1244.f0},{&g_243,&g_289,(void*)0},{(void*)0,&g_747.f0,(void*)0},{(void*)0,&g_176,&l_1218},{(void*)0,&g_747.f0,&g_328[0][3][5]},{&g_243,(void*)0,&l_1218},{&g_674[2],(void*)0,(void*)0}},{{&g_289,(void*)0,(void*)0},{&g_74,&g_747.f0,&l_1244.f0},{&g_289,&g_176,&g_289},{&g_674[2],&g_747.f0,&l_1244.f0},{&g_243,&g_289,(void*)0},{(void*)0,&g_747.f0,(void*)0},{(void*)0,&g_176,&l_1218}},{{(void*)0,&g_747.f0,&g_328[0][3][5]},{&g_243,(void*)0,&l_1218},{&g_674[2],(void*)0,(void*)0},{&g_289,(void*)0,(void*)0},{&g_74,&g_747.f0,&l_1244.f0},{&g_289,&g_176,&g_289},{&g_674[2],&g_747.f0,&l_1244.f0}}};
                int32_t **l_1268 = &g_161;
                int16_t l_1274 = (-5L);
                int64_t *l_1275 = &g_230;
                int32_t *l_1276[1][5] = {{&g_671,&g_671,&g_671,&g_671,&g_671}};
                union U5 l_1278 = {-7L};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1245[i] = &g_111;
                (*g_161) = (safe_add_func_uint64_t_u_u(0x77303E70390DED8BLL, ((safe_sub_func_uint32_t_u_u((l_1189 &= (0x13BAL || ((g_984 = (l_1196 < (safe_lshift_func_int8_t_s_s((0xB126749DL ^ ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((--(*g_692)), 0)), (g_992[1] == (safe_mod_func_uint32_t_u_u((((l_20 != (safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u(((l_1244 , 0x7DL) ^ l_1194[4][0][0]), l_1195))))) , (-1L)) != (**g_256)), (-1L)))))) , l_1194[6][3][0])), l_1218)))) & 0xF0F551F301FCD253LL))), 0UL)) && 0UL)));
                for (g_1217 = 3; (g_1217 >= 0); g_1217 -= 1)
                { 
                    int32_t *l_1249 = &l_1197[0];
                    int32_t *l_1250 = &l_1191;
                    uint16_t **l_1253 = &g_692;
                    int32_t *l_1261 = &l_1195;
                    int32_t *l_1262 = &l_1191;
                    int32_t *l_1263[2][5][4] = {{{&l_20,&l_20,&l_1189,&l_20},{&l_20,&l_1196,&l_1196,&l_20},{&l_1196,&l_20,&l_1196,&l_1196},{&l_20,&l_20,&l_1189,&l_20},{&l_20,&l_1196,&l_1196,&l_20}},{{&l_1196,&l_20,&l_1196,&l_1196},{&l_20,&l_20,&l_1189,&l_20},{&l_20,&l_1196,&l_1196,&l_20},{&l_1196,&l_20,&l_1196,&l_1196},{&l_20,&l_20,&l_1189,&l_20}}};
                    int32_t **l_1267 = &g_161;
                    int i, j, k;
                    (*l_1250) = ((*l_1249) = ((*g_161) ^= (g_305 , (((*l_8) = ((g_231[g_1217] & (g_231[(l_1126.f0 + 2)] , (safe_mod_func_uint32_t_u_u(1UL, g_231[l_1126.f0])))) , (g_231[(g_1217 + 1)] > (-1L)))) | 0xD1L))));
                    l_1196 = ((safe_lshift_func_int16_t_s_s((((*l_1253) = &g_81) == &g_81), 9)) <= ((safe_mul_func_uint16_t_u_u(1UL, ((g_231[g_1217] = (safe_mod_func_int32_t_s_s(((*g_161) ^= 0xCE59BBE8L), (safe_rshift_func_int16_t_s_u(0x7DC1L, 12))))) != (g_180[0].f0 <= (+(2L & (*l_1249))))))) >= (*l_1250)));
                    if ((*g_161))
                        break;
                    --l_1264;
                    (*l_1267) = &l_1199;
                }
                (*g_161) ^= 0x25C2A1C7L;
                (*l_1268) = (void*)0;
                if (((safe_add_func_int32_t_s_s((-1L), (((l_1196 <= ((**g_256) | ((&g_992[1] != (l_1276[0][0] = (g_1271[2] , func_22((((*l_1275) &= (g_157 == (g_672[1][0] = (safe_div_func_uint32_t_u_u(((l_1191 & l_1274) || g_166[2][0].f0), 4294967295UL))))) , 0x73B73B56L), l_20, (***g_836))))) , l_1196))) , g_735) ^ g_666[1][5][0]))) > l_1197[0]))
                { 
                    if (l_1196)
                        break;
                    return g_1277;
                }
                else
                { 
                    (*l_1268) = (*l_1268);
                    return l_1278;
                }
            }
            (*l_1295) |= (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_1200, 5)), (safe_sub_func_uint64_t_u_u(0x71911DAB49401E0BLL, (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((+(l_1290 > (safe_sub_func_int32_t_s_s((l_1293 , (*g_660)), ((~l_1189) != ((-1L) <= l_1196)))))), 0xD5L)), 1UL)))))) <= (-1L)) & 0UL);
            (*l_1295) ^= 0x8A114170L;
        }
        l_1297 = &g_34[1];
    }
    else
    { 
        int64_t l_1299 = 4L;
        int32_t l_1301[5] = {1L,1L,1L,1L,1L};
        int8_t l_1303 = 0x06L;
        uint32_t l_1304 = 0UL;
        union U1 l_1309 = {0x26A50774L};
        const uint32_t *l_1319 = &g_328[4][4][0];
        const uint32_t **l_1318 = &l_1319;
        uint32_t **l_1320[4][3];
        int16_t *l_1321[7] = {&g_228,&g_228,&g_228,&g_228,&g_228,&g_228,&g_228};
        uint64_t * const l_1327[6] = {&g_111,&g_126,&g_126,&g_111,&g_126,&g_126};
        uint64_t *l_1328 = &g_632;
        int32_t l_1363[3][2][5] = {{{1L,2L,2L,1L,2L},{1L,1L,0L,1L,1L}},{{2L,1L,2L,2L,1L},{1L,2L,2L,1L,2L}},{{1L,1L,0L,2L,2L},{0L,2L,0L,0L,2L}}};
        int16_t l_1421 = 9L;
        union U5 l_1476[1][5] = {{{0x0EL},{0x0EL},{0x0EL},{0x0EL},{0x0EL}}};
        uint32_t l_1565 = 4294967295UL;
        uint8_t l_1618 = 2UL;
        uint32_t l_1630 = 0xA2DB54E2L;
        uint32_t l_1673 = 4294967289UL;
        union U1 *l_1681[1];
        uint32_t l_1723 = 9UL;
        int8_t l_1726[6] = {0L,0L,0L,0L,0L,0L};
        int32_t *l_1732 = &l_1439;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
                l_1320[i][j] = &g_897[3][0];
        }
        for (i = 0; i < 1; i++)
            l_1681[i] = &g_222;
lbl_1307:
        for (l_1218 = 0; (l_1218 <= 0); l_1218 += 1)
        { 
            int32_t *l_1300[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1300[i][j] = &g_34[0];
            }
            l_1304++;
            if (l_1189)
                goto lbl_1307;
        }
    }
    g_702 = &g_1438[0];
    return (*g_702);
}



static int8_t ** func_13(uint8_t  p_14, uint32_t  p_15)
{ 
    int64_t l_341 = 0L;
    union U2 l_1076[7][7][2] = {{{{1L},{1L}},{{0L},{0xD6L}},{{0L},{1L}},{{1L},{1L}},{{1L},{0L}},{{0xD6L},{0L}},{{1L},{1L}}},{{{1L},{1L}},{{0L},{0xD6L}},{{0L},{1L}},{{1L},{1L}},{{1L},{0L}},{{0xD6L},{0L}},{{1L},{1L}}},{{{1L},{1L}},{{0L},{0xD6L}},{{0L},{1L}},{{1L},{1L}},{{1L},{0L}},{{0xD6L},{0L}},{{1L},{1L}}},{{{1L},{1L}},{{0L},{0xD6L}},{{0L},{1L}},{{1L},{1L}},{{1L},{0L}},{{0xD6L},{0L}},{{1L},{1L}}},{{{1L},{1L}},{{0L},{0xD6L}},{{0L},{1L}},{{1L},{1L}},{{1L},{0L}},{{0xD6L},{0L}},{{1L},{1L}}},{{{1L},{1L}},{{0L},{0xD6L}},{{0L},{1L}},{{1L},{1L}},{{1L},{0L}},{{0xD6L},{0L}},{{1L},{1L}}},{{{1L},{1L}},{{0L},{0xD6L}},{{0L},{1L}},{{1L},{1L}},{{1L},{0L}},{{0xD6L},{0L}},{{1L},{1L}}}};
    int32_t l_1088 = 0L;
    int32_t l_1090 = (-1L);
    int i, j, k;
    for (g_19 = 0; (g_19 <= 1); g_19 += 1)
    { 
        union U1 l_30 = {0xF0B9F5ABL};
        int32_t l_36 = 0L;
        int32_t l_1089 = (-8L);
        int32_t l_1091 = (-8L);
        int32_t l_1092 = 0x0C474C50L;
        uint16_t l_1093[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1093[i][j] = 0x1F36L;
        }
        for (p_15 = 0; (p_15 <= 1); p_15 += 1)
        { 
            int32_t l_486[4][3] = {{(-1L),(-1L),(-1L)},{0x38A44014L,(-9L),0x38A44014L},{(-1L),(-1L),(-1L)},{0x38A44014L,(-9L),0x38A44014L}};
            int i, j;
            for (g_2 = 0; (g_2 <= 1); g_2 += 1)
            { 
                union U5 l_54[5][4][4] = {{{{0x77L},{0xF3L},{0xD7L},{-1L}},{{-1L},{0xF3L},{0xF3L},{-1L}},{{0x77L},{0xF3L},{0xD7L},{-1L}},{{-1L},{0xF3L},{0xF3L},{-1L}}},{{{0x77L},{0xF3L},{0xD7L},{-1L}},{{-1L},{0xF3L},{0xF3L},{-1L}},{{0x77L},{0xF3L},{0xD7L},{-1L}},{{-1L},{0xF3L},{0xF3L},{-1L}}},{{{0x77L},{0xF3L},{0xD7L},{-1L}},{{-1L},{0xF3L},{0xF3L},{-1L}},{{0x77L},{0xF3L},{0xD7L},{-1L}},{{-1L},{0xF3L},{0xF3L},{-1L}}},{{{0x77L},{0xF3L},{0xD7L},{-1L}},{{-1L},{0xF3L},{0xF3L},{-1L}},{{0x77L},{0xF3L},{0xD7L},{-1L}},{{-1L},{0xF3L},{0xF3L},{-1L}}},{{{0x77L},{0xF3L},{0xD7L},{-1L}},{{-1L},{0xF3L},{0xF3L},{-1L}},{{0x77L},{0xF3L},{0xD7L},{-1L}},{{-1L},{0xF3L},{0xF3L},{-1L}}}};
                int8_t *l_342 = (void*)0;
                int32_t l_487 = 1L;
                int32_t **l_1078 = &g_161;
                int i, j, k;
            }
        }
        for (l_341 = 1; (l_341 >= 0); l_341 -= 1)
        { 
            int32_t l_1079 = (-4L);
            int32_t *l_1080 = (void*)0;
            int32_t *l_1081 = (void*)0;
            int32_t *l_1082 = &g_411;
            int32_t *l_1083 = &g_34[0];
            int32_t *l_1084 = &g_315;
            int32_t *l_1085 = &g_162;
            int32_t *l_1086 = (void*)0;
            int32_t *l_1087[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1087[i][j] = &g_162;
            }
            --l_1093[0][0];
            if (p_15)
                break;
            if ((*g_660))
                break;
        }
    }
    return &g_384[1];
}



static int32_t * func_22(uint32_t  p_23, int32_t  p_24, union U2  p_25)
{ 
    int32_t *l_1077 = &g_162;
    return l_1077;
}



static int8_t  func_28(union U1  p_29)
{ 
    int32_t *l_31 = (void*)0;
    int32_t *l_32 = &g_21[5][1];
    int32_t *l_33[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    (*l_32) |= p_29.f0;
    g_34[0] = ((*l_32) |= p_29.f0);
    g_34[0] |= (!(*l_32));
    return g_21[5][1];
}



static int32_t  func_37(uint16_t  p_38)
{ 
    union U4 l_489 = {0UL};
    union U5 l_505 = {-6L};
    const int32_t l_523 = 0x21181860L;
    int64_t l_563 = 0x875F66C8AFDFD6C5LL;
    int32_t l_579 = (-8L);
    int32_t l_580[1];
    union U1 **l_596[5][6][3] = {{{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,(void*)0}},{{&g_221,&g_221,&g_221},{&g_221,&g_221,(void*)0},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221}},{{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,(void*)0},{&g_221,&g_221,&g_221},{&g_221,&g_221,(void*)0}},{{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221}},{{&g_221,&g_221,&g_221},{&g_221,&g_221,(void*)0},{&g_221,&g_221,&g_221},{&g_221,&g_221,(void*)0},{&g_221,&g_221,&g_221},{&g_221,&g_221,&g_221}}};
    struct S0 l_649 = {6UL,-59,1UL,1L,0,1686};
    uint64_t *l_653 = &g_632;
    uint32_t * const l_663 = (void*)0;
    uint32_t l_846 = 0x02197DBCL;
    int8_t *l_862 = (void*)0;
    uint32_t l_919 = 0x8F102285L;
    union U5 **l_1017[3][1];
    uint64_t l_1021 = 18446744073709551614UL;
    uint8_t l_1070 = 0xCFL;
    int32_t l_1071 = 1L;
    uint8_t *l_1073 = (void*)0;
    int32_t *l_1074 = &g_162;
    int32_t **l_1075[7][6] = {{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161},{&g_161,&g_161,&g_161,&g_161,&g_161,&g_161}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_580[i] = (-1L);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1017[i][j] = (void*)0;
    }
    if ((+0xFF4A70631EA9536ELL))
    { 
        uint64_t l_501[3];
        int32_t l_526 = 2L;
        int32_t l_528[2][6] = {{0x80D08833L,0x80D08833L,0x80D08833L,0x80D08833L,0x80D08833L,0x80D08833L},{0x80D08833L,0x80D08833L,0x80D08833L,0x80D08833L,0x80D08833L,0x80D08833L}};
        int32_t *l_564 = &g_315;
        uint32_t *l_593 = &g_328[1][2][5];
        uint32_t **l_592[2][7][7] = {{{&l_593,&l_593,(void*)0,&l_593,&l_593,(void*)0,(void*)0},{&l_593,&l_593,(void*)0,&l_593,&l_593,(void*)0,(void*)0},{&l_593,&l_593,&l_593,&l_593,(void*)0,&l_593,(void*)0},{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,(void*)0},{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,&l_593},{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,(void*)0},{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,(void*)0}},{{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,&l_593},{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,(void*)0},{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,(void*)0},{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,&l_593},{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,(void*)0},{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,(void*)0},{(void*)0,&l_593,&l_593,&l_593,(void*)0,&l_593,&l_593}}};
        int64_t l_638 = (-1L);
        uint16_t *l_691 = &g_166[2][0].f0;
        struct S0 l_730 = {4294967287UL,-679,0x448CAF0FL,-1L,0,14};
        uint32_t *l_764 = &g_412;
        int32_t l_767 = (-4L);
        int16_t *l_768 = (void*)0;
        int16_t *l_769[3][6];
        union U5 *l_786 = &l_505;
        union U5 **l_785 = &l_786;
        union U5 ***l_784[7] = {&l_785,&l_785,&l_785,&l_785,&l_785,&l_785,&l_785};
        int32_t l_799 = 0x842A1149L;
        const union U2 *l_857 = &g_858;
        union U3 *l_870 = &g_871;
        uint32_t l_884 = 0xC1CCF045L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_501[i] = 18446744073709551608UL;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
                l_769[i][j] = &g_228;
        }
        if ((0x8A88L > (l_489 , ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(246UL, 7)), ((((!((safe_unary_minus_func_int64_t_s((safe_sub_func_int64_t_s_s((+p_38), (safe_mul_func_int8_t_s_s(l_501[0], l_489.f0)))))) ^ (((safe_add_func_uint8_t_u_u(0xE8L, l_489.f2)) >= 0xBF50L) == l_489.f0))) && l_501[0]) || l_489.f2) | 0x7A7D4CBFL))) | l_501[1]))))
        { 
            union U1 l_506 = {0x0394E5C0L};
            uint32_t *l_515 = &g_157;
            uint32_t **l_514 = &l_515;
            uint32_t ***l_513[5][3] = {{(void*)0,&l_514,(void*)0},{&l_514,&l_514,&l_514},{(void*)0,&l_514,(void*)0},{&l_514,&l_514,&l_514},{(void*)0,&l_514,(void*)0}};
            int32_t l_524 = 0x9FF10FA9L;
            int32_t l_535[6][4][7] = {{{0xD6FD4B1BL,0L,0xA944FE7DL,(-5L),0x35FCEEF9L,0xFDDD6B54L,0x3392586EL},{(-6L),0xE56548ADL,0xB71C4078L,0xE56548ADL,(-6L),1L,9L},{(-1L),8L,0L,1L,(-5L),0xF809E43CL,0xFDDD6B54L},{0x9EEDD45EL,2L,0x94B0CC1CL,1L,0x94B0CC1CL,2L,0x9EEDD45EL}},{{(-1L),1L,0x3392586EL,(-3L),8L,(-7L),0L},{(-6L),1L,0x23C13609L,0L,0x0640CABBL,0L,0x23C13609L},{0xD6FD4B1BL,8L,0x3392586EL,0x31A71AE4L,(-9L),0x35FCEEF9L,1L},{0x446A8339L,0xCB056634L,0x94B0CC1CL,(-1L),0xD19921E7L,0xE56548ADL,0xD19921E7L}},{{(-3L),0L,0L,(-3L),(-9L),0xFDDD6B54L,(-7L)},{0x0640CABBL,1L,0xB71C4078L,(-1L),0x0640CABBL,0xCB056634L,9L},{0xF809E43CL,0xD6FD4B1BL,0xA944FE7DL,1L,8L,0x35FCEEF9L,(-7L)},{0x9EEDD45EL,(-1L),0x446A8339L,0xCB056634L,0x94B0CC1CL,(-1L),0xD19921E7L}},{{0x35FCEEF9L,1L,(-7L),(-5L),(-5L),(-7L),1L},{0x0640CABBL,(-1L),0x23C13609L,2L,(-6L),1L,0x23C13609L},{(-5L),0xD6FD4B1BL,0x087F504CL,0x31A71AE4L,0x35FCEEF9L,0xF809E43CL,0L},{0x446A8339L,1L,0x446A8339L,2L,0xD19921E7L,(-1L),0x9EEDD45EL}},{{8L,0L,1L,(-5L),0xF809E43CL,0xFDDD6B54L,0xFDDD6B54L},{(-6L),0xCB056634L,0xB71C4078L,0xCB056634L,(-6L),(-1L),9L},{(-9L),8L,0x31A71AE4L,1L,(-3L),0xF809E43CL,0x3392586EL},{0x9EEDD45EL,1L,0x94B0CC1CL,(-1L),0x94B0CC1CL,1L,0x9EEDD45EL}},{{(-9L),1L,0xFDDD6B54L,(-3L),0xD6FD4B1BL,(-7L),0x31A71AE4L},{(-6L),2L,0x23C13609L,(-1L),0x0640CABBL,(-1L),0x23C13609L},{8L,8L,0xFDDD6B54L,0x31A71AE4L,(-1L),0x35FCEEF9L,0xA944FE7DL},{0x446A8339L,0xE56548ADL,0x94B0CC1CL,0L,0xD19921E7L,0xCB056634L,0xD19921E7L}}};
            union U3 l_548 = {0};
            int8_t *l_549 = &g_293;
            uint32_t *** const l_569 = &l_514;
            uint64_t *l_571 = &g_126;
            uint64_t l_581 = 4UL;
            int i, j, k;
            for (g_162 = 1; (g_162 >= 0); g_162 -= 1)
            { 
                union U2 **l_504 = &g_238;
                int32_t l_516 = (-1L);
                int32_t l_527 = 0L;
                union U5 l_543 = {0x67L};
                int64_t l_550 = (-7L);
                const int32_t l_551[2][7] = {{5L,5L,5L,5L,5L,5L,5L},{0x176D6983L,0xE2806399L,0x176D6983L,0xE2806399L,0x176D6983L,0xE2806399L,0x176D6983L}};
                union U1 **l_562 = (void*)0;
                union U1 ***l_561 = &l_562;
                int i, j;
                (*g_237) = (void*)0;
                for (g_411 = 1; (g_411 >= 0); g_411 -= 1)
                { 
                    int32_t l_522 = 0x4C800CACL;
                    int32_t *l_525[4][1];
                    uint16_t *l_536 = &g_180[0].f1;
                    uint16_t *l_537 = &g_180[0].f1;
                    uint16_t *l_538[3][7][7] = {{{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0}},{{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81}},{{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0,&g_166[2][0].f0}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_525[i][j] = (void*)0;
                    }
                    g_237 = l_504;
                    l_528[0][0] = ((l_505 , (((*g_221) = l_506) , g_222.f2)) , (safe_rshift_func_uint8_t_u_s(((((0UL >= ((l_526 &= (l_524 = (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((l_516 = ((void*)0 == l_513[2][0])), (~((safe_sub_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((((l_522 > l_523) ^ l_522) , 0UL) <= l_506.f0), p_38)) == 0xC3C6L), p_38)) & g_180[0].f0)))), l_506.f1)))) | g_81)) < (-1L)) | l_527) , 255UL), 5)));
                    l_535[3][3][2] = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((--p_38), (l_524 = (l_527 >= (((safe_mul_func_uint8_t_u_u((l_543 , ((((*l_514) = &g_243) != ((l_535[5][1][5] == ((safe_mod_func_uint8_t_u_u((g_305 , ((l_528[0][0] &= (((((safe_lshift_func_uint8_t_u_s((((l_548 , l_549) != (void*)0) == 0x3CL), 1)) <= g_412) ^ (-1L)) && l_535[2][3][3]) , g_176)) && g_243)), l_550)) & l_506.f0)) , l_525[0][0])) <= g_231[1])), l_550)) & l_501[2]) <= 0xA842L))))), l_551[0][2])), 1));
                    l_528[1][3] |= 0xC0C202D4L;
                    l_528[1][4] = (-1L);
                }
                l_564 = ((safe_mod_func_uint64_t_u_u((!(0x1834L != (((((((0xBBL | ((*l_549) ^= p_38)) | (((safe_div_func_int32_t_s_s(l_527, l_526)) >= (&g_221 == ((*l_561) = &g_221))) <= l_506.f0)) , l_535[2][3][3]) <= l_563) | l_563) <= 0x43FEL) == 0xDC5BA8F0L))), g_426)) , &l_528[0][1]);
            }
            if ((safe_lshift_func_uint16_t_u_s((g_166[2][0].f0 ^= ((((safe_rshift_func_uint8_t_u_u(((l_569 != (void*)0) >= p_38), (+l_489.f0))) && ((*l_571) = g_170)) != ((((*l_549) ^= (safe_lshift_func_uint16_t_u_u(p_38, (((*g_237) = (void*)0) == &g_180[1])))) ^ 0xF5L) <= g_231[4])) || g_228)), 5)))
            { 
                int32_t l_574 = 0xB42789E2L;
                int32_t *l_575 = &g_411;
                int32_t *l_576 = &l_524;
                int32_t *l_577 = (void*)0;
                int32_t *l_578[3][6][5] = {{{&l_524,&l_535[2][3][3],&l_524,&l_524,&l_524},{(void*)0,(void*)0,&l_535[2][0][5],&l_535[2][0][5],(void*)0},{&l_524,(void*)0,(void*)0,&l_528[0][0],&l_535[5][1][2]},{(void*)0,&l_524,&l_535[0][2][4],&l_535[4][0][5],(void*)0},{&l_535[3][0][1],&l_524,&l_535[5][1][2],&g_411,&g_162},{(void*)0,(void*)0,&l_528[1][4],(void*)0,&l_528[1][4]}},{{&l_524,&l_524,(void*)0,&g_162,(void*)0},{(void*)0,(void*)0,&g_162,(void*)0,&l_524},{&l_524,&l_535[3][0][1],(void*)0,&l_528[0][4],&l_535[3][0][1]},{&l_524,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_524,(void*)0,(void*)0,&l_528[0][0]},{(void*)0,(void*)0,&l_535[2][1][5],&l_524,&l_524}},{{&l_535[2][3][3],&l_524,&l_535[2][3][3],&g_162,&l_524},{&l_528[1][4],&l_524,&l_535[2][1][5],&l_524,&l_524},{&l_524,(void*)0,(void*)0,&l_524,&l_524},{&l_524,(void*)0,(void*)0,&l_535[4][0][5],(void*)0},{&l_524,&l_535[2][3][3],(void*)0,&l_535[5][1][2],&l_528[0][0]},{(void*)0,&l_528[1][4],&g_162,&l_535[4][0][5],&l_535[2][1][5]}}};
                int i, j, k;
                l_581--;
                for (g_315 = (-16); (g_315 > (-15)); ++g_315)
                { 
                    return l_535[2][3][3];
                }
                return p_38;
            }
            else
            { 
                int32_t l_586 = 0x772A8051L;
                return l_586;
            }
        }
        else
        { 
            int32_t **l_587 = &l_564;
            const uint32_t *l_604 = &g_74;
            const union U5 *l_607 = &l_505;
            int32_t l_624 = 0x1D2591D8L;
            int64_t l_681 = 0x990EBC1AB0FF4447LL;
            uint64_t **l_685 = &l_653;
            int32_t *l_695 = &l_580[0];
            union U4 l_713 = {65530UL};
            (*l_587) = &l_528[0][0];
            for (p_38 = 0; (p_38 == 25); ++p_38)
            { 
                int32_t l_610 = 1L;
                int32_t l_620[1];
                uint8_t l_625 = 0x03L;
                struct S0 l_635 = {0xB60D4A58L,-802,0UL,5L,0,1968};
                const int32_t *l_658 = &g_659;
                const int32_t **l_657 = &l_658;
                int32_t *l_667 = &l_528[0][0];
                int32_t *l_668 = &g_162;
                int32_t *l_669 = &l_580[0];
                int32_t *l_670[6][2] = {{&l_579,&l_579},{&l_579,&l_579},{&l_579,&l_579},{&l_579,&l_579},{&l_579,&l_579},{&l_579,&l_579}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_620[i] = 0x04AABEBEL;
                if ((safe_mul_func_uint16_t_u_u((((g_228 , l_592[0][0][4]) != (void*)0) >= 0x9DL), (safe_lshift_func_uint8_t_u_s(((((((void*)0 != l_596[0][2][2]) , ((((safe_add_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(((+((l_604 != (void*)0) , (*l_564))) > 0UL), p_38)), p_38)) || g_170) == 0xB013C2BE4A14458CLL) != g_170)) <= 0UL) <= l_580[0]) < g_294), (*l_564))))))
                { 
                    union U5 *l_606[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    union U5 **l_605[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_605[i] = &l_606[3];
                    l_607 = (void*)0;
                }
                else
                { 
                    int32_t *l_608 = &g_315;
                    int32_t *l_609 = &l_528[0][0];
                    int32_t *l_611 = &l_580[0];
                    int32_t *l_612 = &l_579;
                    int32_t *l_613 = &l_528[1][3];
                    int32_t *l_614 = &l_528[0][0];
                    int32_t *l_615 = &g_411;
                    int32_t *l_616 = &l_579;
                    int32_t *l_617 = &l_580[0];
                    int32_t *l_618 = &g_315;
                    int32_t *l_619 = &l_528[0][0];
                    int32_t *l_621 = &l_580[0];
                    int32_t *l_622 = &l_580[0];
                    int32_t *l_623[7];
                    uint32_t *l_636 = &g_222.f0;
                    uint32_t *l_637 = (void*)0;
                    uint32_t *l_639[2][7] = {{&g_412,&g_412,&g_412,&g_412,&g_412,&g_412,&g_412},{&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106}};
                    uint64_t *l_646 = &g_280.f1;
                    uint64_t **l_654 = &l_653;
                    uint64_t **l_655 = &l_646;
                    const int64_t l_656 = 0L;
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_623[i] = &g_162;
                    l_625--;
                    (*l_618) = ((p_38 != (safe_mod_func_uint8_t_u_u(0xEBL, (safe_div_func_uint32_t_u_u((0x5982D05961A097BDLL > g_632), (safe_add_func_int8_t_s_s((l_635 , ((++g_412) , (safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((((*l_646) = (++g_126)) != ((l_649 , (safe_rshift_func_int16_t_s_s(0L, g_652))) == 0xD3L)), (**l_587))), (**l_587))))), (*l_612)))))))) & 65535UL);
                    (*l_609) ^= (((p_38 || (((*l_654) = l_653) != ((*l_655) = &g_632))) < 0x59A592E7L) & l_656);
                }
                g_660 = ((*l_657) = &g_162);
                (**l_587) = ((safe_lshift_func_uint16_t_u_u(((((**g_237) , g_632) == ((void*)0 != l_663)) , (((*g_238) , 1L) | ((p_38 != (*l_564)) < 0x01B94D87L))), p_38)) < g_666[1][2][1]);
                --g_674[2];
                if (((*l_668) = (safe_lshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s((l_649.f1 = (((*l_564) = ((*l_669) |= (l_681 < 0L))) != (((!(l_685 == (void*)0)) & (1UL > (p_38 >= l_649.f1))) | 0x8FE96AE4L))), 0x34E0L)) == 0x2EL), 1))))
                { 
                    int16_t *l_688 = &g_652;
                    (*l_668) = (((safe_rshift_func_int8_t_s_s(((((*g_221) , (**l_587)) != ((*l_688) ^= (-1L))) >= (safe_rshift_func_uint16_t_u_s((l_691 != (g_692 = &p_38)), 6))), 4)) < ((*l_668) , 65532UL)) <= (*l_564));
                    return p_38;
                }
                else
                { 
                    uint32_t **l_693 = &l_593;
                    uint32_t ***l_694 = &l_592[1][3][2];
                    (*l_694) = l_693;
                    return p_38;
                }
            }
            (**l_587) ^= 0x85E434FCL;
            (*l_695) &= (*l_564);
            for (g_289 = 0; (g_289 == 10); ++g_289)
            { 
                uint16_t l_716 = 0x9421L;
                int32_t l_721 = 1L;
                union U5 l_731 = {-7L};
                uint64_t l_736 = 0xD27722FE5094E530LL;
                if ((*g_660))
                { 
                    const union U5 ***l_698 = (void*)0;
                    const union U5 **l_700 = &l_607;
                    const union U5 ***l_699[3][7][1] = {{{&l_700},{&l_700},{&l_700},{&l_700},{&l_700},{&l_700},{&l_700}},{{&l_700},{&l_700},{&l_700},{&l_700},{&l_700},{&l_700},{&l_700}},{{&l_700},{&l_700},{&l_700},{&l_700},{&l_700},{&l_700},{&l_700}}};
                    uint8_t *l_706 = (void*)0;
                    int i, j, k;
                    g_701 = &l_607;
                    (*l_564) &= (~((*l_695) = (safe_rshift_func_uint8_t_u_u(p_38, 1))));
                }
                else
                { 
                    union U5 *l_732 = &l_731;
                    int32_t l_733 = 0x633DC109L;
                    uint8_t l_734 = 0x11L;
                    if (p_38)
                        break;
                    (**l_587) = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((l_713 , p_38), ((((safe_add_func_int32_t_s_s((l_716 &= ((g_412 || ((*l_691) = 1UL)) & 0xE0L)), ((*l_593) |= (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_721, (safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((*l_732) = (l_730 , l_731)) , l_733), (*l_695))), l_734)), (*g_692))), g_666[1][2][1])))), g_735))))) ^ 9L) , l_736) , l_733))) >= g_106), 0)), p_38)) ^ p_38);
                }
                for (g_411 = (-9); (g_411 != 17); ++g_411)
                { 
                    union U2 **l_742 = &g_238;
                    union U2 ***l_741[4][7] = {{&l_742,&l_742,&l_742,&l_742,&l_742,&l_742,&l_742},{&l_742,&l_742,&l_742,&l_742,&l_742,&l_742,&l_742},{&l_742,&l_742,&l_742,&l_742,&l_742,&l_742,(void*)0},{(void*)0,&l_742,&l_742,(void*)0,&l_742,&l_742,(void*)0}};
                    union U5 * const l_745 = &l_505;
                    union U5 * const *l_744[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S0 *l_749 = &g_747;
                    struct S0 **l_748 = &l_749;
                    int i, j;
                    (*l_564) |= ((*l_695) &= ((&g_238 == (((*g_692) ^ (safe_sub_func_uint32_t_u_u(0x6A24A189L, p_38))) , (g_743 = (g_237 = &g_238)))) ^ ((void*)0 == l_744[0])));
                    if ((*l_695))
                        continue;
                    (*l_748) = g_746;
                    return p_38;
                }
            }
        }
        if ((0xAA78L | (((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((l_579 = (safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_s((l_580[0] > (((void*)0 == (*g_743)) > (((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_u(((void*)0 != &g_701), (safe_rshift_func_uint16_t_u_u(((((((*l_764)--) , ((l_649.f1 = (p_38 < p_38)) != g_333[0][5])) > (*l_564)) == g_735) , l_649.f0), p_38)))) || l_767))) || p_38) , p_38), l_649.f4)) , 0x4B4963FFL) <= p_38))), l_649.f0))))), 0xD573L)) | (-1L)), 7)) > (-1L)) , 0L)))
        { 
            int32_t **l_770 = &l_564;
            union U2 l_776 = {0L};
            union U5 *l_783 = &g_280;
            union U5 * const *l_782 = &l_783;
            union U5 * const * const *l_781 = &l_782;
            int32_t l_808[4][5][1] = {{{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L}}};
            int i, j, k;
            for (g_243 = 0; g_243 < 2; g_243 += 1)
            {
                for (g_111 = 0; g_111 < 6; g_111 += 1)
                {
                    l_528[g_243][g_111] = 5L;
                }
            }
            (*l_770) = &g_162;
            for (g_632 = 1; (g_632 <= 4); g_632 += 1)
            { 
                int32_t *l_771 = &g_315;
                union U2 *l_777 = &g_180[3];
                int32_t l_809 = (-1L);
                int32_t l_810 = 0xBD045835L;
                int64_t l_830 = (-1L);
                (*l_770) = l_771;
                if (((*g_692) >= (safe_div_func_int32_t_s_s(((**l_770) = (safe_lshift_func_uint16_t_u_u(65526UL, 11))), g_674[2]))))
                { 
                    union U2 *l_778 = (void*)0;
                    uint64_t *l_787 = &g_126;
                    const int32_t l_788 = (-1L);
                    l_526 &= ((((((l_776 , (void*)0) != (l_778 = l_777)) != p_38) || (((((((safe_div_func_uint64_t_u_u(((*l_787) ^= (((l_781 == l_784[6]) , p_38) & p_38)), g_173)) | g_747.f1) & p_38) , (*g_692)) & (**l_770)) > (-4L)) | 18446744073709551606UL)) | p_38) == (**l_770));
                    l_799 |= (p_38 && (((l_788 >= (safe_mul_func_uint8_t_u_u((((l_788 ^ (((**l_770) != (safe_add_func_int32_t_s_s(((g_162 = (safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u(p_38, p_38)), l_505.f0))) || 0UL), p_38))) , g_166[2][0].f0)) || p_38) != l_649.f3), 0x9BL))) != p_38) | 0xDEL));
                    if ((*g_660))
                        continue;
                    if (l_505.f0)
                        break;
                }
                else
                { 
                    int32_t *l_800 = &g_411;
                    int32_t *l_801 = &g_315;
                    int32_t *l_802 = &l_528[0][0];
                    int32_t *l_803 = (void*)0;
                    int32_t *l_804 = &l_580[0];
                    int32_t *l_805 = (void*)0;
                    int32_t *l_806 = (void*)0;
                    int32_t *l_807[4][7][6] = {{{&g_411,&l_799,(void*)0,&l_528[1][2],&l_526,(void*)0},{&l_799,(void*)0,&l_580[0],&l_528[1][2],(void*)0,&l_580[0]},{&g_411,&l_799,(void*)0,&l_580[0],&l_580[0],&l_799},{&l_580[0],(void*)0,&l_528[0][0],&l_580[0],&l_580[0],&l_799},{&l_528[1][2],&g_162,&l_767,&l_526,&l_528[0][0],&l_528[0][0]},{&l_528[0][2],&l_767,&l_767,(void*)0,(void*)0,&l_767},{&l_528[0][0],&l_528[0][0],&l_528[0][2],&g_315,(void*)0,&l_580[0]}},{{&l_528[0][0],&l_528[1][2],&l_579,&l_580[0],(void*)0,&l_528[0][2]},{(void*)0,&l_528[0][0],&l_579,(void*)0,&l_528[0][0],&l_580[0]},{&l_528[0][2],(void*)0,&l_528[0][2],&l_799,&l_579,&l_767},{&l_799,&l_579,&l_767,&l_580[0],(void*)0,&l_528[0][0]},{&g_162,&l_579,&l_767,&l_579,&g_315,&l_799},{&g_315,&l_799,&l_528[0][0],&g_162,&l_528[0][0],&l_799},{&l_526,&l_579,(void*)0,&g_411,&l_528[0][0],&l_580[0]}},{{(void*)0,(void*)0,&l_580[0],&l_799,&g_162,(void*)0},{&l_799,(void*)0,(void*)0,&l_579,&l_528[0][0],&g_315},{&l_767,&l_579,&l_580[0],(void*)0,&l_528[0][0],&l_580[0]},{&l_580[0],&l_799,&g_162,(void*)0,&g_315,&l_528[0][0]},{&l_767,&l_579,&g_411,&l_580[0],(void*)0,&l_579},{&l_579,&l_579,&l_528[0][2],&l_528[0][2],&l_579,&l_579},{&l_580[0],(void*)0,&l_579,&l_767,&l_528[0][0],&l_526}},{{&l_528[0][0],&l_528[0][0],&l_799,&g_162,(void*)0,&l_528[0][0]},{&l_528[0][0],&l_528[1][2],&g_162,&l_767,(void*)0,&l_799},{(void*)0,&l_528[0][2],&l_799,&l_579,&l_767,&l_580[0]},{&l_580[0],&l_528[0][0],&l_528[0][0],&g_162,&g_315,&l_528[1][2]},{&l_528[0][0],(void*)0,(void*)0,&l_767,&g_162,(void*)0},{&g_411,(void*)0,&g_162,(void*)0,&g_411,&l_799},{&l_580[0],&g_162,&l_528[0][2],(void*)0,&l_767,(void*)0}}};
                    union U1 ***l_823 = &l_596[0][2][2];
                    int i, j, k;
                    (*l_770) = l_800;
                    g_811++;
                    (*l_800) = (safe_rshift_func_uint8_t_u_s((!(safe_mul_func_int8_t_s_s(p_38, l_579))), (((safe_mul_func_int8_t_s_s((((((((void*)0 == l_823) != ((((safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((g_228 &= p_38), p_38)), (safe_sub_func_uint16_t_u_u(1UL, g_231[4])))) , (-3L)) || (*l_771)) > (**l_770))) & 0xD42B4A45L) <= p_38) || 1L) < l_563), 0xA5L)) > 0xFD5EL) > g_289)));
                    g_660 = &g_162;
                }
                if (l_830)
                    break;
                if (p_38)
                    continue;
                for (g_747.f3 = 0; (g_747.f3 <= 4); g_747.f3 += 1)
                { 
                    (*l_771) = p_38;
                    if (p_38)
                        break;
                }
                for (l_526 = 0; (l_526 <= 4); l_526 += 1)
                { 
                    const int32_t **l_831[4][2][6] = {{{&g_660,&g_660,&g_660,&g_660,&g_660,&g_660},{&g_660,&g_660,&g_660,&g_660,&g_660,&g_660}},{{&g_660,&g_660,&g_660,&g_660,&g_660,&g_660},{&g_660,&g_660,&g_660,&g_660,&g_660,&g_660}},{{&g_660,&g_660,&g_660,&g_660,&g_660,&g_660},{&g_660,&g_660,&g_660,&g_660,&g_660,&g_660}},{{&g_660,&g_660,&g_660,&g_660,&g_660,&g_660},{&g_660,&g_660,&g_660,&g_660,&g_660,&g_660}}};
                    int i, j, k;
                    (*l_770) = &g_411;
                    g_660 = &g_659;
                    if (p_38)
                        break;
                }
            }
        }
        else
        { 
            int32_t **l_832 = &g_161;
            union U4 l_849 = {0x555BL};
            union U1 l_883 = {0UL};
            union U5 **l_893 = &l_786;
            uint32_t ****l_898 = &g_895;
            (*l_832) = &g_411;
            for (g_280.f0 = 0; (g_280.f0 <= 4); g_280.f0 += 1)
            { 
                uint16_t l_833 = 0UL;
                int32_t l_841[6][2] = {{(-1L),(-4L)},{(-4L),(-1L)},{(-4L),(-4L)},{(-1L),(-4L)},{(-4L),(-1L)},{(-4L),(-4L)}};
                int i, j;
                for (g_173 = 1; (g_173 <= 4); g_173 += 1)
                { 
                    (**l_832) = ((((p_38 >= l_833) == ((safe_add_func_uint16_t_u_u(((0x9EDB9D20L & (*g_660)) | (g_836 != (void*)0)), (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(l_523, p_38)), 6)))) <= l_580[0])) , g_289) >= (*l_564));
                    return (*g_660);
                }
                for (g_289 = 0; (g_289 <= 4); g_289 += 1)
                { 
                    int32_t *l_842 = &l_841[1][0];
                    int32_t *l_843 = &l_526;
                    int32_t l_844 = (-1L);
                    int32_t *l_845[7] = {&l_579,&l_579,&l_579,&l_579,&l_579,&l_579,&l_579};
                    union U3 l_850 = {0};
                    int i;
                    l_841[2][1] ^= 0xC82C4E1FL;
                    if (p_38)
                        continue;
                    --l_846;
                    l_784[(g_280.f0 + 2)] = l_784[(g_280.f0 + 2)];
                    (**g_836) = (l_849 , (l_850 , (*g_743)));
                }
            }
            if ((((0UL & 1L) , (l_730 , ((l_489.f2 > (safe_sub_func_uint32_t_u_u(4UL, (p_38 , (safe_lshift_func_uint8_t_u_s(((1UL != 0xB5L) && 0L), l_579)))))) <= p_38))) == l_649.f2))
            { 
                union U2 ****l_856 = &g_836;
                union U2 *****l_855 = &l_856;
                (*l_855) = &g_836;
            }
            else
            { 
                int32_t *l_872 = &l_767;
                uint64_t *l_876 = &g_632;
                uint64_t *l_916 = (void*)0;
                uint64_t *l_917 = &g_111;
                uint64_t *l_918 = &g_280.f1;
                if (((*g_161) ^= (((*g_237) = (void*)0) == (l_857 = (void*)0))))
                { 
                    (*g_161) &= 0x490905C3L;
                    (*g_161) &= l_489.f2;
                }
                else
                { 
                    int8_t **l_863 = &l_862;
                    union U3 *l_869 = &g_305;
                    union U3 **l_868[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t *l_873 = &g_315;
                    int i, j;
                    g_660 = (*l_832);
                    l_870 = (((+((safe_add_func_uint16_t_u_u((((*l_863) = l_862) != (void*)0), (safe_sub_func_int32_t_s_s(p_38, (((safe_sub_func_int8_t_s_s(3L, 1UL)) > (*g_692)) < p_38))))) ^ p_38)) || (**l_832)) , (void*)0);
                    (*l_832) = (l_873 = l_872);
                }
                (*l_872) = ((safe_div_func_int16_t_s_s(((((((*l_872) || ((((*l_564) = ((((((*g_692) , &l_501[0]) != l_876) && (**l_832)) < (safe_mod_func_uint32_t_u_u(((((l_563 , ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((((*l_876) = g_747.f2) || g_747.f2), (*l_564))) & p_38), (*l_872))) || p_38)) , l_883) , (**l_832)) >= (**l_832)), g_289))) , l_505.f0)) > 0x59F9L) , l_649.f5)) && (*g_692)) >= (-1L)) >= (*g_660)) && (*l_564)), (*g_692))) , 0xD3622710L);
                l_884 = (*g_660);
                l_898 = (((((safe_mod_func_int32_t_s_s((((*g_161) , (safe_rshift_func_uint16_t_u_u((0x4715L == p_38), (*g_692)))) & ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(((**l_832) , (*l_872)), (((0x18D38AE2L > (-1L)) , l_893) == l_893))) ^ 4294967295UL), 10)) && 0x52L)), 0x4F377273L)) | p_38) & p_38) == p_38) , g_894);
                l_919 &= ((safe_div_func_int8_t_s_s(((l_580[0] == (safe_lshift_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s(g_162, (safe_rshift_func_int16_t_s_s(0x4E1CL, (((**l_832) = (0x8594A697L & (g_871 , (-5L)))) != ((safe_lshift_func_int8_t_s_u(((((!((*l_918) = ((*l_917) = ((*l_876) = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((g_666[1][2][1] == 0x647B4652E6B90107LL), p_38)), 0x178AL)))))) != p_38) && l_649.f5) & 0x6AL), 7)) > l_649.f2)))))) , (**l_832)) >= 4294967288UL) < 0xDDL), 5))) >= 0xF68B2FE444475C06LL), l_883.f1)) || l_649.f2);
            }
        }
    }
    else
    { 
        uint64_t *l_925 = &g_126;
        const int16_t l_933[3] = {0x1AEFL,0x1AEFL,0x1AEFL};
        int32_t *l_936 = &g_411;
        int8_t l_939 = 0L;
        union U5 *l_947 = &l_505;
        int32_t **l_951 = &l_936;
        union U2 *l_973 = &g_180[1];
        int32_t l_976 = 0x680FF4CEL;
        int32_t l_977 = 1L;
        int32_t l_979 = 6L;
        uint8_t l_1027 = 0x40L;
        union U4 * const *l_1069 = &g_220;
        int i;
        if (((*g_221) , (l_505.f0 , (safe_unary_minus_func_uint8_t_u(l_489.f0)))))
        { 
            uint16_t l_940[4][7] = {{8UL,0x15FEL,0xE931L,0xFE34L,0xE931L,0x15FEL,8UL},{0xC02FL,0UL,1UL,0x5755L,1UL,0UL,0xC02FL},{8UL,0x15FEL,0xE931L,0xFE34L,0xE931L,0x15FEL,8UL},{0xC02FL,0UL,1UL,0x5755L,1UL,0UL,0xC02FL}};
            union U5 *l_948 = (void*)0;
            int i, j;
            for (g_111 = (-3); (g_111 > 13); ++g_111)
            { 
                struct S0 l_926 = {0x22BAB861L,-416,4294967294UL,7L,0,1877};
                int32_t l_935 = 0xA99F2C46L;
                int64_t *l_941[2][3][4] = {{{&g_666[1][2][1],&l_649.f3,&g_666[1][2][1],&l_649.f3},{&g_666[1][2][1],&l_649.f3,&g_666[1][2][1],&l_649.f3},{&g_666[1][2][1],&l_649.f3,&g_666[1][2][1],&l_649.f3}},{{&g_666[1][2][1],&l_649.f3,&g_666[1][2][1],&l_649.f3},{&g_666[1][2][1],&l_649.f3,&g_666[1][2][1],&l_649.f3},{&g_666[1][2][1],&l_649.f3,&g_666[1][2][1],&l_649.f3}}};
                uint32_t *l_944 = &g_747.f0;
                int32_t *l_945 = (void*)0;
                int32_t *l_946 = &l_580[0];
                int i, j, k;
                if (((**g_219) , 0x1401A959L))
                { 
                    int32_t *l_934 = &g_173;
                    l_935 &= (((*l_934) = (p_38 < ((~((+((void*)0 == l_925)) ^ (((l_926 , (((***g_836) , ((l_926 , (safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(0xB078L, g_412)) ^ 7L), 254UL)), 0xFCDDCEB05D79D8FALL))) > p_38)) <= p_38)) <= (*g_692)) && l_933[0]))) , g_333[2][0]))) , (-5L));
                }
                else
                { 
                    int32_t **l_937 = &l_936;
                    int32_t **l_938 = &g_161;
                    (*l_938) = ((*l_937) = l_936);
                    return (**l_938);
                }
                (*l_946) = ((((*g_692) && ((g_156 = (l_939 == l_940[1][4])) != (safe_add_func_int64_t_s_s(((*l_936) = ((g_871 , (l_563 == (((l_649.f1 = ((*l_944) = (*l_936))) >= 1UL) <= (-1L)))) == 0x6C06A2D6L)), 0x560E05B6107E31BFLL)))) < g_126) ^ p_38);
                if ((*l_936))
                    break;
                (*l_936) = ((l_579 , l_947) == l_948);
            }
        }
        else
        { 
            for (g_222.f0 = 0; (g_222.f0 == 57); g_222.f0 = safe_add_func_int8_t_s_s(g_222.f0, 9))
            { 
                return (*g_660);
            }
        }
        (*l_951) = &l_580[0];
        for (g_293 = (-30); (g_293 != 6); g_293 = safe_add_func_int8_t_s_s(g_293, 4))
        { 
            union U2 *l_972 = &g_180[1];
            uint32_t l_974[7];
            int32_t l_983 = 0x66F27135L;
            int32_t l_996 = (-1L);
            union U3 l_1052 = {0};
            const struct S0 l_1060 = {4294967292UL,629,0xADB54B5AL,-1L,0,340};
            int32_t *l_1072 = &g_411;
            int i;
            for (i = 0; i < 7; i++)
                l_974[i] = 0xC8B9D4C1L;
        }
    }
    (*l_1074) = ((*g_221) , l_846);
    g_660 = (g_161 = ((**g_219) , &l_580[0]));
    return p_38;
}



static const union U1  func_45(uint8_t * p_46, uint8_t * p_47, uint32_t  p_48, int8_t * p_49)
{ 
    uint32_t *l_347 = &g_328[1][0][5];
    uint32_t **l_346 = &l_347;
    uint32_t ***l_345 = &l_346;
    uint16_t *l_356 = &g_180[0].f1;
    uint16_t *l_357 = &g_81;
    union U5 l_364 = {0x6BL};
    struct S0 l_365 = {4294967289UL,-40,0xC5AEE3F4L,0x2023E9181DD65BF2LL,0,671};
    int32_t l_366[7] = {0L,0xD1D656DAL,0xD1D656DAL,0L,0xD1D656DAL,0xD1D656DAL,0L};
    uint64_t * const l_371 = (void*)0;
    int16_t l_409 = 1L;
    uint32_t l_442 = 0x8074033CL;
    int32_t l_446 = (-4L);
    int64_t l_450[4];
    uint32_t l_451 = 8UL;
    const union U4 l_460 = {65535UL};
    union U2 l_461 = {1L};
    int i;
    for (i = 0; i < 4; i++)
        l_450[i] = 0x5102C34CA4F0B8C3LL;
    for (g_294 = 18; (g_294 == 18); ++g_294)
    { 
        return (*g_221);
    }
    if (((*g_161) = ((l_366[1] ^= ((((p_48 == ((void*)0 != &g_161)) , ((((void*)0 == l_345) > (safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(0x07C1DF6277E42EC9LL, (safe_add_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(((*l_357)--))), (safe_mod_func_uint32_t_u_u(((safe_div_func_int64_t_s_s((l_364 , l_364.f0), p_48)) == 6UL), (*g_161))))))), 5))))) || 0x7906L)) , l_365) , 0xFC48C961L)) , (-9L))))
    { 
        uint16_t l_377[5] = {1UL,1UL,1UL,1UL,1UL};
        uint32_t * const l_379 = (void*)0;
        union U2 l_380 = {-6L};
        union U4 *l_389 = &g_166[2][0];
        int32_t l_397 = (-3L);
        int32_t *l_443 = (void*)0;
        int32_t *l_444 = &l_397;
        int32_t *l_445[1][7][2] = {{{&g_411,&g_411},{&g_411,&g_411},{&g_411,&g_411},{&g_411,&g_411},{&g_411,&g_411},{&g_411,&g_411},{&g_411,&g_411}}};
        uint8_t *l_447 = (void*)0;
        uint8_t *l_448 = (void*)0;
        uint8_t *l_449[2][6][4] = {{{&g_231[1],&g_231[1],&g_231[1],&g_231[1]},{&g_231[1],&g_231[1],&g_231[1],&g_231[1]},{&g_231[1],&g_231[1],&g_231[1],&g_231[1]},{&g_231[1],&g_231[1],&g_231[1],&g_231[1]},{&g_231[1],&g_231[1],&g_231[1],&g_231[1]},{&g_231[1],&g_231[1],&g_231[1],&g_231[1]}},{{&g_231[1],&g_231[1],&g_231[1],&g_231[1]},{&g_231[1],&g_231[1],&g_231[1],&g_231[1]},{&g_231[1],&g_231[1],&g_231[1],&g_231[1]},{&g_231[1],&g_231[1],&g_231[1],&g_231[1]},{&g_231[1],&g_231[1],&g_231[1],&g_231[1]},{&g_231[1],&g_231[1],&g_231[1],&g_231[1]}}};
        uint32_t l_462[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_462[i] = 0x76CD814CL;
        for (g_222.f2 = 1; (g_222.f2 <= 4); g_222.f2 += 1)
        { 
            int32_t l_374 = 0x1647D06EL;
            union U1 l_375 = {18446744073709551613UL};
            uint8_t ***l_376[2][4] = {{&g_256,&g_256,&g_256,&g_256},{&g_256,&g_256,&g_256,&g_256}};
            int16_t *l_378 = &g_294;
            const int8_t * const l_382 = &l_375.f2;
            const int8_t * const *l_381 = &l_382;
            int32_t l_402 = 0x0FAE5598L;
            int32_t l_403 = 9L;
            int16_t l_405 = 0L;
            uint16_t l_406[6][6][6] = {{{0x0CB6L,0xBC7BL,1UL,0xAF14L,0xD2EDL,0x83E0L},{0xE245L,0x6315L,0x0CB6L,0x568BL,0xB189L,0x0CB6L},{1UL,0x6315L,0xB843L,0xE245L,0xD2EDL,0x568BL},{0xB9D5L,0xBC7BL,0xAF14L,0xB843L,0xAF24L,0xB843L},{0xAF14L,0x219FL,0xAF14L,0x83E0L,0x6315L,0x568BL},{0x5415L,4UL,0xB843L,0x6096L,0xB784L,0x0CB6L}},{{0x6096L,0xB784L,0x0CB6L,0x6096L,0x5C97L,0x83E0L},{0x5415L,0xB189L,1UL,0x83E0L,0x2788L,0xB9D5L},{0xAF14L,0x5C97L,0UL,0xB843L,0x2788L,1UL},{0xB9D5L,0xB189L,0x1F27L,0xE245L,0x5C97L,1UL},{1UL,0xB784L,0x568BL,0x568BL,0xB784L,1UL},{0xE245L,4UL,0x1F27L,0xAF14L,0x6315L,1UL}},{{0x0CB6L,0x219FL,0UL,1UL,0xAF24L,0xB9D5L},{0x0CB6L,0xBC7BL,1UL,0xAF14L,0xD2EDL,0x83E0L},{0xE245L,0x6315L,0x0CB6L,0x568BL,0xB189L,0x0CB6L},{1UL,0x6315L,0xB843L,0xE245L,0xD2EDL,0x568BL},{0xB9D5L,0xBC7BL,0xAF14L,0xB843L,0xAF24L,0xB843L},{0xAF14L,0x219FL,0xAF14L,0x83E0L,0x6315L,0x568BL}},{{0x5415L,4UL,0xB843L,0x6096L,0xB784L,0x0CB6L},{0x6096L,0xB784L,0x0CB6L,0x6096L,0x5C97L,0x83E0L},{0x5415L,0xB189L,1UL,0x83E0L,0x2788L,0xB9D5L},{0xAF14L,0x5C97L,0UL,0xB843L,0x2788L,1UL},{0xB9D5L,0xB189L,0x1F27L,0xE245L,0x5C97L,1UL},{1UL,0xB784L,0x9712L,0x9712L,0x6096L,1UL}},{{65530UL,1UL,0x6601L,0x27A1L,0xB843L,0x2B48L},{65535UL,0xE245L,1UL,1UL,0x5415L,0x8F17L},{65535UL,0x1F27L,1UL,0x27A1L,0UL,0UL},{65530UL,0xB843L,65535UL,0x9712L,0x0CB6L,65535UL},{1UL,0xB843L,65533UL,65530UL,0UL,0x9712L},{0x8F17L,0x1F27L,0x27A1L,65533UL,0x5415L,65533UL}},{{0x27A1L,0xE245L,0x27A1L,0UL,0xB843L,0x9712L},{65534UL,1UL,65533UL,0x8333L,0x6096L,65535UL},{0x8333L,0x6096L,65535UL,0x8333L,0xB9D5L,0UL},{65534UL,0x0CB6L,1UL,0UL,0x568BL,0x8F17L},{0x27A1L,0xB9D5L,1UL,65533UL,0x568BL,0x2B48L},{0x8F17L,0x0CB6L,0x6601L,65530UL,0xB9D5L,1UL}}};
            int i, j, k;
            (*g_161) = (((*l_378) = (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((&g_126 == l_371), g_231[g_222.f2])), ((p_48 & g_280.f0) != (safe_rshift_func_int8_t_s_s((l_377[1] |= ((l_374 = g_222.f2) >= ((l_375 , l_376[0][2]) != &g_256))), 0)))))) <= (-4L));
            for (g_280.f1 = 1; (g_280.f1 <= 4); g_280.f1 += 1)
            { 
                int32_t l_398 = 0x3E7B37B4L;
                uint32_t l_399 = 18446744073709551615UL;
                int i, j;
                for (g_126 = 0; (g_126 <= 6); g_126 += 1)
                { 
                    int i, j;
                    l_366[g_126] = (g_333[g_280.f1][(g_222.f2 + 1)] | (((((g_280 , l_379) == &g_328[0][3][5]) , l_380) , l_381) == g_383[0]));
                }
                if (g_333[g_280.f1][(g_222.f2 + 1)])
                    continue;
                if ((((g_305 , g_333[g_280.f1][(g_222.f2 + 1)]) > (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(0x1CFCL, 9L)) & (((p_48 < (((*g_219) = (*g_219)) != l_389)) , 1L) <= 0xC0L)), 0xBCABL))) < g_390[0]))
                { 
                    int32_t **l_391 = (void*)0;
                    int32_t *l_392 = (void*)0;
                    int32_t *l_393 = &l_366[1];
                    int32_t *l_394 = &g_162;
                    int32_t l_395[2][3] = {{0xDE2FF72DL,0xDE2FF72DL,0xDE2FF72DL},{(-1L),(-1L),(-1L)}};
                    int32_t *l_396[1];
                    int64_t l_410 = (-3L);
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_396[i] = &l_366[1];
                    g_161 = &l_366[0];
                    l_399++;
                    l_406[5][1][2]--;
                    g_412++;
                }
                else
                { 
                    int16_t *l_415[2];
                    int8_t *l_436[2][4];
                    int32_t l_437 = 1L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_415[i] = &l_409;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_436[i][j] = &l_380.f0;
                    }
                    (*g_161) = (((***l_345) ^= ((g_404 = ((*l_378) |= l_409)) != (((l_437 = ((((safe_div_func_uint16_t_u_u(((0xE4746589L != ((g_280 , (safe_add_func_uint32_t_u_u((p_48 , ((safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u(g_426, (l_397 = (safe_lshift_func_uint8_t_u_u((*p_47), ((safe_lshift_func_uint16_t_u_u((~(safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((l_365.f2 , 0L), 0xE4L)), (*p_47)))), 12)) <= p_48)))))), 18446744073709551609UL)), (*g_161))) == g_411)), (*g_161)))) <= 0xE3L)) , 65535UL), l_402)) ^ l_365.f5) <= p_48) & 0x1F7093A5E4534EDELL)) != p_48) | l_365.f2))) & p_48);
                    l_365.f1 = (safe_div_func_int32_t_s_s(((void*)0 != l_389), (safe_rshift_func_uint8_t_u_u(((((((p_48 , (((*l_378) |= (l_442 != 1UL)) <= l_377[1])) & (0x1D0DL || 0L)) > 0UL) == 0x5391L) , 0UL) || 0L), 1))));
                }
            }
        }
        l_389 = (void*)0;
        l_446 = ((*l_444) &= ((*g_161) = (l_365.f1 |= (*g_161))));
        l_446 |= (((((((l_366[5] , ((l_451--) && ((((l_366[1] = ((*l_444) ^= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((0L <= (l_365.f5 > ((p_48 , l_365.f0) > ((((safe_rshift_func_int16_t_s_s(((l_460 , l_461) , g_19), l_450[0])) ^ 8UL) < l_365.f1) <= l_365.f5)))), l_364.f0)), p_48)))) >= l_365.f4) < 0x4AL) > g_157))) && l_365.f4) ^ l_442) >= l_450[3]) || 0xC4F0L) && l_462[0]) ^ g_162);
    }
    else
    { 
        int32_t *l_463 = &g_162;
        int32_t *l_464[2];
        uint16_t l_465 = 0xC4E2L;
        int32_t **l_468 = &l_464[0];
        uint16_t *l_484 = &l_465;
        const union U1 l_485 = {8UL};
        int i;
        for (i = 0; i < 2; i++)
            l_464[i] = &l_366[1];
        l_465--;
        (*l_468) = l_464[0];
        (**l_468) |= ((((((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((g_81 > ((void*)0 == &l_460)) >= (p_48 >= (safe_sub_func_int16_t_s_s((~((l_365.f1 = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((g_180[0].f1 = 0xCF33L) < (((*l_484) = ((l_461.f0 || ((++(***l_345)) && ((safe_add_func_uint64_t_u_u(((*g_237) == (*g_237)), 0x3A7AE3B5AC5323B5LL)) < g_81))) == p_48)) < 2UL)) != 0UL), g_216)), g_166[2][0].f0))) != p_48)), p_48)))), 0x3BL)), 0x50D0L)) , (-1L)) | 0x2CL) == p_48) | p_48) >= l_365.f0);
        return l_485;
    }
    return (*g_221);
}



static uint8_t * func_50(union U5  p_51)
{ 
    uint16_t l_62 = 65535UL;
    uint8_t *l_65 = &g_66;
    int32_t l_71 = 0xC90B22F2L;
    uint32_t l_72 = 1UL;
    uint32_t *l_73 = &g_74;
    uint8_t **l_89 = (void*)0;
    uint8_t ***l_88 = &l_89;
    uint32_t l_90[2][1];
    union U1 l_120 = {0x5819B780L};
    int32_t l_158 = 0xEA926FAAL;
    int32_t l_171 = (-1L);
    int32_t l_175 = 6L;
    const uint8_t l_205 = 0UL;
    int8_t *l_250 = &g_170;
    int8_t **l_249 = &l_250;
    union U3 l_253 = {0};
    const int32_t *l_261 = &l_171;
    int32_t l_283 = 0xF1DAB952L;
    int32_t l_309 = 1L;
    union U4 l_312 = {7UL};
    uint8_t l_314 = 2UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_90[i][j] = 0xB7884FD3L;
    }
    for (p_51.f0 = (-20); (p_51.f0 >= 5); p_51.f0 = safe_add_func_uint8_t_u_u(p_51.f0, 7))
    { 
        return &g_19;
    }
    (*l_88) = func_57(l_62, (safe_lshift_func_uint8_t_u_u((*g_18), 6)), (--(*l_65)), ((p_51.f0 , ((*l_73) &= ((safe_mul_func_int32_t_s_s((g_2 | ((l_71 ^= p_51.f0) <= p_51.f0)), (p_51.f0 < l_72))) == 0x1970L))) ^ l_62));
    if (((void*)0 == (*l_88)))
    { 
        uint32_t l_92 = 0x934DB4AFL;
        uint64_t l_159 = 0x46F2EC8A69409422LL;
        uint8_t *l_160[4][6][7] = {{{&g_19,(void*)0,&g_66,&g_66,&g_19,&g_66,&g_66},{&g_19,&g_19,&g_19,&g_19,&g_19,(void*)0,&g_19},{&g_19,&g_19,(void*)0,(void*)0,&g_19,&g_19,&g_66},{&g_66,&g_19,&g_66,&g_66,&g_19,&g_66,(void*)0},{&g_66,(void*)0,&g_66,&g_66,&g_19,&g_19,&g_19},{&g_19,&g_66,&g_66,&g_19,(void*)0,&g_66,&g_19}},{{&g_19,(void*)0,&g_66,&g_19,&g_66,&g_19,&g_19},{&g_19,&g_19,&g_19,&g_19,&g_19,(void*)0,&g_19},{(void*)0,&g_66,&g_19,(void*)0,&g_66,&g_66,&g_19},{&g_66,&g_19,(void*)0,(void*)0,&g_19,&g_66,(void*)0},{(void*)0,(void*)0,(void*)0,&g_66,&g_19,&g_19,&g_66},{&g_19,(void*)0,&g_66,&g_19,&g_66,(void*)0,&g_19}},{{&g_19,(void*)0,(void*)0,&g_19,&g_19,&g_19,&g_66},{&g_19,&g_19,&g_66,&g_19,&g_19,&g_66,&g_19},{&g_66,&g_66,(void*)0,&g_66,&g_66,&g_19,&g_19},{&g_66,&g_19,&g_66,&g_66,(void*)0,&g_19,&g_66},{&g_66,&g_19,(void*)0,&g_66,&g_19,(void*)0,&g_66},{&g_66,&g_66,&g_66,&g_66,&g_19,&g_19,&g_66}},{{&g_66,&g_19,&g_66,&g_19,&g_19,&g_66,&g_66},{&g_66,(void*)0,&g_19,(void*)0,(void*)0,&g_19,(void*)0},{(void*)0,&g_19,&g_19,&g_19,&g_66,&g_66,&g_19},{&g_19,&g_66,&g_66,&g_66,&g_66,&g_19,&g_19},{&g_66,&g_66,&g_19,&g_66,&g_66,(void*)0,&g_19},{(void*)0,(void*)0,&g_19,&g_66,&g_66,&g_19,(void*)0}}};
        int32_t *l_164 = &g_162;
        int32_t l_169 = 0x3DCD55CDL;
        int32_t l_174 = 0xF08B2357L;
        union U1 l_252 = {18446744073709551614UL};
        const union U4 *l_259 = &g_166[3][0];
        const uint8_t *l_279 = (void*)0;
        const uint8_t **l_278 = &l_279;
        const uint8_t ***l_277[2][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_277[i][j] = &l_278;
        }
        for (l_62 = 0; (l_62 <= 0); l_62 += 1)
        { 
            int32_t *l_91 = &l_71;
            (*l_91) |= (-10L);
            for (l_71 = 0; (l_71 >= 0); l_71 -= 1)
            { 
                l_92++;
            }
        }
lbl_335:
        if (l_92)
        { 
            uint64_t l_99 = 0xA6A61002F449D34ELL;
            uint32_t *l_104 = (void*)0;
            uint32_t *l_105 = &g_106;
            uint16_t *l_114 = (void*)0;
            uint16_t *l_115 = &l_62;
            uint16_t *l_116 = (void*)0;
            uint16_t *l_117 = (void*)0;
            uint16_t *l_118 = &g_81;
            union U1 l_119 = {0x0625CAFDL};
            int8_t *l_121 = &l_119.f2;
            uint64_t *l_123 = &l_99;
            int32_t l_172 = 1L;
            union U2 * const l_179 = &g_180[0];
            int16_t *l_202[7][6][6] = {{{&g_168,(void*)0,(void*)0,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{(void*)0,(void*)0,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168}},{{&g_168,&g_168,&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,(void*)0,(void*)0,&g_168,&g_168,&g_168}},{{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{(void*)0,(void*)0,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,(void*)0,&g_168}},{{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,(void*)0,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{(void*)0,&g_168,&g_168,(void*)0,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168}},{{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,(void*)0,&g_168,&g_168,&g_168},{&g_168,(void*)0,&g_168,&g_168,&g_168,(void*)0},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,(void*)0,(void*)0,&g_168,&g_168}},{{(void*)0,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,(void*)0,&g_168,&g_168,&g_168,&g_168},{(void*)0,&g_168,&g_168,(void*)0,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168}},{{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,(void*)0,&g_168,&g_168,&g_168},{&g_168,(void*)0,&g_168,&g_168,&g_168,(void*)0},{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168},{&g_168,&g_168,(void*)0,(void*)0,&g_168,&g_168},{(void*)0,&g_168,&g_168,&g_168,&g_168,&g_168}}};
            uint32_t *l_218 = &g_176;
            int32_t l_225 = (-4L);
            int32_t l_226 = (-9L);
            int32_t l_229 = 0x8686F066L;
            struct S0 l_236 = {0x3B6B2B96L,569,0xE2A24FF4L,-1L,0,1402};
            uint8_t ***l_254 = &l_89;
            const int32_t *l_262 = &l_71;
            int32_t **l_264 = &l_164;
            int i, j, k;
            if (((((safe_sub_func_int64_t_s_s(g_66, (safe_sub_func_uint64_t_u_u(((*l_123) = ((l_99 | (safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((*l_118) &= ((*l_115) = ((++(*l_105)) , (p_51.f0 , (safe_rshift_func_uint8_t_u_s((g_111--), 3)))))), (((((((l_120 = l_119) , (l_121 == (void*)0)) & ((~0x88F66F91L) && (-2L))) | 0x4CFB0C79A429F2DDLL) && l_119.f2) == l_99) & 0x2BCECFDE0D86AF60LL))) | p_51.f0), 7UL))) < 1UL)), 1UL)))) , &g_66) != (void*)0) || (-10L)))
            { 
                int32_t *l_124 = &l_71;
                int32_t *l_125[4];
                int64_t *l_155[2];
                union U2 *l_182[6];
                union U2 **l_181 = &l_182[0];
                int i;
                for (i = 0; i < 4; i++)
                    l_125[i] = &l_71;
                for (i = 0; i < 2; i++)
                    l_155[i] = &g_156;
                for (i = 0; i < 6; i++)
                    l_182[i] = &g_180[2];
                ++g_126;
                if (((safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((0xEF1C4289D3A15942LL ^ p_51.f0) <= (~(safe_div_func_uint64_t_u_u((safe_div_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((safe_add_func_uint8_t_u_u((*g_18), (p_51.f0 || (safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((void*)0 != &l_121) | (safe_sub_func_int32_t_s_s(((g_157 ^= (safe_add_func_int64_t_s_s((l_71 = (safe_mod_func_int32_t_s_s(g_81, g_111))), l_72))) | g_81), l_158))), g_126)), 7)) <= l_159), p_51.f0)), l_90[0][0]))))))), g_2)), 0x1A57850C049AA43CLL)))), (-3L))) > 0x5D9B24318C785185LL), (*g_18))) , p_51.f0))
                { 
                    return l_160[0][5][3];
                }
                else
                { 
                    int32_t **l_163 = &l_124;
                    union U4 *l_165[5] = {&g_166[3][0],&g_166[3][0],&g_166[3][0],&g_166[3][0],&g_166[3][0]};
                    union U4 **l_167 = &l_165[3];
                    int i;
                    (*l_124) &= 1L;
                    (*l_163) = g_161;
                    l_164 = (*l_163);
                    (*l_167) = l_165[1];
                }
                g_176++;
                (*l_181) = l_179;
                (*g_161) = (*g_161);
            }
            else
            { 
                int16_t *l_187 = (void*)0;
                int16_t *l_188 = &g_168;
                (*g_161) = (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_51.f0, ((*l_188) = 0xD146L))), l_119.f2));
            }
            if (((safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(0UL, (!l_120.f0))) <= (safe_mod_func_int32_t_s_s(l_119.f0, (safe_lshift_func_int8_t_s_s((((p_51.f0 == ((safe_mod_func_uint16_t_u_u(((((*l_164) , (g_168 = 0x9AA1L)) == (safe_add_func_int16_t_s_s(p_51.f0, 9UL))) >= 0L), 0xC03FL)) , g_19)) | 0x6D1BL) , 0x19L), 0))))), p_51.f0)) > l_205))
            { 
                return &g_66;
            }
            else
            { 
                uint32_t *l_217 = &l_92;
                union U1 **l_223 = &g_221;
                int32_t l_227[1][5][7] = {{{7L,0x02AD1577L,7L,(-1L),0xA800174EL,0xA800174EL,(-1L)},{0x4FB78DA6L,1L,0x4FB78DA6L,0x1C407795L,0xB272A17EL,0xB272A17EL,0x1C407795L},{7L,0x02AD1577L,7L,(-1L),0xA800174EL,0xA800174EL,(-1L)},{0x4FB78DA6L,1L,0x4FB78DA6L,0x1C407795L,0xB272A17EL,0xB272A17EL,0x1C407795L},{7L,0x02AD1577L,7L,(-1L),0xA800174EL,0xA800174EL,(-1L)}}};
                int32_t **l_263 = &g_161;
                int i, j, k;
                (*l_164) = (safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u(p_51.f0, (safe_lshift_func_int8_t_s_u(((*l_121) = (safe_rshift_func_int16_t_s_u((g_168 &= 0x709BL), ((g_166[0][0] , (g_216 = p_51.f0)) || ((((l_218 = l_217) == (void*)0) , (void*)0) != g_219))))), p_51.f0)))), 0x9CL));
                (*l_223) = g_221;
                if (l_120.f1)
                { 
                    int32_t *l_224[6][7][4] = {{{&g_162,&l_169,&l_174,&l_174},{&l_171,&l_172,&l_174,&l_174},{&l_175,&l_169,&l_171,&g_162},{&l_175,&l_71,&l_171,&l_175},{&l_174,(void*)0,&l_171,&l_174},{&l_174,&l_71,&l_174,&g_162},{&l_172,&l_71,&l_71,&g_162}},{{&g_162,&l_171,&l_169,&l_171},{&l_71,&l_172,&l_169,&g_162},{&l_175,&l_175,(void*)0,(void*)0},{(void*)0,&l_169,&l_171,&l_174},{&l_169,(void*)0,&l_174,(void*)0},{&l_171,&g_162,&l_174,&g_162},{&l_71,&l_174,&l_175,&l_71}},{{&l_174,&l_169,&l_174,&l_172},{&l_174,&l_174,&l_175,&g_162},{&l_71,&l_172,&l_174,&l_174},{&l_171,&l_71,&l_174,&l_169},{&l_169,&l_174,&l_171,&l_71},{(void*)0,&g_162,(void*)0,&l_169},{&l_175,(void*)0,&l_169,&l_171}},{{&l_71,&l_171,&l_169,&l_174},{&l_175,&l_172,&l_171,&l_169},{&l_171,&g_162,&g_162,&l_175},{&l_169,&l_171,&l_71,&l_71},{&g_162,&g_162,&l_175,&g_162},{&g_162,&l_174,(void*)0,&l_172},{&l_174,&l_71,&l_169,(void*)0}},{{&l_71,&l_71,(void*)0,&l_172},{&l_71,&l_174,&l_71,&g_162},{&l_172,&g_162,(void*)0,&l_71},{&l_172,&l_171,&l_174,&l_175},{&l_172,&g_162,&l_174,&l_169},{&l_172,&l_172,&l_171,&l_174},{&l_174,&l_171,(void*)0,&l_171}},{{&l_174,(void*)0,&l_175,&l_169},{&l_174,&g_162,&l_71,&l_71},{&l_174,&l_174,&l_172,&l_169},{&l_175,&l_71,&l_175,&l_174},{&g_162,&l_172,&g_162,&g_162},{(void*)0,&l_174,(void*)0,&l_172},{(void*)0,&l_169,(void*)0,&l_71}}};
                    int64_t *l_239 = &l_236.f3;
                    uint32_t * const l_242 = &g_243;
                    uint32_t * const *l_241[1][4][4] = {{{&l_242,&l_242,&l_242,&l_242},{&l_242,&l_242,&l_242,&l_242},{&l_242,&l_242,&l_242,&l_242},{&l_242,&l_242,&l_242,&l_242}}};
                    uint32_t * const **l_240 = &l_241[0][2][3];
                    uint32_t * const *l_245 = &l_73;
                    uint32_t * const **l_244[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_244[i] = &l_245;
                    g_231[1]++;
                    l_226 = ((*g_161) = ((safe_sub_func_uint64_t_u_u((((*g_18) == (((l_227[0][4][0] , (l_236 , l_72)) , (((*l_239) = ((g_237 == (void*)0) && l_227[0][3][5])) < l_229)) == g_230)) & (*g_18)), g_180[0].f0)) < g_162));
                    g_246 = ((*l_240) = &l_217);
                }
                else
                { 
                    int32_t **l_247 = (void*)0;
                    int32_t **l_248 = &g_161;
                    uint8_t ****l_257 = &g_255[1][2][0];
                    struct S0 l_258 = {4294967289UL,30,0xCAB47AAEL,0x3F2C4129FC678946LL,0,283};
                    const union U4 **l_260 = &l_259;
                    (*l_248) = &g_162;
                    if (l_236.f0)
                        goto lbl_251;
lbl_251:
                    (*g_161) ^= ((void*)0 != l_249);
                    (**l_248) |= ((((void*)0 != &g_222) , ((l_252 , l_253) , l_254)) == ((*l_257) = g_255[0][5][0]));
                    (*l_260) = (l_258 , l_259);
                }
                l_262 = l_261;
                (*l_263) = &g_162;
            }
            (*l_264) = &l_172;
            (*g_161) = (((safe_sub_func_uint8_t_u_u((l_175 = 1UL), (safe_add_func_int16_t_s_s((g_156 & ((((-1L) != (*l_261)) || p_51.f0) != 65530UL)), ((safe_add_func_int32_t_s_s(((**l_264) = (((safe_mod_func_int64_t_s_s((safe_add_func_uint8_t_u_u((&g_256 != l_277[0][0]), p_51.f0)), g_162)) >= (-10L)) | g_222.f1)), p_51.f0)) >= p_51.f0))))) | 0L) > g_166[2][0].f0);
            (*g_161) &= (l_236 , (((g_280 , ((((*l_73) ^= g_243) || (((safe_sub_func_uint64_t_u_u(0x29AFF89D8E522D61LL, l_283)) & (((safe_div_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((0xD8L < (((g_231[3] , (*l_164)) < g_74) | g_168)), 255UL)) & g_176), g_173)) | p_51.f0) != 0x9A3684EDL)) & g_157)) != 0UL)) == 0L) == g_280.f0));
        }
        else
        { 
            int32_t *l_288[6][6] = {{&l_283,&l_175,&l_175,&l_283,&l_169,&l_169},{(void*)0,&l_175,&l_175,(void*)0,&l_169,&l_175},{&l_171,&l_175,&l_169,&l_171,&l_169,&l_175},{&l_283,&l_175,&l_175,&l_283,&l_169,&l_169},{(void*)0,&l_175,&l_175,(void*)0,&l_169,&l_175},{&l_171,&l_175,&l_169,&l_171,&l_169,&l_175}};
            uint32_t *l_292 = &g_106;
            uint64_t *l_313 = &l_159;
            int8_t *l_318 = (void*)0;
            union U4 *l_332 = &g_166[1][0];
            int16_t *l_334 = &g_168;
            int i, j;
            g_289--;
            (*l_164) ^= ((void*)0 == l_292);
            if (l_252.f1)
                goto lbl_335;
            g_295--;
            g_315 |= (safe_lshift_func_uint16_t_u_u((((*l_164) | ((+(safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((*l_164), (g_305 , (p_51.f0 | 0x9AC468D7L)))) != ((~(safe_mul_func_uint16_t_u_u(((l_309 , ((((*l_313) = (safe_div_func_int16_t_s_s((((l_312 , l_253) , 0L) < 4294967295UL), g_157))) <= 0x2D263616B983BC1DLL) == (-2L))) == p_51.f0), (*l_261)))) && l_314)) >= 0UL), (*l_261)))) > g_231[1])) | 0x8042BDC2L), (*l_164)));
            l_71 |= (((*l_334) = ((safe_mul_func_uint8_t_u_u((*l_261), (((*l_249) = l_318) != (void*)0))) , (safe_div_func_uint64_t_u_u((*l_261), ((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u((((((~(safe_lshift_func_uint16_t_u_u(g_328[0][3][5], 13))) | ((+(safe_mul_func_int8_t_s_s(((void*)0 != l_332), (*l_164)))) >= g_66)) , p_51.f0) >= p_51.f0) >= 0xE921L), g_333[0][5])) >= p_51.f0) < g_231[1]), p_51.f0)) | p_51.f0))))) != (*l_261));
        }
        for (g_168 = 0; (g_168 != (-28)); --g_168)
        { 
            int32_t **l_338 = &g_161;
            (*l_338) = &g_162;
        }
        return l_160[1][3][0];
    }
    else
    { 
        const int32_t *l_339[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        const int32_t **l_340 = &l_261;
        int i;
        (*l_340) = (g_280 , (l_339[4] = &g_162));
        (*l_340) = (*l_340);
    }
    return (*g_256);
}



static uint8_t ** func_57(int64_t  p_58, uint32_t  p_59, uint8_t  p_60, int32_t  p_61)
{ 
    union U3 l_77 = {0};
    int32_t l_80 = 9L;
    uint64_t *l_82 = (void*)0;
    uint64_t *l_83 = (void*)0;
    uint64_t *l_84 = (void*)0;
    int32_t l_85 = 5L;
    int32_t *l_86 = &l_80;
    uint8_t **l_87[5][5][1] = {{{&g_18},{&g_18},{(void*)0},{&g_18},{&g_18}},{{&g_18},{(void*)0},{&g_18},{&g_18},{&g_18}},{{&g_18},{(void*)0},{&g_18},{&g_18},{&g_18}},{{(void*)0},{&g_18},{&g_18},{&g_18},{&g_18}},{{(void*)0},{&g_18},{&g_18},{&g_18},{(void*)0}}};
    int i, j, k;
    l_80 = (g_74 , (safe_sub_func_int32_t_s_s(0x43E1243BL, (l_77 , (p_58 ^ (((l_85 ^= ((((g_66 ^= (*g_18)) == (g_81 ^= (p_58 | (safe_mod_func_uint16_t_u_u((l_80 <= p_58), g_74))))) | p_61) & 9L)) > p_61) == g_74))))));
    (*l_86) &= p_61;
    return l_87[0][0][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_21[i][j], "g_21[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_34[i], "g_34[i]", print_hash_value);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_231[i], "g_231[i]", print_hash_value);

    }
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_328[i][j][k], "g_328[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_333[i][j], "g_333[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_390[i], "g_390[i]", print_hash_value);

    }
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    transparent_crc(g_659, "g_659", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_666[i][j][k], "g_666[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_671, "g_671", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_672[i][j], "g_672[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_673, "g_673", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_674[i], "g_674[i]", print_hash_value);

    }
    transparent_crc(g_735, "g_735", print_hash_value);
    transparent_crc(g_747.f0, "g_747.f0", print_hash_value);
    transparent_crc(g_747.f1, "g_747.f1", print_hash_value);
    transparent_crc(g_747.f2, "g_747.f2", print_hash_value);
    transparent_crc(g_747.f3, "g_747.f3", print_hash_value);
    transparent_crc(g_747.f4, "g_747.f4", print_hash_value);
    transparent_crc(g_747.f5, "g_747.f5", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_980, "g_980", print_hash_value);
    transparent_crc(g_981, "g_981", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    transparent_crc(g_990, "g_990", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_992[i], "g_992[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_993[i], "g_993[i]", print_hash_value);

    }
    transparent_crc(g_994, "g_994", print_hash_value);
    transparent_crc(g_995, "g_995", print_hash_value);
    transparent_crc(g_1024, "g_1024", print_hash_value);
    transparent_crc(g_1133, "g_1133", print_hash_value);
    transparent_crc(g_1217, "g_1217", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1271[i], "g_1271[i]", print_hash_value);

    }
    transparent_crc(g_1442, "g_1442", print_hash_value);
    transparent_crc(g_1482, "g_1482", print_hash_value);
    transparent_crc(g_1599, "g_1599", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
