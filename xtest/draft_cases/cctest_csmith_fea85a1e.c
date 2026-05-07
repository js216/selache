// SPDX-License-Identifier: MIT
// cctest_csmith_fea85a1e.c --- cctest case csmith_fea85a1e (csmith seed 4272445982)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x98df9df0 */

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

// Options:   -s 4272445982 -o /tmp/csmith_gen_rghb2oii/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   unsigned f0 : 29;
   signed f1 : 30;
   signed f2 : 8;
   const signed f3 : 20;
   unsigned f4 : 19;
   const uint16_t  f5;
   unsigned f6 : 26;
   const signed f7 : 11;
};

union U1 {
   int64_t  f0;
   int8_t  f1;
   const int64_t  f2;
};

union U2 {
   const int64_t  f0;
   uint32_t  f1;
};

union U3 {
   uint16_t  f0;
   const int32_t  f1;
   const signed f2 : 20;
};


static int32_t g_3 = 3L;
static int32_t g_27 = 1L;
static union U2 g_49[3][1][1] = {{{{1L}}},{{{1L}}},{{{1L}}}};
static int16_t g_63 = (-1L);
static uint64_t g_65[2][2] = {{0UL,0UL},{0UL,0UL}};
static int32_t g_68 = 0x8BF325E6L;
static uint8_t g_70 = 3UL;
static struct S0 g_83 = {6910,-23075,4,910,531,0x75EDL,7377,6};
static union U3 g_94[7][5][5] = {{{{4UL},{65530UL},{0x6AA3L},{65530UL},{4UL}},{{0x8B3BL},{1UL},{1UL},{0x8B3BL},{65535UL}},{{0x022CL},{65530UL},{0x022CL},{0xFB3FL},{0x022CL}},{{0x8B3BL},{0x8B3BL},{65527UL},{1UL},{65535UL}},{{4UL},{0xFB3FL},{0x6AA3L},{0xFB3FL},{4UL}}},{{{65535UL},{1UL},{65527UL},{0x8B3BL},{0x8B3BL}},{{0x022CL},{0xFB3FL},{0x022CL},{65530UL},{0x022CL}},{{65535UL},{0x8B3BL},{1UL},{1UL},{0x8B3BL}},{{4UL},{65530UL},{0x6AA3L},{65530UL},{4UL}},{{0x8B3BL},{1UL},{1UL},{0x8B3BL},{65535UL}}},{{{0x022CL},{65530UL},{0x022CL},{0xFB3FL},{0x022CL}},{{0x8B3BL},{0x8B3BL},{65527UL},{1UL},{65535UL}},{{4UL},{0xFB3FL},{0x6AA3L},{0xFB3FL},{4UL}},{{65535UL},{1UL},{65527UL},{0x8B3BL},{0x8B3BL}},{{0x022CL},{0xFB3FL},{0x022CL},{65530UL},{0x022CL}}},{{{65535UL},{0x8B3BL},{1UL},{1UL},{0x8B3BL}},{{4UL},{65530UL},{0x6AA3L},{65530UL},{4UL}},{{0x8B3BL},{1UL},{1UL},{0x8B3BL},{65535UL}},{{0x022CL},{65530UL},{0x022CL},{0xFB3FL},{0x022CL}},{{0x8B3BL},{0x8B3BL},{65527UL},{1UL},{65535UL}}},{{{4UL},{0xFB3FL},{0x6AA3L},{0xFB3FL},{4UL}},{{65535UL},{1UL},{65527UL},{0x8B3BL},{0x8B3BL}},{{0x022CL},{0xFB3FL},{0x022CL},{65530UL},{0x022CL}},{{65535UL},{0x8B3BL},{1UL},{1UL},{0x8B3BL}},{{4UL},{65530UL},{0x6AA3L},{65530UL},{4UL}}},{{{0x8B3BL},{1UL},{1UL},{0x8B3BL},{65535UL}},{{0x022CL},{65530UL},{0x022CL},{0xFB3FL},{0x022CL}},{{0x8B3BL},{0x8B3BL},{65527UL},{1UL},{65535UL}},{{4UL},{0xFB3FL},{0x6AA3L},{0xFB3FL},{4UL}},{{65535UL},{1UL},{65527UL},{0x8B3BL},{0x8B3BL}}},{{{0x022CL},{0xFB3FL},{0x022CL},{65530UL},{0x022CL}},{{65535UL},{0x8B3BL},{1UL},{1UL},{0x8B3BL}},{{4UL},{65530UL},{0x6AA3L},{65530UL},{4UL}},{{0x8B3BL},{1UL},{1UL},{0x8B3BL},{65535UL}},{{0x022CL},{65530UL},{0x022CL},{0xFB3FL},{0x022CL}}}};
static union U1 g_95[6] = {{0x4BC67B678304AF2CLL},{0xA6A967D4ADD7D531LL},{0xA6A967D4ADD7D531LL},{0x4BC67B678304AF2CLL},{0xA6A967D4ADD7D531LL},{0xA6A967D4ADD7D531LL}};
static const uint8_t ***g_138 = (void*)0;
static uint32_t g_156 = 7UL;
static union U2 g_160 = {0x83DF3A3A19F56D68LL};
static union U2 *g_159 = &g_160;
static uint32_t g_210 = 1UL;
static int32_t *g_217 = (void*)0;
static union U3 g_240 = {0x33CAL};
static int8_t g_246 = 0x82L;
static uint8_t *g_310 = (void*)0;
static uint8_t **g_309 = &g_310;
static const union U2 **g_334 = (void*)0;
static int64_t g_372 = 0x527D9B1459DAEE6FLL;
static uint64_t g_373 = 0x8514CCE56ECC0E75LL;
static int32_t g_398 = 0xC724B248L;
static uint8_t *****g_435 = (void*)0;
static const union U1 *g_458 = &g_95[0];
static const union U1 * const *g_457[3] = {&g_458,&g_458,&g_458};
static uint64_t *g_476 = &g_373;
static uint64_t **g_475 = &g_476;
static uint64_t g_498 = 0x3A4E2ADE48FC2743LL;
static int32_t g_503 = 0x6C14887EL;
static int8_t g_504[1] = {0x13L};
static int16_t g_505 = 0xAC97L;
static uint64_t g_507[5][6][3] = {{{1UL,0x1EF6CB8D0E322CD0LL,9UL},{1UL,0xEC56A0ECFCCA9871LL,0x8238058F8437671BLL},{0xE7B6411244D6BB53LL,1UL,0x1EF6CB8D0E322CD0LL},{0x6378628B04AB8BC2LL,0x478C9F5BE769D06ELL,18446744073709551609UL},{0x067A929317344577LL,18446744073709551606UL,0x809D37F6176D4EB4LL},{0x8238058F8437671BLL,0x809D37F6176D4EB4LL,0x0046D7A7EDF8D056LL}},{{0x8238058F8437671BLL,0x6378628B04AB8BC2LL,0x6378628B04AB8BC2LL},{0x067A929317344577LL,9UL,0x0DDF826D19B04005LL},{0x6378628B04AB8BC2LL,0x75B88AAE05D80D14LL,3UL},{0xE7B6411244D6BB53LL,1UL,0xAFC94C86A309E457LL},{1UL,0x0DDF826D19B04005LL,0xE7B6411244D6BB53LL},{1UL,1UL,7UL}},{{0xEC56A0ECFCCA9871LL,0x75B88AAE05D80D14LL,8UL},{8UL,9UL,0x75B88AAE05D80D14LL},{0x8B2C43F1A4592A39LL,0x6378628B04AB8BC2LL,1UL},{8UL,0x478C9F5BE769D06ELL,0xFD4FF648D094B7E8LL},{0x14807CDD1351F549LL,1UL,0x14807CDD1351F549LL},{0x5044FB30D3B8A4CCLL,3UL,0xAFC94C86A309E457LL}},{{0x6378628B04AB8BC2LL,1UL,9UL},{0x1EF6CB8D0E322CD0LL,18446744073709551609UL,0UL},{0x067A929317344577LL,8UL,0x0BC994D0B75891ECLL},{0x1EF6CB8D0E322CD0LL,0x0DDF826D19B04005LL,0x8238058F8437671BLL},{0x6378628B04AB8BC2LL,0xEC56A0ECFCCA9871LL,0x8B2C43F1A4592A39LL},{0x5044FB30D3B8A4CCLL,0x0F1F5BB7B7C7D884LL,1UL}},{{0x14807CDD1351F549LL,0UL,0x0DDF826D19B04005LL},{8UL,0UL,0x478C9F5BE769D06ELL},{0x0F1F5BB7B7C7D884LL,0x0F1F5BB7B7C7D884LL,0x1EF6CB8D0E322CD0LL},{0xAFC94C86A309E457LL,0xEC56A0ECFCCA9871LL,8UL},{18446744073709551609UL,0x0DDF826D19B04005LL,0x0046D7A7EDF8D056LL},{1UL,8UL,0x75B88AAE05D80D14LL}}};
static uint8_t g_538 = 4UL;
static union U3 g_549 = {0xB3F9L};
static union U3 *g_548 = &g_549;
static union U3 g_551[5] = {{0xA6ACL},{0xA6ACL},{0xA6ACL},{0xA6ACL},{0xA6ACL}};
static union U3 g_555 = {65535UL};
static union U3 *g_554 = &g_555;
static int32_t g_572 = 1L;
static const uint64_t g_592 = 0xA5633EEFDE23A1A3LL;
static uint32_t g_613 = 4294967295UL;
static int16_t g_663[7] = {0x338AL,0x39B7L,0x39B7L,0x338AL,0x39B7L,0x39B7L,0x338AL};
static uint64_t g_734[1] = {0x89C26405D54714FALL};
static struct S0 g_808[6][7] = {{{14525,-30400,-4,580,8,8UL,6282,22},{14525,-30400,-4,580,8,8UL,6282,22},{5975,-19870,-8,125,63,0x21CCL,8080,13},{14525,-30400,-4,580,8,8UL,6282,22},{14525,-30400,-4,580,8,8UL,6282,22},{5975,-19870,-8,125,63,0x21CCL,8080,13},{14525,-30400,-4,580,8,8UL,6282,22}},{{14525,-30400,-4,580,8,8UL,6282,22},{23078,-13102,2,599,427,65535UL,35,38},{23078,-13102,2,599,427,65535UL,35,38},{14525,-30400,-4,580,8,8UL,6282,22},{23078,-13102,2,599,427,65535UL,35,38},{23078,-13102,2,599,427,65535UL,35,38},{14525,-30400,-4,580,8,8UL,6282,22}},{{23078,-13102,2,599,427,65535UL,35,38},{14525,-30400,-4,580,8,8UL,6282,22},{23078,-13102,2,599,427,65535UL,35,38},{23078,-13102,2,599,427,65535UL,35,38},{14525,-30400,-4,580,8,8UL,6282,22},{23078,-13102,2,599,427,65535UL,35,38},{23078,-13102,2,599,427,65535UL,35,38}},{{14525,-30400,-4,580,8,8UL,6282,22},{14525,-30400,-4,580,8,8UL,6282,22},{5975,-19870,-8,125,63,0x21CCL,8080,13},{14525,-30400,-4,580,8,8UL,6282,22},{14525,-30400,-4,580,8,8UL,6282,22},{5975,-19870,-8,125,63,0x21CCL,8080,13},{14525,-30400,-4,580,8,8UL,6282,22}},{{14525,-30400,-4,580,8,8UL,6282,22},{23078,-13102,2,599,427,65535UL,35,38},{23078,-13102,2,599,427,65535UL,35,38},{14525,-30400,-4,580,8,8UL,6282,22},{23078,-13102,2,599,427,65535UL,35,38},{23078,-13102,2,599,427,65535UL,35,38},{14525,-30400,-4,580,8,8UL,6282,22}},{{23078,-13102,2,599,427,65535UL,35,38},{14525,-30400,-4,580,8,8UL,6282,22},{23078,-13102,2,599,427,65535UL,35,38},{23078,-13102,2,599,427,65535UL,35,38},{14525,-30400,-4,580,8,8UL,6282,22},{23078,-13102,2,599,427,65535UL,35,38},{23078,-13102,2,599,427,65535UL,35,38}}};
static const uint8_t g_853 = 0xB9L;
static const uint8_t g_855 = 6UL;
static int8_t *g_925 = (void*)0;
static const int8_t *g_927 = (void*)0;
static union U2 **g_932 = &g_159;
static union U2 ***g_931[2][6] = {{&g_932,&g_932,(void*)0,&g_932,&g_932,(void*)0},{&g_932,&g_932,(void*)0,&g_932,&g_932,(void*)0}};
static int64_t g_983 = 7L;
static uint32_t g_999 = 0xF465B906L;
static int32_t g_1045 = (-1L);
static int32_t g_1046 = 0x66E95082L;
static int16_t g_1047 = 0L;
static uint64_t g_1049[2] = {1UL,1UL};
static int16_t *g_1053 = &g_505;
static const uint8_t g_1084 = 7UL;
static uint64_t g_1276[1][5] = {{0x23D977AF8E25B546LL,0x23D977AF8E25B546LL,0x23D977AF8E25B546LL,0x23D977AF8E25B546LL,0x23D977AF8E25B546LL}};
static uint16_t g_1281[2] = {0xB20AL,0xB20AL};
static struct S0 g_1307 = {10918,9837,-3,487,465,65535UL,2499,41};
static struct S0 *g_1306 = &g_1307;
static uint16_t **g_1332 = (void*)0;
static struct S0 **g_1346[2] = {&g_1306,&g_1306};
static union U3 *g_1382 = (void*)0;
static uint8_t ****g_1424 = (void*)0;
static uint64_t * const *g_1534 = &g_476;
static uint64_t * const **g_1533 = &g_1534;
static int32_t *g_1579 = &g_572;
static int32_t **g_1578 = &g_1579;
static uint32_t g_1616 = 0xADE16A96L;



