// SPDX-License-Identifier: MIT
// cctest_csmith_74f7dec5.c --- cctest case csmith_74f7dec5 (csmith seed 1962401477)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbef33565 */

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

// Options:   -s 1962401477 -o /tmp/csmith_gen_ph3xsrgt/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   signed f0 : 1;
   unsigned f1 : 20;
   uint64_t  f2;
   unsigned f3 : 8;
   const signed f4 : 15;
   const int32_t  f5;
   const unsigned f6 : 15;
   unsigned f7 : 12;
};

union U1 {
   uint32_t  f0;
   uint64_t  f1;
   int8_t  f2;
   uint8_t  f3;
   uint64_t  f4;
};

union U2 {
   const uint16_t  f0;
   uint32_t  f1;
   int8_t  f2;
   int64_t  f3;
};


static int32_t g_2[2][2] = {{7L,7L},{7L,7L}};
static int32_t g_6 = 1L;
static int32_t g_7 = 0xBFA32A17L;
static uint16_t g_51 = 65535UL;
static int16_t g_54 = 0x7527L;
static uint8_t g_77 = 249UL;
static int32_t g_81 = 0L;
static int64_t g_139[5][7][1] = {{{0x6A4836ABE4C4CDA3LL},{1L},{(-9L)},{1L},{0x6A4836ABE4C4CDA3LL},{0L},{0x6A4836ABE4C4CDA3LL}},{{1L},{(-9L)},{1L},{0x6A4836ABE4C4CDA3LL},{0L},{0x6A4836ABE4C4CDA3LL},{1L}},{{(-9L)},{1L},{0x6A4836ABE4C4CDA3LL},{0L},{0x6A4836ABE4C4CDA3LL},{1L},{(-9L)}},{{1L},{0x6A4836ABE4C4CDA3LL},{0L},{0x6A4836ABE4C4CDA3LL},{1L},{(-9L)},{1L}},{{0x6A4836ABE4C4CDA3LL},{0L},{0x6A4836ABE4C4CDA3LL},{1L},{(-9L)},{1L},{0x6A4836ABE4C4CDA3LL}}};
static int16_t g_142 = (-3L);
static int8_t g_160 = 0L;
static uint32_t *g_163 = (void*)0;
static uint32_t **g_162 = &g_163;
static uint32_t g_167 = 0x70095EF7L;
static int16_t g_189 = 0x1C01L;
static uint8_t *g_199 = &g_77;
static const int32_t *g_209 = (void*)0;
static const int32_t **g_208 = &g_209;
static uint8_t g_223 = 248UL;
static struct S0 g_252[4] = {{0,507,18446744073709551608UL,11,115,7L,44,3},{0,507,18446744073709551608UL,11,115,7L,44,3},{0,507,18446744073709551608UL,11,115,7L,44,3},{0,507,18446744073709551608UL,11,115,7L,44,3}};
static struct S0 *g_251 = &g_252[0];
static union U2 g_255 = {0xF372L};
static union U2 *g_254[2][7] = {{(void*)0,(void*)0,&g_255,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_255,&g_255,(void*)0,&g_255,&g_255,(void*)0}};
static int32_t g_267 = 1L;
static int8_t g_271 = 0x7AL;
static uint8_t g_272 = 254UL;
static int64_t g_276 = 1L;
static int8_t g_277 = 0x60L;
static int64_t g_278 = (-1L);
static int64_t g_279 = 1L;
static uint32_t g_281 = 0UL;
static uint32_t g_284 = 1UL;
static int32_t g_319 = 0xFD81BA8BL;
static uint8_t g_321[4] = {0UL,0UL,0UL,0UL};
static uint16_t g_360 = 1UL;
static const uint32_t g_398 = 0x1B775D0AL;
static const uint32_t *g_397 = &g_398;
static const uint32_t **g_396 = &g_397;
static const uint32_t ***g_395 = &g_396;
static uint64_t g_413[6][7] = {{0UL,3UL,0xB7AEB725935DADF7LL,0xD3B9B7C93A240FA4LL,0x44905469B73E2DC8LL,18446744073709551615UL,18446744073709551615UL},{0xB7AEB725935DADF7LL,18446744073709551615UL,9UL,18446744073709551615UL,0xB7AEB725935DADF7LL,0x360ED2626DBABC88LL,18446744073709551607UL},{18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,0UL,0xAD1371569283143DLL,0xB2F5332A938F1B1CLL,0x44905469B73E2DC8LL},{18446744073709551615UL,3UL,0xAD1371569283143DLL,0x8C200B22DD97D366LL,9UL,9UL,0x8C200B22DD97D366LL},{18446744073709551607UL,0UL,18446744073709551607UL,9UL,0x6894C693E4D5C52ELL,3UL,0x8C200B22DD97D366LL},{0xB7AEB725935DADF7LL,0x9AE9CC7936F8114CLL,0xB2F5332A938F1B1CLL,0x360ED2626DBABC88LL,0x8C200B22DD97D366LL,18446744073709551607UL,0x44905469B73E2DC8LL}};
static uint32_t g_417 = 0x155962D4L;
static uint64_t *g_437 = (void*)0;
static uint64_t **g_436[6][4] = {{&g_437,&g_437,&g_437,&g_437},{&g_437,(void*)0,&g_437,&g_437},{(void*)0,&g_437,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_437},{(void*)0,&g_437,&g_437,&g_437},{&g_437,&g_437,&g_437,&g_437}};
static uint64_t ** const *g_435[4] = {&g_436[0][3],&g_436[0][3],&g_436[0][3],&g_436[0][3]};
static uint16_t *g_512 = &g_51;
static uint16_t **g_511 = &g_512;
static int32_t g_513 = 0x14D87E6DL;
static int16_t ***g_560 = (void*)0;
static uint16_t g_571 = 0xD669L;
static int64_t g_597 = 0x6901FCE30A9C5CDFLL;
static uint32_t g_604 = 0xDCFD8ECBL;
static int16_t g_626[2] = {6L,6L};
static int32_t g_627 = 1L;
static int32_t g_628 = 0x5E74145BL;
static int8_t g_629 = (-6L);
static int8_t g_631 = 0xCAL;
static int32_t g_632 = (-2L);
static int32_t g_634 = 0xE1B2BFD0L;
static union U1 g_668[5][1] = {{{18446744073709551606UL}},{{1UL}},{{18446744073709551606UL}},{{1UL}},{{18446744073709551606UL}}};
static uint64_t g_712[1] = {0x1ABBE4EE201F3A3DLL};
static struct S0 *g_719 = (void*)0;
static uint32_t * const *g_756 = (void*)0;
static uint32_t * const **g_755 = &g_756;
static uint32_t * const ***g_754 = &g_755;
static int32_t *g_770 = &g_634;
static int32_t **g_769 = &g_770;
static const union U1 g_776 = {0x18EB09E5L};
static struct S0 **g_785 = &g_251;
static struct S0 ***g_784 = &g_785;
static uint32_t g_792 = 0x2952493FL;
static union U1 *g_804 = &g_668[3][0];
static union U1 **g_803 = &g_804;
static union U1 **g_831[4] = {&g_804,&g_804,&g_804,&g_804};
static union U2 g_862 = {0x865DL};
static const struct S0 *g_931 = &g_252[0];
static const struct S0 **g_930 = &g_931;
static const struct S0 **g_933[1][6][7] = {{{&g_931,&g_931,&g_931,&g_931,&g_931,&g_931,&g_931},{&g_931,&g_931,&g_931,&g_931,&g_931,&g_931,&g_931},{&g_931,&g_931,(void*)0,&g_931,&g_931,(void*)0,&g_931},{&g_931,&g_931,&g_931,&g_931,&g_931,&g_931,&g_931},{&g_931,&g_931,&g_931,&g_931,&g_931,&g_931,&g_931},{&g_931,&g_931,&g_931,&g_931,&g_931,&g_931,&g_931}}};
static int64_t *g_988 = &g_279;
static int64_t * const *g_987 = &g_988;
static int32_t g_1028 = 0x297F86F4L;
static uint8_t g_1040 = 0xA6L;
static uint64_t *****g_1079 = (void*)0;
static int32_t g_1100 = 0x6194C2F9L;
static union U2 **g_1181 = &g_254[0][3];
static union U2 ***g_1180 = &g_1181;
static int16_t g_1263 = 0x7A40L;
static int32_t g_1264 = (-1L);
static int32_t g_1265 = 9L;
static uint64_t g_1305 = 0xD282929A13B5CB23LL;
static uint32_t g_1366 = 0xA2C053B9L;
static int16_t g_1373[4][7][7] = {{{(-2L),0xE75AL,0xE75AL,(-2L),0x8BA0L,1L,0xE929L},{0xF2C4L,0x9D3FL,0L,(-7L),0L,0L,(-7L)},{(-6L),0xB3BBL,(-6L),1L,0x0E5BL,0xB102L,0xE929L},{0x727AL,0xD45AL,(-1L),0L,0xA083L,0L,(-1L)},{0x0E5BL,0x0E5BL,0x8BA0L,0x2206L,(-1L),0xB102L,0xB3BBL},{0xE6A9L,(-1L),0L,0L,0L,0L,(-1L)},{0xE75AL,1L,0x0E5BL,(-6L),(-1L),1L,0x2206L}},{{0L,0x727AL,0xA083L,0L,0xF2C4L,0xE6A9L,(-7L)},{1L,1L,(-2L),0xB102L,0x8BA0L,(-1L),(-2L)},{0L,(-7L),0L,0L,(-7L),0L,0x9D3FL},{0x2206L,0xE75AL,(-2L),1L,0xB3BBL,0x8BA0L,0x8BA0L},{0L,0x727AL,0xF2C4L,0x727AL,0L,(-2L),0xE6A9L},{(-6L),0xE75AL,0x8BA0L,1L,0xB102L,0x2206L,0xB102L},{(-1L),(-7L),(-7L),(-1L),0x727AL,0xD45AL,(-1L)}},{{(-6L),1L,0xB3BBL,0x0E5BL,(-2L),(-2L),0x0E5BL},{0L,0xE6A9L,0L,0xD45AL,0L,0L,(-1L)},{0x2206L,(-1L),0xB102L,0xB3BBL,0xE929L,0xB3BBL,0xB102L},{0L,0L,0x727AL,0x9D3FL,0xA083L,0L,0xE6A9L},{1L,0x8BA0L,(-2L),0xE75AL,0xE75AL,(-2L),0x8BA0L},{(-7L),(-2L),0L,0L,0xA083L,0xD45AL,0x9D3FL},{(-2L),0x2206L,0xE929L,0x8BA0L,0xE929L,0x2206L,(-2L)}},{{0x9D3FL,0xD45AL,0xA083L,0L,0L,(-2L),(-7L)},{0x8BA0L,(-2L),0xE75AL,0xE75AL,(-2L),0x8BA0L,1L},{0xE6A9L,0L,0xA083L,0x9D3FL,0x727AL,0L,0L},{0xB102L,0xB3BBL,0xE929L,0xB3BBL,0xB102L,(-1L),0x2206L},{(-1L),0L,0L,0xD45AL,0L,0xE6A9L,0L},{0x0E5BL,(-2L),(-2L),0x0E5BL,0xB3BBL,1L,(-6L)},{(-1L),0xD45AL,0x727AL,(-1L),(-7L),(-7L),(-1L)}}};
static int32_t g_1482[7][2] = {{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L}};
static int8_t g_1483[6] = {0L,0xD4L,0xD4L,0L,0xD4L,0xD4L};
static int8_t g_1485 = 0L;
static uint32_t g_1486 = 0x48DCFB81L;
static uint64_t g_1516 = 0xD27751B71CBB9CA8LL;
static uint64_t * const g_1515 = &g_1516;
static uint64_t * const *g_1514[2] = {&g_1515,&g_1515};
static uint64_t * const **g_1513 = &g_1514[1];
static struct S0 g_1553 = {-0,645,0xFC454577D920BC30LL,12,-62,-2L,173,47};
static union U2 ****g_1565 = &g_1180;
static union U2 *****g_1564 = &g_1565;
static uint8_t g_1645 = 255UL;
static uint16_t g_1673[3] = {0xFE58L,0xFE58L,0xFE58L};
static struct S0 g_1813 = {-0,268,0xA1B9101347F3AF7ELL,3,-152,0xCC22263DL,24,10};
static int32_t g_1864 = (-3L);
static int32_t g_1885 = 0x20F2C7EBL;
static int64_t g_1888[5][4] = {{1L,1L,0x40C9AB0F070FFBDDLL,1L},{1L,0xF29131C231589B18LL,0xF29131C231589B18LL,1L},{0xF29131C231589B18LL,1L,0xF29131C231589B18LL,0xF29131C231589B18LL},{1L,1L,0x40C9AB0F070FFBDDLL,1L},{1L,0xF29131C231589B18LL,0xF29131C231589B18LL,1L}};
static int32_t g_1889 = 0xC11D1DB7L;
static int64_t g_1890 = (-4L);
static int64_t g_1891 = 0x1D6CFDEE0A5CB50BLL;
static int32_t g_1892 = 1L;
static uint16_t g_1896 = 4UL;
static union U2 g_1909[4][4][6] = {{{{9UL},{1UL},{1UL},{0x0FEFL},{0xF44CL},{65535UL}},{{1UL},{0x1F93L},{0x4A3BL},{0UL},{8UL},{65535UL}},{{8UL},{0x1F93L},{1UL},{0x4A3BL},{0xF44CL},{0x02C8L}},{{2UL},{1UL},{65535UL},{65535UL},{1UL},{2UL}}},{{{65535UL},{1UL},{0UL},{0x02C8L},{65535UL},{0x0FEFL}},{{0x6E82L},{0x4A3BL},{65535UL},{1UL},{0xFFB1L},{1UL}},{{0x6E82L},{1UL},{1UL},{0x02C8L},{0x1F93L},{0xFFB1L}},{{65535UL},{65535UL},{8UL},{65535UL},{65535UL},{65535UL}}},{{{2UL},{0UL},{65535UL},{0x4A3BL},{9UL},{0UL}},{{8UL},{65535UL},{4UL},{0UL},{0xF272L},{0UL}},{{1UL},{1UL},{65535UL},{0x0FEFL},{65535UL},{65535UL}},{{0xF272L},{8UL},{8UL},{0xF272L},{1UL},{0xFFB1L}}},{{{0x0FEFL},{65535UL},{1UL},{1UL},{0x02C8L},{1UL}},{{0UL},{4UL},{65535UL},{8UL},{0x02C8L},{0x0FEFL}},{{0x4A3BL},{65535UL},{0UL},{2UL},{1UL},{2UL}},{{65535UL},{8UL},{65535UL},{65535UL},{65535UL},{0x02C8L}}}};
static uint32_t g_1919 = 0xE048BFB0L;
static const union U2 *g_2145 = (void*)0;
static const int32_t g_2189 = 0x1DFF7533L;
static const int32_t *g_2188 = &g_2189;
static uint32_t * const ****g_2194 = &g_754;
static const union U2 * const * const ***g_2316 = (void*)0;
static const union U2 g_2322[7] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
static int8_t g_2343 = 6L;
static uint32_t ***g_2348 = &g_162;
static uint32_t ****g_2347 = &g_2348;
static int32_t g_2421[6][4] = {{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L}};
static union U1 **g_2424 = (void*)0;
static uint16_t g_2483 = 0UL;
static int8_t *g_2504 = (void*)0;
static union U2 g_2671 = {0x11B0L};
static uint8_t g_2695[6] = {0x02L,0x02L,0x02L,0x02L,0x02L,0x02L};
static union U1 ***g_2718 = &g_831[3];
static int8_t **g_2771 = &g_2504;
static uint8_t g_2910[7] = {0x90L,0x90L,0x90L,0x90L,0x90L,0x90L,0x90L};
static int16_t * const * const **g_2924 = (void*)0;
static int16_t * const * const ***g_2923 = &g_2924;
static int32_t **g_3015 = (void*)0;
static int32_t g_3072 = 9L;
static uint32_t g_3080 = 5UL;
static int64_t ****g_3143 = (void*)0;
static int64_t *****g_3142 = &g_3143;



static uint8_t  func_1(void);
static int64_t  func_9(uint32_t  p_10, union U2  p_11);
static uint32_t  func_12(uint16_t  p_13, int16_t  p_14);
static uint16_t  func_15(const int8_t  p_16, union U2  p_17, uint64_t  p_18);
static uint32_t  func_19(int64_t  p_20, const uint8_t  p_21, uint32_t  p_22);
static int64_t  func_23(int8_t  p_24, uint8_t  p_25, int32_t  p_26, const uint64_t  p_27);
static uint8_t  func_28(uint32_t  p_29, uint32_t  p_30);
static int8_t  func_33(int32_t  p_34, struct S0  p_35);




static uint8_t  func_1(void)
{ 
    const int16_t l_1389 = 0x90DAL;
    const int32_t l_2340 = 0xA7A54759L;
    int32_t l_3083 = 1L;
    uint32_t *l_3093 = &g_3080;
    int32_t l_3109 = 1L;
    int32_t l_3111 = 0xEE6CA22EL;
    int32_t l_3112[3];
    uint32_t l_3122 = 0x8276A4E2L;
    int64_t ****l_3141 = (void*)0;
    int64_t *****l_3140[6][6][4] = {{{&l_3141,(void*)0,&l_3141,(void*)0},{&l_3141,&l_3141,(void*)0,&l_3141},{(void*)0,&l_3141,&l_3141,&l_3141},{(void*)0,&l_3141,&l_3141,&l_3141},{(void*)0,&l_3141,&l_3141,&l_3141},{(void*)0,&l_3141,(void*)0,&l_3141}},{{&l_3141,&l_3141,&l_3141,&l_3141},{&l_3141,(void*)0,&l_3141,&l_3141},{&l_3141,&l_3141,&l_3141,&l_3141},{&l_3141,&l_3141,&l_3141,&l_3141},{&l_3141,(void*)0,&l_3141,&l_3141},{&l_3141,&l_3141,(void*)0,(void*)0}},{{(void*)0,&l_3141,&l_3141,(void*)0},{&l_3141,(void*)0,&l_3141,&l_3141},{(void*)0,(void*)0,&l_3141,(void*)0},{(void*)0,&l_3141,&l_3141,&l_3141},{(void*)0,&l_3141,&l_3141,&l_3141},{&l_3141,&l_3141,&l_3141,(void*)0}},{{&l_3141,(void*)0,&l_3141,&l_3141},{(void*)0,&l_3141,&l_3141,&l_3141},{(void*)0,&l_3141,&l_3141,&l_3141},{&l_3141,&l_3141,&l_3141,&l_3141},{(void*)0,&l_3141,&l_3141,&l_3141},{(void*)0,&l_3141,&l_3141,(void*)0}},{{&l_3141,(void*)0,&l_3141,(void*)0},{&l_3141,&l_3141,&l_3141,&l_3141},{(void*)0,&l_3141,&l_3141,&l_3141},{(void*)0,(void*)0,&l_3141,(void*)0},{(void*)0,&l_3141,&l_3141,(void*)0},{&l_3141,&l_3141,&l_3141,&l_3141}},{{&l_3141,&l_3141,&l_3141,(void*)0},{&l_3141,&l_3141,&l_3141,(void*)0},{&l_3141,(void*)0,&l_3141,&l_3141},{(void*)0,&l_3141,&l_3141,&l_3141},{&l_3141,&l_3141,&l_3141,(void*)0},{&l_3141,(void*)0,&l_3141,(void*)0}}};
    uint64_t l_3146 = 0xD908DDFDF7DC65B0LL;
    uint32_t l_3175[4] = {0x2A722A5BL,0x2A722A5BL,0x2A722A5BL,0x2A722A5BL};
    int32_t *l_3184[6] = {&g_632,(void*)0,&g_632,&g_632,(void*)0,&g_632};
    int32_t **l_3183 = &l_3184[3];
    uint64_t ***l_3208 = &g_436[0][3];
    int32_t *l_3243 = &g_2421[0][1];
    int32_t *l_3244[4] = {&g_2[1][1],&g_2[1][1],&g_2[1][1],&g_2[1][1]};
    int32_t l_3245 = 0x3981442DL;
    uint32_t l_3246[6];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_3112[i] = (-1L);
    for (i = 0; i < 6; i++)
        l_3246[i] = 1UL;
    for (g_2[1][1] = (-11); (g_2[1][1] <= 15); g_2[1][1]++)
    { 
        uint32_t l_5[5] = {0x420452A2L,0x420452A2L,0x420452A2L,0x420452A2L,0x420452A2L};
        union U2 l_2699[1][1][6] = {{{{0x58A6L},{0x58A6L},{0x58A6L},{0x58A6L},{0x58A6L},{0x58A6L}}}};
        int16_t l_3086[2];
        uint16_t *l_3089 = &g_360;
        uint32_t *l_3092[5][4] = {{&g_1366,&g_281,&g_1366,&g_1366},{(void*)0,(void*)0,&g_1366,&g_1366},{&g_3080,&g_281,&g_3080,&g_1366},{&g_3080,&g_1366,&g_1366,&g_3080},{(void*)0,&g_1366,&g_1366,&g_1366}};
        int32_t l_3108 = (-8L);
        int32_t l_3110 = (-4L);
        uint16_t l_3115 = 1UL;
        uint8_t l_3137 = 0UL;
        union U1 ****l_3187[2][2][5] = {{{&g_2718,&g_2718,&g_2718,&g_2718,&g_2718},{&g_2718,&g_2718,&g_2718,&g_2718,&g_2718}},{{&g_2718,&g_2718,&g_2718,&g_2718,&g_2718},{&g_2718,&g_2718,&g_2718,&g_2718,&g_2718}}};
        union U1 *****l_3186 = &l_3187[1][0][4];
        int64_t *l_3192[6] = {(void*)0,(void*)0,&g_276,(void*)0,(void*)0,&g_276};
        int32_t l_3199 = 0x7372EB7FL;
        int32_t *l_3226 = &g_7;
        int32_t *l_3227 = (void*)0;
        int32_t *l_3228[3][2][3] = {{{&g_2[1][0],&l_3111,&g_2[1][0]},{(void*)0,&g_6,&g_6}},{{&g_81,&l_3111,&g_81},{(void*)0,(void*)0,&g_6}},{{&g_2[1][0],&l_3111,&g_2[1][0]},{(void*)0,&g_6,&g_6}}};
        uint32_t l_3229 = 0UL;
        struct S0 l_3240 = {-0,210,0xC529AEE8B2E4D224LL,13,-128,0L,30,10};
        union U2 * const *l_3242[7][2] = {{&g_254[0][3],&g_254[1][2]},{&g_254[1][2],&g_254[0][3]},{&g_254[0][3],&g_254[0][3]},{&g_254[0][3],&g_254[0][3]},{&g_254[1][2],&g_254[1][2]},{&g_254[0][3],&g_254[0][3]},{&g_254[0][3],&g_254[0][3]}};
        union U2 * const **l_3241 = &l_3242[4][0];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_3086[i] = 0L;
        for (g_6 = 0; (g_6 <= 4); g_6 += 1)
        { 
            struct S0 l_55 = {0,408,1UL,11,-96,0xF236BBBDL,169,24};
            union U2 l_2344 = {65532UL};
            int32_t l_3106[1];
            int32_t *l_3125 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_3106[i] = 0L;
            for (g_7 = 0; (g_7 <= 4); g_7 += 1)
            { 
                uint16_t *l_50[2][4][4] = {{{&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,(void*)0,&g_51},{&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,&g_51,&g_51}},{{&g_51,&g_51,(void*)0,&g_51},{&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,&g_51,&g_51},{&g_51,&g_51,(void*)0,&g_51}}};
                int16_t *l_52 = (void*)0;
                int16_t *l_53 = &g_54;
                int8_t *l_759 = (void*)0;
                int8_t *l_760 = &g_160;
                int8_t *l_2341 = (void*)0;
                int8_t *l_2342 = &g_2343;
                int64_t *l_3090 = &g_139[1][2][0];
                int64_t *l_3091[2][2];
                int32_t l_3095 = 0x849BBD31L;
                union U2 *****l_3103 = &g_1565;
                int32_t l_3113 = 1L;
                int32_t l_3114 = 0x37566EFBL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_3091[i][j] = &g_2671.f3;
                }
            }
            if (l_5[g_6])
                continue;
            l_3125 = &l_3110;
            return (*g_199);
        }
        for (g_267 = 0; (g_267 != (-8)); g_267 = safe_sub_func_uint8_t_u_u(g_267, 4))
        { 
            int16_t l_3132[5] = {0x3F9FL,0x3F9FL,0x3F9FL,0x3F9FL,0x3F9FL};
            int32_t *l_3144 = &g_319;
            int32_t *l_3145[7] = {&l_3111,&l_3111,&l_3083,&l_3111,&l_3111,&l_3083,&l_3111};
            uint64_t l_3173 = 0xD4388BAF30803D52LL;
            union U2 l_3174 = {65535UL};
            int16_t *l_3181[3];
            uint64_t l_3182 = 0x19615D34626016CELL;
            int8_t l_3185 = 0x74L;
            int i;
            for (i = 0; i < 3; i++)
                l_3181[i] = (void*)0;
            (*g_770) = ((*g_512) && ((safe_add_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_s(((l_3122 == ((l_3132[1] > (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_3137, 15)), (safe_mul_func_int8_t_s_s(l_3132[1], (l_2699[0][0][4] , l_3112[2]))))) , l_3140[1][5][1]) == g_3142)) > 0xC0L)) <= l_3109), l_3132[1])) , 0x60L) , 1L), l_3132[1])) < l_3112[1]));
            ++l_3146;
            for (g_272 = 0; (g_272 <= 3); g_272 += 1)
            { 
                int8_t *l_3176 = &g_629;
                int i, j;
                (*g_770) ^= (safe_div_func_int8_t_s_s(((((l_3110 ^= (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((-10L) || g_2421[g_272][g_272]), 5)) != (**g_511)), (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((*l_3176) ^= ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((-5L), ((*l_3089) = (**g_511)))) || (safe_lshift_func_int16_t_s_u((((*g_1515) = ((((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_2421[g_272][g_272], (safe_rshift_func_uint16_t_u_s(((l_3173 & 18446744073709551607UL) || 0xD5L), 11)))), l_1389)) , l_3174) , l_3137) , 0x0DD61A352C9BF640LL)) < l_3175[2]), 11))), l_3083)) == g_2421[g_272][g_272])), g_2421[g_272][g_272])), l_3122)))), 4L))) >= l_3175[2]) < 0L) != (*g_199)), (*g_199)));
                return g_2421[(g_272 + 2)][g_272];
            }
            (**g_769) |= (l_3083 <= (safe_mul_func_int16_t_s_s(((((**g_987) |= (l_3174 , 0x6898111F090923E5LL)) != l_3146) | 2UL), (safe_mod_func_int8_t_s_s(((((l_3083 >= (l_3112[2] &= (-1L))) < 0xCE16L) ^ 0L) && l_3182), (*g_199))))));
            for (g_3080 = 0; (g_3080 <= 4); g_3080 += 1)
            { 
                (*g_208) = l_3145[1];
                if (((void*)0 != l_3183))
                { 
                    int i;
                    return l_5[g_3080];
                }
                else
                { 
                    int i;
                    if (l_5[g_3080])
                        break;
                    return l_3185;
                }
            }
        }
        if ((((*l_3186) = (void*)0) == (((*g_199) = (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((void*)0 == &g_3080), (l_3192[1] == (*g_987)))), 13))) , &g_2718)))
        { 
            union U1 ***l_3222[2];
            int32_t l_3223 = 0x2315FD69L;
            int i;
            for (i = 0; i < 2; i++)
                l_3222[i] = (void*)0;
            (**g_769) ^= (safe_div_func_uint64_t_u_u((0x80E5L <= ((***g_2718) , ((safe_rshift_func_uint16_t_u_u(0x1E04L, 8)) || (safe_add_func_uint64_t_u_u(l_3199, (***g_1513)))))), 2UL));
            for (l_3109 = 25; (l_3109 > 7); l_3109 = safe_sub_func_int32_t_s_s(l_3109, 9))
            { 
                uint64_t l_3221 = 1UL;
                uint32_t ****l_3224 = &g_2348;
                (**g_769) = (((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((*g_2194) == ((((((l_3208 != &g_436[0][3]) , (safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((g_626[0] ^= ((((l_3175[1] ^ (safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((l_3108 = (l_3115 & (safe_rshift_func_int16_t_s_u((1UL == (safe_mod_func_uint8_t_u_u(l_3112[1], 0x84L))), 6)))), 0x3B726710L)), l_3221))) && (*g_199)) , l_3222[0]) == &g_2424)), l_3221)) ^ l_3223), l_3175[3]))) , (void*)0) != &g_512) < (**g_987)) , l_3224)) <= l_3223), l_3221)), (-1L))) , l_3223), g_668[2][0].f2)) <= l_3199) > (*g_988));
            }
        }
        else
        { 
            uint64_t l_3225 = 0x95F354E0035F318DLL;
            (*g_769) = (*g_769);
            return l_3225;
        }
        l_3229--;
        (*l_3226) |= ((((safe_rshift_func_int16_t_s_s((((l_3175[2] && (((**g_784) = ((*g_251) , (**g_784))) == (((**g_769) = (safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((l_3122 > ((safe_mul_func_uint8_t_u_u(0x7CL, (((((**g_803) , ((l_3240 , l_3241) == (void*)0)) == (**g_511)) >= (*g_1515)) <= 0xEEL))) < 0xA9BEFB84L)) >= (***g_1513)), 0UL)), l_3112[2]))) , (void*)0))) > (*g_199)) | l_3112[2]), l_1389)) , l_3175[0]) , l_2340) , 0x0449377EL);
    }
    l_3246[0]--;
    return (*g_199);
}



