// SPDX-License-Identifier: MIT
// cctest_csmith_b031a6c8.c --- cctest case csmith_b031a6c8 (csmith seed 2956043976)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x685f1d62 */

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

// Options:   -s 2956043976 -o /tmp/csmith_gen_aw4k1r8o/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
   const int32_t  f1;
   uint64_t  f2;
   int8_t  f3;
   signed f4 : 1;
};

union U1 {
   int8_t  f0;
   unsigned f1 : 17;
   int32_t  f2;
   const uint64_t  f3;
   const uint8_t  f4;
};

union U2 {
   unsigned f0 : 15;
   uint8_t  f1;
   uint32_t  f2;
   unsigned f3 : 23;
};

union U3 {
   uint16_t  f0;
   int16_t  f1;
   const int16_t  f2;
   int8_t  f3;
   uint32_t  f4;
};

union U4 {
   int32_t  f0;
   uint16_t  f1;
};


static int32_t g_8 = (-2L);
static uint16_t g_48 = 0x1BA5L;
static const union U4 g_55 = {0L};
static int32_t * const g_72 = (void*)0;
static union U1 g_74 = {0xFCL};
static int32_t g_76 = 0x59CE7900L;
static int32_t *g_75 = &g_76;
static int16_t g_80[5] = {5L,5L,5L,5L,5L};
static uint32_t g_81 = 0xA07F58E9L;
static union U2 g_85 = {1UL};
static uint64_t g_90 = 1UL;
static uint32_t g_105 = 1UL;
static const int32_t g_128 = 0L;
static union U4 g_154 = {0xD5004DB1L};
static const union U4 *g_153 = &g_154;
static uint8_t g_181[3] = {0x17L,0x17L,0x17L};
static int8_t g_195 = 0x9AL;
static int8_t g_196[5] = {0x40L,0x40L,0x40L,0x40L,0x40L};
static uint32_t g_198 = 1UL;
static union U3 g_207[4] = {{0x65F8L},{0x65F8L},{0x65F8L},{0x65F8L}};
static union U3 *g_206 = &g_207[3];
static uint32_t g_263 = 4294967295UL;
static int64_t g_320 = 0x0606D169B05E94A6LL;
static int64_t *g_319 = &g_320;
static uint32_t g_362 = 0UL;
static uint64_t g_381 = 18446744073709551615UL;
static uint16_t **g_436 = (void*)0;
static int32_t g_475 = (-1L);
static uint32_t g_485 = 0x60A48CD3L;
static struct S0 g_546 = {0L,9L,0x56F2DCF1C28F1687LL,0x8AL,0};
static int64_t g_572 = 0xFB258EC9980F64D7LL;
static int32_t g_574 = 0xC9077AF8L;
static uint32_t g_575[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static const union U2 *g_627 = &g_85;
static const union U2 **g_626 = &g_627;
static int8_t g_667 = 0xD9L;
static int64_t g_669 = (-1L);
static int32_t g_684 = 1L;
static int8_t g_693 = 0x56L;
static int32_t g_697 = 0xB92E3AF4L;
static int8_t g_698 = 0x9CL;
static int64_t g_699 = (-1L);
static uint32_t g_707 = 0xCAC0CA1EL;
static int16_t g_777 = 0x04D1L;
static const union U1 *g_789 = (void*)0;
static const union U1 **g_788 = &g_789;
static int32_t *g_820 = &g_76;
static uint8_t g_832 = 4UL;
static int32_t g_837 = (-7L);
static uint32_t g_838 = 0xA522DD09L;
static uint64_t g_875 = 0xA14C960DE7DAAE85LL;
static uint32_t g_903 = 0x07513CA2L;
static struct S0 g_910 = {-1L,5L,0x37D2939033BBC554LL,1L,0};
static uint64_t *g_949 = &g_875;
static uint64_t **g_948 = &g_949;
static uint64_t g_1034 = 18446744073709551615UL;
static uint16_t g_1041 = 0x25BBL;
static union U3 **g_1057[3][1] = {{(void*)0},{(void*)0},{(void*)0}};
static union U3 *** const g_1056 = &g_1057[0][0];
static union U1 *g_1064 = &g_74;
static union U1 **g_1063 = &g_1064;
static uint8_t g_1067 = 0UL;
static uint32_t g_1077 = 1UL;
static union U3 ***g_1100 = &g_1057[0][0];
static union U3 ****g_1099[2] = {&g_1100,&g_1100};
static union U3 *****g_1098 = &g_1099[1];
static const uint16_t *g_1147[3] = {&g_55.f1,&g_55.f1,&g_55.f1};
static const uint16_t **g_1146 = &g_1147[1];
static const uint16_t *** const g_1145[3][1][2] = {{{(void*)0,&g_1146}},{{(void*)0,(void*)0}},{{&g_1146,(void*)0}}};
static const uint16_t *** const * const g_1144 = &g_1145[1][0][0];
static int16_t g_1195 = 1L;
static int32_t g_1196[6] = {0x688848BBL,0x688848BBL,0x688848BBL,0x688848BBL,0x688848BBL,0x688848BBL};
static uint64_t g_1197 = 0x4B39F35A81E92B27LL;
static union U1 g_1400[1][5][2] = {{{{-1L},{0x1AL}},{{-1L},{0x1AL}},{{-1L},{0x1AL}},{{-1L},{0x1AL}},{{-1L},{0x1AL}}}};
static union U2 *g_1424[3][7][7] = {{{&g_85,(void*)0,(void*)0,&g_85,&g_85,(void*)0,&g_85},{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85},{&g_85,&g_85,(void*)0,(void*)0,(void*)0,(void*)0,&g_85},{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85},{(void*)0,&g_85,(void*)0,&g_85,(void*)0,(void*)0,&g_85},{&g_85,&g_85,&g_85,&g_85,(void*)0,&g_85,&g_85},{&g_85,&g_85,&g_85,(void*)0,&g_85,&g_85,(void*)0}},{{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,(void*)0},{(void*)0,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85},{&g_85,&g_85,&g_85,&g_85,(void*)0,&g_85,&g_85},{&g_85,&g_85,(void*)0,&g_85,(void*)0,&g_85,&g_85},{&g_85,&g_85,&g_85,(void*)0,&g_85,&g_85,&g_85},{&g_85,&g_85,&g_85,&g_85,(void*)0,&g_85,&g_85},{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85}},{{(void*)0,&g_85,(void*)0,(void*)0,&g_85,&g_85,&g_85},{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85},{(void*)0,&g_85,&g_85,(void*)0,&g_85,(void*)0,&g_85},{&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85},{(void*)0,(void*)0,&g_85,&g_85,(void*)0,(void*)0,&g_85},{&g_85,&g_85,&g_85,(void*)0,&g_85,&g_85,(void*)0},{(void*)0,&g_85,(void*)0,&g_85,&g_85,(void*)0,(void*)0}}};
static union U2 **g_1423[6] = {&g_1424[2][4][3],&g_1424[2][4][3],&g_1424[2][4][3],&g_1424[2][4][3],&g_1424[2][4][3],&g_1424[2][4][3]};
static union U2 **g_1428 = &g_1424[0][6][2];
static uint16_t g_1432 = 65534UL;



static const int16_t  func_1(void);
static int32_t  func_2(union U3  p_3, uint16_t  p_4);
static union U3  func_5(int8_t  p_6, uint32_t  p_7);
static uint8_t  func_14(uint16_t  p_15, struct S0  p_16);
static uint8_t  func_21(int64_t  p_22, int32_t  p_23);
static union U4  func_24(int32_t  p_25, union U3  p_26, uint16_t  p_27, int64_t  p_28);
static int16_t  func_39(int64_t  p_40, uint32_t  p_41, union U2  p_42, const union U4  p_43);
static uint8_t  func_65(uint16_t * p_66, int32_t * const  p_67, int32_t * const  p_68, union U1  p_69, int32_t * p_70);




static const int16_t  func_1(void)
{ 
    uint8_t l_13 = 1UL;
    union U3 l_29 = {0x7216L};
    uint32_t l_30 = 0xCFF29C21L;
    uint64_t l_452 = 0xC5EABFD20BF0A180LL;
    int32_t l_1351 = 1L;
    union U4 l_1363 = {0L};
    int64_t l_1364[4] = {0xABCA99376C2BA31CLL,0xABCA99376C2BA31CLL,0xABCA99376C2BA31CLL,0xABCA99376C2BA31CLL};
    uint64_t l_1429 = 18446744073709551608UL;
    int32_t l_1445 = 0x644FDB25L;
    uint32_t l_1455 = 6UL;
    int i;
    return l_452;
}



static int32_t  func_2(union U3  p_3, uint16_t  p_4)
{ 
    int32_t l_1350[4] = {(-1L),(-1L),(-1L),(-1L)};
    int i;
    return l_1350[0];
}



static union U3  func_5(int8_t  p_6, uint32_t  p_7)
{ 
    uint16_t *l_1172 = &g_48;
    int32_t l_1188 = 0L;
    int32_t l_1192 = 0xAE6BE5B1L;
    int32_t l_1193 = (-1L);
    int32_t l_1194 = (-1L);
    union U3 ***** const l_1226 = &g_1099[1];
    const union U4 l_1240 = {0x7D7F5468L};
    int32_t l_1253 = 0x3EE6B741L;
    int32_t *l_1327 = &g_76;
    int32_t *l_1328[5];
    uint16_t l_1329[1];
    int16_t **l_1342 = (void*)0;
    int16_t *l_1343 = &g_777;
    int16_t l_1348 = (-5L);
    union U3 l_1349[4] = {{0xC423L},{0xC423L},{0xC423L},{0xC423L}};
    int i;
    for (i = 0; i < 5; i++)
        l_1328[i] = &g_76;
    for (i = 0; i < 1; i++)
        l_1329[i] = 0xFB8BL;
    if (((safe_sub_func_int8_t_s_s(p_6, (safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(p_7, p_7)), p_7)))) ^ ((*g_1146) != (l_1172 = l_1172))))
    { 
        union U3 l_1187 = {1UL};
        int32_t l_1191[2];
        union U3 *****l_1212 = &g_1099[1];
        union U2 l_1239 = {0UL};
        union U1 **l_1267 = &g_1064;
        int32_t l_1325 = (-2L);
        int32_t *l_1326[4];
        int i;
        for (i = 0; i < 2; i++)
            l_1191[i] = 1L;
        for (i = 0; i < 4; i++)
            l_1326[i] = &l_1193;
        if (p_6)
        { 
            uint8_t *l_1173 = (void*)0;
            uint8_t *l_1174[3];
            int32_t l_1175 = 0xF9B52D34L;
            int i;
            for (i = 0; i < 3; i++)
                l_1174[i] = (void*)0;
            if ((0x5AL < (l_1175 = g_910.f2)))
            { 
                l_1188 = ((*g_820) = (((~p_6) | p_6) | (((+(safe_mod_func_int32_t_s_s(((!(safe_div_func_int16_t_s_s(((0x53E2A3B6F5B4419ELL || ((p_6 > p_7) & (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((-4L), (((l_1187 , (*g_319)) <= (*g_949)) & 4UL))), p_7)))) , 0L), p_6))) == p_7), p_6))) && 0xECD38D6BBD515746LL) ^ l_1187.f0)));
lbl_1189:
                (*g_820) = l_1188;
            }
            else
            { 
                if (l_1187.f1)
                    goto lbl_1189;
            }
        }
        else
        { 
            int32_t *l_1190[7];
            union U3 l_1202 = {1UL};
            union U1 l_1297 = {1L};
            uint32_t l_1300 = 18446744073709551612UL;
            union U3 * const **l_1322 = (void*)0;
            union U3 * const ***l_1321 = &l_1322;
            int i;
            for (i = 0; i < 7; i++)
                l_1190[i] = &g_684;
            g_1197--;
lbl_1278:
            for (g_546.f2 = 0; (g_546.f2 == 45); ++g_546.f2)
            { 
                return l_1202;
            }
            for (l_1194 = (-28); (l_1194 == 3); l_1194 = safe_add_func_uint64_t_u_u(l_1194, 4))
            { 
                uint64_t l_1205 = 0x4F7A8829E9EF99B7LL;
                uint32_t l_1227 = 0xD98986CDL;
                union U3 l_1279[7] = {{65530UL},{65530UL},{65530UL},{65530UL},{65530UL},{65530UL},{65530UL}};
                struct S0 l_1286[5][7][3] = {{{{0xE8755E58A87AD330LL,0x0D8FF95EL,0xE8FEABC4C86F26BDLL,0x3EL,-0},{0x7B5D9179E4A9134ALL,-10L,0UL,0x7CL,-0},{0x88405E557BDF931CLL,0x26D6A369L,18446744073709551615UL,0L,-0}},{{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0},{-1L,0x4088351EL,0x263C574A2C878DFFLL,0x06L,-0}},{{0x7B5D9179E4A9134ALL,-10L,0UL,0x7CL,-0},{0xE8755E58A87AD330LL,0x0D8FF95EL,0xE8FEABC4C86F26BDLL,0x3EL,-0},{0x88405E557BDF931CLL,0x26D6A369L,18446744073709551615UL,0L,-0}},{{-5L,1L,7UL,0L,-0},{0L,0x08C00AC4L,0xBC483F7D55C06A78LL,0L,-0},{-1L,0x4088351EL,0x263C574A2C878DFFLL,0x06L,-0}},{{-8L,0x6175BC98L,0UL,8L,0},{-8L,0x6175BC98L,0UL,8L,0},{-8L,0x6175BC98L,0UL,8L,0}},{{0x236B6C708F4A291ALL,0x4382476AL,0xF123A30AF69C63F9LL,0x98L,-0},{0xA637F6BE9F595D6CLL,-1L,0UL,9L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{2L,1L,0UL,0x65L,0},{0xA5290588F45C4277LL,-7L,0x2B369675547131CFLL,0x39L,0},{-8L,0x6175BC98L,0UL,8L,0}}},{{{9L,9L,1UL,-4L,0},{9L,9L,1UL,-4L,0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{0xA5290588F45C4277LL,-7L,0x2B369675547131CFLL,0x39L,0},{2L,1L,0UL,0x65L,0},{-8L,0x6175BC98L,0UL,8L,0}},{{0xA637F6BE9F595D6CLL,-1L,0UL,9L,-0},{0x236B6C708F4A291ALL,0x4382476AL,0xF123A30AF69C63F9LL,0x98L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{-4L,-9L,0x70ECACEC242F2879LL,3L,-0},{-4L,-9L,0x70ECACEC242F2879LL,3L,-0},{-8L,0x6175BC98L,0UL,8L,0}},{{0x236B6C708F4A291ALL,0x4382476AL,0xF123A30AF69C63F9LL,0x98L,-0},{0xA637F6BE9F595D6CLL,-1L,0UL,9L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{2L,1L,0UL,0x65L,0},{0xA5290588F45C4277LL,-7L,0x2B369675547131CFLL,0x39L,0},{-8L,0x6175BC98L,0UL,8L,0}},{{9L,9L,1UL,-4L,0},{9L,9L,1UL,-4L,0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}}},{{{0xA5290588F45C4277LL,-7L,0x2B369675547131CFLL,0x39L,0},{2L,1L,0UL,0x65L,0},{-8L,0x6175BC98L,0UL,8L,0}},{{0xA637F6BE9F595D6CLL,-1L,0UL,9L,-0},{0x236B6C708F4A291ALL,0x4382476AL,0xF123A30AF69C63F9LL,0x98L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{-4L,-9L,0x70ECACEC242F2879LL,3L,-0},{-4L,-9L,0x70ECACEC242F2879LL,3L,-0},{-8L,0x6175BC98L,0UL,8L,0}},{{0x236B6C708F4A291ALL,0x4382476AL,0xF123A30AF69C63F9LL,0x98L,-0},{0xA637F6BE9F595D6CLL,-1L,0UL,9L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{2L,1L,0UL,0x65L,0},{0xA5290588F45C4277LL,-7L,0x2B369675547131CFLL,0x39L,0},{-8L,0x6175BC98L,0UL,8L,0}},{{9L,9L,1UL,-4L,0},{9L,9L,1UL,-4L,0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{0xA5290588F45C4277LL,-7L,0x2B369675547131CFLL,0x39L,0},{2L,1L,0UL,0x65L,0},{-8L,0x6175BC98L,0UL,8L,0}}},{{{0xA637F6BE9F595D6CLL,-1L,0UL,9L,-0},{0x236B6C708F4A291ALL,0x4382476AL,0xF123A30AF69C63F9LL,0x98L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{-4L,-9L,0x70ECACEC242F2879LL,3L,-0},{-4L,-9L,0x70ECACEC242F2879LL,3L,-0},{-8L,0x6175BC98L,0UL,8L,0}},{{0x236B6C708F4A291ALL,0x4382476AL,0xF123A30AF69C63F9LL,0x98L,-0},{0xA637F6BE9F595D6CLL,-1L,0UL,9L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{2L,1L,0UL,0x65L,0},{0xA5290588F45C4277LL,-7L,0x2B369675547131CFLL,0x39L,0},{-8L,0x6175BC98L,0UL,8L,0}},{{9L,9L,1UL,-4L,0},{9L,9L,1UL,-4L,0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{0xA5290588F45C4277LL,-7L,0x2B369675547131CFLL,0x39L,0},{2L,1L,0UL,0x65L,0},{-8L,0x6175BC98L,0UL,8L,0}},{{0xA637F6BE9F595D6CLL,-1L,0UL,9L,-0},{0x236B6C708F4A291ALL,0x4382476AL,0xF123A30AF69C63F9LL,0x98L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}}},{{{-4L,-9L,0x70ECACEC242F2879LL,3L,-0},{-4L,-9L,0x70ECACEC242F2879LL,3L,-0},{-8L,0x6175BC98L,0UL,8L,0}},{{0x236B6C708F4A291ALL,0x4382476AL,0xF123A30AF69C63F9LL,0x98L,-0},{0xA637F6BE9F595D6CLL,-1L,0UL,9L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{2L,1L,0UL,0x65L,0},{0xA5290588F45C4277LL,-7L,0x2B369675547131CFLL,0x39L,0},{-8L,0x6175BC98L,0UL,8L,0}},{{9L,9L,1UL,-4L,0},{9L,9L,1UL,-4L,0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{0xA5290588F45C4277LL,-7L,0x2B369675547131CFLL,0x39L,0},{2L,1L,0UL,0x65L,0},{-8L,0x6175BC98L,0UL,8L,0}},{{0xA637F6BE9F595D6CLL,-1L,0UL,9L,-0},{0x236B6C708F4A291ALL,0x4382476AL,0xF123A30AF69C63F9LL,0x98L,-0},{0L,0x6CAA9AF7L,0x5FCB0756971732D3LL,0x52L,-0}},{{-4L,-9L,0x70ECACEC242F2879LL,3L,-0},{-4L,-9L,0x70ECACEC242F2879LL,3L,-0},{-8L,0x6175BC98L,0UL,8L,0}}}};
                int16_t l_1287 = (-9L);
                int16_t l_1301 = (-2L);
                int i, j, k;
                for (g_76 = 0; (g_76 <= 3); g_76 += 1)
                { 
                    if ((*g_820))
                        break;
                    g_1063 = (void*)0;
                    --l_1205;
                    l_1193 ^= ((safe_sub_func_uint16_t_u_u(l_1205, (0xDFL & ((l_1212 = (g_80[3] , (void*)0)) != ((safe_mul_func_int8_t_s_s((!((((safe_mul_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((g_48 == (4L == (safe_sub_func_int16_t_s_s(0x0E0DL, 0x35DFL)))) || p_7), g_903)), (-1L))), 4L)) > 6L) == 0xF51CD6AFC5C9034ALL), p_7)) == p_6) > 0xE9BECA3FL) & p_6)), g_693)) , l_1226))))) , (*g_820));
                    --l_1227;
                }
                for (g_381 = 2; (g_381 != 56); g_381++)
                { 
                    uint32_t *l_1254 = &l_1202.f4;
                    union U3 l_1255[6][7] = {{{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L}},{{0x0DF9L},{0x03A2L},{0x0DF9L},{0x03A2L},{0x0DF9L},{0x03A2L},{0x0DF9L}},{{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L}},{{0x0DF9L},{0x03A2L},{0x0DF9L},{0x03A2L},{0x0DF9L},{0x03A2L},{0x0DF9L}},{{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L},{0x5FC5L}},{{0x0DF9L},{0x03A2L},{0x0DF9L},{0x03A2L},{0x0DF9L},{0x03A2L},{0x0DF9L}}};
                    int i, j;
                    (*g_820) |= ((safe_sub_func_uint16_t_u_u((+(safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((*l_1254) = ((l_1239 , l_1240) , ((safe_mul_func_int16_t_s_s(0xF928L, (safe_div_func_uint16_t_u_u(((p_6 != (((*l_1172) |= (**g_1146)) , (safe_add_func_int8_t_s_s((((*g_319) = (safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((void*)0 == &g_1100), 4)), 5UL)), (*g_319)))) <= l_1187.f1), l_1253)))) != g_195), p_7)))) < l_1188))), p_6)) , p_6), (-4L)))), g_196[4])) ^ p_7);
                    return l_1255[1][3];
                }
                for (g_546.f2 = 0; (g_546.f2 <= 47); g_546.f2++)
                { 
                    uint64_t l_1275 = 0xAC0F80402175AC6DLL;
                    uint16_t l_1276 = 0x7986L;
                    uint8_t *l_1277 = &g_832;
                    int32_t l_1288 = 1L;
                    l_1191[0] = (safe_rshift_func_int8_t_s_u(((p_6 > (((--(*l_1172)) != (!((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(65533UL, 5)), 5)) ^ (l_1267 != &g_789)))) | (p_7 && 0UL))) > (((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((safe_mul_func_uint8_t_u_u(((*l_1277) = (((safe_rshift_func_uint8_t_u_s(p_6, 4)) & l_1275) == l_1276)), l_1275)))), 2)) <= (*g_820)) && (-1L))), p_7));
                    if ((*g_820))
                        break;
                    if (l_1275)
                        goto lbl_1278;
                    l_1287 ^= (((((g_85.f1 < (((*l_1277) = (l_1279[0] , (safe_lshift_func_int16_t_s_u(l_1187.f3, ((safe_div_func_int32_t_s_s((-1L), (safe_rshift_func_uint8_t_u_s(g_667, (((((l_1286[4][5][2] , (*g_206)) , g_910.f3) && (*g_820)) | 0x40L) < l_1191[0]))))) <= (-1L)))))) == 1UL)) >= (**g_948)) > g_1196[1]) < (*g_319)) , p_6);
                    l_1288 ^= ((*g_820) = l_1276);
                }
                if (l_1286[4][5][2].f3)
                { 
                    union U3 l_1289 = {0x3144L};
                    return l_1289;
                }
                else
                { 
                    uint64_t l_1308 = 0xD642CE4570F61933LL;
                    int16_t *l_1313 = &l_1301;
                    uint16_t * const **l_1314 = (void*)0;
                    int16_t l_1315[1][4][2];
                    int16_t *l_1316[3];
                    int32_t **l_1317[4][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1315[i][j][k] = 0x96D9L;
                        }
                    }
                    for (i = 0; i < 3; i++)
                        l_1316[i] = &l_1202.f1;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1317[i][j] = &g_75;
                    }
                    if (l_1194)
                        goto lbl_1278;
                    l_1192 = (((safe_mod_func_int32_t_s_s(((*g_319) < p_7), (safe_add_func_uint8_t_u_u(255UL, (+(((safe_rshift_func_int16_t_s_u((1L && (((l_1297 , p_6) || (((safe_add_func_int32_t_s_s((l_1300 < l_1191[0]), 0x2AA8ADCAL)) || l_1301) , (*g_820))) >= (*g_820))), 5)) != 6L) , (*g_820))))))) , (*g_319)) < p_7);
                    g_75 = (((((((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((g_777 |= (((safe_lshift_func_int16_t_s_u(l_1308, 14)) , ((void*)0 != &g_789)) <= ((safe_div_func_uint64_t_u_u(((l_1286[4][5][2].f0 , ((safe_lshift_func_int8_t_s_u(0xE0L, ((*g_1144) != (((*l_1313) &= p_7) , l_1314)))) , l_1315[0][3][1])) < (*g_820)), (**g_948))) , g_1197))), 4L)), l_1187.f0)) > 0xE29FL) >= (-10L)) && 7L) , l_1279[0]) , l_1279[0]) , (void*)0);
                    l_1286[4][5][2].f4 = (l_1325 = (l_1191[0] = (l_1253 = (p_7 < ((((+(safe_div_func_int16_t_s_s(g_910.f3, ((*l_1313) = 0xC92DL)))) & ((*g_319) > ((l_1321 == &l_1322) , (safe_add_func_uint64_t_u_u(((p_7 >= g_832) ^ 0xF85050DAL), p_7))))) && p_6) <= g_1034)))));
                }
            }
        }
        g_697 ^= (*g_820);
    }
    else
    { 
        l_1327 = (void*)0;
        return (*g_206);
    }
    ++l_1329[0];
    g_546.f4 &= (safe_rshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s((p_6 | (((safe_sub_func_int16_t_s_s((((safe_div_func_int16_t_s_s((((g_154 , &g_263) == (void*)0) | p_7), (-1L))) || (*l_1327)) != (*l_1327)), l_1348)) & p_6) && 4294967295UL)), 0xAEF2L)) && 5L), g_832));
    return l_1349[0];
}



