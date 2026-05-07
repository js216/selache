// SPDX-License-Identifier: MIT
// cctest_csmith_7f57bc81.c --- cctest case csmith_7f57bc81 (csmith seed 2136456321)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdf144279 */

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

// Options:   -s 2136456321 -o /tmp/csmith_gen_q7rgrkik/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   signed f0 : 31;
   signed f1 : 26;
   unsigned f2 : 21;
   const signed f3 : 12;
   const unsigned f4 : 13;
   unsigned f5 : 18;
};

union U1 {
   uint32_t  f0;
   const signed f1 : 23;
   uint64_t  f2;
};

union U2 {
   const int32_t  f0;
   const int8_t  f1;
};

union U3 {
   int8_t * f0;
   int32_t  f1;
   uint8_t  f2;
   signed f3 : 6;
};

union U4 {
   signed f0 : 3;
   int64_t  f1;
};

union U5 {
   uint64_t  f0;
   uint8_t  f1;
   signed f2 : 7;
   uint16_t  f3;
};

union U6 {
   const signed f0 : 24;
   uint16_t  f1;
   uint32_t  f2;
   uint64_t  f3;
   const int64_t  f4;
};

union U7 {
   const uint32_t  f0;
   int64_t  f1;
   const int8_t * const  f2;
};

union U8 {
   const int16_t  f0;
   const uint32_t  f1;
   uint16_t  f2;
};