static int64_t  func_9(uint32_t  p_10, union U2  p_11)
{ 
    int8_t l_2710 = (-7L);
    union U1 ***l_2716 = &g_831[1];
    union U1 ****l_2717[5][5] = {{&l_2716,&l_2716,&l_2716,&l_2716,&l_2716},{&l_2716,&l_2716,&l_2716,&l_2716,&l_2716},{&l_2716,&l_2716,&l_2716,&l_2716,&l_2716},{&l_2716,&l_2716,&l_2716,&l_2716,&l_2716},{&l_2716,&l_2716,&l_2716,&l_2716,&l_2716}};
    int32_t *l_2719 = &g_2[0][1];
    int32_t *l_2720 = &g_1885;
    int32_t l_2723[4][3][4] = {{{0x0B257056L,0xA10FC76EL,0xA10FC76EL,0x0B257056L},{0x7EEBDD76L,0xA10FC76EL,0x28C576FDL,0xA10FC76EL},{0xA10FC76EL,(-1L),0x28C576FDL,0x28C576FDL}},{{0x7EEBDD76L,0x7EEBDD76L,0xA10FC76EL,0x28C576FDL},{0x0B257056L,(-1L),0x0B257056L,0xA10FC76EL},{0x0B257056L,0xA10FC76EL,0xA10FC76EL,0x0B257056L}},{{0x7EEBDD76L,0xA10FC76EL,0x28C576FDL,0xA10FC76EL},{0xA10FC76EL,(-1L),0x28C576FDL,0x28C576FDL},{0x7EEBDD76L,0x7EEBDD76L,0xA10FC76EL,0x28C576FDL}},{{0x0B257056L,(-1L),0x0B257056L,0xA10FC76EL},{0x0B257056L,0xA10FC76EL,0xA10FC76EL,0x0B257056L},{0x7EEBDD76L,0xA10FC76EL,0x28C576FDL,0xA10FC76EL}}};
    uint64_t *l_2738 = &g_712[0];
    uint64_t ** const l_2737 = &l_2738;
    uint64_t ** const * const l_2736 = &l_2737;
    uint64_t ** const * const *l_2735 = &l_2736;
    uint32_t **l_2764 = &g_163;
    uint64_t ***l_2778[7] = {&g_436[0][3],&g_436[5][0],&g_436[0][3],&g_436[0][3],&g_436[5][0],&g_436[0][3],&g_436[0][3]};
    uint64_t ****l_2777 = &l_2778[6];
    union U2 *** const * const l_2837 = &g_1180;
    uint8_t l_2860 = 0x64L;
    union U2 ***l_2867 = &g_1181;
    int32_t **l_2870 = &g_770;
    struct S0 l_2875[4] = {{0,787,0x3A823590D9D044D4LL,1,-115,0x9B8E77CFL,158,61},{0,787,0x3A823590D9D044D4LL,1,-115,0x9B8E77CFL,158,61},{0,787,0x3A823590D9D044D4LL,1,-115,0x9B8E77CFL,158,61},{0,787,0x3A823590D9D044D4LL,1,-115,0x9B8E77CFL,158,61}};
    int16_t l_2881 = 0x6DA7L;
    int16_t *** const *l_2882 = &g_560;
    uint32_t l_2889 = 4294967295UL;
    int64_t l_2906 = 0xB230E5491D3E571FLL;
    int64_t l_2907 = 0x222830CF97334A1CLL;
    int32_t *l_3031 = &g_1028;
    int32_t l_3058 = 0x8B33DAA0L;
    int8_t l_3059 = 0xB5L;
    int32_t *l_3064[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_3064[i] = &g_634;
    g_2718 = ((((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(g_1553.f6, 0)) && (0L >= (p_11.f2 = (safe_mod_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s((l_2710 & l_2710), (*g_199))) | (safe_mul_func_int8_t_s_s((((((p_11.f2 & ((~(safe_lshift_func_uint16_t_u_s(p_11.f2, 7))) <= 0UL)) >= l_2710) < 0x37B92023L) & p_11.f0) > p_10), (*g_199)))), p_11.f0))))), 14)), (*g_199))) | 0x98L) , p_10) , l_2716);
    (*g_208) = (p_11 , l_2719);
    (*l_2720) = (**g_208);
    for (l_2710 = 29; (l_2710 == (-19)); l_2710--)
    { 
        uint32_t l_2730 = 3UL;
        struct S0 l_2766 = {-0,348,9UL,7,176,0x3EE49CE5L,110,32};
        int8_t **l_2770 = &g_2504;
        union U2 l_2774 = {0xA2CCL};
        uint64_t ***l_2776 = &g_436[5][1];
        uint64_t ****l_2775 = &l_2776;
        int8_t l_2779 = (-1L);
        int8_t l_2797 = (-5L);
        int32_t l_2798 = 0x931B7303L;
        for (g_1885 = 0; (g_1885 <= 3); g_1885 += 1)
        { 
            uint64_t ***l_2740 = &g_436[0][3];
            uint64_t ****l_2739 = &l_2740;
            struct S0 *** const *l_2745 = &g_784;
            int32_t l_2746[5][6][2] = {{{6L,2L},{(-8L),0x449C9FB3L},{2L,0x449C9FB3L},{(-8L),2L},{6L,6L},{6L,2L}},{{(-8L),0x449C9FB3L},{2L,0x449C9FB3L},{(-8L),2L},{6L,6L},{6L,2L},{(-8L),0x449C9FB3L}},{{2L,0x449C9FB3L},{(-8L),2L},{6L,6L},{6L,2L},{(-8L),0x449C9FB3L},{2L,0x449C9FB3L}},{{(-8L),2L},{6L,6L},{6L,2L},{(-8L),0x449C9FB3L},{2L,0x449C9FB3L},{(-8L),2L}},{{6L,6L},{6L,2L},{(-8L),0x449C9FB3L},{2L,0x449C9FB3L},{(-8L),2L},{6L,2L}}};
            int i, j, k;
        }
        (*l_2720) |= (l_2766.f5 <= ((safe_mod_func_uint32_t_u_u(((l_2770 != (g_2771 = l_2770)) , (safe_add_func_int64_t_s_s(((1UL != ((l_2774 , (p_11.f3 = ((((l_2766.f0 ^ ((l_2777 = l_2775) != &g_435[3])) == g_1890) , (*g_199)) > l_2779))) <= l_2766.f3)) <= p_10), (*l_2719)))), p_10)) || p_11.f0));
        for (g_1892 = 0; (g_1892 <= 1); g_1892 += 1)
        { 
            struct S0 ** const l_2792[6] = {&g_251,(void*)0,(void*)0,&g_251,(void*)0,(void*)0};
            const union U1 *l_2808 = &g_776;
            const union U1 **l_2807[5][5] = {{&l_2808,&l_2808,&l_2808,&l_2808,&l_2808},{(void*)0,(void*)0,&l_2808,(void*)0,(void*)0},{&l_2808,&l_2808,&l_2808,&l_2808,&l_2808},{(void*)0,&l_2808,&l_2808,(void*)0,&l_2808},{&l_2808,&l_2808,&l_2808,&l_2808,&l_2808}};
            const uint32_t l_2812 = 0xFC06BE8EL;
            uint32_t l_2839 = 0xDCC14574L;
            int32_t *l_2845 = &g_81;
            int i, j;
            l_2798 |= (((0xD8L || (l_2766.f0 &= (((safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(g_1482[(g_1892 + 5)][g_1892], 12)), 8)), (((safe_rshift_func_uint8_t_u_u((((((((((l_2766.f4 || (((((void*)0 == l_2792[1]) ^ (safe_sub_func_int16_t_s_s(p_11.f0, (safe_add_func_uint64_t_u_u((g_1482[(g_1892 + 5)][g_1892] || p_11.f3), 0xAFFF67D69BDFBFBELL))))) >= p_10) , (*g_397))) < p_11.f0) < l_2797) == p_10) > (*g_199)) , 0x5200CC90L) > 0x7C819A80L) , 0x67125BDFL) <= p_11.f2), 6)) & (***g_395)) != (*l_2719)))), l_2730)) , (*l_2720)), p_10)) && 0x4E22DD2EL) != g_1482[(g_1892 + 5)][g_1892]))) == g_1482[(g_1892 + 5)][g_1892]) < 0x34D3BE1F678D1974LL);
            (*g_208) = &l_2798;
            for (g_1919 = 0; (g_1919 <= 3); g_1919 += 1)
            { 
                int32_t l_2813 = 0L;
                union U1 l_2836 = {0xAB7399A0L};
                int32_t *l_2838 = &l_2723[0][1][2];
                int8_t l_2840 = 0L;
                struct S0 l_2847 = {0,154,0x3155DB8EE5A8B3B0LL,12,5,0x39DC62CBL,65,21};
                uint16_t **l_2861 = &g_512;
                int i, j;
                g_2421[(g_1919 + 2)][(g_1892 + 1)] = (0x8DFEL || (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s((l_2807[0][0] != (*l_2716)), (g_1888[(g_1892 + 2)][g_1919] < (safe_rshift_func_int8_t_s_s(p_11.f2, (!p_11.f1)))))) & 0x62L) ^ 65527UL), l_2812)), l_2812)), l_2813)));
                (*l_2720) = ((p_11.f0 | ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((0xA077DDA0L || ((*l_2838) &= (safe_add_func_uint64_t_u_u((((((((safe_div_func_int64_t_s_s((((safe_mul_func_int8_t_s_s(g_1482[(g_1892 + 5)][g_1892], l_2774.f0)) || (safe_sub_func_uint8_t_u_u(((*g_199) = ((safe_lshift_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((*l_2720) < p_11.f3), (l_2836 , p_11.f1))) && p_11.f0), g_1888[(g_1892 + 2)][g_1919])), g_1482[(g_1892 + 5)][g_1892])) ^ (*l_2719)) || (-1L)), p_11.f2)) >= (*g_1515))), 0xB4L))) && 0xECL), 8UL)) & p_11.f0) , l_2837) != (void*)0) || (*l_2719)) , 255UL) == p_11.f3), p_10)))), l_2839)) != 0x5219C01FL), g_1516)), (*l_2720))) < l_2840)) || 18446744073709551615UL);
                if (((((safe_rshift_func_int8_t_s_u(((*l_2838) , l_2812), 5)) , p_11.f1) || (9L <= ((p_10 != ((p_11.f3 | (((safe_div_func_int8_t_s_s((-1L), 0x81L)) >= (*g_209)) , (**g_396))) < (**g_511))) > (*l_2719)))) ^ 6UL))
                { 
                    (*g_769) = l_2845;
                }
                else
                { 
                    union U2 **l_2852 = &g_254[0][3];
                    int16_t *l_2859 = &g_626[1];
                    uint16_t ***l_2862 = &g_511;
                    (*l_2838) = ((safe_unary_minus_func_int16_t_s((l_2847 , 1L))) > (safe_mod_func_uint8_t_u_u(0xBAL, p_10)));
                    (*l_2720) = ((0xD89EL < (0x84F5D4ABL == (((**g_1565) = ((--(*g_199)) , l_2852)) == (void*)0))) & (((*l_2859) |= (0x88980C30L && ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(p_11.f1, (safe_lshift_func_uint8_t_u_u((*l_2845), 2)))) == 0x34L), g_1482[5][0])) | (*l_2838)))) ^ l_2860));
                    (*l_2862) = l_2861;
                }
                for (g_632 = 1; (g_632 >= 0); g_632 -= 1)
                { 
                    uint16_t l_2863 = 6UL;
                    int8_t *l_2864 = &g_1483[5];
                    (*g_208) = &l_2723[0][2][0];
                    (*l_2720) = 0x4804F9BFL;
                    if (l_2863)
                        break;
                    (*l_2720) = l_2766.f2;
                    (*l_2720) ^= ((((*l_2864) = 0L) <= (safe_lshift_func_int16_t_s_s((((((p_11.f1 , (((**g_1564) = l_2867) == (void*)0)) && (safe_div_func_int16_t_s_s(p_10, 1UL))) , (((((***l_2736) &= ((((0UL > (*g_199)) >= 0xE0DAL) , 0xB9C9A99DL) | 0L)) <= (*g_1515)) >= (-1L)) | 8L)) >= (*l_2845)) || 0x43F7002FL), l_2863))) >= (*g_397));
                }
            }
            l_2870 = &l_2845;
            (*g_769) = l_2845;
        }
    }
    if ((((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((p_11.f2 ^ (((l_2875[3] , ((g_1028 , &g_560) == ((+((safe_add_func_int32_t_s_s(p_11.f2, 0x48C62504L)) < ((g_252[0].f0 |= (((l_2881 = (*l_2719)) < (*l_2720)) == 0x54L)) <= (*l_2719)))) , l_2882))) , (*l_2720)) , (*l_2720))), (*l_2720))), 4)) & p_11.f2) == 0x91124A36L))
    { 
        int32_t *l_2883 = &g_1028;
        int32_t *l_2884 = &g_2421[0][1];
        int32_t *l_2885 = &g_634;
        int32_t l_2886 = 6L;
        int32_t *l_2887[4];
        int64_t l_2888 = 0xD6AE4A769E6F5A32LL;
        int32_t l_2905 = 0L;
        int32_t l_2908 = 0x084EC389L;
        int16_t l_2909 = 0x3F87L;
        int i;
        for (i = 0; i < 4; i++)
            l_2887[i] = &l_2723[1][0][0];
        l_2889++;
        for (g_1485 = 20; (g_1485 == (-18)); g_1485--)
        { 
            const int32_t l_2898[7] = {6L,6L,6L,6L,6L,6L,6L};
            int i;
            for (g_1263 = 0; (g_1263 < (-8)); g_1263 = safe_sub_func_uint64_t_u_u(g_1263, 9))
            { 
                uint32_t l_2902 = 0x85A3F029L;
                for (g_51 = 0; (g_51 <= 44); g_51 = safe_add_func_uint64_t_u_u(g_51, 6))
                { 
                    (*l_2884) &= 0L;
                    if (p_11.f2)
                        break;
                    (*l_2883) = l_2898[5];
                    (*l_2885) &= p_11.f2;
                }
                for (g_2483 = 0; (g_2483 <= 3); g_2483 += 1)
                { 
                    const struct S0 ***l_2900 = &g_933[0][0][6];
                    const struct S0 ****l_2899 = &l_2900;
                    (*l_2899) = &g_930;
                }
                for (p_11.f2 = 0; (p_11.f2 <= 1); p_11.f2 += 1)
                { 
                    int8_t l_2901 = 0x54L;
                    int i, j, k;
                    l_2723[p_11.f2][p_11.f2][p_11.f2] = ((l_2901 ^ (-2L)) < (l_2902 | (safe_lshift_func_int8_t_s_s(((void*)0 == g_560), 4))));
                    (*l_2884) = 5L;
                    (*l_2885) |= p_11.f2;
                    if (p_10)
                        break;
                }
            }
        }
        --g_2910[0];
    }
    else
    { 
        uint8_t l_2913 = 1UL;
        int32_t l_2935 = (-1L);
        union U1 l_2946 = {0xB4C7A868L};
        int32_t *l_3014 = &g_1482[6][0];
        int32_t **l_3013[5][4] = {{&l_3014,&l_3014,&l_3014,&l_3014},{&l_3014,&l_3014,&l_3014,&l_3014},{&l_3014,&l_3014,&l_3014,&l_3014},{&l_3014,&l_3014,&l_3014,&l_3014},{&l_3014,&l_3014,&l_3014,&l_3014}};
        uint8_t **l_3044[5];
        int32_t l_3052 = 0xCC644FE4L;
        int32_t l_3053 = (-1L);
        int32_t l_3054[2];
        int i, j;
        for (i = 0; i < 5; i++)
            l_3044[i] = &g_199;
        for (i = 0; i < 2; i++)
            l_3054[i] = 1L;
lbl_3032:
        if (l_2913)
        { 
            int16_t *****l_2922 = (void*)0;
            int16_t * const * const ***l_2925 = &g_2924;
            int32_t l_2930 = 1L;
            int16_t l_2934 = 1L;
            l_2935 = ((*g_512) || (safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_2922 != (l_2925 = g_2923)), ((*l_2720) &= (g_634 , (safe_sub_func_uint8_t_u_u(p_10, (safe_mul_func_uint8_t_u_u(l_2930, ((safe_sub_func_uint8_t_u_u(((!p_10) | 0x79L), p_10)) || (*l_2719)))))))))), 0xFD81L)), (*g_512))), l_2934)));
        }
        else
        { 
            int64_t l_2958 = 0xFDE01A9132108994LL;
            int32_t l_2992 = 0xE7CEAEE1L;
            int8_t l_3001 = (-9L);
            int32_t l_3030 = 0x2D36866BL;
            for (g_631 = 0; (g_631 == (-25)); g_631 = safe_sub_func_uint16_t_u_u(g_631, 2))
            { 
                uint32_t *l_2938 = (void*)0;
                uint32_t *l_2939 = &g_1909[3][2][4].f1;
                uint32_t *l_2940 = &g_1909[3][2][4].f1;
                uint32_t *l_2941 = &g_1919;
                int32_t l_2947 = 0x187655EFL;
                uint32_t *l_2956 = &g_2671.f1;
                uint32_t *l_2957 = (void*)0;
                int32_t **l_3016 = &l_3014;
                int32_t *l_3018 = &g_1028;
                union U2 l_3025 = {0xABC1L};
                union U2 ***l_3027 = (void*)0;
                int64_t l_3029 = 1L;
                if ((((((*l_2941)++) , p_10) >= ((safe_sub_func_int8_t_s_s(((p_11.f2 < ((l_2946 , (l_2947 && (p_10 >= (l_2958 ^= (safe_mod_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(0UL, (safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(p_11.f2, l_2946.f3)), p_10)))) , (-4L)), p_10)))))) || l_2958)) != 0xE0L), l_2935)) | (*l_2720))) , p_11.f2))
                { 
                    uint64_t l_2959 = 0x5ACE0F7AFC9A6649LL;
                    uint64_t l_2960 = 0x8D3536CF90992C47LL;
                    uint64_t l_2991[3][2][7] = {{{0x674C34E1C527838CLL,0xAA1F06FFC55F3C6FLL,0x674C34E1C527838CLL,0x674C34E1C527838CLL,0xAA1F06FFC55F3C6FLL,0x674C34E1C527838CLL,0x674C34E1C527838CLL},{0xAA1F06FFC55F3C6FLL,0xAA1F06FFC55F3C6FLL,0x70AAFF5B7A331CB6LL,0xAA1F06FFC55F3C6FLL,0xAA1F06FFC55F3C6FLL,0x70AAFF5B7A331CB6LL,0xAA1F06FFC55F3C6FLL}},{{0xAA1F06FFC55F3C6FLL,0x674C34E1C527838CLL,0x674C34E1C527838CLL,0xAA1F06FFC55F3C6FLL,0x674C34E1C527838CLL,0x674C34E1C527838CLL,0xAA1F06FFC55F3C6FLL},{0x674C34E1C527838CLL,0xAA1F06FFC55F3C6FLL,0x674C34E1C527838CLL,0x674C34E1C527838CLL,0xAA1F06FFC55F3C6FLL,0x674C34E1C527838CLL,0x674C34E1C527838CLL}},{{0xAA1F06FFC55F3C6FLL,0xAA1F06FFC55F3C6FLL,0x70AAFF5B7A331CB6LL,0xAA1F06FFC55F3C6FLL,0xAA1F06FFC55F3C6FLL,0x70AAFF5B7A331CB6LL,0xAA1F06FFC55F3C6FLL},{0xAA1F06FFC55F3C6FLL,0x674C34E1C527838CLL,0x674C34E1C527838CLL,0xAA1F06FFC55F3C6FLL,0x674C34E1C527838CLL,0x674C34E1C527838CLL,0xAA1F06FFC55F3C6FLL}}};
                    int i, j, k;
                    if (l_2959)
                        break;
                    l_2960++;
                    l_2992 = ((safe_mul_func_uint16_t_u_u((*g_512), ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u((~((((safe_div_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((p_10 | p_11.f2), (((((safe_sub_func_uint32_t_u_u((((void*)0 != &g_987) , (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s((((l_2947 ^ (safe_rshift_func_uint8_t_u_u(p_10, 7))) != 0x7FL) & 0x6F9D898FL), 13)) | p_10), 5)) <= p_10), (*g_199))) & l_2947), (-7L))), l_2960))), 9UL)) >= 1UL) & l_2959) >= 0x6E7AD38DL) || p_11.f2))) || (*g_199)), 0x48L)) ^ 0x3AF3374AL) >= l_2947) , p_11.f2)), p_11.f2)) && p_11.f2), 14)) ^ 0xD4B94C9CL))), 1)) > l_2991[1][1][6]))) & 255UL);
                    if (l_2947)
                        break;
                    return (*g_988);
                }
                else
                { 
                    uint32_t l_3019[4] = {0x9D90B897L,0x9D90B897L,0x9D90B897L,0x9D90B897L};
                    int8_t *l_3020 = &l_2710;
                    union U2 ***l_3028 = &g_1181;
                    int i;
                    (*l_2720) |= (((safe_mod_func_uint8_t_u_u((((((safe_rshift_func_int8_t_s_s(p_11.f2, (((safe_rshift_func_uint8_t_u_s(((l_3001 < (l_2946.f0 > (safe_rshift_func_int8_t_s_u(((*l_3020) = ((((0xF6L | (((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((!(safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((g_3015 = l_3013[0][3]) != l_3016), 0)), ((+(((l_3018 = ((p_11 , g_626[1]) , &l_2935)) == (void*)0) || p_11.f2)) && (*g_199))))), 0x4E79L)), p_11.f2)) , (*g_512)) , 0UL)) && p_11.f2) ^ l_3019[1]) , (*l_3018))), p_11.f2)))) , l_3001), p_10)) < p_11.f2) == p_10))) == (*g_397)) ^ (*g_512)) & 0L) | 0x3B7C41E7L), l_2992)) < 0L) & 0x172575828B78B4E1LL);
                    if (p_11.f2)
                        break;
                    (*l_2720) |= (g_1516 != (0UL > ((safe_add_func_uint8_t_u_u((l_3025 , ((*g_199) ^= (0x20L == (!l_2913)))), ((*l_3020) ^= ((g_252[0].f4 < (l_3027 == l_3028)) != l_3029)))) || (-1L))));
                }
                l_3030 |= l_2992;
            }
        }
        for (g_1485 = 1; (g_1485 >= 0); g_1485 -= 1)
        { 
            l_3031 = &g_1028;
            for (g_1891 = 0; g_1891 < 4; g_1891 += 1)
            {
                g_831[g_1891] = &g_804;
            }
            (*l_3031) |= 0x5C8C2279L;
            if (l_2946.f3)
                goto lbl_3032;
            (*g_208) = &l_2723[3][1][0];
        }
        for (g_278 = 0; (g_278 <= 4); g_278 = safe_add_func_uint16_t_u_u(g_278, 3))
        { 
            struct S0 * const *l_3042 = &g_251;
            const struct S0 l_3043[6][5] = {{{0,140,0x18B79AD7BDDF9EE8LL,8,-87,1L,75,37},{-0,1005,18446744073709551614UL,12,-10,-10L,158,46},{0,848,0x8CCE150EA9A78E21LL,12,-158,-10L,178,51},{-0,597,2UL,13,-64,8L,87,3},{-0,1005,18446744073709551614UL,12,-10,-10L,158,46}},{{0,546,0x169095E57CEDAFA9LL,9,81,0x0A948151L,10,6},{-0,1005,18446744073709551614UL,12,-10,-10L,158,46},{0,153,18446744073709551615UL,12,-149,0x5E43229EL,62,26},{0,153,18446744073709551615UL,12,-149,0x5E43229EL,62,26},{-0,1005,18446744073709551614UL,12,-10,-10L,158,46}},{{0,140,0x18B79AD7BDDF9EE8LL,8,-87,1L,75,37},{0,951,0x4779427902D23FC3LL,2,-60,-7L,131,36},{0,153,18446744073709551615UL,12,-149,0x5E43229EL,62,26},{-0,597,2UL,13,-64,8L,87,3},{0,951,0x4779427902D23FC3LL,2,-60,-7L,131,36}},{{0,140,0x18B79AD7BDDF9EE8LL,8,-87,1L,75,37},{-0,1005,18446744073709551614UL,12,-10,-10L,158,46},{0,848,0x8CCE150EA9A78E21LL,12,-158,-10L,178,51},{-0,597,2UL,13,-64,8L,87,3},{-0,1005,18446744073709551614UL,12,-10,-10L,158,46}},{{0,546,0x169095E57CEDAFA9LL,9,81,0x0A948151L,10,6},{-0,1005,18446744073709551614UL,12,-10,-10L,158,46},{0,153,18446744073709551615UL,12,-149,0x5E43229EL,62,26},{0,153,18446744073709551615UL,12,-149,0x5E43229EL,62,26},{-0,1005,18446744073709551614UL,12,-10,-10L,158,46}},{{0,140,0x18B79AD7BDDF9EE8LL,8,-87,1L,75,37},{0,951,0x4779427902D23FC3LL,2,-60,-7L,131,36},{0,153,18446744073709551615UL,12,-149,0x5E43229EL,62,26},{-0,597,2UL,13,-64,8L,87,3},{0,951,0x4779427902D23FC3LL,2,-60,-7L,131,36}}};
            int32_t l_3051 = 0xFB1C5541L;
            int32_t l_3055[2];
            int64_t l_3056 = 0xBEB48B14181DDB77LL;
            int8_t l_3057[1];
            uint16_t l_3060 = 0xA372L;
            uint32_t l_3073 = 0xB88C7505L;
            int64_t **l_3078 = &g_988;
            int64_t ***l_3077 = &l_3078;
            int64_t ****l_3076[3];
            int i, j;
            for (i = 0; i < 2; i++)
                l_3055[i] = (-1L);
            for (i = 0; i < 1; i++)
                l_3057[i] = 0xCDL;
            for (i = 0; i < 3; i++)
                l_3076[i] = &l_3077;
            for (l_2860 = 0; (l_2860 <= 1); l_2860 += 1)
            { 
                int16_t l_3045 = 8L;
                uint16_t l_3046 = 0xAB54L;
                int32_t *l_3047 = &g_319;
                int32_t *l_3048 = (void*)0;
                int32_t *l_3049 = &l_2723[3][0][2];
                int32_t *l_3050[7] = {&l_2935,&l_2935,&l_2935,&l_2935,&l_2935,&l_2935,&l_2935};
                int i;
                for (g_255.f1 = 0; (g_255.f1 <= 1); g_255.f1 += 1)
                { 
                    int32_t l_3037 = 0L;
                    int i, j;
                    (*g_769) = &l_2935;
                    (**g_769) ^= (safe_rshift_func_uint8_t_u_s(g_413[(g_255.f1 + 3)][(g_255.f1 + 4)], 2));
                    l_3037 &= ((-1L) < g_413[(g_255.f1 + 2)][(g_255.f1 + 3)]);
                    (*l_2720) &= l_2946.f0;
                }
                for (g_1645 = 0; (g_1645 <= 1); g_1645 += 1)
                { 
                    int i, j;
                    (*l_2720) = p_10;
                    (*l_2720) = (safe_mul_func_int16_t_s_s((((((((l_3042 == (void*)0) <= (l_3043[4][0] , (p_11.f2 >= (0x2A92665DL && ((0xEB51C36F9A62E858LL >= (((((*g_2718) != (void*)0) | 1L) < p_10) | l_3043[4][0].f1)) || p_11.f2))))) , l_3044[3]) != &g_199) && l_3045) < 0x811DE73CL) || 0x0383BF8C482F6ECCLL), 65535UL));
                    if (l_3046)
                        break;
                    if (p_11.f2)
                        continue;
                }
                --l_3060;
                (*l_3049) ^= l_2913;
            }
            if (l_3055[1])
                break;
            if (p_11.f2)
                continue;
            for (g_271 = 1; (g_271 >= 0); g_271 -= 1)
            { 
                int8_t l_3063 = (-7L);
                int32_t l_3065 = 0xDF17746FL;
                int32_t l_3068 = 0x79303A5AL;
                int32_t l_3069 = (-9L);
                int32_t l_3070[7][7][1] = {{{(-6L)},{0x61179FA2L},{(-9L)},{0x3B91AA94L},{(-6L)},{0x8690C78CL},{0x5F885715L}},{{0L},{0x5F885715L},{0x8690C78CL},{(-6L)},{0x3B91AA94L},{(-9L)},{0x61179FA2L}},{{(-6L)},{0xB078416DL},{3L},{1L},{7L},{1L},{3L}},{{0xB078416DL},{(-6L)},{0x61179FA2L},{(-9L)},{0x3B91AA94L},{(-6L)},{0x8690C78CL}},{{0x5F885715L},{0L},{0x5F885715L},{0x8690C78CL},{(-6L)},{0x3B91AA94L},{(-9L)}},{{0x61179FA2L},{(-6L)},{0xB078416DL},{3L},{1L},{7L},{1L}},{{3L},{0xB078416DL},{(-6L)},{0x61179FA2L},{(-9L)},{0x3B91AA94L},{(-6L)}}};
                int64_t l_3071 = 2L;
                int64_t *****l_3079[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_3079[i] = &l_3076[2];
                (*l_3031) &= (((*l_2720) = 1L) != ((l_3063 = 0UL) != (**g_511)));
                l_3064[0] = &l_2935;
                for (g_1645 = 0; (g_1645 <= 1); g_1645 += 1)
                { 
                    int8_t l_3066 = 0x8BL;
                    int32_t l_3067[5][3] = {{0L,0x5F2EC578L,0L},{0L,0L,0L},{0L,0x5F2EC578L,0L},{0L,0L,0L},{0L,0x5F2EC578L,0L}};
                    int i, j;
                    --l_3073;
                }
                l_3076[2] = l_3076[2];
                g_3080++;
            }
            (*l_2720) |= p_10;
        }
    }
    return (**g_987);
}



