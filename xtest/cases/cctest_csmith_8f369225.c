// SPDX-License-Identifier: MIT
// cctest_csmith_8f369225.c --- cctest case csmith_8f369225 (csmith seed 2402718245)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc334fbb2 */

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

// Options:   -s 2402718245 -o /tmp/csmith_gen_cgsgqkjp/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   unsigned f0 : 17;
   const uint16_t  f1;
   const uint16_t  f2;
   signed f3 : 26;
   const signed f4 : 4;
   int8_t  f5;
};

union U1 {
   uint16_t  f0;
   uint64_t  f1;
   const int32_t  f2;
   int32_t  f3;
};

union U2 {
   const uint32_t  f0;
   int16_t  f1;
};

union U3 {
   int32_t  f0;
   int32_t  f1;
   int64_t  f2;
};

union U4 {
   const int32_t  f0;
   uint8_t  f1;
   const uint64_t  f2;
   int16_t  f3;
};


static int32_t g_11 = 1L;
static uint64_t g_70[4][2] = {{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}};
static uint32_t g_71 = 0xA4BA9E73L;
static int32_t g_81 = 0xC018302AL;
static int64_t g_84[5][2][2] = {{{(-4L),1L},{(-4L),(-4L)}},{{(-4L),1L},{(-4L),(-4L)}},{{(-4L),1L},{(-4L),(-4L)}},{{(-4L),1L},{(-4L),(-4L)}},{{(-4L),1L},{(-4L),(-4L)}}};
static int8_t g_86[2][2][5] = {{{0x22L,0x22L,(-1L),0x22L,0x22L},{(-1L),0x22L,(-1L),(-1L),0x22L}},{{0x22L,(-1L),(-1L),0x22L,(-1L)},{0x22L,0x22L,(-1L),(-1L),(-1L)}}};
static uint32_t g_88 = 1UL;
static uint16_t g_95 = 0xA208L;
static int64_t g_160 = 5L;
static int8_t g_163 = (-10L);
static uint8_t g_166 = 0UL;
static int16_t g_169 = 0x5422L;
static union U2 g_179 = {0x37754C0DL};
static union U1 g_180 = {0x922DL};
static int64_t g_183 = 0L;
static int32_t g_189 = (-2L);
static int32_t g_191[4] = {(-2L),(-2L),(-2L),(-2L)};
static union U4 g_236 = {-1L};
static union U3 g_240 = {0x025CEF9BL};
static const struct S0 g_257 = {73,65535UL,3UL,5354,-2,1L};



static union U1  func_1(void);
static int32_t  func_2(const union U2  p_3, int32_t  p_4);
static union U2  func_5(uint8_t  p_6, union U2  p_7, uint16_t  p_8, int32_t  p_9, union U1  p_10);
static union U2  func_12(int16_t  p_13, int64_t  p_14, int32_t  p_15, union U4  p_16, int32_t  p_17);




static union U1  func_1(void)
{ 
    struct S0 l_20 = {126,0xBA13L,2UL,5400,0,0L};
    union U2 l_21[4][5][1] = {{{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}}},{{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}}},{{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}}},{{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}},{{0xF1448112L}}}};
    union U4 l_32 = {0xD0D42AD0L};
    int64_t l_254 = 0L;
    int32_t l_289 = 5L;
    int i, j, k;
    l_20.f3 = func_2(func_5(g_11, func_12((safe_lshift_func_uint16_t_u_u(((l_20 , l_21[2][1][0]) , (((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_20.f5, g_11)), g_11)), g_11)), 0xF585L)), 0xE9L)) , g_11) ^ g_11)), 10)), l_21[2][1][0].f0, g_11, l_32, l_32.f0), g_169, g_160, g_180), l_20.f2);
    g_191[3] ^= (safe_unary_minus_func_uint64_t_u((g_179 , (l_20 , l_254))));
    for (g_95 = 29; (g_95 == 55); g_95 = safe_add_func_uint64_t_u_u(g_95, 4))
    { 
        uint32_t l_267 = 0xC56BA339L;
        union U4 l_269 = {-2L};
        int32_t l_287 = 0x419A3F20L;
        int32_t l_291 = 0xCC4D4A8DL;
        int32_t l_292[3][1][3];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_292[i][j][k] = 1L;
            }
        }
    }
    return g_180;
}



