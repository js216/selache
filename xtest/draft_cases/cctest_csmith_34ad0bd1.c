// SPDX-License-Identifier: MIT
// cctest_csmith_34ad0bd1.c --- cctest case csmith_34ad0bd1 (csmith seed 883755985)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3e1d6a68 */

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

// Options:   -s 883755985 -o /tmp/csmith_gen__53jg1wi/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   unsigned f0 : 7;
   const unsigned f1 : 2;
   const unsigned f2 : 29;
   const unsigned f3 : 20;
   signed f4 : 21;
   uint8_t  f5;
};

union U1 {
   int32_t  f0;
};


static int32_t g_2 = 0L;
static union U1 g_6 = {-8L};
static uint8_t g_11[1][1] = {{0xB0L}};
static int32_t g_40[6][5][5] = {{{0x576660B2L,0xCB090AECL,(-8L),(-8L),0xCB090AECL},{0x2AC30BCAL,0x26CDEE94L,0xCF687292L,0L,0xC33BAB72L},{(-4L),(-8L),0xF7935DB5L,0x06E3268DL,0xF7935DB5L},{0xC33BAB72L,0xC33BAB72L,0L,0x2AC30BCAL,0L},{(-4L),0xF36A5B5CL,0x576660B2L,0x0E834AB4L,0x0E834AB4L}},{{0x2AC30BCAL,0x631CD1ACL,0x2AC30BCAL,0x0ADC1094L,8L},{0x576660B2L,0xF36A5B5CL,(-4L),0xCB090AECL,(-1L)},{0L,0xC33BAB72L,0xC33BAB72L,0L,0x2AC30BCAL},{0xF7935DB5L,(-8L),(-4L),(-1L),0xF36A5B5CL},{0x2883E731L,0x631CD1ACL,0L,0x631CD1ACL,0x2883E731L}},{{0x7B69C93EL,(-8L),0x0E834AB4L,0xF36A5B5CL,0x06E3268DL},{0x2AC30BCAL,0L,0xC33BAB72L,0xC33BAB72L,0L},{0xCB090AECL,1L,0x576660B2L,(-8L),0x06E3268DL},{0x631CD1ACL,0xC33BAB72L,0x2883E731L,0x26CDEE94L,0x2883E731L},{0x06E3268DL,0x06E3268DL,0x7B69C93EL,0xCB090AECL,0xF7935DB5L}},{{0x631CD1ACL,0xCF687292L,0x2AC30BCAL,0L,0L},{0xCB090AECL,(-1L),0xCB090AECL,(-4L),0xF36A5B5CL},{0x2AC30BCAL,0xCF687292L,0x631CD1ACL,0L,0L},{0x7B69C93EL,0x06E3268DL,0x06E3268DL,0x7B69C93EL,0xCB090AECL},{0x2883E731L,0xC33BAB72L,0x631CD1ACL,0L,0xCF687292L}},{{0x576660B2L,1L,0xCB090AECL,1L,0x576660B2L},{0xC33BAB72L,0L,0x2AC30BCAL,0L,0x0ADC1094L},{0x0E834AB4L,(-8L),0x7B69C93EL,0x7B69C93EL,(-8L)},{0L,0x631CD1ACL,0x2883E731L,0L,0x0ADC1094L},{1L,0x7B69C93EL,0x576660B2L,(-4L),0x576660B2L}},{{0x0ADC1094L,0x0ADC1094L,0xC33BAB72L,0L,0xCF687292L},{1L,0xF7935DB5L,0x0E834AB4L,0xCB090AECL,0xCB090AECL},{0L,8L,0L,0x26CDEE94L,0L},{0x0E834AB4L,0xF7935DB5L,1L,(-8L),0xF36A5B5CL},{0xC33BAB72L,0x0ADC1094L,0x0ADC1094L,0xC33BAB72L,0L}}};
static int16_t g_63 = 0x7B6FL;
static union U1 g_89 = {0x3996EF03L};
static uint32_t g_100 = 0xD0260C40L;
static int8_t *g_109 = (void*)0;
static union U1 **g_119 = (void*)0;
static uint64_t g_124 = 18446744073709551611UL;
static int16_t g_126 = 0xCA12L;
static int32_t *g_127 = &g_40[2][0][1];
static uint16_t g_153 = 0UL;
static int8_t g_174 = 0x70L;
static const int32_t g_244 = 0x5A3D644BL;
static int32_t g_249 = 0L;
static int32_t * const g_248 = &g_249;
static int32_t * const *g_247 = &g_248;
static int32_t **g_252 = &g_127;
static int32_t g_254 = 8L;
static int32_t g_261 = (-2L);
static int64_t g_275 = 0x40AC8E96B0C78BBDLL;
static int64_t g_276[2] = {0x4E2A6A90994805ACLL,0x4E2A6A90994805ACLL};
static struct S0 g_294 = {10,1,3420,745,436,0x66L};
static uint64_t g_298 = 4UL;
static int16_t **g_305 = (void*)0;
static int16_t *g_315 = &g_126;
static int16_t **g_314 = &g_315;
static uint64_t *g_387 = &g_298;
static int64_t g_421 = 0x98826D02A296EA8ELL;
static int64_t g_498 = 0xC11F94AE680DC4AELL;
static union U1 *g_583[6][1][3] = {{{(void*)0,&g_6,(void*)0}},{{&g_6,&g_6,&g_6}},{{&g_6,&g_6,&g_6}},{{(void*)0,&g_6,&g_6}},{{&g_6,&g_6,&g_6}},{{(void*)0,&g_6,(void*)0}}};
static union U1 **g_582 = &g_583[2][0][2];
static int32_t *g_586 = (void*)0;
static int8_t g_613[6] = {0x9DL,0x4BL,0x9DL,0x9DL,0x4BL,0x9DL};
static int32_t *g_686[6][6] = {{(void*)0,&g_6.f0,&g_89.f0,&g_89.f0,&g_6.f0,&g_2},{&g_2,&g_89.f0,&g_6.f0,&g_6.f0,&g_89.f0,&g_2},{&g_89.f0,&g_6.f0,&g_89.f0,&g_40[5][1][0],&g_2,&g_249},{&g_89.f0,(void*)0,&g_6.f0,&g_2,&g_6.f0,(void*)0},{&g_89.f0,&g_249,&g_2,&g_40[5][1][0],&g_89.f0,&g_6.f0},{&g_89.f0,&g_2,&g_89.f0,&g_6.f0,&g_6.f0,&g_89.f0}};
static struct S0 g_697 = {10,1,16929,820,1115,255UL};
static struct S0 **g_762 = (void*)0;
static union U1 ***g_830 = (void*)0;
static union U1 ****g_829[5][2][5] = {{{&g_830,&g_830,&g_830,&g_830,&g_830},{&g_830,&g_830,&g_830,&g_830,&g_830}},{{&g_830,&g_830,&g_830,&g_830,&g_830},{&g_830,&g_830,&g_830,&g_830,&g_830}},{{&g_830,&g_830,&g_830,&g_830,&g_830},{&g_830,&g_830,&g_830,&g_830,&g_830}},{{&g_830,&g_830,&g_830,&g_830,&g_830},{&g_830,&g_830,&g_830,&g_830,&g_830}},{{&g_830,&g_830,&g_830,&g_830,&g_830},{&g_830,&g_830,&g_830,&g_830,&g_830}}};
static union U1 *****g_828 = &g_829[3][0][1];
static int32_t ***g_901 = &g_252;
static int32_t ****g_900 = &g_901;
static int32_t g_902[7][2][1] = {{{0L},{0x5E37A818L}},{{0x10CDCD01L},{0x5E37A818L}},{{0L},{0L}},{{0x5E37A818L},{0x10CDCD01L}},{{0x5E37A818L},{0L}},{{0L},{0x5E37A818L}},{{0x10CDCD01L},{0x5E37A818L}}};
static const uint64_t g_966 = 0x711F97C66A7A3F2FLL;
static const int32_t *g_968 = &g_254;
static uint16_t g_1056[6] = {8UL,8UL,8UL,8UL,8UL,8UL};