static uint32_t  func_12(uint16_t  p_13, int16_t  p_14)
{ 
    uint16_t l_2675 = 6UL;
    int32_t l_2688[5] = {6L,6L,6L,6L,6L};
    int64_t l_2694 = 0xE558635B61D47974LL;
    int i;
lbl_2698:
    for (g_1305 = 0; (g_1305 <= 1); g_1305 += 1)
    { 
        uint16_t l_2674[4] = {0xE38FL,0xE38FL,0xE38FL,0xE38FL};
        int32_t l_2676 = 3L;
        int32_t l_2685 = 0x3C510F43L;
        int32_t l_2686 = 0x5427C172L;
        int32_t l_2687 = 0xE4E0BA1DL;
        int32_t l_2689 = 1L;
        int32_t l_2690 = 0L;
        int32_t l_2691 = 0xDF4F75E2L;
        int32_t l_2693[7];
        int i;
        for (i = 0; i < 7; i++)
            l_2693[i] = (-3L);
        if (l_2674[3])
            break;
        l_2675 = p_14;
        for (g_77 = 0; (g_77 <= 1); g_77 += 1)
        { 
            int32_t *l_2677 = &g_634;
            int32_t *l_2678 = &g_2421[0][1];
            int32_t *l_2679 = &g_2421[0][1];
            int32_t *l_2680 = &g_628;
            int32_t *l_2681 = &g_634;
            int32_t *l_2682 = &g_2421[5][0];
            int32_t *l_2683 = &g_634;
            int32_t *l_2684[3];
            int64_t l_2692 = 0L;
            int i;
            for (i = 0; i < 3; i++)
                l_2684[i] = &g_628;
            g_2695[4]++;
        }
    }
    (*g_769) = &l_2688[4];
    if (p_14)
        goto lbl_2698;
    return (*g_397);
}



static uint16_t  func_15(const int8_t  p_16, union U2  p_17, uint64_t  p_18)
{ 
    uint32_t *****l_2349[7][2] = {{&g_2347,&g_2347},{&g_2347,&g_2347},{&g_2347,&g_2347},{&g_2347,&g_2347},{&g_2347,&g_2347},{&g_2347,&g_2347},{&g_2347,&g_2347}};
    uint16_t **l_2352 = &g_512;
    int32_t l_2353 = 0x17B0F937L;
    int32_t l_2354 = 0x4F3A3B9BL;
    uint16_t * const l_2366 = &g_360;
    uint32_t l_2393 = 0x82B0E82EL;
    int32_t *l_2444 = &g_1892;
    union U2 * const l_2451 = &g_255;
    int64_t **l_2469 = (void*)0;
    int32_t l_2482 = 0x2FF11E28L;
    int8_t *l_2500[3];
    int8_t l_2528[2];
    uint16_t l_2584 = 65534UL;
    uint8_t **l_2586 = &g_199;
    uint8_t ***l_2585 = &l_2586;
    union U1 l_2597 = {0xF517F8F8L};
    int32_t *l_2609 = &g_81;
    int32_t *l_2610 = (void*)0;
    int32_t *l_2611[4][4][6] = {{{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634}},{{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634}},{{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634}},{{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634},{&g_634,&g_634,&g_634,&g_634,&g_634,&g_634}}};
    uint32_t l_2612 = 0xBD97ED61L;
    uint32_t *l_2616 = &g_1486;
    uint32_t **l_2615 = &l_2616;
    uint32_t ***l_2617 = &l_2615;
    uint8_t l_2620 = 0xB8L;
    struct S0 ***l_2638 = &g_785;
    uint16_t l_2654 = 0x299FL;
    union U2 *l_2670 = &g_2671;
    int32_t l_2672 = 2L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2500[i] = &g_255.f2;
    for (i = 0; i < 2; i++)
        l_2528[i] = 0xF3L;
    if ((((safe_mul_func_uint16_t_u_u(((g_2347 = g_2347) != ((l_2353 = (safe_rshift_func_int16_t_s_s((((*g_804) , l_2352) != ((g_139[1][2][0] || g_1909[3][2][4].f2) , &g_512)), 6))) , (*g_2194))), l_2354)) != l_2354) ^ 0x0BL))
    { 
        struct S0 *l_2355 = &g_1553;
        int32_t l_2359[3][1][6] = {{{0x6186DCD8L,0x6186DCD8L,0x6186DCD8L,0x6186DCD8L,0x6186DCD8L,0x6186DCD8L}},{{0x6186DCD8L,0x6186DCD8L,0x6186DCD8L,0x6186DCD8L,0x6186DCD8L,0x6186DCD8L}},{{0x6186DCD8L,0x6186DCD8L,0x6186DCD8L,0x6186DCD8L,0x6186DCD8L,0x6186DCD8L}}};
        int8_t *l_2367 = &g_668[2][0].f2;
        int32_t *l_2368 = &l_2354;
        int32_t *l_2369 = &g_319;
        int32_t *l_2370 = &g_1885;
        union U1 ***l_2388 = &g_803;
        int64_t ** const l_2466 = (void*)0;
        int i, j, k;
        (*l_2370) = (l_2353 = ((*l_2369) = ((*l_2368) = (((l_2355 != l_2355) & ((safe_mul_func_int16_t_s_s(((~l_2359[2][0][3]) != (safe_mod_func_uint8_t_u_u(l_2359[0][0][0], ((*l_2367) = (safe_lshift_func_uint8_t_u_s((l_2359[1][0][1] > ((safe_mod_func_uint64_t_u_u(((void*)0 == l_2366), p_18)) != l_2359[2][0][3])), p_16)))))), l_2359[2][0][3])) < 18446744073709551615UL)) >= (*g_199)))));
        for (g_792 = 0; (g_792 <= 10); ++g_792)
        { 
            int32_t l_2387 = 0x4CA62951L;
            int32_t l_2391 = 0xCBC396C8L;
            int32_t l_2392 = 0L;
            uint8_t l_2418 = 2UL;
            union U1 l_2431 = {0x777BF532L};
            int64_t l_2464 = 0x337332AD1EDBD22ALL;
            int16_t * const l_2475 = &g_626[0];
            int16_t * const *l_2474 = &l_2475;
            int16_t * const **l_2473 = &l_2474;
            int16_t * const ***l_2472 = &l_2473;
            for (g_272 = 0; (g_272 <= 1); g_272 += 1)
            { 
                union U1 l_2377 = {0x2419C85FL};
                int32_t *l_2390[5] = {&g_2[1][1],&g_2[1][1],&g_2[1][1],&g_2[1][1],&g_2[1][1]};
                int i, j;
                if (g_1482[(g_272 + 4)][g_272])
                    break;
                (*g_208) = (void*)0;
                for (g_1896 = 0; (g_1896 <= 0); g_1896 += 1)
                { 
                    int32_t l_2378 = 1L;
                    int i, j, k;
                    (*l_2369) = ((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(l_2359[g_272][g_1896][(g_272 + 4)], (l_2377 , (((l_2378 , (safe_sub_func_int16_t_s_s((((void*)0 == (*g_1565)) , ((((((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s(0xD9A1C049FE90E29DLL, p_17.f2)), g_1482[(g_272 + 4)][g_272])), p_16)) == l_2387) != 0xE6L) , (-1L)) <= l_2378) & 0x6B462EECFBA85824LL)), 0x1905L))) , l_2388) == (void*)0)))), 7L)) > 7UL);
                }
                for (g_360 = 0; (g_360 <= 1); g_360 += 1)
                { 
                    struct S0 l_2389 = {0,681,0x7DBE0E3D991DA146LL,12,7,0xB6CAD723L,65,18};
                    (*l_2368) = (l_2389 , (p_18 == p_17.f2));
                }
                l_2393--;
            }
            if ((*l_2369))
            { 
                int32_t *l_2412 = &g_1264;
                int32_t l_2413[5][5][4] = {{{0xEB67F208L,0xEB67F208L,1L,0xEB67F208L},{0xEB67F208L,0xFBACCF62L,0xFBACCF62L,0xEB67F208L},{0xFBACCF62L,0xEB67F208L,0xFBACCF62L,0xFBACCF62L},{0xEB67F208L,0xEB67F208L,1L,0xEB67F208L},{0xEB67F208L,0xFBACCF62L,0xFBACCF62L,0xEB67F208L}},{{0xFBACCF62L,0xEB67F208L,0xFBACCF62L,0xFBACCF62L},{0xEB67F208L,0xEB67F208L,1L,0xEB67F208L},{0xEB67F208L,0xFBACCF62L,0xFBACCF62L,0xEB67F208L},{0xFBACCF62L,0xFBACCF62L,1L,1L},{0xFBACCF62L,0xFBACCF62L,0xEB67F208L,0xFBACCF62L}},{{0xFBACCF62L,1L,1L,0xFBACCF62L},{1L,0xFBACCF62L,1L,1L},{0xFBACCF62L,0xFBACCF62L,0xEB67F208L,0xFBACCF62L},{0xFBACCF62L,1L,1L,0xFBACCF62L},{1L,0xFBACCF62L,1L,1L}},{{0xFBACCF62L,0xFBACCF62L,0xEB67F208L,0xFBACCF62L},{0xFBACCF62L,1L,1L,0xFBACCF62L},{1L,0xFBACCF62L,1L,1L},{0xFBACCF62L,0xFBACCF62L,0xEB67F208L,0xFBACCF62L},{0xFBACCF62L,1L,1L,0xFBACCF62L}},{{1L,0xFBACCF62L,1L,1L},{0xFBACCF62L,0xFBACCF62L,0xEB67F208L,0xFBACCF62L},{0xFBACCF62L,1L,1L,0xFBACCF62L},{1L,0xFBACCF62L,1L,1L},{0xFBACCF62L,0xFBACCF62L,0xEB67F208L,0xFBACCF62L}}};
                int64_t **l_2467 = &g_988;
                int i, j, k;
                (*l_2368) = ((safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((*g_988), ((((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((++(*g_199)), 1UL)), ((l_2368 == ((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((((((*l_2412) &= ((*l_2369) &= p_16)) , l_2413[0][1][0]) || (l_2413[0][1][0] > (l_2387 == (*l_2370)))) == p_17.f2) & 0x62534582L), (-9L))), l_2413[0][1][0])) , l_2369)) == p_17.f2))) < 0x38057B62B3A682C0LL) & (**g_987)) & p_17.f0))), l_2413[4][3][3])) <= p_16);
                for (g_1516 = 0; (g_1516 <= 3); g_1516 += 1)
                { 
                    int32_t *l_2414 = (void*)0;
                    int32_t *l_2415 = &g_319;
                    int32_t *l_2416 = &g_1028;
                    int32_t *l_2417[1][3][7] = {{{&g_2[1][1],&l_2392,&l_2392,&g_2[1][1],&l_2392,&l_2392,&g_2[1][1]},{&g_81,(void*)0,&g_81,&g_81,(void*)0,&g_81,&g_81},{&g_2[1][1],&g_2[1][1],&l_2353,&g_2[1][1],&g_2[1][1],&l_2353,&g_2[1][1]}}};
                    int i, j, k;
                    (*g_208) = l_2414;
                    l_2418++;
                    if ((*l_2415))
                        break;
                    if (g_2421[0][1])
                        continue;
                }
                if (((safe_mod_func_int8_t_s_s(((void*)0 == g_2424), (safe_sub_func_int32_t_s_s(0x7797CA5EL, (p_18 ^ (safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s((-1L), p_17.f0)), (-5L)))))))) & p_17.f0))
                { 
                    uint32_t l_2465[2][4] = {{0xD1E7FE77L,18446744073709551615UL,18446744073709551615UL,0xD1E7FE77L},{18446744073709551615UL,0xD1E7FE77L,18446744073709551615UL,18446744073709551615UL}};
                    int64_t ***l_2468[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int32_t *l_2476 = &g_634;
                    int32_t *l_2477 = &g_628;
                    int32_t l_2478 = 0L;
                    int32_t *l_2479 = &g_1028;
                    int32_t *l_2480 = &g_2421[0][1];
                    int32_t *l_2481[4];
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_2481[i] = &l_2391;
                    (*l_2370) |= (l_2431 , ((((((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s(p_16, (safe_rshift_func_int8_t_s_u(1L, 5)))), ((*g_199) &= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((&g_511 != &l_2352) > p_16), 4)), g_279))))), (**g_396))) >= p_17.f2) && p_17.f0) , l_2444) != &g_632) , 0x89E6D4E7L));
                    (*g_208) = (((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((0x38L > g_398) > ((((**g_511) = ((*l_2366) = (p_17 , (0xCFF6A1C43C9FE604LL <= (((void*)0 != l_2451) , ((safe_add_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u(((*g_199) = ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((l_2354 = (l_2392 = (safe_rshift_func_uint8_t_u_s(l_2354, l_2413[0][1][0])))) & p_16), (**g_511))), l_2353)) , (*l_2368)), l_2464)) > (*g_199))), g_776.f0)) < l_2418) > 0L) && (*g_512)), p_17.f0)) & p_16)))))) != p_16) < (*l_2369))), 7)) <= 4294967286UL), 0)) <= l_2465[1][2]) , &l_2359[2][0][3]);
                    (*l_2368) |= 0x31AAA16DL;
                    (*l_2368) = ((*g_512) ^ (((l_2466 != (l_2469 = (l_2413[0][1][0] , l_2467))) ^ (safe_add_func_int64_t_s_s(l_2353, ((l_2472 != (void*)0) >= l_2413[0][1][0])))) | (**g_511)));
                    --g_2483;
                }
                else
                { 
                    uint32_t l_2486[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2486[i] = 4294967295UL;
                    l_2486[2]++;
                }
                return p_17.f2;
            }
            else
            { 
                uint64_t l_2489 = 1UL;
                if (p_17.f0)
                    break;
                return l_2489;
            }
        }
    }
    else
    { 
        const uint8_t l_2492 = 0x8BL;
        int32_t l_2495 = (-3L);
        int8_t **l_2501 = &l_2500[2];
        int8_t *l_2503 = &g_631;
        int8_t **l_2502[2];
        int32_t *l_2505 = &g_1885;
        uint8_t **l_2527 = &g_199;
        const uint8_t l_2606 = 0x8DL;
        uint16_t l_2608 = 1UL;
        int i;
        for (i = 0; i < 2; i++)
            l_2502[i] = &l_2503;
lbl_2540:
        (*l_2505) &= (0x6FF3A1279149FA12LL && (safe_mod_func_int8_t_s_s(((*g_199) && (l_2482 | l_2492)), ((safe_add_func_int16_t_s_s(l_2495, (+(safe_div_func_int32_t_s_s((((!(0x5AL >= ((g_2504 = ((*l_2501) = l_2500[2])) == &g_271))) , 0xB342D399L) , p_16), 4294967292UL))))) & 8UL))));
        for (g_604 = 0; (g_604 <= 0); g_604 += 1)
        { 
            const uint8_t *l_2526[1][2][3];
            const uint8_t **l_2525 = &l_2526[0][0][1];
            const uint8_t ***l_2524 = &l_2525;
            uint8_t l_2530[2];
            int64_t **l_2538 = &g_988;
            int32_t l_2558 = 0xF00052B1L;
            union U2 *l_2572 = &g_862;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_2526[i][j][k] = &g_776.f3;
                }
            }
            for (i = 0; i < 2; i++)
                l_2530[i] = 0xAAL;
            for (g_1891 = 0; (g_1891 <= 3); g_1891 += 1)
            { 
                int i;
                (*g_208) = &l_2495;
                return g_712[g_604];
            }
            if (((safe_lshift_func_int8_t_s_u((+((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((!((((**l_2352)--) ^ (safe_mod_func_int8_t_s_s((!(safe_sub_func_uint32_t_u_u(g_712[g_604], p_17.f0))), (*l_2505)))) < (*g_199))), (~((safe_mul_func_uint8_t_u_u((((*l_2524) = (void*)0) == ((*l_2505) , l_2527)), p_17.f0)) >= 0xB20E6271L)))), l_2528[1])) < l_2354)), 0)) , p_18))
            { 
                int16_t *l_2536 = &g_626[1];
                union U2 ***l_2537 = &g_1181;
                (*l_2505) = 1L;
                if (p_17.f2)
                { 
                    int32_t *l_2529[1][1][6] = {{{&l_2354,&l_2354,&g_7,&l_2354,&l_2354,&g_7}}};
                    int i, j, k;
                    ++l_2530[1];
                }
                else
                { 
                    union U2 ***l_2535 = &g_1181;
                    int32_t l_2539 = 0xDFC8512EL;
                    (*l_2505) = ((l_2535 == ((l_2536 == l_2366) , l_2537)) & (l_2538 == (void*)0));
                    if (l_2539)
                        continue;
                }
                if (l_2482)
                    continue;
                if (p_16)
                    goto lbl_2540;
                for (l_2393 = 0; (l_2393 <= 22); l_2393 = safe_add_func_uint8_t_u_u(l_2393, 1))
                { 
                    if (g_1896)
                        goto lbl_2540;
                    return p_18;
                }
            }
            else
            { 
                int64_t **l_2553[4][5][5] = {{{&g_988,&g_988,&g_988,&g_988,&g_988},{&g_988,&g_988,&g_988,&g_988,(void*)0},{&g_988,&g_988,(void*)0,&g_988,(void*)0},{&g_988,&g_988,(void*)0,&g_988,&g_988},{&g_988,&g_988,&g_988,(void*)0,&g_988}},{{&g_988,&g_988,&g_988,&g_988,(void*)0},{&g_988,&g_988,&g_988,&g_988,&g_988},{&g_988,&g_988,&g_988,(void*)0,&g_988},{(void*)0,&g_988,&g_988,(void*)0,&g_988},{&g_988,&g_988,&g_988,&g_988,&g_988}},{{&g_988,&g_988,&g_988,&g_988,&g_988},{&g_988,&g_988,&g_988,&g_988,(void*)0},{&g_988,&g_988,(void*)0,(void*)0,&g_988},{&g_988,&g_988,(void*)0,(void*)0,&g_988},{&g_988,&g_988,&g_988,&g_988,(void*)0}},{{&g_988,&g_988,&g_988,&g_988,&g_988},{&g_988,&g_988,&g_988,(void*)0,&g_988},{&g_988,&g_988,(void*)0,&g_988,&g_988},{(void*)0,&g_988,&g_988,&g_988,&g_988},{(void*)0,&g_988,(void*)0,&g_988,&g_988}}};
                int64_t ***l_2554 = &l_2469;
                uint8_t *l_2557 = &g_272;
                int32_t l_2559 = 1L;
                union U1 *l_2564 = &g_668[2][0];
                int i, j, k;
                l_2558 &= (safe_div_func_int16_t_s_s(l_2530[1], ((safe_lshift_func_uint8_t_u_u(0xC1L, 7)) , (safe_mul_func_int8_t_s_s(0x06L, ((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((*l_2554) = l_2553[3][0][0]) != (void*)0), (safe_div_func_int8_t_s_s(0xE9L, ((*l_2557) ^= ((0xC4L <= 1UL) , (*g_199))))))), 0x3BEF55DFB3AF2BDELL)) , 0x69L))))));
                if (l_2559)
                    break;
                for (g_271 = 0; (g_271 > (-23)); --g_271)
                { 
                    union U1 l_2567[4][5][3] = {{{{5UL},{18446744073709551615UL},{1UL}},{{0xD5677F33L},{18446744073709551615UL},{18446744073709551612UL}},{{0UL},{18446744073709551612UL},{18446744073709551606UL}},{{0x0A00FEDCL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{0x31F3F294L}}},{{{1UL},{18446744073709551612UL},{18446744073709551615UL}},{{18446744073709551612UL},{18446744073709551615UL},{4UL}},{{1UL},{18446744073709551615UL},{18446744073709551615UL}},{{0x9E88B498L},{18446744073709551612UL},{18446744073709551606UL}},{{5UL},{18446744073709551615UL},{1UL}}},{{{0xD5677F33L},{18446744073709551615UL},{18446744073709551612UL}},{{0UL},{18446744073709551612UL},{18446744073709551606UL}},{{0x0A00FEDCL},{18446744073709551615UL},{18446744073709551615UL}},{{18446744073709551615UL},{18446744073709551615UL},{0x31F3F294L}},{{1UL},{18446744073709551612UL},{18446744073709551615UL}}},{{{18446744073709551612UL},{18446744073709551615UL},{4UL}},{{1UL},{18446744073709551615UL},{18446744073709551615UL}},{{0x9E88B498L},{18446744073709551612UL},{18446744073709551606UL}},{{5UL},{18446744073709551615UL},{1UL}},{{0xD5677F33L},{18446744073709551615UL},{18446744073709551612UL}}}};
                    int16_t *l_2571 = &g_1373[1][0][6];
                    int i, j, k;
                    (*l_2505) = ((safe_lshift_func_uint8_t_u_s((((void*)0 != &g_785) , (l_2564 == (*g_803))), ((safe_lshift_func_uint16_t_u_s((l_2567[0][4][1] , (safe_unary_minus_func_uint64_t_u(l_2559))), 0)) , (((((*l_2571) = (((safe_rshift_func_int16_t_s_u(2L, 8)) & l_2530[1]) && 0x1D431D4018AD2B24LL)) , p_16) < (**g_511)) && (*g_199))))) <= 0x49L);
                    (**g_1180) = l_2572;
                    if (p_18)
                        continue;
                }
            }
            return l_2558;
        }
        l_2482 = (p_17.f0 || (l_2353 &= (safe_mod_func_int8_t_s_s((&l_2527 != ((safe_div_func_uint32_t_u_u(((*g_988) <= (safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((*g_988), (65526UL >= (((9L ^ (((!((*g_1515) = ((safe_lshift_func_int16_t_s_u(((l_2354 = l_2393) == l_2584), (**g_511))) <= 0xF3DDL))) , 0x9FL) || 2L)) == (-1L)) || 1UL)))), 1L))), 0xC83FAA31L)) , l_2585)), (*l_2505)))));
        for (l_2353 = 0; (l_2353 < (-8)); l_2353 = safe_sub_func_uint32_t_u_u(l_2353, 7))
        { 
            uint32_t **l_2604[4] = {&g_163,&g_163,&g_163,&g_163};
            const int32_t l_2605 = 0x7B770222L;
            uint32_t l_2607[7] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
            int i;
            (*l_2505) = ((safe_lshift_func_uint8_t_u_s((6UL ^ (((*g_804) , (((safe_rshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((1UL && ((((1UL && (l_2597 , ((l_2584 | ((*g_988) = (safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u(((**g_511) = (((safe_div_func_int8_t_s_s((l_2604[1] != (***g_2194)), 0x4DL)) <= p_17.f0) >= p_17.f2)), 6)) != 0x97D5L) >= 0x4C6BE2ADD6FAFA85LL), (*l_2505))))) && l_2605))) != l_2605) & l_2606) >= l_2482)) , p_17.f2), 4)), 0xBC81L)) != l_2607[6]), (*g_199))) < g_413[4][1]) & p_18)) <= (*l_2505))), g_792)) | l_2608);
        }
    }
    l_2612--;
    (*l_2617) = l_2615;
    (*l_2609) = p_16;
    for (g_632 = 0; (g_632 <= 3); g_632 += 1)
    { 
        uint64_t *l_2618 = &g_712[0];
        int32_t l_2637 = 3L;
        for (g_513 = 0; (g_513 <= 3); g_513 += 1)
        { 
            int16_t l_2619 = 1L;
            (*g_208) = &l_2482;
            for (g_628 = 3; (g_628 >= 0); g_628 -= 1)
            { 
                for (g_2343 = 0; (g_2343 <= 3); g_2343 += 1)
                { 
                    int i, j, k;
                    g_1553.f0 |= ((*l_2609) = (l_2619 ^= (l_2618 == (p_17 , (void*)0))));
                    if (p_17.f2)
                        break;
                    l_2620++;
                }
            }
        }
        for (g_255.f1 = 0; (g_255.f1 <= 3); g_255.f1 += 1)
        { 
            const union U1 l_2625 = {0x80E37931L};
            union U2 *l_2669 = &g_1909[0][3][4];
            int32_t *l_2673 = &g_319;
            (*l_2609) = p_17.f0;
            (*l_2609) = (safe_sub_func_int32_t_s_s(((l_2625 , (safe_unary_minus_func_int64_t_s((l_2625.f2 ^ 0x6440A932A80374CBLL)))) , (safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_2625 , (p_17 , (l_2625 , (safe_sub_func_uint32_t_u_u((((*l_2609) <= 0xC728L) | 0xBBADA884L), p_18))))), p_18)), 0x69L))), p_16));
            for (g_1366 = 0; (g_1366 <= 3); g_1366 += 1)
            { 
                struct S0 ****l_2639 = &l_2638;
                int64_t *l_2655 = &g_1891;
                int i, j, k;
                g_628 = (1L ^ ((*l_2655) &= (safe_div_func_int64_t_s_s((*g_988), ((((l_2637 | (((*l_2639) = l_2638) != &g_933[0][0][4])) , (safe_sub_func_uint16_t_u_u(((*g_512) = (safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((0L == ((*l_2609) |= (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((*g_512), p_18)), 0)))), 12)), 0x8FL)), l_2654)), g_1813.f0))), 65527UL))) , l_2625.f2) , (*g_988))))));
                if (p_17.f0)
                    continue;
                (*l_2609) ^= (safe_add_func_uint64_t_u_u(((p_18 , (((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((p_16 < ((((1L & (3UL && (~(safe_rshift_func_int8_t_s_u((((((safe_add_func_int64_t_s_s((p_18 >= (((*l_2618) |= (safe_div_func_int8_t_s_s(((l_2670 = l_2669) == (void*)0), g_597))) , p_18)), 0x336B67C25602045ELL)) | l_2637) > l_2672) != 0x97L) <= l_2637), (*g_199)))))) >= 0x11EDL) == (-9L)) == l_2637)), 0xEBL)), 7)) , (**g_511)) , (*g_199))) ^ l_2637), (-4L)));
                l_2673 = l_2611[g_255.f1][g_632][g_1366];
            }
        }
    }
    return p_17.f2;
}