static int8_t  func_1(void);
static uint64_t  func_6(uint32_t  p_7, union U3  p_8, int16_t  p_9);
static uint32_t  func_10(uint32_t  p_11, uint32_t  p_12);
static uint8_t  func_15(int16_t  p_16, int32_t  p_17);
static uint64_t  func_23(int32_t  p_24);
static union U3  func_34(int32_t * p_35, int32_t * p_36, int32_t * p_37, int32_t  p_38, union U2  p_39);
static int32_t * func_40(union U3  p_41, union U1  p_42, uint8_t  p_43, int32_t * p_44);
static union U2  func_45(union U2  p_46, int32_t  p_47, struct S0  p_48);




static int8_t  func_1(void)
{ 
    int16_t l_2[1][3];
    union U3 l_1421 = {0xEDE4L};
    int32_t l_1491 = (-4L);
    struct S0 l_1492[6][7][2] = {{{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}}},{{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}}},{{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}}},{{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}}},{{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}}},{{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}},{{18251,3618,4,-394,518,0x941FL,668,-37},{18251,3618,4,-394,518,0x941FL,668,-37}}}};
    int16_t l_1530 = 1L;
    union U2 l_1587[6] = {{0L},{0x9176D9D164BEBC4DLL},{0L},{0L},{0x9176D9D164BEBC4DLL},{0L}};
    const union U1 **l_1595 = &g_458;
    union U2 l_1618[5] = {{0L},{0L},{0L},{0L},{0L}};
    uint64_t ***l_1641 = &g_475;
    int64_t l_1642 = (-1L);
    int32_t *l_1643 = &g_1045;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_2[i][j] = 1L;
    }
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        uint32_t l_18 = 0x6986D6DBL;
        int32_t l_1420 = 0x200C7238L;
        int32_t l_1477 = 1L;
        union U2 ***l_1493[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_1514 = 0L;
        uint16_t *l_1527[5][7] = {{&g_555.f0,&g_94[4][2][3].f0,(void*)0,&g_555.f0,(void*)0,(void*)0,&g_555.f0},{&g_551[3].f0,&g_94[4][2][3].f0,&g_551[3].f0,&g_549.f0,&g_555.f0,&g_555.f0,&l_1421.f0},{(void*)0,&g_94[4][2][3].f0,&g_555.f0,&g_549.f0,&g_555.f0,&g_94[4][2][3].f0,(void*)0},{&g_94[4][2][3].f0,&g_240.f0,&l_1421.f0,&g_555.f0,&g_555.f0,&g_555.f0,&g_555.f0},{&g_94[4][2][3].f0,&g_555.f0,&g_555.f0,&g_94[4][2][3].f0,&g_551[3].f0,(void*)0,&g_549.f0}};
        const uint64_t *l_1537 = &g_1276[0][0];
        const uint64_t **l_1536 = &l_1537;
        const uint64_t ***l_1535[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1536,&l_1536,&l_1536,&l_1536,&l_1536,&l_1536,&l_1536},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        union U1 l_1542 = {4L};
        struct S0 *l_1554 = (void*)0;
        uint64_t * const **l_1562[1];
        int32_t l_1563 = 8L;
        int32_t l_1591[1][5];
        union U1 **l_1596 = (void*)0;
        int8_t *l_1605 = &g_246;
        int8_t *l_1608 = (void*)0;
        uint32_t l_1614 = 0xF517EBCEL;
        uint32_t l_1631[5][5] = {{0x18D6E9DBL,4294967290UL,4294967290UL,0x18D6E9DBL,4294967290UL},{0x18D6E9DBL,0x18D6E9DBL,4294967295UL,0x18D6E9DBL,0x18D6E9DBL},{4294967290UL,0x18D6E9DBL,4294967290UL,4294967290UL,0x18D6E9DBL},{0x18D6E9DBL,4294967290UL,4294967290UL,0x18D6E9DBL,4294967290UL},{0x18D6E9DBL,0x18D6E9DBL,4294967295UL,0x18D6E9DBL,0x18D6E9DBL}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1562[i] = &g_1534;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_1591[i][j] = 6L;
        }
    }
    return g_1307.f3;
}