static union U1  func_1(void);
static int32_t * func_12(union U1 ** p_13, int32_t * p_14, int32_t  p_15, uint16_t  p_16, int16_t  p_17);
static union U1 ** func_18(union U1 ** p_19, int32_t * const  p_20, const int32_t  p_21, int32_t * p_22, int32_t * p_23);
static union U1 ** func_24(const int8_t  p_25, const int16_t  p_26);
static uint8_t  func_31(const int32_t * p_32);
static int32_t * func_33(int32_t * const  p_34, union U1 * p_35, int32_t  p_36);
static union U1 ** func_79(union U1 * p_80, int32_t  p_81);
static union U1 * func_82(int32_t  p_83, int64_t  p_84, const int16_t * p_85, int64_t  p_86, int16_t * p_87);




static union U1  func_1(void)
{ 
    uint32_t l_8 = 4294967287UL;
    int32_t * const l_995[1][7][6] = {{{&g_6.f0,&g_2,&g_6.f0,&g_2,&g_2,&g_6.f0},{&g_6.f0,&g_6.f0,&g_6.f0,&g_6.f0,&g_6.f0,&g_2},{&g_2,&g_6.f0,(void*)0,(void*)0,&g_2,&g_6.f0},{&g_6.f0,&g_2,(void*)0,&g_6.f0,&g_6.f0,&g_2},{&g_6.f0,&g_6.f0,&g_6.f0,&g_6.f0,&g_6.f0,&g_6.f0},{&g_6.f0,&g_6.f0,&g_6.f0,(void*)0,&g_6.f0,&g_2},{&g_2,&g_6.f0,&g_2,&g_6.f0,&g_6.f0,&g_2}}};
    int16_t ***l_1048 = &g_314;
    int64_t l_1050 = 0L;
    int32_t *l_1061 = &g_89.f0;
    union U1 l_1062 = {-6L};
    int i, j, k;
    for (g_2 = (-9); (g_2 >= (-6)); ++g_2)
    { 
        union U1 *l_5 = &g_6;
        union U1 **l_7 = &l_5;
        int32_t l_1001 = 0L;
        (*l_7) = l_5;
    }
    for (l_8 = 0; l_8 < 2; l_8 += 1)
    {
        g_276[l_8] = 0xC26C3B47816E10EELL;
    }
    return l_1062;
}



static int32_t * func_12(union U1 ** p_13, int32_t * p_14, int32_t  p_15, uint16_t  p_16, int16_t  p_17)
{ 
    int16_t l_1002 = (-5L);
    uint32_t l_1003 = 1UL;
    (**g_901) = p_14;
    l_1003++;
    for (g_298 = 0; (g_298 <= 43); g_298 = safe_add_func_int32_t_s_s(g_298, 2))
    { 
        uint16_t l_1014 = 0x6A7EL;
        int8_t *l_1027 = &g_613[4];
        struct S0 *l_1039 = &g_697;
        struct S0 **l_1038 = &l_1039;
        uint8_t *l_1040 = (void*)0;
        int32_t l_1041 = 0x12272751L;
        uint32_t l_1042[1][4][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1042[i][j][k] = 0xDBA6446BL;
            }
        }
        (*g_248) ^= (((safe_add_func_int32_t_s_s(((((safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((l_1014 == ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(p_15, ((safe_lshift_func_uint16_t_u_u((((**g_314) = (p_17 ^= (safe_mul_func_uint8_t_u_u(0xD3L, (((*l_1027) = 0x9DL) && ((**g_314) && (((l_1014 >= ((~l_1003) | p_15)) , g_697.f4) & 65534UL))))))) > 0x172DL), g_40[5][1][0])) != p_15))), l_1014)) <= g_2), p_15)), l_1014)) , g_276[0])), 5)) >= l_1002) , l_1014), p_15)) | 18446744073709551615UL) || 0x71E1L) && p_16), (*p_14))) <= p_16) , (*p_14));
        (*g_248) |= ((safe_sub_func_uint8_t_u_u((l_1002 <= p_16), (((safe_mod_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((~(l_1041 = ((safe_lshift_func_int8_t_s_u((p_15 != (g_294.f5 = (l_1038 != g_762))), 7)) >= (l_1002 == p_16)))) == g_261), p_16)), (*g_315))) <= l_1014) & l_1042[0][1][0]))) != 0x26L);
    }
    for (p_17 = 3; (p_17 > 15); p_17 = safe_add_func_int8_t_s_s(p_17, 1))
    { 
        int32_t *l_1045[4][4] = {{(void*)0,&g_40[5][1][0],(void*)0,&g_40[5][1][0]},{(void*)0,&g_40[5][1][0],(void*)0,&g_40[5][1][0]},{(void*)0,&g_40[5][1][0],(void*)0,&g_40[5][1][0]},{(void*)0,&g_40[5][1][0],(void*)0,&g_40[5][1][0]}};
        int i, j;
        return l_1045[0][1];
    }
    return (***g_900);
}