static uint32_t  func_19(int64_t  p_20, const uint8_t  p_21, uint32_t  p_22)
{ 
    return p_20;
}



static int64_t  func_23(int8_t  p_24, uint8_t  p_25, int32_t  p_26, const uint64_t  p_27)
{ 
    int8_t l_1396[3][2][1] = {{{5L},{(-7L)}},{{5L},{(-7L)}},{{5L},{(-7L)}}};
    int32_t l_1399 = 0L;
    int16_t ****l_1402[3][2];
    int32_t l_1409 = 0xF61EEA48L;
    union U1 *l_1441 = &g_668[2][0];
    uint64_t *l_1444 = &g_413[4][1];
    uint8_t **l_1461 = &g_199;
    uint32_t l_1462 = 1UL;
    uint32_t *** const l_1476[6][2] = {{&g_162,&g_162},{&g_162,&g_162},{&g_162,&g_162},{&g_162,&g_162},{&g_162,&g_162},{&g_162,&g_162}};
    uint8_t l_1479 = 1UL;
    uint8_t l_1541 = 0x7BL;
    struct S0 *l_1599 = (void*)0;
    int32_t l_1672 = 8L;
    union U1 *l_1685 = &g_668[1][0];
    struct S0 **l_1725 = (void*)0;
    uint8_t l_1757 = 0x54L;
    int64_t *l_1778 = (void*)0;
    int64_t *l_1779 = &g_862.f3;
    int64_t *l_1780 = &g_139[1][6][0];
    int8_t *l_1781 = &g_1483[5];
    int32_t l_1782 = (-8L);
    int32_t l_1821 = (-6L);
    union U2 *l_1908 = &g_1909[3][2][4];
    int32_t l_1914 = (-1L);
    struct S0 ****l_1924 = &g_784;
    int16_t l_2030 = 0xCEBAL;
    uint8_t l_2049 = 0x2EL;
    uint16_t ***l_2065[2];
    uint8_t l_2085 = 0x4FL;
    int32_t **l_2094 = &g_770;
    int32_t l_2103[6][5] = {{0x744C3D92L,0x744C3D92L,0L,0L,0x744C3D92L},{0xC59A048DL,1L,0xC59A048DL,1L,0xC59A048DL},{0x744C3D92L,0L,0L,0x744C3D92L,0x744C3D92L},{0xA86C274BL,1L,0xA86C274BL,1L,0xA86C274BL},{0x744C3D92L,0x744C3D92L,0L,0L,0x744C3D92L},{0xC59A048DL,1L,0xC59A048DL,1L,0xC59A048DL}};
    int32_t l_2114[3];
    int32_t *l_2115 = &l_2114[1];
    int32_t l_2162 = 9L;
    uint64_t * const ***l_2213 = &g_1513;
    uint32_t l_2241 = 0x5A361982L;
    int32_t l_2339 = (-7L);
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_1402[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
        l_2065[i] = &g_511;
    for (i = 0; i < 3; i++)
        l_2114[i] = 0L;
lbl_2277:
    for (g_271 = 0; (g_271 == 29); g_271 = safe_add_func_int32_t_s_s(g_271, 1))
    { 
        uint8_t l_1412 = 0x77L;
        int8_t l_1417 = 3L;
        int32_t l_1463[7];
        uint64_t ***l_1506[5] = {&g_436[0][0],&g_436[0][0],&g_436[0][0],&g_436[0][0],&g_436[0][0]};
        uint64_t * const *l_1508 = &g_437;
        uint64_t * const **l_1507[4][5][5] = {{{&l_1508,&l_1508,&l_1508,&l_1508,&l_1508},{&l_1508,(void*)0,(void*)0,&l_1508,&l_1508},{(void*)0,&l_1508,(void*)0,&l_1508,&l_1508},{&l_1508,&l_1508,&l_1508,&l_1508,(void*)0},{&l_1508,(void*)0,&l_1508,&l_1508,(void*)0}},{{&l_1508,(void*)0,&l_1508,&l_1508,(void*)0},{&l_1508,&l_1508,&l_1508,&l_1508,(void*)0},{(void*)0,&l_1508,&l_1508,&l_1508,&l_1508},{&l_1508,&l_1508,&l_1508,&l_1508,&l_1508},{&l_1508,&l_1508,&l_1508,(void*)0,&l_1508}},{{&l_1508,&l_1508,&l_1508,&l_1508,&l_1508},{&l_1508,&l_1508,(void*)0,&l_1508,&l_1508},{(void*)0,&l_1508,&l_1508,&l_1508,&l_1508},{&l_1508,(void*)0,(void*)0,&l_1508,&l_1508},{(void*)0,&l_1508,&l_1508,&l_1508,&l_1508}},{{&l_1508,&l_1508,&l_1508,(void*)0,&l_1508},{&l_1508,&l_1508,&l_1508,&l_1508,&l_1508},{(void*)0,&l_1508,&l_1508,&l_1508,&l_1508},{&l_1508,&l_1508,&l_1508,&l_1508,&l_1508},{(void*)0,&l_1508,&l_1508,&l_1508,&l_1508}}};
        union U2 *l_1530[4];
        int32_t l_1563 = 0x44B81A94L;
        union U2 *****l_1566 = &g_1565;
        int16_t *l_1651 = &g_1263;
        int16_t **l_1650 = &l_1651;
        int16_t ***l_1649 = &l_1650;
        int32_t **l_1659 = &g_770;
        union U1 *l_1684 = &g_668[1][0];
        struct S0 *l_1732 = &g_252[0];
        uint16_t l_1769 = 0xD477L;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1463[i] = (-1L);
        for (i = 0; i < 4; i++)
            l_1530[i] = &g_862;
        for (g_1305 = 27; (g_1305 <= 49); g_1305++)
        { 
            int16_t ****l_1400 = &g_560;
            int16_t *****l_1401[6] = {&l_1400,&l_1400,&l_1400,&l_1400,&l_1400,&l_1400};
            int8_t *l_1407 = (void*)0;
            int8_t *l_1408 = (void*)0;
            int32_t l_1410 = 0xF2FA6001L;
            int32_t *l_1411[3][2][7] = {{{&l_1410,&l_1410,&l_1409,&g_2[1][1],&g_319,(void*)0,&l_1410},{&l_1410,&l_1410,(void*)0,&g_319,(void*)0,(void*)0,&g_319}},{{&g_7,&l_1410,&g_7,&l_1410,&g_319,&g_7,&g_2[1][1]},{&g_319,&l_1410,&g_1028,&g_2[1][1],&l_1410,&l_1409,&l_1410}},{{&g_628,&l_1410,&l_1410,&g_628,&g_2[1][1],&g_7,&g_319},{(void*)0,&l_1410,&l_1410,(void*)0,&g_319,(void*)0,(void*)0}}};
            union U2 ****l_1430 = &g_1180;
            int32_t l_1480 = (-1L);
            uint32_t l_1500 = 18446744073709551615UL;
            uint64_t ****l_1517[6] = {&l_1506[1],&l_1506[1],&l_1506[1],&l_1506[1],&l_1506[1],&l_1506[1]};
            uint64_t ***l_1520 = &g_436[0][3];
            uint64_t ****l_1519[2][3][5] = {{{&l_1520,&l_1520,(void*)0,(void*)0,&l_1520},{&l_1520,&l_1520,&l_1520,&l_1520,&l_1520},{&l_1520,&l_1520,&l_1520,(void*)0,(void*)0}},{{&l_1520,&l_1520,&l_1520,&l_1520,&l_1520},{&l_1520,&l_1520,&l_1520,&l_1520,&l_1520},{(void*)0,&l_1520,(void*)0,&l_1520,&l_1520}}};
            int i, j, k;
            l_1410 &= (safe_mul_func_int8_t_s_s(l_1396[0][0][0], (l_1409 &= (safe_mod_func_uint64_t_u_u(((l_1399 &= g_252[0].f4) == ((l_1402[0][1] = l_1400) == (void*)0)), (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_25, g_6)), ((p_27 ^ 1UL) < p_24))))))));
            l_1412--;
            if (((l_1417 ^= (safe_add_func_int8_t_s_s(0x08L, p_27))) | (safe_sub_func_int64_t_s_s(((((*g_512)--) && l_1412) , ((safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(l_1412, 5)), (safe_sub_func_uint32_t_u_u((p_27 != (l_1409 = ((((((*l_1430) = &g_1181) != (void*)0) , 1UL) < l_1412) ^ p_27))), 9UL)))), 0UL)) <= p_25)), l_1399))))
            { 
                return (**g_987);
            }
            else
            { 
                union U2 l_1457 = {0UL};
                uint64_t *** const *l_1459 = (void*)0;
                uint64_t *** const **l_1458 = &l_1459;
                uint16_t **l_1460 = &g_512;
                struct S0 ***l_1466 = (void*)0;
                int32_t l_1478 = 0x25FF95A2L;
                int16_t *l_1525 = &g_189;
                int16_t * const *l_1524 = &l_1525;
                union U1 ***l_1529[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1529[i] = &g_831[1];
                if ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(g_2[1][1], ((void*)0 == l_1441))), 1UL)), 4)), 1)), (safe_div_func_int8_t_s_s((l_1444 != (void*)0), ((safe_mod_func_int32_t_s_s((-10L), (***g_395))) , p_26))))))
                { 
                    uint32_t ***l_1456[7][2][4] = {{{&g_162,&g_162,&g_162,&g_162},{&g_162,(void*)0,(void*)0,&g_162}},{{(void*)0,&g_162,(void*)0,(void*)0},{&g_162,&g_162,&g_162,&g_162}},{{&g_162,(void*)0,(void*)0,&g_162},{(void*)0,&g_162,(void*)0,(void*)0}},{{&g_162,&g_162,&g_162,&g_162},{&g_162,(void*)0,(void*)0,&g_162}},{{(void*)0,&g_162,(void*)0,(void*)0},{&g_162,&g_162,&g_162,&g_162}},{{&g_162,(void*)0,(void*)0,&g_162},{(void*)0,&g_162,(void*)0,(void*)0}},{{&g_162,&g_162,&g_162,&g_162},{&g_162,(void*)0,(void*)0,&g_162}}};
                    uint32_t ****l_1455 = &l_1456[4][1][1];
                    int32_t l_1472 = (-7L);
                    union U2 l_1475 = {0x60AEL};
                    const struct S0 ***l_1477[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1477[i] = (void*)0;
                    l_1409 = (safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((*g_512) = ((((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((void*)0 != l_1455), 3)), (l_1457 , (((((void*)0 != l_1458) & (p_25 && (&g_512 != l_1460))) , p_27) || 0x8DA5A871L)))) & p_25) , l_1461) == (void*)0)), l_1462)), 2));
                    g_252[0].f0 ^= ((l_1463[5] = p_27) || (((safe_mod_func_uint64_t_u_u((l_1478 &= ((g_784 = l_1466) == ((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint8_t_u_s(((((*l_1444) |= p_26) , l_1472) && (safe_sub_func_int64_t_s_s((-5L), (l_1475 , ((l_1476[3][0] != (*g_754)) & p_25))))), 6)))), l_1396[0][0][0])) , l_1477[0]))), l_1479)) == p_27) == 255UL));
                    return p_25;
                }
                else
                { 
                    (*g_769) = &l_1478;
                    if (l_1462)
                        continue;
                    (**g_1180) = &l_1457;
                }
                if (p_26)
                { 
                    int16_t l_1481[1][6][4] = {{{(-1L),0x7E35L,(-1L),0L},{0L,0x7E35L,0x1CA6L,1L},{0x7E35L,(-2L),(-2L),0x7E35L},{(-1L),1L,(-2L),0L},{0x7E35L,0L,0x1CA6L,0L},{0L,(-2L),(-1L),0L}}};
                    int32_t l_1484 = 0xB80CB5CFL;
                    int i, j, k;
                    g_1486++;
                }
                else
                { 
                    int16_t *l_1489 = &g_626[0];
                    uint32_t *l_1490 = &g_417;
                    uint64_t ***l_1505 = &g_436[0][3];
                    uint64_t * const ***l_1509 = (void*)0;
                    uint64_t * const ***l_1510 = &l_1507[3][1][1];
                    uint64_t * const **l_1512 = &l_1508;
                    uint64_t * const ***l_1511[1][1][3];
                    uint64_t *****l_1518 = &l_1517[0];
                    int32_t l_1521 = 0xCC723E9AL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_1511[i][j][k] = &l_1512;
                        }
                    }
                    (*g_770) = (&g_1263 != l_1489);
                    (*g_770) ^= (l_1463[5] = (l_1490 == (void*)0));
                    (*g_770) = ((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((*g_199) = (((!((((l_1521 = ((((*g_512) &= 0xC780L) != (0xA2L & l_1412)) >= (safe_add_func_int32_t_s_s(((((safe_mul_func_int16_t_s_s(l_1500, (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((*l_1518) = (((l_1506[1] = l_1505) == (g_1513 = ((*l_1510) = l_1507[0][2][4]))) , l_1517[0])) != l_1519[1][0][2]), (**g_769))), l_1463[4])))) != (*g_988)) | l_1399) != p_24), l_1396[0][0][0])))) , 0x4BAFL) == g_252[0].f3) && p_24)) != 1UL) > p_27)), p_27)), (-1L))) < p_24);
                    l_1463[6] = (((((safe_add_func_uint32_t_u_u((l_1524 != &l_1525), p_26)) , ((*g_988) = (l_1521 = (~(safe_sub_func_int16_t_s_s(((void*)0 == l_1529[0]), (l_1466 == &g_933[0][0][4]))))))) && (*g_1515)) > g_1482[6][0]) && (**g_769));
                    (*g_769) = &l_1463[5];
                }
            }
            (**g_1180) = l_1530[2];
        }
        for (g_604 = (-29); (g_604 == 41); ++g_604)
        { 
            int32_t l_1536 = 0x95E3382EL;
            int32_t *l_1537[7];
            union U2 *l_1540 = &g_862;
            const int32_t *l_1585[3][6][4] = {{{&l_1399,&g_319,&l_1399,&l_1463[5]},{&g_6,&g_319,&g_2[1][1],&g_319},{&g_6,&l_1463[5],&l_1399,&g_319},{&l_1399,&g_319,&l_1399,&l_1463[5]},{&g_6,&g_319,&g_2[1][1],&g_319},{&g_6,&l_1463[5],&l_1399,&g_319}},{{&l_1399,&g_319,&l_1399,&l_1463[5]},{&g_6,&g_319,&g_2[1][1],&g_319},{&g_6,&l_1463[5],&l_1399,&g_319},{&l_1399,&g_319,&l_1399,&l_1463[5]},{&g_6,&g_319,&g_2[1][1],&g_319},{&g_6,&l_1463[5],&l_1399,&g_319}},{{&l_1399,&g_319,&l_1399,&l_1463[5]},{&g_6,&g_319,&g_2[1][1],&g_319},{&g_6,&l_1463[5],&l_1399,&g_319},{&l_1399,&g_319,&l_1399,&l_1463[5]},{&g_6,&g_319,&g_2[1][1],&g_319},{&g_6,&l_1463[5],&l_1399,&g_319}}};
            struct S0 *l_1598 = (void*)0;
            union U1 *l_1646 = &g_668[2][0];
            uint32_t l_1652 = 18446744073709551611UL;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1537[i] = &l_1409;
            for (g_629 = 21; (g_629 >= (-8)); g_629 = safe_sub_func_uint32_t_u_u(g_629, 3))
            { 
                int32_t *l_1535[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1535[i] = &g_1028;
                l_1536 ^= 1L;
                for (g_792 = 0; (g_792 <= 5); g_792 += 1)
                { 
                    l_1537[5] = l_1537[2];
                }
                for (l_1412 = (-25); (l_1412 < 10); ++l_1412)
                { 
                    uint64_t l_1548 = 18446744073709551615UL;
                    (*g_1181) = l_1540;
                    l_1541++;
                    (*g_208) = &l_1399;
                    l_1548 = (p_24 >= ((g_319 = ((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((((void*)0 != &p_27) >= (l_1537[2] == ((*g_162) = (void*)0))), 1)), 0xB7CEA8E8L)) | 0xAE2318C4AF3E33A9LL)) < 0x8FD13DF7L));
                }
                if (((0x74L < (safe_mod_func_int8_t_s_s((0x6F4CL != (l_1409 || (safe_mod_func_uint64_t_u_u(((*g_1515) = p_24), 3L)))), (g_1553 , ((safe_rshift_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((-1L), p_25)) , l_1412) <= p_25), 2)) ^ 0xFAC2A431L))))) ^ l_1463[5]))
                { 
                    uint32_t ***l_1561 = &g_162;
                    uint32_t ****l_1560 = &l_1561;
                    uint16_t *l_1562 = &g_360;
                    l_1563 |= (safe_rshift_func_int16_t_s_s((l_1560 == (void*)0), (l_1417 ^ ((*l_1562) &= (((0xB1BE6D5BL == l_1463[1]) , (((*g_512) , ((g_1553.f7 && (-9L)) > p_25)) == 0x175AL)) != p_26)))));
                    l_1566 = g_1564;
                }
                else
                { 
                    int16_t *****l_1569 = &l_1402[0][1];
                    int8_t *l_1584 = &g_1485;
                    l_1563 = (((safe_lshift_func_int8_t_s_s((((*l_1569) = l_1402[1][0]) != (((*g_988) ^= (+(!p_27))) , &g_560)), (p_25 && (safe_sub_func_int64_t_s_s((-1L), (((safe_rshift_func_uint16_t_u_u((((p_25 , ((*l_1584) = ((((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((-9L), p_24)), 0xECD6L)) && 7L), 3)) , p_27), g_252[0].f6)) , p_24) , p_25) && 3L))) ^ p_26) , (**g_511)), (*g_512))) | 18446744073709551609UL) & l_1463[0])))))) >= 65535UL) > 0x7A441CBBL);
                    (*g_208) = ((*g_769) = &l_1463[5]);
                    l_1585[0][2][1] = (*g_208);
                    if ((*g_209))
                        continue;
                }
            }
            for (l_1536 = 0; (l_1536 <= 1); l_1536 += 1)
            { 
                int i, j;
                l_1399 = (safe_sub_func_int64_t_s_s((g_1482[(l_1536 + 1)][l_1536] && (safe_mod_func_int16_t_s_s(0xE4A9L, p_25))), (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(((((l_1563 |= ((**l_1461) &= (l_1399 || (((safe_mod_func_int64_t_s_s(((*g_988) |= 0x9C255AD536ADEAD9LL), 2UL)) , l_1598) != l_1599)))) || p_25) , g_1482[(l_1536 + 1)][l_1536]) <= g_1516), p_24)) >= p_24), 0)) >= p_24), g_252[0].f5))));
            }
            for (g_255.f1 = 0; (g_255.f1 == 12); g_255.f1 = safe_add_func_uint16_t_u_u(g_255.f1, 9))
            { 
                int16_t l_1619[6][5][4] = {{{(-2L),0x0FA9L,0xB10CL,0xCC37L},{(-9L),0x1914L,0xF2E5L,0x3FC9L},{(-9L),0x8371L,0xB10CL,(-9L)},{(-2L),0x3FC9L,(-2L),0xB10CL},{9L,(-1L),1L,0x6C3EL}},{{0x97D9L,4L,0x8371L,0x234BL},{0x8D14L,0x1914L,0xC3BBL,0xB10CL},{0x0309L,9L,1L,0x1465L},{0x0FA9L,0x8371L,(-2L),9L},{0x9E94L,0xA89AL,0xCC37L,0xCC37L}},{{0L,0L,1L,0x234BL},{(-9L),1L,0x461FL,1L},{0x8D14L,0x3FC9L,0x9E94L,0x461FL},{0x0FA9L,0x3FC9L,1L,1L},{0x3FC9L,1L,0x1F65L,0x234BL}},{{(-2L),0L,0x8371L,0xCC37L},{0x0309L,0xA89AL,0xF2E5L,9L},{0x1465L,0x8371L,0x9E94L,0x1465L},{(-2L),9L,0xCC37L,0xB10CL},{1L,0x1914L,1L,0x234BL}},{{0L,4L,0xB10CL,0x6C3EL},{0x8D14L,(-1L),0x8D14L,0xB10CL},{0x1465L,0x3FC9L,1L,(-9L)},{0x97D9L,0x8371L,0x1F65L,0xC3BBL},{0x0853L,(-2L),0x8142L,1L}},{{0x8371L,0xB10CL,(-9L),0L},{0xCC37L,0x2F9FL,0L,0x461FL},{0L,0x461FL,0x30D8L,0x8928L},{0x9E94L,0x8D14L,0x1914L,0xC3BBL},{0x8D14L,0x2F9FL,1L,0xE2D8L}}};
                int32_t l_1620[5];
                int8_t *l_1630 = &g_160;
                uint64_t l_1631[7][3] = {{18446744073709551610UL,18446744073709551610UL,3UL},{0UL,0x388E3FE587D08CDELL,0x388E3FE587D08CDELL},{3UL,18446744073709551611UL,18446744073709551615UL},{0UL,0x54072004F3E37B5ELL,0UL},{18446744073709551610UL,3UL,18446744073709551615UL},{6UL,6UL,0x388E3FE587D08CDELL},{0UL,3UL,3UL}};
                int32_t *l_1632 = &l_1620[4];
                struct S0 l_1633 = {0,919,18446744073709551609UL,4,-98,0xC016C924L,129,50};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1620[i] = (-7L);
                for (g_417 = 0; (g_417 >= 12); g_417 = safe_add_func_uint32_t_u_u(g_417, 1))
                { 
                    return (**g_987);
                }
                if (((--(*g_199)) <= ((g_634 = (safe_rshift_func_uint16_t_u_s(p_26, (safe_mul_func_int8_t_s_s(g_81, p_24))))) ^ (!(safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_s((l_1620[4] &= (safe_lshift_func_int16_t_s_u((+l_1619[5][1][1]), 7))), (safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((p_27 || (safe_rshift_func_int8_t_s_u(g_1366, 7))), (+((*l_1630) = (safe_sub_func_uint32_t_u_u(p_25, p_25)))))), (*g_512))))))) <= p_27) || l_1412), 9))))))
                { 
                    return p_24;
                }
                else
                { 
                    int32_t *l_1634 = &g_1028;
                    l_1631[1][1] |= (l_1409 = 0x9421F1A2L);
                    (*g_769) = l_1632;
                    (*g_770) = (0xE774L | 0x9880L);
                    (*g_208) = (l_1633 , ((*g_769) = l_1634));
                    (*l_1632) |= (-1L);
                }
                l_1409 = p_24;
                if (((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(((safe_div_func_int32_t_s_s((((-5L) ^ (p_26 & 0x4761L)) | ((**g_511) = 0x2E9EL)), 0x38483A90L)) <= (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(g_284, ((*g_199) = p_24))), g_712[0]))), l_1412)) , g_271), p_25)) | g_139[0][4][0]))
                { 
                    if (g_1645)
                        break;
                    g_1553.f0 &= ((*g_770) = (p_26 <= 0x0503L));
                    if (l_1462)
                        continue;
                    (**g_769) ^= (-2L);
                    (*g_769) = (*g_769);
                }
                else
                { 
                    struct S0 *l_1647[6] = {&l_1633,&l_1633,&l_1633,&l_1633,&l_1633,&l_1633};
                    int32_t l_1648 = 0x4AFDD980L;
                    int i;
                    (*g_803) = l_1646;
                    (*g_770) = ((l_1598 != ((*g_785) = l_1647[5])) && (l_1541 < l_1648));
                    if ((*g_770))
                        continue;
                    (**g_769) = (((void*)0 == l_1649) ^ (*g_199));
                }
                l_1652--;
            }
        }
        for (g_81 = 1; (g_81 > (-1)); g_81 = safe_sub_func_uint8_t_u_u(g_81, 2))
        { 
            uint32_t l_1660 = 0xCC0E6BD3L;
            int32_t l_1669 = 0x130A0F3BL;
            int32_t l_1671 = (-5L);
            struct S0 * const **l_1691 = (void*)0;
            struct S0 * const ***l_1690 = &l_1691;
            int32_t l_1701 = 0L;
            uint32_t l_1709 = 9UL;
            int32_t *l_1733 = &l_1672;
            int32_t l_1756[6][2][7] = {{{(-1L),0xC466676CL,(-2L),0xC466676CL,(-1L),0x16CD5A07L,0xBEFB060EL},{0x888D4D23L,0xC85D0574L,(-7L),(-4L),0xA8D5CEFDL,0x0037BC83L,0x992ADF10L}},{{0xC466676CL,(-1L),0x1007F782L,0L,(-2L),(-2L),0L},{0x888D4D23L,(-4L),0x888D4D23L,(-1L),0L,6L,0x35BB2CC9L}},{{(-1L),(-1L),0x5D66530DL,0x16CD5A07L,0L,0xBEFB060EL,(-6L)},{0xDADECDE0L,0x888D4D23L,6L,6L,6L,6L,0x888D4D23L}},{{(-6L),0x64B5FADDL,0L,3L,(-1L),(-2L),(-1L)},{(-4L),0x62DF7934L,0L,(-7L),0x35BB2CC9L,0x0037BC83L,2L}},{{0x16CD5A07L,0xB516B1D5L,3L,3L,0xB516B1D5L,0x16CD5A07L,(-2L)},{0L,2L,0xDADECDE0L,6L,(-1L),0L,0L}},{{(-1L),0L,0x64B5FADDL,0x16CD5A07L,0x1007F782L,0xB516B1D5L,0x1007F782L},{(-1L),2L,2L,(-1L),0x62DF7934L,6L,0x0037BC83L}}};
            int i, j, k;
            for (g_627 = 1; (g_627 >= 0); g_627 -= 1)
            { 
                int32_t l_1670 = (-1L);
                int i, j, k;
                if (((((safe_add_func_uint32_t_u_u(((((g_1373[(g_627 + 1)][(g_627 + 3)][(g_627 + 3)] & (l_1659 != (void*)0)) ^ ((0x6069L & (l_1462 && p_25)) ^ (p_27 > p_27))) , 252UL) & p_25), p_25)) || p_26) < g_77) , l_1660))
                { 
                    int32_t *l_1661 = &g_1028;
                    int32_t *l_1662 = &g_319;
                    int32_t *l_1663 = (void*)0;
                    int32_t *l_1664 = &l_1463[5];
                    int32_t *l_1665 = &g_1028;
                    int32_t *l_1666 = &l_1399;
                    int32_t *l_1667 = &l_1463[6];
                    int32_t *l_1668[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1668[i] = &g_1028;
                    ++g_1673[0];
                }
                else
                { 
                    union U1 *l_1676 = &g_668[0][0];
                    (*g_803) = l_1676;
                }
            }
            if ((((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((!(p_25 == (((*g_803) = l_1684) == l_1685))), 3)) , (safe_sub_func_uint32_t_u_u(((0x6B481EE6L | (p_24 & p_25)) & (((l_1690 == &l_1691) , 0x2B05L) > p_26)), 0L))) == l_1672), 0xAC502516L)), p_25)) > l_1672) | 0xCC9E9FA6DDB4CE6ALL))
            { 
                if (p_27)
                    break;
                return p_26;
            }
            else
            { 
                int16_t l_1695 = 0x7A1BL;
                struct S0 l_1719 = {-0,409,6UL,4,-104,3L,63,8};
                int32_t *l_1752 = (void*)0;
                int32_t *l_1753 = &g_319;
                int32_t *l_1754 = &g_634;
                int32_t *l_1755[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1755[i] = &l_1701;
                for (g_255.f3 = 5; (g_255.f3 >= 0); g_255.f3 -= 1)
                { 
                    int32_t *l_1692 = &l_1463[5];
                    int32_t *l_1693 = &g_628;
                    int32_t *l_1694 = &g_628;
                    int32_t *l_1696 = (void*)0;
                    int32_t *l_1697 = &g_1028;
                    int32_t *l_1698 = &l_1399;
                    int32_t l_1699 = 1L;
                    int32_t *l_1700 = &g_634;
                    int32_t *l_1702 = (void*)0;
                    int32_t *l_1703 = &l_1669;
                    int32_t *l_1704 = &l_1699;
                    int32_t *l_1705 = &l_1563;
                    int32_t *l_1706 = &l_1669;
                    int32_t *l_1707 = (void*)0;
                    int32_t *l_1708[4] = {&l_1563,&l_1563,&l_1563,&l_1563};
                    union U1 l_1718 = {18446744073709551612UL};
                    int8_t *l_1720 = &g_160;
                    int i;
                    l_1709++;
                    (*l_1700) |= ((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s((((*l_1697) = (safe_lshift_func_uint8_t_u_u((((*l_1720) = ((l_1718 , &g_1100) == (l_1719 , &p_26))) , (g_1483[g_255.f3] ^ ((safe_sub_func_uint32_t_u_u(g_1483[g_255.f3], p_25)) > l_1719.f5))), 5))) == (**g_396)), p_25)), 4)) | (**g_511));
                    (*l_1698) = (l_1719.f0 = ((safe_lshift_func_int8_t_s_u((((void*)0 == l_1725) && (l_1701 ^= 18446744073709551615UL)), (((safe_mod_func_uint32_t_u_u((p_27 , l_1479), p_26)) != ((((((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((((((void*)0 == l_1732) , l_1671) > (***g_395)) ^ (*g_199)), 6)) ^ l_1479), 3)) | l_1399) ^ 0x4E65A51AL) > p_25) < (*g_199)) != p_26)) ^ (*l_1700)))) | g_279));
                    (*l_1694) = p_24;
                }
                (*g_769) = l_1733;
                if (((void*)0 != l_1651))
                { 
                    union U2 * const *l_1741 = &l_1530[1];
                    union U2 * const **l_1740 = &l_1741;
                    int32_t l_1746[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
                    int i;
                    (**g_769) ^= ((p_26 == (safe_div_func_uint8_t_u_u((p_26 < ((*g_1515) && (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(0x2DB1A4BBL, ((*g_1565) == l_1740))), (safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((0x78L <= 0x4BL), l_1746[0])), 65535UL)))))), 0xBFL))) != (*g_988));
                }
                else
                { 
                    (*l_1733) = (**l_1659);
                    l_1409 &= (safe_mul_func_uint16_t_u_u(6UL, ((**l_1659) || g_776.f3)));
                    return (*g_988);
                }
                for (l_1462 = (-2); (l_1462 != 22); l_1462 = safe_add_func_int32_t_s_s(l_1462, 6))
                { 
                    int32_t *l_1751 = (void*)0;
                    (*l_1659) = l_1751;
                    if ((*l_1733))
                        continue;
                }
                --l_1757;
            }
            (*l_1733) = ((((*g_1515) = ((*l_1444) = (((*l_1733) == 18446744073709551615UL) , (safe_lshift_func_int8_t_s_s(g_776.f0, 7))))) & (safe_mod_func_uint64_t_u_u(p_24, (-1L)))) >= ((*g_512) = (((&l_1725 == (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(p_25, (*l_1733))), 1)) <= l_1396[0][0][0]) , &g_933[0][2][1])) , p_24) , 0x4B8CL)));
            l_1769 = (safe_unary_minus_func_int64_t_s(((**g_987) = 0x4F2BED8B61656F46LL)));
        }
    }
    if ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*g_988) == (safe_lshift_func_uint16_t_u_u((((*l_1780) = ((*l_1779) = p_25)) | ((((((p_27 >= (((*l_1781) ^= (p_25 & ((*g_1515) = l_1462))) , l_1399)) != (l_1672 = 0xA01F057EL)) ^ p_24) , 0xC3A95B2FL) , (void*)0) == &l_1402[1][0])), 3))), 0UL)), p_24)), (*g_199))))
    { 
        uint32_t l_1787 = 18446744073709551615UL;
        union U2 l_1796[7][2][2] = {{{{65526UL},{4UL}},{{65533UL},{0x1B55L}}},{{{0x1B55L},{0x1B55L}},{{65533UL},{4UL}}},{{{65526UL},{1UL}},{{0xE68FL},{65533UL}}},{{{1UL},{0xE68FL}},{{1UL},{0xCCD4L}}},{{{1UL},{0xE68FL}},{{1UL},{65533UL}}},{{{0xE68FL},{1UL}},{{65526UL},{4UL}}},{{{65533UL},{0x1B55L}},{{0x1B55L},{0x1B55L}}}};
        const uint32_t ****l_1820 = &g_395;
        int32_t l_1867 = 0x098F23C8L;
        int32_t l_1868 = 0L;
        int32_t l_1879 = 0x77309F61L;
        int32_t l_1882 = 0x7F41BBB9L;
        const uint8_t l_1959 = 0xC1L;
        int16_t l_1962 = (-1L);
        uint16_t l_1963 = 6UL;
        union U1 l_1996 = {18446744073709551607UL};
        const int64_t l_2013 = 0xFC108D86CAF7741BLL;
        struct S0 l_2039 = {0,639,0x0E32B734A3574559LL,0,-107,-4L,90,30};
        int i, j, k;
        if (l_1782)
        { 
            uint32_t l_1799 = 0UL;
            int32_t *l_1800 = &g_81;
            uint32_t **l_1801 = &g_163;
            uint32_t **l_1802 = &g_163;
            const union U2 l_1803 = {6UL};
            struct S0 *l_1812 = &g_1813;
            int16_t l_1822 = (-1L);
            int32_t l_1883 = 0xD294DBCAL;
            int32_t l_1884 = 0x449042A2L;
            int32_t l_1886 = 1L;
            int32_t l_1887 = 0x68724A37L;
            int32_t l_1894 = 0x0166D8F4L;
            int32_t l_1895 = (-1L);
            uint64_t ***l_1944 = (void*)0;
            uint64_t ****l_1943 = &l_1944;
            uint8_t l_1947 = 0x5EL;
            (*l_1800) |= (safe_sub_func_uint32_t_u_u(p_25, (((((safe_rshift_func_uint16_t_u_s(l_1787, 12)) == (safe_add_func_uint16_t_u_u((**g_511), (((safe_sub_func_uint64_t_u_u((0x56L || ((((((safe_mod_func_uint64_t_u_u(l_1787, (safe_mod_func_uint8_t_u_u((((l_1796[1][1][0] , ((safe_sub_func_uint64_t_u_u(((p_27 != 0xDCL) <= p_25), p_26)) , p_27)) ^ (*g_512)) || l_1796[1][1][0].f0), p_24)))) | 4L) == p_25) || p_24) != l_1796[1][1][0].f0) | (*g_512))), l_1799)) , l_1782) , (-1L))))) | l_1787) <= g_1482[1][0]) != p_26)));
            (*l_1800) = p_25;
            if ((((((l_1801 = &g_163) != (l_1796[1][1][0] , l_1802)) < (((l_1796[2][0][0] , ((((void*)0 == &l_1796[1][1][0]) & ((l_1796[1][1][0].f2 || 65531UL) != g_279)) | p_24)) | l_1787) , p_25)) , l_1409) <= (*g_397)))
            { 
                uint8_t l_1811[7][3] = {{0xEEL,0x5BL,0x5BL},{252UL,0x5BL,251UL},{0x19L,0xEEL,0xAEL},{252UL,252UL,0xAEL},{0xEEL,0x19L,251UL},{0x5BL,252UL,0x19L},{0x19L,0x5BL,255UL}};
                int32_t l_1878 = 0x7F119D8DL;
                int32_t l_1880 = 0L;
                int32_t l_1881 = 0L;
                int32_t l_1893 = (-1L);
                int i, j;
                (*l_1800) = (l_1803 , ((((((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((~((*g_512) = (**g_511))) > (safe_add_func_uint16_t_u_u((&p_27 != (void*)0), (l_1396[0][0][0] >= l_1796[1][1][0].f2)))), ((((-1L) < p_26) == p_24) <= l_1811[4][0]))), l_1811[4][0])) < 0x053C7E3BL) , g_1553.f4) || (*g_199)) <= (*l_1800)) , 0x7F35355AL));
                l_1812 = ((*g_785) = (void*)0);
