// SPDX-License-Identifier: MIT
// cctest_csmith_462c464c.c --- cctest case csmith_462c464c (csmith seed 1177306700)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x472fcac0 */

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

// Options:   -s 1177306700 -o /tmp/csmith_gen_c00ukqx9/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint8_t  f0;
   int8_t  f1;
   int8_t  f2;
   uint32_t  f3;
   int32_t  f4;
   uint32_t  f5;
   int16_t  f6;
};

union U1 {
   uint32_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   uint32_t  f3;
};

union U2 {
   int16_t  f0;
   const int8_t * f1;
};


static int8_t g_25 = 0xF9L;
static int16_t g_38 = 0xF7C2L;
static uint32_t g_40[6] = {18446744073709551612UL,0xA5D840DFL,18446744073709551612UL,18446744073709551612UL,0xA5D840DFL,18446744073709551612UL};
static int32_t g_52[2][2] = {{1L,1L},{1L,1L}};
static const int32_t g_55[7][2][2] = {{{0x9D707D8EL,1L},{0x9B223541L,1L}},{{0x9B223541L,1L},{0x9D707D8EL,0x9D707D8EL}},{{1L,0x9B223541L},{1L,0x9B223541L}},{{1L,0x9D707D8EL},{0x9D707D8EL,1L}},{{0x9B223541L,1L},{0x9B223541L,1L}},{{0x9D707D8EL,0x9D707D8EL},{1L,0x9B223541L}},{{1L,0x9B223541L},{1L,0x9D707D8EL}}};
static uint64_t g_62[5] = {0x68169B2B29335309LL,0x68169B2B29335309LL,0x68169B2B29335309LL,0x68169B2B29335309LL,0x68169B2B29335309LL};
static int64_t g_94 = (-1L);
static uint64_t g_140 = 0x8DA27851ED01B0F4LL;
static uint64_t * const g_139 = &g_140;
static int16_t g_151 = 0xD706L;
static union U2 g_161 = {0x0B84L};
static uint16_t g_166[2][3] = {{1UL,1UL,1UL},{65531UL,65531UL,65531UL}};
static uint32_t g_176[2] = {0xF176138EL,0xF176138EL};
static uint32_t g_213 = 0x9FE8C370L;
static uint32_t g_216 = 0x784E6EA6L;
static union U1 g_217 = {6UL};
static int32_t g_220[1] = {1L};
static int32_t *g_219 = &g_220[0];
static int8_t g_235 = 0x93L;
static int64_t *g_249[7][2][7] = {{{&g_94,(void*)0,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,&g_94,&g_94,&g_94,(void*)0,&g_94}},{{&g_94,(void*)0,&g_94,(void*)0,&g_94,(void*)0,&g_94},{(void*)0,&g_94,&g_94,&g_94,&g_94,(void*)0,&g_94}},{{(void*)0,&g_94,&g_94,(void*)0,&g_94,&g_94,(void*)0},{(void*)0,&g_94,&g_94,(void*)0,&g_94,&g_94,&g_94}},{{&g_94,&g_94,&g_94,&g_94,&g_94,(void*)0,(void*)0},{(void*)0,&g_94,&g_94,&g_94,(void*)0,&g_94,&g_94}},{{&g_94,&g_94,&g_94,&g_94,&g_94,&g_94,&g_94},{&g_94,&g_94,(void*)0,(void*)0,&g_94,&g_94,&g_94}},{{&g_94,&g_94,(void*)0,(void*)0,&g_94,&g_94,&g_94},{(void*)0,&g_94,(void*)0,&g_94,&g_94,&g_94,&g_94}},{{&g_94,(void*)0,&g_94,(void*)0,&g_94,&g_94,&g_94},{(void*)0,&g_94,(void*)0,&g_94,(void*)0,&g_94,(void*)0}}};
static int64_t **g_248 = &g_249[6][0][3];
static int32_t *g_298 = &g_220[0];
static struct S0 g_348 = {0xDCL,0xE1L,0xB0L,3UL,0x330A7F29L,8UL,2L};
static struct S0 g_350 = {255UL,0xA9L,0x26L,0xC89DAF2EL,0xECC79834L,0UL,-9L};
static int16_t *g_362 = &g_161.f0;
static const int32_t *g_448 = &g_52[0][1];
static uint32_t g_508 = 0x11040788L;
static int32_t *g_554 = &g_52[1][0];
static int32_t ****g_558 = (void*)0;
static int32_t * const **g_561 = (void*)0;
static int32_t * const ***g_560 = &g_561;
static int64_t g_568 = 0L;
static int8_t *g_616 = &g_350.f2;
static int8_t **g_615[2] = {&g_616,&g_616};
static union U1 *g_726 = &g_217;
static union U1 **g_725 = &g_726;
static int8_t g_821[7] = {0x9EL,0x83L,0x83L,0x9EL,0x83L,0x83L,0x9EL};
static uint16_t g_836 = 0xB76FL;
static int16_t **g_896 = &g_362;
static int16_t ***g_895 = &g_896;
static const uint32_t g_944[2] = {6UL,6UL};
static int8_t g_1056[2] = {0L,0L};
static uint16_t g_1126[6][4] = {{0x9F58L,0x9F58L,0x061DL,0x9F58L},{0x9F58L,65533UL,65533UL,0x9F58L},{65533UL,0x9F58L,65533UL,65533UL},{0x9F58L,0x9F58L,0x061DL,0x9F58L},{0x9F58L,65533UL,65533UL,0x9F58L},{65533UL,0x9F58L,65533UL,65533UL}};
static union U1 ***g_1169[6] = {&g_725,&g_725,&g_725,&g_725,&g_725,&g_725};
static union U1 ****g_1168 = &g_1169[5];
static union U1 *****g_1167[6][2][5] = {{{(void*)0,&g_1168,(void*)0,&g_1168,(void*)0},{&g_1168,&g_1168,&g_1168,&g_1168,&g_1168}},{{&g_1168,&g_1168,&g_1168,&g_1168,&g_1168},{&g_1168,&g_1168,&g_1168,&g_1168,&g_1168}},{{(void*)0,&g_1168,(void*)0,&g_1168,(void*)0},{&g_1168,&g_1168,&g_1168,&g_1168,&g_1168}},{{&g_1168,&g_1168,&g_1168,&g_1168,&g_1168},{&g_1168,&g_1168,&g_1168,&g_1168,&g_1168}},{{(void*)0,&g_1168,(void*)0,&g_1168,(void*)0},{&g_1168,&g_1168,&g_1168,&g_1168,&g_1168}},{{&g_1168,&g_1168,&g_1168,&g_1168,&g_1168},{&g_1168,&g_1168,&g_1168,&g_1168,&g_1168}}};
static uint16_t g_1195[5] = {0x269BL,0x269BL,0x269BL,0x269BL,0x269BL};