static union U1 ** func_18(union U1 ** p_19, int32_t * const  p_20, const int32_t  p_21, int32_t * p_22, int32_t * p_23)
{ 
    int32_t l_999 = 0x287A3776L;
    int32_t l_1000 = 0x5C2D6077L;
    l_1000 &= (g_153 < (l_999 = (safe_div_func_uint64_t_u_u(l_999, l_999))));
    return p_19;
}



static union U1 ** func_24(const int8_t  p_25, const int16_t  p_26)
{ 
    uint16_t l_520 = 65535UL;
    union U1 *l_524[3];
    union U1 **l_523 = &l_524[0];
    int32_t l_528 = (-4L);
    int32_t l_529 = (-5L);
    int32_t l_530 = 1L;
    int32_t l_531 = 0x24730419L;
    int32_t l_533 = 1L;
    int32_t *l_554 = &l_533;
    int32_t l_635 = 1L;
    struct S0 l_669 = {5,1,3594,218,1393,255UL};
    int64_t *l_676 = &g_276[0];
    const int16_t *l_682[3];
    uint8_t l_690 = 253UL;
    int8_t l_722 = 0xA3L;
    union U1 ****l_751[1];
    struct S0 *l_764 = (void*)0;
    struct S0 **l_763 = &l_764;
    uint16_t l_805[1][1];
    const int32_t *l_843 = (void*)0;
    int64_t *l_991 = &g_498;
    union U1 **l_992 = &l_524[0];
    union U1 **l_993[3];
    union U1 **l_994 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_524[i] = &g_89;
    for (i = 0; i < 3; i++)
        l_682[i] = &g_63;
    for (i = 0; i < 1; i++)
        l_751[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_805[i][j] = 65531UL;
    }
    for (i = 0; i < 3; i++)
        l_993[i] = &l_524[0];
    for (g_63 = 0; (g_63 <= 1); g_63 += 1)
    { 
        union U1 **l_525[2][3][5];
        int32_t *l_527[1][4][4] = {{{&g_40[5][1][0],&g_40[5][1][0],&g_40[5][1][0],&g_40[5][1][0]},{&g_40[5][1][0],&g_40[5][1][0],&g_40[5][1][0],&g_40[5][1][0]},{&g_40[5][1][0],&g_40[5][1][0],&g_40[5][1][0],&g_40[5][1][0]},{&g_40[5][1][0],&g_40[5][1][0],&g_40[5][1][0],&g_40[5][1][0]}}};
        int64_t l_532 = 6L;
        uint64_t l_534 = 1UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 5; k++)
                    l_525[i][j][k] = &l_524[0];
            }
        }
        ++l_520;
        for (g_249 = 1; (g_249 >= 0); g_249 -= 1)
        { 
            union U1 **l_526 = &l_524[0];
            return g_119;
        }
        l_534--;
        return g_119;
    }
    for (g_174 = 0; (g_174 >= 14); ++g_174)
    { 
        union U1 **l_560 = &l_524[1];
        int32_t l_580 = (-1L);
        union U1 l_604 = {8L};
        int32_t *l_605 = (void*)0;
        int32_t l_631 = 0x3BEA6F1BL;
        int32_t l_632[4] = {0x6320923FL,0x6320923FL,0x6320923FL,0x6320923FL};
        uint8_t l_643 = 0x98L;
        uint8_t l_670 = 0x3BL;
        struct S0 *l_695 = &l_669;
        int64_t *l_740 = &g_498;
        union U1 ***l_749[3];
        union U1 ****l_748 = &l_749[0];
        int32_t *l_755[7] = {&l_529,&l_529,&l_529,&l_529,&l_529,&l_529,&l_529};
        uint32_t l_771[3][2][7] = {{{4294967295UL,0UL,6UL,0x8D54F97BL,6UL,0UL,4294967295UL},{4294967288UL,0x4D2DA90CL,6UL,3UL,0xDF3135D2L,0UL,4294967288UL}},{{4294967295UL,0x4D2DA90CL,0x02FBC994L,0x8D54F97BL,0xDF3135D2L,0xBD5D487BL,4294967295UL},{4294967295UL,0UL,6UL,0x8D54F97BL,6UL,0UL,4294967295UL}},{{4294967288UL,0x4D2DA90CL,6UL,3UL,0xDF3135D2L,0UL,4294967288UL},{4294967295UL,0x4D2DA90CL,0x02FBC994L,0x8D54F97BL,0xDF3135D2L,0xBD5D487BL,4294967295UL}}};
        uint64_t l_823 = 0xF85180F43C9C668FLL;
        struct S0 **l_831 = &l_764;
        uint8_t *l_925 = &l_669.f5;
        int16_t ***l_936 = &g_305;
        const struct S0 *l_947 = &g_294;
        const struct S0 **l_946 = &l_947;
        uint8_t l_957 = 250UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_749[i] = &l_523;
    }
    (*g_248) = (safe_sub_func_int16_t_s_s((((*l_991) |= (1UL == (((safe_rshift_func_int8_t_s_u(((p_26 == (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s((((!((((safe_sub_func_uint8_t_u_u(g_275, (((p_25 >= p_25) | (safe_div_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((((((*l_676) |= (*l_554)) , (**l_523)) , 6UL) || p_25), 1)) , 0xC16FL), g_261)) , (*l_554)) & 1L), 255UL))) != p_26))) ^ 0x422EL) | 4294967295UL) & (-5L))) != (*l_554)) ^ g_697.f3), g_244)) && (*l_554)), p_26)), p_26))) < (*l_554)), p_26)) , 1UL) != 0x383D8AEFL))) && 0x70A9A620326FC28ELL), p_25));
    return l_994;
}