static uint8_t  func_14(uint16_t  p_15, struct S0  p_16)
{ 
    int32_t l_919[1][4];
    union U1 l_920 = {0x9EL};
    struct S0 *l_925 = &g_546;
    int32_t l_953[6][7] = {{(-1L),0x230833C9L,0xDF719E9AL,0xF691737BL,0xDF719E9AL,0x230833C9L,(-1L)},{0L,(-1L),0x31CAB208L,0xF691737BL,0L,0x35385722L,0x1ACC4A43L},{(-1L),0x531B70F1L,(-9L),0x1ACC4A43L,0L,0xAD944F7DL,0xAD944F7DL},{(-9L),0x0F84DA67L,0x31CAB208L,0x0F84DA67L,(-9L),(-9L),0xE67CC746L},{0xE67CC746L,0x0F84DA67L,0xDF719E9AL,(-1L),0xF691737BL,(-6L),0L},{0x0F84DA67L,0x531B70F1L,0xF691737BL,0xC7813FC9L,0x31CAB208L,0x31CAB208L,0xC7813FC9L}};
    struct S0 l_954 = {7L,-1L,18446744073709551606UL,-7L,0};
    uint64_t * const *l_959 = &g_949;
    union U3 **l_968[2];
    uint8_t l_1006 = 0xBEL;
    int8_t l_1040 = 0x4BL;
    uint64_t l_1089 = 0UL;
    uint16_t l_1111 = 0x4C98L;
    uint16_t *** const *l_1128 = (void*)0;
    uint8_t l_1135 = 255UL;
    int32_t *l_1137 = &l_953[3][6];
    int32_t *l_1138[7][2] = {{&l_919[0][2],&l_919[0][2]},{&l_919[0][2],&l_919[0][2]},{&l_919[0][2],&l_919[0][2]},{&l_919[0][2],&l_919[0][2]},{&l_919[0][2],&l_919[0][2]},{&l_919[0][2],&l_919[0][2]},{&l_919[0][2],&l_919[0][2]}};
    uint8_t l_1139 = 255UL;
    uint16_t ***l_1149 = &g_436;
    uint16_t *** const *l_1148 = &l_1149;
    uint16_t *** const **l_1150 = (void*)0;
    uint16_t *** const **l_1151 = &l_1128;
    union U4 l_1160[5][1][6] = {{{{-1L},{-1L},{-8L},{-1L},{0xFD26AEAAL},{0xFD26AEAAL}}},{{{0x32C31175L},{-1L},{-1L},{0x32C31175L},{-1L},{0x32C31175L}}},{{{0x32C31175L},{-1L},{0x32C31175L},{-1L},{-1L},{0x32C31175L}}},{{{0xFD26AEAAL},{0xFD26AEAAL},{-1L},{-8L},{-1L},{0xFD26AEAAL}}},{{{-1L},{-1L},{-8L},{-8L},{-1L},{-1L}}}};
    int8_t *l_1161 = (void*)0;
    int8_t *l_1162[5][2] = {{&g_693,&g_693},{&g_693,&g_693},{&g_693,&g_693},{&g_693,&g_693},{&g_693,&g_693}};
    int16_t *l_1163 = &g_777;
    uint16_t l_1164 = 65534UL;
    int64_t l_1165 = 0xF7F92BC64601920CLL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_919[i][j] = (-1L);
    }
    for (i = 0; i < 2; i++)
        l_968[i] = &g_206;
