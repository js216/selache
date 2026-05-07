// SPDX-License-Identifier: MIT
// cctest_csmith_3ded52ea.c --- cctest case csmith_3ded52ea (csmith seed 1038963434)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfcd1fb80 */

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

// Options:   -s 1038963434 -o /tmp/csmith_gen_51qyhiae/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S1 {
   signed f0 : 19;
   signed f1 : 26;
   unsigned f2 : 20;
   const signed f3 : 9;
   unsigned f4 : 28;
   signed f5 : 19;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   struct S1  f0;
};
#pragma pack(pop)

struct S3 {
   uint64_t  f0;
   uint16_t  f1;
   uint64_t  f2;
   signed f3 : 28;
   const uint32_t  f4;
   struct S2  f5;
};

union U4 {
   int64_t  f0;
   uint32_t  f1;
   const uint8_t  f2;
};


static int32_t g_4 = 0xADF1ADB2L;
static int32_t g_10[2] = {0xBCE008FBL,0xBCE008FBL};
static uint64_t g_12 = 0x815F84255EBDA184LL;
static struct S3 g_27 = {18446744073709551613UL,65535UL,0xB037144DB28543B5LL,471,4294967287UL,{{513,1582,518,3,9837,264}}};
static uint32_t g_32 = 3UL;
static int16_t g_70 = 1L;
static uint32_t g_101[4][4][1] = {{{4294967295UL},{4294967288UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967288UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967288UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967288UL},{4294967295UL},{4294967295UL}}};
static uint16_t g_102 = 0xC7DBL;
static uint16_t g_103 = 0x52C2L;
static uint64_t g_188[3][4][5] = {{{0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL},{4UL,0x263723E2319AEFDALL,4UL,0x263723E2319AEFDALL,4UL},{0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL},{4UL,0x263723E2319AEFDALL,4UL,0x263723E2319AEFDALL,4UL}},{{0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL},{4UL,0x263723E2319AEFDALL,4UL,0x263723E2319AEFDALL,4UL},{0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL},{4UL,0x263723E2319AEFDALL,4UL,0x263723E2319AEFDALL,4UL}},{{0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL},{4UL,0x263723E2319AEFDALL,4UL,0x263723E2319AEFDALL,4UL},{0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL,0x45D44334F404DFAALL},{4UL,0x263723E2319AEFDALL,4UL,0x263723E2319AEFDALL,4UL}}};



static uint32_t  func_1(void);
static int32_t  func_2(uint64_t  p_3);
static int32_t  func_17(struct S3  p_18, struct S1  p_19, int16_t  p_20);
static struct S3  func_21(int16_t  p_22, struct S3  p_23, int32_t  p_24, struct S3  p_25, struct S1  p_26);




static uint32_t  func_1(void)
{ 
    uint32_t l_164 = 18446744073709551615UL;
    int32_t l_167 = 0xF7BBAF5EL;
    int32_t l_172 = 0x5A3B4368L;
    int32_t l_173 = 4L;
    int32_t l_174 = 0xB326B5A9L;
    int32_t l_175 = 0L;
    int32_t l_177 = 6L;
    uint32_t l_179 = 0UL;
    uint32_t l_193 = 0x563EE52DL;
    if (func_2(g_4))
    { 
        int32_t l_168 = 0xD28A0D4AL;
        uint32_t l_169 = 0x757FEED6L;
        int32_t l_176 = 0L;
        int32_t l_178[3][1][3];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_178[i][j][k] = (-1L);
            }
        }
        l_164--;
        ++l_169;
        ++l_179;
    }
    else
    { 
        int32_t l_187 = 0L;
        int32_t l_189 = 0x2269A315L;
        int32_t l_190 = 0x433B515CL;
        int32_t l_191 = 3L;
        int32_t l_192[4][3];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
                l_192[i][j] = 0xFF961AB1L;
        }
        for (l_175 = 0; (l_175 <= 23); l_175++)
        { 
            uint32_t l_184 = 0xB2CB753EL;
            l_167 = ((((l_184 > 0L) || g_27.f3) || ((g_188[1][0][1] = (safe_mul_func_uint16_t_u_u((g_27.f5 , l_187), g_101[1][1][0]))) || g_27.f5.f0.f0)) , 1L);
        }
        l_193++;
    }
    return l_167;
}