static uint64_t  func_6(uint32_t  p_7, union U3  p_8, int16_t  p_9)
{ 
    uint8_t ***l_1423 = &g_309;
    uint8_t ****l_1422 = &l_1423;
    int8_t **l_1425 = (void*)0;
    int32_t l_1426 = 0xCABC245AL;
    const int32_t l_1441 = 5L;
    uint32_t l_1442[2];
    struct S0 l_1457[6] = {{13274,-2063,-10,247,314,0xF317L,3715,-32},{17234,18132,-3,20,262,7UL,7381,-13},{13274,-2063,-10,247,314,0xF317L,3715,-32},{13274,-2063,-10,247,314,0xF317L,3715,-32},{17234,18132,-3,20,262,7UL,7381,-13},{13274,-2063,-10,247,314,0xF317L,3715,-32}};
    int i;
    for (i = 0; i < 2; i++)
        l_1442[i] = 1UL;
lbl_1445:
    l_1442[0] &= (((&g_138 == (g_1424 = l_1422)) && (((l_1425 != &g_925) & ((l_1426 = l_1426) < (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u((p_9 >= (safe_mod_func_uint16_t_u_u(0x3CC4L, (*g_1053)))), (*g_476))), g_94[4][2][3].f0)), p_9)), 3UL)) , 65535UL) > (-3L)), 11)), (*g_1053))))) | l_1441)) , 1L);
    for (g_372 = (-19); (g_372 != (-8)); g_372++)
    { 
        int64_t l_1454 = 0xC1591FE04C7043E0LL;
        int32_t *l_1464 = &g_398;
        struct S0 *l_1465 = &g_808[1][2];
        struct S0 *l_1466 = &l_1457[5];
        union U1 l_1467 = {0L};
        const union U2 *l_1468 = &g_49[2][0][0];
        const union U2 **l_1469 = &l_1468;
        if (l_1426)
            goto lbl_1445;
        (*l_1469) = (((((safe_mul_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((--(**g_475)) ^ p_7), l_1454)), (safe_add_func_uint16_t_u_u(((l_1457[5] , ((*l_1464) = ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(((0L < l_1454) > ((((safe_lshift_func_uint8_t_u_u(l_1457[5].f0, 5)) >= (((p_8.f0 , l_1441) | g_808[2][0].f1) ^ 0x7CL)) & 4294967295UL) , l_1454)), (*g_1053))), 2)) != p_9))) <= 0x3427715DL), (*g_1053))))) || 0xD4DE997CL), 0x03L)) , l_1465) == l_1466) , l_1467) , l_1468);
    }
    return l_1457[5].f2;
}



static uint32_t  func_10(uint32_t  p_11, uint32_t  p_12)
{ 
    int16_t *l_905 = &g_663[1];
    int32_t l_906 = 0xDAA479AAL;
    const int8_t *l_926 = &g_246;
    int32_t l_967 = (-2L);
    int8_t l_987 = 0x53L;
    union U3 **l_998[5];
    int32_t l_1048[2][2][3] = {{{1L,1L,1L},{0x168DFB56L,0x168DFB56L,0x168DFB56L}},{{1L,1L,1L},{0x168DFB56L,0x168DFB56L,0x168DFB56L}}};
    const uint8_t *l_1085 = &g_1084;
    uint16_t l_1096 = 0x0FE7L;
    union U1 l_1127 = {0x5092406494609369LL};
    int32_t **l_1138 = (void*)0;
    union U3 l_1148 = {65527UL};
    union U2 ****l_1187[5][4][5] = {{{(void*)0,&g_931[1][0],&g_931[1][1],&g_931[0][1],&g_931[1][1]},{&g_931[0][1],(void*)0,(void*)0,&g_931[0][1],&g_931[0][1]},{&g_931[1][1],&g_931[0][4],&g_931[0][1],&g_931[0][1],&g_931[0][3]},{(void*)0,&g_931[0][1],&g_931[0][1],&g_931[0][1],(void*)0}},{{&g_931[0][1],(void*)0,&g_931[0][1],&g_931[0][1],&g_931[0][1]},{&g_931[1][5],(void*)0,&g_931[1][5],&g_931[0][1],&g_931[0][3]},{(void*)0,(void*)0,&g_931[1][4],&g_931[0][1],&g_931[1][5]},{&g_931[1][0],&g_931[0][1],&g_931[0][1],(void*)0,&g_931[1][3]}},{{&g_931[0][1],&g_931[0][1],&g_931[1][4],&g_931[1][5],&g_931[1][4]},{&g_931[0][1],&g_931[0][1],&g_931[1][5],&g_931[0][1],&g_931[0][1]},{&g_931[0][3],&g_931[0][1],&g_931[0][1],&g_931[1][1],&g_931[0][1]},{&g_931[1][2],(void*)0,&g_931[0][1],&g_931[1][4],&g_931[0][1]}},{{&g_931[1][5],&g_931[1][1],&g_931[0][3],&g_931[0][3],&g_931[1][1]},{(void*)0,&g_931[1][2],&g_931[0][1],&g_931[0][1],&g_931[0][1]},{(void*)0,&g_931[1][4],&g_931[0][1],&g_931[1][5],&g_931[1][1]},{(void*)0,&g_931[1][4],&g_931[1][0],&g_931[0][4],&g_931[1][5]}},{{(void*)0,&g_931[0][4],(void*)0,&g_931[0][4],(void*)0},{(void*)0,&g_931[0][1],&g_931[1][5],&g_931[1][0],&g_931[1][2]},{&g_931[1][5],&g_931[0][1],&g_931[0][1],&g_931[1][1],(void*)0},{&g_931[1][3],&g_931[0][1],(void*)0,&g_931[0][1],&g_931[1][2]}}};
    int8_t l_1261[3];
    int32_t *l_1267 = &g_572;
    uint16_t *l_1329 = &g_240.f0;
    uint16_t **l_1328 = &l_1329;
    uint8_t ***l_1414 = &g_309;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_998[i] = &g_554;
    for (i = 0; i < 3; i++)
        l_1261[i] = 0xBEL;
    if (((p_11 , ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((*l_905) = (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0x82526E63L, p_11)), (((safe_sub_func_int32_t_s_s(((~g_808[2][0].f5) , g_70), g_160.f0)) <= p_11) , p_11)))) > g_551[3].f0), l_906)), 0xDDL)) , p_12)) != g_65[0][0]))
    { 
        union U1 l_934 = {-1L};
        int16_t l_961 = 0xC1ABL;
        int32_t l_962 = 0xE89E1328L;
        int32_t l_963 = 1L;
        int32_t l_966 = 0x0E8E56A7L;
        int32_t *l_971[6][6][2] = {{{&l_966,&g_68},{(void*)0,&g_3},{&g_3,(void*)0},{&l_963,(void*)0},{&g_68,&l_963},{(void*)0,&g_398}},{{&l_906,(void*)0},{&g_68,(void*)0},{(void*)0,(void*)0},{&g_68,&l_966},{(void*)0,&l_966},{&g_68,(void*)0}},{{(void*)0,(void*)0},{&g_68,(void*)0},{&l_906,&g_398},{(void*)0,&l_963},{&g_68,(void*)0},{&l_963,(void*)0}},{{&g_3,&g_3},{(void*)0,&g_68},{&l_966,(void*)0},{&l_966,&l_906},{&g_68,&l_966},{(void*)0,&g_398}},{{(void*)0,&l_966},{&g_68,&l_906},{&l_966,(void*)0},{&l_966,&g_68},{(void*)0,&g_3},{&g_3,(void*)0}},{{&l_963,(void*)0},{&g_68,&l_963},{(void*)0,&g_398},{&l_906,(void*)0},{&g_68,(void*)0},{(void*)0,(void*)0}}};
        int32_t l_1002[4] = {7L,7L,7L,7L};
        struct S0 *l_1030[7];
        int8_t **l_1054 = &g_925;
        int64_t *l_1067[4];
        const uint8_t *l_1082 = &g_855;
        const union U2 l_1120 = {-2L};
        union U2 ****l_1121 = &g_931[0][0];
        const int32_t l_1146 = 0x2B18434EL;
        int32_t **l_1158 = (void*)0;
        int32_t **l_1159 = &g_217;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1030[i] = &g_83;
        for (i = 0; i < 4; i++)
            l_1067[i] = &g_983;
    }
    else
    { 
        union U2 l_1160[2][6][1] = {{{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}}},{{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}},{{-1L}}}};
        int32_t l_1172 = 1L;
        int32_t l_1208 = (-6L);
        uint32_t l_1209[3][7][4] = {{{4294967294UL,4294967287UL,0x4D0186F5L,4294967287UL},{4294967287UL,0x9D451E2FL,0x4D0186F5L,0x4D0186F5L},{4294967294UL,4294967294UL,4294967287UL,0x4D0186F5L},{0x05F18B0EL,0x9D451E2FL,0x05F18B0EL,4294967287UL},{0x05F18B0EL,4294967287UL,4294967287UL,0x05F18B0EL},{4294967294UL,4294967287UL,0x4D0186F5L,4294967287UL},{4294967287UL,0x9D451E2FL,0x4D0186F5L,0x4D0186F5L}},{{4294967294UL,4294967294UL,4294967287UL,0x4D0186F5L},{0x05F18B0EL,0x9D451E2FL,0x05F18B0EL,4294967287UL},{0x05F18B0EL,4294967287UL,4294967287UL,0x05F18B0EL},{4294967294UL,4294967287UL,0x4D0186F5L,4294967287UL},{4294967287UL,0x9D451E2FL,0x4D0186F5L,0x4D0186F5L},{4294967294UL,4294967294UL,4294967287UL,0x4D0186F5L},{0x05F18B0EL,0x9D451E2FL,0x05F18B0EL,4294967287UL}},{{0x05F18B0EL,4294967287UL,4294967287UL,0x05F18B0EL},{4294967294UL,4294967287UL,0x4D0186F5L,0x05F18B0EL},{0x05F18B0EL,4294967294UL,0x9D451E2FL,0x9D451E2FL},{4294967287UL,4294967287UL,0x05F18B0EL,0x9D451E2FL},{0x4D0186F5L,4294967294UL,0x4D0186F5L,0x05F18B0EL},{0x4D0186F5L,0x05F18B0EL,0x05F18B0EL,0x4D0186F5L},{4294967287UL,0x05F18B0EL,0x9D451E2FL,0x05F18B0EL}}};
        union U3 l_1260 = {0x583AL};
        int32_t l_1280[1];
        uint16_t l_1295 = 5UL;
        uint8_t ***l_1298 = &g_309;
        uint8_t ****l_1297 = &l_1298;
        uint8_t *****l_1296[5] = {&l_1297,&l_1297,&l_1297,&l_1297,&l_1297};
        union U2 **l_1310 = &g_159;
        const union U1 *l_1385 = &g_95[0];
        uint32_t l_1417[7];
        int32_t **l_1418 = &g_217;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1280[i] = 0L;
        for (i = 0; i < 7; i++)
            l_1417[i] = 0x39637146L;