lbl_1092:
    for (g_85.f1 = 0; (g_85.f1 <= 2); g_85.f1 += 1)
    { 
        uint16_t *l_942[3][4];
        union U3 **l_966 = &g_206;
        uint64_t l_969[7][3];
        int32_t l_979 = 0L;
        int32_t l_1038 = 0x06427B08L;
        union U1 **l_1066 = (void*)0;
        struct S0 l_1083[3] = {{1L,7L,0UL,0L,0},{1L,7L,0UL,0L,0},{1L,7L,0UL,0L,0}};
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_942[i][j] = (void*)0;
        }
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 3; j++)
                l_969[i][j] = 0xCECB37DD3BF2E0C6LL;
        }
        (*g_820) = g_575[(g_85.f1 + 1)];
        l_919[0][3] = (safe_div_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(g_575[(g_85.f1 + 1)], g_575[(g_85.f1 + 1)])) && 6L), ((*g_820) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_181[g_85.f1], l_919[0][3])), (l_920 , (g_832 != p_16.f0)))))));
        p_16.f4 = (safe_add_func_uint64_t_u_u((((((g_546 , g_90) , g_575[(g_85.f1 + 1)]) >= 0x11EB4C31AC1C3D45LL) <= 0x09L) <= (safe_mul_func_uint16_t_u_u((((*g_820) ^= 0L) > (((&g_546 == l_925) , 4294967293UL) || g_181[g_85.f1])), g_575[(g_85.f1 + 1)]))), 5L));
        if (g_76)
            goto lbl_1092;
    }
    if (g_546.f4)
        goto lbl_1136;
    for (g_669 = 0; (g_669 >= (-2)); --g_669)
    { 
        union U3 ***l_1097 = (void*)0;
        union U3 ****l_1096 = &l_1097;
        union U3 *****l_1095 = &l_1096;
        union U2 l_1103 = {0xD4FE54A3L};
        uint64_t l_1112 = 0xA5844ADCC2D5E488LL;
        uint16_t *l_1113 = &g_48;
        g_1098 = l_1095;
        (*g_820) ^= ((p_16.f3 > (((*l_1113) = ((((((safe_add_func_int32_t_s_s((1UL > (l_1103 , ((((safe_sub_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(l_919[0][2], (**g_948))), (safe_lshift_func_uint16_t_u_u((!p_16.f1), g_1067)))) <= l_1111) <= l_1103.f0) < (*g_319)))), 0L)) >= (-8L)) > 0xD9L) , 0xE3999336059639C2LL) != l_1112) >= p_16.f0)) <= 0xD557L)) && 3UL);
        (*g_820) = (safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u(p_16.f2)) & ((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(1UL, (g_777 , ((((*g_319) = ((((safe_lshift_func_int16_t_s_u((g_381 <= ((safe_rshift_func_int8_t_s_u((+(g_1041 |= 1UL)), ((((safe_lshift_func_uint16_t_u_u(7UL, 6)) == p_16.f4) & p_16.f0) < l_920.f0))) , l_1103.f0)), 13)) ^ 0x82L) , l_1128) == (void*)0)) <= p_16.f3) != p_16.f3)))) <= g_76), 0L)) | g_55.f0)) == g_572), l_919[0][3]));
    }
lbl_1136:
    l_1135 ^= (4294967288UL == (safe_add_func_int32_t_s_s(((g_80[3] , 8UL) != 18446744073709551607UL), ((-8L) | (safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((((p_16.f1 > p_16.f2) >= l_1006) != 0L), g_546.f0)), 13))))));
    l_1139--;
    (*l_1137) = ((*g_820) = ((*l_925) , ((((p_16.f4 && ((safe_mul_func_uint16_t_u_u((((g_1144 == ((*l_1151) = l_1148)) || (((((p_15 != (g_207[3].f3 = (((safe_mul_func_int16_t_s_s(((((*l_1163) |= (((safe_add_func_int32_t_s_s((((safe_div_func_int8_t_s_s((g_667 = ((safe_lshift_func_int16_t_s_s((g_263 ^ (l_1160[1][0][0] , 4UL)), p_15)) && g_1067)), 0xE4L)) & (*l_1137)) , 1L), 0x7D76F54EL)) , 0L) , p_16.f0)) >= (**g_1146)) | l_1164), p_16.f2)) & 9L) || (-1L)))) & 0xC1L) != l_1165) < (*l_1137)) < p_16.f4)) && 0x0CE32C93L), 0x273BL)) <= 0L)) < (-1L)) != (-3L)) | p_15)));
    return p_16.f3;
}