static int32_t  func_2(uint64_t  p_3)
{ 
    int16_t l_11[4][2] = {{0xBCB1L,0x7A81L},{0x7A81L,0xBCB1L},{0x7A81L,0x7A81L},{0xBCB1L,0x7A81L}};
    struct S1 l_38[2] = {{-557,5187,415,3,11858,-375},{-557,5187,415,3,11858,-375}};
    int i, j;
    for (g_4 = 3; (g_4 > 9); ++g_4)
    { 
        int32_t l_9[1];
        struct S1 l_28 = {237,302,837,-19,9232,589};
        int32_t l_39 = 0L;
        uint32_t l_135 = 0x0C6D9DE4L;
        int16_t l_163 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_9[i] = 0xE13A6C9CL;
        for (p_3 = 0; (p_3 <= 27); ++p_3)
        { 
            uint16_t l_132 = 65535UL;
            int32_t l_137[2][1][4] = {{{0x2ECF321DL,0x2ECF321DL,0x2ECF321DL,0x2ECF321DL}},{{0x2ECF321DL,0x2ECF321DL,0x2ECF321DL,0x2ECF321DL}}};
            uint64_t l_138 = 18446744073709551606UL;
            int i, j, k;
            for (g_10[0] = 0; (g_10[0] >= 0); g_10[0] -= 1)
            { 
                int i;
                l_9[g_10[0]] = (((--g_12) >= (l_9[g_10[0]] ^ (safe_add_func_uint32_t_u_u(p_3, func_17(func_21(p_3, g_27, g_27.f5.f0.f3, g_27, l_28), l_38[0], l_39))))) == 0x56L);
                if (l_38[0].f0)
                    break;
            }
            if (p_3)
                break;
            for (l_39 = 0; (l_39 > 24); l_39 = safe_add_func_int8_t_s_s(l_39, 3))
            { 
                uint8_t l_133 = 0UL;
                int32_t l_136 = 0x0C694B4BL;
                l_133 = (safe_mul_func_uint8_t_u_u((p_3 && ((((0xFF6AL & ((safe_lshift_func_int16_t_s_s(l_132, 3)) & ((0xE4B3L != 1UL) && 0x5E54AC5FBAF3FA6ELL))) >= (-1L)) | 0x1E9DL) || 0x51E36C2B63071900LL)), p_3));
                l_136 &= ((!l_135) >= l_38[0].f2);
                --l_138;
            }
        }
        l_39 = ((safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s(p_3, ((p_3 ^ 4UL) & (safe_mod_func_uint16_t_u_u(0x5433L, 0xECD8L))))), 14)) && 9L);
        g_10[1] = ((((((18446744073709551609UL < g_27.f5.f0.f5) == p_3) < (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((g_70 = (safe_add_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u(((((((safe_rshift_func_int16_t_s_s(((g_27.f2 &= (safe_mul_func_int16_t_s_s(p_3, g_10[0]))) >= (-4L)), l_38[0].f3)) ^ p_3) ^ 0x28A0L) , l_38[0].f4) ^ g_10[1]) ^ g_103), l_9[0])) | g_102), 6UL))) != 1L) <= l_163), 248UL)), p_3)), p_3)) ^ p_3), 0x1537E41DL))) || p_3) <= p_3) < l_28.f3);
    }
    return l_38[0].f0;
}