static const uint64_t g_15 = 0xB382E58099740826LL;
static union U4 g_34[2][4] = {{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}}};
static int8_t g_36 = 1L;
static union U5 g_37 = {1UL};
static uint32_t g_38 = 0x94592404L;
static int32_t g_63 = 0x76A10B91L;
static uint16_t g_65 = 0x5841L;
static int16_t g_101 = 0x1377L;
static int16_t *g_100[7] = {&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101};
static uint16_t *g_121 = (void*)0;
static int32_t g_130[6] = {0x1BD54BCFL,0L,0x1BD54BCFL,0x1BD54BCFL,0L,0x1BD54BCFL};
static union U2 g_147 = {0x97688CC6L};
static union U2 *g_146 = &g_147;
static union U2 g_150 = {1L};
static uint64_t g_159[7][3][6] = {{{0x56E2F05403430B8FLL,0x2EEC2D120FEED502LL,0x4E3BA3332A5AE14ALL,18446744073709551615UL,0xA76550C97FB4A33CLL,0x37BD5445E50017F8LL},{0x38BF424DCF8C1653LL,0xFC972B03FFEDB683LL,0x960B8A5674ED4916LL,0x37BD5445E50017F8LL,0x4E3BA3332A5AE14ALL,18446744073709551611UL},{0xFC972B03FFEDB683LL,1UL,1UL,0x68686F06635C2736LL,0xBDFB097C18678765LL,0UL}},{{0x24FF47029A216054LL,0x4508A83B6B2B969ALL,0x56E2F05403430B8FLL,5UL,0UL,0UL},{2UL,0x93538FAA3ACFE0E7LL,0x93538FAA3ACFE0E7LL,0x8C8013064C4D074BLL,0x2EEC2D120FEED502LL,0x960B8A5674ED4916LL},{1UL,0xAA01866F3FEFEAB5LL,0UL,18446744073709551615UL,18446744073709551611UL,0x4E3BA3332A5AE14ALL}},{{0x117470866168E0BFLL,0x8C8013064C4D074BLL,0xA76550C97FB4A33CLL,5UL,18446744073709551611UL,0UL},{1UL,0xAA01866F3FEFEAB5LL,0x4508A83B6B2B969ALL,0x97E8E832C571BA37LL,0x2EEC2D120FEED502LL,0xFC972B03FFEDB683LL},{0x7EAE09CB0A74A4E0LL,0x93538FAA3ACFE0E7LL,2UL,0x38BF424DCF8C1653LL,1UL,18446744073709551615UL}},{{0UL,1UL,0x24FF47029A216054LL,1UL,0x4508A83B6B2B969ALL,0x93538FAA3ACFE0E7LL},{18446744073709551615UL,0x68686F06635C2736LL,0xFC972B03FFEDB683LL,0x68686F06635C2736LL,18446744073709551615UL,0x8C8013064C4D074BLL},{1UL,18446744073709551613UL,0x38BF424DCF8C1653LL,0xAA01866F3FEFEAB5LL,0x117470866168E0BFLL,0x6153177069160EC4LL}},{{0x960B8A5674ED4916LL,0x97E8E832C571BA37LL,0x56E2F05403430B8FLL,18446744073709551613UL,0xBDFB097C18678765LL,0x6153177069160EC4LL},{0x001B998DD83BD61ELL,0x37BD5445E50017F8LL,0x38BF424DCF8C1653LL,0x56E2F05403430B8FLL,1UL,0x8C8013064C4D074BLL},{0xBDFB097C18678765LL,18446744073709551611UL,0xFC972B03FFEDB683LL,0x001B998DD83BD61ELL,18446744073709551613UL,0x93538FAA3ACFE0E7LL}},{{18446744073709551610UL,0UL,0x24FF47029A216054LL,0x6153177069160EC4LL,6UL,18446744073709551615UL},{0xFC972B03FFEDB683LL,0UL,2UL,2UL,0UL,0xFC972B03FFEDB683LL},{0x56E2F05403430B8FLL,18446744073709551615UL,0x4508A83B6B2B969ALL,18446744073709551611UL,0x7EAE09CB0A74A4E0LL,0UL}},{{0x37BD5445E50017F8LL,1UL,0xA76550C97FB4A33CLL,0UL,0x6153177069160EC4LL,0x4E3BA3332A5AE14ALL},{0x37BD5445E50017F8LL,0x34DA7C746F662143LL,0UL,18446744073709551611UL,18446744073709551610UL,0x960B8A5674ED4916LL},{0x56E2F05403430B8FLL,0x7EAE09CB0A74A4E0LL,0x93538FAA3ACFE0E7LL,2UL,0x38BF424DCF8C1653LL,1UL}}};
static union U7 g_194 = {1UL};
static union U7 *g_193 = &g_194;
static struct S0 g_262 = {20397,1209,523,8,21,100};
static const union U1 g_288 = {1UL};
static int8_t g_317 = 0x27L;
static int32_t *g_338 = &g_63;
static uint32_t *g_346 = &g_38;
static uint32_t ** const g_345 = &g_346;
static const union U8 g_355 = {0x1D64L};
static const uint32_t g_360 = 0x54D42E12L;
static uint8_t g_380 = 0x08L;
static uint32_t g_388 = 0xE63440D8L;
static union U5 *g_408[3][7] = {{&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37}};
static union U5 **g_407 = &g_408[0][2];
static union U5 *** const g_406 = &g_407;
static uint32_t g_425[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static const int16_t *g_467 = &g_101;
static const int16_t **g_466 = &g_467;
static union U6 *g_470 = (void*)0;
static const union U1 g_475 = {0UL};
static const union U1 *g_474[4] = {&g_475,&g_475,&g_475,&g_475};
static int32_t **g_596[5] = {&g_338,&g_338,&g_338,&g_338,&g_338};
static union U8 g_599 = {0x514EL};
static union U1 g_616 = {0x6D4CA812L};
static union U1 *g_615 = &g_616;
static const uint16_t g_671[2][1] = {{65526UL},{65526UL}};
static const uint16_t *g_670 = &g_671[0][0];
static uint64_t g_674 = 0xD633423351E9D316LL;
static int16_t g_702 = 0x0743L;
static int32_t g_712[2] = {0xFF2D0489L,0xFF2D0489L};
static const union U8 g_722 = {1L};
static const union U8 *g_721[3] = {&g_722,&g_722,&g_722};
static uint32_t *g_726 = &g_616.f0;
static uint32_t **g_725 = &g_726;
static union U6 g_747 = {0L};
static union U3 g_779 = {0};
static int16_t **g_856 = &g_100[1];
static int16_t ** const *g_855 = &g_856;
static union U8 *g_899[4][7] = {{&g_599,&g_599,&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,&g_599,&g_599,&g_599,&g_599,&g_599}};
static union U8 **g_898 = &g_899[3][5];
static union U8 ***g_897 = &g_898;
static union U6 ** const g_904 = (void*)0;
static union U6 ** const *g_903 = &g_904;
static uint16_t **g_1084 = &g_121;
static uint64_t *g_1110 = (void*)0;
static uint64_t **g_1109 = &g_1110;
static uint8_t g_1144 = 0xA7L;
static int32_t g_1192[6] = {0x06B2738BL,0x06B2738BL,0x06B2738BL,0x06B2738BL,0x06B2738BL,0x06B2738BL};
static union U3 *g_1224 = &g_779;
static uint16_t g_1360 = 65527UL;
static const int64_t g_1406[3][2][3] = {{{0x4377BDB48904D380LL,0L,0x4377BDB48904D380LL},{0x4377BDB48904D380LL,0L,0x4377BDB48904D380LL}},{{0x4377BDB48904D380LL,0L,0x4377BDB48904D380LL},{0x4377BDB48904D380LL,0L,0x4377BDB48904D380LL}},{{0x4377BDB48904D380LL,0L,0x4377BDB48904D380LL},{0x4E1E985AE06A5633LL,0x4377BDB48904D380LL,0x4E1E985AE06A5633LL}}};



static union U6  func_1(void);
static uint64_t  func_2(int8_t * p_3, uint16_t  p_4, uint8_t  p_5, union U3  p_6);
static int8_t * func_7(int8_t * p_8, const union U2  p_9, union U7  p_10);
static int8_t * func_11(const uint8_t  p_12, const int8_t * p_13, union U8  p_14);
static const int8_t * func_16(const union U3  p_17);
static const union U3  func_18(int8_t * p_19, union U8  p_20, union U5  p_21, int8_t * p_22);
static int8_t * func_24(uint8_t  p_25, int8_t * const  p_26, int8_t * const  p_27, int8_t * p_28);
static uint8_t  func_29(int8_t * p_30, union U5  p_31, int8_t * p_32, uint32_t  p_33);




static union U6  func_1(void)
{ 
    uint32_t l_23 = 4294967289UL;
    int8_t *l_35 = &g_36;
    union U8 l_717 = {2L};
    union U5 l_718[5] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
    const union U2 l_1103 = {0x587F0ED2L};
    union U7 l_1104 = {0xF1C20C2EL};
    int8_t l_1169 = 0xC6L;
    union U3 l_1170 = {0};
    int32_t *l_1518 = &g_1192[4];
    union U6 l_1520 = {-5L};
    int i;
    if ((((l_1170.f3 = func_2((l_35 = func_7(func_11(g_15, func_16(func_18((l_23 , func_24(func_29((g_34[0][0] , l_35), g_37, l_35, (8L <= g_38)), &g_36, &g_317, &g_317)), l_717, l_718[2], l_35)), g_722), l_1103, l_1104)), l_1103.f0, l_1169, l_1170)) | l_1103.f0) || (**g_856)))
    { 
        int32_t *l_1516 = &g_63;
        int32_t **l_1517[6][2] = {{&g_338,&g_338},{&g_338,&g_338},{&g_338,&g_338},{&g_338,&g_338},{&g_338,&g_338},{&g_338,&g_338}};
        int i, j;
        l_1518 = l_1516;
    }
    else
    { 
        int32_t **l_1519 = &l_1518;
        (*l_1519) = (void*)0;
    }
    return l_1520;
}



static uint64_t  func_2(int8_t * p_3, uint16_t  p_4, uint8_t  p_5, union U3  p_6)
{ 
    int16_t l_1190[1][4][7] = {{{0xE997L,0L,0L,0xE997L,0x3F23L,0xE997L,0L},{0xAA93L,0xAA93L,1L,1L,1L,0xAA93L,0xAA93L},{1L,0L,(-1L),0L,1L,1L,0L},{0L,0x7A6BL,0L,1L,1L,0L,0x7A6BL}}};
    int32_t l_1211 = 0xBADFB4FFL;
    union U8 **l_1243[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t ***l_1261 = &g_856;
    int16_t ****l_1260 = &l_1261;
    union U2 *l_1293[1][1];
    union U5 ***l_1301 = &g_407;
    union U5 **** const l_1300[6][3][5] = {{{&l_1301,&l_1301,(void*)0,&l_1301,&l_1301},{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301},{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301}},{{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301},{&l_1301,&l_1301,&l_1301,&l_1301,(void*)0},{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301}},{{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301},{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301},{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301}},{{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301},{&l_1301,&l_1301,&l_1301,(void*)0,(void*)0},{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301}},{{&l_1301,&l_1301,(void*)0,&l_1301,&l_1301},{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301},{&l_1301,&l_1301,(void*)0,&l_1301,&l_1301}},{{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301},{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301},{&l_1301,&l_1301,&l_1301,&l_1301,&l_1301}}};
    union U4 l_1305 = {1L};
    int8_t *l_1324 = (void*)0;
    uint32_t l_1325 = 0x829D02A5L;
    union U8 ***l_1332 = &l_1243[0];
    const union U8 **l_1334 = &g_721[1];
    const union U8 ***l_1333 = &l_1334;
    const union U8 ****l_1335 = &l_1333;
    uint64_t *l_1344[1];
    union U6 ** const l_1369 = &g_470;
    union U7 * const l_1379 = (void*)0;
    int32_t l_1390 = (-1L);
    int32_t l_1391 = 1L;
    uint32_t l_1392 = 0x82CA9F18L;
    const uint32_t l_1408 = 0x125EE768L;
    union U8 * const *l_1452 = &g_899[3][5];
    union U8 * const **l_1451[5][6][1] = {{{(void*)0},{&l_1452},{&l_1452},{&l_1452},{&l_1452},{&l_1452}},{{&l_1452},{(void*)0},{&l_1452},{&l_1452},{(void*)0},{&l_1452}},{{(void*)0},{&l_1452},{&l_1452},{(void*)0},{&l_1452},{&l_1452}},{{&l_1452},{&l_1452},{&l_1452},{&l_1452},{(void*)0},{&l_1452}},{{&l_1452},{(void*)0},{&l_1452},{(void*)0},{&l_1452},{&l_1452}}};
    union U8 * const ** const *l_1450 = &l_1451[1][3][0];
    union U8 * const ** const **l_1449 = &l_1450;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1293[i][j] = &g_147;
    }
    for (i = 0; i < 1; i++)
        l_1344[i] = &g_747.f3;
    for (g_63 = 5; (g_63 >= 1); g_63 -= 1)
    { 
        union U7 l_1174 = {0xC0EFA4F5L};
        union U3 l_1186[7][3] = {{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}};
        int16_t ***l_1198 = &g_856;
        int16_t ****l_1197 = &l_1198;
        int32_t l_1209 = 0xEB0CDA95L;
        int32_t l_1210[7][4] = {{0L,0xA61D9CA0L,0L,0L},{0x89E40D9BL,0x89E40D9BL,0L,0x5F8FC31BL},{0L,(-5L),0x26D695C4L,0xA61D9CA0L},{1L,0x26D695C4L,0x5F8FC31BL,0x26D695C4L},{0x5F8FC31BL,0x26D695C4L,1L,0xA61D9CA0L},{0x26D695C4L,(-5L),0L,0x5F8FC31BL},{0L,0x89E40D9BL,0x89E40D9BL,0L}};
        union U8 **l_1244 = (void*)0;
        uint8_t *l_1245 = (void*)0;
        uint64_t l_1246 = 18446744073709551615UL;
        uint64_t *l_1247 = (void*)0;
        uint64_t *l_1248[4][5] = {{&g_37.f0,&l_1246,&l_1246,&g_37.f0,&l_1246},{&g_37.f0,&g_37.f0,&g_616.f2,&g_37.f0,&g_37.f0},{&l_1246,&g_37.f0,&l_1246,&l_1246,&g_37.f0},{&g_37.f0,&l_1246,&l_1246,&g_37.f0,&l_1246}};
        int16_t l_1249 = 0x1485L;
        int32_t *l_1250 = &l_1210[3][1];
        union U7 **l_1275 = (void*)0;
        union U5 ****l_1302 = (void*)0;
        int i, j;
    }
    return p_4;
}



static int8_t * func_7(int8_t * p_8, const union U2  p_9, union U7  p_10)
{ 
    int16_t l_1114 = 8L;
    uint32_t *l_1115 = &g_388;
    int32_t l_1116 = 0xCAB5EE36L;
    int32_t l_1128 = 0x298F249BL;
    union U6 l_1133 = {1L};
    int8_t *l_1134 = &g_36;
    struct S0 l_1137 = {24274,-7460,831,19,7,163};
    int32_t *l_1153 = &l_1116;
    int32_t *l_1154 = &g_130[5];
    union U8 l_1163 = {0L};
    for (g_747.f1 = 0; (g_747.f1 <= 2); g_747.f1 += 1)
    { 
        int32_t l_1107 = 0x79037C67L;
        int32_t *l_1108 = &g_130[4];
        uint64_t **l_1111 = &g_1110;
        int32_t l_1124 = 0xD0A31748L;
        int32_t l_1126 = 0x65E717A7L;
        int32_t l_1127[4][1][7] = {{{0xCABF1454L,0x57109723L,0xCABF1454L,1L,1L,0xCABF1454L,0x57109723L}},{{1L,0x57109723L,(-3L),(-3L),0x57109723L,1L,0x57109723L}},{{0xCABF1454L,1L,1L,0xCABF1454L,0x57109723L,0xCABF1454L,1L}},{{(-3L),(-3L),1L,(-3L),1L,(-3L),(-3L)}}};
        int i, j, k;
        (*g_338) = (safe_sub_func_uint16_t_u_u((p_10 , g_425[g_747.f1]), l_1107));
        (*l_1108) = ((*g_338) = 0x0D074830L);
        l_1116 = (((g_1109 != l_1111) || 65529UL) || ((safe_mul_func_int16_t_s_s(((*l_1108) && ((l_1114 != 0xDEDDFF0BL) || (((((((*g_470) , (void*)0) != l_1115) && 4L) == p_10.f0) | l_1114) ^ g_194.f1))), l_1114)) | p_10.f0));
        for (g_37.f0 = 0; (g_37.f0 <= 2); g_37.f0 += 1)
        { 
            int8_t l_1120 = 0xCEL;
            int32_t l_1121 = (-1L);
            int32_t l_1123 = 0xDD0EA004L;
        }
        if (l_1114)
            continue;
    }
    (*g_338) = (l_1133 , l_1114);
    for (g_65 = 0; (g_65 <= 1); g_65 += 1)
    { 
        return l_1134;
    }
    (*l_1154) = ((*l_1153) = ((safe_add_func_uint32_t_u_u((((*g_146) , (l_1137 , ((((*g_338) = (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(0x030FL, 8)), (((**g_856) = g_1144) , ((0xDEC9BCA9F4730A08LL < (safe_sub_func_int64_t_s_s(g_712[0], ((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(p_9.f0, l_1116)) , l_1137.f3), l_1116)), g_37.f1)) , l_1133.f0)))) ^ 0x16853373679BAC06LL)))), 6UL))) != p_9.f0) != l_1137.f3))) , p_10.f0), l_1128)) <= p_9.f1));
    for (g_747.f1 = (-11); (g_747.f1 < 25); g_747.f1 = safe_add_func_int8_t_s_s(g_747.f1, 2))
    { 
        uint32_t **l_1164 = (void*)0;
        union U8 **l_1165 = &g_899[0][5];
        uint8_t *l_1166 = &g_779.f2;
        uint8_t *l_1167 = &g_380;
        int64_t *l_1168[7] = {&g_194.f1,&g_194.f1,&g_194.f1,&g_194.f1,&g_194.f1,&g_194.f1,&g_194.f1};
        int i;
        (*l_1153) ^= (safe_div_func_int16_t_s_s((g_355.f0 <= (g_194.f1 &= (safe_lshift_func_uint16_t_u_s(p_9.f0, (4294967295UL && (safe_add_func_uint8_t_u_u(g_262.f5, (l_1163 , ((*l_1167) |= (l_1164 == ((((l_1165 != (void*)0) > (*g_338)) > 1L) , l_1164))))))))))), p_9.f0));
    }
    return &g_36;
}