static uint8_t  func_21(int64_t  p_22, int32_t  p_23)
{ 
    uint32_t l_495 = 0x4B2BD2B9L;
    int32_t l_570[5][4][6] = {{{0x64C74B2BL,9L,(-2L),0x38B53E16L,(-3L),1L},{1L,5L,(-4L),5L,1L,9L},{1L,0x64C74B2BL,5L,0x38B53E16L,0xF2BA1160L,0xF2BA1160L},{0x64C74B2BL,(-3L),(-3L),0x64C74B2BL,(-4L),0xF2BA1160L}},{{(-2L),0xF2BA1160L,5L,9L,0x38B53E16L,9L},{(-4L),0x81E27CADL,(-4L),0xF6A4FDCAL,0x38B53E16L,1L},{5L,0xF2BA1160L,(-2L),(-4L),(-4L),(-2L)},{(-3L),(-3L),0x64C74B2BL,(-4L),0xF2BA1160L,0xF6A4FDCAL}},{{5L,0x64C74B2BL,1L,0xF6A4FDCAL,1L,0x64C74B2BL},{(-4L),5L,1L,9L,(-3L),0xF6A4FDCAL},{(-2L),9L,0x64C74B2BL,0x64C74B2BL,9L,(-2L)},{0x64C74B2BL,9L,(-2L),0x38B53E16L,(-3L),1L}},{{1L,5L,(-4L),5L,1L,9L},{1L,0x64C74B2BL,5L,0x38B53E16L,0xF2BA1160L,0xF2BA1160L},{0x64C74B2BL,(-3L),(-3L),0x64C74B2BL,(-4L),0xF2BA1160L},{(-2L),0xF2BA1160L,5L,9L,0x38B53E16L,9L}},{{(-4L),0x81E27CADL,(-4L),0xF6A4FDCAL,0x38B53E16L,1L},{5L,0xF2BA1160L,(-2L),(-4L),(-4L),(-2L)},{(-3L),(-3L),0x64C74B2BL,(-4L),0xF2BA1160L,0xF6A4FDCAL},{5L,0x64C74B2BL,1L,0xF6A4FDCAL,1L,0x64C74B2BL}}};
    union U4 *l_611 = &g_154;
    union U4 **l_610[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    union U2 **l_625[5];
    int32_t *l_686 = &g_76;
    int8_t l_696 = 0xA5L;
    uint64_t l_700 = 18446744073709551609UL;
    union U3 l_712[2][3][5] = {{{{0xFCE4L},{0x0FE1L},{0xFCE4L},{0x0FE1L},{0xFCE4L}},{{0x8CE9L},{0x8CE9L},{0UL},{0UL},{0x8CE9L}},{{65526UL},{0x0FE1L},{65526UL},{0x0FE1L},{65526UL}}},{{{0x8CE9L},{0UL},{0UL},{0x8CE9L},{0x8CE9L}},{{0xFCE4L},{0x0FE1L},{0xFCE4L},{0x0FE1L},{0xFCE4L}},{{0x8CE9L},{0x8CE9L},{0UL},{0UL},{0x8CE9L}}}};
    uint16_t *l_735 = (void*)0;
    uint16_t **l_734 = &l_735;
    int8_t l_744[4] = {1L,1L,1L,1L};
    struct S0 l_867[3] = {{-1L,0x44639676L,0xF146347368912333LL,0xA3L,-0},{-1L,0x44639676L,0xF146347368912333LL,0xA3L,-0},{-1L,0x44639676L,0xF146347368912333LL,0xA3L,-0}};
    uint64_t l_909 = 0xF564E45827B4DA62LL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_625[i] = (void*)0;
    if (p_23)
    { 
        uint16_t l_479 = 0x7155L;
        int32_t l_483[2];
        int32_t l_516[2][7] = {{(-1L),(-8L),(-1L),(-1L),(-8L),(-1L),(-1L)},{(-8L),(-8L),0xF3150E26L,(-8L),(-8L),0xF3150E26L,(-8L)}};
        uint16_t l_548 = 0xD116L;
        union U1 **l_560 = (void*)0;
        union U4 *l_562 = &g_154;
        union U4 * const *l_561 = &l_562;
        union U2 l_682 = {0xB0465F9CL};
        int16_t *l_683 = (void*)0;
        int32_t *l_685 = &l_516[0][6];
        int32_t *l_687 = &l_516[1][5];
        int32_t *l_688 = &l_570[2][0][5];
        int32_t *l_689 = (void*)0;
        int32_t *l_690 = &g_684;
        int32_t *l_691 = &l_483[1];
        int32_t *l_692 = &l_483[1];
        int32_t *l_694 = &g_76;
        int32_t *l_695[4];
        int i, j;
        for (i = 0; i < 2; i++)
            l_483[i] = (-1L);
        for (i = 0; i < 4; i++)
            l_695[i] = (void*)0;
        for (p_22 = (-23); (p_22 <= (-7)); ++p_22)
        { 
            uint8_t l_457 = 0xCEL;
            int8_t *l_458 = (void*)0;
            int8_t *l_459 = &g_196[4];
            int32_t l_464 = 1L;
            uint8_t l_476 = 253UL;
            int32_t l_482 = 0L;
            int32_t l_484 = 0xD9D8BA12L;
            union U1 l_620 = {0xB4L};
            int32_t *l_628 = &l_483[1];
            if ((safe_div_func_int8_t_s_s(l_457, ((*l_459) = (-4L)))))
            { 
                int32_t *l_460 = &g_76;
                int32_t *l_461 = &g_76;
                int32_t *l_462 = (void*)0;
                int32_t *l_463 = &g_76;
                int32_t *l_465 = &l_464;
                int32_t *l_466 = &l_464;
                int32_t *l_467 = &g_76;
                int32_t *l_468 = &g_76;
                int32_t *l_469 = (void*)0;
                int32_t *l_470 = &g_76;
                int32_t l_471 = 1L;
                int32_t *l_472 = (void*)0;
                int32_t *l_473 = (void*)0;
                int32_t *l_474[3][5][6] = {{{&l_471,(void*)0,(void*)0,&l_464,&l_464,(void*)0},{&l_464,&l_464,&g_76,&l_464,&g_76,&l_464},{&l_464,(void*)0,&l_464,&l_464,(void*)0,(void*)0},{&l_471,&l_464,&l_464,&l_464,&l_464,&l_464},{&l_464,&l_464,&g_76,&l_471,(void*)0,&l_464}},{{&l_464,(void*)0,&l_464,&g_76,&g_76,&g_76},{&l_464,&l_464,&l_464,(void*)0,&l_464,&l_464},{(void*)0,(void*)0,&g_76,&l_464,&l_464,&l_464},{&l_464,&l_464,&l_464,&l_464,&g_76,(void*)0},{(void*)0,&l_464,&l_464,(void*)0,&l_464,&l_464}},{{&l_464,&g_76,&g_76,&g_76,&l_464,(void*)0},{&l_464,&l_464,(void*)0,&l_471,&g_76,&l_464},{&l_464,&l_464,&l_464,&l_464,&l_464,&l_464},{&l_471,(void*)0,(void*)0,&l_464,&l_464,(void*)0},{&l_464,&l_464,&g_76,&l_464,&g_76,&l_464}}};
                uint16_t *l_492 = &g_48;
                int32_t l_501 = (-1L);
                uint32_t *l_515 = &g_207[3].f4;
                int32_t l_549 = (-5L);
                int i, j, k;
                l_476--;
                --l_479;
                --g_485;
                (*l_466) |= (p_22 , (safe_rshift_func_uint16_t_u_s((((65535UL ^ (((*l_492) = 0UL) & (safe_mul_func_int8_t_s_s(l_495, (~((l_495 , ((((((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(1L, 6)), (*g_319))) & (-1L)) != p_22) < 65527UL) || l_476) == l_501)) && (-9L))))))) & 0UL) , (*l_467)), 6)));
                if (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((+(safe_rshift_func_uint8_t_u_s(p_22, 4))) ^ ((((0xA2CDC77617FE4AA0LL || (l_464 = (safe_rshift_func_int8_t_s_s(((l_483[1] >= (l_516[1][5] ^= (safe_sub_func_uint64_t_u_u(l_476, 0x03703908D176D083LL)))) >= (safe_mul_func_uint16_t_u_u((*l_470), ((*l_470) & l_479)))), g_80[3])))) > l_495) < l_495) & p_23)), g_475)) ^ 0x799CL), p_23)), p_22)) > 0x2D1FL))
                { 
                    int32_t l_528 = 3L;
                    uint8_t *l_547 = &l_476;
                    union U4 * const **l_563 = &l_561;
                    struct S0 l_568[2][5][7] = {{{{0x1E6A884396A70DAFLL,-1L,0x1100BC54EC6D95A6LL,1L,-0},{0x453BB9D2CB634654LL,-1L,5UL,0x78L,0},{0x66A8991DED383B88LL,-8L,18446744073709551609UL,-9L,0},{0xDC0AE3FA1C3DF1BALL,-1L,18446744073709551615UL,-8L,-0},{0x66A8991DED383B88LL,-8L,18446744073709551609UL,-9L,0},{0x453BB9D2CB634654LL,-1L,5UL,0x78L,0},{0x1E6A884396A70DAFLL,-1L,0x1100BC54EC6D95A6LL,1L,-0}},{{0x1E6A884396A70DAFLL,-1L,0x1100BC54EC6D95A6LL,1L,-0},{1L,-10L,0xE5446FAC342DEE54LL,0x91L,-0},{0xF7164121E32FFEEBLL,0L,0xC481428103AB75C7LL,0xD2L,-0},{3L,-3L,0x1BB63FE7A8B4A642LL,-7L,-0},{0x453BB9D2CB634654LL,-1L,5UL,0x78L,0},{-1L,0x8018A1D5L,18446744073709551615UL,-1L,-0},{0x66A8991DED383B88LL,-8L,18446744073709551609UL,-9L,0}},{{-3L,0xB649A9A7L,0UL,0L,-0},{1L,1L,0xA197C6EF26CA4341LL,0xC4L,0},{2L,1L,0x227F4EFB914C635ELL,0x29L,-0},{-1L,0xE8A56CEBL,0x972C690CF99A9E58LL,-1L,0},{-10L,1L,0xB44AD30C9E96CAA0LL,0x1AL,0},{6L,-1L,0xCC9972FAF3B4D27DLL,0x79L,0},{1L,1L,0xA197C6EF26CA4341LL,0xC4L,0}},{{-10L,1L,0xB44AD30C9E96CAA0LL,0x1AL,0},{-3L,0L,18446744073709551612UL,0x95L,-0},{0xF7164121E32FFEEBLL,0L,0xC481428103AB75C7LL,0xD2L,-0},{-1L,0x5743E36CL,0x80D964076DD908C5LL,0x04L,-0},{0L,0x017B7A4FL,0xB63D270E7C306249LL,0x74L,0},{-10L,1L,0xB44AD30C9E96CAA0LL,0x1AL,0},{0L,0x017B7A4FL,0xB63D270E7C306249LL,0x74L,0}},{{2L,1L,0x227F4EFB914C635ELL,0x29L,-0},{0x66A8991DED383B88LL,-8L,18446744073709551609UL,-9L,0},{0x66A8991DED383B88LL,-8L,18446744073709551609UL,-9L,0},{2L,1L,0x227F4EFB914C635ELL,0x29L,-0},{0L,0x017B7A4FL,0xB63D270E7C306249LL,0x74L,0},{0xDE6F79BACFFE447CLL,0L,18446744073709551608UL,0x9CL,0},{3L,-3L,0x1BB63FE7A8B4A642LL,-7L,-0}}},{{{8L,0x9004BFDDL,0x9924687C76657BB5LL,0xA8L,-0},{0x453BB9D2CB634654LL,-1L,5UL,0x78L,0},{1L,-10L,0xE5446FAC342DEE54LL,0x91L,-0},{0L,0x5A303509L,0UL,0xFBL,0},{-10L,1L,0xB44AD30C9E96CAA0LL,0x1AL,0},{0xA5FD6ADE0E863DC8LL,0L,0x38D3E49FCB02DF14LL,0L,0},{0x1E6A884396A70DAFLL,-1L,0x1100BC54EC6D95A6LL,1L,-0}},{{0xA5FD6ADE0E863DC8LL,0L,0x38D3E49FCB02DF14LL,0L,0},{-10L,1L,0xB44AD30C9E96CAA0LL,0x1AL,0},{0L,0x5A303509L,0UL,0xFBL,0},{1L,-10L,0xE5446FAC342DEE54LL,0x91L,-0},{0x453BB9D2CB634654LL,-1L,5UL,0x78L,0},{8L,0x9004BFDDL,0x9924687C76657BB5LL,0xA8L,-0},{3L,-3L,0x1BB63FE7A8B4A642LL,-7L,-0}},{{0xDE6F79BACFFE447CLL,0L,18446744073709551608UL,0x9CL,0},{0L,0x017B7A4FL,0xB63D270E7C306249LL,0x74L,0},{2L,1L,0x227F4EFB914C635ELL,0x29L,-0},{0x66A8991DED383B88LL,-8L,18446744073709551609UL,-9L,0},{0x66A8991DED383B88LL,-8L,18446744073709551609UL,-9L,0},{2L,1L,0x227F4EFB914C635ELL,0x29L,-0},{0L,0x017B7A4FL,0xB63D270E7C306249LL,0x74L,0}},{{-10L,1L,0xB44AD30C9E96CAA0LL,0x1AL,0},{0L,0x017B7A4FL,0xB63D270E7C306249LL,0x74L,0},{-1L,0x5743E36CL,0x80D964076DD908C5LL,0x04L,-0},{0xF7164121E32FFEEBLL,0L,0xC481428103AB75C7LL,0xD2L,-0},{-3L,0L,18446744073709551612UL,0x95L,-0},{-10L,1L,0xB44AD30C9E96CAA0LL,0x1AL,0},{1L,1L,0xA197C6EF26CA4341LL,0xC4L,0}},{{6L,-1L,0xCC9972FAF3B4D27DLL,0x79L,0},{-10L,1L,0xB44AD30C9E96CAA0LL,0x1AL,0},{-1L,0xE8A56CEBL,0x972C690CF99A9E58LL,-1L,0},{2L,1L,0x227F4EFB914C635ELL,0x29L,-0},{1L,1L,0xA197C6EF26CA4341LL,0xC4L,0},{-3L,0xB649A9A7L,0UL,0L,-0},{0x66A8991DED383B88LL,-8L,18446744073709551609UL,-9L,0}}}};
                    int i, j, k;
                    if (l_476)
                        break;
                    l_528 = ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((*g_206) , (~(g_85 , (((*l_460) = 1L) ^ ((*l_466) = ((((safe_lshift_func_uint8_t_u_u(g_90, 2)) , ((safe_mul_func_int16_t_s_s((l_483[1] || (*g_319)), 0x6EC0L)) ^ 0xFF35097EL)) ^ l_464) ^ 0xDB755E30A0263833LL)))))), p_22)), p_22)) && 0xC99BL);
                    (*l_470) |= (safe_mul_func_int8_t_s_s((+(safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((!((l_548 = (((*l_547) = (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((0x7614259AL >= (&l_461 != (void*)0)) || l_495), l_495)), ((safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(8L, (g_546 , l_495))), l_495)))) & g_55.f0)))) && 0xC2L)) || l_549)), g_55.f1)) && g_485), l_464))), p_23));
                    if (p_22)
                        continue;
                    p_23 &= (safe_add_func_int64_t_s_s(l_495, (safe_mul_func_uint8_t_u_u(g_74.f4, (safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((void*)0 != l_560), (&g_153 != ((*l_563) = l_561)))) && ((((safe_sub_func_int32_t_s_s(((*l_466) = ((((safe_add_func_uint32_t_u_u(((*l_515) = (l_568[0][1][5] , p_22)), p_22)) && (*l_467)) | l_568[0][1][5].f0) != 1L)), l_568[0][1][5].f0)) <= l_457) | p_22) < g_76)), g_81))))));
                }
                else
                { 
                    int32_t **l_569 = &l_469;
                    int32_t l_571 = 0x49C17993L;
                    int32_t l_573 = 0xA4A8E8B3L;
                    (*l_467) = 0L;
                    g_75 = &g_76;
                    (*l_569) = (void*)0;
                    g_575[3]--;
                }
            }
            else
            { 
                uint32_t l_597 = 2UL;
                uint32_t l_621 = 0x3E08397DL;
                int32_t *l_622 = &l_516[1][5];
                for (g_263 = (-13); (g_263 <= 7); ++g_263)
                { 
                    uint32_t l_583[4][1] = {{4294967295UL},{0x0730A774L},{4294967295UL},{0x0730A774L}};
                    int32_t *l_586 = &l_483[1];
                    int32_t *l_587 = &l_464;
                    int32_t *l_588 = &l_516[1][5];
                    int32_t *l_589 = (void*)0;
                    int32_t *l_590 = (void*)0;
                    int32_t *l_591 = &l_516[0][6];
                    int32_t *l_592 = &l_516[0][2];
                    int32_t *l_593 = (void*)0;
                    int32_t *l_594 = &g_76;
                    int32_t *l_595 = (void*)0;
                    int32_t *l_596[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t **l_607 = &l_586;
                    int i, j;
                    (*l_586) = (~(((g_572 > (((g_76 && (safe_rshift_func_int8_t_s_u(0x66L, l_583[3][0]))) < ((safe_lshift_func_int16_t_s_s((g_198 || g_575[3]), p_22)) , (*g_319))) != g_196[4])) , l_482) <= 4L));
                    l_597--;
                    l_570[4][1][0] ^= (safe_lshift_func_int8_t_s_s(0xF2L, (safe_mul_func_int16_t_s_s(((((*g_319) &= p_23) >= (p_23 < (+(-1L)))) , (((safe_mul_func_int16_t_s_s(p_23, ((((*l_607) = (void*)0) != ((g_207[3].f3 ^= g_55.f1) , &p_23)) && 0x1BB9ABF9L))) >= g_575[2]) >= p_23)), p_23))));
                    p_23 ^= p_22;
                    g_206 = &g_207[0];
                }
                for (p_23 = 0; (p_23 != (-20)); p_23 = safe_sub_func_int8_t_s_s(p_23, 2))
                { 
                    union U4 **l_612 = &l_611;
                    l_612 = l_610[2];
                }
                (*l_622) = (safe_lshift_func_int16_t_s_s(l_597, (+(safe_mul_func_int16_t_s_s(((l_483[1] ^ ((l_620 , 0xC97F86459A5AE108LL) & (l_484 , ((0x7CD63B27E8873B0ALL <= l_620.f0) < l_597)))) <= 0UL), l_621)))));
                (*l_622) = (*l_622);
            }
            (*l_628) = ((safe_mul_func_int32_t_s_s(6L, (l_625[3] != g_626))) > (p_22 <= p_22));
            if (l_479)
                continue;
        }
        for (g_320 = 18; (g_320 >= (-9)); g_320 = safe_sub_func_int32_t_s_s(g_320, 7))
        { 
            uint32_t l_633 = 0x890F276AL;
            int32_t l_642[5];
            union U3 l_643[3][5] = {{{65534UL},{0UL},{0UL},{65534UL},{0UL}},{{65534UL},{65534UL},{1UL},{65534UL},{65534UL}},{{0UL},{65534UL},{0UL},{0UL},{65534UL}}};
            int i, j;
            for (i = 0; i < 5; i++)
                l_642[i] = 0x68971AE0L;
            for (p_22 = 0; (p_22 >= (-17)); --p_22)
            { 
                uint8_t l_639 = 0x62L;
                int16_t *l_644 = &g_80[3];
                int32_t *l_645 = &l_516[1][5];
                (*l_645) |= (l_633 , (g_207[3].f3 & (((!((*l_644) = (safe_add_func_int8_t_s_s(p_22, (((safe_lshift_func_uint16_t_u_s((((&g_198 == (void*)0) , l_639) == (safe_mul_func_uint8_t_u_u((((g_475 = l_642[0]) , l_643[0][1]) , 0xA2L), 0xC8L))), 6)) || 0x95C154F1D85A6FBFLL) != 0x36FAE6D1L))))) < 0xCA425A7515C24016LL) || 0x43L)));
                if (l_495)
                    continue;
                for (g_154.f1 = 0; (g_154.f1 != 38); g_154.f1 = safe_add_func_int8_t_s_s(g_154.f1, 1))
                { 
                    uint32_t *l_665[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_666 = 0x354F4144L;
                    uint8_t *l_668 = &g_181[2];
                    int i;
                    g_669 = (safe_add_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(l_483[1], g_575[1])) | ((*l_645) = ((safe_rshift_func_uint8_t_u_u(p_23, g_74.f0)) <= (safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((g_485 &= (safe_mod_func_int64_t_s_s(((!((*l_668) = (safe_div_func_int8_t_s_s((l_570[2][0][4] == (l_666 |= g_546.f4)), g_667)))) >= 0UL), l_570[1][3][2]))) | l_516[1][2]), (-1L))), 0x39L)), 0x56ADABFFL))))) & 0x063BA99DL), 0x846CL));
                }
            }
            if (p_23)
                break;
        }
        (*l_685) &= ((((l_570[4][1][1] = (safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_u((((safe_mul_func_int8_t_s_s(g_181[2], (!g_475))) || g_381) ^ (((0x19138673L >= 0x84590B85L) & (((safe_unary_minus_func_uint32_t_u((+(safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((((*g_627) , l_682) , (-1L)), 0xE3DA583CL)), p_22))))) || g_263) ^ (*g_319))) && 0x2C8EL)), 1))))) < (-6L)) > g_684) == 0x92L);
        if ((*l_685))
        { 
            return p_23;
        }
        else
        { 
            l_686 = &l_516[1][5];
        }
        --l_700;
    }
    else
    { 
        int32_t *l_703 = &g_76;
        int32_t *l_704 = &l_570[0][2][4];
        int32_t *l_705 = (void*)0;
        int32_t *l_706[5][4][3] = {{{&g_684,&l_570[2][3][0],&g_684},{(void*)0,&g_684,&g_684},{&l_570[2][3][0],&l_570[4][1][1],&l_570[4][1][1]},{&l_570[3][2][3],(void*)0,&g_684}},{{&g_684,&g_697,&g_684},{&l_570[2][2][4],&g_684,&g_684},{(void*)0,&g_76,(void*)0},{&g_684,&g_684,&l_570[2][2][4]}},{{&g_684,&g_697,&g_684},{&g_684,(void*)0,&l_570[3][2][3]},{&l_570[4][1][1],&l_570[4][1][1],&l_570[2][3][0]},{&g_684,&g_684,(void*)0}},{{&g_684,&l_570[2][3][0],&g_684},{&g_684,&g_684,&g_684},{(void*)0,&g_684,&g_684},{&l_570[2][2][4],&g_684,(void*)0}},{{&g_684,&l_570[4][1][1],&l_570[2][3][0]},{&l_570[3][2][3],(void*)0,&l_570[3][2][3]},{&l_570[2][3][0],&l_570[4][1][1],&g_684},{(void*)0,&g_684,&l_570[2][2][4]}}};
        int32_t l_723[4];
        union U3 l_829[7] = {{0x5056L},{0x5056L},{0x5056L},{0x5056L},{0x5056L},{0x5056L},{0x5056L}};
        union U1 *l_847 = &g_74;
        int64_t *l_863 = &g_546.f0;
        uint16_t **l_889 = &l_735;
        int8_t l_895 = 0xB7L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_723[i] = 0xEF1CF328L;
lbl_746:
        --g_707;
lbl_805:
        g_684 &= (g_475 || (((((*g_319) > g_693) <= (*l_704)) < (safe_add_func_int64_t_s_s((*g_319), (g_207[3].f3 & (((l_712[0][2][4] , 0x924870A3L) == (*l_686)) , g_8))))) > p_23));
        for (g_546.f3 = (-29); (g_546.f3 < (-2)); g_546.f3 = safe_add_func_uint16_t_u_u(g_546.f3, 2))
        { 
            uint16_t *l_741 = &g_154.f1;
            int32_t l_745[5] = {1L,1L,1L,1L,1L};
            int32_t *l_800 = &g_697;
            int i;
            for (g_699 = 0; (g_699 <= 3); g_699 += 1)
            { 
                union U3 *l_715 = &g_207[1];
                union U3 **l_716 = &l_715;
                uint64_t *l_721[4][1] = {{&l_700},{&g_381},{&l_700},{&g_381}};
                uint64_t **l_722 = &l_721[0][0];
                int i, j;
                (*l_716) = l_715;
                (*l_686) = (l_723[2] = ((*l_704) = ((--g_105) & (((*l_722) = l_721[3][0]) != (void*)0))));
            }
            if (p_22)
                break;
            for (g_698 = (-29); (g_698 >= (-19)); g_698 = safe_add_func_int8_t_s_s(g_698, 6))
            { 
                int32_t l_766 = 0xBAE702CEL;
                int32_t *l_768 = &l_745[2];
                for (g_475 = 4; (g_475 >= 1); g_475 -= 1)
                { 
                    uint16_t ***l_732 = (void*)0;
                    uint16_t ***l_733 = &g_436;
                    int32_t l_742[2][7][5] = {{{0xBFFAFC40L,0xB44B1B44L,0x180024F9L,0x98E987EFL,0x98E987EFL},{0xCDD1B2DEL,0x6980F66EL,0xCDD1B2DEL,0L,1L},{0xD9C12192L,0x98E987EFL,0xB44B1B44L,0L,0x6D440F6AL},{1L,0x073861C2L,(-1L),(-1L),0x073861C2L},{0x180024F9L,(-1L),0xB44B1B44L,0x6D440F6AL,0x091FC0D4L},{0x6980F66EL,1L,0xCDD1B2DEL,(-4L),0x990FA4FCL},{0x1D5D0146L,0x180024F9L,0x180024F9L,0x1D5D0146L,0x200105EBL}},{{0x6980F66EL,(-1L),0x2A491C4FL,0x0D2A675BL,(-4L)},{0x180024F9L,1L,1L,0xB44B1B44L,1L},{1L,1L,(-4L),0x0D2A675BL,0x2A491C4FL},{0xD9C12192L,0L,0x200105EBL,0x1D5D0146L,0x180024F9L},{0xCDD1B2DEL,(-4L),0x990FA4FCL,(-4L),0xCDD1B2DEL},{0xBFFAFC40L,0L,0x091FC0D4L,0x6D440F6AL,0xB44B1B44L},{0x0D2A675BL,1L,0x073861C2L,(-1L),(-1L)}}};
                    int16_t *l_743[1][6];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_743[i][j] = &g_80[3];
                    }
                    (*l_704) ^= (l_745[2] = ((0x73117839L > ((g_81 & ((safe_mod_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u(((*l_686) = (safe_add_func_int64_t_s_s(((p_23 <= (((((*l_733) = g_436) == l_734) , ((!(safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((((void*)0 != l_741) , g_698), p_23)), p_23))) > (*l_686))) >= 0x7CL)) || l_742[0][3][1]), (-7L)))), p_23)) , l_744[3]) == 4UL), 0x62A2B512L)) ^ 0L)) && 0x43F12CA6L)) ^ g_320));
                }
                if (g_693)
                    goto lbl_746;
                for (g_707 = 0; (g_707 != 0); g_707 = safe_add_func_int16_t_s_s(g_707, 8))
                { 
                    (*l_686) = p_22;
                }
                for (g_154.f0 = 0; (g_154.f0 > 25); g_154.f0 = safe_add_func_uint16_t_u_u(g_154.f0, 2))
                { 
                    uint32_t l_755 = 0x670621BFL;
                    int64_t *l_759 = &g_572;
                    uint64_t *l_764[7][5] = {{&g_381,&l_700,(void*)0,&l_700,&g_381},{&g_90,&g_90,&g_381,(void*)0,&g_381},{&l_700,&l_700,(void*)0,&g_381,&l_700},{&g_90,&g_90,&g_90,&g_90,&g_381},{&l_700,&g_546.f2,(void*)0,(void*)0,&g_546.f2},{&g_90,(void*)0,&l_700,&g_381,&g_381},{&g_381,&l_700,&g_381,(void*)0,&l_700}};
                    int32_t l_765 = (-5L);
                    uint16_t *l_767[6][6][1] = {{{(void*)0},{&g_48},{(void*)0},{&l_712[0][2][4].f0},{&g_207[3].f0},{&l_712[0][2][4].f0}},{{&g_207[3].f0},{&l_712[0][2][4].f0},{&g_207[3].f0},{&l_712[0][2][4].f0},{(void*)0},{&g_48}},{{(void*)0},{&l_712[0][2][4].f0},{&g_207[3].f0},{&l_712[0][2][4].f0},{&g_207[3].f0},{&l_712[0][2][4].f0}},{{&g_207[3].f0},{&l_712[0][2][4].f0},{(void*)0},{&g_48},{(void*)0},{&l_712[0][2][4].f0}},{{&g_207[3].f0},{&l_712[0][2][4].f0},{&g_207[3].f0},{&l_712[0][2][4].f0},{&g_207[3].f0},{&l_712[0][2][4].f0}},{{(void*)0},{&g_48},{(void*)0},{&l_712[0][2][4].f0},{&g_207[3].f0},{&l_712[0][2][4].f0}}};
                    int16_t *l_774 = &g_207[3].f1;
                    int16_t *l_775 = &l_712[0][2][4].f1;
                    int16_t *l_776 = &g_777;
                    int i, j, k;
                    (*l_704) = ((((((safe_mul_func_uint16_t_u_u((g_154.f0 ^ (safe_sub_func_int16_t_s_s(l_755, (+(((safe_add_func_uint64_t_u_u((l_759 != (void*)0), (((safe_mul_func_uint16_t_u_u((g_207[3].f0 ^= (l_745[2] < ((((*l_703) = (((safe_add_func_int64_t_s_s(4L, (l_765 = (0UL > p_23)))) && g_667) | l_766)) | (*l_704)) > 1L))), l_766)) == 1UL) && p_22))) & l_712[0][2][4].f2) & p_23))))), l_745[2])) ^ g_697) , l_745[4]) | p_23) , l_766) ^ 0UL);
                    g_75 = l_768;
                    (*g_75) = (safe_unary_minus_func_int8_t_s(((g_80[3] >= ((((((safe_mul_func_uint8_t_u_u(l_755, g_362)) | (safe_mod_func_int16_t_s_s(((*l_776) ^= (l_712[1][2][4] , ((0x82L && p_22) & (((*l_774) = ((*l_775) = g_207[3].f0)) > (*l_686))))), 0x0A31L))) && 0xE4FA2331ED8499E3LL) , (void*)0) != &g_436) == p_23)) ^ p_23)));
                }
            }
            for (g_777 = 6; (g_777 != (-16)); --g_777)
            { 
                uint64_t *l_780 = (void*)0;
                uint64_t *l_781 = (void*)0;
                uint64_t *l_782[7][4][2] = {{{(void*)0,&l_700},{&l_700,(void*)0},{&g_90,&l_700},{&g_381,&l_700}},{{&g_90,(void*)0},{&l_700,&l_700},{(void*)0,&l_700},{&g_381,(void*)0}},{{&l_700,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{&g_381,&g_90},{&l_700,(void*)0},{&l_700,&g_381},{(void*)0,&l_700}},{{(void*)0,(void*)0},{(void*)0,&l_700},{(void*)0,&g_381},{&l_700,(void*)0}},{{&l_700,&g_90},{&g_381,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{&l_700,(void*)0},{&g_381,&l_700},{(void*)0,&l_700}}};
                int16_t *l_796[7][7] = {{(void*)0,&l_712[0][2][4].f1,&g_207[3].f1,&l_712[0][2][4].f1,(void*)0,(void*)0,&l_712[0][2][4].f1},{&g_777,&l_712[0][2][4].f1,&g_777,(void*)0,(void*)0,&g_777,&l_712[0][2][4].f1},{&l_712[0][2][4].f1,&g_80[2],&g_207[3].f1,&g_207[3].f1,&g_80[2],&l_712[0][2][4].f1,&g_80[2]},{&g_777,(void*)0,(void*)0,&g_777,&l_712[0][2][4].f1,&g_777,(void*)0},{(void*)0,(void*)0,&l_712[0][2][4].f1,&g_207[3].f1,&l_712[0][2][4].f1,(void*)0,(void*)0},{&l_712[0][2][4].f1,(void*)0,(void*)0,(void*)0,&l_712[0][2][4].f1,&l_712[0][2][4].f1,(void*)0},{&g_80[3],&g_80[2],&g_80[3],&l_712[0][2][4].f1,&l_712[0][2][4].f1,&g_80[3],&g_80[2]}};
                int32_t l_797 = (-4L);
                uint64_t l_802 = 0x413669A9CC32289CLL;
                uint8_t *l_810 = &g_181[2];
                int64_t l_818 = 0x1487E6D129D8FA7ELL;
                union U1 l_819 = {0x8FL};
                union U4 l_835 = {0x41C7F091L};
                int i, j, k;
                if (((g_90 = 0x58646DB6870B0497LL) <= ((((p_22 == (l_797 = (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((~((((void*)0 != g_788) != (*l_703)) | (l_745[4] = (safe_mul_func_uint8_t_u_u(g_575[3], (safe_sub_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(p_22, p_22)) || 0UL), 0L))))))) > p_22), 0x875AL)), 0xF4E1L)))) < g_263) < (*l_704)) < 0L)))
                { 
                    (*l_703) |= l_745[4];
                    return g_74.f4;
                }
                else
                { 
                    union U3 l_798 = {0UL};
                    int32_t **l_799 = (void*)0;
                    int32_t l_801[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_801[i] = 1L;
                    l_800 = (((0xBB468B291B5637BBLL == (l_798 , g_128)) & ((-2L) == g_80[3])) , &l_797);
                    if (p_22)
                        continue;
                    l_802--;
                    if (g_381)
                        goto lbl_805;
                }
                (*l_686) &= p_23;
                if ((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((*l_810) = g_8), (((*l_741)++) & (safe_mod_func_int64_t_s_s((0UL && (safe_rshift_func_int16_t_s_s(p_22, 9))), (p_22 , g_693)))))), 12)))
                { 
                    union U1 l_817[5][5][6] = {{{{0xBBL},{0x00L},{0xC2L},{-8L},{0L},{0xBBL}},{{0L},{0x2BL},{-6L},{0x2BL},{0L},{-10L}},{{0x49L},{0x96L},{0L},{1L},{0x49L},{0L}},{{0x24L},{6L},{1L},{0x96L},{0xBBL},{0L}},{{0x62L},{0L},{0L},{0xC2L},{0xCBL},{-10L}}},{{{0xBBL},{0x0BL},{-6L},{-6L},{0x0BL},{0x24L}},{{0xCBL},{0x49L},{6L},{0L},{0xBBL},{0x96L}},{{-6L},{0x24L},{-1L},{-6L},{-6L},{-8L}},{{-6L},{0x62L},{-6L},{0L},{-1L},{0xC2L}},{{0xCBL},{0xBBL},{1L},{0x0BL},{1L},{0xBBL}}},{{{0x24L},{-10L},{0x49L},{6L},{0xE7L},{0x24L}},{{0x96L},{0L},{0L},{-1L},{0xBBL},{0L}},{{-8L},{0L},{0x49L},{-6L},{0xE7L},{0xE8L}},{{0xC2L},{-10L},{-6L},{1L},{1L},{-6L}},{{0xBBL},{0xBBL},{0x24L},{0x49L},{-1L},{0x2BL}}},{{{0x24L},{0x62L},{0x00L},{0L},{-6L},{0x24L}},{{0L},{0x24L},{0x00L},{0x49L},{0xBBL},{0x2BL}},{{0xE8L},{0x49L},{0x24L},{-6L},{0L},{-6L}},{{-6L},{0L},{-6L},{0x24L},{0x49L},{0xE8L}},{{0x2BL},{0xBBL},{0x49L},{0x00L},{0x24L},{0L}}},{{{0x24L},{-6L},{0L},{0x00L},{0x62L},{0x24L}},{{0x2BL},{-1L},{0x49L},{0x24L},{0xBBL},{0xBBL}},{{-6L},{1L},{1L},{-6L},{-10L},{0xC2L}},{{0xE8L},{0xE7L},{-6L},{0x49L},{0L},{-8L}},{{0L},{0xBBL},{-1L},{0L},{0L},{0x96L}}}};
                    int32_t **l_821 = (void*)0;
                    int32_t **l_822 = &l_686;
                    int i, j, k;
                    (*l_703) = (l_817[1][3][2] , (l_818 >= (l_819 , p_23)));
                    (*l_822) = g_820;
                }
                else
                { 
                    uint32_t *l_833 = &l_829[5].f4;
                    uint32_t *l_834 = &l_495;
                    int32_t l_836[3][3];
                    struct S0 *l_842[1][1][4] = {{{&g_546,&g_546,&g_546,&g_546}}};
                    struct S0 **l_841 = &l_842[0][0][0];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_836[i][j] = (-9L);
                    }
                    if ((*l_800))
                        break;
                    if (p_22)
                        continue;
                    l_836[0][1] |= (!((safe_add_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((+((l_829[5] , (((*l_834) &= (safe_sub_func_int32_t_s_s(g_832, ((*l_686) = ((*g_319) ^ p_22))))) == ((((g_196[4] == (l_835 , (((g_74 , &l_700) != &l_802) , p_23))) || 0x4B958BB45D303E97LL) , p_22) >= 0xA1BCL))) < g_195)), g_572)) || 0UL), p_23)) ^ g_90));
                    ++g_838;
                    (*l_841) = &g_546;
                }
            }
            (*l_703) = ((safe_add_func_int64_t_s_s((-4L), (safe_div_func_int16_t_s_s(0x2D46L, g_195)))) && p_22);
        }
        if (((l_847 == ((*l_847) , l_847)) || (*l_686)))
        { 
            if (p_22)
            { 
                union U3 l_854 = {65533UL};
                (*l_704) |= ((-1L) <= ((safe_sub_func_uint8_t_u_u(((((((safe_add_func_uint16_t_u_u(65535UL, ((0x22152B6FADF914E4LL <= 0xC6E30C32DB848422LL) < (safe_div_func_uint16_t_u_u((l_854 , g_572), (+((((*g_319) = (safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(1UL, 7UL)), g_207[3].f0))) <= (-1L)) == (-7L)))))))) == 0x5D70945594F143B4LL) <= (*g_820)) > 1L) <= 0x1FL) & 0x2E01L), (*l_686))) == 18446744073709551612UL));
            }
            else
            { 
lbl_880:
                (*l_703) = (safe_add_func_uint16_t_u_u(g_55.f0, 9UL));
                return (*l_686);
            }
        }
        else
        { 
            uint16_t ****l_879 = (void*)0;
            int32_t l_881 = 0x46A7AD03L;
            uint32_t l_882 = 8UL;
            for (g_832 = 0; (g_832 <= 2); g_832 += 1)
            { 
                int32_t *l_868 = &g_76;
                uint16_t ***l_877[5][4] = {{&l_734,&g_436,&l_734,&g_436},{&l_734,&g_436,&l_734,&g_436},{&l_734,&g_436,&l_734,&g_436},{&l_734,&g_436,&l_734,&g_436},{&l_734,&g_436,&l_734,&g_436}};
                uint16_t ****l_876 = &l_877[2][2];
                int i, j;
                (*l_686) = ((*g_206) , 9L);
                for (g_85.f1 = 0; (g_85.f1 <= 2); g_85.f1 += 1)
                { 
                    const int32_t *l_866 = (void*)0;
                    const int32_t **l_865 = &l_866;
                    uint16_t *****l_878 = &l_876;
                    p_23 = (*g_820);
                    (*l_704) = ((*g_820) = (g_875 = ((+((g_319 = l_863) == (void*)0)) , (((!(*g_820)) < (((*l_865) = &p_23) != (l_867[2] , l_868))) && (safe_mod_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u(((0x29EFL && g_699) ^ 8UL), 0xACL)) && 0L), p_22)) , g_546.f1), 0xA8L))))));
                    l_879 = ((*l_878) = l_876);
                }
            }
            if (g_546.f2)
                goto lbl_880;
            l_882++;
        }
        for (g_105 = 0; (g_105 <= 3); g_105 += 1)
        { 
            int32_t *l_894 = &l_723[2];
            int32_t l_896[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_896[i][j] = 9L;
            }
            if (g_575[g_105])
                break;
            (*l_686) = ((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((void*)0 != l_889), 0xA298L)), p_23)) ^ ((((*l_894) = (safe_add_func_int8_t_s_s((18446744073709551613UL | ((safe_rshift_func_int8_t_s_u(g_207[3].f1, 1)) > ((*l_704) = p_23))), g_105))) , 0x4994L) , 0x4E1E30E1BB76B5D5LL));
            for (g_837 = 0; (g_837 <= 3); g_837 += 1)
            { 
                uint16_t l_897 = 0UL;
                union U3 *l_904 = (void*)0;
                l_897++;
                for (g_546.f3 = 0; (g_546.f3 <= 2); g_546.f3 += 1)
                { 
                    uint8_t *l_902 = &g_85.f1;
                    int i;
                    l_686 = &p_23;
                    (*l_686) ^= (safe_div_func_int16_t_s_s(g_181[g_546.f3], (254UL ^ ((*l_902) = 0UL))));
                    if (g_903)
                        break;
                }
                for (g_320 = 0; (g_320 <= 3); g_320 += 1)
                { 
                    (*l_703) = l_896[1][0];
                    l_896[2][0] = l_897;
                    (*g_788) = l_847;
                }
                if (p_23)
                    continue;
                if (p_23)
                { 
                    l_904 = &g_207[0];
                    (*l_703) &= (safe_rshift_func_int8_t_s_u(p_23, 0));
                    return p_23;
                }
                else
                { 
                    (*l_703) = (safe_rshift_func_uint8_t_u_u(0UL, 6));
                }
            }
            for (g_837 = 0; (g_837 <= 3); g_837 += 1)
            { 
                for (g_832 = 0; (g_832 <= 3); g_832 += 1)
                { 
                    (*l_704) |= (*l_686);
                    if ((*l_686))
                        continue;
                }
            }
        }
    }
    return l_909;
}