lbl_1823:
                for (g_189 = 0; (g_189 != (-23)); g_189--)
                { 
                    (*l_1800) = ((((safe_div_func_int64_t_s_s(((p_27 > (((*g_988) = (**g_987)) & (!l_1811[4][0]))) == ((p_24 != (+((l_1820 = &g_395) == &g_755))) && (p_25 , p_27))), 18446744073709551606UL)) ^ p_26) || 0x124AE627L) || l_1821);
                    if (p_26)
                        goto lbl_1823;
                    return l_1822;
                }
                if (((*l_1800) = l_1811[0][2]))
                { 
                    int32_t l_1830 = 1L;
                    (*l_1800) = l_1782;
                    (*l_1800) = ((safe_add_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((safe_add_func_int64_t_s_s(0x86DD9B260F9AC95CLL, (l_1830 ^ (((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u((--p_25), (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((*l_1801) == (void*)0), ((safe_rshift_func_int8_t_s_u(g_321[1], 6)) != ((safe_add_func_int64_t_s_s(((safe_add_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(p_24, p_24)) == p_27) >= g_267), p_27)) == 0L), l_1541)) , (*l_1800))))), 6)) | p_26) >= p_24))) >= l_1830), (*l_1800))) && l_1830) | p_27)))), 5)) && p_26) ^ (*g_512)), (*l_1800))) , p_27);
                    return (*g_988);
                }
                else
                { 
                    int64_t l_1856 = (-1L);
                    int32_t l_1857 = 0x2BA74BC5L;
                    int32_t *l_1858 = (void*)0;
                    int32_t *l_1859 = (void*)0;
                    int32_t *l_1860 = &g_628;
                    int32_t *l_1861 = &l_1399;
                    int32_t *l_1862 = &g_628;
                    int32_t *l_1863 = &l_1672;
                    int32_t *l_1865 = &l_1409;
                    int32_t *l_1866 = &l_1782;
                    int32_t *l_1869 = &l_1857;
                    int32_t *l_1870 = &g_628;
                    int32_t *l_1871 = &l_1399;
                    int32_t *l_1872 = &g_1028;
                    int32_t *l_1873 = &g_634;
                    int32_t *l_1874 = (void*)0;
                    int32_t *l_1875 = &g_319;
                    int32_t *l_1876 = &l_1868;
                    int32_t *l_1877[6] = {&l_1868,&l_1868,&l_1868,&l_1868,&l_1868,&l_1868};
                    union U2 **l_1901 = &g_254[0][3];
                    union U2 **l_1902 = &g_254[1][0];
                    union U2 **l_1903 = &g_254[0][3];
                    union U2 **l_1904 = &g_254[0][3];
                    union U2 **l_1905 = &g_254[1][3];
                    union U2 **l_1906 = &g_254[1][6];
                    union U2 **l_1907[5] = {&g_254[0][3],&g_254[0][3],&g_254[0][3],&g_254[0][3],&g_254[0][3]};
                    union U2 * const l_1910 = &l_1796[6][1][0];
                    struct S0 l_1911 = {0,297,0x7A115F41E338EE20LL,5,103,-7L,83,21};
                    int i;
                    l_1857 |= (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(0x3BL, ((safe_mod_func_uint32_t_u_u(l_1787, (~6L))) == (*l_1800)))), (p_27 < l_1856)));
                    g_1896--;
                    (*l_1860) = ((safe_sub_func_int64_t_s_s((g_272 & p_25), ((((l_1908 = &l_1796[1][1][0]) == l_1910) && ((*l_1780) = (l_1911 , 0x14BDF9036783C084LL))) >= (safe_div_func_uint8_t_u_u((l_1914 >= (**g_511)), l_1399))))) >= 18446744073709551614UL);
                    (*l_1861) = (l_1882 = (safe_add_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((l_1803 , (g_1919 & (*g_199))), 0x348DL)) , p_25) || (*l_1862)), (l_1879 ^= (safe_add_func_uint16_t_u_u(((l_1867 = (safe_mul_func_uint16_t_u_u(((&g_784 == l_1924) ^ 1UL), p_25))) | l_1796[1][1][0].f0), l_1893))))));
                }
            }
            else
            { 
                uint32_t l_1932 = 0xBF7F9401L;
                int32_t *l_1945[4];
                int32_t *l_1946 = &g_81;
                int i;
                for (i = 0; i < 4; i++)
                    l_1945[i] = &l_1883;
                l_1782 = ((((*l_1800) = ((*g_512) | 0xF4E2L)) <= (p_27 != ((g_712[0] && (*g_199)) && ((*g_1515)--)))) || 0x273E11103A17B19ELL);
                for (g_223 = 0; (g_223 <= 0); g_223 += 1)
                { 
                    uint8_t *l_1933[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_1942[6][5] = {{0x98B37E93L,1L,1L,0x98B37E93L,1L},{0x98B37E93L,0x98B37E93L,(-6L),0x98B37E93L,0x98B37E93L},{1L,0x98B37E93L,1L,1L,0x98B37E93L},{0x98B37E93L,1L,1L,0x98B37E93L,1L},{0x98B37E93L,0x98B37E93L,(-6L),0x98B37E93L,0x98B37E93L},{1L,0x98B37E93L,1L,1L,0x98B37E93L}};
                    uint16_t ***l_1948 = &g_511;
                    int i, j;
                    l_1942[3][1] = (safe_lshift_func_uint8_t_u_u(((*g_199) ^ (*l_1800)), (safe_div_func_int64_t_s_s((*g_988), ((*l_1779) = (((~(p_25 = l_1932)) , (safe_rshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(4294967295UL, (safe_rshift_func_int16_t_s_u((l_1868 = p_24), ((safe_lshift_func_int16_t_s_s(((*g_199) ^ l_1867), 0)) , 0x1DB9L))))) , g_1813.f2), l_1396[0][0][0]))) , (*g_988)))))));
                    l_1943 = (void*)0;
                    (*g_208) = ((*g_769) = (l_1946 = l_1945[2]));
                    (*g_770) = (l_1947 != (((*l_1948) = &g_512) == (void*)0));
                }
            }
            l_1914 |= (safe_lshift_func_int16_t_s_s((l_1757 & 0xA2D66684D2D62B86LL), ((((safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((((((*g_988) | ((safe_rshift_func_int16_t_s_s((((*l_1444) |= 1UL) == (safe_mul_func_int8_t_s_s(0L, (((l_1396[0][0][0] >= (((l_1396[0][0][0] | 4294967287UL) , (*l_1820)) != (void*)0)) == g_1482[4][0]) , 8L)))), l_1672)) , l_1959)) != 0xB96AL) & p_24) ^ (*g_988)) , 0UL), (*l_1800))), (*l_1800))) & 0L) == 0x05332E6D291E83E9LL) ^ p_24)));
        }
        else
        { 
            int32_t *l_1960 = &l_1409;
            int32_t *l_1961[7] = {(void*)0,&g_7,&g_7,(void*)0,&g_7,&g_7,(void*)0};
            union U1 l_1987 = {0x55C7B9AEL};
            union U2 l_1991 = {0x5367L};
            const uint32_t l_1997 = 1UL;
            uint16_t *l_1998[2][3] = {{&g_571,(void*)0,&g_571},{&g_571,(void*)0,&g_571}};
            int i, j;
            (*l_1960) = (-1L);
            l_1963--;
            for (g_160 = 7; (g_160 != 1); --g_160)
            { 
                (*l_1960) ^= 0xF882E4A2L;
            }
            g_634 = (+((safe_mul_func_int8_t_s_s(((((((safe_mul_func_uint16_t_u_u((l_1914 = (l_1821 = (l_1882 = (safe_sub_func_int32_t_s_s(((*l_1960) = ((((*l_1960) | (safe_add_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((l_1782 || ((--(*g_512)) & (safe_rshift_func_int8_t_s_s(p_24, 0)))) == (l_1987 , (safe_div_func_int64_t_s_s((+((l_1991 , (((safe_mul_func_uint16_t_u_u((((1UL | (safe_add_func_uint32_t_u_u((l_1996 , l_1882), 0x39797CB1L))) > 8UL) , p_27), p_26)) , (*l_1908)) , g_1079)) != (void*)0)), p_27)))), l_1541)), 0xEF3DL)) , p_24), p_27)) <= l_1821), p_26))) , l_1996) , 0xA02FA06AL)), l_1997))))), p_27)) < 0xD3L) , (void*)0) != (void*)0) >= p_25) > l_1396[1][1][0]), g_281)) , p_26));
        }
        for (g_1885 = 0; (g_1885 <= 5); g_1885 += 1)
        { 
            const int64_t l_2006 = 0x0092F01398E05FCDLL;
            int32_t l_2070 = 8L;
            int32_t l_2071 = (-1L);
            int32_t l_2084[4][3];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 3; j++)
                    l_2084[i][j] = 0x8EC25FE4L;
            }
            for (g_319 = 5; (g_319 >= 0); g_319 -= 1)
            { 
                int32_t *l_2000 = &g_634;
                const union U2 *l_2029 = &l_1796[5][1][0];
                const union U2 **l_2028[5][4] = {{&l_2029,&l_2029,&l_2029,&l_2029},{&l_2029,&l_2029,&l_2029,&l_2029},{&l_2029,&l_2029,&l_2029,&l_2029},{&l_2029,&l_2029,&l_2029,&l_2029},{&l_2029,&l_2029,&l_2029,&l_2029}};
                uint16_t l_2035[1][7] = {{0x5388L,0x5388L,0x5388L,0x5388L,0x5388L,0x5388L,0x5388L}};
                int64_t l_2048 = 0xBA539C87CBBF78A7LL;
                int i, j;
                (*l_2000) = (+g_413[g_319][(g_319 + 1)]);
                (*l_2000) = (!(safe_sub_func_int8_t_s_s((((**g_511) = ((*g_199) , ((((safe_rshift_func_int8_t_s_u(g_1553.f5, l_1757)) , (l_2006 & ((p_26 > ((safe_add_func_uint16_t_u_u((*l_2000), ((((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(5UL, 0)), l_1399)) ^ (*g_199)) ^ (-8L)) >= 0x0B14B7EAAB0AB1E6LL))) == p_27)) , l_1541))) , l_1996.f3) | l_2013))) || (*l_2000)), g_1265)));
                l_1782 &= (safe_mul_func_uint16_t_u_u(((l_2035[0][2] |= (safe_sub_func_uint32_t_u_u(0xD7D5514DL, ((((safe_mul_func_uint8_t_u_u((((*l_2000) = (safe_rshift_func_uint8_t_u_u((~(safe_div_func_int64_t_s_s(((*l_2000) != g_712[0]), (safe_lshift_func_uint16_t_u_s((~((((*l_1781) = ((*g_1180) != l_2028[4][3])) == (--(**l_1461))) < l_2013)), 5))))), (safe_mod_func_int64_t_s_s(1L, l_2006))))) & p_25), (-1L))) == p_25) , l_2030) , l_1882)))) < 0x112CA1D2L), (-7L)));
                l_2048 = (&g_560 == (((safe_unary_minus_func_uint8_t_u((safe_sub_func_int8_t_s_s((l_1476[4][0] == (*g_754)), (l_2039 , 0L))))) != (g_413[g_1885][g_319] = (safe_rshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(((0L || (((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((*g_199), 1)), (*g_199))) , p_26) >= (**g_987))) , 0x51E2EFB2L), p_24)) == 246UL), l_1409)))) , (void*)0));
            }
            if (l_2049)
                break;
            for (g_1553.f2 = (-6); (g_1553.f2 > 20); g_1553.f2 = safe_add_func_uint64_t_u_u(g_1553.f2, 9))
            { 
                int32_t l_2066 = 0x6334656DL;
                int32_t l_2067 = 0x3D958F0AL;
                int32_t *l_2068 = &l_1868;
                int32_t *l_2069 = &l_1409;
                int32_t *l_2072 = &l_1879;
                int32_t *l_2073 = &g_319;
                int32_t *l_2074 = (void*)0;
                int32_t *l_2075 = (void*)0;
                int32_t *l_2076 = &l_2067;
                int32_t *l_2077 = &l_1867;
                int32_t *l_2078 = &l_1821;
                int32_t *l_2079 = &l_1879;
                int32_t *l_2080 = &g_1028;
                int32_t *l_2081 = &l_1879;
                int32_t *l_2082 = &l_2067;
                int32_t *l_2083[4][2][6] = {{{&l_1879,&g_2[1][1],(void*)0,&l_1882,&l_1882,&l_1879},{&g_628,&g_2[1][1],&l_1409,&l_1409,&g_2[1][1],&g_628}},{{&g_2[1][1],&g_634,&g_81,&l_1782,&l_1882,&l_1409},{&l_1409,&g_81,&l_1882,&l_1782,(void*)0,&g_1028}},{{&l_1409,&l_1782,&l_1782,&l_1782,&l_1409,&l_1882},{&g_2[1][1],&l_1882,(void*)0,&l_1409,&g_1028,&g_81}},{{&g_628,&l_1409,&g_1028,&l_1882,&g_81,&g_81},{&l_1879,(void*)0,(void*)0,&l_1879,&l_1879,&l_1882}}};
                int i, j, k;
                (*l_2069) = (safe_div_func_int32_t_s_s(((*l_2068) = ((l_1879 = ((safe_rshift_func_int8_t_s_u(0L, 2)) , 0xCCF1L)) <= (l_2006 || (l_2067 = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((**g_511) , 255UL), (safe_unary_minus_func_uint32_t_u((l_2006 & (((**g_803) , l_2065[1]) == &g_511)))))), 6)), p_25)), l_2066)))))), l_1796[1][1][0].f2));
                --l_2085;
            }
            return p_26;
        }
    }
    else
    { 
        int32_t *l_2092[4];
        union U1 l_2093 = {0x045CFB50L};
        struct S0 *l_2101 = &g_252[0];
        struct S0 *l_2102[4];
        uint32_t l_2104 = 0xFD1E5182L;
        uint8_t *l_2128[7] = {&l_2085,&l_2085,&l_2085,&l_2085,&l_2085,&l_2085,&l_2085};
        union U1 l_2166 = {18446744073709551606UL};
        const int32_t *l_2187 = &g_1553.f5;
        const int32_t **l_2186 = &l_2187;
        uint32_t l_2191[6][6] = {{18446744073709551615UL,0xCB868D87L,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,0xCB868D87L,18446744073709551615UL,1UL},{0xCB868D87L,18446744073709551615UL,1UL,18446744073709551615UL,0xCB868D87L,1UL},{18446744073709551615UL,0xCB868D87L,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,0xCB868D87L,18446744073709551615UL,1UL},{0xCB868D87L,18446744073709551615UL,1UL,18446744073709551615UL,0xCB868D87L,1UL}};
        const uint64_t l_2235 = 0UL;
        int16_t l_2244 = (-4L);
        int8_t l_2276 = 0L;
        union U2 *l_2313[1][6] = {{&g_1909[3][2][4],&g_1909[3][2][4],&g_1909[3][2][4],&g_1909[3][2][4],&g_1909[3][2][4],&g_1909[3][2][4]}};
        uint16_t **l_2325 = &g_512;
        int i, j;
        for (i = 0; i < 4; i++)
            l_2092[i] = &g_319;
        for (i = 0; i < 4; i++)
            l_2102[i] = &g_252[0];
lbl_2173:
        for (g_277 = 9; (g_277 == (-20)); --g_277)
        { 
            uint32_t l_2090 = 0x41256537L;
            int32_t *l_2091 = &g_1864;
            l_2090 = p_27;
            l_2092[3] = l_2091;
        }
        l_2104 = (l_1399 = ((((l_2093 , (((l_2094 == &l_2092[2]) , (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((g_1263 &= 0xE3D2L), p_25)), (safe_add_func_int8_t_s_s((((9L ^ (((*l_1781) = (((l_2101 == l_2102[1]) , g_776.f2) < l_2103[2][1])) ^ (*g_199))) != p_26) >= p_25), g_189))))) == p_24)) || p_25) && 0xBB9AB10FBCFCDF2BLL) || (**g_987)));
        for (g_632 = 0; (g_632 >= 0); g_632 -= 1)
        { 
            int32_t l_2111 = 6L;
            const struct S0 ***l_2113 = &g_933[0][3][2];
            const struct S0 ****l_2112 = &l_2113;
            int32_t *l_2116 = &g_628;
            union U2 *l_2146[2];
            const uint8_t *l_2161 = &g_776.f3;
            const uint8_t **l_2160 = &l_2161;
            int32_t l_2181[5];
            int i;
            for (i = 0; i < 2; i++)
                l_2146[i] = &g_255;
            for (i = 0; i < 5; i++)
                l_2181[i] = 1L;
            for (g_276 = 0; (g_276 >= 0); g_276 -= 1)
            { 
                const int32_t *l_2117 = &g_2[0][1];
                int32_t l_2137 = (-1L);
                for (g_255.f1 = 0; (g_255.f1 <= 1); g_255.f1 += 1)
                { 
                    int i, j, k;
                    l_2114[1] = (safe_mul_func_int8_t_s_s(l_1396[(g_276 + 1)][(g_276 + 1)][g_276], (l_1396[(g_632 + 1)][(g_632 + 1)][g_276] == (!(safe_mul_func_uint8_t_u_u((((g_604 , (+((*l_1781) ^= l_2111))) != (p_26 & p_24)) | (l_1924 != l_2112)), 0x46L))))));
                    return (**g_987);
                }
                if (p_25)
                { 
                    uint8_t **l_2129 = &l_2128[2];
                    struct S0 l_2132 = {0,540,0xD8DFB4DC9A099367LL,9,-135,3L,48,3};
                    (*l_2094) = (l_2116 = l_2115);
                    (*l_2115) |= 0xCD03B535L;
                    (*g_208) = l_2117;
                    (*g_770) = ((safe_rshift_func_uint16_t_u_s((((--p_25) >= ((void*)0 == &p_27)) , (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((*l_1461) != ((*l_2129) = l_2128[4])), (*l_2117))), ((safe_lshift_func_uint16_t_u_u(((l_2132 , (safe_unary_minus_func_uint64_t_u(((18446744073709551613UL == p_26) >= (-10L))))) != 1UL), p_27)) , g_627))), 1))), 4)) || (*g_209));
                    if ((*l_2116))
                        break;
                }
                else
                { 
                    uint64_t l_2134 = 18446744073709551615UL;
                    --l_2134;
                    (*l_2116) = p_25;
                }
                for (g_1305 = 0; (g_1305 <= 0); g_1305 += 1)
                { 
                    uint16_t l_2138 = 65532UL;
                    uint64_t l_2147[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2147[i] = 0x2AE1E01D73F03C27LL;
                    l_2138--;
                    if (l_2138)
                        continue;
                    if (p_26)
                        continue;
                    (*l_2115) = (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((-4L), p_27)), ((g_2145 = (void*)0) == l_2146[0])));
                    (*l_2116) &= l_2147[0];
                }
            }
            if ((*l_2115))
                continue;
            (*l_2116) ^= ((safe_div_func_uint16_t_u_u((--(**g_511)), (((safe_lshift_func_int16_t_s_u((p_27 || (p_27 == (safe_sub_func_uint8_t_u_u((*g_199), (*g_199))))), 11)) , (l_2093 , (safe_add_func_int8_t_s_s((&g_321[1] == ((*l_2160) = (*l_1461))), (-1L))))) , 6UL))) <= l_2162);
            for (l_2104 = 0; (l_2104 <= 0); l_2104 += 1)
            { 
                union U1 l_2167 = {0x64AFBE0AL};
                for (g_167 = 0; (g_167 <= 3); g_167 += 1)
                { 
                    const int32_t l_2163[4][6][2] = {{{(-10L),0x2EED0A36L},{0x2EED0A36L,(-10L)},{(-10L),0L},{(-10L),(-1L)},{0x39D5DF84L,0x39D5DF84L},{(-1L),(-10L)}},{{0L,(-10L)},{(-1L),0x39D5DF84L},{0x39D5DF84L,(-1L)},{(-10L),0L},{(-10L),(-1L)},{0x39D5DF84L,0x39D5DF84L}},{{(-1L),(-10L)},{0L,(-10L)},{(-1L),0x39D5DF84L},{0x39D5DF84L,(-1L)},{(-10L),0L},{(-10L),(-1L)}},{{0x39D5DF84L,0x39D5DF84L},{(-1L),(-10L)},{0L,(-10L)},{(-1L),0x39D5DF84L},{0x39D5DF84L,(-1L)},{(-10L),0L}}};
                    struct S0 *l_2164[6];
                    struct S0 **l_2165 = &l_2164[5];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_2164[i] = &g_1813;
                    (*l_2116) ^= l_2163[3][5][0];
                    (*l_2116) = (((*l_2165) = l_2164[4]) != (l_2166 , (void*)0));
                    (*g_208) = &l_2163[1][2][1];
                    (*l_2094) = (l_2167 , l_2092[2]);
                    (*l_2115) |= (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int32_t_s((safe_div_func_uint8_t_u_u((**l_2094), g_54)))) >= 0xED71530C0E06F73ELL), 13));
                }
                for (p_24 = 0; (p_24 <= 0); p_24 += 1)
                { 
                    if (g_776.f2)
                        goto lbl_2173;
                    return p_26;
                }
                for (g_862.f2 = 0; (g_862.f2 <= 0); g_862.f2 += 1)
                { 
                    int32_t *l_2174 = &l_1399;
                    (*l_2115) &= 1L;
                    l_2174 = (void*)0;
                    (*l_2115) = p_26;
                    (*l_2115) = (((g_1553.f5 , (*l_2116)) , (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(((safe_div_func_uint64_t_u_u((*l_2115), (-1L))) || ((0L || (*l_2116)) | p_26)), 15)) && (**g_987)) > p_24), l_2181[4]))) && 0x54BAC1B039DD039BLL);
                }
            }
        }
        if ((safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(2L, (*g_199))) , (((g_2188 = ((*l_2186) = &p_26)) != ((*l_2115) , &g_513)) < ((0UL & (**g_987)) <= p_24))), 0UL)))
        { 
            uint64_t l_2190 = 1UL;
            return l_2190;
        }
        else
        { 
            uint16_t l_2195[2];
            int32_t l_2208[1][3][6] = {{{0x3AFE975DL,1L,0x3AFE975DL,1L,0x3AFE975DL,1L},{0xF3670908L,1L,0xF3670908L,1L,0xF3670908L,1L},{0x3AFE975DL,1L,0x3AFE975DL,1L,0x3AFE975DL,1L}}};
            int32_t l_2236 = 1L;
            union U2 * const l_2255 = &g_1909[3][2][4];
            const int8_t *l_2275[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t l_2324 = 0x9FL;
            uint16_t **l_2326 = &g_512;
            int64_t l_2338 = 0xD46EDBEDA680CB67LL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_2195[i] = 0x3A65L;
            ++l_2191[1][4];
            for (l_1782 = 0; (l_1782 <= 0); l_1782 += 1)
            { 
                int64_t l_2212 = 0xDF3B7C277416BE91LL;
                union U2 **l_2256 = &g_254[0][3];
                int32_t l_2299 = (-8L);
                const union U2 * const l_2321 = &g_2322[1];
                const union U2 * const * const l_2320 = &l_2321;
                const union U2 * const * const *l_2319 = &l_2320;
                const union U2 * const * const **l_2318 = &l_2319;
                const union U2 * const * const ***l_2317[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_2317[i] = &l_2318;
                if (((*g_199) != (*g_199)))
                { 
                    int64_t l_2209 = (-1L);
                    g_2194 = &g_754;
                    if (l_2195[0])
                        continue;
                    (*g_769) = l_2092[1];
                    (*l_2115) = (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(((*g_770) = ((l_2209 = (65526UL & (((safe_lshift_func_uint16_t_u_u(0x5894L, (**g_511))) || (safe_mul_func_uint8_t_u_u((*g_199), g_712[0]))) , (l_2208[0][0][2] = l_2195[0])))) ^ (safe_mod_func_int32_t_s_s(p_27, p_24)))), l_2212)) <= (*g_988)), 6L)), p_27)), g_1373[3][5][2]));
                }
                else
                { 
                    uint64_t * const ****l_2214 = &l_2213;
                    int32_t l_2219 = 1L;
                    const uint32_t l_2224[7][5][7] = {{{1UL,0xDCA50FDEL,7UL,2UL,1UL,0x233F5344L,2UL},{4294967295UL,4294967294UL,4294967286UL,4294967294UL,4294967288UL,0x2C17D15EL,9UL},{0x233F5344L,4294967295UL,7UL,0xF91927B0L,2UL,0x3ABFA634L,0UL},{4294967293UL,4294967288UL,7UL,0xAC7FF5FBL,4294967295UL,0x085DC602L,0x4725A2DBL},{0xDDF5C854L,0x123C93BAL,4294967291UL,0x7E3A97E3L,0UL,1UL,0xDCA50FDEL}},{{4294967295UL,0x776B7613L,0x4725A2DBL,0x1FD65A8DL,1UL,7UL,4294967295UL},{0UL,0xF91927B0L,0x3ABFA634L,0x7E3A97E3L,0x123C93BAL,2UL,0xD9718F7DL},{0xA6331AA5L,0UL,1UL,0xAC7FF5FBL,0UL,0xAC7FF5FBL,1UL},{1UL,1UL,0xAEFBD7DDL,0xF91927B0L,4294967294UL,0UL,0UL},{0x4725A2DBL,1UL,0UL,4294967294UL,4294967295UL,1UL,4294967286UL}},{{0xAEFBD7DDL,4UL,0xDD6EB7C6L,2UL,4294967294UL,0x123C93BAL,1UL},{4294967288UL,0xF08729A8L,0x921E3FB6L,0xFFD62AB5L,0UL,4294967295UL,0xF774B3DEL},{4294967295UL,4294967295UL,4294967295UL,1UL,0x123C93BAL,4294967294UL,2UL},{4294967295UL,0x085DC602L,0x5E8ED920L,0x7F76B165L,1UL,0x04303D6DL,4294967295UL},{0x11DD4FE7L,0UL,0x7E3A97E3L,0UL,0UL,4294967294UL,0xF91927B0L}},{{7UL,4294967290UL,4294967295UL,1UL,4294967295UL,4294967295UL,4294967295UL},{0xD9718F7DL,2UL,2UL,0xD9718F7DL,2UL,0x123C93BAL,0x7E3A97E3L},{0UL,0xA179850EL,0UL,0UL,4294967288UL,0xF6B6C666L,0x5E8ED920L},{0xD2F29344L,0xAEFBD7DDL,4UL,0xDD6EB7C6L,2UL,4294967294UL,0x123C93BAL},{0UL,4294967295UL,4294967295UL,4294967289UL,0UL,0xA179850EL,0xFA494A45L}},{{7UL,4294967294UL,0xDCA50FDEL,4294967294UL,7UL,0UL,0UL},{4294967295UL,4294967294UL,0x5E8ED920L,0x1FD65A8DL,0UL,0xF08729A8L,4294967295UL},{0xDDF5C854L,7UL,2UL,0x11DD4FE7L,0xAEFBD7DDL,2UL,0x7E3A97E3L},{4294967295UL,0x1FD65A8DL,7UL,0x085DC602L,9UL,4294967289UL,0UL},{7UL,0xDCA50FDEL,1UL,1UL,0xDCA50FDEL,7UL,2UL}},{{0UL,0x776B7613L,0xF774B3DEL,0UL,4294967295UL,4294967295UL,4294967293UL},{0xD2F29344L,1UL,4294967294UL,4294967295UL,0x7E3A97E3L,0xAEFBD7DDL,2UL},{4294967295UL,0x776B7613L,0xA6331AA5L,0x2C17D15EL,0xF774B3DEL,0UL,7UL},{4UL,0xDCA50FDEL,4294967291UL,0UL,4294967291UL,0xDCA50FDEL,4UL},{0UL,0x1FD65A8DL,0UL,4294967295UL,0x5BB8F67AL,0x04303D6DL,4294967295UL}},{{0xF91927B0L,7UL,4294967295UL,0x233F5344L,4294967295UL,0x7E3A97E3L,0xDD6EB7C6L},{4294967295UL,4294967294UL,0UL,1UL,0x4725A2DBL,0xFFD62AB5L,0xBECAEFBBL},{0xE1B70487L,4294967294UL,4294967291UL,0xF91927B0L,0xF91927B0L,4294967291UL,4294967294UL},{0x4B546DF5L,4294967295UL,0xA6331AA5L,0x7F76B165L,0xBECAEFBBL,0x2C17D15EL,0x5DD63AACL},{0x3ABFA634L,0xAEFBD7DDL,4294967294UL,0xD9718F7DL,1UL,4294967295UL,0x11DD4FE7L}}};
                    int16_t *l_2231 = &g_626[0];
                    int16_t **l_2230 = &l_2231;
                    int16_t ***l_2229 = &l_2230;
                    int16_t ***l_2232 = &l_2230;
                    int i, j, k;
                    (*l_2214) = l_2213;
                    (*l_2115) = (safe_mod_func_int64_t_s_s(0x711D065D60F85C3ALL, (safe_div_func_uint8_t_u_u(l_2219, (safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((0x6EDBEDFF6B8989B0LL > l_2224[2][2][6]), (g_629 = ((*l_1781) |= ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((l_2229 = g_560) == (l_2232 = &l_2230)) ^ (safe_div_func_int32_t_s_s(p_25, l_2235))), (**g_511))), g_627)) & 0L))))), l_2236))))));
                }
                l_2208[0][1][1] = ((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(p_26, l_2241)), (g_417 &= ((((safe_rshift_func_uint8_t_u_s(((((**g_987) != ((l_2244 ^= p_26) < (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(9UL, (safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((*l_2101) , (safe_sub_func_int64_t_s_s((p_26 & p_26), l_2212))), p_25)), 9)))), 5)))) < (*g_512)) & p_24), p_27)) ^ 0x22L) , (*l_2115)) <= p_26)))) > p_25);
                (*l_2256) = l_2255;
                if ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((*l_2115), 11)), 9)), ((safe_rshift_func_int8_t_s_s(p_27, (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(0xCB28L, (safe_rshift_func_int8_t_s_s(0xF2L, 1)))), ((*l_1781) = (safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_int16_t_s_u((g_626[0] |= 0x41CCL), 1)) , (l_2275[3] != &g_1483[5])) || 0x165C0EB5L) <= p_24), p_27))))))) , p_26))))
                { 
                    (*l_2094) = (void*)0;
                    (*l_2115) = l_2276;
                    if (g_51)
                        goto lbl_2277;
                    (*g_208) = &l_2208[0][0][2];
                    (*l_2115) ^= (safe_rshift_func_uint8_t_u_u(((g_1483[5] >= (p_24 | (g_1485 < l_2212))) ^ p_26), 6));
                }
                else
                { 
                    l_2299 = (~(safe_lshift_func_int8_t_s_s(0xC1L, ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s(p_27, 1)) & p_26) , (l_2208[0][0][2] = (p_26 || ((safe_mod_func_int16_t_s_s(p_26, (safe_lshift_func_int8_t_s_s((1UL < ((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u(4294967293UL, 0xD709398BL)), l_2195[0])), 12)) && p_25)), l_2195[0])))) >= p_26)))) != 0x49F1C3C2L), p_26)), (**g_511))) || p_27))));
                    if (l_2208[0][0][2])
                        break;
                }
                for (l_1821 = 0; (l_1821 <= 0); l_1821 += 1)
                { 
                    union U2 *****l_2323 = &g_1565;
                    if (p_25)
                        break;
                    (*l_2115) = ((((safe_lshift_func_uint8_t_u_u((*g_199), 7)) ^ ((((safe_div_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((((g_1553.f0 &= (safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(255UL, (g_252[0].f0 != (safe_lshift_func_uint16_t_u_u((!(l_2313[0][0] == (void*)0)), ((safe_add_func_uint8_t_u_u(((l_2317[0] = g_2316) == l_2323), p_27)) , l_2299)))))) ^ (**g_396)), (*l_2115)))) , (void*)0) != &g_321[1]) , 4UL), (*l_2115))) > 0x7DFAL), 0xE7L)) & (**g_987)) && g_1028) >= l_2324)) , (*g_397)) , l_2324);
                }
                for (g_271 = 0; (g_271 <= 3); g_271 += 1)
                { 
                    uint64_t l_2337 = 0x39F7F562207BDF16LL;
                    l_2326 = l_2325;
                    g_81 &= ((*l_1908) , ((safe_mod_func_int16_t_s_s(((0x2EL || (((*l_2115) = (safe_lshift_func_uint16_t_u_s((0xC1L & ((g_1673[1] >= ((safe_sub_func_int64_t_s_s((p_27 >= (safe_mod_func_uint8_t_u_u((0xC9C9D929L && 0xA1CC162DL), (*l_2115)))), p_24)) < 0xD1D7L)) , l_2299)), l_2337))) == l_2299)) , l_2195[0]), 65535UL)) ^ 0L));
                    if (l_2338)
                        continue;
                }
            }
            return l_2339;
        }
    }
    return p_25;
}