static int16_t  func_1(void);
static union U1  func_2(union U2  p_3);
static int32_t * const  func_7(int32_t * p_8, int32_t  p_9, uint32_t  p_10, uint64_t  p_11);
static int32_t * func_12(union U1  p_13, union U2  p_14, int32_t * p_15);
static uint8_t  func_18(int8_t * p_19, int64_t  p_20, int32_t * p_21, int32_t * p_22, int32_t  p_23);
static const int16_t  func_28(const uint64_t  p_29, uint8_t  p_30, struct S0  p_31, const int32_t * p_32);
static uint64_t  func_33(const int64_t  p_34);
static int32_t  func_47(uint64_t  p_48, uint8_t  p_49, const int32_t * const  p_50);




static int16_t  func_1(void)
{ 
    union U2 l_4 = {0xBEDEL};
    struct S0 l_1087 = {0x6BL,0x84L,-1L,0x58E805E9L,-1L,0xB880373FL,-6L};
    struct S0 *l_1088[2][7][3] = {{{(void*)0,&g_348,&g_350},{&g_348,&g_350,&g_348},{(void*)0,&g_350,&g_348},{&g_348,(void*)0,&g_350},{(void*)0,&g_350,(void*)0},{&g_348,&g_350,&l_1087},{(void*)0,&g_348,&g_350}},{{&g_348,&g_350,&g_348},{(void*)0,&g_350,&g_348},{&g_348,(void*)0,&g_350},{(void*)0,&g_350,(void*)0},{&g_348,&g_350,&l_1087},{(void*)0,&g_348,&g_350},{&g_348,&g_350,&g_348}}};
    int32_t *l_1089 = (void*)0;
    int8_t ***l_1119 = &g_615[0];
    int32_t l_1159 = 0xB7C75320L;
    int32_t l_1160 = 0xCCD68042L;
    int32_t l_1161 = 0L;
    uint8_t l_1162 = 252UL;
    uint16_t l_1171 = 4UL;
    int32_t l_1187 = 0x5734D362L;
    int32_t l_1188 = (-5L);
    int32_t l_1190 = 0x08901188L;
    int32_t l_1191 = 0x2A16289AL;
    int32_t l_1192 = 6L;
    int32_t l_1194 = 0x18DD3D1CL;
    int32_t *l_1228 = &g_52[0][1];
    int i, j, k;
    return (*l_1228);
}



static union U1  func_2(union U2  p_3)
{ 
    int8_t *l_24 = &g_25;
    int16_t *l_37 = &g_38;
    struct S0 l_200 = {0xF5L,-1L,0L,4294967293UL,-10L,0x68DE327FL,0xDC7AL};
    int32_t *l_201 = (void*)0;
    uint32_t *l_212 = &g_213;
    int32_t l_214[3];
    uint32_t *l_215 = &g_216;
    union U2 l_218 = {0xA338L};
    int32_t **l_1084 = &l_201;
    struct S0 *l_1085 = &l_200;
    union U1 l_1086 = {4294967295UL};
    int i;
    for (i = 0; i < 3; i++)
        l_214[i] = 1L;
    (*l_1084) = ((safe_lshift_func_int8_t_s_u(9L, 0)) , func_7(func_12((((*l_215) ^= ((safe_rshift_func_int8_t_s_s((((*l_212) ^= (func_18(l_24, (l_24 == (void*)0), (((safe_rshift_func_int16_t_s_u(func_28(func_33((safe_lshift_func_int16_t_s_s(((*l_37) ^= g_25), (g_40[4] = (~p_3.f0))))), p_3.f0, l_200, &g_55[0][1][0]), 9)) & g_94) , (void*)0), l_201, l_200.f5) , l_200.f2)) >= g_55[2][0][1]), l_214[1])) , 0xB3C05E57L)) , g_217), l_218, g_219), l_200.f5, g_140, p_3.f0));
    (*l_1085) = g_350;
    return l_1086;
}



static int32_t * const  func_7(int32_t * p_8, int32_t  p_9, uint32_t  p_10, uint64_t  p_11)
{ 
    int64_t **l_1082[5][1][4] = {{{&g_249[1][0][0],&g_249[4][0][2],&g_249[1][0][0],&g_249[1][0][0]}},{{&g_249[4][0][2],&g_249[4][0][2],&g_249[6][0][3],&g_249[4][0][2]}},{{&g_249[4][0][2],&g_249[1][0][0],&g_249[1][0][0],&g_249[4][0][2]}},{{&g_249[1][0][0],&g_249[4][0][2],&g_249[1][0][0],&g_249[1][0][0]}},{{&g_249[4][0][2],&g_249[4][0][2],&g_249[6][0][3],&g_249[4][0][2]}}};
    int32_t * const l_1083[3][6][3] = {{{&g_220[0],&g_220[0],&g_220[0]},{&g_220[0],(void*)0,&g_220[0]},{&g_220[0],&g_52[0][1],&g_220[0]},{(void*)0,(void*)0,(void*)0},{&g_220[0],&g_220[0],&g_220[0]},{&g_220[0],(void*)0,&g_220[0]}},{{&g_220[0],&g_52[0][1],&g_220[0]},{(void*)0,(void*)0,(void*)0},{&g_220[0],&g_220[0],&g_220[0]},{&g_220[0],(void*)0,&g_220[0]},{&g_220[0],&g_52[0][1],&g_220[0]},{(void*)0,(void*)0,(void*)0}},{{&g_220[0],&g_220[0],&g_220[0]},{&g_220[0],(void*)0,&g_220[0]},{&g_220[0],&g_52[0][1],&g_220[0]},{(void*)0,(void*)0,(void*)0},{&g_220[0],&g_220[0],&g_220[0]},{&g_220[0],(void*)0,&g_220[0]}}};
    int i, j, k;
    l_1082[4][0][3] = l_1082[4][0][3];
    return l_1083[1][2][0];
}