static uint8_t  func_31(const int32_t * p_32)
{ 
    int32_t * const **l_246 = (void*)0;
    int32_t **l_250 = &g_127;
    int32_t ***l_251[5] = {&l_250,&l_250,&l_250,&l_250,&l_250};
    int32_t *l_253[3];
    int16_t *l_262 = &g_63;
    uint64_t *l_273 = &g_124;
    int64_t *l_274 = &g_275;
    union U1 * const l_309 = (void*)0;
    union U1 * const *l_308 = &l_309;
    uint32_t l_312 = 4294967286UL;
    int64_t l_339[5] = {0xE10E5CE82039155DLL,0xE10E5CE82039155DLL,0xE10E5CE82039155DLL,0xE10E5CE82039155DLL,0xE10E5CE82039155DLL};
    uint32_t l_375 = 0UL;
    int32_t l_413 = 0x95E90829L;
    uint32_t l_426[1][3];
    int16_t l_451 = (-1L);
    uint64_t l_466 = 0x1447DE0C22A592DFLL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_253[i] = &g_254;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_426[i][j] = 0xA2E38E1EL;
    }
    (*g_248) = ((g_254 = (+((g_247 = (void*)0) != (g_252 = l_250)))) , ((**l_250) , ((((*l_262) = (((safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((void*)0 == &g_248), ((((safe_div_func_int64_t_s_s(((g_249 != g_261) > (**l_250)), 0xAA5E9E9086A25079LL)) > 4294967294UL) & (**l_250)) , (**l_250)))), g_6.f0)) , 1UL) ^ g_126)) , (**l_250)) | 0xBA8EBB62L)));
    for (g_261 = 21; (g_261 > (-21)); --g_261)
    { 
        uint64_t l_265 = 6UL;
        return l_265;
    }