static int8_t * func_11(const uint8_t  p_12, const int8_t * p_13, union U8  p_14)
{ 
    uint16_t l_784 = 0x22A0L;
    uint64_t *l_793 = &g_747.f3;
    uint64_t **l_792 = &l_793;
    union U5 *l_795 = &g_37;
    uint32_t l_804 = 0xEFCE7802L;
    int32_t l_828[5];
    uint32_t l_930[1];
    int32_t *l_940[5][5] = {{&g_63,&g_130[5],&g_63,&l_828[1],&l_828[2]},{&g_130[1],&g_63,&g_63,&g_130[1],&g_63},{&l_828[2],&g_130[5],&l_828[1],&g_130[5],&l_828[2]},{&g_63,&g_130[1],&g_63,&g_63,&g_130[1]},{&l_828[2],&l_828[1],&g_63,&g_130[5],&g_63}};
    union U4 *l_947 = (void*)0;
    const uint32_t *l_955 = &g_425[0];
    const uint32_t **l_954[2];
    union U5 ***l_958[5][1] = {{&g_407},{&g_407},{&g_407},{&g_407},{&g_407}};
    union U5 ****l_957 = &l_958[4][0];
    int8_t *l_964 = &g_36;
    int32_t l_975 = 0x65E42532L;
    uint32_t l_976 = 4294967287UL;
    uint32_t l_979 = 4294967292UL;
    union U7 *l_1008 = &g_194;
    const uint8_t l_1016 = 1UL;
    union U2 l_1066 = {0x20EA834CL};
    uint32_t l_1081 = 18446744073709551607UL;
    uint16_t **l_1082 = (void*)0;
    uint16_t ***l_1083 = (void*)0;
    int16_t l_1089[7][2][1] = {{{0x593EL},{1L}},{{0x2E37L},{1L}},{{0x593EL},{0x3ABDL}},{{0x3ABDL},{0x593EL}},{{1L},{0x2E37L}},{{1L},{0x593EL}},{{0x3ABDL},{0x3ABDL}}};
    int8_t l_1096 = (-4L);
    int32_t l_1101[7] = {0x9F6313EBL,0x9F6313EBL,0x9F6313EBL,0x9F6313EBL,0x9F6313EBL,0x9F6313EBL,0x9F6313EBL};
    uint8_t l_1102[1][6] = {{0x5BL,3UL,0x5BL,0x5BL,3UL,0x5BL}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_828[i] = 0L;
    for (i = 0; i < 1; i++)
        l_930[i] = 18446744073709551606UL;
    for (i = 0; i < 2; i++)
        l_954[i] = &l_955;
lbl_863:
    l_784 = p_14.f2;
    for (g_747.f3 = 0; (g_747.f3 < 57); g_747.f3++)
    { 
        uint64_t *l_791 = &g_159[5][0][5];
        uint64_t **l_790 = &l_791;
        int32_t l_794[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        union U5 *l_796 = &g_37;
        union U8 *l_825 = (void*)0;
        union U8 **l_824 = &l_825;
        int8_t *l_829[6][6] = {{&g_36,(void*)0,&g_36,&g_36,(void*)0,&g_36},{&g_36,(void*)0,&g_36,(void*)0,(void*)0,&g_36},{&g_36,&g_36,&g_36,&g_317,(void*)0,&g_317},{(void*)0,(void*)0,&g_317,&g_317,(void*)0,&g_36},{&g_36,(void*)0,&g_317,(void*)0,&g_36,&g_317},{&g_36,(void*)0,&g_36,&g_36,(void*)0,&g_36}};
        int16_t l_866 = 0x3A6AL;
        union U6 ** const l_906[4][6][1] = {{{&g_470},{&g_470},{(void*)0},{(void*)0},{&g_470},{&g_470}},{{&g_470},{&g_470},{&g_470},{&g_470},{&g_470},{&g_470}},{{(void*)0},{&g_470},{&g_470},{(void*)0},{&g_470},{&g_470}},{{&g_470},{&g_470},{&g_470},{&g_470},{&g_470},{(void*)0}}};
        union U6 ** const *l_905 = &l_906[1][4][0];
        uint16_t l_920 = 0x892DL;
        int32_t *l_939[2][2][4] = {{{&l_828[1],&l_828[1],&g_130[3],&l_828[1]},{&l_828[1],&l_794[2],&l_794[2],&l_828[1]}},{{&l_794[2],&l_828[1],&l_794[2],&l_794[2]},{&l_828[1],&l_828[1],&g_130[3],&l_828[1]}}};
        union U1 l_945[6][5] = {{{18446744073709551615UL},{0xFD0C804DL},{18446744073709551615UL},{0xFD0C804DL},{18446744073709551615UL}},{{0x212DA409L},{0x212DA409L},{0x212DA409L},{0x212DA409L},{0x212DA409L}},{{18446744073709551615UL},{0xFD0C804DL},{18446744073709551615UL},{0xFD0C804DL},{18446744073709551615UL}},{{0x212DA409L},{0x212DA409L},{0x212DA409L},{0x212DA409L},{0x212DA409L}},{{18446744073709551615UL},{0xFD0C804DL},{18446744073709551615UL},{0xFD0C804DL},{18446744073709551615UL}},{{0x212DA409L},{0x212DA409L},{0x212DA409L},{0x212DA409L},{0x212DA409L}}};
        const uint32_t **l_956 = (void*)0;
        union U5 ***l_959[1];
        union U5 * const ** const l_960 = (void*)0;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_959[i] = &g_407;
        if (((!(p_14.f2 <= (((safe_lshift_func_uint16_t_u_u(((p_14.f0 <= (((-1L) <= (l_790 == l_792)) | ((p_12 < (l_794[3] ^= (p_14.f0 || 255UL))) <= 0xC4133C08L))) & (**g_345)), 7)) | 0x27L) >= 5UL))) | p_14.f2))
        { 
            uint16_t l_797 = 65535UL;
            uint32_t *l_836 = &g_388;
            int32_t l_846[7];
            union U2 l_873[3][2][4] = {{{{0x92C8B4D1L},{1L},{0x92C8B4D1L},{5L}},{{0x92C8B4D1L},{5L},{5L},{0x92C8B4D1L}}},{{{0x684D9379L},{5L},{-1L},{5L}},{{5L},{1L},{-1L},{-1L}}},{{{0x684D9379L},{0x684D9379L},{5L},{-1L}},{{0x92C8B4D1L},{1L},{0x92C8B4D1L},{5L}}}};
            int8_t l_919[3];
            int64_t *l_924 = &g_194.f1;
            int16_t ** const * const l_927 = (void*)0;
            int32_t l_935[3];
            union U4 l_952 = {-6L};
            union U6 ** const * const l_953 = &g_904;
            int16_t l_961 = 0xF3A3L;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_846[i] = 0x37D83D0BL;
            for (i = 0; i < 3; i++)
                l_919[i] = (-5L);
            for (i = 0; i < 3; i++)
                l_935[i] = 0x32D9DBCEL;
            if (((l_795 == (l_796 = ((*g_407) = (*g_407)))) & (l_797 = g_262.f2)))
            { 
                uint32_t **l_837[3];
                int16_t *l_845 = &g_101;
                int16_t ** const **l_857 = &g_855;
                int32_t l_860 = 3L;
                int32_t *l_861 = (void*)0;
                int32_t *l_862 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_837[i] = &l_836;
                for (g_599.f2 = (-25); (g_599.f2 != 37); g_599.f2 = safe_add_func_uint64_t_u_u(g_599.f2, 2))
                { 
                    union U8 *l_821[4];
                    union U8 **l_820[4];
                    union U8 ***l_822 = (void*)0;
                    union U8 ***l_823 = &l_820[3];
                    union U8 ***l_826 = &l_824;
                    int32_t l_827[1];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_821[i] = &g_599;
                    for (i = 0; i < 4; i++)
                        l_820[i] = &l_821[2];
                    for (i = 0; i < 1; i++)
                        l_827[i] = 0x7C453615L;
                    (*g_338) = (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(l_804, (1UL & ((safe_rshift_func_int16_t_s_u((l_828[1] = (safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((0UL <= (safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(l_794[4], 9)), p_12))), ((!(safe_div_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((((*l_823) = l_820[1]) != ((*l_826) = l_824)), (-9L))), l_827[0]))) <= p_12))), 6))), (*g_670))) | 18446744073709551615UL)))), p_14.f0));
                    return l_829[5][2];
                }
                l_846[6] = (((safe_div_func_int16_t_s_s(((*l_845) = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*g_725) == (l_836 = l_836)), (*g_670))), ((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u(l_804, (safe_mod_func_int32_t_s_s((l_828[1] != (((safe_unary_minus_func_uint32_t_u(l_828[4])) != 2UL) == g_37.f1)), (*g_338))))), 3UL)) , (*g_670))))), (*g_670))) , g_779) , p_12);
                l_846[5] ^= ((*g_338) = (safe_div_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(248UL, ((void*)0 == l_836))) < ((safe_sub_func_uint8_t_u_u((((*l_857) = g_855) == (void*)0), (safe_mod_func_uint16_t_u_u(65535UL, ((l_860 & 0x56CC4D0FF6F7D862LL) , 1UL))))) >= g_159[4][0][5])), l_794[6])));
            }
            else
            { 
                int32_t l_872 = (-7L);
                int8_t *l_880 = &g_36;
                int32_t l_901 = 0x6A93F91AL;
                union U8 l_909[1] = {{-2L}};
                union U5 *l_912[2][5][3];
                struct S0 l_917 = {41107,-479,1102,43,18,470};
                int32_t *l_918[1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_912[i][j][k] = &g_37;
                    }
                }
                for (i = 0; i < 1; i++)
                    l_918[i] = &l_901;
                if (g_37.f1)
                    goto lbl_863;
                (*g_338) = (l_846[6] >= (l_866 <= p_14.f2));
                if (((safe_rshift_func_int16_t_s_u((~(safe_mul_func_uint16_t_u_u(((l_872 , &p_14) == (void*)0), p_14.f0))), 12)) != (l_873[2][0][3] , ((safe_mul_func_int8_t_s_s((g_317 |= 0xB3L), (safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(0xBE6EL, 65535UL)), 2)))) | (*g_670)))))
                { 
                    return l_880;
                }
                else
                { 
                    int32_t *l_889 = &l_846[5];
                    uint16_t *l_894 = &l_784;
                    uint8_t *l_900 = &g_37.f1;
                    int32_t **l_902 = &l_889;
                    (*l_889) ^= (((safe_lshift_func_int8_t_s_s(p_14.f2, (l_901 &= (safe_add_func_int32_t_s_s(((*g_338) &= ((p_14.f0 != (safe_mod_func_int32_t_s_s((((((***g_855) = (safe_mod_func_int16_t_s_s(((&l_872 != l_889) > (safe_mul_func_uint8_t_u_u(((*l_900) = ((safe_lshift_func_uint16_t_u_s((l_872 &= (--(*l_894))), 3)) <= ((((18446744073709551615UL == ((-1L) | (-1L))) && 1UL) , g_897) == &g_898))), p_14.f2))), p_12))) > (-1L)) , (*g_670)) > (*g_670)), 1UL))) == 0UL)), 9UL))))) ^ 0x932843D3DF07B226LL) >= 0x5F61FF710571FEF5LL);
                    (*l_902) = l_889;
                    l_905 = g_903;
                    (**l_902) ^= (safe_mod_func_int8_t_s_s((l_909[0] , ((safe_add_func_uint8_t_u_u((l_912[1][1][1] != ((*g_407) = l_912[1][1][1])), (safe_div_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(((0xFCB6264F3D79D7CELL || g_388) && (l_917 , 0x1BL)), g_37.f1)) , (-6L)), p_12)))) , 0x7CL)), (-4L)));
                    if ((*g_338))
                        break;
                }
                l_920--;
            }
            if (((*g_338) = (!(((*l_924) &= p_14.f2) && ((l_927 == l_927) >= (((safe_mod_func_int16_t_s_s(l_930[0], ((*g_470) , (safe_mul_func_int16_t_s_s((**g_856), (safe_add_func_uint8_t_u_u((((l_828[1] & p_14.f2) , (**g_345)) == 0xC16F7EAEL), 0xFDL))))))) || l_935[0]) >= p_14.f2))))))
            { 
                for (g_65 = 24; (g_65 != 8); g_65 = safe_sub_func_uint32_t_u_u(g_65, 8))
                { 
                    int32_t **l_938[7] = {&g_338,&g_338,&g_338,&g_338,&g_338,&g_338,&g_338};
                    const union U1 **l_941 = &g_474[3];
                    int i;
                    l_940[2][1] = (l_939[1][1][1] = &l_846[6]);
                    (*l_941) = &g_288;
                    l_939[1][1][1] = &l_846[3];
                }
            }
            else
            { 
                int32_t **l_942 = &l_940[2][3];
                union U5 *** const *l_943[4];
                union U5 *** const **l_944 = &l_943[1];
                union U7 *l_946 = &g_194;
                int i;
                for (i = 0; i < 4; i++)
                    l_943[i] = (void*)0;
                (*l_942) = &l_794[3];
                (*l_944) = l_943[1];
                l_946 = (l_945[3][3] , l_946);
                l_947 = (void*)0;
                (*g_338) &= ((((((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int64_t_s_s(((*l_924) = (l_952 , (l_953 != (void*)0))), (((l_956 = l_954[1]) != &l_955) >= (((l_957 != ((*g_146) , &l_958[4][0])) , l_959[0]) != l_960)))) & p_14.f0), l_961)) > 3L) <= l_919[0]) < 0L) < (*g_670)) , p_14.f2);
            }
            if (p_12)
                continue;
            if (p_14.f0)
                break;
            for (g_63 = 0; (g_63 == (-21)); g_63 = safe_sub_func_int8_t_s_s(g_63, 1))
            { 
                return l_964;
            }
        }
        else
        { 
            int32_t **l_966 = &l_939[1][1][1];
            (*g_338) ^= (safe_unary_minus_func_uint8_t_u((g_779.f2 = 4UL)));
            (*l_966) = &l_794[0];
            if ((*g_338))
                break;
            (*l_966) = (g_262 , &l_794[3]);
        }
    }
    for (g_616.f0 = 0; (g_616.f0 <= 0); g_616.f0 += 1)
    { 
        int32_t l_969[1];
        uint32_t l_999 = 18446744073709551615UL;
        union U6 *l_1011 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_969[i] = 1L;
        for (g_747.f3 = 0; (g_747.f3 <= 4); g_747.f3 += 1)
        { 
            int32_t l_967 = 0x7A1622C1L;
            int32_t l_968 = 8L;
            int32_t l_970 = 0x369D90AAL;
            int32_t l_971 = 0x83DA295DL;
            int32_t l_972 = 3L;
            int32_t l_973 = 0xA09F49ACL;
            int32_t l_974 = 0xE30DD02FL;
            union U1 l_996 = {0UL};
            int8_t *l_1003[3][2] = {{&g_317,&g_317},{(void*)0,&g_317},{&g_317,(void*)0}};
            int32_t *l_1007 = (void*)0;
            struct S0 l_1012[5] = {{20642,2702,1428,-21,70,345},{20642,2702,1428,-21,70,345},{20642,2702,1428,-21,70,345},{20642,2702,1428,-21,70,345},{20642,2702,1428,-21,70,345}};
            int32_t l_1026 = 1L;
            int32_t l_1027 = 0xA1CA4299L;
            int i, j;
            (***l_957) = (**g_406);
            l_976++;
            ++l_979;
            if ((safe_mul_func_uint16_t_u_u((((((safe_sub_func_uint16_t_u_u(0x5985L, (safe_rshift_func_uint8_t_u_s(0xF4L, 6)))) ^ (safe_div_func_uint32_t_u_u((l_967 && ((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(0xECFFL, 13)), (safe_mul_func_uint8_t_u_u((l_996 , (safe_add_func_uint8_t_u_u(l_999, (safe_lshift_func_int16_t_s_u(p_12, 12))))), l_970)))) , l_969[0])), (**g_345)))) || g_712[0]) || 0L) , (*g_670)), p_14.f2)))
            { 
                int32_t **l_1002 = &l_940[3][1];
                uint64_t *l_1004[4][4] = {{&l_996.f2,&l_996.f2,&l_996.f2,&l_996.f2},{&l_996.f2,&l_996.f2,&l_996.f2,&l_996.f2},{&l_996.f2,&l_996.f2,&l_996.f2,&l_996.f2},{&l_996.f2,&l_996.f2,&l_996.f2,&l_996.f2}};
                int i, j;
                (*l_1002) = &l_828[1];
                for (l_971 = 0; (l_971 >= 0); l_971 -= 1)
                { 
                    return l_1003[2][0];
                }
                l_969[0] = ((*g_338) = (g_147.f1 & (++g_674)));
                for (l_996.f0 = 0; (l_996.f0 <= 0); l_996.f0 += 1)
                { 
                    union U7 **l_1009 = &l_1008;
                    (*l_1002) = l_1007;
                    (*l_1009) = l_1008;
                    return l_1003[1][1];
                }
            }
            else
            { 
                int64_t l_1017 = 0x36336AE48C9B5028LL;
                int32_t l_1018 = 1L;
                int32_t l_1023 = (-6L);
                int32_t l_1025[2][5][7] = {{{0xECC40A2AL,0xECC40A2AL,0x54246FD2L,8L,0xF0F9090DL,0L,0xC26DB184L},{0xC26DB184L,5L,(-4L),1L,5L,1L,0x291EF077L},{0xDBD8AEDFL,1L,0x46C3B3D0L,0xD1D8D3AEL,0xF0F9090DL,0xDB18DC89L,0xD1D8D3AEL},{8L,0x425EDCCAL,9L,1L,0x291EF077L,0x4BDED6B1L,0xC26DB184L},{0x95DA3AAFL,(-4L),0xDBD8AEDFL,1L,0xDBD8AEDFL,(-4L),0x95DA3AAFL}},{{(-4L),0x8BD5436AL,1L,0xD1D8D3AEL,0xECC40A2AL,0xDBD8AEDFL,0L},{1L,0xECC40A2AL,6L,1L,8L,0x03F6A104L,1L},{0x95DA3AAFL,0xDB18DC89L,1L,8L,5L,1L,0xF0F9090DL},{5L,0x95DA3AAFL,0xDBD8AEDFL,5L,0xECC40A2AL,0x19DAC153L,0x19DAC153L},{(-9L),0x95DA3AAFL,9L,0x95DA3AAFL,1L,1L,0x19DAC153L}}};
                union U6 l_1050 = {-6L};
                uint32_t **l_1052[1][5];
                int32_t *l_1054 = &l_1018;
                struct S0 *l_1057 = &l_1012[1];
                struct S0 **l_1056 = &l_1057;
                int8_t l_1058 = 1L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1052[i][j] = &g_346;
                }
                if (p_12)
                { 
                    union U1 l_1010 = {0x1B97C8DCL};
                    int64_t *l_1013 = (void*)0;
                    int64_t *l_1014 = (void*)0;
                    int64_t *l_1015 = &g_194.f1;
                    int32_t l_1019 = 0L;
                    int8_t l_1020 = 0x8AL;
                    int32_t l_1021 = 0x036DEC16L;
                    int32_t l_1022 = (-1L);
                    int32_t l_1024[1];
                    uint64_t l_1028 = 0x3E70390DED8B9451LL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1024[i] = 0xF048AD20L;
                    l_969[0] = (((l_1010 , (((void*)0 != l_1011) != ((*l_1015) = (((*g_338) &= (l_1012[1] , ((g_34[0][0].f0 >= 255UL) | (p_14.f0 && 2L)))) , l_969[0])))) >= l_1016) ^ l_1010.f1);
                    ++l_1028;
                }
                else
                { 
                    uint8_t *l_1033 = &g_380;
                    const uint32_t **l_1051 = (void*)0;
                    int32_t l_1053 = 0x161E058FL;
                    int32_t **l_1055 = &l_940[2][4];
                    (*g_338) = (safe_div_func_uint8_t_u_u(((*l_1033) = p_12), (safe_div_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(1UL, (*g_467))), 0)) == p_14.f0) > (safe_rshift_func_int16_t_s_u((((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((*l_964) = (-8L)) == (g_317 = l_969[0])), 5)) > (l_1050 , 1L)), 14)), p_14.f0)), p_12)) < l_1025[0][0][5]) < p_14.f0), 10))), p_14.f2))));
                    (*g_338) = (l_1053 = (l_1051 != (g_262.f2 , l_1052[0][3])));
                    (*l_1055) = l_1054;
                }
                (*l_1056) = (void*)0;
                if (l_1058)
                    break;
                l_972 ^= (((safe_div_func_int64_t_s_s((((*l_964) = (safe_lshift_func_int16_t_s_u((~(safe_add_func_int32_t_s_s(((*l_1054) &= (((l_1066 , (((safe_lshift_func_uint8_t_u_s(g_671[1][0], p_14.f2)) || g_747.f3) != (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(p_14.f2, (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((*g_338) = ((0x3AF1FF1DL || (safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((g_616.f0 >= 0x2EDB175BBEB3485ELL), p_14.f0)), 12))) >= 0x3F937E1DL)), 0x557E0C3EL)), p_12)))), 6)))) , g_380) , l_1081)), 0L))), l_999))) <= 0x6BL), g_388)) , 65526UL) == 0x02EEL);
                if (g_747.f4)
                    goto lbl_863;
            }
        }
    }
    l_1102[0][5] &= ((((g_1084 = l_1082) != &g_121) >= (safe_div_func_uint32_t_u_u(1UL, (safe_add_func_int16_t_s_s((l_1089[6][1][0] & ((safe_div_func_int64_t_s_s(((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((l_1096 , (safe_add_func_uint8_t_u_u((((*l_793)++) ^ 0UL), p_12))), p_12)) > (-1L)), p_12)) == g_63), p_14.f0)) > l_1101[6])), p_14.f2))))) , 0x6749FCCEL);
    return &g_36;
}



