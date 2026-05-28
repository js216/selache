// SPDX-License-Identifier: MIT
// cctest_csmith_5f0faf5c.c --- cctest case csmith_5f0faf5c (csmith seed 1594863452)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc278937c */
/* @exp_ticks 0xaca2 */

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

// Options:   -s 1594863452 -o /tmp/csmith_gen_ebkzy4x0/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
   uint64_t  f1;
   uint16_t  f2;
   const uint64_t  f3;
   const int64_t  f4;
   const int32_t  f5;
   const int8_t  f6;
};

union U1 {
   uint16_t  f0;
   int8_t * const  f1;
   int8_t * const  f2;
};


static int32_t g_2 = 7L;
static int32_t g_5[1][7][2] = {{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}}};
static const int8_t g_10 = 0xC2L;
static const int8_t *g_9 = &g_10;
static int8_t g_16 = 0x21L;
static int8_t *g_15 = &g_16;
static int8_t *g_30[1] = {&g_16};
static uint32_t g_66 = 0UL;
static union U1 g_68 = {0x5134L};
static int32_t *g_74 = &g_5[0][4][0];
static int32_t g_87 = (-1L);
static struct S0 g_89[5][6] = {{{-1L,0x7AA637DEE9CF0C6CLL,0xD744L,0x3540FA7CF2F2AFFBLL,0x7BFFB87322D81C2DLL,6L,0xDBL},{-10L,0x4936DCCDC5626D82LL,1UL,0xFF936C86F33E7B1BLL,0x5FB79008C5D1B8DALL,0x205CD23EL,0xA3L},{0x8418D442BFBA12D9LL,4UL,65535UL,4UL,0x5B67D8BC617F6069LL,0xB3D763EEL,0xF0L},{0x8418D442BFBA12D9LL,4UL,65535UL,4UL,0x5B67D8BC617F6069LL,0xB3D763EEL,0xF0L},{-10L,0x4936DCCDC5626D82LL,1UL,0xFF936C86F33E7B1BLL,0x5FB79008C5D1B8DALL,0x205CD23EL,0xA3L},{-1L,0x7AA637DEE9CF0C6CLL,0xD744L,0x3540FA7CF2F2AFFBLL,0x7BFFB87322D81C2DLL,6L,0xDBL}},{{0x3B482F0B7091F55ALL,18446744073709551615UL,0xFF20L,0x5DDD7475D9A96C7ALL,0x140AC0B4975F8E47LL,-10L,0x66L},{1L,0x0E2E69A2289B7103LL,0x98E4L,0xA8F7DD28A493C9A8LL,1L,0x8D77B496L,1L},{0x8418D442BFBA12D9LL,4UL,65535UL,4UL,0x5B67D8BC617F6069LL,0xB3D763EEL,0xF0L},{-1L,0x7AA637DEE9CF0C6CLL,0xD744L,0x3540FA7CF2F2AFFBLL,0x7BFFB87322D81C2DLL,6L,0xDBL},{0x6F0F138F814AE1D9LL,0x254B315FCE81A1E7LL,0xF117L,18446744073709551609UL,0x6EA00FD19F2AA79DLL,-5L,0xBCL},{0x3B482F0B7091F55ALL,18446744073709551615UL,0xFF20L,0x5DDD7475D9A96C7ALL,0x140AC0B4975F8E47LL,-10L,0x66L}},{{0xE4B1711A83D060D7LL,0x480D3783E0E50127LL,0x6911L,0xD6C01FFE24739697LL,0xC7B67EAC4BFEEEDELL,0x6F90CD53L,-1L},{1L,0x0E2E69A2289B7103LL,0x98E4L,0xA8F7DD28A493C9A8LL,1L,0x8D77B496L,1L},{-1L,0x7AA637DEE9CF0C6CLL,0xD744L,0x3540FA7CF2F2AFFBLL,0x7BFFB87322D81C2DLL,6L,0xDBL},{0xE4B1711A83D060D7LL,0x480D3783E0E50127LL,0x6911L,0xD6C01FFE24739697LL,0xC7B67EAC4BFEEEDELL,0x6F90CD53L,-1L},{-10L,0x4936DCCDC5626D82LL,1UL,0xFF936C86F33E7B1BLL,0x5FB79008C5D1B8DALL,0x205CD23EL,0xA3L},{0xE4B1711A83D060D7LL,0x480D3783E0E50127LL,0x6911L,0xD6C01FFE24739697LL,0xC7B67EAC4BFEEEDELL,0x6F90CD53L,-1L}},{{0xE4B1711A83D060D7LL,0x480D3783E0E50127LL,0x6911L,0xD6C01FFE24739697LL,0xC7B67EAC4BFEEEDELL,0x6F90CD53L,-1L},{-10L,0x4936DCCDC5626D82LL,1UL,0xFF936C86F33E7B1BLL,0x5FB79008C5D1B8DALL,0x205CD23EL,0xA3L},{0xE4B1711A83D060D7LL,0x480D3783E0E50127LL,0x6911L,0xD6C01FFE24739697LL,0xC7B67EAC4BFEEEDELL,0x6F90CD53L,-1L},{-1L,0x7AA637DEE9CF0C6CLL,0xD744L,0x3540FA7CF2F2AFFBLL,0x7BFFB87322D81C2DLL,6L,0xDBL},{1L,0x0E2E69A2289B7103LL,0x98E4L,0xA8F7DD28A493C9A8LL,1L,0x8D77B496L,1L},{0xE4B1711A83D060D7LL,0x480D3783E0E50127LL,0x6911L,0xD6C01FFE24739697LL,0xC7B67EAC4BFEEEDELL,0x6F90CD53L,-1L}},{{0x3B482F0B7091F55ALL,18446744073709551615UL,0xFF20L,0x5DDD7475D9A96C7ALL,0x140AC0B4975F8E47LL,-10L,0x66L},{0x6F0F138F814AE1D9LL,0x254B315FCE81A1E7LL,0xF117L,18446744073709551609UL,0x6EA00FD19F2AA79DLL,-5L,0xBCL},{-1L,0x7AA637DEE9CF0C6CLL,0xD744L,0x3540FA7CF2F2AFFBLL,0x7BFFB87322D81C2DLL,6L,0xDBL},{0x8418D442BFBA12D9LL,4UL,65535UL,4UL,0x5B67D8BC617F6069LL,0xB3D763EEL,0xF0L},{1L,0x0E2E69A2289B7103LL,0x98E4L,0xA8F7DD28A493C9A8LL,1L,0x8D77B496L,1L},{0x3B482F0B7091F55ALL,18446744073709551615UL,0xFF20L,0x5DDD7475D9A96C7ALL,0x140AC0B4975F8E47LL,-10L,0x66L}}};
static struct S0 *g_97 = &g_89[4][4];
static struct S0 **g_96 = &g_97;
static uint32_t g_136[7][2][3] = {{{18446744073709551612UL,2UL,0xE538C652L},{0xF79CB047L,18446744073709551606UL,18446744073709551615UL}},{{7UL,0UL,7UL},{18446744073709551615UL,0UL,1UL}},{{1UL,18446744073709551606UL,0UL},{0UL,2UL,18446744073709551612UL}},{{0x72F1D7CBL,0UL,1UL},{0UL,0xA3877515L,0x4C8BB38CL}},{{1UL,0x341503C5L,0x341503C5L},{18446744073709551615UL,18446744073709551612UL,0x341503C5L}},{{7UL,0x72F1D7CBL,0x4C8BB38CL},{0xF79CB047L,7UL,1UL}},{{4UL,0x21BE7830L,18446744073709551612UL},{18446744073709551615UL,7UL,0UL}}};
static int16_t g_149[6] = {1L,1L,1L,1L,1L,1L};
static int16_t g_190[6] = {0x2A30L,0x2A30L,0x2A30L,0x2A30L,0x2A30L,0x2A30L};
static int32_t g_222 = (-2L);
static uint64_t g_282[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static union U1 g_350 = {0x7EA4L};
static union U1 *g_349[1][1] = {{&g_350}};
static int16_t *g_364[7][5][3] = {{{&g_149[0],&g_149[4],&g_149[5]},{&g_190[0],&g_149[1],&g_190[0]},{&g_190[4],&g_149[0],&g_190[3]},{(void*)0,&g_190[4],(void*)0},{&g_149[0],&g_190[4],&g_149[0]}},{{(void*)0,(void*)0,&g_149[3]},{&g_149[0],&g_190[2],&g_149[3]},{(void*)0,(void*)0,(void*)0},{&g_190[4],&g_149[0],(void*)0},{&g_190[0],(void*)0,&g_149[4]}},{{&g_149[0],&g_190[3],&g_190[4]},{&g_149[1],(void*)0,&g_149[0]},{&g_149[5],&g_190[3],&g_149[1]},{&g_149[1],(void*)0,(void*)0},{&g_149[0],&g_149[0],&g_190[3]}},{{&g_149[0],(void*)0,&g_149[3]},{&g_190[4],&g_190[2],&g_190[4]},{&g_149[3],(void*)0,&g_149[1]},{&g_149[3],&g_190[4],&g_190[4]},{&g_190[4],&g_190[4],&g_149[3]}},{{&g_190[3],&g_149[0],&g_190[3]},{&g_190[4],&g_149[1],(void*)0},{&g_190[3],&g_149[4],&g_149[1]},{&g_149[1],&g_149[1],&g_149[0]},{&g_190[4],&g_149[1],&g_190[4]}},{{&g_149[1],&g_149[3],&g_149[4]},{&g_190[3],(void*)0,(void*)0},{&g_190[4],&g_149[0],(void*)0},{&g_190[3],&g_190[4],&g_149[3]},{&g_190[4],&g_190[0],&g_149[3]}},{{&g_149[3],&g_149[3],&g_149[0]},{&g_149[3],&g_190[0],(void*)0},{&g_190[4],&g_190[4],&g_190[3]},{&g_149[0],&g_149[0],&g_190[0]},{&g_149[0],(void*)0,&g_149[5]}}};
static uint8_t g_377 = 0x5DL;
static int32_t g_387 = 3L;
static int32_t g_424 = 0L;
static union U1 * const *g_429[4] = {&g_349[0][0],&g_349[0][0],&g_349[0][0],&g_349[0][0]};
static union U1 * const **g_428 = &g_429[0];
static struct S0 g_442 = {-6L,0xDFDACF34490AD3C0LL,9UL,5UL,-2L,0L,0xA2L};
static int16_t **g_486 = (void*)0;
static int16_t ***g_485 = &g_486;
static uint64_t *g_510 = &g_89[3][0].f1;
static int32_t *g_538 = &g_87;
static int8_t **g_616 = &g_30[0];
static uint64_t g_623[2] = {0xEC6AD464E598DA1ALL,0xEC6AD464E598DA1ALL};
static int64_t g_642 = (-8L);
static int32_t g_648[5][6][4] = {{{0x50A3A770L,0x13F4DD70L,0x50A3A770L,6L},{(-1L),0x13F4DD70L,0x4EB1DA08L,0x174A563BL},{0x13F4DD70L,(-9L),(-9L),0x13F4DD70L},{0x50A3A770L,0x174A563BL,(-9L),6L},{0x13F4DD70L,(-1L),0x4EB1DA08L,(-1L)},{(-1L),0x4EB1DA08L,1L,6L}},{{1L,6L,(-7L),(-7L)},{0x50A3A770L,0x50A3A770L,0x174A563BL,(-9L)},{0x50A3A770L,0x4EB1DA08L,(-7L),0x50A3A770L},{1L,(-9L),1L,(-7L)},{6L,(-9L),0x174A563BL,0x50A3A770L},{(-9L),0x4EB1DA08L,0x4EB1DA08L,(-9L)}},{{1L,0x50A3A770L,0x4EB1DA08L,(-7L)},{(-9L),6L,0x174A563BL,6L},{6L,0x4EB1DA08L,1L,6L},{1L,6L,(-7L),(-7L)},{0x50A3A770L,0x50A3A770L,0x174A563BL,(-9L)},{0x50A3A770L,0x4EB1DA08L,(-7L),0x50A3A770L}},{{1L,(-9L),1L,(-7L)},{6L,(-9L),0x174A563BL,0x50A3A770L},{(-9L),0x4EB1DA08L,0x4EB1DA08L,(-9L)},{1L,0x50A3A770L,0x4EB1DA08L,(-7L)},{(-9L),6L,0x174A563BL,6L},{6L,0x4EB1DA08L,1L,6L}},{{1L,6L,(-7L),(-7L)},{0x50A3A770L,0x50A3A770L,0x174A563BL,(-9L)},{0x50A3A770L,0x4EB1DA08L,(-7L),0x50A3A770L},{1L,(-9L),1L,(-7L)},{6L,(-9L),0x174A563BL,0x50A3A770L},{(-9L),0x4EB1DA08L,0x4EB1DA08L,(-9L)}}};
static int32_t *g_647 = &g_648[4][4][0];
static int64_t *g_665 = (void*)0;



static int16_t  func_1(void);
static int32_t  func_6(const int8_t * p_7, int16_t  p_8);
static int16_t  func_11(int8_t * p_12, int8_t * p_13, int32_t * p_14);
static int8_t * func_17(int8_t * p_18, int8_t * p_19, int8_t * p_20);
static int8_t * func_21(int8_t * p_22);
static int8_t * func_23(int32_t * p_24);
static int32_t * func_25(uint32_t  p_26, int32_t * p_27);
static int8_t * func_39(uint32_t  p_40);




static int16_t  func_1(void)
{ 
    int32_t *l_3 = &g_2;
    int32_t *l_4 = &g_5[0][4][0];
    int8_t *l_28 = &g_16;
    int8_t **l_29[2][4] = {{(void*)0,&l_28,(void*)0,(void*)0},{&l_28,&l_28,&l_28,&l_28}};
    uint32_t l_682 = 4294967295UL;
    int i, j;
    (*l_4) &= ((*l_3) = g_2);
    l_682 |= func_6(g_9, func_11(g_15, func_17((g_30[0] = func_21(func_23(func_25((l_28 != (g_30[0] = (void*)0)), &g_2)))), g_15, g_15), g_647));
    return (*l_3);
}



static int32_t  func_6(const int8_t * p_7, int16_t  p_8)
{ 
    int64_t *l_664 = &g_642;
    int32_t l_674 = 0L;
    int32_t *l_678 = &g_648[4][4][0];
    int32_t **l_679[5] = {&l_678,&l_678,&l_678,&l_678,&l_678};
    int i;
    for (g_87 = (-7); (g_87 == 7); g_87 = safe_add_func_uint8_t_u_u(g_87, 7))
    { 
        const int32_t l_663[1] = {(-2L)};
        int64_t * const l_666 = (void*)0;
        uint16_t *l_673 = &g_350.f0;
        int32_t **l_675 = &g_74;
        int i;
        (*l_675) = ((safe_rshift_func_int8_t_s_u((*g_9), (l_663[0] ^ (((g_665 = l_664) == l_666) | (safe_sub_func_uint16_t_u_u((((*l_673) = ((safe_div_func_int32_t_s_s((l_663[0] <= (safe_mod_func_uint16_t_u_u((0x6AF082DF8731EBCBLL == l_663[0]), p_8))), 0xFC90BD03L)) ^ (*g_15))) >= l_674), (-5L))))))) , &l_674);
        for (g_66 = 0; (g_66 == 53); g_66 = safe_add_func_uint8_t_u_u(g_66, 8))
        { 
            (*l_675) = l_678;
        }
        return (*g_647);
    }
    g_74 = func_25(((*l_678) = 1UL), func_25(g_442.f6, &l_674));
    for (g_2 = (-4); (g_2 >= (-7)); --g_2)
    { 
        (*g_74) &= (-1L);
        if (p_8)
            break;
        (*g_74) |= ((*l_678) != p_8);
        (*g_647) = 0x2FCE7F82L;
        (*g_647) &= 1L;
    }
    return p_8;
}



static int16_t  func_11(int8_t * p_12, int8_t * p_13, int32_t * p_14)
{ 
    struct S0 ** const l_652 = &g_97;
    int32_t l_653 = 0L;
    int32_t *l_654[1][6] = {{&g_648[1][0][1],&g_648[1][0][1],&g_648[1][0][1],&g_648[1][0][1],&g_648[1][0][1],&g_648[1][0][1]}};
    uint32_t l_655 = 0x98290BD7L;
    int64_t l_658[3][2];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_658[i][j] = 1L;
    }
    for (g_387 = 15; (g_387 < (-7)); g_387--)
    { 
        uint32_t l_651 = 4294967291UL;
        (*p_14) = l_651;
    }
    l_653 = (&g_97 != l_652);
    l_655--;
    return l_658[0][0];
}