lbl_515:
    if ((((1L && (!((**l_250) , ((**l_250) ^ (safe_rshift_func_int16_t_s_s(g_40[3][2][0], 6)))))) > g_249) != (((*l_274) = (safe_add_func_uint64_t_u_u(((*l_273) = (0xA97DC5E8L ^ (((safe_div_func_int8_t_s_s((**l_250), (**l_250))) , g_89.f0) <= g_124))), 18446744073709551615UL))) && g_276[0])))
    { 
        int8_t l_287[7] = {0x14L,0x14L,0x14L,0x14L,0x14L,0x14L,0x14L};
        uint64_t *l_297 = &g_298;
        const uint32_t l_299 = 0x42497500L;
        int16_t **l_302 = &l_262;
        int16_t ***l_303 = (void*)0;
        int16_t ***l_304 = (void*)0;
        uint32_t *l_313 = &g_100;
        int32_t *l_379 = &g_40[5][1][0];
        int32_t l_403[1][2][6] = {{{0xCFE953CFL,0xCFE953CFL,1L,0xCFE953CFL,0xCFE953CFL,1L},{0xCFE953CFL,0xCFE953CFL,1L,0xCFE953CFL,0xCFE953CFL,1L}}};
        int32_t l_449 = 0x90CE9071L;
        struct S0 *l_458 = &g_294;
        int i, j, k;
        if ((safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(l_287[6], (safe_sub_func_uint64_t_u_u(((*l_297) |= (g_89 , (g_124 ^= (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(l_287[0], (g_294 , 0xE4E52E893FEBC825LL))), ((((*g_248) = ((safe_mod_func_int8_t_s_s((**l_250), g_294.f2)) & 0xCDE4L)) && (**l_250)) , l_287[6])))))), (-3L))))), g_294.f0)) == l_287[5]) && 9UL), l_299)), 0x20L)), 0xF182E843886572D1LL)))
        { 
            (*g_252) = (*l_250);
        }
        else
        { 
            return g_40[5][1][0];
        }
        if (((safe_lshift_func_int16_t_s_u(((g_305 = l_302) != ((((-8L) > ((((void*)0 != l_308) != 0x10L) || (((*l_313) |= ((safe_div_func_int32_t_s_s((((&l_308 == (void*)0) , l_312) && g_2), l_287[4])) & 0L)) > (*g_248)))) > (*g_248)) , g_314)), 7)) >= 18446744073709551615UL))
        { 
            struct S0 *l_317 = &g_294;
            struct S0 **l_316 = &l_317;
            struct S0 **l_318 = (void*)0;
            struct S0 *l_320 = &g_294;
            struct S0 **l_319 = &l_320;
            int32_t l_340[3][2];
            uint32_t l_344 = 0UL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_340[i][j] = 0L;
            }
            (*l_319) = ((*l_316) = &g_294);
            if ((safe_add_func_int8_t_s_s(0xEBL, (-1L))))
            { 
                int32_t l_331 = 1L;
                for (g_298 = 0; (g_298 <= 2); g_298 += 1)
                { 
                    int i;
                    (*g_248) = (safe_div_func_uint16_t_u_u(((((((safe_div_func_uint64_t_u_u(((safe_div_func_int8_t_s_s((l_287[g_298] | (((safe_sub_func_int64_t_s_s((l_331 || (safe_lshift_func_int8_t_s_u(l_287[g_298], ((((**g_305) = (safe_mul_func_uint16_t_u_u((g_294.f4 , (safe_unary_minus_func_uint32_t_u(0x150DD777L))), ((safe_div_func_int16_t_s_s(0xC19CL, 0x0A16L)) == 0xC20BL)))) , l_331) != l_287[6])))), l_287[6])) ^ l_331) || l_339[3])), l_340[2][1])) != l_340[2][0]), 0x872F4CC3A63B0F01LL)) , l_287[g_298]) ^ 0x8F255842L) ^ l_331) ^ g_276[0]) && (*g_315)), 0x432CL));
                }
                return l_331;
            }
            else
            { 
                int8_t *l_355 = &l_287[1];
                int32_t l_356[3][4][2] = {{{0x2FD13610L,0x7AE0A9D3L},{(-5L),0x7AE0A9D3L},{0x2FD13610L,0x7AE0A9D3L},{(-5L),0x7AE0A9D3L}},{{0x2FD13610L,0x7AE0A9D3L},{(-5L),0x7AE0A9D3L},{0x2FD13610L,0x7AE0A9D3L},{(-5L),0x7AE0A9D3L}},{{0x2FD13610L,0x7AE0A9D3L},{(-5L),0x7AE0A9D3L},{0x2FD13610L,0x7AE0A9D3L},{(-5L),0x7AE0A9D3L}}};
                int i, j, k;
                (*g_248) = ((~(safe_div_func_int64_t_s_s((((l_344 , (safe_lshift_func_uint8_t_u_s((254UL && 3UL), (safe_mod_func_uint64_t_u_u(((g_40[5][1][0] && (safe_div_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((-1L), (l_299 , (((*l_355) = (((((l_340[2][0] ^ (**g_305)) <= 6UL) | 0xA0D9L) , 0UL) | 0xBBL)) , (**l_250))))), l_344)), g_294.f3))) ^ l_340[2][1]), l_356[0][1][0]))))) ^ l_299) <= g_40[5][1][0]), 0xDEF278F4957EAFF6LL))) || g_275);
            }
            return g_294.f1;
        }
        else
        { 
            uint32_t *l_361 = (void*)0;
            uint64_t *l_386 = (void*)0;
            int32_t l_392 = 1L;
            union U1 l_397 = {1L};
            int32_t l_411 = 2L;
            int32_t l_412 = (-8L);
            int32_t l_414 = 1L;
            int32_t l_415 = 0L;
            int32_t l_416 = 0x253A74EDL;
            int32_t l_418 = 0x58CF9152L;
            int32_t l_419 = (-1L);
            int32_t l_420 = 0x2FEB2C71L;
            int32_t l_423 = 0x0EC9FA32L;
            int32_t l_425 = (-1L);
            uint32_t l_444 = 0x97C4A791L;
            struct S0 *l_459 = &g_294;
            uint32_t l_487 = 1UL;
            uint32_t l_503 = 0x67C041B1L;
            if ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((l_361 == (void*)0), (safe_sub_func_uint8_t_u_u((g_2 ^ (safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((+(safe_rshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(0x6DFEE10322254527LL, (0xCA96074C041E97ADLL <= g_89.f0))), 8))), (l_375 , g_294.f5))), l_287[6])), (**g_305)))), 0L)))) != g_249), 0xDAA8CFC3L)))
            { 
                uint8_t l_376[2][5] = {{5UL,5UL,5UL,5UL,5UL},{0xB0L,0xB0L,0xB0L,0xB0L,0xB0L}};
                const uint64_t *l_396 = &g_298;
                int32_t l_399 = 0xF216B6F3L;
                int32_t l_402 = 0L;
                int32_t l_404 = (-9L);
                int64_t l_405[3];
                int32_t l_406 = 0x59279D70L;
                int32_t l_407 = 0xDE3901CCL;
                int32_t l_409 = 0L;
                int32_t l_410[4];
                int64_t l_417 = (-3L);
                int32_t *l_429 = &g_40[5][1][0];
                int16_t ***l_430 = &l_302;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_405[i] = 0x176CBD41AF20DD8BLL;
                for (i = 0; i < 4; i++)
                    l_410[i] = 0L;
                if (l_287[4])
                { 
                    --l_376[0][2];
                }
                else
                { 
                    uint64_t *l_388[3];
                    int32_t l_389 = 0x40B981A8L;
                    uint8_t l_393[4][1][3] = {{{0x94L,0x65L,0x65L}},{{0x94L,0x65L,0x65L}},{{0x94L,0x65L,0x65L}},{{0x94L,0x65L,0x65L}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_388[i] = &g_298;
                    (*g_252) = (l_379 = l_313);
                    (*g_248) |= ((((safe_mul_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((g_387 = l_386) != l_388[1]) , ((l_389 && ((((safe_sub_func_uint16_t_u_u(g_261, (l_392 , g_261))) , (l_376[0][2] | g_89.f0)) == (**l_250)) , l_392)) , 0xC60AL)), (-2L))), l_392)) != 0x470C0242DE6B32EFLL) , l_376[0][2]), g_254)) < (*l_379)) && (**g_252)) || l_393[2][0][1]);
                }
                if ((*g_127))
                { 
                    int8_t l_398[4][6] = {{(-7L),0xA5L,0xA5L,(-7L),0xA5L,0xA5L},{(-7L),0xA5L,0xA5L,(-7L),0xA5L,0xA5L},{(-7L),0xA5L,0xA5L,(-7L),0xA5L,0xA5L},{(-7L),0xA5L,0xA5L,(-7L),0xA5L,0xA5L}};
                    int32_t l_400 = 1L;
                    int32_t l_401 = 1L;
                    int32_t l_408[5][1] = {{(-6L)},{8L},{(-6L)},{8L},{(-6L)}};
                    int64_t l_422 = 1L;
                    int8_t l_424 = (-1L);
                    int i, j;
                    (*g_248) = (((g_6 , (safe_lshift_func_uint16_t_u_s(((*l_379) > (l_396 != &g_124)), 0))) | (l_397 , (g_294 , 0xD2L))) != 6L);
                    l_426[0][0]--;
                }
                else
                { 
                    l_429 = (void*)0;
                }
                (*l_430) = &g_315;
            }
            else
            { 
                union U1 * const * const *l_439 = &l_308;
                int32_t l_447 = (-7L);
                int32_t *l_457 = &l_403[0][1][5];
                uint32_t l_471 = 0x105997DAL;
                int32_t l_484 = 0xAF1BCC05L;
                int32_t l_485 = (-1L);
                struct S0 **l_497 = &l_459;
                for (g_126 = 0; (g_126 > (-26)); --g_126)
                { 
                    uint8_t l_448[7] = {0xA6L,0xA6L,0xAAL,0xA6L,0xA6L,0xAAL,0xA6L};
                    uint16_t *l_450 = &g_153;
                    int32_t l_452 = (-1L);
                    int i;
                    if ((*l_379))
                        break;
                    l_452 |= (safe_lshift_func_uint16_t_u_s(((*l_450) = (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((void*)0 == l_439), 4)) || ((*g_248) = (l_397 , (((safe_mul_func_int8_t_s_s(((((safe_sub_func_int8_t_s_s((0x0F35D9B5L || l_444), (((*l_274) = (((((*l_262) = (safe_div_func_uint16_t_u_u(l_423, (((void*)0 != g_119) , l_447)))) & l_448[1]) | 0x5DL) != l_415)) | (*l_379)))) & 0x8F517381DB2D7252LL) > 4294967295UL) & g_2), (-2L))) < g_294.f4) || g_124)))), l_449))), l_451));
                    (*l_250) = &l_452;
                }