static union U4  func_24(int32_t  p_25, union U3  p_26, uint16_t  p_27, int64_t  p_28)
{ 
    uint64_t l_44 = 0UL;
    uint16_t *l_47 = &g_48;
    int32_t l_53 = 0xCC114FF6L;
    union U2 l_54[4][1] = {{{0UL}},{{0UL}},{{0UL}},{{0UL}}};
    int32_t l_297 = (-9L);
    uint64_t l_306 = 0UL;
    uint64_t l_307[5];
    int32_t l_346 = 1L;
    int32_t l_353 = 0x3323BC56L;
    int32_t l_360 = 0x210DF2F0L;
    int32_t l_361 = 0x127DB236L;
    int32_t l_403 = (-2L);
    union U4 l_451 = {1L};
    int i, j;
    for (i = 0; i < 5; i++)
        l_307[i] = 0UL;
    if (((safe_sub_func_uint8_t_u_u(255UL, ((safe_mod_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((safe_div_func_int16_t_s_s(g_8, func_39(l_44, ((((l_44 >= (safe_rshift_func_uint16_t_u_s(((*l_47) = p_26.f1), (l_53 |= ((safe_lshift_func_int8_t_s_u((0x2FC9L | (safe_lshift_func_uint16_t_u_u(l_44, l_44))), p_26.f3)) >= 0xF8L))))) ^ l_44) <= 0UL) > 0x39CE85662B132DC1LL), l_54[3][0], g_55))), 18446744073709551609UL)) && 0x2FL), l_44)) && (*g_75)))) > g_55.f1))
    { 
        uint32_t l_282 = 0x93FC5627L;
        int32_t l_287[4][5] = {{0x1A7FB561L,(-1L),0x1A7FB561L,(-9L),(-9L)},{(-1L),0x95C358ABL,(-1L),(-7L),(-7L)},{0x1A7FB561L,(-1L),0x1A7FB561L,(-9L),(-9L)},{(-1L),0x95C358ABL,(-1L),(-7L),(-7L)}};
        int32_t *l_296[3][2] = {{&l_287[0][4],&l_53},{&l_53,&l_287[0][4]},{&l_53,&l_53}};
        union U4 l_310 = {0x8E65868CL};
        uint16_t l_312 = 2UL;
        int i, j;
        l_53 |= ((safe_rshift_func_int16_t_s_s(g_181[1], ((l_282--) && ((safe_div_func_int16_t_s_s(l_282, 1UL)) > (((*l_47)--) , 3L))))) == ((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((g_207[3].f0 != ((*g_75) = (l_297 &= (safe_sub_func_uint32_t_u_u(((-1L) < ((p_26.f1 , g_76) <= p_26.f1)), (*g_75)))))), g_81)), g_128)) != (-1L)));
        l_312 &= (((safe_sub_func_int64_t_s_s((safe_add_func_int16_t_s_s(g_198, 9L)), (safe_lshift_func_uint16_t_u_s((0UL != (safe_sub_func_uint64_t_u_u(l_306, (l_307[0] = g_74.f0)))), (safe_rshift_func_uint16_t_u_u((l_310 , (~p_28)), 11)))))) == g_196[1]) | 0xDDL);
    }
    else
    { 
        uint32_t l_325 = 1UL;
        int32_t * const l_329 = (void*)0;
        uint32_t l_335 = 0x380A52FBL;
        int32_t *l_345 = (void*)0;
        int32_t *l_347 = &g_76;
        int32_t *l_348 = &l_346;
        int32_t *l_349 = &l_53;
        int32_t *l_350 = &l_346;
        int32_t *l_351 = &l_53;
        int32_t *l_352 = &l_53;
        int32_t *l_354 = &l_346;
        int32_t *l_355 = &l_353;
        int32_t *l_356 = (void*)0;
        int32_t *l_357 = &l_346;
        int32_t *l_358 = &g_76;
        int32_t *l_359[1];
        int16_t l_390 = 0x6B76L;
        uint8_t *l_438 = (void*)0;
        uint8_t *l_439 = (void*)0;
        uint8_t *l_440 = &g_85.f1;
        uint8_t *l_441[3];
        int32_t *l_449 = &l_353;
        int32_t **l_450 = &l_358;
        int i;
        for (i = 0; i < 1; i++)
            l_359[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_441[i] = (void*)0;
lbl_395:
        for (p_25 = 0; (p_25 != 2); ++p_25)
        { 
            union U4 *l_323 = &g_154;
            int8_t *l_324[2][2][7] = {{{&g_74.f0,&g_195,&g_74.f0,&g_74.f0,&g_195,&g_74.f0,&g_74.f0},{&g_195,&g_195,&g_74.f0,&g_195,&g_195,&g_74.f0,&g_195}},{{&g_195,&g_74.f0,&g_74.f0,&g_195,&g_74.f0,&g_74.f0,&g_195},{&g_74.f0,&g_74.f0,&g_74.f0,&g_74.f0,&g_74.f0,&g_74.f0,&g_74.f0}}};
            int32_t l_326[7] = {5L,5L,(-7L),5L,5L,(-7L),5L};
            int32_t l_344 = 0x57922EA5L;
            int i, j, k;
            if (((65531UL > ((safe_lshift_func_uint16_t_u_s((p_26.f0 <= (safe_rshift_func_int8_t_s_u((g_319 != &g_320), 3))), (safe_rshift_func_int16_t_s_s(((l_323 == l_323) ^ ((l_325 = 0xCCL) , g_8)), g_181[2])))) || l_326[3])) == 0L))
            { 
                for (l_44 = (-21); (l_44 <= 60); l_44 = safe_add_func_int32_t_s_s(l_44, 1))
                { 
                    int32_t **l_330 = &g_75;
                    (*l_330) = (p_26.f0 , l_329);
                }
                return (*l_323);
            }
            else
            { 
                int32_t *l_333 = &l_53;
                uint8_t *l_338 = &g_181[2];
                if ((safe_rshift_func_int16_t_s_u(0x31A8L, p_26.f1)))
                { 
                    int32_t l_334 = (-1L);
                    l_333 = (void*)0;
                    (*g_75) = l_44;
                    l_334 = ((*g_75) &= 1L);
                }
                else
                { 
                    if (l_335)
                        break;
                    if (p_26.f2)
                        break;
                    (*l_333) |= (safe_mul_func_int8_t_s_s(p_28, 0xA5L));
                }
                (*g_75) ^= ((void*)0 != l_338);
            }
            (*g_75) |= (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(0x7AL, 2)), ((+((((void*)0 != &g_153) == l_306) | p_26.f2)) && 1L)));
            l_344 ^= (*g_75);
            (*g_75) ^= (-1L);
        }
        g_362++;
        (*l_351) = ((safe_rshift_func_int16_t_s_s((0x35D0FB07C8B32E1CLL > (safe_rshift_func_int16_t_s_u(((((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(p_25, l_346)), 0UL)) , (safe_sub_func_int16_t_s_s(g_207[3].f2, ((*l_47) = (safe_mul_func_uint16_t_u_u(0UL, g_263)))))) & 1UL) != 5L), g_320))), p_27)) , (*l_355));
        for (g_81 = 0; (g_81 < 39); g_81 = safe_add_func_uint16_t_u_u(g_81, 2))
        { 
            int32_t l_379 = (-2L);
            int32_t l_380 = (-1L);
            struct S0 l_414 = {2L,0x72BC3EAFL,0xF17299EE653A38CALL,0L,-0};
            g_381++;
            if ((((safe_lshift_func_int8_t_s_s(l_306, (((((g_74.f0 &= (g_196[4] &= ((safe_rshift_func_int8_t_s_u(g_76, 4)) || (safe_div_func_int16_t_s_s(g_195, (l_390 , 0x892AL)))))) == (safe_rshift_func_uint16_t_u_u((&l_351 != ((safe_mod_func_int16_t_s_s((-3L), l_307[2])) , &g_72)), (*l_350)))) ^ 1L) | 0xF5L) && l_380))) < g_362) && 5L))
            { 
                union U4 l_398[1] = {{0x62AD76D7L}};
                uint8_t *l_413 = &g_85.f1;
                int32_t l_415 = 0xBB7261D1L;
                int i;
                if (g_195)
                    goto lbl_395;
                for (g_85.f1 = (-8); (g_85.f1 > 2); g_85.f1 = safe_add_func_int8_t_s_s(g_85.f1, 6))
                { 
                    (*l_350) = (p_26.f0 , p_26.f0);
                    return l_398[0];
                }
                l_415 = (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(1L, 4)), (l_403 ^ ((+((safe_add_func_int64_t_s_s(((safe_add_func_int64_t_s_s(((*g_319) = (((((safe_lshift_func_int8_t_s_s(((g_55.f0 & 0xB7L) != ((*l_413) = (safe_add_func_uint16_t_u_u(0x3CE1L, l_403)))), 0)) <= ((l_414 , 0x4DL) <= p_26.f1)) > g_381) != l_380) <= 0x7EL)), (*l_355))) >= 0x4F91229CL), p_28)) && p_26.f3)) == p_25))));
            }
            else
            { 
                uint16_t l_420 = 0x4DCCL;
                int32_t **l_437 = &l_348;
                (*l_347) = 0xA954B93CL;
                if ((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(l_420, 1)), g_362)))
                { 
                    const uint16_t l_423 = 6UL;
                    uint8_t *l_434 = &g_181[2];
                    l_361 &= (safe_lshift_func_int16_t_s_s((p_26.f0 | l_420), ((l_423 != (safe_mul_func_int8_t_s_s(((((*l_434) = (((*l_350) >= (safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_u(l_423, 5)) , (g_154 , (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((g_48 , p_26.f0), 7)) && p_26.f1), 0x1AL)))) && 0x2D5834FC2D1835A0LL), 9))) , l_360)) > p_28) & l_379), g_320))) , 0x7432L)));
                }
                else
                { 
                    uint8_t l_435 = 253UL;
                    if (l_435)
                        break;
                    (*l_352) = ((*l_358) = l_54[3][0].f0);
                    g_436 = g_436;
                }
                (*l_437) = l_349;
            }
            if (l_403)
                continue;
        }
        (*l_348) = ((g_181[2]--) || ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(0xE3L, p_25)), (+(&g_128 != (g_207[3].f3 , ((*l_450) = l_449)))))) != 6L));
    }
    return l_451;
}