static int32_t  func_2(const union U2  p_3, int32_t  p_4)
{ 
    union U3 l_201 = {1L};
    uint32_t l_204 = 4294967295UL;
    int32_t l_205 = (-1L);
    union U2 l_228 = {0xA69D1A7CL};
    uint32_t l_252 = 4294967288UL;
    if ((safe_add_func_uint8_t_u_u((l_205 |= (g_166 = ((l_201 , ((g_88 || (0x45B2E7BA114AE42ELL && (safe_rshift_func_uint8_t_u_s(l_204, 2)))) >= g_11)) != 0x2D5C270F0C57F21ALL))), l_204)))
    { 
        return g_191[1];
    }
    else
    { 
        uint8_t l_206 = 0UL;
        l_206++;
    }
    if ((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((func_5((((safe_lshift_func_uint16_t_u_s((((+g_84[4][0][1]) ^ ((safe_div_func_int64_t_s_s((l_201.f0 ^ ((((((!(safe_rshift_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((!(g_95 ^= (0xF14AL > (l_205 = (safe_mul_func_int16_t_s_s(((g_70[3][0] > 4L) >= 6UL), 0x4EC0L)))))), g_180.f0)) | 0xC9DE4289L), p_3.f1))) , 0x683FL) > 0xCFBFL) > g_163) && 0x3E6DL) & l_204)), g_84[4][1][1])) ^ 2UL)) <= 6L), 0)) , 0x4AL) || 0x6AL), l_228, g_191[0], p_3.f1, g_180) , g_166), 8)), l_228.f0)), l_228.f0)))
    { 
        uint16_t l_231 = 0x39DAL;
        l_205 &= (((safe_div_func_uint32_t_u_u((l_204 == (l_231 || ((l_201.f0 | (safe_div_func_uint32_t_u_u(((p_3.f1 > p_3.f0) >= l_201.f1), 6UL))) ^ p_4))), g_70[2][0])) || 0xE02AL) <= g_179.f1);
        g_11 = g_166;
    }
    else
    { 
        uint32_t l_246 = 0x57DBE0CDL;
        int32_t l_247 = (-6L);
        l_247 = (((safe_rshift_func_uint8_t_u_s((g_236 , (safe_unary_minus_func_int8_t_s((((((safe_rshift_func_uint8_t_u_s(((g_240 , p_3) , ((safe_add_func_uint8_t_u_u((!(safe_div_func_int64_t_s_s(l_228.f1, g_189))), 0xADL)) <= 0x454E90A013092217LL)), 0)) || g_70[3][0]) == 0x168FEBB8D3784CA3LL) <= l_246) <= l_201.f0)))), g_179.f0)) ^ 0xA4L) ^ l_201.f1);
    }
    l_205 = (p_3.f0 & (safe_mod_func_uint64_t_u_u(((l_204 > ((g_169 | (((safe_lshift_func_int16_t_s_u(((0x574C90B6C894F2F5LL | p_4) > g_236.f0), 3)) , (-1L)) && g_11)) || l_252)) , g_189), g_169)));
    return g_160;
}



static union U2  func_5(uint8_t  p_6, union U2  p_7, uint16_t  p_8, int32_t  p_9, union U1  p_10)
{ 
    int64_t l_181 = 0xBC179A0016208243LL;
    int32_t l_182 = 0x8CE80C63L;
    int32_t l_184 = 0x02EAEB8CL;
    int32_t l_185 = 0x246A6802L;
    int32_t l_186 = (-1L);
    int32_t l_187 = 0x76BBF86DL;
    int32_t l_188[4] = {(-1L),(-1L),(-1L),(-1L)};
    int64_t l_190 = 0x07A3C17D6ECED94FLL;
    int8_t l_192 = (-1L);
    uint32_t l_193 = 0xD9698A88L;
    union U2 l_198 = {0x18FC34F4L};
    int i;
    l_193--;
    p_9 = (safe_rshift_func_uint8_t_u_u((p_6 = 255UL), 1));
    return l_198;
}