lbl_502:
                if (((*p_32) < (l_447 , (safe_mul_func_int16_t_s_s(((**l_302) |= (((safe_lshift_func_int8_t_s_u((-1L), 4)) , (((l_447 & (((*l_379) = (l_457 != p_32)) & (l_458 == l_459))) , (-5L)) && 2L)) ^ 0xEDF3F4CFL)), 65535UL)))))
                { 
                    uint8_t *l_464 = &g_294.f5;
                    int32_t l_465[4] = {0x7A192764L,0x7A192764L,0x7A192764L,0x7A192764L};
                    int i;
                    l_419 ^= (((((*l_379) , 0xFD1FL) < ((*g_315) & ((((((l_415 != (l_397.f0 = ((*l_464) = ((safe_lshift_func_int8_t_s_s(0xE9L, (safe_add_func_int32_t_s_s(l_397.f0, ((((**l_302) = ((((void*)0 != &g_100) , 0x68L) & g_294.f4)) && (**g_314)) && g_276[1]))))) | 0xACL)))) , 0x0BL) , (void*)0) == (void*)0) | (*l_457)) == 0xB4L))) , l_465[3]) > (*l_457));
                    --l_466;
                }
                else
                { 
                    int8_t l_469 = 0x9FL;
                    int32_t l_470[2][5] = {{0x58FEEFFBL,0x1EEAB81FL,(-4L),(-4L),0x1EEAB81FL},{0x58FEEFFBL,0x1EEAB81FL,(-4L),(-4L),0x1EEAB81FL}};
                    int16_t l_486[5] = {0x7150L,0x7150L,0x7150L,0x7150L,0x7150L};
                    int8_t *l_495 = (void*)0;
                    int8_t *l_496[1][5] = {{&l_287[1],&l_287[1],&l_287[1],&l_287[1],&l_287[1]}};
                    int32_t * const ***l_501 = &l_246;
                    int i, j;
                    --l_471;
                    (*l_379) = ((*l_457) |= (safe_mod_func_uint32_t_u_u(l_420, (l_470[1][2] , (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((**g_314), 10)), ((safe_mod_func_int32_t_s_s((l_470[0][1] |= (safe_add_func_uint8_t_u_u((*l_379), ((l_444 , (*p_32)) | 0xE6973B08L)))), (*g_248))) ^ 0L)))))));
                    l_487--;
                    (*l_379) |= (safe_lshift_func_uint16_t_u_u((((p_32 == (void*)0) <= (!((safe_mul_func_int8_t_s_s((l_416 , (l_470[0][3] = (g_174 &= (*l_457)))), (g_498 |= ((void*)0 == l_497)))) , (safe_lshift_func_uint16_t_u_s((255UL > l_486[0]), (**g_305)))))) || (*p_32)), 11));
                    (*l_501) = &g_247;
                }
                (*l_457) ^= (*l_379);
                if (l_392)
                    goto lbl_502;
            }
            l_418 = ((&l_458 == &l_459) , 0x7F06EC14L);
            ++l_503;
            (*g_252) = &l_403[0][0][2];
        }
    }
    else
    { 
        union U1 *l_511 = &g_6;
        const int32_t l_512 = (-9L);
        uint16_t l_513 = 0xC89CL;
        int32_t l_514 = 0x9B3ADBFBL;
        (*g_248) = ((safe_sub_func_int64_t_s_s((!((((((*g_387) < ((g_153 = 0xD7C2L) >= (0xE64523FC24E9BD2CLL ^ (((safe_rshift_func_int8_t_s_u(0x22L, g_276[0])) <= ((9UL ^ (((void*)0 != l_511) | 1L)) > l_512)) ^ 0UL)))) != 4294967288UL) , 3L) < (*p_32)) | (*p_32))), l_512)) , 0xBC4FCEBDL);
        if (g_298)
            goto lbl_515;
        (*g_248) |= ((l_514 = l_513) > (l_512 | 0xB6D192658B9C7710LL));
        l_514 = 0x6752B76DL;
    }
    g_40[0][0][0] &= ((safe_add_func_uint64_t_u_u((&l_339[4] != ((*g_248) , &l_339[3])), g_275)) , 0x51530B3BL);
    return g_294.f3;
}