static int32_t * func_12(union U1  p_13, union U2  p_14, int32_t * p_15)
{ 
    uint64_t l_238 = 18446744073709551606UL;
    int64_t **l_262 = &g_249[6][0][3];
    int32_t l_266 = 3L;
    int32_t l_279 = (-5L);
    int32_t l_281 = 0xB1608D3CL;
    uint16_t l_282 = 0x1062L;
    int32_t l_319[3][3][3] = {{{6L,0xBFB4D23DL,0xBFB4D23DL},{0L,(-3L),(-3L)},{6L,0xBFB4D23DL,0xBFB4D23DL}},{{0L,(-3L),(-3L)},{6L,0xBFB4D23DL,0xBFB4D23DL},{0L,(-3L),(-3L)}},{{6L,0xBFB4D23DL,0xBFB4D23DL},{0L,(-3L),(-3L)},{6L,0xBFB4D23DL,0xBFB4D23DL}}};
    int32_t l_320[5];
    uint16_t l_329 = 65532UL;
    int32_t l_383 = 3L;
    uint8_t l_386[5][7] = {{251UL,251UL,251UL,251UL,251UL,251UL,251UL},{0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL},{251UL,251UL,251UL,251UL,251UL,251UL,251UL},{0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL,0x5BL},{251UL,251UL,251UL,251UL,251UL,251UL,251UL}};
    int16_t *l_403 = &g_38;
    int8_t l_410 = 1L;
    uint8_t l_411[5][4];
    int64_t l_420 = 0x324D5CD3B3742652LL;
    int32_t l_507[1][7][7] = {{{1L,8L,0xC42B6846L,0xBD358F88L,1L,0xDA49B890L,0x30CB813FL},{8L,0x73E1CB3CL,1L,0x5A3A4CF1L,0x84A97853L,0x84A97853L,0x5A3A4CF1L},{1L,0xBD358F88L,1L,0x84A97853L,0x5083C3E6L,0x73E1CB3CL,0x5A3A4CF1L},{0x55E2CF7BL,0x0721091FL,0xDA49B890L,0x129EF448L,0x5A3A4CF1L,1L,0x30CB813FL},{0xBC4129E6L,1L,0x73E1CB3CL,0x0721091FL,0x0721091FL,0x73E1CB3CL,1L},{0x30CB813FL,(-8L),0x9C7F7811L,0xBC4129E6L,0x0721091FL,0x84A97853L,0L},{0xBD358F88L,0x55E2CF7BL,(-8L),0xC42B6846L,0x5A3A4CF1L,0xDA49B890L,0x9C7F7811L}}};
    int32_t l_534 = (-2L);
    uint16_t l_553 = 0xF25DL;
    int16_t l_570 = 0L;
    struct S0 *l_596 = &g_348;
    union U1 l_598 = {0UL};
    int64_t l_676 = 0x840E9FF2E9391545LL;
    int8_t l_680 = (-1L);
    uint32_t l_714 = 0UL;
    int32_t *l_787 = &l_319[1][2][0];
    int32_t l_802 = 0x3DC62477L;
    uint32_t *l_866 = &l_714;
    uint32_t *l_869 = &g_40[2];
    int8_t l_870 = 0x81L;
    int32_t l_952 = 0x796BEAC2L;
    int8_t l_953 = 9L;
    union U2 l_1073 = {0xD1D6L};
    int32_t *l_1081 = (void*)0;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_320[i] = 0x94F6EC2AL;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            l_411[i][j] = 0x69L;
    }
    for (g_94 = 0; (g_94 >= (-3)); g_94--)
    { 
        int32_t **l_228 = (void*)0;
        int32_t ***l_227 = &l_228;
        int64_t *l_243 = &g_94;
        int8_t l_267 = 0x54L;
        int32_t l_268 = 0xAAF24BCDL;
        int32_t l_269 = (-9L);
        int32_t l_270 = 0x19E99FDDL;
        int32_t l_273 = 4L;
        int32_t l_275 = (-4L);
        int32_t l_276 = 0x2A50D181L;
        struct S0 l_312 = {247UL,3L,0x79L,0xFEF7487DL,0x886A7733L,18446744073709551609UL,0xA767L};
        int16_t l_313[5][5] = {{1L,0x1BA6L,0x39F6L,0x39F6L,0x1BA6L},{2L,0x3326L,1L,1L,0x3326L},{1L,0x1BA6L,0x39F6L,0x39F6L,0x1BA6L},{2L,0x3326L,1L,1L,0x3326L},{1L,0x1BA6L,0x39F6L,0x39F6L,0x1BA6L}};
        int64_t l_318 = 0xC1C0496602CED354LL;
        int32_t l_322 = 0x3875BE9CL;
        int32_t l_323 = 0x268ECCA2L;
        int32_t l_324 = 0xFA23490AL;
        int32_t l_325 = 0xDC1E35E1L;
        int32_t l_326 = 0L;
        int32_t l_327 = 0L;
        int32_t l_328[3][4][5] = {{{0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L},{1L,1L,1L,1L,1L},{0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L},{1L,1L,1L,1L,1L}},{{0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L},{1L,1L,1L,1L,1L},{0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L},{1L,1L,1L,1L,1L}},{{0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L},{1L,1L,1L,1L,1L},{0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L,0xEC1A1063L},{1L,1L,1L,1L,1L}}};
        int32_t *l_407 = &g_220[0];
        int32_t *l_408 = &l_324;
        int32_t *l_409[6] = {&l_279,&l_279,&l_279,&l_279,&l_279,&l_279};
        int i, j, k;
    }
    for (g_348.f6 = (-29); (g_348.f6 == (-18)); g_348.f6 = safe_add_func_uint64_t_u_u(g_348.f6, 3))
    { 
        int64_t l_429 = (-9L);
        int32_t l_478 = (-6L);
        int32_t l_484[3];
        uint32_t l_493 = 5UL;
        uint32_t l_545 = 1UL;
        int32_t *****l_559 = &g_558;
        int32_t * const ****l_562[6][6][6] = {{{(void*)0,&g_560,&g_560,&g_560,(void*)0,&g_560},{&g_560,(void*)0,(void*)0,(void*)0,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560,(void*)0,&g_560},{&g_560,&g_560,&g_560,(void*)0,&g_560,&g_560},{&g_560,&g_560,&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,&g_560,&g_560,&g_560,&g_560}},{{(void*)0,&g_560,(void*)0,&g_560,&g_560,&g_560},{&g_560,(void*)0,&g_560,&g_560,&g_560,&g_560},{(void*)0,&g_560,&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560,&g_560,&g_560},{&g_560,&g_560,&g_560,(void*)0,(void*)0,&g_560},{&g_560,&g_560,&g_560,&g_560,&g_560,&g_560}},{{&g_560,&g_560,&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,(void*)0,&g_560,&g_560},{&g_560,(void*)0,&g_560,(void*)0,&g_560,&g_560},{(void*)0,&g_560,&g_560,&g_560,&g_560,&g_560}},{{(void*)0,&g_560,&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560,&g_560,&g_560},{&g_560,&g_560,&g_560,&g_560,&g_560,&g_560},{&g_560,(void*)0,&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560,&g_560,&g_560}},{{&g_560,&g_560,&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560,(void*)0,&g_560},{&g_560,&g_560,&g_560,&g_560,&g_560,&g_560},{&g_560,&g_560,(void*)0,&g_560,(void*)0,&g_560},{&g_560,&g_560,(void*)0,&g_560,&g_560,(void*)0},{&g_560,(void*)0,&g_560,&g_560,&g_560,(void*)0}},{{(void*)0,&g_560,&g_560,&g_560,&g_560,&g_560},{(void*)0,&g_560,&g_560,(void*)0,&g_560,&g_560},{&g_560,&g_560,&g_560,(void*)0,&g_560,&g_560},{&g_560,&g_560,&g_560,&g_560,&g_560,(void*)0},{&g_560,&g_560,&g_560,&g_560,&g_560,(void*)0},{&g_560,&g_560,&g_560,&g_560,&g_560,&g_560}}};
        const struct S0 l_567 = {6UL,0x34L,0xE6L,8UL,7L,0xC97D073CL,0x8BBBL};
        int64_t *l_569[1][5] = {{&l_420,&l_420,&l_420,&l_420,&l_420}};
        int16_t **l_601 = (void*)0;
        uint16_t l_610 = 4UL;
        union U2 l_657 = {0xDF4FL};
        int32_t l_664[7][5] = {{8L,8L,8L,8L,8L},{0xCB0CA113L,0xCB0CA113L,0xCB0CA113L,0xCB0CA113L,0xCB0CA113L},{8L,8L,8L,8L,8L},{0xCB0CA113L,0xCB0CA113L,0xCB0CA113L,0xCB0CA113L,0xCB0CA113L},{8L,8L,8L,8L,8L},{0xCB0CA113L,0xCB0CA113L,0xCB0CA113L,0xCB0CA113L,0xCB0CA113L},{8L,8L,8L,8L,8L}};
        int8_t l_681 = 1L;
        uint16_t l_694 = 0x7BD5L;
        int32_t l_745 = (-9L);
        union U1 l_803 = {1UL};
        const uint32_t l_817 = 4294967286UL;
        int32_t **l_850 = &g_298;
        uint32_t l_861 = 0x0335D686L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_484[i] = 2L;
    }
    (*l_787) ^= 1L;
    (*p_15) = (safe_div_func_uint32_t_u_u((++(*l_866)), 1L));
    if (((*l_596) , (l_869 == (l_598 , p_15))))
    { 
        uint32_t l_882 = 8UL;
        int16_t **l_894[1][4] = {{&g_362,&g_362,&g_362,&g_362}};
        int16_t ***l_893 = &l_894[0][2];
        int64_t *l_903 = &l_676;
        int32_t l_923 = 0x4419B270L;
        uint32_t l_933 = 0x631FF327L;
        uint32_t l_939[1];
        struct S0 l_946 = {255UL,0x7BL,-5L,0xD6C4C2FCL,9L,0x51D706FDL,0x2E4FL};
        uint32_t * const *l_951 = (void*)0;
        union U2 l_966 = {-2L};
        uint8_t *l_1013 = &g_217.f2;
        union U1 l_1027 = {0xAA8EB233L};
        int32_t l_1052[1];
        int32_t l_1053 = 0xAB83C407L;
        int32_t l_1054 = 7L;
        int32_t l_1055[4];
        int64_t l_1063[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_939[i] = 3UL;
        for (i = 0; i < 1; i++)
            l_1052[i] = 0xA845F4FEL;
        for (i = 0; i < 4; i++)
            l_1055[i] = 0xC7FAF34DL;
        for (i = 0; i < 1; i++)
            l_1063[i] = 0x63B5E93FEB292271LL;
        if (l_870)
        { 
            struct S0 l_883 = {0xB0L,0L,0xABL,0x8FA4C9A2L,0L,4UL,0x5FB0L};
            int32_t *l_900 = &l_266;
            union U1 ***l_911 = &g_725;
            int32_t l_921[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            int32_t **l_936 = (void*)0;
            int32_t **l_937 = (void*)0;
            int32_t **l_938 = &g_298;
            int i;
            for (p_13.f3 = 0; (p_13.f3 <= 1); p_13.f3 += 1)
            { 
                int32_t **l_871 = &l_787;
                (*l_596) = (*l_596);
                (*l_871) = (p_13 , &l_266);
                for (g_568 = 0; (g_568 >= 0); g_568 -= 1)
                { 
                    int16_t **l_877 = &g_362;
                    int16_t ***l_876 = &l_877;
                    uint8_t *l_886 = &l_411[2][2];
                    union U1 ***l_889 = &g_725;
                    int64_t *l_897 = &l_676;
                    int i, j;
                    (*g_298) = (safe_sub_func_int8_t_s_s((0UL & (g_166[p_13.f3][g_568] ^ p_13.f2)), (safe_add_func_uint32_t_u_u((p_13.f1 <= (&l_403 != ((*l_876) = &g_362))), (safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(l_882, 4)) || 0L), (*p_15)))))));
                    (*l_596) = l_883;
                    (*l_787) = ((safe_rshift_func_int16_t_s_s((((((*l_886) = l_883.f4) <= ((((((safe_rshift_func_int8_t_s_u(l_883.f5, 3)) && ((void*)0 != l_889)) && (safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_int64_t_s((((p_14.f0 | ((*l_897) ^= ((l_893 == g_895) & (**l_871)))) & p_13.f0) < p_13.f0))) | p_13.f0), (**l_871)))) != 1UL) == 0xC38AE7C4L) | (***g_895))) >= p_13.f1) ^ 0xE4L), (*l_787))) ^ p_13.f1);
                    (*l_871) = (*l_871);
                }
            }
            for (g_151 = 6; (g_151 >= 25); g_151 = safe_add_func_int8_t_s_s(g_151, 5))
            { 
                int32_t **l_901 = (void*)0;
                int32_t **l_902 = &l_787;
                int32_t l_929[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
                int i;
                (*l_902) = l_900;
                if (((*l_262) == l_903))
                { 
                    uint32_t l_904[7][1];
                    union U1 ****l_912 = &l_911;
                    union U1 ***l_914 = &g_725;
                    union U1 ****l_913 = &l_914;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_904[i][j] = 0xF049A14CL;
                    }
                    (*l_902) = l_900;
                    (*p_15) = (l_904[0][0] >= ((safe_rshift_func_int8_t_s_s((0x20L == (safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(((*l_787) | (((*l_912) = l_911) != ((*l_913) = &g_725))), ((safe_rshift_func_uint16_t_u_s(0xD1C8L, (safe_add_func_int64_t_s_s((l_904[0][0] , (*l_900)), (*l_900))))) != 6UL))) >= g_40[4]) | p_13.f0), 1UL))), 0)) == l_904[3][0]));
                    return p_15;
                }
                else
                { 
                    uint8_t l_919 = 1UL;
                    int32_t l_920[4][2][7] = {{{0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL},{1L,0x5AA0E66EL,1L,0x5AA0E66EL,1L,0x5AA0E66EL,1L}},{{0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL},{1L,0x5AA0E66EL,1L,0x5AA0E66EL,1L,0x5AA0E66EL,1L}},{{0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL},{1L,0x5AA0E66EL,1L,0x5AA0E66EL,1L,0x5AA0E66EL,1L}},{{0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL,0x628B25DFL},{1L,0x5AA0E66EL,1L,0x5AA0E66EL,1L,0x5AA0E66EL,1L}}};
                    int32_t *l_922 = &l_534;
                    int32_t *l_924 = &l_923;
                    int32_t *l_925 = &g_52[1][0];
                    int32_t *l_926 = &l_319[1][2][0];
                    int32_t *l_927 = &l_319[0][1][1];
                    int32_t *l_928 = (void*)0;
                    int32_t *l_930 = &g_220[0];
                    int32_t *l_931 = &g_52[0][1];
                    int32_t *l_932[1][3][7] = {{{(void*)0,&l_923,&l_923,(void*)0,&l_920[3][0][2],(void*)0,&l_923},{(void*)0,(void*)0,&g_52[0][1],(void*)0,&g_52[0][1],(void*)0,(void*)0},{&l_279,&l_923,&l_319[1][1][0],&l_923,&l_279,&l_279,&l_923}}};
                    int i, j, k;
                    (*g_219) = l_919;
                    --l_933;
                }
            }
            (*l_938) = p_15;
            --l_939[0];
        }
        else
        { 
            const uint32_t *l_943 = &g_944[0];
            const uint32_t **l_942 = &l_943;
            int32_t **l_945 = &g_219;
            uint64_t *l_959 = &g_62[0];
            uint64_t **l_958 = &l_959;
            uint64_t **l_960 = (void*)0;
            uint64_t **l_961 = (void*)0;
            uint64_t *l_963 = &l_238;
            uint64_t **l_962 = &l_963;
            int64_t l_967[2][7][4] = {{{0xD32F9BCEC98388E1LL,0L,(-5L),0L},{5L,(-8L),(-2L),0xD6A2F06B8EFEAFBBLL},{0x2477E112F0AFD5A2LL,0x56311A68746ABF88LL,0x8BE09531580BAE0DLL,0xFB72886608D37173LL},{0x56311A68746ABF88LL,0L,0L,0x56311A68746ABF88LL},{(-2L),0xD32F9BCEC98388E1LL,0x366F5DD572EFDF57LL,(-1L)},{0x6FE964F575E2F2CFLL,0x9B5BA960AACFCF13LL,0x8BE09531580BAE0DLL,0x2477E112F0AFD5A2LL},{(-10L),0x94C2EE914A57962CLL,0x2ACE52C785CC055ELL,0x2477E112F0AFD5A2LL}},{{5L,0x9B5BA960AACFCF13LL,0xD6A2F06B8EFEAFBBLL,(-1L)},{0xFB72886608D37173LL,0xD32F9BCEC98388E1LL,0x51860291D2E4787BLL,0x56311A68746ABF88LL},{0L,0L,(-1L),0xFB72886608D37173LL},{5L,0x56311A68746ABF88LL,5L,0xD6A2F06B8EFEAFBBLL},{0x9B5BA960AACFCF13LL,(-8L),0x8BE09531580BAE0DLL,0L},{(-8L),0L,0x94C2EE914A57962CLL,(-8L)},{(-2L),0xFB72886608D37173LL,0x94C2EE914A57962CLL,(-1L)}}};
            int32_t * const ***l_973 = &g_561;
            uint8_t *l_1011 = &g_217.f2;
            int32_t l_1045[4] = {0L,0L,0L,0L};
            union U2 *l_1067 = &g_161;
            int i, j, k;
            (*l_787) = ((*l_787) , ((((*l_942) = &g_176[1]) != &l_714) || (-2L)));
            (*l_945) = &l_923;
            (*l_596) = ((g_220[0] , ((0x1A2F39E5L || ((((l_946 , ((((((((254UL >= (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((p_13.f0 , (l_951 == (void*)0)) & (**l_945)), l_952)), p_13.f0))) , p_15) != &l_714) <= (**l_945)) && l_953) <= l_946.f2) ^ 0UL) < 0L)) > (*l_787)) & (**l_945)) , 0xA7EF7339L)) , 0UL)) , (*l_596));
            if (((18446744073709551615UL && (safe_mod_func_uint64_t_u_u((((((((*l_962) = ((*l_958) = &g_62[0])) == (void*)0) < (g_944[0] > (safe_lshift_func_uint16_t_u_s(((0xAE0174CC20F09F56LL == (((l_966 , l_967[0][0][3]) ^ 0L) , 4L)) < l_939[0]), 14)))) , &g_176[1]) == (*l_942)) | g_348.f2), (**l_945)))) && p_13.f1))
            { 
                int8_t l_970 = 0x8DL;
                uint8_t **l_1012 = &l_1011;
                uint16_t *l_1028 = &g_166[1][1];
                int32_t l_1029 = (-1L);
                int64_t l_1038[6][5] = {{0x470E06FC4AF1AEC4LL,0x7EDC7498CE7127E5LL,9L,0xDA4A9AC025078C1CLL,6L},{0x470E06FC4AF1AEC4LL,0xB75FE6899DA8AFE7LL,0x29EE016C3CE7310CLL,0xDA4A9AC025078C1CLL,0xDA4A9AC025078C1CLL},{9L,0xB75FE6899DA8AFE7LL,9L,6L,0xDA4A9AC025078C1CLL},{0x470E06FC4AF1AEC4LL,0x7EDC7498CE7127E5LL,2L,9L,0x29EE016C3CE7310CLL},{(-1L),0xD9136E9D12DD7370LL,(-6L),9L,9L},{2L,0xD9136E9D12DD7370LL,2L,0x29EE016C3CE7310CLL,9L}};
                int32_t l_1043 = 9L;
                int32_t l_1044[2][7];
                uint16_t l_1057[7][4] = {{0x8240L,0x3DC2L,8UL,8UL},{65535UL,65535UL,8UL,0UL},{0x8240L,1UL,0x0424L,0x3DC2L},{0UL,0x0424L,0UL,0x0424L},{0UL,0x0424L,0UL,0x3DC2L},{0x0424L,1UL,0x8240L,0UL},{8UL,65535UL,65535UL,8UL}};
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_1044[i][j] = 0x7A158A34L;
                }
                (*l_787) = (safe_mul_func_uint16_t_u_u(l_970, (((*g_298) = (65527UL || (safe_lshift_func_int16_t_s_s((p_13.f2 < (((((void*)0 == l_973) && ((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((g_161 , ((safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((((~((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((0x326356A774C1B42FLL == 0x5398A33B1E4B04BDLL), p_13.f2)), p_14.f0)) <= (-1L))) > (-1L)) != (*g_554)) , 65532UL), 1L)), l_970)) >= 0xC708A2F2L)), 65531UL)), l_970)), 18446744073709551611UL)) || (*g_139))) == g_217.f3) < 0x12L)), 3)))) <= l_923)));
                for (g_217.f3 = 0; (g_217.f3 < 26); g_217.f3 = safe_add_func_uint32_t_u_u(g_217.f3, 3))
                { 
                    uint64_t **l_991 = &l_963;
                    if ((*p_15))
                        break;
                    (*p_15) = (((*g_895) = (*g_895)) == ((l_991 != (void*)0) , (*l_893)));
                    if ((*p_15))
                        break;
                    (*g_554) = (((safe_mod_func_uint64_t_u_u(p_13.f0, ((0x2A9424D1FE1397F9LL && 0UL) , (*l_787)))) , ((--(*l_866)) & 0x13A475FEL)) & 0xA18EBFA4L);
                }
                if (((safe_sub_func_uint8_t_u_u(((~(safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((p_13.f2 >= (safe_div_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(g_220[0], p_13.f0)) != ((*l_903) |= ((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((*l_1012) = l_1011) != l_1013), ((*l_1028) &= (safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((**g_896) &= (safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s(l_946.f3)) | (l_1027 , l_1027.f1)), 3))), p_14.f0)), 2)) < (**l_945)), 6)), p_13.f1)), (*l_787)))))), g_348.f2)) && (*g_139)))), (-7L)))), p_13.f1)) > p_13.f2), p_14.f0))) , 255UL), 0x10L)) & l_1029))
                { 
                    (*p_15) ^= ((*g_219) = (((*g_616) = (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s((***g_895), l_1038[0][4])), ((safe_mod_func_uint8_t_u_u(g_348.f5, (*l_787))) , (safe_lshift_func_int16_t_s_u(((*g_139) | 18446744073709551614UL), 7))))), (*g_448))), l_1038[5][1]))) ^ g_161.f0));
                    (*l_945) = &l_534;
                    p_15 = p_15;
                }
                else
                { 
                    int32_t *l_1046 = &l_319[0][0][1];
                    int32_t *l_1047 = &g_220[0];
                    int32_t *l_1048 = &l_279;
                    int32_t *l_1049 = &l_1045[0];
                    int32_t *l_1050 = &l_1045[2];
                    int32_t *l_1051[4][1];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1051[i][j] = &l_923;
                    }
                    (*l_945) = &l_319[2][1][0];
                    l_1057[5][0]++;
                }
            }
            else
            { 
                int64_t l_1060 = 0x07ABCD8C4B5B5B6FLL;
                int32_t l_1061 = (-10L);
                int32_t *l_1062[5];
                uint32_t l_1064 = 2UL;
                int i;
                for (i = 0; i < 5; i++)
                    l_1062[i] = &l_281;
                (*l_596) = g_348;
                --l_1064;
                (*l_945) = &l_1061;
                for (g_836 = 0; (g_836 <= 1); g_836 += 1)
                { 
                    union U2 **l_1068 = &l_1067;
                    int32_t *l_1069 = &g_220[0];
                    int i;
                    (*l_945) = (void*)0;
                    (*l_1068) = l_1067;
                    (*p_15) = l_320[(g_836 + 2)];
                    l_1069 = p_15;
                }
            }
        }
        for (g_348.f1 = 1; (g_348.f1 >= 0); g_348.f1 -= 1)
        { 
            int32_t **l_1070 = &g_219;
            (*l_1070) = &l_923;
        }
    }
    else
    { 
        int8_t *l_1078 = &g_235;
        int8_t *l_1079[1][4] = {{&l_680,&l_680,&l_680,&l_680}};
        int32_t l_1080 = 0xCDE48100L;
        int i, j;
        (*g_554) &= (safe_mul_func_int16_t_s_s(((*l_403) ^= ((*g_616) == (((((l_1073 = g_161) , &g_616) != &g_616) || (((0x1AL | (l_1080 = ((*l_1078) ^= (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(p_13.f0, (*l_787))) >= (*g_616)), p_14.f0))))) ^ 0xCEB26223448F89E1LL) == 0x1FC6L)) | (*l_787)))), g_350.f6));
        (*l_787) = ((g_161.f0 | (**g_896)) & p_13.f2);
    }
    return l_1081;
}