static union U2  func_12(int16_t  p_13, int64_t  p_14, int32_t  p_15, union U4  p_16, int32_t  p_17)
{ 
    uint64_t l_33 = 5UL;
    int32_t l_44 = 1L;
    struct S0 l_55 = {348,0UL,0xBE72L,3599,3,1L};
    l_44 &= (((g_11 & l_33) , (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(4294967288UL, (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((0xEBL && l_33), p_16.f1)) ^ g_11), l_33)) >= 1UL), 13)))), l_33))) | g_11);
lbl_74:
    p_17 = (safe_div_func_int16_t_s_s((0x4F2CL & ((g_11 != 0UL) | (p_14 |= 1L))), p_17));
    for (p_16.f1 = 21; (p_16.f1 < 9); --p_16.f1)
    { 
        uint32_t l_56 = 0xC28BF2FEL;
        int16_t l_122 = 3L;
        uint64_t l_140 = 0x0266A50E2640699DLL;
        int32_t l_159[3];
        int i;
        for (i = 0; i < 3; i++)
            l_159[i] = (-1L);
        if (((safe_add_func_uint16_t_u_u(1UL, (safe_add_func_uint64_t_u_u(((((safe_rshift_func_int8_t_s_s(0x5CL, 7)) , l_55) , ((l_56 ^= g_11) | 0x05F4L)) & g_11), 0x066FA41D407B094CLL)))) , p_14))
        { 
            uint64_t l_69[5][1][3] = {{{0x1E3584F79AABF663LL,0x1E3584F79AABF663LL,0x209D081799B58ECELL}},{{0x1E3584F79AABF663LL,0x1E3584F79AABF663LL,0x209D081799B58ECELL}},{{0x1E3584F79AABF663LL,0x1E3584F79AABF663LL,0x209D081799B58ECELL}},{{0x1E3584F79AABF663LL,0x1E3584F79AABF663LL,0x209D081799B58ECELL}},{{0x1E3584F79AABF663LL,0x1E3584F79AABF663LL,0x209D081799B58ECELL}}};
            int i, j, k;
            if ((l_44 = (safe_div_func_uint32_t_u_u(((-1L) >= l_55.f0), ((safe_lshift_func_int8_t_s_u((((((safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((g_70[3][0] = (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_69[0][0][1] == p_13), g_11)), g_11))) || l_69[0][0][1]), 65527UL)) > l_56), l_56)) == 0L) > 0xB4L) , g_11) > 0x15BB970EL), l_56)) , 0xF541EDF2L)))))
            { 
                ++g_71;
                if (p_16.f1)
                    goto lbl_74;
            }
            else
            { 
                int8_t l_85 = 0x14L;
                int32_t l_87 = (-1L);
                g_81 = ((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(g_70[3][0], ((safe_sub_func_int32_t_s_s(g_81, ((safe_lshift_func_uint8_t_u_s((++g_88), g_86[1][1][3])) | ((safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(l_69[0][0][1], 1L)) != 0UL), 5)) == l_69[0][0][1])))) && p_15))) || p_17), 0x16C6279EL)) & 0x5EL);
                ++g_95;
            }
            g_81 ^= ((~p_16.f1) ^ p_13);
        }
        else
        { 
            uint8_t l_119 = 0x5FL;
            int32_t l_158 = 0x895B47B8L;
            int32_t l_165 = (-9L);
            union U2 l_178 = {4294967291UL};
            if (((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((0x0C03L && (g_95 = p_14)), (((l_44 = (safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_13, (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((((safe_div_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((--l_119), (l_122 = 18446744073709551615UL))) || g_88), l_56)) != 0xB5922496703B8633LL) != g_84[4][0][0]) <= p_15), g_84[4][0][0])) == g_84[4][0][0]), g_81)), 1)))), p_16.f1)), g_84[4][0][0]))) != 0x9DAEL) && 0x47L))), g_86[1][0][3])) >= p_16.f1))
            { 
                uint64_t l_139[3][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL}};
                uint8_t l_141 = 0xC1L;
                int32_t l_146 = 0xE9E55FE4L;
                int i, j;
                p_17 = (((g_86[0][0][2] = (safe_lshift_func_uint8_t_u_u((g_84[4][0][0] , g_70[3][1]), (((((p_14 = (((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_140 &= l_139[2][1]), l_119)), 0UL)), p_13)), g_84[4][0][0])), p_14)) != l_55.f0), 2)) >= l_141), 0)) | l_55.f1) == 0x5847AAFFF4FB9E1BLL)) == g_86[0][1][4]) & 0xEEA078BFL) >= p_17) < g_71)))) != 0x19L) == 0x512514AFL);
                l_146 ^= (safe_lshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((p_14 |= l_141), l_33)) , g_86[0][1][4]), 3));
            }
            else
            { 
                int32_t l_161 = 0x91729206L;
                int32_t l_162 = 0xBC1B5E43L;
                int32_t l_164[4][2][4] = {{{0xC583A0B3L,0xC583A0B3L,0x266805FAL,0xC583A0B3L},{0xC583A0B3L,0xD61D1B06L,0xD61D1B06L,0xC583A0B3L}},{{0xD61D1B06L,0xC583A0B3L,0xD61D1B06L,0xD61D1B06L},{0xC583A0B3L,0xC583A0B3L,0x266805FAL,0xC583A0B3L}},{{0xC583A0B3L,0xD61D1B06L,0xD61D1B06L,0xC583A0B3L},{0xD61D1B06L,0xC583A0B3L,0xD61D1B06L,0xD61D1B06L}},{{0xC583A0B3L,0xC583A0B3L,0x266805FAL,0xC583A0B3L},{0xC583A0B3L,0xD61D1B06L,0xD61D1B06L,0xC583A0B3L}}};
                int i, j, k;
                g_81 = (p_17 = (safe_rshift_func_uint8_t_u_s(l_55.f4, (safe_mul_func_uint8_t_u_u(p_17, ((l_159[0] = ((-3L) || (safe_mod_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((((((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((p_16.f1 , g_70[3][0]))), 4294967290UL)) && p_13) == p_17) == 1L) & g_86[0][1][4]), 0xFC78F562L)), l_158)))) != p_17))))));
                g_166++;
                g_81 = (l_159[0] > (((g_169 , (safe_lshift_func_int8_t_s_u((l_158 = (-4L)), (((safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(1L, 12)), p_16.f1)), 18446744073709551615UL)) , g_169) < p_14)))) ^ l_55.f4) && l_55.f4));
            }
            for (g_88 = 0; (g_88 <= 1); g_88 += 1)
            { 
                return l_178;
            }
        }
    }
    return g_179;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_70[i][j], "g_70[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_84[i][j][k], "g_84[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_86[i][j][k], "g_86[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_179.f0, "g_179.f0", print_hash_value);
    transparent_crc(g_179.f1, "g_179.f1", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_191[i], "g_191[i]", print_hash_value);

    }
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_236.f1, "g_236.f1", print_hash_value);
    transparent_crc(g_236.f3, "g_236.f3", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_240.f1, "g_240.f1", print_hash_value);
    transparent_crc(g_257.f0, "g_257.f0", print_hash_value);
    transparent_crc(g_257.f1, "g_257.f1", print_hash_value);
    transparent_crc(g_257.f2, "g_257.f2", print_hash_value);
    transparent_crc(g_257.f3, "g_257.f3", print_hash_value);
    transparent_crc(g_257.f4, "g_257.f4", print_hash_value);
    transparent_crc(g_257.f5, "g_257.f5", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