static int32_t * func_33(int32_t * const  p_34, union U1 * p_35, int32_t  p_36)
{ 
    int32_t *l_38 = (void*)0;
    int32_t *l_39 = &g_40[5][1][0];
    int32_t *l_41 = &g_40[4][0][4];
    int32_t *l_42 = &g_40[5][1][0];
    int32_t *l_43[6] = {&g_6.f0,&g_6.f0,&g_6.f0,&g_6.f0,&g_6.f0,&g_6.f0};
    uint32_t l_44 = 18446744073709551610UL;
    int32_t l_47 = 0L;
    uint32_t l_48[1][7];
    const int16_t *l_91 = &g_63;
    struct S0 l_148[4] = {{8,1,7216,561,425,0xCBL},{8,1,7216,561,425,0xCBL},{8,1,7216,561,425,0xCBL},{8,1,7216,561,425,0xCBL}};
    uint8_t l_157 = 0x5AL;
    uint8_t l_167[2];
    uint64_t l_168 = 1UL;
    uint32_t l_172 = 18446744073709551613UL;
    int8_t l_213[4];
    uint32_t l_236 = 0x668E1CF2L;
    uint16_t l_237 = 0x4D5CL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_48[i][j] = 0xAF4B502DL;
    }
    for (i = 0; i < 2; i++)
        l_167[i] = 0x32L;
    for (i = 0; i < 4; i++)
        l_213[i] = 0x59L;
lbl_169:
    ++l_44;
lbl_241:
    ++l_48[0][3];
    for (l_47 = (-22); (l_47 != 23); l_47 = safe_add_func_uint8_t_u_u(l_47, 9))
    { 
        int32_t l_59 = 0x41EDA738L;
        int32_t l_69 = 1L;
        int32_t l_70 = 2L;
        int16_t *l_94 = &g_63;
        uint32_t *l_160[7][3] = {{&l_48[0][3],&l_48[0][3],&l_48[0][3]},{&l_48[0][3],&l_48[0][3],&l_48[0][3]},{&l_48[0][3],&l_48[0][3],&l_48[0][3]},{&l_48[0][3],&l_48[0][3],&l_48[0][3]},{&l_48[0][3],&l_48[0][3],&l_48[0][3]},{&l_48[0][3],&l_48[0][3],&l_48[0][3]},{&l_48[0][3],&l_48[0][3],&l_48[0][3]}};
        int16_t **l_163 = &l_94;
        int32_t l_166 = 1L;
        int8_t *l_173 = &g_174;
        int32_t **l_178 = &l_43[4];
        uint16_t l_184 = 1UL;
        uint64_t *l_186 = (void*)0;
        uint64_t *l_187 = (void*)0;
        uint64_t *l_188 = &l_168;
        uint32_t l_201 = 4294967295UL;
        int i, j;
        for (p_36 = 5; (p_36 >= 1); p_36 -= 1)
        { 
            int32_t l_53 = 0x358B4D46L;
            int32_t l_71 = 5L;
            union U1 *l_88 = &g_89;
            int i;
            (*l_42) = 0xEEB1CB69L;
            if (l_53)
                break;
            if ((safe_unary_minus_func_int32_t_s(l_53)))
            { 
                int16_t *l_62 = &g_63;
                int32_t l_68 = 0xBA449F34L;
                (*l_39) = (safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s(l_59, (((safe_mod_func_int16_t_s_s(((*l_62) = 0x31D5L), p_36)) , g_63) && ((*p_34) ^ ((safe_lshift_func_uint8_t_u_u(((g_2 , ((p_36 || p_36) && p_36)) , 0xECL), g_40[5][1][0])) != l_68))))), 18446744073709551611UL));
            }
            else
            { 
                uint32_t l_76[4] = {0xB3BAA24DL,0xB3BAA24DL,0xB3BAA24DL,0xB3BAA24DL};
                union U1 *l_90 = &g_89;
                struct S0 l_149 = {2,0,17402,850,-768,0x90L};
                uint16_t *l_152 = &g_153;
                int32_t l_156 = 0L;
                int i;
                for (l_53 = 0; (l_53 <= 0); l_53 += 1)
                { 
                    uint32_t l_72 = 0x2E988A7CL;
                    --l_72;
                }
                for (l_44 = 0; (l_44 <= 0); l_44 += 1)
                { 
                    uint32_t l_75 = 4294967295UL;
                    l_70 = ((*l_39) = l_75);
                }
                for (l_59 = 0; (l_59 <= 0); l_59 += 1)
                { 
                    union U1 **l_95 = &l_90;
                    union U1 ***l_139 = (void*)0;
                    union U1 ***l_140 = &l_95;
                    ++l_76[0];
                    if (g_6.f0)
                        continue;
                    (*l_140) = func_79(((*l_95) = func_82((*p_34), ((l_90 = (l_88 = (((*l_42) &= 0xE5517414L) , p_35))) != (void*)0), l_91, ((safe_mul_func_uint8_t_u_u(0xEBL, p_36)) ^ g_11[0][0]), l_94)), (*p_34));
                    if (l_70)
                        continue;
                    g_89.f0 = ((*l_39) = (g_40[1][2][2] < g_40[2][2][3]));
                }
                (*l_41) ^= (safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_int8_t_s((l_148[1] , (((*p_35) , l_149) , ((safe_rshift_func_int16_t_s_u(g_11[0][0], ((*l_152) = (0L & l_69)))) > (((safe_lshift_func_uint8_t_u_u(((*l_90) , p_36), 1)) && 0L) || p_36)))))) || l_156) , p_36), 0x92AE4C48L)), l_157)), 0L));
            }
        }
        l_168 = (0xF606E3EF0F463998LL ^ ((((safe_rshift_func_int8_t_s_s(((((*l_42) = g_153) > ((((safe_rshift_func_uint8_t_u_s((((*l_163) = &g_63) != &g_126), ((l_70 <= ((safe_div_func_uint32_t_u_u(0x5507861EL, (0x03A6L || g_124))) , g_153)) > 0x10L))) , g_6.f0) > l_166) > l_69)) , l_166), 6)) , l_167[1]) <= p_36) != g_63));
        if (l_69)
            goto lbl_169;
        g_89.f0 ^= (safe_rshift_func_int16_t_s_s((g_100 | (((*l_173) = l_172) && (((**l_163) = (~(safe_mod_func_int32_t_s_s(((((*l_178) = &l_69) != (void*)0) && (safe_unary_minus_func_uint8_t_u((safe_mod_func_int64_t_s_s((((&g_63 != (*l_163)) != ((*l_39) = (safe_mod_func_uint64_t_u_u((0x37B54A59L != l_184), 6UL)))) & (*p_34)), (-1L)))))), p_36)))) && g_174))), 12));
    }
    for (g_174 = 0; (g_174 >= (-2)); g_174 = safe_sub_func_uint32_t_u_u(g_174, 1))
    { 
        int64_t l_212 = 0xA30DE6A78DC8BCB8LL;
        uint64_t *l_234 = &g_124;
        uint64_t *l_235 = &l_168;
        int16_t *l_238 = &g_63;
        uint16_t *l_239 = (void*)0;
        uint16_t *l_240 = &g_153;
        (*l_42) = (((*l_240) |= ((safe_sub_func_uint64_t_u_u(g_40[0][1][3], (safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((*l_238) = ((*p_35) , (safe_div_func_int16_t_s_s(((l_212 | (((l_213[2] >= ((0x8EL ^ ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u(((*l_235) = ((*l_234) = (safe_mul_func_uint8_t_u_u(((p_36 , (safe_mul_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((((safe_add_func_uint16_t_u_u(p_36, 1UL)) , (-1L)) & g_6.f0) || (*l_42)) & 0x4CL), p_36)), g_6.f0)), 0x2DL)) > 0xF8C4533D21A56CEALL), l_212)), 0xE70583445F0763AELL)) <= l_212), l_212))) >= 0xDF6B5423L), 0x6FL)))), l_236)) | 255UL), 0x3069C672L)) & l_237)) || g_40[2][1][3])) == 0x50142BC99A05796CLL) < p_36)) != l_212), p_36)))), g_126)), (*l_39))))) <= p_36)) && l_212);
        if (l_237)
            goto lbl_241;
    }
    (*l_42) ^= 0x134C1F5AL;
    return &g_2;
}