static int16_t  func_39(int64_t  p_40, uint32_t  p_41, union U2  p_42, const union U4  p_43)
{ 
    int32_t *l_56[2][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    uint32_t l_57 = 0x252307D3L;
    union U2 *l_84 = &g_85;
    struct S0 l_89[1][3][1] = {{{{1L,0xD6B41A24L,0x68CBA47412260987LL,0x55L,0}},{{1L,0xD6B41A24L,0x68CBA47412260987LL,0x55L,0}},{{1L,0xD6B41A24L,0x68CBA47412260987LL,0x55L,0}}}};
    uint64_t l_107 = 0x3F0CD8B2F8DC5A24LL;
    union U2 **l_130 = &l_84;
    union U3 l_167 = {65535UL};
    int i, j, k;
lbl_62:
    l_57--;
    for (p_42.f2 = 24; (p_42.f2 < 48); p_42.f2 = safe_add_func_uint8_t_u_u(p_42.f2, 7))
    { 
        if (p_42.f2)
            goto lbl_62;
        if (p_41)
            continue;
    }
    for (p_41 = 2; (p_41 > 24); ++p_41)
    { 
        uint16_t *l_71[3];
        int32_t * const l_73 = (void*)0;
        int32_t l_131 = 0x3FE0775EL;
        int32_t l_132 = 0xE3977822L;
        const union U2 *l_138[2][6];
        const union U2 **l_137[2][5] = {{&l_138[0][3],&l_138[0][0],&l_138[0][0],&l_138[0][3],&l_138[0][0]},{&l_138[0][3],&l_138[0][3],&l_138[1][3],&l_138[0][3],&l_138[0][3]}};
        union U4 *l_182[1];
        union U3 *l_211 = &g_207[1];
        int i, j;
        for (i = 0; i < 3; i++)
            l_71[i] = &g_48;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_138[i][j] = &g_85;
        }
        for (i = 0; i < 1; i++)
            l_182[i] = &g_154;
        if ((((0xF1A9F139L == (p_43.f0 != (p_42.f3 == p_41))) >= ((func_65(l_71[0], g_72, l_73, g_74, g_75) & g_55.f1) ^ p_40)) , 0x89175669L))
        { 
            union U2 **l_86 = &l_84;
            union U3 l_95 = {0UL};
            int32_t l_119[5] = {0xA8E54492L,0xA8E54492L,0xA8E54492L,0xA8E54492L,0xA8E54492L};
            uint32_t l_129 = 0x6B581468L;
            union U4 l_139 = {0x12596962L};
            int i;
            (*l_86) = l_84;
            if (((0xBACA85E45CF31528LL && (p_42 , 0xF93872454177E56DLL)) ^ (g_90 = ((*g_75) = (safe_sub_func_uint16_t_u_u(p_43.f1, (((g_80[3] , (g_80[3] , l_89[0][0][0])) , p_43.f0) , 1UL)))))))
            { 
                uint8_t l_91 = 0x77L;
                return l_91;
            }
            else
            { 
                int64_t l_94 = 0x37123A7432CFE06CLL;
                int32_t l_106 = 0L;
                uint32_t *l_140 = &g_85.f2;
                uint32_t *l_141 = &l_57;
                union U1 l_144[2] = {{0xEAL},{0xEAL}};
                int i;
                for (g_85.f1 = 19; (g_85.f1 < 48); g_85.f1++)
                { 
                    uint32_t *l_100 = &l_95.f4;
                    uint32_t *l_101 = &l_95.f4;
                    uint32_t *l_102 = &l_95.f4;
                    uint32_t *l_103 = &l_95.f4;
                    uint32_t *l_104[5][2] = {{&g_105,&g_105},{&l_95.f4,&g_105},{&g_105,&l_95.f4},{&g_105,&g_105},{&l_95.f4,&g_105}};
                    int32_t l_117 = 0xDDE1E780L;
                    int32_t l_118 = 1L;
                    const int32_t *l_127 = &g_128;
                    const int32_t **l_126 = &l_127;
                    int i, j;
                    if (l_94)
                        break;
                    (*g_75) = (l_95 , (l_132 ^= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_80[4], 14)), (p_40 & ((++l_107) & ((((!(((0x6612L != (safe_rshift_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(p_42.f0, (safe_rshift_func_uint16_t_u_u((l_106 = (((g_90 , ((*l_103) = (--g_105))) > (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((((*l_126) = &g_76) != &l_119[3]) > l_129), 8L)) == p_43.f1), g_81))) & p_42.f1)), p_42.f1)))) , 0x05L), g_76))) & l_129) > g_80[3])) , l_130) == (void*)0) < l_131)))))));
                    (*l_86) = &p_42;
                }
                if ((((((safe_add_func_int16_t_s_s(7L, 0x5A1EL)) > (&l_84 == l_137[1][3])) > ((l_139 , ((--(*l_141)) , (l_144[1] , ((g_74 , 0x319CEE68397568C2LL) || 1UL)))) <= p_41)) != 0UL) ^ 0xA80DL))
                { 
                    union U1 *l_146 = &l_144[0];
                    union U1 **l_145 = &l_146;
                    int32_t l_147 = (-6L);
                    (*l_145) = &g_74;
                    (*l_145) = (p_42.f3 , &g_74);
                    if (l_147)
                        break;
                    return p_42.f1;
                }
                else
                { 
                    int8_t l_150 = 5L;
                    l_56[1][1][1] = ((safe_add_func_uint32_t_u_u(l_106, (l_150 != (safe_lshift_func_int8_t_s_s(g_8, (p_40 , (-7L))))))) , &l_106);
                }
            }
        }
        else
        { 
            g_153 = &p_43;
        }
        if (p_42.f3)
            break;
        for (g_154.f1 = 0; (g_154.f1 <= 2); g_154.f1 += 1)
        { 
            const uint8_t l_188 = 255UL;
            union U4 **l_192[5];
            union U4 ***l_191 = &l_192[0];
            int32_t l_197 = 1L;
            union U1 *l_203[7] = {&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74};
            union U3 *l_212 = &g_207[3];
            int i;
            for (i = 0; i < 5; i++)
                l_192[i] = &l_182[0];
        }
        l_132 = (safe_add_func_int8_t_s_s(g_207[3].f1, g_196[2]));
    }
    if ((*g_75))
    { 
        int32_t **l_224[4];
        int i;
        for (i = 0; i < 4; i++)
            l_224[i] = &l_56[1][0][1];
        g_75 = &g_76;
    }
    else
    { 
        int32_t l_234 = (-7L);
        uint32_t l_236 = 18446744073709551612UL;
        union U3 l_244 = {65535UL};
        for (p_41 = 20; (p_41 <= 60); p_41++)
        { 
            int64_t *l_231 = &l_89[0][0][0].f0;
            int32_t l_232[1][7][7] = {{{0x808D468FL,1L,(-1L),(-1L),0x77FA5E29L,0L,1L},{1L,(-10L),1L,9L,0L,0x10D2CAD3L,0x77FA5E29L},{0L,1L,0x33C0C79DL,0xA5150234L,0xA5150234L,0x33C0C79DL,1L},{0L,2L,0x33C0C79DL,0x10D2CAD3L,0L,0xA5150234L,(-1L)},{0x9C5F8BC2L,(-1L),1L,0x0B65D2F8L,1L,0L,9L},{0x33C0C79DL,0x0B65D2F8L,(-1L),0x10D2CAD3L,1L,1L,0x10D2CAD3L},{0xE2ECC4F0L,9L,0xE2ECC4F0L,0xA5150234L,1L,0L,0L}}};
            uint8_t *l_233[3];
            int32_t l_235 = (-4L);
            union U2 *l_247[3];
            union U1 **l_249 = (void*)0;
            int8_t l_274 = 0x3AL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_233[i] = &g_85.f1;
            for (i = 0; i < 3; i++)
                l_247[i] = &g_85;
            if ((safe_mod_func_int64_t_s_s(((((p_40 < 6L) && (safe_sub_func_int32_t_s_s((((l_235 |= (l_234 ^= ((((*l_231) = p_42.f1) <= (0xBA33B8ED1E4CC4E5LL || (g_196[1] | (g_48 | (g_80[3] <= l_232[0][4][1]))))) || 0x27L))) != 0x36L) || p_42.f1), l_232[0][4][1]))) , l_236) && l_236), g_207[3].f3)))
            { 
                uint8_t l_239 = 255UL;
                (*g_75) ^= (safe_mul_func_uint16_t_u_u(l_235, 0x1F30L));
                if (l_239)
                    continue;
                return p_42.f3;
            }
            else
            { 
                union U2 **l_248 = (void*)0;
                struct S0 l_259[2][6][2] = {{{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}},{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}},{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}},{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}},{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}},{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}}},{{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}},{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}},{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}},{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}},{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}},{{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0},{0xAA54678E963307FDLL,0L,18446744073709551615UL,0x52L,0}}}};
                int32_t l_262[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_262[i] = 0L;
                l_234 |= (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(g_80[1], 1)), 6)) , (((p_41 >= (l_244 , (((g_48 , ((*l_130) = (void*)0)) == (void*)0) == (((((((safe_rshift_func_uint8_t_u_u((l_232[0][4][1] = (((l_247[1] = l_247[2]) != &p_42) != l_244.f2)), 2)) , p_42.f1) >= g_8) > p_42.f3) ^ 0x14572CAAE911EA6DLL) > l_244.f0) , 0xEB0A1AFBL)))) | (*g_75)) , (void*)0)) == l_249);
                if ((*g_75))
                    break;
                for (l_244.f1 = 0; (l_244.f1 <= 0); l_244.f1 += 1)
                { 
                    int64_t l_256[5][6][2] = {{{2L,0x4FBD2D9BE9A1A128LL},{7L,0x4FBD2D9BE9A1A128LL},{2L,7L},{0x637EA3EBE08290AFLL,0x637EA3EBE08290AFLL},{0xEF8C5BBA556991D4LL,0x68CC2CD189FC5076LL},{2L,0xF4BA2F377F44A9B1LL}},{{0x68CC2CD189FC5076LL,0x4FBD2D9BE9A1A128LL},{1L,0x68CC2CD189FC5076LL},{0x637EA3EBE08290AFLL,0xEF8C5BBA556991D4LL},{0x637EA3EBE08290AFLL,0x68CC2CD189FC5076LL},{1L,0x4FBD2D9BE9A1A128LL},{0x68CC2CD189FC5076LL,0xF4BA2F377F44A9B1LL}},{{2L,0x68CC2CD189FC5076LL},{0xEF8C5BBA556991D4LL,0x637EA3EBE08290AFLL},{0x637EA3EBE08290AFLL,7L},{2L,0x4FBD2D9BE9A1A128LL},{7L,0x4FBD2D9BE9A1A128LL},{2L,7L}},{{0x637EA3EBE08290AFLL,0x637EA3EBE08290AFLL},{0xEF8C5BBA556991D4LL,0x68CC2CD189FC5076LL},{2L,0xF4BA2F377F44A9B1LL},{0x68CC2CD189FC5076LL,0x4FBD2D9BE9A1A128LL},{1L,0x68CC2CD189FC5076LL},{0x637EA3EBE08290AFLL,0xEF8C5BBA556991D4LL}},{{0x637EA3EBE08290AFLL,0x68CC2CD189FC5076LL},{1L,0x4FBD2D9BE9A1A128LL},{0x68CC2CD189FC5076LL,0xF4BA2F377F44A9B1LL},{2L,0x68CC2CD189FC5076LL},{0xEF8C5BBA556991D4LL,0x637EA3EBE08290AFLL},{0x637EA3EBE08290AFLL,0xED409948576C4947LL}}};
                    uint32_t l_260 = 0x06700EAAL;
                    int32_t l_261[7][5][2] = {{{1L,(-1L)},{0xD557F31CL,0xD557F31CL},{1L,0L},{(-1L),0L},{0xFFDFD508L,0xF955F64EL}},{{1L,0xFFDFD508L},{0x5C54AC59L,0x250765B2L},{0x5C54AC59L,0xFFDFD508L},{1L,0xF955F64EL},{0xFFDFD508L,0L}},{{(-1L),0L},{1L,0xD557F31CL},{0xD557F31CL,(-1L)},{1L,1L},{0x27C696D4L,0xFEEED56EL}},{{0L,0x5540F05BL},{(-5L),0L},{0x0C1213BDL,0L},{0xE24ED3E9L,0L},{0xFEEED56EL,0x5C54AC59L}},{{0x29EF2F36L,0x27C696D4L},{0L,0x27C696D4L},{0x29EF2F36L,0x5C54AC59L},{0xFEEED56EL,0L},{0xE24ED3E9L,0L}},{{0x0C1213BDL,0L},{(-5L),0x5540F05BL},{0L,0xFEEED56EL},{0x27C696D4L,1L},{1L,(-1L)}},{{0xD557F31CL,0xD557F31CL},{1L,0L},{(-1L),0L},{0xFFDFD508L,0xF955F64EL},{1L,0xFFDFD508L}}};
                    uint16_t *l_275 = (void*)0;
                    uint16_t *l_276 = (void*)0;
                    uint16_t *l_277 = &g_154.f1;
                    int i, j, k;
                    l_234 ^= (safe_sub_func_uint8_t_u_u((((-3L) || ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(0x4081L, l_256[3][1][0])) > (safe_lshift_func_int16_t_s_u(((((l_259[1][1][0] , (((*g_75) < 7UL) == (0xA26107CEL != p_41))) > l_260) , p_40) >= p_42.f1), 15))), g_74.f0)) , g_207[3].f3)) != p_42.f0), g_195));
                    --g_263;
                    (*g_75) &= (safe_mul_func_uint8_t_u_u(g_81, (safe_lshift_func_int16_t_s_u((p_40 && (l_234 ^ (safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((l_274 | l_244.f0), g_74.f4)), 0)))), ((*l_277)--)))));
                }
            }
            if ((*g_75))
                continue;
        }
    }
    return g_207[3].f0;
}