lbl_1399:
        for (p_11 = 0; (p_11 <= 2); p_11 += 1)
        { 
            uint8_t *l_1169 = &g_70;
            uint16_t *l_1170[6][4] = {{&l_1148.f0,&l_1148.f0,&g_549.f0,&g_549.f0},{&g_551[3].f0,&g_551[3].f0,&l_1148.f0,&g_549.f0},{&g_555.f0,&l_1148.f0,&g_555.f0,&l_1148.f0},{&g_555.f0,&l_1148.f0,&l_1148.f0,&g_555.f0},{&g_551[3].f0,&l_1148.f0,&g_549.f0,&l_1148.f0},{&l_1148.f0,&l_1148.f0,&g_549.f0,&g_549.f0}};
            int32_t l_1171[2][6][4] = {{{0xA18205CEL,1L,3L,(-1L)},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),(-1L)},{1L,0xA18205CEL,3L,0xA18205CEL},{0xA18205CEL,(-1L),1L,0xA18205CEL},{1L,0xA18205CEL,(-1L),(-1L)}},{{(-1L),(-1L),3L,1L},{(-1L),(-1L),(-1L),(-1L)},{1L,1L,1L,(-1L)},{0xA18205CEL,1L,3L,(-1L)},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),(-1L)}}};
            struct S0 l_1173 = {13072,23763,13,-960,238,0x18A8L,4627,-39};
            int32_t *l_1174 = &g_68;
            int16_t l_1184 = (-1L);
            int8_t l_1207[3][2];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1207[i][j] = (-1L);
            }
            l_1171[1][2][2] ^= (((l_1160[0][2][0] , p_12) || (*g_1053)) , 0x102E440FL);
            (*l_1174) = g_853;
            if (((safe_sub_func_int32_t_s_s(((*l_1174) = (safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s(1L)), (safe_rshift_func_uint8_t_u_s(l_1184, 0)))), (safe_add_func_uint32_t_u_u((18446744073709551615UL || l_1160[0][0][0].f0), (0x935E8DCCF68C2F72LL ^ p_11)))))), (((p_11 != 0x2AA457CDL) != l_1172) < 4L))) , 0x36804F92L))
            { 
                uint64_t l_1204 = 0xC2ECC33D069B260DLL;
                int32_t l_1205[5][5] = {{0x717E9B7EL,0x717E9B7EL,0x8735035BL,0x717E9B7EL,0x717E9B7EL},{0x27EEE4F5L,3L,0x27EEE4F5L,0x27EEE4F5L,3L},{0x717E9B7EL,0xA5F69863L,0xA5F69863L,0x717E9B7EL,0xA5F69863L},{3L,3L,(-8L),3L,3L},{0xA5F69863L,0x717E9B7EL,0xA5F69863L,0xA5F69863L,0x717E9B7EL}};
                int32_t *l_1206[2][2][1] = {{{&l_1171[0][3][1]},{&l_1205[3][2]}},{{&l_1171[0][3][1]},{&l_1205[3][2]}}};
                union U1 l_1215 = {-1L};
                int8_t *l_1225 = &g_246;
                int32_t **l_1226 = &l_1206[1][0][0];
                int i, j, k;
                for (g_538 = 0; (g_538 <= 2); g_538 += 1)
                { 
                    union U2 *****l_1188 = &l_1187[1][0][1];
                    struct S0 l_1197 = {22959,-28006,-4,87,452,65535UL,4820,19};
                    (*l_1188) = l_1187[2][0][4];
                    if (p_11)
                        break;
                    l_1204 = (safe_add_func_int32_t_s_s(((*l_1174) &= ((safe_add_func_int16_t_s_s(((*g_1053) &= p_11), p_12)) <= (safe_mod_func_uint16_t_u_u((0x17L != (l_1197 , ((safe_add_func_int16_t_s_s(l_1197.f3, 65534UL)) > (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_12, l_1197.f1)), g_549.f0))))), l_1197.f0)))), g_398));
                }
                ++l_1209[2][3][3];
                for (g_240.f0 = 0; (g_240.f0 <= 4); g_240.f0 += 1)
                { 
                    uint16_t l_1212 = 65529UL;
                    if (l_1209[2][3][3])
                        break;
                    --l_1212;
                    g_217 = &g_503;
                    return g_160.f1;
                }
                (*l_1226) = func_40((*g_554), l_1215, ((l_1173.f1 &= (!(safe_lshift_func_int8_t_s_s(((*l_1225) = (((g_808[2][0].f5 < (safe_div_func_uint16_t_u_u((*l_1174), ((safe_mod_func_uint16_t_u_u((((*l_1169) ^= l_1209[2][3][3]) && (!((((*g_1053) = (p_11 || (!0UL))) >= g_613) != g_1084))), 0xBB4EL)) || g_498)))) || p_12) && p_11)), 5)))) <= p_11), &l_1205[3][2]);
            }
            else
            { 
                uint32_t l_1230 = 18446744073709551607UL;
                for (l_1127.f1 = 4; (l_1127.f1 >= 0); l_1127.f1 -= 1)
                { 
                    union U1 l_1229 = {0L};
                    l_1230 &= (safe_add_func_int64_t_s_s(0x11B3AA42E8B171B5LL, (l_1229 , ((*g_1053) != p_11))));
                    if (l_1230)
                        break;
                    (*l_1174) = l_1160[0][0][0].f0;
                    if (p_12)
                        continue;
                }
                for (l_1148.f0 = 0; (l_1148.f0 <= 4); l_1148.f0 += 1)
                { 
                    int32_t *l_1231 = (void*)0;
                    int32_t *l_1232[2][6] = {{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,&g_68,&g_68}};
                    uint16_t l_1233 = 0UL;
                    int i, j;
                    --l_1233;
                    (*l_1174) &= ((((*g_1053) = l_1160[0][0][0].f1) | (&l_1208 != ((l_1173 , (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((l_1127 , ((!(-7L)) == ((void*)0 != &g_932))), 0x9EL)), p_11))) , (void*)0))) < 1L);
                }
            }
            for (g_372 = 0; (g_372 <= 2); g_372 += 1)
            { 
                int16_t l_1255 = 0L;
                int32_t *l_1269[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1269[i] = &g_398;
                if ((safe_rshift_func_int16_t_s_u(((*l_905) = (-1L)), 0)))
                { 
                    const int8_t l_1253 = (-1L);
                    uint32_t *l_1254 = &g_613;
                    int32_t l_1262 = 0L;
                    l_1255 &= (+((0x0F968B0AL == (safe_sub_func_int16_t_s_s((((*l_1174) , (void*)0) != (void*)0), ((~(*g_1053)) | 0x928AL)))) <= ((*l_1254) = (safe_lshift_func_uint16_t_u_s(((((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(l_1253, (*l_1174))), 0x39C7EB4856A6D728LL)) , 1UL) , (void*)0) != (void*)0), 3)))));
                    l_1262 = ((safe_rshift_func_uint8_t_u_s((g_398 >= (p_11 > (0x48L != 0x69L))), 4)) < ((safe_mul_func_int32_t_s_s(p_11, (((((*l_1174) & (((l_1260 , g_808[2][0].f0) <= (*g_1053)) , p_11)) , (void*)0) != &g_217) <= p_11))) || l_1261[0]));
                }
                else
                { 
                    int32_t l_1263 = 0xC6901D9FL;
                    l_1263 = l_1255;
                    if (l_1260.f0)
                        continue;
                }
                for (l_1208 = 0; (l_1208 <= 2); l_1208 += 1)
                { 
                    if (p_11)
                        break;
                    (*l_1174) = (!(safe_rshift_func_int16_t_s_s((p_11 < (&g_1046 == l_1267)), 4)));
                }
                if (g_210)
                    continue;
                (*l_1174) |= (g_808[2][1] , g_1084);
                for (l_1260.f0 = 0; (l_1260.f0 <= 2); l_1260.f0 += 1)
                { 
                    struct S0 l_1268 = {13020,32664,-15,68,568,5UL,2526,37};
                    union U1 l_1277 = {0x15598324D6604ABDLL};
                    int32_t *l_1278 = &l_967;
                    int32_t **l_1279 = &l_1269[0];
                    (*l_1279) = func_40((l_1268 , (*g_548)), l_1277, l_1268.f3, l_1278);
                    ++g_1281[0];
                }
            }
        }