static uint8_t  func_28(uint32_t  p_29, uint32_t  p_30)
{ 
    int32_t l_761 = 0x631D21F6L;
    int32_t *l_766[3][7][4] = {{{&g_2[1][1],&g_81,&g_7,&g_319},{&g_628,&g_2[1][1],&g_6,&g_628},{&g_6,&g_628,(void*)0,(void*)0},{&g_634,&g_6,(void*)0,&g_634},{&g_319,(void*)0,(void*)0,&g_7},{&g_6,(void*)0,(void*)0,&g_6},{&g_319,&g_6,&g_7,&g_7}},{{&l_761,&g_628,&g_2[1][1],&g_2[1][1]},{&g_628,&g_6,&g_2[1][1],&g_2[1][1]},{&g_81,&g_628,&g_319,&g_7},{&l_761,&g_6,&g_6,&g_6},{(void*)0,(void*)0,&g_2[1][1],&g_7},{(void*)0,(void*)0,&g_628,&g_634},{&g_2[1][1],&g_6,(void*)0,(void*)0}},{{&g_6,&g_628,(void*)0,&g_628},{&g_7,&g_2[1][1],&g_634,&g_319},{&g_2[1][1],&g_81,&g_634,(void*)0},{(void*)0,&g_6,&g_628,&g_7},{&g_634,&g_634,&g_2[1][1],&g_2[1][1]},{&g_6,&g_7,&g_628,&g_319},{&g_7,&g_628,&g_6,&g_81}}};
    int64_t *l_771 = (void*)0;
    int64_t *l_772 = &g_279;
    uint32_t *l_773 = &g_417;
    union U2 l_781 = {0x934EL};
    struct S0 **l_782 = &g_719;
    union U2 *l_790 = (void*)0;
    int64_t l_840 = (-9L);
    uint32_t ***l_880 = &g_162;
    uint32_t ****l_879[6] = {&l_880,&l_880,&l_880,&l_880,&l_880,&l_880};
    uint32_t ***** const l_878 = &l_879[2];
    const int16_t * const l_892 = &g_142;
    union U2 **l_1178[4];
    union U2 ***l_1177[3][2] = {{&l_1178[2],&l_1178[2]},{&l_1178[2],&l_1178[2]},{&l_1178[2],&l_1178[2]}};
    struct S0 ***l_1248 = &l_782;
    int32_t l_1257[3];
    union U1 ** const *l_1303 = &g_831[3];
    int32_t l_1324[1];
    uint16_t **l_1369 = &g_512;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1178[i] = &g_254[0][3];
    for (i = 0; i < 3; i++)
        l_1257[i] = (-9L);
    for (i = 0; i < 1; i++)
        l_1324[i] = 0x4D08C70DL;
    if ((((-4L) || l_761) == (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((g_319 = p_29) | ((*l_773) = (safe_sub_func_uint64_t_u_u(p_30, ((((*l_772) = (&g_209 != (g_769 = g_769))) & ((0x582208A47893A0ACLL | g_223) < p_29)) > (*g_199)))))), 2)), (*g_199)))))
    { 
        (*g_770) &= 3L;
    }
    else
    { 
        const union U1 *l_775 = &g_776;
        const union U1 **l_774 = &l_775;
        const union U1 *l_778[5];
        const union U1 **l_777 = &l_778[0];
        struct S0 ** const l_783 = &g_251;
        int32_t l_797 = (-10L);
        int32_t l_798 = (-10L);
        int32_t l_810 = 0x82C42C80L;
        int32_t l_811 = 6L;
        int16_t l_813[3];
        int32_t l_814 = 2L;
        int32_t l_815 = 0xD08BAAE0L;
        int32_t l_816 = 6L;
        int32_t l_817 = 0xBD249447L;
        int64_t l_842 = 0L;
        uint16_t l_850 = 0xBCB8L;
        union U2 *l_857 = &g_255;
        union U2 *l_861 = &g_862;
        uint32_t **l_867[6];
        int32_t l_914[4][3];
        uint8_t *l_978 = &g_272;
        int64_t **l_986[7];
        union U1 **l_1071[4] = {&g_804,&g_804,&g_804,&g_804};
        uint64_t * const *l_1083 = &g_437;
        uint64_t * const **l_1082 = &l_1083;
        uint64_t * const ***l_1081 = &l_1082;
        uint64_t * const ****l_1080[5] = {&l_1081,&l_1081,&l_1081,&l_1081,&l_1081};
        const uint32_t l_1132 = 0x61E988D7L;
        uint64_t l_1154[6][5] = {{0x4121307DBA7E2BF7LL,18446744073709551615UL,0x4121307DBA7E2BF7LL,18446744073709551615UL,0xEFBF2FDC828E66ACLL},{0UL,18446744073709551613UL,0xEFBF2FDC828E66ACLL,18446744073709551615UL,0x4121307DBA7E2BF7LL},{0xEFBF2FDC828E66ACLL,1UL,18446744073709551613UL,18446744073709551613UL,1UL},{1UL,0UL,0xEFBF2FDC828E66ACLL,0x4121307DBA7E2BF7LL,0x0F729C1A62DDFCC6LL},{18446744073709551615UL,0UL,0x4121307DBA7E2BF7LL,0x50C22D10CB2E7BB7LL,18446744073709551615UL},{0x53660EDDDFAA2D77LL,1UL,1UL,0x53660EDDDFAA2D77LL,0x50C22D10CB2E7BB7LL}};
        int32_t l_1173 = 1L;
        uint8_t l_1174 = 4UL;
        uint8_t l_1331 = 0xCCL;
        uint16_t **l_1370 = &g_512;
        int16_t l_1387 = 4L;
        int i, j;
        for (i = 0; i < 5; i++)
            l_778[i] = &g_668[2][0];
        for (i = 0; i < 3; i++)
            l_813[i] = 0x54D4L;
        for (i = 0; i < 6; i++)
            l_867[i] = &g_163;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
                l_914[i][j] = 6L;
        }
        for (i = 0; i < 7; i++)
            l_986[i] = &l_772;