static int8_t * func_17(int8_t * p_18, int8_t * p_19, int8_t * p_20)
{ 
    int64_t l_457 = (-9L);
    int32_t l_459 = 0L;
    int32_t l_460 = (-7L);
    uint32_t l_461[5];
    const int16_t ***l_487[1];
    int32_t l_496 = 1L;
    uint16_t *l_554[3][4] = {{&g_350.f0,&g_89[3][0].f2,&g_89[3][0].f2,&g_89[3][0].f2},{&g_89[3][0].f2,&g_89[3][0].f2,&g_89[3][0].f2,&g_89[3][0].f2},{&g_350.f0,&g_350.f0,&g_89[3][0].f2,&g_89[3][0].f2}};
    int8_t *l_582 = &g_16;
    int32_t l_626 = 0xE2992802L;
    int32_t l_627 = (-7L);
    int32_t l_628[1];
    uint8_t l_629[1];
    int32_t *l_639 = &g_5[0][4][0];
    int32_t *l_640[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_641 = 1L;
    int32_t l_643 = 0xF1E82622L;
    uint16_t l_644[7][7][5] = {{{65527UL,65535UL,0UL,0x5F52L,0x09CCL},{0xECB3L,0x3861L,65535UL,65535UL,0x275FL},{0x812FL,0x09CCL,65535UL,0x7CFAL,0x58A1L},{0x4909L,0xB174L,0x2EFCL,0x8D5DL,0x8796L},{0x5EAFL,1UL,0x2EFCL,0x5EAFL,0x71A3L},{0x7CFAL,65535UL,65535UL,0xCE57L,0x545AL},{0UL,0x51E6L,65535UL,0x8126L,65535UL}},{{0x6A0DL,0x2EFCL,0UL,0xBC52L,0x8D5DL},{0x8796L,0x6A0DL,1UL,1UL,0xECB3L},{65529UL,0x2B07L,0x8D5DL,0x8D5DL,0x2B07L},{65535UL,0x3861L,65530UL,0x8126L,6UL},{3UL,0x8126L,0x545AL,0x275FL,7UL},{0UL,0xDDDEL,65535UL,6UL,65529UL},{3UL,0UL,1UL,1UL,6UL}},{{0x8D5DL,65535UL,0x6A0DL,1UL,0x4909L},{0x0F1AL,0xEB44L,0x49E3L,0x84D0L,1UL},{1UL,0UL,0xA1C0L,65529UL,1UL},{0UL,0x4909L,0x8796L,0xDC19L,0x5F52L},{0x49E3L,5UL,6UL,1UL,0x8126L},{5UL,0UL,0x4FDCL,0UL,6UL},{65535UL,0x0D68L,0x6A0DL,0UL,8UL}},{{0UL,65529UL,9UL,1UL,65535UL},{0x3861L,65535UL,2UL,0xDC19L,6UL},{65530UL,0x2EFCL,0x545AL,65529UL,0UL},{0x4FDCL,7UL,0UL,0x84D0L,65535UL},{0UL,0xE8ABL,6UL,1UL,6UL},{9UL,9UL,0x8796L,1UL,0x71A3L},{0x4FDCL,0x5F52L,1UL,6UL,0x8D5DL}},{{0x0D68L,0UL,0x4AA3L,0x275FL,1UL},{7UL,0x5F52L,0UL,0x8126L,0x2EFCL},{0UL,9UL,0xE8ABL,6UL,0xDDDEL},{0xEB44L,0xE8ABL,0UL,0xEB44L,6UL},{0x8126L,7UL,0UL,65535UL,0UL},{0x49E3L,0x2EFCL,0x0056L,0x84D0L,0x3861L},{65529UL,65535UL,0x2CD0L,9UL,6UL}},{{0xDDDEL,65529UL,0x8796L,65535UL,0x0D68L},{0x0F1AL,0x0D68L,1UL,6UL,0x0D68L},{0x275FL,0UL,65535UL,5UL,6UL},{1UL,5UL,0x545AL,0x8D5DL,0x3861L},{0UL,0x4909L,0UL,6UL,0UL},{0x2EFCL,0UL,1UL,3UL,6UL},{0x5F52L,0xEB44L,0x6A0DL,0xDDDEL,0xDDDEL}},{{0x0F1AL,65535UL,0x0F1AL,0x84D0L,0x2EFCL},{0x4909L,0UL,0x84D0L,65527UL,1UL},{65527UL,0xDDDEL,0x8796L,0x3861L,0x8D5DL},{0x49E3L,0x8126L,0x84D0L,1UL,0x71A3L},{0x71A3L,0UL,0x0F1AL,65530UL,6UL},{8UL,0UL,0x6A0DL,0x0D68L,65535UL},{0UL,0UL,1UL,0UL,0x4AA3L}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_461[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_487[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_628[i] = 0xC9B1A2B4L;
    for (i = 0; i < 1; i++)
        l_629[i] = 249UL;
    for (g_442.f1 = 0; (g_442.f1 <= 0); g_442.f1 += 1)
    { 
        int32_t *l_458[6][1] = {{&g_87},{&g_5[0][4][0]},{&g_87},{&g_87},{&g_5[0][4][0]},{&g_87}};
        uint64_t l_477 = 1UL;
        int32_t l_519[1][4][3] = {{{0xF206F086L,0x8DB09069L,(-1L)},{0xF206F086L,0xF206F086L,0x8DB09069L},{1L,0x8DB09069L,0x8DB09069L},{0x8DB09069L,0x4168D5BBL,(-1L)}}};
        struct S0 **l_521[6] = {&g_97,&g_97,&g_97,&g_97,&g_97,&g_97};
        uint16_t *l_525 = (void*)0;
        uint16_t l_530 = 0x1F9FL;
        union U1 **l_555 = &g_349[0][0];
        union U1 l_576[7] = {{0x6027L},{0x6027L},{0x6027L},{0x6027L},{0x6027L},{0x6027L},{0x6027L}};
        uint64_t l_579[4][5] = {{0UL,0x77286F7D95C5335ALL,0UL,0UL,0x77286F7D95C5335ALL},{0x77286F7D95C5335ALL,0UL,0UL,0x77286F7D95C5335ALL,0UL},{0x77286F7D95C5335ALL,0x77286F7D95C5335ALL,0x1FBD97286ACF5C8CLL,0x77286F7D95C5335ALL,0x77286F7D95C5335ALL},{0UL,0x77286F7D95C5335ALL,0UL,0UL,0x77286F7D95C5335ALL}};
        int32_t *l_602 = &l_519[0][2][0];
        int8_t l_620 = (-5L);
        int i, j, k;
        l_461[4]++;
        for (g_424 = 0; (g_424 <= 0); g_424 += 1)
        { 
            uint32_t l_466 = 0x8C8F00AEL;
            int16_t *l_471 = &g_190[4];
            uint32_t l_476[5] = {0UL,0UL,0UL,0UL,0UL};
            int32_t l_492 = (-7L);
            int32_t *l_504[3][2][5] = {{{&g_2,&g_2,(void*)0,&g_2,&g_2},{&l_459,&g_2,&l_459,&l_459,&g_2}},{{&g_2,&l_459,&l_459,&g_2,&l_459},{&g_2,&g_2,(void*)0,&g_2,&g_2}},{{&l_459,&g_2,&l_459,&l_459,&g_2},{&g_2,&l_459,&l_459,&g_2,&l_459}}};
            uint64_t *l_511 = &g_89[3][0].f1;
            const struct S0 l_524[3][3][2] = {{{{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L},{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L}},{{0x015C9966AA9345F6LL,0x0C7962F1B5C4DB49LL,0x27DFL,0xD8FDE7180C38BE92LL,0L,8L,-8L},{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L}},{{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L},{0x015C9966AA9345F6LL,0x0C7962F1B5C4DB49LL,0x27DFL,0xD8FDE7180C38BE92LL,0L,8L,-8L}}},{{{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L},{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L}},{{0x015C9966AA9345F6LL,0x0C7962F1B5C4DB49LL,0x27DFL,0xD8FDE7180C38BE92LL,0L,8L,-8L},{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L}},{{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L},{0x015C9966AA9345F6LL,0x0C7962F1B5C4DB49LL,0x27DFL,0xD8FDE7180C38BE92LL,0L,8L,-8L}}},{{{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L},{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L}},{{0x015C9966AA9345F6LL,0x0C7962F1B5C4DB49LL,0x27DFL,0xD8FDE7180C38BE92LL,0L,8L,-8L},{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L}},{{0x01519CBF16D79D33LL,0xE4C34CD8EBF8BA61LL,0x97C6L,0x43A463316D4587BCLL,0x0E820011D095AFDBLL,1L,1L},{0x015C9966AA9345F6LL,0x0C7962F1B5C4DB49LL,0x27DFL,0xD8FDE7180C38BE92LL,0L,8L,-8L}}}};
            int i, j, k;
            if (l_461[4])
                break;
            if (((safe_sub_func_uint32_t_u_u(g_10, ((l_457 , (0x821F11DB3CF177A7LL == g_442.f1)) | l_466))) == (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((*l_471) = l_466), (safe_mul_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u(((((((l_457 > l_466) >= g_387) || g_350.f0) && 65535UL) , 1UL) <= l_466), l_476[1])) > l_477) <= g_89[3][0].f5) ^ (-9L)), 1UL)))), l_476[1]))))
            { 
                uint8_t l_497 = 0x71L;
                for (l_457 = 0; (l_457 <= 0); l_457 += 1)
                { 
                    uint32_t *l_490 = &l_466;
                    int32_t **l_491 = &g_74;
                    uint16_t l_493 = 65532UL;
                    int i, j, k;
                    (*l_491) = ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((-8L) ^ (safe_mul_func_int16_t_s_s(g_5[g_424][(g_442.f1 + 5)][(g_442.f1 + 1)], (!g_5[g_442.f1][(g_424 + 2)][g_442.f1])))), 7)), (l_459 = (((g_485 != (l_487[0] = l_487[0])) >= g_5[g_424][(g_442.f1 + 5)][(g_442.f1 + 1)]) , ((*l_490) = (safe_lshift_func_int8_t_s_s(6L, l_460))))))) , (void*)0);
                    --l_493;
                }
                if (l_466)
                    break;
                ++l_497;
                for (g_16 = 0; (g_16 <= 24); ++g_16)
                { 
                    l_492 ^= l_497;
                }
            }
            else
            { 
                for (g_16 = 0; (g_16 <= 4); g_16 = safe_add_func_int16_t_s_s(g_16, 1))
                { 
                    return &g_16;
                }
                l_459 |= l_460;
                if (l_492)
                    continue;
            }
            l_504[0][1][1] = l_458[2][0];
            if ((0x5CF5L < ((((+0xED7D2406A5D1B2FBLL) | l_460) >= (l_461[4] > 18446744073709551606UL)) & ((*l_511) = (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((((g_510 = &g_282[1]) == (void*)0) > l_461[4]), 0UL)), g_87))))))
            { 
                int64_t l_512 = 0xDD5587C629BE1B37LL;
                uint64_t *l_518 = &g_89[3][0].f1;
                uint16_t *l_520 = &g_442.f2;
                g_87 = (l_512 > ((0x01L >= ((safe_rshift_func_uint16_t_u_u(((((0xB11023FDL == l_459) , ((*l_520) = (~((-1L) > (safe_sub_func_uint32_t_u_u((&l_477 == (l_518 = &l_477)), l_519[0][2][0])))))) , l_496) & l_512), 2)) | g_442.f6)) >= l_512));
                g_2 = (l_521[2] != (((safe_rshift_func_int8_t_s_s(((l_512 || ((l_524[1][0][1] , l_525) == g_364[2][3][2])) , (*p_18)), ((safe_mod_func_int64_t_s_s((g_89[3][0].f4 || 0UL), l_530)) < 0x957CL))) , (-1L)) , l_521[2]));
                return &g_16;
            }
            else
            { 
                uint16_t l_534 = 0x489DL;
                int32_t l_580 = (-1L);
                for (l_459 = 2; (l_459 >= 27); l_459++)
                { 
                    int16_t l_533[4][2] = {{0x393BL,0x393BL},{(-4L),0x393BL},{0x393BL,(-4L)},{0x393BL,0x393BL}};
                    int32_t *l_537 = &l_460;
                    int i, j;
                    l_458[2][0] = &g_87;
                    if (l_533[0][1])
                        break;
                    --l_534;
                    g_538 = l_537;
                }
                if (((l_534 ^ g_68.f0) != (0xA9F3DE4426D0516DLL && (*g_510))))
                { 
                    int32_t *l_541[7][7] = {{&g_387,&g_424,&g_387,&g_424,&g_387,&g_424,&g_424},{&g_424,&g_387,&g_387,&g_387,&g_424,&g_387,&g_387},{&g_387,&g_387,&g_387,&g_387,(void*)0,&g_424,&g_424},{&g_387,&g_387,(void*)0,&g_424,&g_424,(void*)0,&g_387},{(void*)0,&g_387,&g_387,&g_387,(void*)0,&g_424,&g_387},{(void*)0,&g_424,&g_424,&g_387,&g_424,&g_424,(void*)0},{&g_387,&g_424,(void*)0,&g_387,&g_387,&g_387,(void*)0}};
                    uint16_t *l_542 = &g_442.f2;
                    union U1 l_551 = {0x52E1L};
                    int i, j;
                    (*g_428) = ((safe_mul_func_uint8_t_u_u((((&g_387 == l_541[4][5]) , ((--(*l_542)) >= (safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_s((((l_551 , (safe_mul_func_uint8_t_u_u(l_551.f0, 6UL))) > (l_554[1][3] == &l_534)) && 0xF7EB0519L), 5)) == (*g_510)) < l_460), g_442.f0)), (-1L))))) < g_222), g_190[2])) , l_555);
                    (*g_538) = (-9L);
                }
                else
                { 
                    int32_t l_572 = 0xA556E8BBL;
                    int32_t l_581[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_581[i] = 0x9EE6C1D9L;
                    (*g_538) = (-1L);
                    l_581[1] |= ((((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((((((g_442.f0 & (+(((*p_20) = (((safe_rshift_func_int16_t_s_u((((safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s((((((+(l_572 < (safe_sub_func_int8_t_s_s((+((l_576[4] , l_457) > (safe_mul_func_uint16_t_u_u(g_149[3], ((((l_534 != ((g_89[3][0].f2 <= 0UL) ^ l_579[2][1])) > 65528UL) <= l_457) ^ l_534))))), 0x41L)))) , l_572) & l_572) == (-4L)) <= l_572), l_534)), (*g_510))) , &g_5[0][6][0]) != &l_519[0][3][2]), 0)) != l_534) == (-9L))) < g_89[3][0].f4))) , 0x5849F6E1L) & (*g_538)) != 0L) & g_442.f4), l_580)) ^ 0x0435D724L), l_572)), g_424)) < l_580) , (*p_19)) == l_534);
                    if (l_581[1])
                        continue;
                    return l_582;
                }
            }
            for (l_457 = 0; (l_457 < (-12)); --l_457)
            { 
                int16_t l_586 = (-1L);
                int32_t *l_603 = &l_519[0][1][2];
                union U1 l_613 = {0x3779L};
                if ((*g_538))
                { 
                    int16_t l_585[7] = {0L,0L,0L,0L,0L,0L,0L};
                    int64_t *l_601 = &g_442.f0;
                    int i;
                    (*g_538) = (l_585[3] ^= 0L);
                    if (l_586)
                        continue;
                    l_603 = func_25((safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((g_350.f0 = ((g_424 , &l_555) == &l_555)), 9)), 0x08L)), ((*l_601) ^= ((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((1UL & g_136[4][1][0]) , (((safe_sub_func_int16_t_s_s(l_586, l_496)) >= (*g_538)) > (*g_538))), (*g_538))), 1UL)) == l_585[2])))), l_585[3])), l_602);
                }
                else
                { 
                    uint16_t l_612 = 0x2F73L;
                    (*l_603) = (((g_89[3][0].f1 , (((*g_97) , (safe_div_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(8L, (safe_rshift_func_int16_t_s_s((l_612 && (l_613 , (((*l_471) = ((safe_div_func_uint8_t_u_u(g_442.f6, 0x2DL)) , l_496)) >= l_459))), 4)))) != l_612) , (*l_603)), l_612))) >= l_461[4])) > (*g_510)) >= l_461[4]);
                    (*g_538) = (*l_603);
                    (*l_603) = (&p_20 != (g_616 = &g_30[0]));
                    if ((*g_538))
                        break;
                }
            }
        }
        for (g_387 = (-23); (g_387 > 15); ++g_387)
        { 
            int64_t l_619 = 0x3F88F248A80B8D04LL;
            int32_t l_621 = 0x2995EB34L;
            int32_t l_622 = 0x514691B0L;
            ++g_623[0];
            if ((*g_538))
                break;
        }
        l_629[0]--;
        if (l_461[4])
            continue;
    }
    l_627 &= ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(g_2, (l_628[0] & ((*g_510) , (*p_18))))), (((l_629[0] & g_387) || (safe_unary_minus_func_int8_t_s((safe_add_func_int8_t_s_s(0x11L, g_424))))) | l_628[0]))) <= l_629[0]);
    l_644[6][4][2]++;
    return l_582;
}