lbl_1419:
        for (g_398 = 0; (g_398 <= 2); g_398 = safe_add_func_uint64_t_u_u(g_398, 6))
        { 
            uint16_t l_1294 = 0x79A3L;
            uint32_t l_1299 = 0x57F87875L;
            int32_t l_1316 = 0x44A7F4DDL;
            uint64_t **l_1351 = &g_476;
            union U2 *l_1360 = (void*)0;
            uint8_t *** const *l_1377 = &l_1298;
            uint8_t *** const **l_1376 = &l_1377;
            int32_t l_1392 = 3L;
            int32_t l_1393[1][2][2];
            uint64_t l_1400 = 0xF59ACC24C06E1B1FLL;
            int32_t *l_1403 = (void*)0;
            int32_t *l_1404 = &l_1280[0];
            union U2 l_1413[2][4][7] = {{{{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL}},{{3L},{3L},{3L},{3L},{3L},{3L},{3L}},{{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL}},{{3L},{3L},{3L},{3L},{3L},{3L},{3L}}},{{{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL}},{{3L},{3L},{3L},{3L},{3L},{3L},{3L}},{{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL},{0x689F3329417D3493LL}},{{3L},{3L},{3L},{3L},{3L},{3L},{3L}}}};
            struct S0 l_1415 = {7884,-25014,-11,-680,682,65531UL,1247,0};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1393[i][j][k] = 1L;
                }
            }
            if (((safe_div_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((*g_1053), ((*l_905) &= (-6L)))) >= (((l_1172 ^= ((((!((safe_add_func_uint32_t_u_u((0x95L == (l_1294 = (safe_unary_minus_func_uint64_t_u(l_1280[0])))), (l_1295 <= ((l_1296[2] == (void*)0) != l_1299)))) || g_734[0])) >= 4L) || (*g_476)) , (-1L))) || p_11) | p_11)) < 0x45E4L), l_1299)) & p_11))
            { 
                uint64_t l_1300 = 18446744073709551608UL;
                int32_t * const *l_1315 = &l_1267;
                uint16_t **l_1331[6] = {&l_1329,&l_1329,&l_1329,&l_1329,&l_1329,&l_1329};
                int32_t l_1333 = 0xE0835611L;
                struct S0 **l_1344 = &g_1306;
                uint64_t **l_1354[4];
                int32_t l_1359 = (-1L);
                int i;
                for (i = 0; i < 4; i++)
                    l_1354[i] = (void*)0;
                if (l_1300)
                { 
                    const int32_t *l_1301 = &l_1208;
                    const int32_t **l_1302 = (void*)0;
                    const int32_t **l_1303 = &l_1301;
                    struct S0 *l_1305 = &g_808[0][5];
                    struct S0 **l_1304[3][1];
                    int32_t l_1308 = (-5L);
                    union U2 **l_1309 = &g_159;
                    int32_t *l_1311[3][5] = {{&l_1208,&l_1208,&g_398,&l_1048[1][0][1],&l_967},{&g_27,&l_1280[0],&l_1280[0],&g_27,&l_1208},{&g_27,&l_1048[1][0][1],(void*)0,(void*)0,&l_1048[1][0][1]}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1304[i][j] = &l_1305;
                    }
                    (*l_1303) = l_1301;
                    g_1306 = &g_808[2][0];
                    l_1308 ^= (**l_1303);
                    g_808[2][0].f2 = ((l_1310 = l_1309) == (void*)0);
                }
                else
                { 
                    int32_t l_1312 = 0x9A4655CCL;
                    return l_1312;
                }
                if (p_11)
                { 
                    int32_t *l_1317 = &l_1280[0];
                    uint32_t l_1327 = 4UL;
                    uint16_t ***l_1330 = &l_1328;
                    (*l_1317) = (l_1316 &= (safe_mul_func_int8_t_s_s(l_1294, ((l_1315 != (void*)0) > 8UL))));
                    l_1316 |= ((safe_unary_minus_func_int8_t_s(((*g_548) , (safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(0x87L, 0x03L)) > ((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(l_1160[0][0][0].f1, p_12)) , 0x6118L), ((*l_905) |= (p_12 & 0x4DB3L)))) ^ l_1327)), g_808[2][0].f3))))) | 5UL);
                    g_1332 = (l_1331[0] = ((*l_1330) = l_1328));
                }
                else
                { 
                    const struct S0 *l_1341 = &g_83;
                    const struct S0 **l_1340 = &l_1341;
                    const struct S0 ***l_1342 = (void*)0;
                    const struct S0 ***l_1343 = &l_1340;
                    struct S0 ***l_1345[7] = {&l_1344,&l_1344,&l_1344,&l_1344,&l_1344,&l_1344,&l_1344};
                    uint64_t ***l_1352 = (void*)0;
                    uint64_t ***l_1353 = &g_475;
                    uint64_t ***l_1355 = &l_1351;
                    int64_t *l_1356 = (void*)0;
                    int64_t *l_1357 = (void*)0;
                    int64_t *l_1358 = &g_983;
                    int i;
                    l_1333 |= p_11;
                    if (p_11)
                        break;
                    l_906 = (((safe_lshift_func_int8_t_s_s(l_1160[0][0][0].f1, (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((((*l_1343) = l_1340) == (g_1346[0] = l_1344)), (((safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s((-6L), 0x04L)), (((((*l_1358) = (((*l_1355) = (l_1354[2] = ((*l_1353) = l_1351))) == (void*)0)) ^ (*g_476)) != l_1359) ^ 2UL))) && (*g_1053)) < p_12))) >= g_808[2][0].f1), 0L)))) , l_1316) ^ 0UL);
                }
            }
            else
            { 
                uint8_t l_1378[2][2] = {{0x0CL,0x0CL},{0x0CL,0x0CL}};
                int32_t *l_1386 = &l_1048[1][0][1];
                int32_t *l_1387 = &l_1280[0];
                int32_t *l_1388 = (void*)0;
                int32_t *l_1389 = &g_27;
                int32_t *l_1390 = (void*)0;
                int32_t *l_1391[3][5][7] = {{{&l_1280[0],(void*)0,(void*)0,&l_1280[0],&l_1280[0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1280[0],&l_1280[0],(void*)0,(void*)0,&l_1280[0],&l_1280[0],(void*)0},{&l_1280[0],(void*)0,&l_1280[0],(void*)0,&l_1280[0],(void*)0,&l_1280[0]},{&l_1280[0],(void*)0,(void*)0,&l_1280[0],&l_1280[0],(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1280[0],&l_1280[0],(void*)0,(void*)0,&l_1280[0],&l_1280[0],(void*)0},{&l_1280[0],(void*)0,&l_1280[0],(void*)0,&l_1280[0],(void*)0,&l_1280[0]},{&l_1280[0],(void*)0,(void*)0,&l_1280[0],&l_1280[0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_1280[0],&l_1280[0],(void*)0,(void*)0,&l_1280[0],&l_1280[0],(void*)0},{&l_1280[0],(void*)0,&l_1280[0],(void*)0,&l_1280[0],(void*)0,&l_1280[0]},{&l_1280[0],(void*)0,(void*)0,&l_1280[0],&l_1280[0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1280[0],&l_1280[0],(void*)0,(void*)0,&l_1280[0],&l_1280[0],(void*)0}}};
                uint32_t l_1394 = 0x524FB0B2L;
                int i, j, k;
                for (g_372 = 0; (g_372 <= 3); g_372 += 1)
                { 
                    uint32_t l_1361 = 18446744073709551606UL;
                    (*l_1310) = l_1360;
                    l_1361 = p_12;
                }
                for (g_505 = 0; (g_505 <= (-26)); g_505 = safe_sub_func_uint64_t_u_u(g_505, 3))
                { 
                    uint8_t *****l_1375 = &l_1297;
                    int32_t *l_1379 = (void*)0;
                    int32_t *l_1380 = &l_1048[1][0][2];
                    const union U2 l_1381 = {-5L};
                    (*l_1380) ^= (safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s(((~(safe_lshift_func_int8_t_s_u(p_11, (safe_add_func_uint32_t_u_u(((*g_1053) <= (safe_add_func_uint32_t_u_u(p_11, ((*g_1053) && ((l_1375 != l_1376) & l_1378[0][1]))))), 0xFACE977FL))))) , 0x1EL), p_11)) >= (-6L)), p_11));
                    g_1382 = (l_1381 , &g_240);
                }
                for (l_1260.f0 = 0; (l_1260.f0 != 34); ++l_1260.f0)
                { 
                    g_458 = l_1385;
                }
                ++l_1394;
                for (g_503 = 0; (g_503 <= 16); g_503++)
                { 
                    return l_1172;
                }
            }
            if (g_503)
                goto lbl_1399;
            ++l_1400;
            (*l_1404) = p_11;
            (*l_1404) = (g_83.f2 = (safe_div_func_uint16_t_u_u((--(*l_1329)), (0xD38AL & (((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(((l_1413[1][2][5] , g_808[2][0].f4) != (*l_1404)), 1L)), p_11)) & p_11) , l_1417[4])))));
        }
        (*l_1418) = &l_1280[0];
        if (g_503)
            goto lbl_1419;
    }
    return p_11;
}