lbl_827:
        (*l_777) = ((*l_774) = &g_668[3][0]);
        if ((((safe_sub_func_uint8_t_u_u((((l_781 , l_782) != l_783) >= ((g_784 != &l_782) && p_29)), ((*g_512) < 0x78AAL))) && g_712[0]) > g_142))
        { 
            union U2 *l_788 = &l_781;
            int32_t l_791 = 0xF8082EDAL;
            union U1 *l_801 = (void*)0;
            union U1 **l_800 = &l_801;
            uint64_t *l_805 = (void*)0;
            uint64_t *l_806 = (void*)0;
            uint64_t *l_807 = &g_668[2][0].f1;
            uint64_t *l_808[6] = {&g_413[4][1],&g_413[4][1],&g_413[4][1],&g_413[4][1],&g_413[4][1],&g_413[4][1]};
            int32_t l_809 = (-1L);
            int32_t l_812[6] = {0xBEA1B273L,0x76AD4966L,0x76AD4966L,0xBEA1B273L,0x76AD4966L,0x76AD4966L};
            uint16_t l_818 = 1UL;
            int i;
            for (g_417 = 17; (g_417 >= 57); g_417 = safe_add_func_uint32_t_u_u(g_417, 2))
            { 
                union U1 ***l_802 = &l_800;
                for (g_223 = 0; (g_223 <= 4); g_223 += 1)
                { 
                    union U2 **l_789[6][1][3] = {{{&l_788,&l_788,&l_788}},{{&g_254[0][3],&g_254[0][3],&g_254[0][3]}},{{&l_788,&l_788,&l_788}},{{&g_254[0][3],&g_254[0][3],&g_254[0][3]}},{{&l_788,&l_788,&l_788}},{{&g_254[0][3],&g_254[0][3],&g_254[0][3]}}};
                    int i, j, k;
                    l_790 = l_788;
                    --g_792;
                }
            }
            (*g_770) |= (0L | ((*l_772) = ((l_818++) > (safe_add_func_int8_t_s_s(((l_812[4] != (safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((((*g_199) = ((*g_199) || p_29)) , (0x6E03L <= p_29)) && l_814), (**g_511))), p_29))) | g_167), l_814)))));
            (**g_769) |= ((void*)0 == (*l_774));
            if (l_814)
                goto lbl_827;
        }
        else
        { 
            union U1 **l_832 = &g_804;
            int32_t l_843 = 0xAB66F9EAL;
            uint32_t l_844[3][3][3] = {{{3UL,0x7380B371L,0x7380B371L},{3UL,0x7380B371L,0x7380B371L},{3UL,0x7380B371L,0x7380B371L}},{{3UL,0x7380B371L,0x7380B371L},{3UL,0x7380B371L,0x7380B371L},{3UL,0x7380B371L,0x7380B371L}},{{3UL,0x7380B371L,0x7380B371L},{3UL,0x7380B371L,0x7380B371L},{3UL,0x7380B371L,0x7380B371L}}};
            uint32_t ** const l_869 = (void*)0;
            int32_t l_926 = (-3L);
            int i, j, k;
            for (g_597 = 3; (g_597 >= 0); g_597 -= 1)
            { 
                union U1 **l_829 = &g_804;
                union U1 ***l_830 = &g_803;
                union U1 ***l_833 = (void*)0;
                union U1 ***l_834 = &g_831[3];
                uint64_t *l_835 = &g_252[0].f2;
                int32_t l_841[1][1][6] = {{{0x59EB4936L,0x82B437C5L,0x82B437C5L,0x59EB4936L,0x82B437C5L,0x82B437C5L}}};
                int32_t l_856 = 0xD914150FL;
                int16_t *l_891 = &g_54;
                int16_t **l_890 = &l_891;
                int i, j, k;
                if (((!(((*g_770) ^= 0x8AAF53C7L) , (p_29 > (((*l_835) = (((*l_830) = l_829) == ((*l_834) = (l_832 = g_831[1])))) > (safe_add_func_uint8_t_u_u((*g_199), ((safe_add_func_uint64_t_u_u((l_840 <= (p_30 || g_776.f0)), 0UL)) == p_30))))))) == l_841[0][0][1]))
                { 
                    (**g_769) &= 0x1F08F7EDL;
                }
                else
                { 
                    uint32_t l_847 = 0xA8FCD181L;
                    if (p_30)
                        break;
                    l_844[2][1][0]++;
                    l_847--;
                    if (l_844[2][1][0])
                        break;
                    if (l_850)
                        break;
                }
                for (g_255.f2 = 0; (g_255.f2 <= 3); g_255.f2 += 1)
                { 
                    struct S0 *l_851[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int i, j;
                    (*g_785) = l_851[2][0];
                }
                (*g_769) = &l_761;
                if (l_843)
                { 
                    union U2 l_858 = {0x74B8L};
                    union U2 **l_859 = (void*)0;
                    union U2 **l_860 = (void*)0;
                    int8_t *l_865 = (void*)0;
                    int8_t *l_866 = &g_629;
                    uint32_t ***l_868 = &l_867[4];
                    (**g_769) |= ((safe_add_func_uint64_t_u_u(0xDA40C8C2C1981968LL, (safe_rshift_func_uint16_t_u_s(((l_856 && ((p_30 , l_857) == (l_858 , (l_861 = (void*)0)))) | (safe_lshift_func_int16_t_s_u((((*l_868) = (((*l_866) = p_30) , l_867[4])) == l_869), p_29))), l_858.f2)))) <= g_139[1][2][0]);
                    if (p_30)
                        break;
                    (*l_774) = (*g_803);
                    (*g_770) = 0x8D1C4D1AL;
                }
                else
                { 
                    int32_t *l_881 = &g_319;
                    (*g_770) = (safe_add_func_int8_t_s_s(p_29, 246UL));
                    (*g_770) |= (safe_sub_func_int64_t_s_s(l_844[2][1][0], ((safe_lshift_func_int16_t_s_u(0x478EL, (safe_sub_func_uint8_t_u_u((249UL > g_278), (l_878 != (void*)0))))) <= p_29)));
                    (*g_208) = l_881;
                    (*g_769) = &l_761;
                }
                (**g_769) |= ((safe_div_func_int8_t_s_s(0xF6L, (safe_sub_func_uint64_t_u_u((l_816 < (((1L < ((((*l_772) = (safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s((((*l_890) = (p_29 , (void*)0)) != l_892), ((l_850 || l_817) || 0x291CFA62L))) <= l_844[0][0][1]), g_712[0]))) & (-9L)) != 0xE13EA883L)) > g_255.f2) >= 0x03AC6DAAL)), l_856)))) <= (**g_511));
                for (l_840 = 3; (l_840 >= 0); l_840 -= 1)
                { 
                    (**g_769) = (safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((((p_29 | (*g_512)) >= ((safe_mod_func_uint32_t_u_u((l_856 > 0xA145CC67L), ((safe_div_func_int16_t_s_s((-1L), l_815)) || l_844[2][1][0]))) != p_29)) , 0UL), p_30)), p_30));
                    (*g_770) &= l_841[0][0][5];
                }
            }
            g_628 ^= ((p_29 || l_844[2][1][0]) ^ (g_319 = (0L >= (((((*g_770) = (!((&g_199 == (void*)0) ^ (safe_sub_func_uint32_t_u_u((!(*g_770)), (safe_mul_func_uint16_t_u_u(((g_77 , l_811) , (**g_511)), (*g_512)))))))) <= p_30) > 5L) , 0x53FFL))));
            for (g_267 = 0; (g_267 > (-1)); g_267--)
            { 
                uint64_t *l_909 = (void*)0;
                uint64_t *l_910 = &g_712[0];
                int32_t l_921 = 0x3E652E5BL;
                int16_t *l_922 = &g_626[1];
                int16_t *l_923 = &l_813[1];
                l_926 ^= ((*g_770) < (4UL >= ((((l_814 = ((--(*l_910)) < (~l_914[3][2]))) == g_604) | (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(p_30, (safe_add_func_int16_t_s_s(((*l_923) &= ((*l_922) = l_921)), ((l_843 = ((safe_rshift_func_uint16_t_u_s((l_843 > (**g_396)), g_279)) < p_29)) <= p_30))))), 0L))) || l_914[3][2])));
                for (l_840 = 2; (l_840 >= 0); l_840 -= 1)
                { 
                    uint32_t **l_927 = &g_163;
                    (***l_878) = l_927;
                }
                return l_921;
            }
        }
lbl_1261:
        for (g_277 = 0; (g_277 < (-19)); g_277--)
        { 
            for (g_631 = 3; (g_631 >= 0); g_631 -= 1)
            { 
                const struct S0 ***l_932[6][3][3] = {{{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930}},{{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930}},{{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930}},{{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930}},{{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930}},{{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930},{&g_930,&g_930,&g_930}}};
                int i, j, k;
                l_811 |= ((**g_769) &= (p_29 , (((g_933[0][0][4] = (g_930 = g_930)) != l_782) != 0x8016L)));
                return (*g_199);
            }
        }
        if ((safe_mul_func_uint16_t_u_u((+((p_29 , (l_815 = (safe_sub_func_int8_t_s_s(((void*)0 == l_867[2]), ((**g_396) >= 0UL))))) < 0xA6E1A9BFL)), (l_842 == g_626[0]))))
        { 
            uint64_t l_953 = 0UL;
            int32_t l_954 = (-3L);
            uint8_t *l_979 = (void*)0;
            int32_t l_989 = 0x8D6FBFA1L;
            uint32_t l_992 = 18446744073709551615UL;
            union U1 *l_1008 = &g_668[1][0];
            int64_t l_1009[1];
            struct S0 **l_1043 = &g_719;
            uint32_t l_1061 = 0UL;
            union U1 ***l_1070 = &g_831[1];
            int16_t *l_1077[4] = {&g_189,&g_189,&g_189,&g_189};
            int16_t **l_1076 = &l_1077[1];
            int32_t *l_1097 = &g_628;
            int32_t l_1099 = 3L;
            int32_t l_1101 = (-9L);
            int32_t l_1125 = 0xF62D6C2EL;
            uint64_t l_1126 = 3UL;
            union U2 l_1157 = {0x0975L};
            uint16_t l_1224 = 0x0704L;
            int i;
            for (i = 0; i < 1; i++)
                l_1009[i] = (-7L);
            for (g_271 = 7; (g_271 > 26); g_271 = safe_add_func_int16_t_s_s(g_271, 1))
            { 
                int16_t *l_949 = (void*)0;
                int16_t **l_948 = &l_949;
                int16_t ***l_947 = &l_948;
                int8_t *l_950 = &g_160;
                uint64_t *l_965 = &g_252[0].f2;
                int32_t l_968 = (-1L);
                (**g_769) = (safe_rshift_func_uint8_t_u_u(p_30, (safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s((((l_954 = ((((((*l_950) ^= ((0xCEL | 0xEEL) >= (l_947 != (void*)0))) , (safe_rshift_func_int16_t_s_s(p_30, 2))) != (l_781 , p_29)) , l_798) && l_953)) == (**g_769)) == l_817), p_30)), 0x03A880A1L))));
                if (p_29)
                    continue;
                l_798 = ((safe_mul_func_uint8_t_u_u(((*g_804) , p_30), (safe_mul_func_int16_t_s_s((((safe_div_func_int8_t_s_s(((((*l_965) ^= (safe_lshift_func_uint16_t_u_u(0x7341L, 14))) & (safe_sub_func_int32_t_s_s((l_954 = ((*g_770) |= ((-2L) <= g_252[0].f6))), p_30))) != (l_968 > 4L)), l_813[2])) & l_914[0][1]) && l_914[2][0]), p_29)))) != p_30);
                for (g_417 = 0; (g_417 == 24); g_417 = safe_add_func_uint64_t_u_u(g_417, 5))
                { 
                    return l_797;
                }
            }
            l_989 |= (!(safe_sub_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(((((l_979 = l_978) == (void*)0) ^ (((((g_862.f2 |= p_30) > (g_413[4][1] <= (safe_lshift_func_uint16_t_u_u((p_29 , ((*g_512) = ((g_776.f3 >= (((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((l_986[0] == g_987), (*g_512))), p_29)) & 0xC2C47EE399B88D6ELL) && l_954)) | 0x2895713FL))), 11)))) && (*g_770)) < p_29) <= p_29)) || p_30), l_813[0])) || 9UL), l_815)));
            if (p_30)
            { 
                (**g_769) &= ((l_992 <= (((*g_199)++) == g_252[0].f5)) & (safe_sub_func_uint64_t_u_u(18446744073709551609UL, (*g_988))));
            }
            else
            { 
                for (g_255.f3 = 6; (g_255.f3 > 14); g_255.f3 = safe_add_func_uint8_t_u_u(g_255.f3, 9))
                { 
                    return (*g_199);
                }
                (**g_769) ^= ((safe_mul_func_int8_t_s_s((0xA4F7059EL >= (~((*g_199) && (safe_mul_func_uint8_t_u_u((*g_199), l_954))))), (-5L))) < 0x6EEFA198L);
                for (g_51 = 0; (g_51 < 13); g_51 = safe_add_func_int8_t_s_s(g_51, 6))
                { 
                    return p_30;
                }
            }
            for (g_862.f1 = 21; (g_862.f1 != 9); g_862.f1 = safe_sub_func_int8_t_s_s(g_862.f1, 6))
            { 
                uint8_t l_1011[6][5][1] = {{{248UL},{0xA6L},{248UL},{0x30L},{0UL}},{{0x5DL},{0x95L},{0x5DL},{0UL},{0x30L}},{{248UL},{0xA6L},{248UL},{0x30L},{0UL}},{{0x5DL},{0x95L},{0x5DL},{0UL},{0x30L}},{{248UL},{0xA6L},{248UL},{0x30L},{0UL}},{{0x5DL},{0x95L},{0x5DL},{0UL},{0x30L}}};
                int32_t l_1032 = (-9L);
                int32_t l_1033 = 6L;
                int32_t l_1038 = (-9L);
                int32_t l_1039[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1039[i] = 3L;
                for (l_810 = 0; (l_810 <= 0); l_810 += 1)
                { 
                    int16_t l_1010 = 0x7612L;
                    struct S0 l_1029[3][7] = {{{-0,901,0xE9BD21BEB54CF8ABLL,3,-73,1L,177,39},{-0,211,0UL,15,24,1L,170,49},{-0,901,0xE9BD21BEB54CF8ABLL,3,-73,1L,177,39},{-0,211,0UL,15,24,1L,170,49},{-0,901,0xE9BD21BEB54CF8ABLL,3,-73,1L,177,39},{-0,211,0UL,15,24,1L,170,49},{-0,901,0xE9BD21BEB54CF8ABLL,3,-73,1L,177,39}},{{0,20,0x1A4CE1DDEB5FA162LL,11,-158,-1L,62,60},{-0,969,0x64D8560E8275BD6BLL,11,158,0x93C8DAC6L,11,61},{-0,969,0x64D8560E8275BD6BLL,11,158,0x93C8DAC6L,11,61},{0,20,0x1A4CE1DDEB5FA162LL,11,-158,-1L,62,60},{0,20,0x1A4CE1DDEB5FA162LL,11,-158,-1L,62,60},{-0,969,0x64D8560E8275BD6BLL,11,158,0x93C8DAC6L,11,61},{-0,969,0x64D8560E8275BD6BLL,11,158,0x93C8DAC6L,11,61}},{{0,53,0x0412BD3A352D6F82LL,2,153,0x0FFAEAECL,140,1},{-0,211,0UL,15,24,1L,170,49},{0,53,0x0412BD3A352D6F82LL,2,153,0x0FFAEAECL,140,1},{-0,211,0UL,15,24,1L,170,49},{0,53,0x0412BD3A352D6F82LL,2,153,0x0FFAEAECL,140,1},{-0,211,0UL,15,24,1L,170,49},{0,53,0x0412BD3A352D6F82LL,2,153,0x0FFAEAECL,140,1}}};
                    int i, j;
                    (*g_803) = l_1008;
                    --l_1011[3][3][0];
                    (**g_769) |= (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_914[(l_810 + 3)][l_810], l_914[(l_810 + 2)][(l_810 + 2)])), (((p_29 , (safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((l_954 >= (safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((**g_511), p_30)) | ((safe_div_func_int16_t_s_s(p_30, (**g_511))) > (-1L))), (**g_987)))) , l_1011[3][3][0]), g_1028)), p_30))) != 1UL) ^ (***g_395))));
                    l_798 &= (l_1029[0][6] , (l_1033 = ((l_1032 &= (++(**g_511))) , l_992)));
                }
                for (g_629 = 0; (g_629 == 19); g_629++)
                { 
                    return p_29;
                }
                for (l_798 = 0; (l_798 <= 2); l_798 += 1)
                { 
                    uint8_t l_1036 = 0xC8L;
                    int i, j;
                    (*l_774) = l_1008;
                    (*g_769) = &l_761;
                    l_914[(l_798 + 1)][l_798] = l_1036;
                    l_914[(l_798 + 1)][l_798] = ((((p_30 <= ((!((void*)0 != &l_978)) != (l_1011[1][0][0] & 18446744073709551609UL))) , (((((*l_857) , l_782) == (*g_784)) , p_29) ^ p_29)) && (*g_988)) != p_29);
                }
                g_1040--;
                if (((**g_769) |= (l_1043 != (void*)0)))
                { 
                    uint64_t l_1044 = 2UL;
                    l_1044++;
                }
                else
                { 
                    uint64_t l_1049[2];
                    int32_t l_1057 = 0xF019FF23L;
                    int32_t l_1058 = 0x7CE2326CL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1049[i] = 0x8EE49A8071FACF2ALL;
                    if ((*g_770))
                        break;
                    (*g_770) |= ((safe_add_func_int64_t_s_s(p_30, l_1049[0])) && (safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((~(safe_add_func_uint16_t_u_u(l_1057, 7L))), (--p_29))), 14)));
                    l_1061++;
                }
            }
        }
        else
        { 
            const uint32_t *l_1231 = &g_417;
            int32_t l_1253 = (-7L);
            int64_t l_1255 = 0x607AE4DF0850C39ELL;
            int32_t l_1266 = 0xB7FB54CBL;
            int32_t l_1267 = 0x970D6CC9L;
            uint32_t l_1269[7][2] = {{0UL,0x30CD192AL},{0x6B27C51DL,0UL},{0xDCD877CEL,0xDCD877CEL},{0xDCD877CEL,0UL},{0x6B27C51DL,0x30CD192AL},{0UL,0x30CD192AL},{0x6B27C51DL,0UL}};
            int32_t l_1278 = (-1L);
            int16_t **l_1323 = (void*)0;
            int16_t ***l_1322[6][3] = {{&l_1323,&l_1323,&l_1323},{&l_1323,&l_1323,&l_1323},{&l_1323,&l_1323,&l_1323},{&l_1323,&l_1323,&l_1323},{&l_1323,&l_1323,&l_1323},{&l_1323,&l_1323,&l_1323}};
            uint32_t ** const * const **l_1329 = (void*)0;
            struct S0 *l_1342 = (void*)0;
            int32_t l_1368 = 1L;
            int32_t l_1388 = (-1L);
            int i, j;
            (*g_770) |= (p_30 != ((safe_lshift_func_uint8_t_u_u(l_814, ((*g_199)++))) < (((*g_396) = l_1231) == &p_29)));
            for (l_840 = (-29); (l_840 != (-21)); l_840 = safe_add_func_int64_t_s_s(l_840, 4))
            { 
                struct S0 ****l_1249 = (void*)0;
                struct S0 ****l_1250 = &g_784;
                int8_t *l_1251 = &g_862.f2;
                int32_t *l_1252 = &g_632;
                int32_t l_1254[5] = {0x9B0B15E0L,0x9B0B15E0L,0x9B0B15E0L,0x9B0B15E0L,0x9B0B15E0L};
                int16_t **l_1256 = (void*)0;
                uint64_t l_1330 = 18446744073709551607UL;
                int i;
                if ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((p_29 , (safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(p_29, (((safe_lshift_func_uint8_t_u_s((((((safe_mod_func_int8_t_s_s(((((-3L) != (((0xAA97L == (((((*l_1250) = (l_1248 = &g_785)) == (((*l_1252) &= (0x7AL < ((*l_1251) = p_29))) , (void*)0)) && l_1253) & (-2L))) , 247UL) , l_1254[0])) != (**g_511)) == (**g_511)), p_30)) || l_813[2]) <= 1UL) & l_1255) || (-10L)), 3)) , (void*)0) == l_1256))) , 0L), 0xC7L))), 0x08L)), 5)), l_914[2][1])))
                { 
                    uint16_t l_1258 = 0xFBFEL;
                    int32_t l_1262[7] = {0x1AE6BD67L,0x1AE6BD67L,1L,0x1AE6BD67L,0x1AE6BD67L,1L,0x1AE6BD67L};
                    int8_t l_1268 = 0x88L;
                    int16_t *l_1279 = (void*)0;
                    int16_t *l_1280 = (void*)0;
                    int16_t *l_1281[1];
                    int32_t l_1282 = 0xD03DEBF5L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1281[i] = &g_626[0];
                    l_1258--;
                    if (l_840)
                        goto lbl_1261;
                    --l_1269[3][0];
                    l_1254[0] &= l_1173;
                    g_319 ^= (((l_1254[0] = (safe_sub_func_uint32_t_u_u(4294967286UL, ((*g_199) <= ((l_1282 = (((safe_add_func_uint8_t_u_u(l_1278, 255UL)) , ((((p_30 | (((18446744073709551615UL | (l_1262[4] = l_1154[4][0])) <= 5L) | (**g_511))) , (*g_770)) <= l_1258) < p_29)) || 0x10CA0E91L)) || l_1268))))) | 0UL) > (*g_770));
                }
                else
                { 
                    int16_t *l_1292 = &g_1263;
                    uint64_t l_1293 = 0x13D40C91B94E71EALL;
                    int32_t l_1302 = 0x8450C833L;
                    union U1 ***l_1304 = (void*)0;
                    l_1254[2] &= (safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s(((((*l_1292) = p_29) && (((p_29 || (l_1293--)) != l_1253) & ((safe_lshift_func_int16_t_s_u((1UL ^ (-1L)), ((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(l_1302, ((0x4993486AL != p_29) > p_29))), 0x57L)) , p_30))) != 6L))) == 0L), 1)) , l_1303) != l_1304), p_30)), 0xDFL)))) ^ p_30), g_7));
                    ++g_1305;
                    (*g_770) &= (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((0UL > (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((*l_1251) &= (g_626[0] <= l_1269[5][1])), 0)) <= ((0x3EL <= ((((void*)0 == l_1322[1][1]) != 0x6556L) , 0xA5L)) , p_30)), 3L))), p_29)), p_29)), l_1254[2])), l_1266)), l_1324[0]));
                }
                (*g_770) &= (l_1254[4] = (safe_add_func_uint32_t_u_u(p_29, ((safe_lshift_func_int16_t_s_u((l_1331 = ((((l_1329 == &l_879[4]) != l_1132) > (((((0xA52C0B92L && (((((l_1255 , (*g_754)) != (*g_754)) , (*g_512)) > (**g_511)) > 0x019CL)) , 0xAE3584E1E71AEDF6LL) != 0x0BA2DEAA9A030FBALL) , 0x7C94L) && l_1330)) ^ 6UL)), 3)) > (*g_512)))));
                for (g_167 = (-24); (g_167 > 4); g_167 = safe_add_func_uint16_t_u_u(g_167, 1))
                { 
                    (**g_769) = 0x4E8E731CL;
                    if ((**g_769))
                        break;
                    if (l_1278)
                        continue;
                }
                for (g_160 = 0; (g_160 != 1); g_160++)
                { 
                    struct S0 l_1336 = {0,586,0x01D3B0F4483E873ALL,13,-98,0L,130,53};
                    if (p_29)
                        break;
                    (**g_769) &= (l_1336 , 8L);
                    if (l_1174)
                        continue;
                    return (*g_199);
                }
                for (g_1305 = 0; (g_1305 != 16); g_1305 = safe_add_func_int32_t_s_s(g_1305, 8))
                { 
                    uint16_t l_1339[6][7][3] = {{{65535UL,65535UL,65535UL},{0xC0A2L,65535UL,65535UL},{65535UL,1UL,0UL},{0xC0A2L,0x9468L,0xC0A2L},{65535UL,65535UL,0UL},{0x9359L,0x9359L,65535UL},{1UL,65535UL,65535UL}},{{65535UL,0x9468L,0x5706L},{1UL,1UL,1UL},{0x9359L,65535UL,0x5706L},{65535UL,65535UL,65535UL},{0xC0A2L,65535UL,65535UL},{65535UL,1UL,0UL},{0xC0A2L,0x9468L,0xC0A2L}},{{65535UL,65535UL,0UL},{0x9359L,0x9359L,65535UL},{1UL,65535UL,65535UL},{65535UL,0x9468L,0x5706L},{1UL,1UL,1UL},{0x9359L,65535UL,0x5706L},{65535UL,65535UL,65535UL}},{{0xC0A2L,65535UL,65535UL},{65535UL,1UL,0UL},{0xC0A2L,0x9468L,0xC0A2L},{65535UL,65535UL,0UL},{0x9359L,0x9359L,65535UL},{1UL,65535UL,65535UL},{65535UL,0x9468L,0x5706L}},{{1UL,1UL,1UL},{0x9359L,65535UL,0x5706L},{65535UL,65535UL,65535UL},{0xC0A2L,0xC0A2L,0xC0A2L},{1UL,65535UL,1UL},{0x5706L,0x9359L,0x5706L},{65535UL,1UL,1UL}},{{65535UL,65535UL,0xC0A2L},{0UL,1UL,1UL},{0xC0A2L,0x9359L,0x9468L},{0UL,65535UL,0UL},{65535UL,0xC0A2L,0x9468L},{65535UL,65535UL,1UL},{0x5706L,0xC0A2L,0xC0A2L}}};
                    int32_t l_1349 = 5L;
                    struct S0 l_1367 = {-0,199,18446744073709551609UL,13,12,3L,42,62};
                    int i, j, k;
                    --l_1339[3][3][1];
                    (*l_783) = l_1342;
                    (**g_769) = (safe_rshift_func_int8_t_s_u(((*l_1251) = (&l_1177[1][1] != (void*)0)), (safe_rshift_func_int8_t_s_s(p_29, 5))));
                    (**g_769) = ((l_1349 = (safe_mod_func_uint8_t_u_u(247UL, p_29))) ^ ((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_1254[0] = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(0x5AF3L, 5)), ((0L && (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((l_1254[0] <= (l_816 = g_1366)), (l_1367 , l_814))), 9UL)), l_813[2])) | l_1266), 8))) , p_29)))), l_1368)), p_30)) & 0x2C99B9F7L));
                    l_1267 ^= (((g_2[0][1] , 0UL) , (l_1369 != l_1370)) >= ((l_1367.f5 ^ l_811) < (safe_lshift_func_uint16_t_u_s(((((((0x9B6FA48BL != g_1373[3][5][2]) == (*g_770)) | 0x83L) && p_29) , 0xAEA0L) >= l_1266), p_30))));
                }
            }
            (**g_769) ^= (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((l_816 = 0x3C5AL), 11)), ((l_1387 = (safe_rshift_func_uint16_t_u_u((*g_512), ((safe_sub_func_int8_t_s_s(((*g_769) != (*g_769)), (((safe_sub_func_uint16_t_u_u(((*l_783) == ((*g_930) = (*l_783))), ((!(3UL && p_29)) ^ p_29))) , l_1174) && g_252[0].f4))) && 0x979182AEL)))) > l_1278))), l_1388));
        }
    }
    return p_30;
}