static int8_t * func_21(int8_t * p_22)
{ 
    int8_t l_310[7][7][5] = {{{0x46L,0xBAL,0x54L,0xEDL,0x54L},{0x15L,0x15L,0x94L,0xEDL,0x38L},{0xBAL,0x46L,0xA5L,0xBAL,0x15L},{0x2DL,(-3L),(-6L),0x74L,(-3L)},{0x15L,(-3L),0xE7L,0x54L,0x54L},{0xE5L,0x55L,0xE5L,0x94L,0x54L},{(-6L),0xB9L,(-3L),0xA5L,0x58L}},{{(-3L),0xA5L,0x38L,(-6L),0x55L},{0xD3L,0x55L,(-3L),0x58L,0xBAL},{0xA5L,0xE5L,0xE5L,0xA5L,0xD3L},{0xA5L,(-6L),0xE7L,1L,(-6L)},{0xD3L,(-3L),0x94L,(-3L),0x54L},{(-3L),0xD3L,0xE5L,1L,(-3L)},{(-6L),0xA5L,0x15L,0xA5L,(-6L)}},{{0xE5L,0xA5L,0xD3L,0x58L,0x55L},{0x55L,0xD3L,(-3L),(-6L),1L},{0xA5L,(-3L),0xEDL,0xA5L,0x55L},{0xB9L,(-6L),0x94L,0x94L,(-6L)},{0x55L,0xE5L,0x94L,0x54L,(-3L)},{(-3L),0x55L,0xEDL,1L,0x54L},{0x58L,0xA5L,(-3L),0xB9L,(-6L)}},{{(-3L),0xB9L,0xD3L,(-6L),0xD3L},{0x55L,0x55L,0x15L,(-6L),0xBAL},{0xB9L,(-3L),0xE5L,0xB9L,0x55L},{0xA5L,0x58L,0x94L,1L,0x58L},{0x55L,(-3L),0xE7L,0x54L,0x54L},{0xE5L,0x55L,0xE5L,0x94L,0x54L},{(-6L),0xB9L,(-3L),0xA5L,0x58L}},{{(-3L),0xA5L,0x38L,(-6L),0x55L},{0xD3L,0x55L,(-3L),0x58L,0xBAL},{0xA5L,0xE5L,0xE5L,0xA5L,0xD3L},{0xA5L,(-6L),0xE7L,1L,(-6L)},{0xD3L,(-3L),0x94L,(-3L),0x54L},{(-3L),0xD3L,0xE5L,1L,(-3L)},{(-6L),0xA5L,0x15L,0xA5L,(-6L)}},{{0xE5L,0xA5L,0xD3L,0x58L,0x55L},{0x55L,0xD3L,(-3L),(-6L),1L},{0xA5L,(-3L),0xEDL,0xA5L,0x55L},{0xB9L,(-6L),0x94L,0x94L,(-6L)},{0x55L,0xE5L,0x94L,0x54L,(-3L)},{(-3L),0x55L,0xEDL,1L,0x54L},{0x58L,0xA5L,(-3L),0xB9L,(-6L)}},{{(-3L),0xB9L,0x2DL,0x94L,0x2DL},{1L,1L,0x55L,0x94L,0xB9L},{0xEDL,0x58L,0x74L,0xEDL,1L},{0xE5L,0xE7L,0x15L,(-3L),0xE7L},{1L,0x58L,0x54L,0xD3L,0xD3L},{0x74L,1L,0x74L,0x15L,0xD3L},{0x94L,0xEDL,0x38L,0xE5L,0xE7L}}};
    int64_t *l_311 = &g_89[3][0].f0;
    union U1 *l_313[3];
    union U1 **l_312 = &l_313[0];
    int32_t *l_314 = &g_5[0][4][1];
    const int8_t **l_320 = &g_9;
    const struct S0 * const l_329 = &g_89[1][1];
    int32_t *l_330 = &g_2;
    int8_t l_355[3];
    int32_t l_403[2];
    uint16_t l_415 = 65534UL;
    int8_t *l_438 = &g_16;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_313[i] = &g_68;
    for (i = 0; i < 3; i++)
        l_355[i] = 3L;
    for (i = 0; i < 2; i++)
        l_403[i] = 0x922CC664L;
    (*l_314) = (((((safe_sub_func_uint32_t_u_u(g_222, l_310[4][6][4])) | l_310[4][6][4]) | (l_311 != l_311)) <= (l_312 == (void*)0)) & g_89[3][0].f6);
    (*l_330) ^= (((+(safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((*l_314) < (((*l_314) , l_320) != (void*)0)), (safe_lshift_func_int8_t_s_s((*l_314), (safe_add_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_s(((void*)0 == l_329), 15)) == (*l_314)) ^ 7L), (*l_314))) , g_89[3][0].f6), (*l_314))))))), (*l_314)))) > 0x629D4B70L) | g_222);
    for (g_2 = (-11); (g_2 != (-16)); g_2 = safe_sub_func_int64_t_s_s(g_2, 5))
    { 
        const uint32_t l_335 = 4294967290UL;
        int32_t *l_341[5][5][2] = {{{&g_5[0][0][1],&g_5[0][4][0]},{&g_222,&g_5[0][4][0]},{&g_5[0][0][1],&g_222},{(void*)0,(void*)0},{(void*)0,&g_222}},{{&g_5[0][0][1],&g_5[0][4][0]},{&g_222,&g_5[0][4][0]},{&g_5[0][0][1],&g_222},{(void*)0,(void*)0},{(void*)0,&g_222}},{{&g_5[0][0][1],&g_5[0][4][0]},{&g_222,&g_5[0][4][0]},{&g_5[0][0][1],&g_222},{(void*)0,(void*)0},{(void*)0,&g_222}},{{&g_5[0][0][1],&g_5[0][4][0]},{&g_222,&g_5[0][4][0]},{&g_5[0][0][1],&g_222},{(void*)0,(void*)0},{(void*)0,&g_222}},{{&g_5[0][0][1],&g_5[0][4][0]},{&g_222,&g_5[0][4][0]},{&g_5[0][0][1],&g_222},{(void*)0,(void*)0},{(void*)0,&g_222}}};
        int32_t **l_342 = (void*)0;
        union U1 l_400 = {65535UL};
        int32_t l_423 = 1L;
        struct S0 *l_441 = &g_442;
        int i, j, k;
    }
    return &g_16;
}