static int32_t  func_17(struct S3  p_18, struct S1  p_19, int16_t  p_20)
{ 
    int16_t l_69 = 0x4539L;
    for (p_18.f0 = (-27); (p_18.f0 == 26); p_18.f0 = safe_add_func_int8_t_s_s(p_18.f0, 1))
    { 
        uint16_t l_48[3][5] = {{0xBA6CL,0xBA6CL,0xBA6CL,0xBA6CL,0xBA6CL},{0xB690L,65535UL,0xB690L,65535UL,0xB690L},{0xBA6CL,0xBA6CL,0xBA6CL,0xBA6CL,0xBA6CL}};
        int32_t l_85 = 0xDE7E0673L;
        int64_t l_118 = 0xE9FA99CDC6EB2511LL;
        int i, j;
        for (p_20 = 11; (p_20 < 22); p_20 = safe_add_func_int8_t_s_s(p_20, 3))
        { 
            uint8_t l_44[3][5] = {{0xEBL,0x03L,255UL,0x03L,0xEBL},{0xEBL,0x03L,255UL,0x03L,0xEBL},{0xEBL,0x03L,255UL,0x03L,0xEBL}};
            int32_t l_47 = (-1L);
            int i, j;
            for (p_18.f2 = 0; (p_18.f2 <= 2); p_18.f2 += 1)
            { 
                int i, j;
                l_47 = (safe_rshift_func_int16_t_s_s(l_44[p_18.f2][(p_18.f2 + 2)], p_18.f5.f0.f1));
                if (l_48[2][3])
                    break;
                g_27.f5.f0.f0 &= (safe_mod_func_uint64_t_u_u((((4294967295UL > (((safe_add_func_int8_t_s_s(l_47, ((safe_mul_func_int8_t_s_s(((safe_div_func_int64_t_s_s((((p_19.f5 <= (safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(p_19.f3, p_18.f1)), l_44[p_18.f2][(p_18.f2 + 2)])) | (-1L)) < l_69), l_47)) > g_27.f4), l_44[1][2])) != g_27.f5.f0.f1), l_48[2][3])) ^ 0x34L) & p_18.f5.f0.f3) , p_18.f4), g_27.f2))) , g_70) > p_19.f3), p_18.f5.f0.f1)) & g_27.f3), p_18.f5.f0.f2)) == p_18.f5.f0.f3))) >= 1L) & p_19.f0)) < 8UL) , g_4), p_18.f5.f0.f3));
            }
            g_27.f3 = (safe_add_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((-5L), 10)) || (p_19.f0 &= (safe_add_func_int32_t_s_s(1L, (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_19.f1, 7)), ((safe_mul_func_int16_t_s_s(l_69, 0x53B4L)) && p_18.f5.f0.f4))))))), 0x98C3E2E3E2A50B6CLL));
            l_85 &= (safe_rshift_func_uint16_t_u_s(p_18.f5.f0.f5, 14));
        }
        for (p_18.f1 = 0; (p_18.f1 > 18); p_18.f1 = safe_add_func_uint32_t_u_u(p_18.f1, 2))
        { 
            int64_t l_100 = 0L;
            int32_t l_119 = 0xE007783CL;
            if ((p_19.f0 |= 0x05FCAF60L))
            { 
                int16_t l_97 = 0x9842L;
                if (g_10[0])
                    break;
                if (g_27.f0)
                    break;
                g_27.f5.f0.f0 = (safe_mul_func_uint8_t_u_u((g_103 = ((g_102 = (((safe_mul_func_int8_t_s_s((g_101[0][2][0] &= (((((safe_lshift_func_int16_t_s_u(l_69, 0)) | (safe_unary_minus_func_uint8_t_u(p_18.f5.f0.f5))) & (safe_rshift_func_int8_t_s_s(((g_10[0] && (++p_18.f2)) <= ((((0x13E4380B9C827B28LL <= 7UL) <= 0xDDE4B234A561BD86LL) >= 1UL) <= l_100)), p_19.f0))) != 0x1AB63E390B54F4E0LL) < p_18.f5.f0.f5)), 3UL)) & p_18.f5.f0.f3) & 255UL)) != g_10[1])), (-9L)));
            }
            else
            { 
                return g_27.f5.f0.f3;
            }
            if (p_18.f5.f0.f4)
                continue;
            l_119 = (p_18.f3 = (safe_mul_func_int8_t_s_s(((l_85 != ((((safe_mod_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((((g_4 && ((p_18.f1 < (((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(0x995CL, 13)), l_100)) < p_18.f2) == 0x3EL)) <= 0UL)) >= 18446744073709551610UL) == 0x4AF86A2FL) & g_32), 5UL)), g_102)) | l_69) == l_48[2][4]), l_118)) & p_18.f5.f0.f4) == g_27.f5.f0.f4) <= g_10[0])) ^ 0x36L), p_19.f5)));
        }
        p_18.f5.f0.f1 ^= (((g_32 | ((p_19.f5 || ((safe_rshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((((l_85 &= ((safe_rshift_func_uint8_t_u_u((0x01L | g_32), 7)) <= g_27.f5.f0.f0)) != l_69) < (-7L)), l_118)) , l_118) > p_18.f5.f0.f5), p_18.f1)) , 0xC349BFD98B40E021LL)) != p_19.f0)) < 0x4BL) , l_69);
    }
    return l_69;
}



static struct S3  func_21(int16_t  p_22, struct S3  p_23, int32_t  p_24, struct S3  p_25, struct S1  p_26)
{ 
    uint16_t l_29 = 0UL;
    uint64_t l_36 = 0x21F4251D17401D8BLL;
    struct S3 l_37 = {0x0197F5CE94720237LL,0xEE56L,6UL,12637,0x33B75CABL,{{-305,-622,549,-16,12863,-143}}};
    p_26.f5 &= l_29;
    g_27.f3 |= (safe_mul_func_uint8_t_u_u(g_32, ((safe_sub_func_uint16_t_u_u((p_23.f1 = (((((255UL <= (!((p_26.f3 < ((g_27.f0 > l_36) <= g_4)) > g_32))) , p_25.f5.f0.f4) , 9UL) , g_27.f1) != l_29)), 1UL)) <= 0x5AD7L)));
    return l_37;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);

    }
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_27.f3, "g_27.f3", print_hash_value);
    transparent_crc(g_27.f4, "g_27.f4", print_hash_value);
    transparent_crc(g_27.f5.f0.f0, "g_27.f5.f0.f0", print_hash_value);
    transparent_crc(g_27.f5.f0.f1, "g_27.f5.f0.f1", print_hash_value);
    transparent_crc(g_27.f5.f0.f2, "g_27.f5.f0.f2", print_hash_value);
    transparent_crc(g_27.f5.f0.f3, "g_27.f5.f0.f3", print_hash_value);
    transparent_crc(g_27.f5.f0.f4, "g_27.f5.f0.f4", print_hash_value);
    transparent_crc(g_27.f5.f0.f5, "g_27.f5.f0.f5", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_101[i][j][k], "g_101[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_188[i][j][k], "g_188[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