static uint8_t  func_18(int8_t * p_19, int64_t  p_20, int32_t * p_21, int32_t * p_22, int32_t  p_23)
{ 
    uint32_t l_209 = 0x11570353L;
    for (g_25 = 20; (g_25 < (-5)); g_25 = safe_sub_func_int64_t_s_s(g_25, 6))
    { 
        int32_t *l_204 = (void*)0;
        int32_t *l_205 = (void*)0;
        int32_t *l_206 = &g_52[1][0];
        int32_t *l_207[1];
        int32_t l_208 = 0xC55E09F5L;
        int i;
        for (i = 0; i < 1; i++)
            l_207[i] = &g_52[0][0];
        l_209--;
    }
    return l_209;
}



static const int16_t  func_28(const uint64_t  p_29, uint8_t  p_30, struct S0  p_31, const int32_t * p_32)
{ 
    return g_176[1];
}



static uint64_t  func_33(const int64_t  p_34)
{ 
    int32_t *l_51 = &g_52[0][1];
    const int32_t *l_54[3];
    const int32_t **l_53 = &l_54[0];
    int32_t *l_56 = (void*)0;
    int32_t l_57 = 0L;
    uint64_t *l_58 = (void*)0;
    uint64_t *l_59 = (void*)0;
    uint64_t *l_60 = (void*)0;
    uint64_t *l_61 = &g_62[0];
    int16_t *l_100 = &g_38;
    int32_t l_144 = (-10L);
    int32_t l_145 = 0x26AC6D51L;
    int32_t l_146 = 0L;
    int32_t l_147 = 0x8B245C39L;
    int32_t l_148 = (-1L);
    int32_t l_149[2][3];
    uint32_t l_154 = 0x5F43D3E7L;
    struct S0 l_181 = {255UL,1L,0xD3L,0x39A174F5L,0x35F3DD40L,1UL,0xBE36L};
    int32_t l_187 = 0x3580D671L;
    int32_t l_196 = (-5L);
    int i, j;
    for (i = 0; i < 3; i++)
        l_54[i] = &g_55[2][0][1];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_149[i][j] = 0L;
    }
    (*l_51) = (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((*l_100) |= (g_40[4] >= (safe_div_func_uint16_t_u_u(g_25, ((g_25 > func_47(p_34, (((*l_61) = ((l_51 != ((*l_53) = (void*)0)) > (((l_57 ^= g_52[0][0]) , (-10L)) || (*l_51)))) ^ (*l_51)), l_51)) & g_55[6][1][1]))))) || (-1L)), p_34)), g_94));