static int8_t  func_33(int32_t  p_34, struct S0  p_35)
{ 
    uint16_t *l_64 = &g_51;
    int32_t l_65[5] = {0xD3C6E85AL,0xD3C6E85AL,0xD3C6E85AL,0xD3C6E85AL,0xD3C6E85AL};
    uint8_t *l_76 = &g_77;
    int64_t l_148 = 0x6CC583A0B3D9A396LL;
    union U1 l_151 = {0x8FAA5422L};
    int32_t l_157 = (-9L);
    uint32_t ***l_183 = (void*)0;
    int32_t l_275 = 0x1E737EF2L;
    uint64_t *l_288 = &g_252[0].f2;
    uint64_t **l_287[6] = {&l_288,&l_288,&l_288,&l_288,&l_288,&l_288};
    int64_t **l_422 = (void*)0;
    uint8_t l_448 = 0x84L;
    int16_t l_516 = 0L;
    uint32_t *l_523 = &g_284;
    uint32_t ** const l_522 = &l_523;
    uint32_t ** const *l_521 = &l_522;
    struct S0 **l_528 = (void*)0;
    uint64_t * const *l_534 = &g_437;
    uint64_t * const **l_533[3];
    uint64_t * const ***l_532 = &l_533[2];
    uint32_t l_557 = 18446744073709551615UL;
    int64_t l_570[4];
    struct S0 ****l_671 = (void*)0;
    uint64_t l_689 = 18446744073709551613UL;
    uint16_t l_758[6] = {0x6858L,0x6858L,0x1C11L,0x6858L,0x6858L,0x1C11L};
    int i;
    for (i = 0; i < 3; i++)
        l_533[i] = &l_534;
    for (i = 0; i < 4; i++)
        l_570[i] = 0x1076CB71BED1CCF4LL;
    if ((safe_mul_func_int8_t_s_s((~(safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s(((0UL & 0x2679L) == (l_64 != (((((l_65[0] >= ((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(1UL, (safe_mul_func_int8_t_s_s(l_65[3], ((*l_76) = (safe_sub_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((g_6 && p_35.f7), g_54)) , 0x84L), l_65[0]))))))), p_35.f4)) > g_54)) & l_65[0]) ^ p_35.f5) , 0x90L) , (void*)0))), 0x48F7C4FBL)))), 4294967295UL))), g_7)))
    { 
        const union U2 l_94 = {0x47F9L};
        int32_t *l_113 = &g_2[1][1];
        uint16_t l_161 = 0UL;
        int32_t l_165 = 0x3C17D6ECL;
        uint32_t ***l_184 = &g_162;
        const int32_t **l_210 = &g_209;
        const uint64_t l_249 = 18446744073709551615UL;
        int32_t l_269 = 0xA8E8F597L;
        uint64_t ***l_289 = &l_287[3];
        for (g_54 = 4; (g_54 >= 1); g_54 -= 1)
        { 
            int32_t *l_80 = &g_81;
            uint8_t l_100[3];
            struct S0 l_112 = {0,440,0x38AD3921C45DBD19LL,10,23,0x2A51D28AL,33,50};
            uint32_t l_145 = 5UL;
            int8_t *l_156[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t *l_158[4];
            int32_t *l_159[2];
            uint32_t ***l_164 = &g_162;
            int i;
            for (i = 0; i < 3; i++)
                l_100[i] = 1UL;
            for (i = 0; i < 4; i++)
                l_158[i] = &g_139[1][2][0];
            for (i = 0; i < 2; i++)
                l_159[i] = (void*)0;
            if (((*l_80) |= (safe_sub_func_int16_t_s_s(0x48EDL, l_65[g_54]))))
            { 
                uint64_t l_97 = 0UL;
                int8_t l_101 = 5L;
                union U2 l_103[5][6] = {{{0x519BL},{0x519BL},{0x519BL},{0x519BL},{0x519BL},{0x519BL}},{{0x519BL},{0x519BL},{0x519BL},{0x519BL},{0x519BL},{0x519BL}},{{0x519BL},{0x519BL},{0x519BL},{0x519BL},{0x519BL},{0x519BL}},{{0x519BL},{0x519BL},{0x519BL},{0x519BL},{0x519BL},{0x519BL}},{{0x519BL},{0x519BL},{0x519BL},{0x519BL},{0x519BL},{0x519BL}}};
                int i, j;
                for (g_51 = 0; (g_51 <= 47); ++g_51)
                { 
                    (*l_80) = 1L;
                    return p_35.f0;
                }
                for (p_35.f2 = (-8); (p_35.f2 <= 21); p_35.f2 = safe_add_func_int16_t_s_s(p_35.f2, 2))
                { 
                    return p_35.f4;
                }
                if ((safe_sub_func_int32_t_s_s(l_65[0], (((p_35.f3 & (safe_rshift_func_int16_t_s_u((-10L), (g_6 == (safe_mul_func_int8_t_s_s((((safe_add_func_int16_t_s_s(((l_94 , (((((safe_sub_func_int32_t_s_s((l_97 , ((safe_mod_func_int16_t_s_s(((-1L) > 0L), l_94.f0)) ^ l_100[0])), p_35.f3)) < g_51) || l_101) && p_35.f3) == g_81)) == g_2[1][1]), p_35.f0)) || g_77) , p_35.f5), g_54)))))) & p_35.f7) < p_35.f7))))
                { 
                    int32_t **l_102 = &l_80;
                    (*l_102) = &g_7;
                }
                else
                { 
                    int8_t l_114 = (-10L);
                    uint32_t *l_134 = (void*)0;
                    uint32_t *l_135 = &l_103[1][4].f1;
                    int8_t l_136 = 0xE9L;
                    uint64_t *l_137 = (void*)0;
                    uint64_t *l_138[5];
                    uint8_t *l_140[3];
                    int16_t *l_141 = &g_142;
                    int32_t l_143 = (-2L);
                    uint8_t l_144 = 0x17L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_138[i] = &l_112.f2;
                    for (i = 0; i < 3; i++)
                        l_140[i] = &l_100[0];
                    (*l_80) = g_77;
                    g_81 = ((((((&g_77 != (((g_2[1][1] != ((((*l_76) = ((l_103[1][4] , (!(!l_101))) , (((safe_sub_func_uint64_t_u_u(p_35.f1, (safe_add_func_uint64_t_u_u((p_35.f4 || (safe_lshift_func_int8_t_s_s((l_112 , p_35.f1), g_54))), 0x3B8633724DDD4CC6LL)))) || p_35.f6) >= 0x5802EA21089BBD4CLL))) , &g_7) == l_113)) , l_114) , (void*)0)) && (-1L)) != p_35.f7) == g_2[1][1]) >= 0x81933AC353B0092DLL) || l_101);
                    if (l_114)
                        break;
                    p_35.f0 = (safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(p_35.f5, (((*l_141) = ((safe_unary_minus_func_uint16_t_u(g_2[1][1])) || (((*l_80) ^= ((((g_139[1][2][0] = (((safe_mod_func_uint16_t_u_u(((((*l_135) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_76) = 0UL), (safe_mul_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s(0x127F58F69C2BC1C0LL, (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(0xAFL, (&g_54 != (void*)0))), g_2[1][1])))) ^ g_2[1][0]) > g_2[1][1]), p_35.f2)))), p_35.f6))) | p_35.f6) < g_51), p_35.f0)) > l_136) || l_103[1][4].f0)) || g_139[0][5][0]) > l_101) && (*l_113))) <= p_35.f3))) || g_142))), l_143));
                    if (l_144)
                        continue;
                }
                if (l_145)
                { 
                    return p_35.f2;
                }
                else
                { 
                    return p_35.f1;
                }
            }
            else
            { 
                for (l_145 = 0; (l_145 > 27); l_145 = safe_add_func_int32_t_s_s(l_145, 4))
                { 
                    return p_35.f0;
                }
                g_81 |= p_35.f1;
            }
            if (l_148)
                continue;
            l_161 &= (g_160 ^= (0xF6L < ((p_35.f7 > (*l_80)) >= (l_65[0] = (l_151 , (((safe_rshift_func_uint16_t_u_u(((*l_64) = l_65[0]), 0)) ^ (safe_div_func_uint64_t_u_u(((p_35.f7 < (((((l_157 = g_54) | 0xB9L) , p_35.f7) <= 0x5FL) , p_35.f0)) > p_35.f0), g_142))) && l_65[0]))))));
            (*l_164) = g_162;
            return g_160;
        }
    }
    else
    { 
        uint8_t l_298 = 0xBBL;
        if (p_35.f5)
        { 
            int8_t l_292[1];
            int i;
            for (i = 0; i < 1; i++)
                l_292[i] = 0x16L;
            if ((l_151.f2 < l_292[0]))
            { 
                int32_t *l_293 = &l_65[0];
                (*g_208) = l_293;
                return l_292[0];
            }
            else
            { 
                int16_t *l_295[6];
                int16_t **l_294 = &l_295[4];
                int32_t *l_296 = (void*)0;
                int32_t *l_297 = &g_81;
                int i;
                for (i = 0; i < 6; i++)
                    l_295[i] = (void*)0;
                (*l_297) |= (((*l_294) = &g_54) != (void*)0);
                return g_6;
            }
        }
        else
        { 
            return l_298;
        }
    }
    for (p_34 = 0; (p_34 <= 5); p_34 += 1)
    { 
        uint32_t l_316 = 0xECD1DA0BL;
        union U1 l_401 = {0x1713E002L};
        uint16_t * const l_402 = (void*)0;
        int32_t l_412 = 0xD56DB8B6L;
        uint64_t ** const **l_438 = (void*)0;
        uint64_t ** const **l_439 = &g_435[2];
        int16_t *l_449[2][3] = {{(void*)0,(void*)0,(void*)0},{&g_189,&g_189,&g_189}};
        int32_t l_450[3][7][2] = {{{1L,3L},{3L,3L},{1L,0x302F5D9FL},{0L,0x853FA606L},{3L,1L},{7L,3L},{(-1L),0x0D83EEDDL}},{{(-1L),3L},{7L,1L},{3L,0x853FA606L},{0L,0x302F5D9FL},{1L,3L},{3L,3L},{1L,0x302F5D9FL}},{{0L,0x853FA606L},{3L,1L},{7L,3L},{(-1L),0x0D83EEDDL},{(-1L),3L},{7L,1L},{3L,0x853FA606L}}};
        uint32_t ***l_525 = (void*)0;
        int64_t l_538 = 0xA0803C78678FEAA4LL;
        int64_t *l_589 = &l_538;
        const uint8_t *l_619 = &g_272;
        struct S0 l_649[2] = {{-0,964,0xEE692FA052F839DELL,2,49,1L,138,18},{-0,964,0xEE692FA052F839DELL,2,49,1L,138,18}};
        struct S0 ***l_743 = &l_528;
        int i, j, k;
        for (g_281 = 1; (g_281 <= 5); g_281 += 1)
        { 
            int32_t *l_315 = &g_2[1][0];
            const uint32_t *l_338 = &g_284;
            const uint32_t **l_337 = &l_338;
            const uint32_t ***l_336[5][5][4] = {{{&l_337,&l_337,(void*)0,&l_337},{&l_337,(void*)0,(void*)0,&l_337},{&l_337,&l_337,(void*)0,&l_337},{&l_337,&l_337,(void*)0,&l_337},{&l_337,(void*)0,&l_337,&l_337}},{{&l_337,&l_337,&l_337,&l_337},{&l_337,&l_337,(void*)0,&l_337},{&l_337,(void*)0,&l_337,&l_337},{&l_337,&l_337,&l_337,&l_337},{&l_337,&l_337,(void*)0,&l_337}},{{&l_337,(void*)0,(void*)0,&l_337},{&l_337,&l_337,(void*)0,&l_337},{&l_337,&l_337,(void*)0,&l_337},{&l_337,(void*)0,&l_337,&l_337},{(void*)0,&l_337,&l_337,&l_337}},{{&l_337,&l_337,&l_337,(void*)0},{&l_337,(void*)0,&l_337,&l_337},{(void*)0,(void*)0,(void*)0,&l_337},{&l_337,(void*)0,&l_337,&l_337},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&l_337,(void*)0,&l_337},{(void*)0,&l_337,&l_337,&l_337},{&l_337,(void*)0,(void*)0,&l_337},{(void*)0,&l_337,&l_337,&l_337},{&l_337,&l_337,&l_337,(void*)0}}};
            int32_t l_343 = 0x5E12521BL;
            uint32_t ***l_385 = &g_162;
            uint16_t *l_403 = &g_360;
            int32_t l_410 = (-9L);
            int i, j, k;
        }
    }
    return l_148;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_139[i][j][k], "g_139[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_252[i].f0, "g_252[i].f0", print_hash_value);
        transparent_crc(g_252[i].f1, "g_252[i].f1", print_hash_value);
        transparent_crc(g_252[i].f2, "g_252[i].f2", print_hash_value);
        transparent_crc(g_252[i].f3, "g_252[i].f3", print_hash_value);
        transparent_crc(g_252[i].f4, "g_252[i].f4", print_hash_value);
        transparent_crc(g_252[i].f5, "g_252[i].f5", print_hash_value);
        transparent_crc(g_252[i].f6, "g_252[i].f6", print_hash_value);
        transparent_crc(g_252[i].f7, "g_252[i].f7", print_hash_value);

    }
    transparent_crc(g_255.f0, "g_255.f0", print_hash_value);
    transparent_crc(g_255.f2, "g_255.f2", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_321[i], "g_321[i]", print_hash_value);

    }
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_413[i][j], "g_413[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_626[i], "g_626[i]", print_hash_value);

    }
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_668[i][j].f0, "g_668[i][j].f0", print_hash_value);
            transparent_crc(g_668[i][j].f2, "g_668[i][j].f2", print_hash_value);
            transparent_crc(g_668[i][j].f3, "g_668[i][j].f3", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_712[i], "g_712[i]", print_hash_value);

    }
    transparent_crc(g_776.f0, "g_776.f0", print_hash_value);
    transparent_crc(g_776.f2, "g_776.f2", print_hash_value);
    transparent_crc(g_776.f3, "g_776.f3", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_862.f0, "g_862.f0", print_hash_value);
    transparent_crc(g_862.f2, "g_862.f2", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    transparent_crc(g_1263, "g_1263", print_hash_value);
    transparent_crc(g_1264, "g_1264", print_hash_value);
    transparent_crc(g_1265, "g_1265", print_hash_value);
    transparent_crc(g_1305, "g_1305", print_hash_value);
    transparent_crc(g_1366, "g_1366", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1373[i][j][k], "g_1373[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1482[i][j], "g_1482[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1483[i], "g_1483[i]", print_hash_value);

    }
    transparent_crc(g_1485, "g_1485", print_hash_value);
    transparent_crc(g_1486, "g_1486", print_hash_value);
    transparent_crc(g_1516, "g_1516", print_hash_value);
    transparent_crc(g_1553.f0, "g_1553.f0", print_hash_value);
    transparent_crc(g_1553.f1, "g_1553.f1", print_hash_value);
    transparent_crc(g_1553.f2, "g_1553.f2", print_hash_value);
    transparent_crc(g_1553.f3, "g_1553.f3", print_hash_value);
    transparent_crc(g_1553.f4, "g_1553.f4", print_hash_value);
    transparent_crc(g_1553.f5, "g_1553.f5", print_hash_value);
    transparent_crc(g_1553.f6, "g_1553.f6", print_hash_value);
    transparent_crc(g_1553.f7, "g_1553.f7", print_hash_value);
    transparent_crc(g_1645, "g_1645", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1673[i], "g_1673[i]", print_hash_value);

    }
    transparent_crc(g_1813.f0, "g_1813.f0", print_hash_value);
    transparent_crc(g_1813.f1, "g_1813.f1", print_hash_value);
    transparent_crc(g_1813.f2, "g_1813.f2", print_hash_value);
    transparent_crc(g_1813.f3, "g_1813.f3", print_hash_value);
    transparent_crc(g_1813.f4, "g_1813.f4", print_hash_value);
    transparent_crc(g_1813.f5, "g_1813.f5", print_hash_value);
    transparent_crc(g_1813.f6, "g_1813.f6", print_hash_value);
    transparent_crc(g_1813.f7, "g_1813.f7", print_hash_value);
    transparent_crc(g_1864, "g_1864", print_hash_value);
    transparent_crc(g_1885, "g_1885", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1888[i][j], "g_1888[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1889, "g_1889", print_hash_value);
    transparent_crc(g_1890, "g_1890", print_hash_value);
    transparent_crc(g_1891, "g_1891", print_hash_value);
    transparent_crc(g_1892, "g_1892", print_hash_value);
    transparent_crc(g_1896, "g_1896", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1909[i][j][k].f0, "g_1909[i][j][k].f0", print_hash_value);
                transparent_crc(g_1909[i][j][k].f2, "g_1909[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_1919, "g_1919", print_hash_value);
    transparent_crc(g_2189, "g_2189", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2322[i].f0, "g_2322[i].f0", print_hash_value);
        transparent_crc(g_2322[i].f2, "g_2322[i].f2", print_hash_value);

    }
    transparent_crc(g_2343, "g_2343", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2421[i][j], "g_2421[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2483, "g_2483", print_hash_value);
    transparent_crc(g_2671.f0, "g_2671.f0", print_hash_value);
    transparent_crc(g_2671.f2, "g_2671.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2695[i], "g_2695[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2910[i], "g_2910[i]", print_hash_value);

    }
    transparent_crc(g_3072, "g_3072", print_hash_value);
    transparent_crc(g_3080, "g_3080", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