static const int8_t * func_16(const union U3  p_17)
{ 
    int32_t *l_752 = &g_63;
    int32_t **l_753 = &l_752;
    union U3 *l_778 = &g_779;
    int8_t *l_780 = (void*)0;
    int8_t *l_781[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t *l_782 = &g_101;
    int64_t l_783 = 0x96413BD4A78A1ADALL;
    int i;
    (*l_753) = l_752;
    (*l_752) = (safe_div_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s((!(&g_671[0][0] == (void*)0)), (((~((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((**l_753), 1L)) == (safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((safe_add_func_uint64_t_u_u((0x66F6L == ((*l_782) = ((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((g_36 = ((g_288.f1 , l_778) != (void*)0)), 0xEBL)) | (**l_753)), g_262.f5)), g_65)) != 5UL))), 0x8B5D7044F071D6FALL)), 0xF0L)) | l_783), (**l_753)))), (*l_752))), 0xBBL)) != (-1L))) == (**l_753)) == (*l_752)))) == (-1L)) | g_355.f2) != (**l_753)), g_37.f1));
    return l_780;
}



static const union U3  func_18(int8_t * p_19, union U8  p_20, union U5  p_21, int8_t * p_22)
{ 
    uint32_t **l_727 = &g_726;
    uint32_t ***l_728 = &l_727;
    struct S0 l_735 = {38789,399,389,-59,89,192};
    int16_t *l_742 = &g_101;
    uint8_t *l_743[1][6] = {{&g_380,&g_380,&g_380,&g_380,&g_380,&g_380}};
    int64_t *l_744 = &g_194.f1;
    int32_t l_745 = 0x845BEC43L;
    union U6 * const l_746 = &g_747;
    union U6 **l_748[2];
    union U6 **l_749[5];
    union U6 **l_750 = &g_470;
    const union U3 l_751 = {0};
    int i, j;
    for (i = 0; i < 2; i++)
        l_748[i] = &g_470;
    for (i = 0; i < 5; i++)
        l_749[i] = &g_470;
    for (g_599.f2 = 2; (g_599.f2 > 40); ++g_599.f2)
    { 
        g_721[1] = &g_355;
    }
    l_745 |= (safe_mul_func_uint8_t_u_u(((***g_406) , (g_725 == ((*l_728) = l_727))), ((safe_rshift_func_uint16_t_u_s((((*g_346) = (((((*g_338) &= (((g_674++) ^ ((*l_744) = (1L != (safe_lshift_func_uint8_t_u_u((g_380 = (l_735 , ((safe_mul_func_uint8_t_u_u((0xB4L && ((safe_sub_func_int16_t_s_s(((*l_742) &= (safe_sub_func_uint8_t_u_u(p_20.f0, 1UL))), 0UL)) || 0x4266C06AL)), (*p_22))) >= p_20.f0))), 1))))) == l_735.f4)) & p_21.f0) > g_722.f0) || l_735.f5)) && (*g_346)), 7)) == (*p_19))));
    (*l_750) = l_746;
    return l_751;
}



