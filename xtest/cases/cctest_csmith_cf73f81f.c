// SPDX-License-Identifier: MIT
// cctest_csmith_cf73f81f.c --- cctest case csmith_cf73f81f (csmith seed 3480483871)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbf83e024 */

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

// Options:   -s 3480483871 -o /tmp/csmith_gen_cfaterhs/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int8_t  f0;
   const int16_t  f1;
   const int32_t  f2;
   uint64_t  f3;
   const uint32_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint16_t  f0;
};
#pragma pack(pop)

union U2 {
   const uint64_t  f0;
};


static int32_t g_3 = 0x2E31D832L;
static int32_t g_4 = 0L;
static struct S1 g_20 = {1UL};
static int64_t g_24 = 1L;
static uint8_t g_26 = 253UL;
static uint32_t g_32 = 4294967295UL;
static uint8_t g_58 = 255UL;
static uint8_t g_63 = 255UL;
static int16_t g_71 = 0xADBFL;
static uint16_t g_86 = 0x4015L;
static int32_t g_88[1] = {(-1L)};
static uint8_t g_184 = 0xD3L;
static int16_t g_325[4][2] = {{0L,5L},{0L,5L},{0L,5L},{0L,5L}};
static int64_t g_327[5][5] = {{(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L),(-6L)}};
static uint8_t g_345 = 0xABL;
static union U2 g_352 = {0xD6B6F88E99261BDDLL};



static const uint16_t  func_1(void);
static struct S1  func_5(int64_t  p_6, uint64_t  p_7);
static uint64_t  func_8(struct S0  p_9, uint16_t  p_10, int32_t  p_11, int16_t  p_12);
static struct S0  func_13(struct S0  p_14, uint32_t  p_15, union U2  p_16);




static const uint16_t  func_1(void)
{ 
    int32_t l_2[1];
    int32_t l_354 = 0xD423E130L;
    int i;
    for (i = 0; i < 1; i++)
        l_2[i] = (-1L);
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    { 
        struct S0 l_17[4] = {{3L,0xA10DL,-4L,0x087A912E75507304LL,0x773196E8L},{3L,0xA10DL,-4L,0x087A912E75507304LL,0x773196E8L},{3L,0xA10DL,-4L,0x087A912E75507304LL,0x773196E8L},{3L,0xA10DL,-4L,0x087A912E75507304LL,0x773196E8L}};
        int i;
        for (g_4 = 0; (g_4 >= 0); g_4 -= 1)
        { 
            union U2 l_18 = {18446744073709551614UL};
            struct S1 l_341 = {1UL};
            uint16_t l_344 = 0xC9F8L;
            int i;
            if (l_2[g_3])
                break;
            l_341 = func_5(g_4, (func_8(func_13(l_17[1], l_17[1].f1, l_18), l_17[1].f2, g_3, l_18.f0) >= l_2[0]));
            for (g_24 = 0; (g_24 <= 0); g_24 += 1)
            { 
                uint8_t l_353 = 0xB6L;
                g_20 = ((safe_sub_func_int16_t_s_s(g_184, ((g_345 = (1UL && l_344)) <= ((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_s(((g_352 , l_2[0]) || g_20.f0), l_17[1].f2)) == g_71) , (-5L)) >= l_17[1].f0), l_353)), l_2[0])) && l_341.f0)))) , g_20);
                if (g_352.f0)
                    continue;
            }
        }
        g_88[0] = l_17[1].f2;
    }
    l_354 = l_2[0];
    return l_354;
}