static union U1 ** func_79(union U1 * p_80, int32_t  p_81)
{ 
    uint64_t l_98 = 1UL;
    int8_t *l_99[2];
    int32_t l_105[1];
    uint8_t *l_106 = &g_11[0][0];
    union U1 **l_112 = (void*)0;
    int32_t l_123 = 0x8AEA66F3L;
    int i;
    for (i = 0; i < 2; i++)
        l_99[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_105[i] = (-1L);
    l_105[0] = (safe_rshift_func_int8_t_s_u(((g_100 = (g_63 < l_98)) != (l_98 & 1UL)), (l_98 > (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((++(*l_106)), (((g_109 != (void*)0) <= g_6.f0) && 0xE95B6698L))), 0x7750E480CDBF8372LL)))));
    for (l_98 = 0; (l_98 <= 1); l_98 += 1)
    { 
        union U1 *l_111 = (void*)0;
        union U1 **l_110[2][7][3] = {{{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111}},{{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111}}};
        int i, j, k;
        return l_112;
    }
    for (g_89.f0 = 0; (g_89.f0 < (-10)); g_89.f0 = safe_sub_func_uint8_t_u_u(g_89.f0, 2))
    { 
        union U1 ***l_120 = &l_112;
        uint8_t l_121 = 0x9FL;
        uint32_t l_122 = 0x457D5AD6L;
        int32_t *l_125[4][1];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_125[i][j] = (void*)0;
        }
        g_40[2][1][4] = (g_126 &= (g_124 &= (safe_mod_func_uint8_t_u_u((p_81 != g_89.f0), ((((safe_sub_func_int8_t_s_s((((((*l_120) = g_119) != g_119) & g_40[5][1][0]) <= p_81), (l_121 >= 248UL))) != l_122) == l_123) ^ g_40[5][1][0])))));
    }
    g_127 = &g_2;
    for (g_124 = 0; (g_124 > 46); g_124++)
    { 
        int32_t *l_130 = &l_105[0];
        (*l_130) |= l_123;
        if (p_81)
            break;
        (*l_130) = ((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((l_112 = (void*)0) != (void*)0) & ((void*)0 != p_80)), (p_81 = p_81))), (((void*)0 != l_99[0]) , 0xD5B9L))) , 0xA6B8L), 9UL)), g_40[5][1][0])) & (*l_130));
    }
    return l_112;
}



static union U1 * func_82(int32_t  p_83, int64_t  p_84, const int16_t * p_85, int64_t  p_86, int16_t * p_87)
{ 
    return &g_89;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6.f0, "g_6.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_40[i][j][k], "g_40[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_276[i], "g_276[i]", print_hash_value);

    }
    transparent_crc(g_294.f0, "g_294.f0", print_hash_value);
    transparent_crc(g_294.f1, "g_294.f1", print_hash_value);
    transparent_crc(g_294.f2, "g_294.f2", print_hash_value);
    transparent_crc(g_294.f3, "g_294.f3", print_hash_value);
    transparent_crc(g_294.f4, "g_294.f4", print_hash_value);
    transparent_crc(g_294.f5, "g_294.f5", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_613[i], "g_613[i]", print_hash_value);

    }
    transparent_crc(g_697.f0, "g_697.f0", print_hash_value);
    transparent_crc(g_697.f1, "g_697.f1", print_hash_value);
    transparent_crc(g_697.f2, "g_697.f2", print_hash_value);
    transparent_crc(g_697.f3, "g_697.f3", print_hash_value);
    transparent_crc(g_697.f4, "g_697.f4", print_hash_value);
    transparent_crc(g_697.f5, "g_697.f5", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_902[i][j][k], "g_902[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_966, "g_966", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1056[i], "g_1056[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