static int8_t * func_24(uint8_t  p_25, int8_t * const  p_26, int8_t * const  p_27, int8_t * p_28)
{ 
    const uint64_t *l_545 = &g_159[4][0][5];
    const int32_t l_547 = 0L;
    int32_t l_551 = 1L;
    uint32_t *l_593 = &g_388;
    int32_t **l_595 = (void*)0;
    int32_t l_642 = 6L;
    int32_t l_643 = 0xCB2A06D8L;
    int32_t l_646[2][3][7] = {{{8L,8L,8L,8L,8L,8L,8L},{0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL},{8L,8L,8L,8L,8L,8L,8L}},{{0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL},{8L,8L,8L,8L,8L,8L,8L},{0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL,0x617E127AL}}};
    uint32_t l_668 = 0xAD559BFEL;
    int32_t l_708 = 0x65C689E5L;
    int8_t l_710[5] = {2L,2L,2L,2L,2L};
    int32_t l_711 = 0L;
    uint64_t l_713[2];
    int8_t *l_716[6][5][4] = {{{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0}},{{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317}},{{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0}},{{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317}},{{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0}},{{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317},{&l_710[1],&g_317,&l_710[1],(void*)0},{&l_710[1],(void*)0,&l_710[1],&g_317}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_713[i] = 0x8A80C4AEDA39EB88LL;
    for (g_388 = (-13); (g_388 == 59); g_388++)
    { 
        union U1 l_539[5][7] = {{{0x5A71DBFEL},{0xFCAADF67L},{0xFCAADF67L},{0x5A71DBFEL},{0xFCAADF67L},{0xFCAADF67L},{0x5A71DBFEL}},{{0xFCAADF67L},{0x5A71DBFEL},{0xFCAADF67L},{0xFCAADF67L},{0xFCAADF67L},{0UL},{0UL}},{{0xFCAADF67L},{0xFCAADF67L},{0x5A71DBFEL},{0xFCAADF67L},{0xFCAADF67L},{0x5A71DBFEL},{0xFCAADF67L}},{{0xFCAADF67L},{0UL},{0UL},{0xFCAADF67L},{0UL},{0UL},{0xFCAADF67L}},{{0UL},{0xFCAADF67L},{0UL},{0UL},{0xFCAADF67L},{0UL},{0UL}}};
        union U7 l_540 = {18446744073709551607UL};
        const uint64_t **l_546 = (void*)0;
        int32_t l_548 = 0xA45A4F7AL;
        int32_t l_552 = 8L;
        uint32_t l_553[5] = {0xD492B165L,0xD492B165L,0xD492B165L,0xD492B165L,0xD492B165L};
        union U6 l_570 = {-1L};
        union U4 *l_577 = (void*)0;
        int32_t **l_597[1];
        union U8 *l_598 = &g_599;
        int8_t *l_601 = (void*)0;
        uint32_t **l_680[4][2] = {{(void*)0,&l_593},{&l_593,(void*)0},{&l_593,&l_593},{(void*)0,&l_593}};
        int64_t *l_681 = &l_540.f1;
        int i, j;
        for (i = 0; i < 1; i++)
            l_597[i] = &g_338;
    }
    return p_28;
}



static uint8_t  func_29(int8_t * p_30, union U5  p_31, int8_t * p_32, uint32_t  p_33)
{ 
    int8_t *l_39 = &g_36;
    int16_t l_44 = 0xE515L;
    int32_t *l_62[6][7][4] = {{{&g_63,&g_63,&g_63,(void*)0},{&g_63,&g_63,(void*)0,&g_63},{&g_63,&g_63,&g_63,&g_63},{&g_63,&g_63,(void*)0,(void*)0},{&g_63,&g_63,(void*)0,&g_63},{&g_63,&g_63,(void*)0,&g_63},{&g_63,&g_63,(void*)0,&g_63}},{{&g_63,(void*)0,&g_63,&g_63},{&g_63,&g_63,(void*)0,&g_63},{&g_63,(void*)0,&g_63,&g_63},{&g_63,(void*)0,&g_63,&g_63},{&g_63,(void*)0,&g_63,&g_63},{(void*)0,(void*)0,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63}},{{&g_63,(void*)0,&g_63,&g_63},{(void*)0,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,(void*)0},{(void*)0,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,(void*)0}},{{(void*)0,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63},{&g_63,&g_63,&g_63,(void*)0},{&g_63,&g_63,(void*)0,&g_63},{&g_63,&g_63,&g_63,&g_63},{&g_63,&g_63,(void*)0,(void*)0},{&g_63,&g_63,(void*)0,&g_63}},{{&g_63,&g_63,(void*)0,&g_63},{&g_63,&g_63,(void*)0,&g_63},{&g_63,(void*)0,&g_63,&g_63},{&g_63,&g_63,(void*)0,&g_63},{&g_63,(void*)0,&g_63,&g_63},{&g_63,(void*)0,&g_63,&g_63},{&g_63,(void*)0,&g_63,&g_63}},{{(void*)0,(void*)0,&g_63,&g_63},{&g_63,&g_63,&g_63,&g_63},{&g_63,(void*)0,&g_63,&g_63},{(void*)0,(void*)0,(void*)0,&g_63},{&g_63,(void*)0,&g_63,&g_63},{&g_63,&g_63,(void*)0,(void*)0},{&g_63,&g_63,&g_63,&g_63}}};
    const union U1 l_71 = {0UL};
    uint32_t l_72 = 0x5F80954CL;
    struct S0 l_98 = {41598,-7663,395,14,57,412};
    uint8_t l_108 = 0xB9L;
    const uint16_t *l_144 = &g_37.f3;
    union U6 l_261 = {0xA1B2CCC2L};
    union U2 l_347 = {0xC49CCF56L};
    int8_t l_427 = 1L;
    uint64_t l_438 = 1UL;
    uint8_t l_454 = 0xDFL;
    union U2 **l_505[6][7][5] = {{{&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,(void*)0},{&g_146,&g_146,&g_146,&g_146,(void*)0},{&g_146,&g_146,(void*)0,(void*)0,&g_146},{(void*)0,&g_146,&g_146,&g_146,&g_146}},{{&g_146,&g_146,&g_146,(void*)0,(void*)0},{&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,&g_146,&g_146,&g_146,&g_146},{&g_146,(void*)0,(void*)0,&g_146,(void*)0},{&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,(void*)0},{&g_146,&g_146,&g_146,&g_146,&g_146}},{{&g_146,(void*)0,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,(void*)0},{&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,(void*)0,&g_146,&g_146,(void*)0},{&g_146,&g_146,&g_146,&g_146,(void*)0},{&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,(void*)0}},{{&g_146,(void*)0,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,(void*)0},{&g_146,&g_146,(void*)0,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146}},{{&g_146,&g_146,&g_146,&g_146,(void*)0},{&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,&g_146,(void*)0,&g_146,(void*)0},{&g_146,&g_146,(void*)0,&g_146,(void*)0},{&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,(void*)0,&g_146,(void*)0,(void*)0},{&g_146,&g_146,&g_146,&g_146,&g_146}},{{(void*)0,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,&g_146,&g_146,&g_146,&g_146},{(void*)0,&g_146,&g_146,&g_146,(void*)0},{&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,(void*)0,&g_146,&g_146,&g_146}}};
    union U2 **l_507 = &g_146;
    uint16_t *l_526 = &g_37.f3;
    uint16_t *l_527[1][3];
    union U8 l_534[1] = {{0xA608L}};
    union U6 *l_535 = &l_261;
    uint32_t l_536 = 0x6C18C4ADL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_527[i][j] = (void*)0;
    }
    return g_150.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_34[i][j].f0, "g_34[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_37.f1, "g_37.f1", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_130[i], "g_130[i]", print_hash_value);

    }
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    transparent_crc(g_147.f1, "g_147.f1", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_150.f1, "g_150.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_159[i][j][k], "g_159[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_194.f0, "g_194.f0", print_hash_value);
    transparent_crc(g_194.f1, "g_194.f1", print_hash_value);
    transparent_crc(g_262.f0, "g_262.f0", print_hash_value);
    transparent_crc(g_262.f1, "g_262.f1", print_hash_value);
    transparent_crc(g_262.f2, "g_262.f2", print_hash_value);
    transparent_crc(g_262.f3, "g_262.f3", print_hash_value);
    transparent_crc(g_262.f4, "g_262.f4", print_hash_value);
    transparent_crc(g_262.f5, "g_262.f5", print_hash_value);
    transparent_crc(g_288.f0, "g_288.f0", print_hash_value);
    transparent_crc(g_288.f1, "g_288.f1", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_355.f0, "g_355.f0", print_hash_value);
    transparent_crc(g_355.f2, "g_355.f2", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_425[i], "g_425[i]", print_hash_value);

    }
    transparent_crc(g_475.f0, "g_475.f0", print_hash_value);
    transparent_crc(g_475.f1, "g_475.f1", print_hash_value);
    transparent_crc(g_599.f0, "g_599.f0", print_hash_value);
    transparent_crc(g_599.f2, "g_599.f2", print_hash_value);
    transparent_crc(g_616.f0, "g_616.f0", print_hash_value);
    transparent_crc(g_616.f1, "g_616.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_671[i][j], "g_671[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_712[i], "g_712[i]", print_hash_value);

    }
    transparent_crc(g_722.f0, "g_722.f0", print_hash_value);
    transparent_crc(g_722.f2, "g_722.f2", print_hash_value);
    transparent_crc(g_747.f1, "g_747.f1", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1192[i], "g_1192[i]", print_hash_value);

    }
    transparent_crc(g_1360, "g_1360", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1406[i][j][k], "g_1406[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