static int8_t * func_23(int32_t * p_24)
{ 
    int64_t l_67[3][6][3] = {{{8L,1L,8L},{0x2ED91146291C4591LL,1L,(-7L)},{0x5C97493B5762987DLL,1L,0x5C97493B5762987DLL},{0x2ED91146291C4591LL,0x088AFD6114BB34BBLL,(-7L)},{8L,1L,8L},{0x2ED91146291C4591LL,1L,(-7L)}},{{0x5C97493B5762987DLL,1L,0x5C97493B5762987DLL},{0x2ED91146291C4591LL,0x088AFD6114BB34BBLL,(-7L)},{8L,1L,8L},{0x2ED91146291C4591LL,1L,(-7L)},{0x5C97493B5762987DLL,1L,0x5C97493B5762987DLL},{0x2ED91146291C4591LL,0x088AFD6114BB34BBLL,(-7L)}},{{8L,1L,8L},{0x2ED91146291C4591LL,1L,(-7L)},{0x5C97493B5762987DLL,1L,0x5C97493B5762987DLL},{0x2ED91146291C4591LL,0x088AFD6114BB34BBLL,(-7L)},{8L,1L,8L},{0x2ED91146291C4591LL,1L,(-7L)}}};
    const int32_t *l_69 = &g_2;
    const int8_t *l_84 = &g_16;
    int32_t l_121 = 0x5AF4611EL;
    int32_t l_123 = (-1L);
    int32_t l_127 = 3L;
    int32_t l_129 = 0xB4B7A3AEL;
    int32_t l_130 = 0x056C8595L;
    int32_t l_132[3];
    int8_t *l_139[4] = {&g_16,&g_16,&g_16,&g_16};
    int8_t l_140[1][7];
    struct S0 l_165 = {0L,0xCBD167041C5E05B4LL,1UL,0xD5EC738FB73719ACLL,0x69B5C3765FA4DD68LL,0x7D362923L,0x99L};
    int32_t l_191 = 0x7993F51DL;
    uint32_t l_192[6][2] = {{0x745E32B3L,0x745E32B3L},{0UL,0x745E32B3L},{0x745E32B3L,0UL},{0x745E32B3L,0x745E32B3L},{0UL,0x745E32B3L},{0x745E32B3L,0UL}};
    uint16_t l_193 = 65527UL;
    union U1 l_252 = {0x60AAL};
    struct S0 l_266 = {0x4A26DB0C127C9763LL,1UL,0xAD67L,0x0687BFC06C6AB1EBLL,0xAE00F6E89C65E470LL,0x7E233825L,0x88L};
    struct S0 *l_285 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_132[i] = 0xE94820B1L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_140[i][j] = (-1L);
    }
    for (g_2 = 0; (g_2 <= 0); g_2 += 1)
    { 
        int8_t **l_59[4][7][7] = {{{&g_15,(void*)0,&g_30[0],&g_30[0],(void*)0,&g_15,(void*)0},{&g_30[0],(void*)0,&g_30[0],&g_15,(void*)0,(void*)0,&g_15},{&g_30[0],(void*)0,&g_15,&g_30[0],&g_15,&g_15,&g_30[0]},{(void*)0,(void*)0,(void*)0,&g_15,&g_30[0],&g_30[0],&g_30[0]},{(void*)0,(void*)0,&g_30[0],&g_30[0],&g_15,&g_30[0],&g_15},{&g_30[0],(void*)0,&g_30[0],(void*)0,&g_15,&g_30[0],(void*)0},{&g_30[0],&g_30[0],&g_15,&g_30[0],&g_30[0],&g_15,&g_15}},{{&g_30[0],&g_30[0],&g_15,&g_15,&g_30[0],&g_30[0],&g_15},{&g_30[0],&g_30[0],(void*)0,&g_30[0],&g_30[0],(void*)0,&g_15},{&g_30[0],&g_30[0],&g_30[0],&g_30[0],&g_30[0],&g_30[0],&g_15},{(void*)0,&g_30[0],(void*)0,&g_15,(void*)0,&g_30[0],(void*)0},{&g_15,&g_30[0],&g_30[0],(void*)0,&g_15,&g_30[0],&g_15},{&g_30[0],&g_30[0],&g_30[0],(void*)0,&g_15,&g_30[0],(void*)0},{&g_30[0],&g_30[0],&g_15,&g_30[0],&g_30[0],&g_15,&g_15}},{{&g_30[0],&g_30[0],&g_15,&g_15,&g_30[0],&g_30[0],&g_15},{&g_30[0],&g_30[0],(void*)0,&g_30[0],&g_30[0],(void*)0,&g_15},{&g_30[0],&g_30[0],&g_30[0],&g_30[0],&g_30[0],&g_30[0],&g_15},{(void*)0,&g_30[0],(void*)0,&g_15,(void*)0,&g_30[0],(void*)0},{&g_15,&g_30[0],&g_30[0],(void*)0,&g_15,&g_30[0],&g_15},{&g_30[0],&g_30[0],&g_30[0],(void*)0,&g_15,&g_30[0],(void*)0},{&g_30[0],&g_30[0],&g_15,&g_30[0],&g_30[0],&g_15,&g_15}},{{&g_30[0],&g_30[0],&g_15,&g_15,&g_30[0],&g_30[0],&g_15},{&g_30[0],&g_30[0],(void*)0,&g_30[0],&g_30[0],(void*)0,&g_15},{&g_30[0],&g_30[0],&g_30[0],&g_30[0],&g_30[0],&g_30[0],&g_15},{(void*)0,&g_30[0],(void*)0,&g_15,(void*)0,&g_30[0],(void*)0},{&g_15,&g_30[0],&g_30[0],(void*)0,&g_15,&g_30[0],&g_15},{&g_30[0],&g_30[0],&g_30[0],(void*)0,&g_15,&g_30[0],(void*)0},{&g_30[0],&g_30[0],&g_15,&g_30[0],&g_30[0],&g_15,&g_15}}};
        int32_t l_72 = 0x4523D0AFL;
        int32_t l_120 = 0x140FF6F9L;
        int32_t l_126 = 0x11478435L;
        int32_t l_131 = 0x2A3349E9L;
        uint32_t l_143 = 0x7E292FD3L;
        int32_t *l_166 = &l_131;
        int16_t *l_188 = &g_149[0];
        int16_t *l_189 = &g_190[4];
        uint8_t l_200[6][6] = {{0x11L,1UL,0x11L,247UL,0x11L,1UL},{0xCEL,1UL,1UL,1UL,0xCEL,1UL},{0x11L,247UL,0x11L,1UL,0x11L,247UL},{0xCEL,247UL,1UL,247UL,0xCEL,247UL},{0x11L,1UL,0x11L,247UL,0x11L,1UL},{0xCEL,1UL,1UL,1UL,0xCEL,1UL}};
        int32_t l_214 = 0xEE6FAA46L;
        int32_t l_215 = 0xC9EF1719L;
        int32_t l_216 = 0xA97DAE8EL;
        int32_t l_217 = 0xE211044FL;
        int32_t l_218[6] = {0L,0x9B692279L,0x9B692279L,0L,0x9B692279L,0x9B692279L};
        int8_t l_262 = (-4L);
        uint8_t l_263 = 0x23L;
        struct S0 *l_284 = &g_89[1][5];
        int i, j, k;
        (*p_24) |= ((void*)0 == l_59[3][0][1]);
        for (g_16 = 0; (g_16 <= 0); g_16 += 1)
        { 
            int8_t *l_64 = &g_16;
            uint32_t *l_65[1];
            int32_t l_73 = 1L;
            const struct S0 *l_88[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int8_t l_102 = 0x97L;
            int32_t l_114 = 0xC5992523L;
            int32_t l_124 = 1L;
            int32_t l_125 = 8L;
            int32_t l_128[3][5][3] = {{{0xDF005D3DL,1L,(-1L)},{0x693F941DL,0xEE84A3AFL,1L},{0xDF005D3DL,0xDF005D3DL,1L},{0xEE84A3AFL,0x693F941DL,(-1L)},{1L,0xDF005D3DL,1L}},{{1L,0xEE84A3AFL,0xDF005D3DL},{0xEE84A3AFL,1L,1L},{0xDF005D3DL,1L,(-1L)},{0x693F941DL,0xEE84A3AFL,1L},{0xDF005D3DL,0xDF005D3DL,1L}},{{0xEE84A3AFL,0x693F941DL,(-1L)},{1L,0xDF005D3DL,1L},{1L,0xEE84A3AFL,0xDF005D3DL},{0xEE84A3AFL,1L,1L},{0xDF005D3DL,1L,(-1L)}}};
            uint64_t l_159 = 1UL;
            int32_t **l_167 = &l_166;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_65[i] = &g_66;
            if (g_10)
                break;
            g_74 = ((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((((l_67[2][3][1] = ((g_30[0] = l_64) == (void*)0)) , (g_68 , l_69)) == &g_2) && (safe_mul_func_uint8_t_u_u((*l_69), (l_72 = l_72)))), l_73)), l_73)) , (void*)0);
            for (l_73 = 0; (l_73 >= 0); l_73 -= 1)
            { 
                int8_t *l_83[4][1][7] = {{{&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16}},{{(void*)0,&g_16,(void*)0,&g_16,&g_16,(void*)0,&g_16}},{{&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16}},{{(void*)0,&g_16,&g_16,(void*)0,&g_16,(void*)0,&g_16}}};
                const int32_t l_85 = 0x47B03FFAL;
                int32_t l_101 = 0x4884F027L;
                int32_t l_122 = (-2L);
                int32_t l_134 = 0L;
                int32_t l_135 = 0x91453208L;
                int32_t l_142[2][3];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_142[i][j] = 0x91A34F91L;
                }
                for (l_72 = 0; (l_72 <= 0); l_72 += 1)
                { 
                    int32_t *l_86 = &g_87;
                    const struct S0 **l_90 = (void*)0;
                    const struct S0 **l_91 = &l_88[2];
                    struct S0 *l_95 = &g_89[2][4];
                    struct S0 **l_94 = &l_95;
                    struct S0 **l_98 = &g_97;
                    int32_t l_103[6][5][1] = {{{0L},{(-7L)},{0x9DD48334L},{0x1E0753CEL},{0x9DD48334L}},{{(-7L)},{0L},{(-10L)},{9L},{0x05D3DB02L}},{{0x05D3DB02L},{9L},{(-10L)},{0L},{(-7L)}},{{0x9DD48334L},{0x1E0753CEL},{0x9DD48334L},{(-7L)},{0L}},{{(-10L)},{9L},{0x05D3DB02L},{0x05D3DB02L},{9L}},{{(-10L)},{0L},{(-7L)},{0x9DD48334L},{0x1E0753CEL}}};
                    int32_t *l_104 = &g_5[l_73][(l_73 + 3)][g_16];
                    int32_t *l_105 = &l_103[0][2][0];
                    int32_t *l_106 = &g_87;
                    int32_t *l_107 = &l_101;
                    int32_t *l_108 = (void*)0;
                    int32_t *l_109 = &l_103[2][2][0];
                    int32_t *l_110 = &g_5[l_73][(l_73 + 3)][g_16];
                    int32_t *l_111 = &l_101;
                    int32_t *l_112 = &l_101;
                    int32_t *l_113 = &g_87;
                    int32_t *l_115 = &g_5[g_2][g_16][g_2];
                    int32_t *l_116 = &g_5[l_73][(l_73 + 3)][g_16];
                    int32_t *l_117 = &l_114;
                    int32_t *l_118 = &g_5[0][3][1];
                    int32_t *l_119[6];
                    int8_t l_133 = 0x3BL;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_119[i] = &l_114;
                    (*l_91) = ((safe_div_func_uint8_t_u_u(((((0xA336C9A4CFDDBE10LL >= (safe_add_func_uint16_t_u_u(g_5[g_2][g_16][g_2], ((safe_lshift_func_uint16_t_u_u(6UL, 0)) || ((((*l_86) = (safe_div_func_int8_t_s_s(((g_10 || 1L) < ((l_83[1][0][0] == l_84) == g_2)), l_85))) || (*l_86)) < g_16))))) & 1UL) >= (*l_69)) <= 0x4DL), 0xFBL)) , l_88[2]);
                    l_90 = (void*)0;
                    (*l_86) = (*l_86);
                    (*l_86) = (((*l_69) != (safe_div_func_int32_t_s_s((l_94 == g_96), ((((void*)0 == l_98) != ((*l_86) , (safe_sub_func_uint8_t_u_u((*l_86), 0x34L)))) && (-3L))))) > 1UL);
                    --g_136[4][1][0];
                }
                if (((*l_69) || l_120))
                { 
                    return l_139[2];
                }
                else
                { 
                    int32_t *l_141[1][4][6] = {{{&l_125,&l_128[1][4][2],&l_128[1][4][2],&l_125,&l_128[1][4][2],&l_128[1][4][2]},{&l_125,&l_128[1][4][2],&l_128[1][4][2],&l_125,&l_128[1][4][2],&l_128[1][4][2]},{&l_125,&l_128[1][4][2],&l_128[1][4][2],&l_125,&l_128[1][4][2],&l_128[1][4][2]},{&l_125,&l_128[1][4][2],&l_128[1][4][2],&l_125,&l_128[1][4][2],&l_128[1][4][2]}}};
                    int16_t *l_148[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_156 = 0xCEAC7811L;
                    int i, j, k;
                    (*p_24) = l_122;
                    --l_143;
                    l_132[0] &= (((0UL > (safe_sub_func_int16_t_s_s(l_125, (l_121 |= g_89[3][0].f6)))) > 1UL) == ((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(0x671808FF8841FB54LL, 0x2243094950BB044FLL)) , (l_156 ^ l_126)), 0x4AE8343DD389AC96LL)), l_143)) && (*p_24)));
                    l_166 = (((((((*l_69) >= ((l_159 ^ 0L) == l_142[1][0])) && (safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((((safe_lshift_func_int16_t_s_u((255UL != (l_126 < g_2)), 13)) > 0L) ^ l_159))), 1UL))) , l_120) >= 4L) , l_165) , l_141[0][2][5]);
                }
            }
            (*l_167) = &g_87;
        }
        if ((g_66 == ((safe_add_func_int32_t_s_s((((((*l_69) < (safe_rshift_func_uint8_t_u_u((((6UL != ((((*l_69) > (((safe_rshift_func_int8_t_s_u((g_89[3][0].f4 <= (((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*l_189) = ((*l_188) = ((safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((*l_166) = ((safe_unary_minus_func_int16_t_s(0x1B8EL)) != (safe_unary_minus_func_int32_t_s((0xEA697F74L <= (*l_69)))))) <= (*p_24)), 0L)), (*l_69))) <= 0xAE6DF44FL), g_2)) < (*l_69)))), l_191)), (*l_69))) == l_72) >= g_5[0][4][0])), (*l_69))) ^ (*l_69)) == g_5[0][2][0])) < g_10) , (*l_69))) , (void*)0) == &g_66), l_120))) != g_89[3][0].f1) , (void*)0) == (void*)0), (*l_69))) ^ l_192[0][0])))
        { 
            (*p_24) = (*p_24);
            l_193++;
            (*p_24) ^= (*l_69);
        }
        else
        { 
            int16_t l_196 = 1L;
            int32_t *l_197 = &l_130;
            int32_t *l_198 = &l_126;
            int32_t *l_199 = &l_132[1];
            int32_t *l_211 = &l_126;
            int32_t *l_212 = (void*)0;
            int32_t *l_213[1];
            uint8_t l_219[6][7] = {{7UL,7UL,7UL,7UL,7UL,7UL,7UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{7UL,7UL,7UL,7UL,7UL,7UL,7UL},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_213[i] = &l_130;
            if (l_196)
                break;
            (*l_166) &= (*p_24);
            l_200[2][0]++;
            for (l_121 = 0; (l_121 <= 3); l_121 += 1)
            { 
                int64_t *l_204 = &g_89[3][0].f0;
                uint64_t *l_205[2][6] = {{&l_165.f1,&l_165.f1,&l_165.f1,(void*)0,(void*)0,&l_165.f1},{(void*)0,(void*)0,&l_165.f1,(void*)0,(void*)0,&l_165.f1}};
                int32_t l_210[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_210[i][j] = 0L;
                }
                (*p_24) = (((*l_166) &= (!((*l_204) = 1L))) < (*l_199));
                if ((*p_24))
                    break;
                for (l_72 = 0; (l_72 <= 5); l_72 += 1)
                { 
                    int i, j, k;
                    g_5[g_2][(l_121 + 1)][(g_2 + 1)] = (safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_5[g_2][(g_2 + 1)][g_2], 4)), l_210[0][0]));
                    if ((*p_24))
                        break;
                    return &g_16;
                }
            }
            l_219[1][1]--;
        }
        for (l_217 = 0; (l_217 >= 0); l_217 -= 1)
        { 
            int8_t l_226 = 0x4EL;
            int32_t l_227 = 0xAF53FA4BL;
            int32_t l_228 = 0x02FE9BC3L;
            int32_t l_229 = (-5L);
            int32_t l_230[7] = {0x3F4236D6L,0x3F4236D6L,0x8A5FAD6BL,0x3F4236D6L,0x3F4236D6L,0x8A5FAD6BL,0x3F4236D6L};
            struct S0 *l_245 = &g_89[3][0];
            uint16_t l_307 = 0UL;
            int i;
            for (g_66 = 0; (g_66 <= 0); g_66 += 1)
            { 
                union U1 *l_224 = &g_68;
                union U1 **l_223 = &l_224;
                int32_t *l_225[1][4][5] = {{{&l_121,&l_214,&l_214,&l_121,&l_214},{&l_121,&l_121,&g_5[g_66][l_217][g_2],&l_121,&l_121},{&l_214,&l_121,&l_214,&l_214,&l_121},{&l_121,&l_214,&l_214,&l_121,&l_214}}};
                uint64_t l_231 = 18446744073709551615UL;
                int i, j, k;
                g_222 ^= ((*l_166) &= g_5[g_66][l_217][g_2]);
                (*l_223) = (void*)0;
                ++l_231;
                if ((*p_24))
                    continue;
            }
            for (l_129 = 0; (l_129 <= 0); l_129 += 1)
            { 
                int32_t **l_256 = (void*)0;
                int32_t l_261[6][7] = {{0L,0x39491D6EL,0xBE32ECCCL,0x39491D6EL,0L,0L,0L},{0L,0x39491D6EL,0xBE32ECCCL,0x39491D6EL,0L,0L,0L},{0L,0x39491D6EL,0xBE32ECCCL,0x39491D6EL,0L,0L,0L},{0L,0x39491D6EL,0xBE32ECCCL,0x39491D6EL,0L,0L,0L},{0L,0x39491D6EL,0xBE32ECCCL,0x39491D6EL,0L,0L,0L},{0L,0x39491D6EL,0xBE32ECCCL,0x39491D6EL,0L,0L,0L}};
                uint8_t *l_281[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_281[i] = &l_263;
            }
        }
    }
    return &g_16;
}