static struct S1  func_5(int64_t  p_6, uint64_t  p_7)
{ 
    union U2 l_236 = {0x8D7DD194C20FC52FLL};
    uint32_t l_243 = 4294967294UL;
    int32_t l_244 = (-1L);
    struct S1 l_248 = {0UL};
    int32_t l_270 = 0x1BACBC80L;
    struct S1 l_288 = {0UL};
    uint32_t l_305 = 0xA354E837L;
    if (((safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((~((safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(p_6, ((((l_236 , (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(p_6, ((0x82316B0F5D29D3D4LL < l_236.f0) ^ p_7))), l_243)) != p_6), (-1L)))) | p_7) >= 0L) , 0xC9BD7B24L))), l_243)) ^ 0x8AL)), g_58)) == 5L), p_7)) <= l_236.f0))
    { 
        uint32_t l_245 = 18446744073709551607UL;
        l_245--;
        g_88[0] = (l_244 = (-1L));
        for (p_6 = 0; (p_6 >= 0); p_6 -= 1)
        { 
            struct S1 l_272 = {0x6089L};
            int i;
            g_20 = l_248;
            g_88[p_6] = ((g_88[p_6] != (0xD7E3L & (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((g_88[p_6] >= (safe_div_func_int32_t_s_s(g_88[0], g_63))), g_88[p_6])) != g_88[p_6]), 0x76L)))) | 0x9DBCA189L);
            if (g_71)
            { 
                int64_t l_269[4][2] = {{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)}};
                struct S1 l_271 = {0x15F8L};
                int i, j;
                g_88[0] = (safe_rshift_func_int16_t_s_s(l_243, (p_7 , (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(65535UL, (((((safe_sub_func_uint8_t_u_u((((((((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_div_func_uint64_t_u_u(g_26, g_3)) >= (-1L)), l_248.f0)), p_7)) >= p_6) >= l_269[0][1]) | p_7) , l_270) == 0x03L) == 4UL), p_7)) | g_88[p_6]) >= 0x3AC3L) || 18446744073709551613UL) <= g_32))), 3)))));
                l_272 = l_271;
                g_88[0] = (g_24 , 0L);
            }
            else
            { 
                g_88[0] = l_245;
            }
        }
    }
    else
    { 
        int8_t l_279 = 1L;
        int32_t l_281 = 1L;
        int32_t l_282 = 0x5F2ED823L;
        struct S1 l_286 = {3UL};
        uint32_t l_332 = 0xE3F04877L;
        const int32_t l_335 = (-10L);
        for (l_270 = 0; (l_270 >= 0); l_270 -= 1)
        { 
            const int64_t l_280 = 0x7487FB4D3AD415A4LL;
            int i;
            g_88[l_270] ^= ((g_24 = ((safe_rshift_func_int16_t_s_s(((l_279 = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_7, 4)), g_3))) & (g_3 || ((l_280 < g_24) <= g_3))), 6)) && 0x2BF7L)) & g_32);
            for (l_248.f0 = 0; (l_248.f0 <= 0); l_248.f0 += 1)
            { 
                int8_t l_285 = 0x5DL;
                struct S1 l_287 = {0xBCE7L};
                int i;
                g_88[l_248.f0] = ((((l_282 = (l_281 &= g_88[l_270])) && ((l_285 = (g_86 != (safe_lshift_func_uint16_t_u_u(l_280, 2)))) > (l_286 , 0xCC1CC095L))) , l_282) ^ p_7);
                l_288 = (l_248.f0 , l_287);
            }
        }
        if (((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s((p_6 , ((g_32--) | (safe_rshift_func_int16_t_s_s((((g_86 = (safe_mul_func_int16_t_s_s(((l_281 = l_286.f0) <= (((safe_rshift_func_uint16_t_u_u((g_20.f0 ^= (safe_sub_func_int16_t_s_s(p_6, ((l_244 = g_184) > l_305)))), 11)) & (-9L)) >= (-8L))), p_6))) & g_184) != l_282), g_63)))), p_7)) >= p_6), l_243)), l_282)) && g_26))
        { 
            return g_20;
        }
        else
        { 
            int8_t l_340 = 0x88L;
            g_88[0] = (l_244 = 9L);
            if ((safe_sub_func_uint64_t_u_u((((g_26 = (safe_sub_func_uint8_t_u_u(((safe_add_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((p_7 = (l_270 |= (((0xE7D5L <= (safe_sub_func_int64_t_s_s(p_7, (safe_sub_func_uint64_t_u_u(18446744073709551615UL, 0x1BE67839AE79D42ALL))))) > p_6) <= g_4))), l_281)) == 0x9EL), p_6)) <= p_6), p_6))) , p_7) >= g_86), p_6)))
            { 
                uint32_t l_324 = 18446744073709551612UL;
                int32_t l_326 = 0xBAE095B7L;
                g_20 = ((((g_327[2][2] = (safe_rshift_func_uint8_t_u_u(250UL, (l_326 = ((((safe_mul_func_uint8_t_u_u((((g_63 < ((g_58 == ((safe_add_func_uint32_t_u_u(((g_88[0] = (l_243 < 0x7509L)) != g_86), (-1L))) >= 4L)) , l_282)) , l_324) | g_4), 248UL)) == g_4) , g_325[0][0]) >= (-1L)))))) | p_6) || 0xA5562BE3L) , l_288);
            }
            else
            { 
                g_88[0] = (g_88[0] <= 0xB6FCL);
            }
            l_282 |= (safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((l_332 <= ((safe_lshift_func_int16_t_s_u((l_340 |= (l_335 >= ((safe_add_func_uint64_t_u_u((p_7 = ((safe_div_func_uint16_t_u_u((l_236 , (g_325[0][0] || p_7)), l_335)) & l_281)), g_325[0][0])) && p_6))), p_6)) != l_335)) | p_6), g_184)), g_88[0]));
        }
    }
    return g_20;
}