lbl_182:
    g_52[0][1] |= 5L;
    for (g_25 = 0; (g_25 >= 6); g_25 = safe_add_func_uint32_t_u_u(g_25, 4))
    { 
        int32_t **l_115 = &l_51;
        int32_t ***l_114 = &l_115;
        int32_t ****l_116 = (void*)0;
        int32_t ****l_117 = &l_114;
        union U1 l_118 = {0xD8757171L};
        int64_t *l_133 = (void*)0;
        int32_t l_141 = 0L;
        uint64_t l_142 = 0xC4DD9E31D749550BLL;
        int32_t l_143[6][3] = {{0x7506916AL,0x7506916AL,0x7506916AL},{0x85723E82L,0x85723E82L,0x85723E82L},{0x7506916AL,0x7506916AL,0x7506916AL},{0x85723E82L,0x85723E82L,0x85723E82L},{0x7506916AL,0x7506916AL,0x7506916AL},{0x85723E82L,0x85723E82L,0x85723E82L}};
        int64_t l_152 = (-6L);
        int32_t *l_183 = &l_143[2][2];
        int32_t *l_184 = &l_143[0][1];
        int32_t *l_185 = &l_149[0][1];
        int32_t *l_186 = &g_52[1][0];
        int32_t *l_188 = &l_147;
        int32_t *l_189 = &l_143[3][2];
        int32_t *l_190 = &l_146;
        int32_t *l_191 = &l_145;
        int32_t *l_192 = &l_148;
        int32_t *l_193 = &l_149[1][0];
        int32_t *l_194 = (void*)0;
        int32_t *l_195[4][3] = {{&l_143[0][1],&l_149[1][1],&l_143[0][1]},{&g_52[0][1],&g_52[0][1],&g_52[0][1]},{&l_143[0][1],&l_149[1][1],&l_143[0][1]},{&g_52[0][1],&g_52[0][1],&g_52[0][1]}};
        uint64_t l_197 = 0x74481C7AF72FF09BLL;
        int i, j;
        if ((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int64_t_s(g_55[2][0][1])), (safe_sub_func_int16_t_s_s(p_34, ((safe_rshift_func_int16_t_s_s(0xA172L, g_52[0][1])) || (((((*l_100) &= ((safe_div_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(0x70L, (((*l_117) = l_114) == (void*)0))) , 1UL), 0xA63F3D54CDCAC19DLL)) >= 0x6001L)) , l_118) , p_34) , p_34)))))))
        { 
            int32_t ***l_127[7][7][2] = {{{(void*)0,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115}},{{(void*)0,(void*)0},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,(void*)0},{(void*)0,&l_115}},{{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{(void*)0,(void*)0}},{{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,(void*)0},{(void*)0,&l_115},{&l_115,&l_115}},{{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{(void*)0,(void*)0},{&l_115,&l_115}},{{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,(void*)0},{(void*)0,&l_115},{&l_115,&l_115},{&l_115,&l_115}},{{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{&l_115,&l_115},{(void*)0,(void*)0},{&l_115,&l_115},{&l_115,&l_115}}};
            int64_t *l_132 = &g_94;
            int64_t **l_134 = &l_133;
            int16_t l_150 = 9L;
            int8_t l_153[2][3] = {{1L,1L,1L},{(-2L),(-2L),(-2L)}};
            int i, j, k;
            (*l_51) = p_34;
            g_52[0][1] ^= (&l_114 != &l_114);
            l_143[2][2] &= (((safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((*l_61)++), ((safe_div_func_int64_t_s_s(((l_127[1][1][1] != (void*)0) | (safe_add_func_int32_t_s_s(((((((****l_117) = (p_34 | (p_34 ^ (safe_sub_func_int32_t_s_s((l_132 != ((*l_134) = l_133)), (safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(((void*)0 != g_139), g_52[0][1])), 0xD840L))))))) && p_34) , (void*)0) != (void*)0) ^ 0x49AA0F80L), 0x48D7F838L))), l_141)) , 0x275E99C33BC337E5LL))), 0x585974949FC4A87ELL)) < p_34) ^ l_142);
            --l_154;
        }
        else
        { 
            uint64_t l_175 = 0UL;
            for (l_145 = 0; (l_145 < (-11)); l_145 = safe_sub_func_uint8_t_u_u(l_145, 1))
            { 
                uint64_t l_164 = 18446744073709551609UL;
                uint16_t *l_165 = &g_166[1][1];
                int32_t l_177 = 1L;
                g_176[1] ^= (safe_rshift_func_uint8_t_u_u(((g_161 , (((safe_lshift_func_uint16_t_u_u(((*l_165) = l_164), 4)) > p_34) , ((-7L) | (p_34 && (((safe_rshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((p_34 ^ ((((**l_115) ^ p_34) > p_34) >= p_34)), l_164)), (****l_117))), 12)) , l_175) < (***l_114)))))) && l_175), p_34));
                if (l_177)
                    continue;
                for (l_118.f1 = (-21); (l_118.f1 == 59); ++l_118.f1)
                { 
                    struct S0 l_180 = {0x0BL,0x5FL,0xBAL,0xA16B7DE6L,0xC300E812L,7UL,0xCF70L};
                    l_181 = l_180;
                    if (l_180.f0)
                        goto lbl_182;
                    (**l_115) = p_34;
                    (***l_117) = (***l_117);
                }
                if (g_40[4])
                    break;
            }
        }
        l_197++;
    }
    return p_34;
}