static uint8_t  func_65(uint16_t * p_66, int32_t * const  p_67, int32_t * const  p_68, union U1  p_69, int32_t * p_70)
{ 
    int32_t *l_77 = &g_76;
    int32_t *l_78 = (void*)0;
    int32_t *l_79[2];
    int i;
    for (i = 0; i < 2; i++)
        l_79[i] = &g_76;
    --g_81;
    return p_69.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f4, "g_74.f4", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1, "g_154.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_181[i], "g_181[i]", print_hash_value);

    }
    transparent_crc(g_195, "g_195", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_196[i], "g_196[i]", print_hash_value);

    }
    transparent_crc(g_198, "g_198", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_207[i].f0, "g_207[i].f0", print_hash_value);
        transparent_crc(g_207[i].f1, "g_207[i].f1", print_hash_value);
        transparent_crc(g_207[i].f2, "g_207[i].f2", print_hash_value);
        transparent_crc(g_207[i].f3, "g_207[i].f3", print_hash_value);

    }
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_546.f0, "g_546.f0", print_hash_value);
    transparent_crc(g_546.f1, "g_546.f1", print_hash_value);
    transparent_crc(g_546.f2, "g_546.f2", print_hash_value);
    transparent_crc(g_546.f3, "g_546.f3", print_hash_value);
    transparent_crc(g_546.f4, "g_546.f4", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_575[i], "g_575[i]", print_hash_value);

    }
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_832, "g_832", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_838, "g_838", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_903, "g_903", print_hash_value);
    transparent_crc(g_910.f0, "g_910.f0", print_hash_value);
    transparent_crc(g_910.f1, "g_910.f1", print_hash_value);
    transparent_crc(g_910.f2, "g_910.f2", print_hash_value);
    transparent_crc(g_910.f3, "g_910.f3", print_hash_value);
    transparent_crc(g_910.f4, "g_910.f4", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1041, "g_1041", print_hash_value);
    transparent_crc(g_1067, "g_1067", print_hash_value);
    transparent_crc(g_1077, "g_1077", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1196[i], "g_1196[i]", print_hash_value);

    }
    transparent_crc(g_1197, "g_1197", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1400[i][j][k].f0, "g_1400[i][j][k].f0", print_hash_value);
                transparent_crc(g_1400[i][j][k].f4, "g_1400[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_1432, "g_1432", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