static uint8_t  func_15(int16_t  p_16, int32_t  p_17)
{ 
    int16_t l_25 = 0x2C02L;
    const union U3 l_739 = {0UL};
    int32_t *l_745 = &g_572;
    int32_t **l_744 = &l_745;
    int32_t *l_746 = &g_572;
    int8_t *l_747 = (void*)0;
    int32_t l_748 = 4L;
    int32_t l_749 = 0x4CFE688BL;
    uint8_t **l_771[1][7] = {{&g_310,&g_310,&g_310,&g_310,&g_310,&g_310,&g_310}};
    int16_t *l_773 = &g_663[0];
    const uint8_t ****l_802 = &g_138;
    const uint8_t *****l_801[7] = {&l_802,&l_802,&l_802,&l_802,&l_802,&l_802,&l_802};
    int8_t l_804[3];
    struct S0 *l_807 = &g_808[2][0];
    union U1 l_822 = {2L};
    int32_t *l_826 = &g_27;
    int32_t l_870[3][6] = {{0x78A7AB89L,0x78A7AB89L,0x78A7AB89L,0x78A7AB89L,0x78A7AB89L,0x78A7AB89L},{0x78A7AB89L,0x78A7AB89L,0x78A7AB89L,0x78A7AB89L,0x78A7AB89L,0x78A7AB89L},{0x78A7AB89L,0x78A7AB89L,0x78A7AB89L,0x78A7AB89L,0x78A7AB89L,0x78A7AB89L}};
    int32_t **l_888 = &g_217;
    int32_t **l_889 = &l_826;
    uint16_t *l_890 = (void*)0;
    uint16_t *l_891 = &g_549.f0;
    uint16_t *l_892[1];
    int32_t *l_893 = &l_870[2][5];
    int i, j;
    for (i = 0; i < 3; i++)
        l_804[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_892[i] = &g_555.f0;
    l_749 = (safe_div_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(func_23(l_25), (safe_mul_func_int16_t_s_s(((l_748 = ((l_739 , ((safe_mod_func_uint16_t_u_u((((0xC8L && (safe_lshift_func_uint16_t_u_s((l_739.f0 && (g_398 | ((((*l_744) = (void*)0) == l_746) < l_25))), 11))) || l_25) >= 0x1910724C6E1C4F50LL), p_17)) == 18446744073709551615UL)) , (-2L))) < l_25), l_739.f0)))), g_63));
    for (l_748 = 0; (l_748 <= 0); l_748 += 1)
    { 
        const int8_t l_774[7] = {0xBBL,0xBBL,0xBBL,0xBBL,0xBBL,0xBBL,0xBBL};
        int32_t l_775 = 0x6D792E74L;
        uint64_t l_810 = 0x0AFA902E0EAB3260LL;
        const uint8_t *l_852 = &g_853;
        const uint8_t *l_854 = &g_855;
        int32_t l_873 = 0xF4C32948L;
        int i;
        for (g_398 = 0; (g_398 <= 0); g_398 += 1)
        { 
            const int32_t *l_764 = &g_572;
            const int32_t **l_763 = &l_764;
            union U1 *l_772 = &g_95[0];
            struct S0 l_798 = {19857,-22673,-8,518,218,7UL,3391,31};
            const uint8_t *****l_803 = &l_802;
            int32_t *l_805 = &g_68;
            int i;
            for (g_572 = 0; (g_572 <= 2); g_572 += 1)
            { 
                union U1 l_750[2] = {{0x9824479375C1B1A1LL},{0x9824479375C1B1A1LL}};
                int32_t *l_776 = &g_503;
                int32_t *l_777 = &g_27;
                int i;
                (*l_777) = ((*l_776) = (l_750[0] , (g_734[g_398] || (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_775 = (safe_add_func_uint16_t_u_u(g_734[g_398], (safe_rshift_func_uint8_t_u_u((((l_749 = ((**g_475) = ((safe_mul_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((void*)0 == l_763), (safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((((l_771[0][5] == ((l_772 != (void*)0) , (void*)0)) , &g_663[5]) == l_773), 10)), l_750[0].f0)), p_16)))) <= l_739.f0), l_750[0].f2)) ^ l_774[4]))) && g_83.f7) < p_17), 1))))), g_83.f3)), p_17)))));
                return l_748;
            }
            (*l_805) ^= (safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((g_734[l_748] , 0xF2L), 1)), 13)) >= (((safe_unary_minus_func_int8_t_s((g_246 = (safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s(((g_734[l_748] ^ ((((safe_add_func_int64_t_s_s(g_83.f4, (!((safe_rshift_func_uint16_t_u_u(((l_798 , l_25) != (safe_div_func_int16_t_s_s(((l_803 = l_801[1]) == &l_802), p_16))), p_17)) | 1L)))) < g_210) || p_16) == l_804[1])) < g_734[l_748]), p_17)) | 0x6CL), (**g_475)))))) < l_804[1]) && 251UL)), g_95[0].f0)), 251UL)), p_17));
        }
        for (g_246 = 0; (g_246 >= 0); g_246 -= 1)
        { 
            struct S0 **l_806 = (void*)0;
            int32_t *l_809[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            l_807 = &g_83;
            l_810--;
        }
    }
    (*l_893) = ((g_551[3].f0 = ((*l_891) = (((*l_889) = ((*l_888) = func_40(l_739, l_822, (((g_49[0][0][0].f1 = g_808[2][0].f6) || (*l_826)) != (*g_476)), &l_748))) != (void*)0))) >= 0x9427L);
    return p_16;
}



static uint64_t  func_23(int32_t  p_24)
{ 
    int32_t *l_26 = &g_27;
    int32_t l_55 = 1L;
    union U2 l_124 = {0x074B171F3D14E576LL};
    int64_t l_411 = 1L;
    uint32_t l_445 = 0x62AA4925L;
    struct S0 l_456 = {11201,13101,14,-137,239,0xAEF2L,8037,10};
    int8_t *l_479 = &g_95[0].f1;
    union U2 **l_486 = (void*)0;
    union U2 ***l_485 = &l_486;
    uint8_t **l_559 = &g_310;
    union U3 *l_561[1][4] = {{&g_551[3],&g_551[3],&g_551[3],&g_551[3]}};
    uint64_t * const l_593 = &g_65[1][0];
    union U1 *l_598 = &g_95[4];
    union U1 **l_597 = &l_598;
    uint8_t l_636 = 0x2DL;
    int32_t l_731 = (-2L);
    int32_t l_732 = 0xC22BCCBCL;
    int32_t l_733[4][6];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
            l_733[i][j] = 0L;
    }
    (*l_26) = (-1L);
    (*l_26) &= (safe_div_func_uint64_t_u_u((p_24 , (&g_27 == (void*)0)), (safe_rshift_func_int16_t_s_u(p_24, 3))));
    for (g_27 = 0; (g_27 > (-18)); g_27--)
    { 
        const uint64_t l_61 = 18446744073709551611UL;
        int16_t *l_62 = &g_63;
        uint64_t *l_64 = &g_65[1][0];
        struct S0 l_66 = {2489,11910,10,-44,419,0xBD0DL,1959,-29};
        int32_t *l_123 = (void*)0;
        int32_t *l_406 = &g_398;
        uint8_t ***l_438 = &g_309;
        uint8_t ****l_437[1];
        uint8_t *****l_436 = &l_437[0];
        int32_t l_444 = 1L;
        union U1 *l_460 = (void*)0;
        union U1 **l_459 = &l_460;
        int8_t *l_480 = &g_95[0].f1;
        const union U2 ***l_488 = &g_334;
        int32_t l_497 = 0xE9D23C24L;
        union U3 *l_550 = &g_551[3];
        const uint64_t *l_591[7] = {&g_592,&g_592,&g_592,&g_592,&g_592,&g_592,&g_592};
        union U2 l_611 = {0xCD7DCBCBD4FF2478LL};
        uint32_t l_679[6] = {0xDDF210D7L,0xDDF210D7L,0xDDF210D7L,0xDDF210D7L,0xDDF210D7L,0xDDF210D7L};
        int i;
        for (i = 0; i < 1; i++)
            l_437[i] = &l_438;
    }
    p_24 &= 0x6A3AD2E9L;
    (*l_26) ^= 0L;
    return p_24;
}