static uint64_t  func_8(struct S0  p_9, uint16_t  p_10, int32_t  p_11, int16_t  p_12)
{ 
    uint32_t l_224 = 0x313B4598L;
    for (g_20.f0 = 22; (g_20.f0 > 55); g_20.f0 = safe_add_func_int8_t_s_s(g_20.f0, 8))
    { 
        return g_184;
    }
    l_224++;
    return g_20.f0;
}



static struct S0  func_13(struct S0  p_14, uint32_t  p_15, union U2  p_16)
{ 
    uint8_t l_19[2][5] = {{0x15L,0x15L,0x15L,0x15L,0x15L},{255UL,6UL,255UL,6UL,255UL}};
    int32_t l_23 = (-1L);
    struct S1 l_40 = {65534UL};
    int32_t l_98 = 0xE19D4D99L;
    int32_t l_100 = 1L;
    int32_t l_101 = 0x2A5ADA2CL;
    int32_t l_103 = (-5L);
    int32_t l_104 = 0xBCD69959L;
    int32_t l_105 = 0x58BA9B0DL;
    int32_t l_106 = 0xF8A910FBL;
    int32_t l_108 = (-1L);
    int8_t l_110 = (-1L);
    int32_t l_111[5] = {0x19659B86L,0x19659B86L,0x19659B86L,0x19659B86L,0x19659B86L};
    int16_t l_175 = (-1L);
    uint32_t l_217 = 4294967295UL;
    struct S0 l_221 = {4L,-5L,0x1A1B547DL,0x6D9DE8EE48BEC9A0LL,4UL};
    int i, j;
    for (p_14.f3 = 0; (p_14.f3 <= 1); p_14.f3 += 1)
    { 
        struct S1 l_21[5][5][2] = {{{{0x6F4EL},{0x6FFAL}},{{0xCB81L},{0UL}},{{0x6FFAL},{0x3CBAL}},{{0UL},{0x6FFAL}},{{4UL},{0x6F4EL}}},{{{0x6F4EL},{0x1CF6L}},{{0UL},{0UL}},{{0x1CF6L},{0UL}},{{0UL},{0x1CF6L}},{{0x6F4EL},{0x6F4EL}}},{{{4UL},{0x6FFAL}},{{0UL},{0x3CBAL}},{{0x6FFAL},{0UL}},{{0xCB81L},{0x6FFAL}},{{0x6F4EL},{4UL}}},{{{0x6F4EL},{0x6FFAL}},{{0xCB81L},{0UL}},{{0x6FFAL},{0x3CBAL}},{{0UL},{0x6FFAL}},{{4UL},{0x6F4EL}}},{{{0x6F4EL},{0x1CF6L}},{{0UL},{0UL}},{{0x1CF6L},{0UL}},{{0UL},{0x1CF6L}},{{0x6F4EL},{0x6F4EL}}}};
        struct S1 l_22 = {0UL};
        int32_t l_25[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_25[i] = 8L;
        g_20 = (l_22 = (l_21[0][3][1] = g_20));
        l_23 |= 0L;
        g_26++;
        for (p_15 = 0; (p_15 <= 1); p_15 += 1)
        { 
            uint16_t l_29 = 1UL;
            for (g_24 = 0; g_24 < 2; g_24 += 1)
            {
                for (l_23 = 0; l_23 < 5; l_23 += 1)
                {
                    l_19[g_24][l_23] = 1UL;
                }
            }
            --l_29;
            for (g_20.f0 = 0; (g_20.f0 <= 4); g_20.f0 += 1)
            { 
                int i;
                ++g_32;
            }
        }
    }
    for (p_14.f3 = (-23); (p_14.f3 != 56); ++p_14.f3)
    { 
        uint16_t l_39 = 0x769BL;
        int32_t l_45 = 1L;
        int32_t l_51[3];
        int16_t l_109[1];
        int i;
        for (i = 0; i < 3; i++)
            l_51[i] = 0L;
        for (i = 0; i < 1; i++)
            l_109[i] = 0L;
        l_23 = (safe_div_func_int64_t_s_s(2L, ((l_39 = l_23) & (l_40 , (safe_div_func_int8_t_s_s((-1L), g_20.f0))))));
        if (((l_45 = (safe_lshift_func_int8_t_s_u((-4L), 5))) & (safe_add_func_uint16_t_u_u((((!(safe_add_func_int8_t_s_s((((((l_51[0] = 0x0C327405L) , ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((p_15 ^ (safe_rshift_func_uint16_t_u_u((((g_58 &= 1UL) == 0x3999EA34219042FBLL) > 7L), 15))), 8)) <= l_23), 4)) < 2UL)) , g_24) == l_23) < 0x7A7558CD180C4898LL), g_3))) < l_39) | l_40.f0), l_23))))
        { 
            uint64_t l_87 = 2UL;
            for (g_58 = 0; (g_58 <= 2); g_58 += 1)
            { 
                int32_t l_70 = 0x44A6599FL;
                int i;
                l_51[g_58] = ((((safe_rshift_func_uint16_t_u_s(0xECB1L, (safe_mul_func_uint8_t_u_u(l_39, (4294967295UL != (0xFEB85967819277EFLL && g_26)))))) && 0xA6DA23AEL) && p_14.f0) > p_14.f3);
                g_63 = 0xF3B01A63L;
                l_70 &= ((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(((p_14.f2 | l_23) == (g_32 ^= (safe_lshift_func_int16_t_s_u(l_51[g_58], 15)))), p_14.f4)) & 0xABE471A24E302138LL) >= p_15), g_3)) , g_63);
            }
            g_71 = (l_45 = (l_39 > g_3));
            for (g_20.f0 = (-7); (g_20.f0 > 31); g_20.f0 = safe_add_func_uint16_t_u_u(g_20.f0, 8))
            { 
                int32_t l_89 = 1L;
                uint8_t l_90[5][5][5] = {{{9UL,0UL,0xF4L,0UL,9UL},{0x17L,0xFAL,250UL,0UL,0x3DL},{0x7EL,0x15L,255UL,0UL,0x13L},{0x59L,0x17L,0UL,0xFAL,0x3DL},{249UL,0UL,0UL,6UL,9UL}},{{0x3DL,0UL,0xBFL,0x3DL,0x3DL},{253UL,0x15L,253UL,6UL,255UL},{0UL,0x59L,1UL,0xFAL,0UL},{255UL,0UL,0x2BL,0UL,0x2BL},{0x3DL,250UL,1UL,0UL,0x9CL}},{{0x7BL,0x2BL,253UL,0UL,0x7EL},{0x59L,0UL,0xBFL,0xBFL,0UL},{0x2BL,0x2BL,0UL,3UL,0xF4L},{0x17L,250UL,0UL,6UL,0x3DL},{0xA3L,0UL,255UL,0UL,0xA3L}},{{0x17L,0x59L,250UL,0x9AL,0x3DL},{0x2BL,0x15L,0xF4L,0UL,0x61L},{0x59L,0UL,0UL,0x59L,0x3DL},{0x7BL,0UL,2UL,6UL,0xA3L},{0x3DL,0x17L,0xBFL,1UL,0x3DL}},{{255UL,0x15L,255UL,6UL,0xF4L},{0UL,0xFAL,1UL,0x59L,0UL},{253UL,0UL,0x7EL,0UL,0x7EL},{0x3DL,0x3DL,1UL,0x9AL,0x9CL},{249UL,0x2BL,255UL,0UL,0x2BL}}};
                int i, j, k;
                l_90[3][4][4] &= ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((g_88[0] |= (((l_51[0] = (((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((p_16.f0 != p_15), 6)), g_24)), (safe_sub_func_uint64_t_u_u(((g_86 = g_24) < p_16.f0), l_87)))) <= 0x51L) , l_39)) , p_16.f0) <= g_3)) == p_14.f2), g_24)), l_89)) | p_14.f1);
            }
        }
        else
        { 
            int32_t l_91 = 1L;
            int32_t l_92 = 0xF0F192DBL;
            int32_t l_93 = 0xC284D449L;
            int64_t l_94 = 0x16A0CFD0E8CD9E3ALL;
            int32_t l_95 = 0xFD8114BAL;
            int32_t l_96 = 0x656E8C2BL;
            int32_t l_97 = (-1L);
            int32_t l_99 = 0xE76D89E4L;
            int32_t l_102 = (-1L);
            int32_t l_107[5];
            uint32_t l_112 = 0x7FE344F0L;
            int i;
            for (i = 0; i < 5; i++)
                l_107[i] = 1L;
            --l_112;
            l_51[0] = ((l_101 &= (l_96 <= (safe_div_func_uint16_t_u_u(((l_97 >= g_24) == (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((l_93 |= ((safe_mod_func_uint32_t_u_u(0x3C664DA5L, l_45)) || 0x98L)) != p_14.f2), l_91)), 0xACL))), 0x7048L)))) >= p_14.f3);
        }
        l_51[0] &= (-5L);
    }
    if (p_14.f4)
    { 
        const int32_t l_133[3][1][1] = {{{0x2C5C11F5L}},{{0x2C5C11F5L}},{{0x2C5C11F5L}}};
        int32_t l_134 = (-9L);
        int32_t l_135[5];
        struct S1 l_143[5] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
        int32_t l_174 = 0x45B7FBA0L;
        int8_t l_185 = 1L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_135[i] = 8L;
        for (g_63 = 0; (g_63 <= 4); g_63 += 1)
        { 
            int64_t l_136 = 0x7309CB0568AF3DB6LL;
            int32_t l_138 = (-1L);
            int32_t l_139 = 1L;
            uint16_t l_140[2];
            int i;
            for (i = 0; i < 2; i++)
                l_140[i] = 0UL;
            for (l_101 = 0; (l_101 <= 4); l_101 += 1)
            { 
                uint32_t l_127 = 0x36400593L;
                int32_t l_137 = 0x5219CEA3L;
                int i;
                g_88[0] ^= (p_14.f1 ^ ((g_86 >= 0x60D8L) || ((((safe_mul_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(0xB35188A0L, l_111[0])) > p_14.f2) , 0UL), p_14.f1)) , g_4) | p_14.f2) && l_127)));
                g_88[0] ^= (safe_div_func_uint16_t_u_u(((18446744073709551612UL > p_14.f4) < ((!((((l_134 = (safe_mul_func_uint16_t_u_u(65527UL, l_133[1][0][0]))) <= l_111[g_63]) <= l_133[1][0][0]) < 3UL)) || g_32)), 0x4493L));
                --l_140[1];
            }
        }
        if (p_14.f4)
        { 
            uint32_t l_152 = 0xF7C67E8BL;
            int32_t l_153[1][4];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_153[i][j] = 0x44D6E761L;
            }
            g_88[0] ^= g_24;
            l_153[0][2] = (l_143[0] , ((safe_mul_func_uint8_t_u_u((((g_4 < (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_152, (l_133[1][0][0] != l_111[1]))), 6)), l_152))) >= 0xCEBAL) == p_14.f1), 0xC4L)) , p_14.f1));
        }
        else
        { 
            int32_t l_168[5][4] = {{0L,0L,0x4A2BAD3FL,0L},{0L,(-3L),(-3L),0L},{(-3L),0L,(-3L),(-3L)},{0L,0L,0x4A2BAD3FL,0L},{0L,(-3L),(-3L),0L}};
            struct S1 l_216 = {0xF41CL};
            int i, j;
            for (l_105 = 0; (l_105 < 8); l_105 = safe_add_func_int8_t_s_s(l_105, 1))
            { 
                uint32_t l_173 = 0xA36F1CD0L;
                l_175 &= (0x11A6D5F070AD09C9LL | (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((l_135[4] = ((g_24 = (((safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_168[3][1], (safe_lshift_func_uint16_t_u_u(((-6L) >= (safe_div_func_uint32_t_u_u(((l_23 ^= (p_15 && l_173)) <= l_168[4][0]), p_14.f4))), l_134)))), l_174)), l_143[0].f0)) < (-1L)) && p_16.f0)) ^ p_15)), l_173)), 8)), 0xC0L)));
                g_184 = (g_88[0] ^= ((safe_div_func_int32_t_s_s(g_63, 4294967293UL)) < ((((!g_20.f0) ^ (g_32 = ((safe_mul_func_int8_t_s_s(((!((safe_sub_func_int16_t_s_s((0x92B18A95L >= 0x3055C058L), p_14.f0)) , g_32)) >= p_14.f2), p_14.f2)) , g_26))) , g_63) , g_20.f0)));
                g_20 = g_20;
            }
            if (((g_20 = (l_40 = l_40)) , (l_134 = (l_168[1][3] = g_4))))
            { 
                uint64_t l_186 = 0xADAE2510918F9528LL;
                int32_t l_189 = 0xF9DE4F92L;
                l_186--;
                l_189 ^= (g_4 != p_15);
            }
            else
            { 
                int32_t l_196 = (-1L);
                l_105 = (l_196 = (safe_lshift_func_int8_t_s_s((-8L), (l_135[0] , ((((safe_mul_func_int16_t_s_s(l_100, (safe_mul_func_int16_t_s_s(0xB97BL, g_3)))) <= l_98) > g_88[0]) < 0x92L)))));
                l_101 = (safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(p_14.f0, (safe_unary_minus_func_int16_t_s((safe_sub_func_uint16_t_u_u((g_20.f0--), p_14.f0)))))) && (safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(p_14.f2, (safe_sub_func_uint8_t_u_u((g_63 = (l_216 , 255UL)), l_168[3][1])))) , 1UL) || 0x05L), p_15)), g_88[0])), g_4))) || l_217), 1));
            }
            for (l_40.f0 = 0; (l_40.f0 < 18); ++l_40.f0)
            { 
                l_168[3][1] = 0x7DB854CEL;
                return p_14;
            }
        }
    }
    else
    { 
        uint32_t l_220 = 0xA3F93A2BL;
        l_220 = l_106;
    }
    return l_221;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_88[i], "g_88[i]", print_hash_value);

    }
    transparent_crc(g_184, "g_184", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_325[i][j], "g_325[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_327[i][j], "g_327[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_352.f0, "g_352.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