static int32_t * func_25(uint32_t  p_26, int32_t * p_27)
{ 
    uint64_t l_33 = 0x0DCEE05243B9C309LL;
    uint32_t l_38 = 18446744073709551613UL;
    int8_t *l_58 = (void*)0;
    (*p_27) = ((safe_add_func_uint64_t_u_u(((((l_33 < (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_26, l_38)), (-9L)))) , func_39(g_5[0][5][0])) == l_58) ^ l_38), p_26)) ^ g_16);
    return &g_5[0][4][0];
}



static int8_t * func_39(uint32_t  p_40)
{ 
    int32_t *l_41 = &g_2;
    int32_t *l_42 = &g_5[0][4][1];
    int32_t *l_43 = &g_5[0][4][0];
    int32_t *l_44 = &g_5[0][4][0];
    int32_t *l_45 = (void*)0;
    int32_t l_46 = 0x4F75DF15L;
    int32_t *l_47 = &g_5[0][4][0];
    int32_t l_48 = 0x98EF544BL;
    int32_t *l_49 = &l_48;
    int32_t *l_50 = &l_46;
    int32_t *l_51 = (void*)0;
    int32_t *l_52[7] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
    int32_t l_53 = 1L;
    uint32_t l_54 = 1UL;
    int8_t *l_57 = &g_16;
    int i;
    l_54++;
    return l_57;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_89[i][j].f0, "g_89[i][j].f0", print_hash_value);
            transparent_crc(g_89[i][j].f1, "g_89[i][j].f1", print_hash_value);
            transparent_crc(g_89[i][j].f2, "g_89[i][j].f2", print_hash_value);
            transparent_crc(g_89[i][j].f3, "g_89[i][j].f3", print_hash_value);
            transparent_crc(g_89[i][j].f4, "g_89[i][j].f4", print_hash_value);
            transparent_crc(g_89[i][j].f5, "g_89[i][j].f5", print_hash_value);
            transparent_crc(g_89[i][j].f6, "g_89[i][j].f6", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_136[i][j][k], "g_136[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_149[i], "g_149[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_190[i], "g_190[i]", print_hash_value);

    }
    transparent_crc(g_222, "g_222", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_282[i], "g_282[i]", print_hash_value);

    }
    transparent_crc(g_350.f0, "g_350.f0", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_442.f0, "g_442.f0", print_hash_value);
    transparent_crc(g_442.f1, "g_442.f1", print_hash_value);
    transparent_crc(g_442.f2, "g_442.f2", print_hash_value);
    transparent_crc(g_442.f3, "g_442.f3", print_hash_value);
    transparent_crc(g_442.f4, "g_442.f4", print_hash_value);
    transparent_crc(g_442.f5, "g_442.f5", print_hash_value);
    transparent_crc(g_442.f6, "g_442.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_623[i], "g_623[i]", print_hash_value);

    }
    transparent_crc(g_642, "g_642", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_648[i][j][k], "g_648[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