static union U3  func_34(int32_t * p_35, int32_t * p_36, int32_t * p_37, int32_t  p_38, union U2  p_39)
{ 
    int32_t *l_126 = (void*)0;
    int32_t **l_125 = &l_126;
    uint8_t *l_135[5] = {&g_70,&g_70,&g_70,&g_70,&g_70};
    uint8_t **l_134 = &l_135[1];
    uint8_t ***l_133 = &l_134;
    uint8_t ****l_136 = (void*)0;
    uint8_t ****l_137 = &l_133;
    int16_t *l_140 = &g_63;
    union U3 l_141 = {0xDE94L};
    int32_t l_167[5][1][2] = {{{(-2L),(-2L)}},{{(-2L),(-2L)}},{{(-2L),(-2L)}},{{(-2L),(-2L)}},{{(-2L),(-2L)}}};
    union U1 l_175 = {0L};
    uint8_t *l_215 = &g_70;
    union U3 *l_239 = &g_240;
    int32_t *l_292 = &l_167[3][0][0];
    int32_t l_295 = 0L;
    union U2 l_302 = {-5L};
    int64_t *l_303 = &l_175.f0;
    int8_t *l_304 = &g_95[0].f1;
    const union U2 **l_333 = (void*)0;
    struct S0 l_341[3] = {{4390,-15575,14,-532,268,0x98E0L,4934,34},{4390,-15575,14,-532,268,0x98E0L,4934,34},{4390,-15575,14,-532,268,0x98E0L,4934,34}};
    uint16_t l_403 = 0x3FEDL;
    int i, j, k;
    (*l_125) = p_37;
    if (((safe_div_func_uint64_t_u_u(p_39.f1, (p_39.f1 , (safe_lshift_func_uint8_t_u_s(g_63, (safe_mul_func_int16_t_s_s(0xFC09L, (((((p_39.f1 , ((*l_137) = l_133)) != g_138) >= g_83.f5) != g_95[0].f0) >= (*l_126))))))))) != g_49[0][0][0].f1))
    { 
        uint64_t l_139[1];
        int32_t l_157 = 0x39F1547CL;
        uint16_t *l_165 = (void*)0;
        uint16_t *l_166[6][6] = {{&l_141.f0,(void*)0,&l_141.f0,(void*)0,&l_141.f0,&l_141.f0},{(void*)0,&l_141.f0,&l_141.f0,&l_141.f0,&l_141.f0,&l_141.f0},{&l_141.f0,&l_141.f0,&l_141.f0,&l_141.f0,(void*)0,&l_141.f0},{&l_141.f0,(void*)0,&l_141.f0,(void*)0,&l_141.f0,&l_141.f0},{(void*)0,&l_141.f0,&l_141.f0,&l_141.f0,&l_141.f0,&l_141.f0},{&l_141.f0,&l_141.f0,&l_141.f0,&l_141.f0,(void*)0,&l_141.f0}};
        int32_t l_168 = 0x0A4B5518L;
        int32_t l_169 = 2L;
        int32_t l_170[3][7] = {{0x73A16DF6L,0x73A16DF6L,0x73A16DF6L,0x73A16DF6L,0x73A16DF6L,0x73A16DF6L,0x73A16DF6L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x73A16DF6L,0x73A16DF6L,0x73A16DF6L,0x73A16DF6L,0x73A16DF6L,0x73A16DF6L,0x73A16DF6L}};
        int32_t l_171 = 0xC378F7CFL;
        int8_t *l_178[5];
        int i, j;
        for (i = 0; i < 1; i++)
            l_139[i] = 1UL;
        for (i = 0; i < 5; i++)
            l_178[i] = &g_95[0].f1;
        (*l_126) = ((((*p_35) | g_83.f4) < ((l_139[0] , (p_39.f0 ^ (((g_83 , l_140) != (l_141 , (void*)0)) || 0x17L))) <= 0L)) , l_139[0]);
lbl_158:
        for (g_63 = 0; (g_63 > 27); ++g_63)
        { 
            uint16_t *l_152 = &l_141.f0;
            uint8_t **l_153 = &l_135[3];
            l_157 ^= (safe_rshift_func_int8_t_s_u((((safe_mul_func_uint8_t_u_u((((l_139[0] , (((safe_lshift_func_int16_t_s_s(p_38, ((safe_rshift_func_uint16_t_u_s(((*l_152) = g_3), ((**l_125) = ((p_39 , l_153) == (**l_137))))) || (safe_mod_func_uint8_t_u_u(0x27L, 0x14L))))) >= p_39.f0) <= p_38)) , (-3L)) == g_156), 0xCEL)) > l_139[0]) || l_139[0]), p_39.f0));
            if (g_83.f2)
                goto lbl_158;
        }
        g_159 = &g_49[2][0][0];
        g_83.f2 ^= (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((*l_126) || (++g_94[4][2][3].f0)) >= (g_83.f3 ^ (!(0x899DL ^ (l_175 , 2L))))), (g_95[0].f1 |= ((safe_div_func_uint16_t_u_u(0x4881L, p_39.f1)) | p_39.f0)))) > g_65[1][0]), 7));
    }
    else
    { 
        uint8_t *l_189 = &g_70;
        struct S0 l_212 = {18768,-7438,13,543,169,0xE50AL,6880,-8};
        union U3 **l_247 = &l_239;
        int32_t l_254 = 0x2A552129L;
        uint32_t l_282[5][2] = {{0UL,0UL},{8UL,0UL},{0UL,8UL},{0UL,0UL},{8UL,0UL}};
        int i, j;
        for (g_160.f1 = 0; (g_160.f1 <= 1); g_160.f1 += 1)
        { 
            const uint32_t l_181 = 4294967286UL;
            uint16_t *l_188 = &g_94[4][2][3].f0;
            int32_t *l_190 = &l_167[1][0][0];
            const uint8_t ****l_242 = &g_138;
            const uint8_t *****l_241 = &l_242;
            (*l_190) = ((((safe_sub_func_uint32_t_u_u(((l_181 , g_27) ^ (safe_add_func_int64_t_s_s((!p_38), g_156))), (((((**l_125) = (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint8_t_u_u(((((*l_188) = g_95[0].f2) > ((void*)0 != l_189)) & p_38), 0xBBL))))) <= l_181) , 0UL) != 0x4AA7FB4E0D6F0381LL))) , (void*)0) == g_138) & l_181);
            for (g_70 = 0; (g_70 <= 1); g_70 += 1)
            { 
                uint32_t *l_202 = &g_49[0][0][0].f1;
                int32_t l_207 = 0x6C09E53FL;
                int32_t l_208 = 3L;
                uint32_t *l_209 = &g_210;
                const uint16_t *l_237 = &g_94[4][2][3].f0;
                int i, j;
            }
            if ((*p_37))
                break;
            (*l_241) = &g_138;
            if (l_212.f6)
                continue;
            for (l_175.f1 = 1; (l_175.f1 >= 0); l_175.f1 -= 1)
            { 
                uint16_t l_243 = 0x07CDL;
                union U1 l_244 = {0x3234534E8C1A8F93LL};
                int8_t *l_245 = &g_246;
                p_35 = (((((0x24L <= ((*l_245) |= (((((g_94[0][4][4] , (((l_243 , (0x001798D4120DA18CLL < 1UL)) , func_40(g_94[4][2][3], l_244, l_244.f2, (*l_125))) != (void*)0)) == p_39.f0) > (*p_37)) && p_38) | 0UL))) , g_95[0].f0) || 0xA3D8E1EF68BC1FA4LL) & 0x6DAB7E20L) , (void*)0);
                return g_94[0][3][4];
            }
        }
        (*l_247) = &l_141;
        (*p_37) = ((g_94[0][0][0] , ((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s(((*l_126) > l_254), 3)) & (safe_div_func_uint8_t_u_u(((((((safe_div_func_uint32_t_u_u(((p_39.f1 <= (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(p_39.f0, (safe_div_func_uint32_t_u_u((g_95[2] , p_39.f1), g_94[4][2][3].f0)))), g_3)), l_212.f1))) , g_3), 0x8D5DCE31L)) < p_38) , g_95[0]) , g_94[4][2][3].f0) <= p_38) || 0x0DL), p_38))), (**l_125))) == 0x7FCCDD1039E3DCDELL) , 0xACF7L), 0)) , p_39.f0)) || (*l_126));
        for (g_70 = 0; (g_70 != 12); g_70 = safe_add_func_int16_t_s_s(g_70, 1))
        { 
            int32_t l_275 = 0L;
            uint32_t l_280 = 0UL;
            union U3 **l_281 = (void*)0;
            int8_t *l_287 = &g_246;
            for (g_68 = 26; (g_68 >= (-21)); g_68 = safe_sub_func_uint64_t_u_u(g_68, 7))
            { 
                int8_t **l_288 = &l_287;
                int32_t *l_289 = &l_167[4][0][0];
                for (p_38 = (-24); (p_38 >= (-15)); p_38 = safe_add_func_int16_t_s_s(p_38, 2))
                { 
                    int32_t *l_274[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_274[i] = &l_167[1][0][1];
                    g_83.f2 = (safe_unary_minus_func_int16_t_s(p_39.f0));
                    l_275 ^= (*p_37);
                    l_282[1][0] = (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((*l_140) = p_39.f0), l_280)), ((*l_126) || (l_281 == (void*)0))));
                }
                (*l_289) = (safe_rshift_func_int16_t_s_s(g_246, (safe_div_func_uint8_t_u_u((((*l_288) = l_287) != l_189), g_95[0].f2))));
            }
        }
    }
    if (((p_38 ^ ((*l_304) = ((((safe_sub_func_int32_t_s_s((*l_126), ((*l_292) = 0x84B3820CL))) || (safe_mod_func_uint16_t_u_u(p_38, l_295))) != (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(g_246, (((((((*l_303) = (safe_rshift_func_uint16_t_u_s(((l_302 , p_39.f0) == g_83.f2), (*l_126)))) <= p_39.f0) || p_39.f0) & 4L) & p_39.f1) > (*l_126)))) ^ (*l_126)), (-6L)))) < (**l_125)))) && 0UL))
    { 
        uint8_t l_305 = 0x1AL;
        int32_t l_306 = 0xBFF0262FL;
        union U3 l_307 = {0UL};
        uint8_t **l_308[6][1];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_308[i][j] = &l_135[1];
        }
        l_306 |= l_305;
        if ((l_175 , (*l_292)))
        { 
            return l_307;
        }
        else
        { 
            uint8_t l_311 = 255UL;
            union U2 *l_312 = (void*)0;
            g_309 = ((**l_137) = l_308[0][0]);
            l_306 = l_311;
            l_312 = &p_39;
            return l_307;
        }
    }
    else
    { 
        uint64_t *l_313 = &g_65[1][0];
        uint64_t *l_315 = &g_65[1][0];
        uint64_t **l_314 = &l_315;
        uint64_t *l_317 = (void*)0;
        uint64_t **l_316 = &l_317;
        int32_t l_328 = (-7L);
        int32_t *l_399 = &l_328;
        int32_t *l_400 = (void*)0;
        int32_t *l_401 = &g_398;
        int32_t *l_402[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        (**l_125) = (l_313 == ((*l_316) = ((*l_314) = &g_65[1][1])));
        for (g_68 = 0; (g_68 <= 25); g_68 = safe_add_func_int64_t_s_s(g_68, 3))
        { 
            uint8_t l_320 = 248UL;
            uint16_t *l_321 = (void*)0;
            l_320 = g_210;
            if (((g_27 >= ((l_321 = l_140) != (void*)0)) == (((*l_292) ^= g_83.f0) && (safe_add_func_int16_t_s_s((*l_126), (safe_mul_func_uint8_t_u_u(p_39.f1, (safe_sub_func_int8_t_s_s(0xB0L, l_328)))))))))
            { 
                union U2 **l_332[3];
                union U2 ***l_331 = &l_332[0];
                int i;
                for (i = 0; i < 3; i++)
                    l_332[i] = &g_159;
                for (g_210 = 0; (g_210 <= 40); g_210 = safe_add_func_int16_t_s_s(g_210, 2))
                { 
                    (*l_292) = l_328;
                    if ((*l_126))
                        break;
                }
                (*l_331) = &g_159;
                g_334 = l_333;
            }
            else
            { 
                uint8_t l_395 = 0x64L;
                if ((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((void*)0 == &g_138), 4294967293UL)), (l_341[0] , ((safe_add_func_int8_t_s_s((p_36 == (void*)0), ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((((*l_140) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((+0xB410L), g_83.f6)), 14))) , &g_217) != &g_217), 5)) | p_38), 4294967295UL)) || p_38))) < l_328)))), g_65[1][0])))
                { 
                    uint8_t l_358 = 3UL;
                    int32_t *l_365 = &l_167[0][0][0];
                    int32_t *l_366 = &l_328;
                    int32_t *l_367 = &l_167[3][0][0];
                    int32_t *l_368 = &l_328;
                    int32_t *l_369 = (void*)0;
                    int32_t *l_370 = &l_167[0][0][0];
                    int32_t *l_371 = &l_328;
                    (*l_292) = (safe_div_func_int64_t_s_s(((p_39.f1 | (safe_rshift_func_int8_t_s_u(p_38, (l_328 > (+(l_358 = 1UL)))))) | (*l_126)), (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((&g_94[2][4][3] != &g_94[4][2][3]) != (*l_126)), 3)), p_38)), 255UL))));
                    g_373++;
                }
                else
                { 
                    int32_t l_382[7][6] = {{0x7D023413L,0x7D023413L,0xAB348A6AL,0x7A818BF5L,0xAB348A6AL,0x7D023413L},{0xAB348A6AL,(-1L),0x7A818BF5L,0x7A818BF5L,(-1L),0xAB348A6AL},{0x7D023413L,0xAB348A6AL,0x7A818BF5L,0xAB348A6AL,0x7D023413L,0x7D023413L},{1L,0xAB348A6AL,0xAB348A6AL,1L,(-1L),1L},{1L,(-1L),1L,0xAB348A6AL,0xAB348A6AL,1L},{0x7D023413L,0x7D023413L,0xAB348A6AL,0x7A818BF5L,0xAB348A6AL,0x7D023413L},{0xAB348A6AL,(-1L),0x7A818BF5L,0x7A818BF5L,(-1L),0xAB348A6AL}};
                    uint32_t *l_396 = &g_49[0][0][0].f1;
                    int32_t *l_397 = &g_398;
                    int i, j;
                    (*l_397) |= (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u(65535UL, l_382[4][1])) , (safe_lshift_func_int16_t_s_u(1L, (((((*l_215)--) == (((safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(((((**l_314) = (((*l_396) = (g_83.f2 < ((((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((l_320 || p_39.f0) , (**l_125)), (-8L))) || (-1L)), 11)) ^ l_395) & 0xA6FCL) == g_94[4][2][3].f0))) | g_83.f6)) > p_39.f1) == 65535UL), p_38)) > l_328), l_320)) ^ 0x05L) || 0x6EL)) | g_246) >= l_395)))) == (*l_292)), l_382[6][4])), p_39.f0));
                    return g_240;
                }
            }
        }
        --l_403;
    }
    return g_240;
}