static int32_t  func_47(uint64_t  p_48, uint8_t  p_49, const int32_t * const  p_50)
{ 
    int8_t *l_69 = &g_25;
    int32_t **l_85 = (void*)0;
    int32_t ***l_84 = &l_85;
    int64_t *l_93[4][3][2] = {{{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94}},{{&g_94,&g_94},{&g_94,(void*)0},{&g_94,&g_94}},{{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94}},{{&g_94,&g_94},{&g_94,&g_94},{&g_94,&g_94}}};
    int32_t l_95 = 7L;
    int16_t l_96 = 1L;
    int16_t *l_97[5] = {&g_38,&g_38,&g_38,&g_38,&g_38};
    uint32_t l_98[3][3] = {{0x06C22AA1L,0UL,0UL},{0x06C22AA1L,0UL,0UL},{0x06C22AA1L,0UL,0UL}};
    int32_t *l_99 = &g_52[1][0];
    int i, j, k;
    (*l_99) ^= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(((((l_69 != (((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((l_98[0][0] = (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((0x52L ^ (((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((((*l_84) = (void*)0) != &p_50) > (safe_sub_func_int16_t_s_s((+0UL), (safe_div_func_int64_t_s_s((safe_add_func_uint16_t_u_u(g_40[4], (((l_95 ^= p_49) == 7L) || p_48))), l_96))))), 0L)), p_48)) ^ g_55[1][0][0]) > p_48)), g_40[4])), g_62[2]))) != 7L), p_48)), 15)) ^ 4294967295UL) , (void*)0)) >= l_96) & g_25) > g_25), 0xCCDFL)) != 0x51L), 3)), p_49));
    return (*p_50);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_40[i], "g_40[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_52[i][j], "g_52[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_55[i][j][k], "g_55[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_161.f0, "g_161.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_166[i][j], "g_166[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_176[i], "g_176[i]", print_hash_value);

    }
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_217.f0, "g_217.f0", print_hash_value);
    transparent_crc(g_217.f1, "g_217.f1", print_hash_value);
    transparent_crc(g_217.f2, "g_217.f2", print_hash_value);
    transparent_crc(g_217.f3, "g_217.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_220[i], "g_220[i]", print_hash_value);

    }
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_348.f0, "g_348.f0", print_hash_value);
    transparent_crc(g_348.f1, "g_348.f1", print_hash_value);
    transparent_crc(g_348.f2, "g_348.f2", print_hash_value);
    transparent_crc(g_348.f3, "g_348.f3", print_hash_value);
    transparent_crc(g_348.f4, "g_348.f4", print_hash_value);
    transparent_crc(g_348.f5, "g_348.f5", print_hash_value);
    transparent_crc(g_348.f6, "g_348.f6", print_hash_value);
    transparent_crc(g_350.f0, "g_350.f0", print_hash_value);
    transparent_crc(g_350.f1, "g_350.f1", print_hash_value);
    transparent_crc(g_350.f2, "g_350.f2", print_hash_value);
    transparent_crc(g_350.f3, "g_350.f3", print_hash_value);
    transparent_crc(g_350.f4, "g_350.f4", print_hash_value);
    transparent_crc(g_350.f5, "g_350.f5", print_hash_value);
    transparent_crc(g_350.f6, "g_350.f6", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_821[i], "g_821[i]", print_hash_value);

    }
    transparent_crc(g_836, "g_836", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_944[i], "g_944[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1056[i], "g_1056[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1126[i][j], "g_1126[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1195[i], "g_1195[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