static int32_t * func_40(union U3  p_41, union U1  p_42, uint8_t  p_43, int32_t * p_44)
{ 
    int32_t l_98[7];
    int32_t l_99 = 0x964532E2L;
    int16_t *l_100 = (void*)0;
    int16_t *l_101 = &g_63;
    uint32_t *l_112 = &g_49[0][0][0].f1;
    uint8_t *l_113 = (void*)0;
    uint8_t l_114 = 0xE8L;
    uint8_t **l_116 = &l_113;
    uint8_t ***l_115 = &l_116;
    uint8_t **l_117[2];
    int32_t *l_121 = (void*)0;
    int i;
    for (i = 0; i < 7; i++)
        l_98[i] = (-3L);
    for (i = 0; i < 2; i++)
        l_117[i] = &l_113;
    l_114 = ((g_83.f0 == (safe_add_func_int32_t_s_s((l_98[0] != ((((*l_101) = (l_99 = g_95[0].f2)) && ((p_42.f2 <= (safe_mod_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((g_83 , (p_42 , ((safe_lshift_func_uint8_t_u_u((g_70 = (safe_mod_func_uint64_t_u_u((((((*l_112) &= (safe_add_func_uint32_t_u_u((l_98[0] | 0x80L), l_99))) <= (*p_44)) | 0xC1L) , 0xC92A3EDA01CD825BLL), 1L))), 5)) , l_99))), g_83.f3)) , (-2L)), p_43))) | g_68)) & 0x2736F9D8AEAC5D1DLL)), l_98[1]))) , l_98[0]);
    l_117[0] = ((*l_115) = (void*)0);
    for (p_41.f0 = 0; (p_41.f0 > 17); ++p_41.f0)
    { 
        int32_t *l_120 = &g_3;
        if ((*p_44))
            break;
        return l_120;
    }
    l_99 = g_3;
    for (g_70 = 1; (g_70 <= 6); g_70 += 1)
    { 
        int32_t *l_122 = &g_27;
        return l_122;
    }
    return &g_3;
}



static union U2  func_45(union U2  p_46, int32_t  p_47, struct S0  p_48)
{ 
    int32_t *l_67 = &g_68;
    int32_t *l_69[2][1];
    uint64_t *l_86 = &g_65[0][0];
    uint32_t *l_87 = &g_49[0][0][0].f1;
    int16_t *l_88 = &g_63;
    int16_t l_90 = 0x07ACL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_69[i][j] = &g_68;
    }
    g_70--;
    if ((safe_div_func_int64_t_s_s(0xDFF04C396C7BFB9ELL, (safe_mul_func_int8_t_s_s(0x8BL, (((safe_add_func_int16_t_s_s(g_27, ((((*l_88) = (1UL <= ((*l_87) = (safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((((((g_83 , (safe_sub_func_int8_t_s_s((((void*)0 != l_86) >= 0UL), p_46.f1))) ^ 0x03F7513DL) > g_83.f0) != (*l_67)) == g_65[1][1]) < (-1L)), g_49[0][0][0].f0)), 1UL))))) <= g_83.f0) && p_46.f0))) || p_48.f4) >= (*l_67)))))))
    { 
        union U2 l_89[5] = {{-8L},{-8L},{-8L},{-8L},{-8L}};
        int i;
        return l_89[1];
    }
    else
    { 
        uint32_t l_91 = 4294967294UL;
        --l_91;
    }
    return p_46;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_49[i][j][k].f0, "g_49[i][j][k].f0", print_hash_value);
                transparent_crc(g_49[i][j][k].f1, "g_49[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_65[i][j], "g_65[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    transparent_crc(g_83.f4, "g_83.f4", print_hash_value);
    transparent_crc(g_83.f5, "g_83.f5", print_hash_value);
    transparent_crc(g_83.f6, "g_83.f6", print_hash_value);
    transparent_crc(g_83.f7, "g_83.f7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_94[i][j][k].f0, "g_94[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_95[i].f0, "g_95[i].f0", print_hash_value);
        transparent_crc(g_95[i].f1, "g_95[i].f1", print_hash_value);
        transparent_crc(g_95[i].f2, "g_95[i].f2", print_hash_value);

    }
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_160.f1, "g_160.f1", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_504[i], "g_504[i]", print_hash_value);

    }
    transparent_crc(g_505, "g_505", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_507[i][j][k], "g_507[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_549.f0, "g_549.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_551[i].f0, "g_551[i].f0", print_hash_value);

    }
    transparent_crc(g_555.f0, "g_555.f0", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_663[i], "g_663[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_734[i], "g_734[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_808[i][j].f0, "g_808[i][j].f0", print_hash_value);
            transparent_crc(g_808[i][j].f1, "g_808[i][j].f1", print_hash_value);
            transparent_crc(g_808[i][j].f2, "g_808[i][j].f2", print_hash_value);
            transparent_crc(g_808[i][j].f3, "g_808[i][j].f3", print_hash_value);
            transparent_crc(g_808[i][j].f4, "g_808[i][j].f4", print_hash_value);
            transparent_crc(g_808[i][j].f5, "g_808[i][j].f5", print_hash_value);
            transparent_crc(g_808[i][j].f6, "g_808[i][j].f6", print_hash_value);
            transparent_crc(g_808[i][j].f7, "g_808[i][j].f7", print_hash_value);

        }
    }
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_855, "g_855", print_hash_value);
    transparent_crc(g_983, "g_983", print_hash_value);
    transparent_crc(g_999, "g_999", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    transparent_crc(g_1046, "g_1046", print_hash_value);
    transparent_crc(g_1047, "g_1047", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1049[i], "g_1049[i]", print_hash_value);

    }
    transparent_crc(g_1084, "g_1084", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1276[i][j], "g_1276[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1281[i], "g_1281[i]", print_hash_value);

    }
    transparent_crc(g_1307.f0, "g_1307.f0", print_hash_value);
    transparent_crc(g_1307.f1, "g_1307.f1", print_hash_value);
    transparent_crc(g_1307.f2, "g_1307.f2", print_hash_value);
    transparent_crc(g_1307.f3, "g_1307.f3", print_hash_value);
    transparent_crc(g_1307.f4, "g_1307.f4", print_hash_value);
    transparent_crc(g_1307.f5, "g_1307.f5", print_hash_value);
    transparent_crc(g_1307.f6, "g_1307.f6", print_hash_value);
    transparent_crc(g_1307.f7, "g_1307.f7", print_hash_value);
    transparent_crc(g_1616, "g_1616", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
