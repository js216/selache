// SPDX-License-Identifier: MIT
// cctest_csmith_25fcd5d8.c --- cctest case csmith_25fcd5d8 (csmith seed 637326808)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xab269a7c */

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

// Options:   -s 637326808 -o /tmp/csmith_gen_ia77es6r/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint16_t  f0;
   const uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
   int32_t  f4;
};

union U1 {
   int8_t  f0;
};


static int32_t g_9 = 0L;
static int32_t *g_8 = &g_9;
static uint8_t g_46[7][2][4] = {{{254UL,254UL,254UL,254UL},{254UL,254UL,254UL,254UL}},{{254UL,254UL,254UL,254UL},{254UL,254UL,254UL,254UL}},{{254UL,254UL,254UL,254UL},{254UL,254UL,254UL,254UL}},{{254UL,254UL,254UL,254UL},{254UL,254UL,254UL,254UL}},{{254UL,254UL,254UL,254UL},{254UL,254UL,254UL,254UL}},{{254UL,254UL,254UL,254UL},{254UL,254UL,254UL,254UL}},{{254UL,254UL,254UL,254UL},{254UL,254UL,254UL,254UL}}};
static int8_t g_69[1][3] = {{(-1L),(-1L),(-1L)}};
static uint32_t g_71[4][7] = {{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL}};
static int64_t g_73[7][1][6] = {{{(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL}},{{(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL}},{{(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL}},{{(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL}},{{(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL}},{{(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL}},{{(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL,(-1L),0xBD24A170516A45A2LL}}};
static uint64_t g_74[6] = {0xCA80087D4E0D3BD2LL,18446744073709551615UL,0xCA80087D4E0D3BD2LL,0xCA80087D4E0D3BD2LL,18446744073709551615UL,0xCA80087D4E0D3BD2LL};
static uint8_t g_81 = 0xDDL;
static int16_t g_103[2][6] = {{(-8L),0x10ABL,0L,0L,0x10ABL,(-8L)},{(-8L),(-8L),0L,(-8L),(-8L),(-8L)}};
static uint8_t *g_120 = &g_46[3][0][0];
static struct S0 g_121 = {65535UL,18446744073709551613UL,0L,-3L,5L};
static int16_t g_127 = 0x840AL;
static union U1 g_174 = {0L};
static const uint32_t g_186 = 0xF262FDF4L;
static const uint32_t *g_185[3][3] = {{&g_186,&g_186,&g_186},{&g_186,&g_186,&g_186},{&g_186,&g_186,&g_186}};
static const uint32_t g_188 = 0x1BED5062L;
static int32_t g_225 = 0xED219E0CL;
static uint32_t g_226 = 18446744073709551607UL;
static int64_t g_234 = (-8L);
static uint16_t g_238 = 0xF2DEL;
static uint16_t g_243[2] = {3UL,3UL};
static uint16_t * const g_264 = &g_121.f0;
static uint16_t * const * const g_263 = &g_264;
static uint16_t *g_279 = &g_238;
static uint16_t **g_278 = &g_279;
static int32_t *g_380[6][7][2] = {{{&g_121.f3,(void*)0},{&g_9,(void*)0},{&g_121.f3,&g_9},{&g_121.f3,&g_121.f3},{&g_121.f3,&g_9},{&g_121.f3,(void*)0},{&g_9,(void*)0}},{{&g_121.f3,&g_9},{&g_121.f3,&g_121.f3},{&g_121.f3,&g_9},{&g_121.f3,(void*)0},{&g_9,(void*)0},{&g_121.f3,&g_9},{&g_121.f3,&g_121.f3}},{{&g_121.f3,&g_9},{&g_121.f3,(void*)0},{&g_9,(void*)0},{&g_121.f3,&g_9},{&g_121.f3,&g_121.f3},{&g_121.f3,&g_9},{&g_121.f3,(void*)0}},{{&g_9,(void*)0},{&g_121.f3,&g_9},{&g_121.f3,&g_121.f3},{&g_121.f3,&g_9},{&g_121.f3,(void*)0},{&g_9,(void*)0},{&g_121.f3,&g_9}},{{&g_121.f3,&g_121.f3},{&g_121.f3,&g_9},{&g_121.f3,(void*)0},{&g_9,(void*)0},{&g_121.f3,&g_9},{&g_121.f3,&g_121.f3},{&g_121.f3,&g_9}},{{&g_121.f3,(void*)0},{&g_9,(void*)0},{&g_121.f3,&g_9},{&g_121.f3,&g_121.f3},{&g_121.f3,&g_121.f3},{(void*)0,&g_121.f3},{&g_121.f3,&g_121.f3}}};
static uint8_t **g_448 = &g_120;
static int16_t g_468 = 0xD627L;
static uint32_t * const g_569 = &g_71[3][1];
static uint32_t * const *g_568 = &g_569;
static uint32_t * const **g_567 = &g_568;
static uint64_t g_589 = 1UL;
static int64_t g_663 = 0xBB1B406C6EFE4920LL;
static uint16_t ***g_804 = &g_278;
static uint16_t ****g_803[5][1][3] = {{{&g_804,&g_804,&g_804}},{{&g_804,&g_804,&g_804}},{{&g_804,&g_804,&g_804}},{{&g_804,&g_804,&g_804}},{{&g_804,&g_804,&g_804}}};
static struct S0 *g_808 = &g_121;
static struct S0 **g_807 = &g_808;
static struct S0 ***g_806 = &g_807;
static struct S0 ****g_805[4][1][4] = {{{&g_806,&g_806,&g_806,&g_806}},{{&g_806,&g_806,&g_806,&g_806}},{{&g_806,&g_806,&g_806,&g_806}},{{&g_806,&g_806,&g_806,&g_806}}};
static int8_t *g_860 = &g_69[0][0];
static const int8_t g_862 = 6L;
static uint8_t g_1032 = 253UL;
static uint32_t g_1052 = 0x10C8D5E8L;
static uint8_t *****g_1090 = (void*)0;
static int64_t g_1108 = 1L;
static int32_t *g_1135 = (void*)0;
static int16_t *g_1162 = &g_468;
static int16_t **g_1161 = &g_1162;
static int16_t ***g_1160 = &g_1161;
static union U1 *g_1165 = (void*)0;
static const int32_t *g_1225 = &g_225;
static uint16_t g_1268 = 65529UL;
static uint32_t ** const g_1283 = (void*)0;
static uint32_t ** const *g_1282 = &g_1283;
static uint32_t ** const **g_1281 = &g_1282;
static const uint8_t ***g_1303 = (void*)0;
static const uint8_t ****g_1302 = &g_1303;
static int16_t g_1314 = 0xA8E5L;
static int64_t *g_1365[6][3][6] = {{{&g_234,&g_1108,&g_234,(void*)0,(void*)0,(void*)0},{&g_663,&g_1108,&g_663,&g_73[3][0][3],(void*)0,&g_1108},{&g_234,&g_1108,&g_234,&g_663,&g_663,&g_234}},{{(void*)0,(void*)0,(void*)0,&g_663,&g_1108,&g_73[3][0][3]},{&g_234,(void*)0,&g_1108,&g_73[3][0][3],&g_1108,(void*)0},{&g_663,&g_234,&g_1108,(void*)0,(void*)0,&g_73[3][0][3]}},{{&g_234,(void*)0,(void*)0,(void*)0,(void*)0,&g_234},{(void*)0,(void*)0,&g_234,(void*)0,(void*)0,&g_1108},{&g_1108,&g_234,&g_663,&g_234,&g_1108,(void*)0}},{{&g_1108,(void*)0,&g_234,(void*)0,&g_1108,&g_1108},{(void*)0,(void*)0,(void*)0,(void*)0,&g_663,&g_1108},{&g_234,&g_1108,&g_234,(void*)0,(void*)0,(void*)0}},{{&g_663,&g_1108,&g_663,&g_73[3][0][3],(void*)0,&g_1108},{&g_234,&g_1108,&g_234,&g_663,&g_663,&g_234},{(void*)0,(void*)0,(void*)0,&g_663,&g_1108,&g_73[3][0][3]}},{{&g_234,(void*)0,&g_1108,&g_73[3][0][3],&g_1108,(void*)0},{&g_663,&g_234,&g_1108,(void*)0,(void*)0,&g_73[3][0][3]},{&g_234,(void*)0,(void*)0,(void*)0,(void*)0,&g_234}}};
static uint32_t g_1520[7] = {9UL,9UL,9UL,9UL,9UL,9UL,9UL};
static uint32_t *g_1530 = &g_71[3][1];
static uint32_t **g_1529 = &g_1530;
static uint32_t ***g_1528 = &g_1529;
static uint32_t ****g_1527 = &g_1528;
static uint32_t **g_1540 = (void*)0;
static uint32_t *g_1542 = (void*)0;
static uint32_t **g_1541 = &g_1542;
static const uint32_t **g_1583 = &g_185[0][0];
static const uint32_t ***g_1582 = &g_1583;
static uint64_t *g_1585 = (void*)0;
static uint64_t **g_1584 = &g_1585;
static struct S0 *g_1597[2][3] = {{&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121}};
static uint64_t g_1619 = 0x2EB17957A03BA6AFLL;
static int16_t g_1718 = 0xD6A5L;
static uint32_t g_1728 = 4294967289UL;
static uint8_t g_1764 = 0x16L;
static uint8_t * const *g_1818 = &g_120;
static uint32_t g_1879 = 18446744073709551608UL;
static uint16_t g_1919 = 0UL;
static uint8_t **g_1931 = &g_120;
static union U1 **g_2108 = &g_1165;
static int32_t *g_2169 = &g_121.f4;
static struct S0 * const *g_2281 = (void*)0;
static struct S0 * const **g_2280 = &g_2281;
static struct S0 * const ***g_2279 = &g_2280;
static struct S0 * const ****g_2278[5] = {&g_2279,&g_2279,&g_2279,&g_2279,&g_2279};
static int32_t g_2283 = 0xB1FA2B94L;
static int8_t g_2337 = 1L;



static union U1  func_1(void);
static int32_t * func_2(int32_t * p_3);
static int32_t * func_4(uint8_t  p_5, int32_t  p_6, int32_t  p_7);
static int64_t  func_10(uint8_t  p_11, int32_t  p_12);
static uint8_t  func_15(int32_t * p_16);
static int16_t  func_20(uint64_t  p_21, int32_t * p_22, uint64_t  p_23);
static int16_t  func_26(uint32_t  p_27, int32_t * p_28, int32_t * p_29);
static const int32_t * func_32(int32_t * p_33, int32_t * p_34, int32_t * const  p_35, int64_t  p_36);




static union U1  func_1(void)
{ 
    uint32_t l_1299 = 18446744073709551615UL;
    const uint16_t *l_1301 = (void*)0;
    const uint16_t **l_1300 = &l_1301;
    uint8_t *l_1307 = &g_1032;
    uint8_t **l_1306 = &l_1307;
    uint8_t ***l_1305 = &l_1306;
    uint8_t ****l_1304[1];
    int64_t *l_1308 = &g_663;
    uint8_t l_1309 = 0UL;
    uint32_t l_1330 = 18446744073709551613UL;
    int32_t **l_2359 = (void*)0;
    int32_t **l_2360 = &g_1135;
    union U1 l_2363 = {0L};
    int i;
    for (i = 0; i < 1; i++)
        l_1304[i] = &l_1305;
    return l_2363;
}



static int32_t * func_2(int32_t * p_3)
{ 
    int8_t l_1975 = 4L;
    uint16_t **l_1978 = &g_279;
    uint32_t l_1979[3][1][2] = {{{0xBCC12D47L,0xF0496127L}},{{0xF0496127L,0xBCC12D47L}},{{0xF0496127L,0xF0496127L}}};
    uint8_t ***l_1985 = &g_1931;
    uint8_t ****l_1984[2][1];
    struct S0 l_1986 = {0x2228L,18446744073709551609UL,0x9BEEA906L,0x95FC1651L,0xFFB075B8L};
    int32_t l_2023 = 0L;
    int64_t l_2106 = 1L;
    union U1 **l_2110 = (void*)0;
    int8_t **l_2165[2];
    const int16_t l_2172 = 0L;
    int32_t l_2218 = 0xF9F027D2L;
    int32_t l_2221 = 0x34DCD9F8L;
    int32_t l_2226 = 0x2A3BA183L;
    int32_t l_2227 = 0L;
    int32_t l_2229[7][1];
    int64_t l_2231[1][4];
    const int32_t *l_2246[7] = {&g_225,&l_2227,&g_225,&g_225,&l_2227,&g_225,&g_225};
    int32_t **l_2250[1][3][3] = {{{&g_1135,&g_1135,&g_1135},{&g_380[3][6][0],&g_380[3][6][0],&g_380[3][6][0]},{&g_1135,&g_1135,&g_1135}}};
    int16_t ***l_2258 = &g_1161;
    uint64_t *l_2259[6] = {&g_1619,&g_1619,&g_1619,&g_1619,&g_1619,&g_1619};
    uint16_t l_2262[2][7][4] = {{{3UL,0UL,0xFC92L,0xD849L},{0UL,0xA90DL,0xA90DL,0UL},{65528UL,0xD849L,0xA90DL,1UL},{0UL,3UL,0xFC92L,3UL},{3UL,0xA90DL,65528UL,3UL},{65528UL,3UL,1UL,1UL},{0xD849L,0xD849L,0xFC92L,0UL}},{{0xD849L,0xA90DL,1UL,0xD849L},{65528UL,0UL,65528UL,1UL},{3UL,0UL,0xFC92L,0xD849L},{0UL,0xA90DL,0xA90DL,0UL},{65528UL,0xD849L,0xA90DL,1UL},{0UL,3UL,0xFC92L,3UL},{3UL,0xA90DL,65528UL,3UL}}};
    uint32_t l_2290 = 0x2E4A97ACL;
    struct S0 **l_2309 = &g_1597[0][2];
    uint16_t l_2325 = 0x1AC5L;
    int64_t **l_2330 = &g_1365[4][0][5];
    uint32_t l_2331 = 0x33D5E020L;
    int32_t l_2332 = 0xB122A6D1L;
    int32_t l_2333 = 0xAC820DA5L;
    uint32_t l_2334 = 0x064FAD4CL;
    int16_t l_2335[3][5] = {{0x271DL,0x22B8L,0x22B8L,0x271DL,0L},{0x271DL,(-4L),0x6E44L,0x6E44L,(-4L)},{0L,0x22B8L,0x6E44L,0x221FL,0x221FL}};
    uint32_t l_2336[3];
    int64_t l_2339 = (-9L);
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1984[i][j] = &l_1985;
    }
    for (i = 0; i < 2; i++)
        l_2165[i] = &g_860;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_2229[i][j] = 0xD8AAC6F5L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_2231[i][j] = 0xAD41BB96F07CF393LL;
    }
    for (i = 0; i < 3; i++)
        l_2336[i] = 0xCDE81FA8L;
    if ((safe_mul_func_int16_t_s_s(((((safe_sub_func_uint64_t_u_u((((*g_8) = ((l_1975 , (safe_div_func_int32_t_s_s(((l_1978 == (void*)0) || l_1975), l_1975))) , ((l_1979[1][0][1] & (((((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((((l_1984[1][0] != (void*)0) < 0x62741B7DL) > l_1975), l_1979[1][0][1])), (-1L))) <= l_1975) && 18446744073709551615UL) , (*g_1302)) == (*g_1302))) >= l_1975))) >= 0xE1566FBEL), 0L)) || (-1L)) < l_1979[1][0][1]) | (**g_1818)), l_1979[1][0][1])))
    { 
        int16_t l_1988 = (-1L);
        int32_t *l_1993 = &g_225;
        int32_t *l_1994 = &l_1986.f3;
        int32_t *l_1995 = &g_225;
        int32_t *l_1996 = &l_1986.f3;
        int32_t *l_1997 = (void*)0;
        uint32_t l_1998 = 18446744073709551615UL;
        (*l_1993) &= ((((l_1986 , 0x34D2L) && (~l_1988)) >= (((*g_1162) = ((-1L) || (+(safe_lshift_func_uint16_t_u_s((l_1986.f3 > ((*g_8) > (!0x689FL))), 13))))) < l_1988)) != (*g_860));
        ++l_1998;
    }
    else
    { 
        uint64_t l_2003 = 0xAD69F9255B52FA0BLL;
        uint8_t *l_2004 = &g_1764;
        uint32_t l_2017 = 0xEBD07307L;
        const union U1 l_2022 = {0L};
        int32_t l_2027 = 0x133634EDL;
        const struct S0 ** const *l_2042[3];
        const struct S0 ** const * const *l_2041 = &l_2042[0];
        const struct S0 ** const * const **l_2040 = &l_2041;
        uint16_t ***l_2048 = (void*)0;
        const uint8_t l_2137 = 0xB7L;
        int8_t **l_2160 = &g_860;
        int8_t **l_2167 = &g_860;
        uint16_t l_2170 = 65535UL;
        int8_t l_2175 = 0xABL;
        int32_t l_2177 = 5L;
        uint8_t l_2178[4][3] = {{5UL,0UL,5UL},{5UL,0UL,5UL},{5UL,0UL,5UL},{5UL,0UL,5UL}};
        uint32_t l_2180 = 18446744073709551615UL;
        int32_t l_2211[6][4] = {{0x5A35F342L,0x5A35F342L,0x5A35F342L,0x5A35F342L},{0x5A35F342L,0x5A35F342L,0x5A35F342L,0x5A35F342L},{0x5A35F342L,0x5A35F342L,0x5A35F342L,0x5A35F342L},{0x5A35F342L,0x5A35F342L,0x5A35F342L,0x5A35F342L},{0x5A35F342L,0x5A35F342L,0x5A35F342L,0x5A35F342L},{0x5A35F342L,0x5A35F342L,0x5A35F342L,0x5A35F342L}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_2042[i] = (void*)0;
        for (g_1728 = 1; (g_1728 <= 6); g_1728 += 1)
        { 
            int64_t *l_2005 = &g_73[3][0][3];
            int64_t *l_2006[6][1] = {{(void*)0},{&g_234},{&g_234},{(void*)0},{&g_234},{&g_234}};
            int32_t l_2007 = 0xB0384C90L;
            struct S0 *l_2038 = &l_1986;
            uint16_t ***l_2049 = &g_278;
            const int64_t *l_2067 = &g_73[5][0][0];
            const int64_t **l_2066 = &l_2067;
            const int64_t *** const l_2065[3] = {&l_2066,&l_2066,&l_2066};
            int32_t l_2139 = 0x38700486L;
            int32_t *l_2153 = &l_1986.f2;
            int32_t **l_2152 = &l_2153;
            int8_t ***l_2166[4][5] = {{&l_2165[1],&l_2160,&l_2165[0],&l_2165[1],&l_2165[0]},{&l_2165[0],&l_2165[0],(void*)0,&l_2165[1],&l_2165[1]},{&l_2160,&l_2165[1],&l_2165[1],&l_2160,&l_2165[0]},{&l_2160,&l_2165[1],&l_2160,&l_2160,&l_2165[1]}};
            int64_t l_2168 = 0xF18F438E55C99801LL;
            int32_t l_2216 = (-6L);
            int32_t l_2220 = (-10L);
            int32_t l_2222 = 0x148CEF91L;
            int32_t l_2223 = 0x208E3831L;
            int32_t l_2224[3];
            uint8_t *l_2244 = &g_81;
            const int32_t l_2261 = 0xC55DED3EL;
            uint64_t l_2301[7][7] = {{0xF26823B74420164ALL,18446744073709551607UL,9UL,0xF26823B74420164ALL,9UL,18446744073709551607UL,0xF26823B74420164ALL},{18446744073709551613UL,18446744073709551615UL,0xF55A302F57282B8ELL,0xFD254A3983DE2AADLL,18446744073709551615UL,0xFD254A3983DE2AADLL,0xF55A302F57282B8ELL},{0xF26823B74420164ALL,0xF26823B74420164ALL,2UL,18446744073709551615UL,18446744073709551615UL,2UL,18446744073709551615UL},{1UL,0xF55A302F57282B8ELL,0xF55A302F57282B8ELL,1UL,0xFD254A3983DE2AADLL,18446744073709551613UL,1UL},{0x24D71808053AD204LL,18446744073709551615UL,9UL,9UL,18446744073709551615UL,0x24D71808053AD204LL,18446744073709551607UL},{1UL,1UL,3UL,18446744073709551615UL,18446744073709551615UL,3UL,1UL},{18446744073709551615UL,18446744073709551607UL,0x24D71808053AD204LL,18446744073709551615UL,9UL,9UL,18446744073709551615UL}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_2224[i] = 0x217221CCL;
            (*g_8) = (g_1520[g_1728] ^ (((safe_unary_minus_func_int64_t_s((0L && 0x58L))) , (~l_2003)) < (l_2007 &= ((*l_2005) = (l_2004 == (void*)0)))));
            for (l_1986.f3 = 2; (l_1986.f3 >= 0); l_1986.f3 -= 1)
            { 
                int8_t l_2014 = 1L;
                union U1 *l_2024 = (void*)0;
                struct S0 *l_2039 = (void*)0;
                int16_t ***l_2068 = &g_1161;
                int32_t l_2105[5][6] = {{6L,0x0F741517L,0x0F741517L,6L,0xA20ED90BL,6L},{(-5L),0x6CC883EDL,(-5L),6L,6L,(-5L)},{0x0F741517L,0x0F741517L,6L,0xA20ED90BL,6L,0x0F741517L},{6L,0x6CC883EDL,0xA20ED90BL,0xA20ED90BL,0x6CC883EDL,6L},{0x0F741517L,6L,0xA20ED90BL,6L,0x0F741517L,0x0F741517L}};
                int i, j;
                l_2023 &= (l_1986.f3 & (safe_add_func_uint8_t_u_u(((((*g_860) = 0x9EL) >= ((((safe_rshift_func_int16_t_s_u(((safe_add_func_int64_t_s_s(((l_2014 ^ l_1986.f1) <= ((((safe_add_func_uint16_t_u_u(l_2017, ((safe_div_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s(g_1520[g_1728], (l_2022 , (***g_804)))) < g_1520[g_1728]) & 0x95E3F48BE034E875LL) & 0x72L), l_2017)) >= g_103[0][0]))) >= l_1986.f4) == l_2017) && l_2022.f0)), 1L)) < l_1986.f1), (***g_804))) >= (***g_567)) < 0x31B7E44BL) == l_1986.f0)) <= l_2014), 0xF5L)));
                g_1165 = l_2024;
                (*g_8) &= (l_1986.f4 , ((safe_add_func_int64_t_s_s(l_2007, l_1979[1][0][1])) & 1UL));
                for (g_1919 = 0; (g_1919 <= 1); g_1919 += 1)
                { 
                    l_2027 = 1L;
                }
                if (((*g_8) = (safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u(l_2014, (safe_mod_func_uint32_t_u_u((*g_569), l_2022.f0)))), ((**g_278) = ((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u((((*g_807) = (g_1520[g_1728] , l_2038)) != l_2039), 1)) , l_2040) == (void*)0), 1)) == l_2014))))))
                { 
                    int64_t **l_2044 = (void*)0;
                    int64_t ***l_2043 = &l_2044;
                    const uint16_t *l_2047 = &g_238;
                    const uint16_t **l_2046 = &l_2047;
                    const uint16_t ***l_2045 = &l_2046;
                    int32_t l_2052 = 0xE28B2D24L;
                    (*l_2043) = &g_1365[0][0][4];
                    (*g_8) = (((l_2045 == (l_2049 = l_2048)) == l_2027) >= (++(***l_1985)));
                    (*g_8) = l_2052;
                    g_1225 = func_32(&g_9, &g_9, p_3, (safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((5L ^ 0x27F1L), (l_2047 != ((safe_mul_func_int8_t_s_s((((~((safe_lshift_func_int16_t_s_s((l_1986 , l_2014), 15)) > l_2052)) && l_2014) || l_2017), 0xA6L)) , l_2047)))), 1UL)));
                    (*g_8) = ((((!((*g_1281) != (void*)0)) == (safe_sub_func_uint64_t_u_u(l_2007, (2L != (((l_1986.f2 && (((***g_1528) = (l_2065[1] == (void*)0)) > (*g_1225))) > 0xB9700DDF75335BE2LL) , g_1520[g_1728]))))) & (*g_1225)) || 18446744073709551612UL);
                }
                else
                { 
                    int32_t l_2075[5][7] = {{0L,0L,0L,0L,0L,0L,0L},{0xFD67A1A6L,0xD6ED1F19L,0xFD67A1A6L,0xD6ED1F19L,0xFD67A1A6L,0xD6ED1F19L,0xFD67A1A6L},{0L,0L,0L,0L,0L,0L,0L},{0xFD67A1A6L,0xD6ED1F19L,0xFD67A1A6L,0xD6ED1F19L,0xFD67A1A6L,0xD6ED1F19L,0xFD67A1A6L},{0L,0L,0L,0L,0L,0L,0L}};
                    union U1 l_2081 = {-1L};
                    uint64_t *l_2095 = &g_74[1];
                    int8_t *l_2100[2];
                    union U1 **l_2107 = &l_2024;
                    union U1 ***l_2109 = (void*)0;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_2100[i] = &l_2014;
                    (*g_8) = (((*g_860) = ((void*)0 != l_2068)) < (safe_sub_func_int64_t_s_s((safe_mod_func_int32_t_s_s(l_2027, 3L)), (((((safe_rshift_func_uint8_t_u_u((((((l_2007 , &g_1135) != &g_380[3][6][0]) , (void*)0) == (void*)0) ^ l_2075[2][5]), 7)) , l_1986.f0) > 0xDB954ADD6072443ALL) || (-1L)) == l_2075[2][6]))));
                    (*g_8) ^= (safe_rshift_func_int16_t_s_s((~(safe_rshift_func_uint16_t_u_u(((((((l_2081 , (+(safe_div_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((****g_1527), (l_2105[4][2] |= (safe_mul_func_int8_t_s_s((*g_860), (safe_div_func_uint8_t_u_u((((((((*l_2095)--) ^ ((safe_add_func_uint64_t_u_u(((((g_174.f0 = l_2007) ^ ((*l_2004) = (((safe_rshift_func_uint8_t_u_u(l_2017, 7)) , (safe_add_func_int64_t_s_s((((g_862 , &g_69[0][0]) == (void*)0) ^ l_1986.f2), 1UL))) >= 0x862177C7L))) > 1UL) ^ l_1986.f0), l_2014)) != (***g_1160))) <= l_2014) ^ l_1986.f4) ^ 0x0040F32EL) <= 0xE809L), 254UL))))))) | l_2014), l_2075[2][5])), g_1520[g_1728])) <= 0xACL), l_1986.f1)))) < l_2106) || l_2003) == l_2014) || 1L) , (***g_804)), g_1520[g_1728]))), l_2017));
                    l_2023 &= (&g_1165 == (l_2110 = (g_2108 = l_2107)));
                    (*g_8) = (-4L);
                }
                for (l_2014 = 0; (l_2014 <= 1); l_2014 += 1)
                { 
                    int32_t l_2119[6][1] = {{3L},{6L},{3L},{6L},{3L},{6L}};
                    int32_t *l_2136 = &g_225;
                    int32_t *l_2138 = &l_2007;
                    uint64_t *l_2140 = (void*)0;
                    uint64_t *l_2141 = &l_2003;
                    uint16_t *l_2146 = &g_121.f0;
                    int32_t **l_2149 = &l_2138;
                    int i, j, k;
                    l_2139 = (((safe_div_func_int64_t_s_s((((**g_1931) = g_46[g_1728][l_2014][(l_1986.f3 + 1)]) > (safe_div_func_int8_t_s_s(((((((safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s(0x15L, l_2119[0][0])), ((safe_sub_func_int32_t_s_s(((*l_2138) = (safe_sub_func_uint32_t_u_u((((*l_2136) ^= ((*g_8) &= (safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s(g_1520[g_1728], l_2105[3][0])), (((*g_1162) <= ((***g_804)--)) , (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((((safe_add_func_int8_t_s_s((l_2105[1][5] >= l_2105[1][5]), (*g_860))) > (***g_1160)) >= l_2027), 6)), (*g_279)))))))) != 0x5D50EA2EL), l_2137))), l_2003)) & l_2137))) , 1UL) < l_2105[2][3]) == l_2017) , 0xE4BBL) <= 0xB298L), 1L))), g_1520[g_1728])) != 0x02F9F50948FDA5F6LL) == g_1520[5]);
                    (*l_2136) &= (((*l_2141) |= l_2022.f0) < l_2017);
                    (*l_2149) = (((((safe_rshift_func_int8_t_s_s(((*l_2138) > (safe_add_func_uint64_t_u_u(((*l_2141) = ((**g_1161) != ((l_2023 |= l_2003) == (((void*)0 != l_2146) > (safe_lshift_func_uint8_t_u_u(l_2105[3][1], ((l_2139 || l_2017) > l_2105[4][2]))))))), 0UL))), 0)) || 0xA334E9DF2312C6C3LL) & 0UL) | (*l_2136)) , &l_2023);
                    return &g_9;
                }
            }
            l_2027 &= (*g_8);
            if (l_2007)
                continue;
            if (((*g_8) = (((l_2170 = ((*g_1530) = (((((safe_rshift_func_uint16_t_u_u(((((*g_1162) = l_2106) <= (1UL <= ((((*l_2152) = p_3) != (g_2169 = (((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((&g_860 == l_2160), ((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((g_1718 , ((l_2167 = l_2165[1]) != &g_860)) ^ (**g_1931)), l_2023)), l_2137)) < l_2023))) , 1UL), g_1520[g_1728])), 0xF8L)) && l_2168) , g_1135))) , 0xB88AL))) ^ 18446744073709551615UL), 3)) > g_1520[g_1728]) & 0xB6D8L) <= (*g_1530)) & g_1520[g_1728]))) > l_2007) || 7L)))
            { 
                if (l_2170)
                    break;
                for (g_1764 = 0; g_1764 < 2; g_1764 += 1)
                {
                    l_2165[g_1764] = &g_860;
                }
                for (g_234 = 0; (g_234 >= 0); g_234 -= 1)
                { 
                    int32_t **l_2171 = &g_380[1][1][1];
                    int i, j;
                    (*l_2171) = &l_2023;
                    l_2007 &= g_71[(g_234 + 1)][(g_234 + 2)];
                    (*l_2171) = &g_9;
                    l_2139 &= l_2172;
                }
            }
            else
            { 
                int32_t l_2176 = 0x84E88F2FL;
                int32_t l_2212 = 1L;
                int32_t l_2213 = (-2L);
                int32_t l_2214 = 1L;
                int32_t l_2215 = 0xE6235124L;
                int32_t l_2217 = 0x8230A7B0L;
                int32_t l_2219 = (-9L);
                int32_t l_2225 = 0x296D0D52L;
                int32_t l_2228 = 0L;
                int32_t l_2230 = 0x717D01F8L;
                int32_t l_2232 = 0xD9F03081L;
                int32_t l_2233 = 0x5513AFE2L;
                int32_t l_2234[5][1];
                uint16_t l_2235[2][4] = {{65535UL,0x1085L,65535UL,0x1085L},{65535UL,0x1085L,65535UL,0x1085L}};
                uint8_t * const l_2245[3] = {&g_81,&g_81,&g_81};
                uint64_t *l_2260 = &g_1619;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2234[i][j] = 0x926F6AC4L;
                }
                l_2178[2][2] &= (safe_add_func_uint64_t_u_u(l_2175, ((((void*)0 != &g_804) ^ l_2176) == l_2177)));
                if (l_2023)
                { 
                    int16_t l_2179 = 1L;
                    int64_t ** const *l_2205 = (void*)0;
                    if ((*g_8))
                        break;
                    if (l_2179)
                        continue;
                    (*g_8) = l_2179;
                    l_2023 = (l_2180 || (((safe_div_func_int8_t_s_s(((**l_2160) = (safe_rshift_func_int16_t_s_s(((**g_807) , ((***g_1160) = (((safe_sub_func_int32_t_s_s(((l_2176 , l_1978) == ((((((((((safe_lshift_func_uint8_t_u_s(((((safe_lshift_func_int8_t_s_s(((+((safe_sub_func_int16_t_s_s((((void*)0 != &l_2038) >= (((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((!(l_2179 != l_2017)) > l_2176), (*g_860))) <= l_2179), g_1520[g_1728])), 5L)), 0xF53AL)), l_2176)) ^ (*g_264)) < 5L)), l_2176)) | 0xE92CL)) != 4UL), l_2106)) || l_1986.f3) == l_2168) , 0x22L), 7)) & (-5L)) == g_1520[g_1728]) >= l_1986.f1) | 0x633EBA47L) , l_2205) != (void*)0) < (*g_120)) | l_1986.f4) , (*g_804))), 0x752E3E32L)) && l_2176) >= l_1986.f0))), l_2176))), 0xA1L)) || g_1520[g_1728]) , l_2179));
                }
                else
                { 
                    int32_t l_2206[1][4][7] = {{{0x1BB70273L,1L,0x1BB70273L,0x218CE73FL,(-1L),(-1L),0x218CE73FL},{0x1BB70273L,1L,0x1BB70273L,0x218CE73FL,(-1L),(-1L),0x218CE73FL},{0x1BB70273L,1L,0x1BB70273L,0x218CE73FL,(-1L),(-1L),0x218CE73FL},{0x1BB70273L,1L,0x1BB70273L,0x218CE73FL,(-1L),(-1L),0x218CE73FL}}};
                    int32_t *l_2207 = &l_2139;
                    int32_t *l_2208 = (void*)0;
                    int32_t *l_2209[2][7] = {{&g_9,&l_2007,&l_2007,&g_9,&l_2007,&l_2007,&g_9},{&l_2007,&g_9,&l_2007,&l_2007,&g_9,&l_2007,&l_2007}};
                    int32_t l_2210[6] = {0x67856FC8L,0x67856FC8L,0x67856FC8L,0x67856FC8L,0x67856FC8L,0x67856FC8L};
                    const union U1 l_2243 = {0x2FL};
                    uint32_t *****l_2257 = &g_1527;
                    int i, j, k;
                    l_2007 = (l_2139 & (*g_8));
                    if (l_2206[0][2][5])
                        continue;
                    l_2235[0][2]--;
                    l_2246[0] = func_32(&l_2234[2][0], (l_2209[0][2] = p_3), p_3, ((*l_2005) &= ((safe_mul_func_int16_t_s_s((+((l_2232 && g_1520[g_1728]) && (safe_lshift_func_uint8_t_u_u(((l_2243 , l_2244) != l_2245[1]), 2)))), 0x1BC5L)) , 0L)));
                    l_2262[1][0][3] ^= ((0x8AL | (l_2230 , (l_2177 & ((l_2224[2] , (!(&g_380[1][6][0] == l_2250[0][0][0]))) == ((safe_div_func_int16_t_s_s((((((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((((l_2257 == (void*)0) && (*g_264)) , l_2258) == (void*)0) , (*l_2207)), 249UL)), (*g_8))) , l_2259[4]) == l_2260) != l_2261) || l_2216), (*g_279))) == l_2139))))) ^ l_2170);
                }
            }
            for (g_1108 = 0; (g_1108 <= 2); g_1108 += 1)
            { 
                int16_t l_2282 = 0x31A1L;
                int32_t l_2289 = 0x3EF6B027L;
                for (g_121.f3 = 2; (g_121.f3 >= 0); g_121.f3 -= 1)
                { 
                    uint32_t l_2277 = 0x84A1D158L;
                    int32_t l_2284 = 1L;
                    int32_t l_2285 = 0x5C4EB857L;
                    int32_t l_2286 = 0xB63A9F2AL;
                    int32_t l_2287 = 0x5836246AL;
                    int32_t l_2288 = 0xE4A02E07L;
                    (*g_8) = ((safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(9UL, (safe_sub_func_int32_t_s_s((&g_805[0][0][1] == (g_2278[1] = ((safe_lshift_func_int16_t_s_u((l_2277 && (0xDFL <= ((void*)0 != &g_1303))), (l_2277 || 0xEC691270L))) , (void*)0))), l_2224[2])))), 3)) != l_2277) != l_2282) | l_2277), l_2277)), (**g_1818))) >= 18446744073709551610UL), 2)) > g_2283);
                    l_2290++;
                    l_2289 = (safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_u((-4L), ((l_2282 <= (*g_860)) , (((safe_sub_func_uint8_t_u_u((l_2178[2][2] == (safe_div_func_uint32_t_u_u(l_2289, l_2286))), (l_2301[5][5] , l_2261))) , l_2289) | g_1520[g_1728])))) ^ 1L), 13));
                    p_3 = &l_2027;
                }
                if (l_2289)
                    break;
            }
        }
        for (l_2180 = 28; (l_2180 >= 51); l_2180 = safe_add_func_int64_t_s_s(l_2180, 1))
        { 
            p_3 = p_3;
            for (l_1986.f4 = (-27); (l_1986.f4 == 17); l_1986.f4++)
            { 
                uint8_t l_2306 = 255UL;
                if (l_2306)
                    break;
            }
        }
        return &g_225;
    }
    (*g_8) &= (((void*)0 != &g_1108) != ((safe_div_func_uint16_t_u_u((((*g_806) = l_2309) != l_2309), (~(((*g_120) == (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((**g_263), (((*l_1978) = (*l_1978)) == (void*)0))) > 6L), 1)) > 0x4C31L) || 0L), (*g_264)))) , 0x3DL)))) >= 65534UL));
    if ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((((*g_860) = (safe_sub_func_int64_t_s_s((l_2325 , (safe_mul_func_int8_t_s_s(((***g_1160) | ((safe_add_func_uint16_t_u_u(((l_2330 != l_2330) && ((l_2333 = ((**g_1529) ^= ((l_2331 >= l_2332) , (((p_3 = &g_9) != &g_225) == 1L)))) | l_2334)), (***g_1160))) , (***g_1160))), 0x04L))), l_2335[2][0]))) , (***g_804)), 15)) < l_2336[2]), g_2337)))
    { 
        int32_t *l_2338 = (void*)0;
        return l_2338;
    }
    else
    { 
        if (l_2339)
        { 
            return p_3;
        }
        else
        { 
            uint8_t l_2340 = 255UL;
            --l_2340;
        }
    }
    for (g_234 = 0; (g_234 >= 0); g_234 -= 1)
    { 
        int64_t l_2343 = 0x0C49F2106C2065A8LL;
        struct S0 *** const *l_2346 = &g_806;
        int8_t l_2351 = 0L;
        int32_t *l_2358 = &g_121.f3;
        g_380[2][4][1] = (g_8 = &g_9);
        return l_2358;
    }
    return &g_225;
}



static int32_t * func_4(uint8_t  p_5, int32_t  p_6, int32_t  p_7)
{ 
    const int32_t l_1347 = 9L;
    struct S0 l_1362 = {65535UL,0xD3033AB2L,9L,0xFCEB6E13L,-4L};
    uint8_t ***l_1369[6][3][7] = {{{&g_448,&g_448,&g_448,(void*)0,(void*)0,&g_448,&g_448},{&g_448,&g_448,(void*)0,&g_448,&g_448,&g_448,&g_448},{(void*)0,&g_448,&g_448,&g_448,&g_448,&g_448,&g_448}},{{&g_448,&g_448,&g_448,&g_448,&g_448,&g_448,&g_448},{&g_448,&g_448,&g_448,(void*)0,&g_448,&g_448,&g_448},{(void*)0,&g_448,&g_448,&g_448,&g_448,&g_448,&g_448}},{{&g_448,(void*)0,&g_448,&g_448,&g_448,&g_448,&g_448},{&g_448,&g_448,&g_448,&g_448,&g_448,(void*)0,&g_448},{(void*)0,&g_448,&g_448,&g_448,&g_448,(void*)0,&g_448}},{{&g_448,&g_448,&g_448,&g_448,(void*)0,&g_448,&g_448},{&g_448,&g_448,&g_448,&g_448,(void*)0,&g_448,&g_448},{&g_448,&g_448,&g_448,&g_448,&g_448,&g_448,&g_448}},{{&g_448,&g_448,&g_448,&g_448,&g_448,(void*)0,(void*)0},{(void*)0,&g_448,&g_448,(void*)0,(void*)0,&g_448,(void*)0},{&g_448,(void*)0,&g_448,(void*)0,(void*)0,&g_448,&g_448}},{{(void*)0,(void*)0,(void*)0,&g_448,&g_448,&g_448,&g_448},{&g_448,&g_448,&g_448,&g_448,&g_448,&g_448,&g_448},{&g_448,&g_448,&g_448,(void*)0,&g_448,&g_448,&g_448}}};
    uint8_t ****l_1368[6][3] = {{&l_1369[2][1][5],&l_1369[2][1][5],&l_1369[2][1][5]},{&l_1369[2][1][5],&l_1369[2][1][5],&l_1369[3][1][5]},{&l_1369[1][2][3],&l_1369[2][1][5],&l_1369[4][1][1]},{&l_1369[2][1][5],&l_1369[2][1][5],&l_1369[4][1][1]},{&l_1369[2][1][5],&l_1369[1][2][3],&l_1369[3][1][5]},{&l_1369[2][1][5],&l_1369[2][1][5],&l_1369[2][1][5]}};
    int32_t l_1414 = 0xBFBA3833L;
    int32_t l_1415 = 0xBFC26114L;
    int32_t l_1416 = 0L;
    int32_t l_1417 = (-7L);
    int32_t l_1418 = (-1L);
    int32_t l_1419 = 0xD9B19842L;
    struct S0 *l_1428 = &g_121;
    int16_t *l_1453 = &g_103[0][0];
    uint64_t l_1514 = 0x728D1B05D30ACB14LL;
    int32_t l_1515 = 0x02999877L;
    int32_t *l_1516 = &l_1362.f3;
    int8_t l_1521[7];
    uint32_t *** const *l_1548[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t * const ***l_1549 = &g_567;
    int64_t *l_1614 = &g_663;
    union U1 l_1628[6][2] = {{{0x24L},{0x24L}},{{0x24L},{0x24L}},{{0x24L},{0x24L}},{{0x24L},{0x24L}},{{0x24L},{0x24L}},{{0x24L},{0x24L}}};
    const int32_t *l_1631[2][5][7] = {{{&l_1414,&l_1417,&g_121.f3,&g_121.f3,&l_1417,&l_1414,(void*)0},{&l_1362.f3,&g_121.f3,&l_1414,&g_225,&l_1416,(void*)0,&l_1414},{&l_1362.f3,&g_9,&g_121.f3,&l_1414,(void*)0,&l_1416,&g_225},{&g_225,&g_121.f3,&g_9,(void*)0,&l_1414,&l_1417,&g_121.f3},{&g_9,&l_1417,&g_121.f3,&l_1362.f3,&g_121.f3,&l_1417,&g_9}},{{&l_1419,(void*)0,&l_1362.f3,(void*)0,(void*)0,&l_1416,&l_1418},{&l_1362.f3,&l_1414,&l_1414,&g_121.f3,&l_1416,(void*)0,(void*)0},{&l_1416,&l_1417,&l_1362.f3,(void*)0,&g_225,&l_1414,&g_121.f3},{&l_1417,&g_121.f3,&g_121.f3,&l_1362.f3,&l_1362.f3,&g_121.f3,&g_121.f3},{&l_1416,&l_1414,&g_9,&g_225,&g_121.f3,(void*)0,(void*)0}}};
    int32_t l_1719 = 0x386231DFL;
    int32_t l_1720 = 6L;
    int32_t l_1721 = 0xA65BFCA2L;
    int32_t l_1722 = 6L;
    int32_t l_1723[5];
    int16_t l_1725 = 0x0B9BL;
    int32_t l_1726 = 5L;
    uint32_t l_1753 = 0xEDC5C12AL;
    int16_t l_1783 = 0x19A1L;
    int16_t l_1801 = 0xD41DL;
    uint32_t l_1805 = 0UL;
    uint16_t l_1831 = 0x454BL;
    uint8_t l_1851 = 0xD3L;
    uint32_t l_1886 = 0xF27C39BBL;
    struct S0 *****l_1893 = (void*)0;
    struct S0 **l_1899 = &g_1597[1][2];
    int8_t l_1949 = 1L;
    uint64_t l_1954 = 0xA0E86ABE207E456BLL;
    int32_t **l_1967 = (void*)0;
    int32_t **l_1968 = &g_380[3][6][0];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1521[i] = 0x3DL;
    for (i = 0; i < 5; i++)
        l_1723[i] = 0x374B6A67L;
    (*g_8) |= 0L;
lbl_1381:
    for (g_238 = (-2); (g_238 == 25); g_238 = safe_add_func_int64_t_s_s(g_238, 2))
    { 
        uint8_t *l_1336[6];
        int32_t l_1341 = 0L;
        int32_t l_1342 = 0xCED9FA0BL;
        int i;
        for (i = 0; i < 6; i++)
            l_1336[i] = &g_46[3][0][3];
        l_1342 ^= (safe_sub_func_int8_t_s_s(p_6, ((safe_unary_minus_func_uint32_t_u(((((*g_448) = l_1336[2]) != (void*)0) || (safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((***g_1160) = (g_589 & l_1341)), l_1341)), p_6))))) || p_5)));
    }
    for (g_225 = 0; (g_225 < (-4)); g_225 = safe_sub_func_uint32_t_u_u(g_225, 1))
    { 
        uint16_t **l_1359 = &g_279;
        int16_t l_1372[3][7][6] = {{{1L,0x321CL,(-1L),1L,0x6C7CL,1L},{1L,0xF7DBL,1L,(-5L),4L,0L},{1L,0L,(-1L),0x4A90L,0L,8L},{0xF198L,0L,0xE645L,0x4A90L,0x6813L,(-5L)},{1L,0x3B63L,0x7E3BL,0xE645L,0x3450L,1L},{(-1L),0L,0x321CL,1L,0x4A90L,0x0407L},{(-4L),0L,0xD19FL,(-5L),0xE645L,1L}},{{0x19EBL,0L,0xFD89L,0x3450L,7L,7L},{1L,1L,1L,1L,0x7928L,0x19EBL},{0xE6E5L,0xD19FL,0x84CFL,0x6813L,0L,0x3B63L},{0L,0xE645L,0xCCADL,0L,0L,(-1L)},{0x321CL,0xD19FL,0x6C7CL,4L,0x7928L,0x1F01L},{(-3L),1L,0x92CFL,0x6C7CL,7L,(-5L)},{1L,0L,0L,1L,0xE645L,0x6C7CL}},{{8L,0L,0x3450L,0xD19FL,0x4A90L,0xE6E5L},{0x3450L,0L,0xF198L,0L,0x3450L,0xD7F5L},{0xE645L,0x0407L,(-5L),0x4A90L,0x84CFL,0x7928L},{4L,0x7E3BL,0L,0x0407L,0xD19FL,0x7928L},{0xF198L,0xD116L,(-5L),0xFD89L,1L,0xD7F5L},{0xD19FL,8L,0xF198L,(-4L),0xD7F5L,0xE6E5L},{0x92CFL,1L,0x3450L,0x3B63L,(-4L),0x6C7CL}}};
        struct S0 **l_1376 = &g_808;
        uint8_t **l_1379 = &g_120;
        int32_t l_1380 = (-5L);
        int32_t l_1412[4];
        int32_t *l_1429 = &l_1415;
        uint16_t ***l_1474 = &l_1359;
        uint32_t ****l_1534 = (void*)0;
        uint8_t ****l_1647 = &l_1369[2][0][6];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1412[i] = 0x9EE8E2BDL;
        for (g_9 = 0; (g_9 > 21); g_9++)
        { 
            int64_t l_1350[6][7] = {{(-1L),0x18493C8D5AA79A05LL,(-6L),0x6320E4FF8002B44ALL,0L,0L,0x6320E4FF8002B44ALL},{(-6L),0L,(-6L),(-3L),0L,0L,(-3L)},{(-1L),0L,1L,0x6320E4FF8002B44ALL,0L,(-1L),0x6320E4FF8002B44ALL},{(-1L),0x18493C8D5AA79A05LL,(-6L),0x6320E4FF8002B44ALL,0L,0L,0x6320E4FF8002B44ALL},{(-6L),0L,(-6L),(-3L),0L,0L,(-3L)},{(-1L),0L,1L,0x6320E4FF8002B44ALL,0L,(-1L),0x6320E4FF8002B44ALL}};
            uint16_t **l_1360 = &g_279;
            uint16_t * const * const l_1363 = &g_279;
            uint8_t ***l_1367 = (void*)0;
            uint8_t ****l_1366 = &l_1367;
            int16_t l_1370 = (-1L);
            uint8_t l_1374 = 255UL;
            int32_t l_1411[4];
            const int32_t *l_1425 = (void*)0;
            int i, j;
            for (i = 0; i < 4; i++)
                l_1411[i] = 0L;
            if (l_1347)
            { 
                const int8_t l_1348 = 0x56L;
                int32_t *l_1349 = &g_121.f3;
                (*l_1349) &= l_1348;
                l_1350[0][4] = (*g_8);
                if (l_1347)
                    break;
            }
            else
            { 
                int64_t *l_1364[7][2][1] = {{{&g_234},{&g_73[3][0][3]}},{{&g_234},{&g_73[3][0][3]}},{{&l_1350[1][6]},{&g_73[3][0][3]}},{{&g_234},{&g_73[3][0][3]}},{{&g_234},{&g_73[3][0][3]}},{{&l_1350[1][6]},{&g_73[3][0][3]}},{{&g_234},{&g_73[3][0][3]}}};
                int32_t l_1371 = 0x109180F0L;
                union U1 l_1375 = {0x26L};
                uint32_t * const ***l_1384 = &g_567;
                uint32_t *l_1404 = (void*)0;
                uint32_t *l_1405 = &g_226;
                int32_t l_1413[7][1];
                int i, j, k;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1413[i][j] = 9L;
                }
                for (g_81 = 0; (g_81 <= 41); g_81 = safe_add_func_int16_t_s_s(g_81, 9))
                { 
                    uint64_t l_1361 = 0xD2042FA06EC6CE9BLL;
                    int32_t *l_1373 = &l_1362.f3;
                    (*l_1373) = (safe_div_func_uint32_t_u_u(((l_1371 = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((l_1360 = l_1359) == (l_1361 , (l_1362 , l_1363))), (((((g_1365[2][2][1] = l_1364[2][1][0]) == &g_234) , (l_1366 == l_1368[4][1])) && 0UL) >= g_1314))), l_1370))) < l_1372[0][2][1]), l_1370));
                    if (p_7)
                        break;
                }
                l_1380 ^= (((*g_279) = l_1374) ^ (((l_1375 , l_1376) != (*g_806)) > (safe_mul_func_uint8_t_u_u(p_7, (((l_1379 != (void*)0) , (**g_448)) , l_1370)))));
                if (l_1375.f0)
                    goto lbl_1381;
                for (g_174.f0 = 0; (g_174.f0 > 29); g_174.f0 = safe_add_func_uint16_t_u_u(g_174.f0, 8))
                { 
                    uint32_t * const ****l_1385 = (void*)0;
                    uint32_t * const ****l_1386 = &l_1384;
                    (*l_1386) = l_1384;
                    return &g_225;
                }
                if (((((((p_5 ^ (safe_mul_func_int8_t_s_s((+((((safe_add_func_uint64_t_u_u(l_1380, (safe_lshift_func_uint8_t_u_u(l_1362.f0, 6)))) || (2L && (((*l_1405) = (((l_1380 ^= ((safe_rshift_func_int8_t_s_s((-1L), (((safe_div_func_int32_t_s_s((((p_6 >= ((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((l_1362.f3 = (safe_mul_func_int16_t_s_s(l_1372[0][2][1], p_5))) , 0x88F3L), 0x82CCL)), 0xCAAE651CL)) < l_1350[5][5])) , (void*)0) == (void*)0), p_5)) ^ 0x0EDC66ED35F1A44FLL) == 0UL))) , 1UL)) ^ l_1375.f0) != (**g_1161))) , g_862))) >= (*g_860)) >= l_1370)), p_6))) >= l_1375.f0) , 0x7406L) || 65533UL) <= p_6) < l_1375.f0))
                { 
                    int32_t *l_1406 = &l_1371;
                    int32_t *l_1407 = &g_121.f3;
                    int32_t *l_1408 = &l_1362.f3;
                    int32_t *l_1409 = &g_121.f3;
                    int32_t *l_1410[5] = {&l_1362.f3,&l_1362.f3,&l_1362.f3,&l_1362.f3,&l_1362.f3};
                    uint16_t l_1420 = 0x80DFL;
                    int i;
                    (*l_1406) = l_1362.f2;
                    if (p_5)
                        continue;
                    (*l_1406) = l_1380;
                    --l_1420;
                }
                else
                { 
                    int32_t *l_1423[2][2];
                    int32_t **l_1424 = &g_380[4][1][0];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1423[i][j] = &l_1411[1];
                    }
                    l_1425 = func_32(l_1423[1][0], ((*l_1424) = &g_225), &l_1412[3], p_7);
                    (*l_1424) = &g_9;
                }
            }
        }
    }
    if ((*l_1516))
    { 
        for (l_1362.f4 = 0; l_1362.f4 < 6; l_1362.f4 += 1)
        {
            for (g_174.f0 = 0; g_174.f0 < 3; g_174.f0 += 1)
            {
                l_1368[l_1362.f4][g_174.f0] = (void*)0;
            }
        }
lbl_1754:
        (*g_8) &= ((safe_rshift_func_uint8_t_u_u(255UL, 5)) <= ((((((safe_mul_func_int8_t_s_s((((*l_1428) , ((void*)0 != &p_7)) > (&l_1548[4] != &l_1548[0])), (safe_add_func_uint8_t_u_u(0x1FL, 0xAEL)))) >= 0xA9L) || 1L) , 65532UL) , 0xF7739607L) , p_7));
    }
    else
    { 
        const uint64_t l_1680 = 0x2BBE390E9D3A3247LL;
        int32_t l_1706 = 0x9473BA04L;
        int32_t l_1715[4][4][4] = {{{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)}},{{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)}},{{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)}},{{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)},{0xF78E4055L,(-1L),0xF78E4055L,(-1L)}}};
        int8_t l_1724[7];
        struct S0 l_1739 = {0x3006L,0x70018EEBL,0x62FD5F7AL,-1L,3L};
        uint8_t ***** const l_1784 = (void*)0;
        int16_t *l_1799 = &g_468;
        const union U1 l_1820 = {-7L};
        int8_t l_1866 = 0xBCL;
        int32_t l_1885[5];
        int64_t l_1948 = 0L;
        int32_t *l_1951 = &l_1418;
        int32_t *l_1952 = &l_1419;
        int32_t *l_1953[6][5][3] = {{{&l_1417,(void*)0,(void*)0},{&l_1715[0][2][1],&g_121.f3,&l_1419},{&g_121.f3,&l_1720,&g_225},{&l_1414,(void*)0,&g_225},{&g_225,(void*)0,&l_1418}},{{&l_1415,(void*)0,&l_1723[1]},{&l_1722,&l_1720,&l_1722},{(void*)0,&g_121.f3,(void*)0},{&l_1721,(void*)0,&l_1722},{&l_1723[1],(void*)0,&l_1415}},{{(void*)0,&l_1362.f3,&l_1419},{&l_1723[1],&l_1726,(void*)0},{&l_1721,&l_1721,&l_1720},{(void*)0,(void*)0,&l_1706},{&l_1722,&l_1715[0][2][1],&l_1721}},{{&l_1415,&l_1417,&l_1715[0][2][1]},{&g_225,&l_1722,&l_1721},{&l_1414,&l_1706,&l_1706},{&g_121.f3,(void*)0,&l_1720},{&l_1715[0][2][1],&l_1419,(void*)0}},{{&l_1417,&l_1723[4],&l_1419},{(void*)0,&l_1415,&l_1415},{(void*)0,&l_1723[4],&l_1722},{(void*)0,&l_1419,(void*)0},{&l_1723[4],(void*)0,&l_1722}},{{(void*)0,&l_1706,&l_1723[1]},{&l_1722,&l_1722,&l_1418},{&g_121.f3,&l_1417,&g_225},{&l_1722,&l_1715[0][2][1],&g_225},{(void*)0,(void*)0,&l_1419}}};
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1724[i] = 0xF4L;
        for (i = 0; i < 5; i++)
            l_1885[i] = (-1L);
        for (l_1419 = 29; (l_1419 < (-29)); --l_1419)
        { 
            uint64_t *l_1671 = (void*)0;
            uint64_t *l_1672[1];
            int32_t l_1673 = 0x7D80723DL;
            int32_t l_1674 = (-1L);
            int32_t l_1679 = 0xE59E20B6L;
            int32_t l_1714 = (-1L);
            int32_t l_1716 = 0L;
            int32_t l_1717[2][7] = {{(-1L),(-10L),0x113A27E4L,0x113A27E4L,(-10L),(-1L),(-10L)},{5L,(-1L),(-1L),5L,(-10L),5L,(-1L)}};
            int64_t l_1727 = 0L;
            uint64_t l_1787 = 0xF3DFC860C3573A5ELL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1672[i] = (void*)0;
            (*g_8) = ((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((*g_279) &= (((*g_569) = ((l_1679 &= ((((safe_mod_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((l_1673 = p_7) < l_1674), l_1674)), ((**g_448) = (*g_120)))), ((safe_mul_func_uint8_t_u_u((1UL >= (safe_mod_func_int32_t_s_s((-7L), p_7))), 1UL)) || 0L))) , 0x25L), (*g_860))) >= (***g_1528)) < p_5) | p_5)) | l_1680)) != p_5)), 0)), (*g_860))), (*g_264))) , 0x8F56AC66L);
            if ((+(((((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u((p_7 ^ ((l_1679 |= (safe_lshift_func_uint8_t_u_u(((((0x252E00269BA50B80LL & ((safe_add_func_int16_t_s_s(p_6, ((*g_264) = (**g_278)))) == (p_6 < (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((((((*g_1541) == (void*)0) , 0UL) > 0UL) | 248UL), 0x8DL)) ^ l_1680), 3))))) > 0x1ECE9E4BE40A8018LL) , p_6) ^ l_1680), 5))) >= 1L)))), p_7)) | (*g_1225)), 2)) >= 0xBE94L) < p_5) == 0x3E741387L) < p_7)))
            { 
                struct S0 * const * const *l_1699 = (void*)0;
                int32_t l_1705 = 0L;
                (*l_1516) ^= (((((safe_mul_func_int8_t_s_s(l_1674, p_7)) & 0x02EDL) > l_1680) ^ (l_1699 == ((safe_lshift_func_int8_t_s_u(((1UL & (~(safe_sub_func_uint16_t_u_u(((p_6 != p_7) <= l_1705), p_6)))) > l_1680), l_1705)) , (void*)0))) , (-6L));
                for (g_1032 = 0; (g_1032 <= 0); g_1032 += 1)
                { 
                    (*l_1516) |= p_7;
                }
            }
            else
            { 
                int32_t *l_1707 = &l_1414;
                int32_t *l_1708 = (void*)0;
                int32_t *l_1709 = (void*)0;
                int32_t *l_1710 = &l_1706;
                int32_t *l_1711 = (void*)0;
                int32_t *l_1712 = &l_1706;
                int32_t *l_1713[5] = {&l_1415,&l_1415,&l_1415,&l_1415,&l_1415};
                int64_t l_1746[3];
                union U1 l_1774 = {0x2CL};
                int i;
                for (i = 0; i < 3; i++)
                    l_1746[i] = 1L;
                g_1728++;
                for (l_1515 = 0; (l_1515 <= 11); ++l_1515)
                { 
                    (*l_1516) ^= (safe_mod_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((9UL & ((((l_1739 , (((***g_1528) < ((l_1716 >= (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((((*l_1712) , l_1746[1]) | ((safe_mod_func_int8_t_s_s((((p_5 , p_6) <= p_7) , (*g_860)), p_7)) , (*l_1710))), 1L)), 9)), (*g_264)))) <= 0L)) || l_1674)) , p_6) , p_6) != (*g_1162))), l_1714)), (*g_279))) & 7L) >= 0x1950L), p_5));
                    (*g_8) = p_7;
                }
                if ((safe_add_func_uint64_t_u_u(((++(**g_263)) , (p_7 <= 0x28L)), (l_1753 = l_1679))))
                { 
                    int32_t **l_1755 = (void*)0;
                    int32_t **l_1756[7][6][5] = {{{(void*)0,(void*)0,&l_1710,&l_1516,&l_1707},{&g_380[0][2][0],(void*)0,&l_1516,&g_8,&g_8},{&l_1707,&l_1713[1],&l_1707,&g_8,&l_1711},{&l_1713[1],&g_380[3][6][0],&g_8,&l_1516,&g_380[0][2][0]},{&l_1713[1],&l_1711,&l_1516,(void*)0,&l_1711},{(void*)0,&g_8,&g_8,&g_380[0][2][0],&l_1710}},{{(void*)0,(void*)0,&l_1707,&l_1707,(void*)0},{&l_1711,(void*)0,&l_1516,&l_1713[1],&l_1713[1]},{(void*)0,&g_8,&l_1710,&l_1713[1],&l_1711},{&g_8,&l_1711,&g_380[0][2][0],&g_8,&l_1711},{&g_380[0][2][0],&l_1711,&g_8,&l_1707,&l_1713[1]},{&l_1713[1],&l_1707,&l_1707,&l_1713[1],&l_1713[1]}},{{&l_1707,&g_8,&l_1711,&g_380[0][2][0],&l_1711},{&g_8,&g_380[0][2][0],(void*)0,&g_380[3][6][0],&l_1516},{&l_1707,(void*)0,(void*)0,&g_380[0][2][0],&l_1711},{&g_8,&l_1713[1],&l_1516,&l_1713[1],&l_1516},{&l_1713[1],&l_1713[1],&l_1516,&l_1707,(void*)0},{(void*)0,&g_380[3][6][0],(void*)0,&g_8,&l_1713[1]}},{{&g_8,(void*)0,(void*)0,&l_1707,(void*)0},{&l_1713[1],&g_380[3][6][0],&l_1711,&g_8,(void*)0},{&g_8,&l_1713[1],&l_1707,&l_1713[1],&g_8},{&g_8,&l_1713[1],&g_8,(void*)0,&l_1713[1]},{&l_1713[1],(void*)0,&g_380[0][2][0],&g_8,&l_1707},{&g_8,&g_380[0][2][0],(void*)0,&l_1713[1],&l_1713[1]}},{{(void*)0,&g_8,&l_1713[1],&g_8,&g_8},{&l_1713[1],&l_1707,&l_1713[1],&g_8,(void*)0},{&g_8,&l_1711,&g_380[3][6][0],&l_1713[1],(void*)0},{&l_1707,(void*)0,(void*)0,&g_8,&l_1713[1]},{&g_8,(void*)0,&g_380[3][6][0],(void*)0,(void*)0},{&l_1707,&l_1516,&l_1713[1],&l_1713[1],&l_1516}},{{&l_1713[1],&l_1516,&l_1713[1],&g_8,&l_1711},{&g_380[0][2][0],(void*)0,(void*)0,&l_1707,&l_1516},{&g_380[3][6][0],(void*)0,&g_380[0][2][0],&g_8,&l_1711},{&g_380[0][2][0],&l_1711,&g_8,&l_1707,&l_1713[1]},{&l_1713[1],&l_1707,&l_1707,&l_1713[1],&l_1713[1]},{&l_1707,&g_8,&l_1711,&g_380[0][2][0],&l_1711}},{{&g_8,&g_380[0][2][0],(void*)0,&g_380[3][6][0],&l_1516},{&l_1707,(void*)0,(void*)0,&g_380[0][2][0],&l_1711},{&g_8,&l_1713[1],&l_1516,&l_1713[1],&l_1516},{&l_1713[1],&l_1713[1],&l_1516,&l_1707,(void*)0},{(void*)0,&g_380[3][6][0],(void*)0,&g_8,&l_1713[1]},{&g_8,(void*)0,(void*)0,&l_1707,(void*)0}}};
                    uint32_t l_1757 = 0x917CA4D1L;
                    uint64_t l_1785 = 0x41ABFB03F8E46892LL;
                    int i, j, k;
                    if (l_1716)
                        goto lbl_1754;
                    g_1225 = &l_1419;
                    l_1757++;
                    (*l_1710) |= (safe_sub_func_int32_t_s_s((l_1714 &= (l_1715[0][2][2] ^ 1UL)), ((safe_add_func_int64_t_s_s(((*l_1614) = g_1764), (((safe_rshift_func_int16_t_s_u(((**g_1161) = (((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u(2UL, (l_1774 , (((safe_lshift_func_int8_t_s_u((g_1619 >= ((((((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u(p_7, l_1739.f1)), p_7)) & 0UL), l_1783)) <= 18446744073709551607UL) > l_1680) , p_6) & p_7) > 0x35L)), (*l_1516))) , 0x8FL) ^ p_5)))))) , &l_1368[4][1]) != l_1784) >= (**g_1161)), 0x78L)), 0L)) < l_1785) <= 0x5BF8869BBC153ED7LL)), p_7)) , p_5) , (*l_1707)))) , 0x74D62D7FL)));
                }
                else
                { 
                    int32_t **l_1786 = &l_1710;
                    int64_t l_1790 = 0xEA61B21F98F27835LL;
                    int32_t l_1791 = 5L;
                    uint8_t l_1792 = 0x88L;
                    (*l_1786) = &l_1706;
                    --l_1787;
                    (*l_1786) = &l_1674;
                    (*l_1516) = (*g_8);
                    l_1792--;
                }
            }
        }
        (*l_1516) = (+(&g_1585 == ((((&g_804 != (void*)0) ^ (!(safe_mul_func_uint8_t_u_u(246UL, 0x7EL)))) > ((**g_263) &= (**g_278))) , (void*)0)));
        (*l_1516) ^= p_6;
        if ((l_1799 != l_1799))
        { 
            int32_t *l_1800 = (void*)0;
            const int32_t **l_1802 = &l_1631[1][2][5];
            int32_t *l_1803 = &l_1739.f3;
            int32_t *l_1804[1];
            uint8_t **l_1819 = &g_120;
            int32_t l_1827 = 1L;
            uint32_t l_1867 = 4UL;
            int i;
            for (i = 0; i < 1; i++)
                l_1804[i] = &g_121.f3;
            (*l_1802) = func_32(l_1800, &l_1715[1][0][0], &l_1715[0][2][1], l_1801);
            l_1805--;
            for (g_1718 = 0; (g_1718 >= (-18)); g_1718 = safe_sub_func_int64_t_s_s(g_1718, 1))
            { 
                int32_t * const l_1821 = &g_121.f3;
                int32_t l_1825 = 0x7692BEFCL;
                int32_t l_1826[7][3][5] = {{{(-8L),0x2AA7BA66L,0xCB9795AAL,(-8L),0xCB9795AAL},{0x4B57DEBCL,0x78F43EFFL,(-3L),0x4CC15320L,1L},{0xDC53FADBL,1L,0xCB9795AAL,0xCB9795AAL,1L}},{{1L,0x43DBE9AAL,0L,(-1L),9L},{0x4416C266L,1L,(-7L),1L,0x4416C266L},{0L,0x78F43EFFL,0x63EE6C5DL,0L,0L}},{{0x2AA7BA66L,(-7L),(-7L),0x2AA7BA66L,1L},{9L,0x43DBE9AAL,0x4B57DEBCL,0x89211461L,0L},{0xBA7BF1C1L,0x2AA7BA66L,0xBA7BF1C1L,1L,0x2AA7BA66L}},{{0L,0xEF7A28C9L,0x2AB73819L,0x89211461L,0x2AB73819L},{0xDC53FADBL,0xDC53FADBL,(-8L),0x2AA7BA66L,0xCB9795AAL},{9L,0xD213BAFFL,0x2AB73819L,0L,9L}},{{0xCB9795AAL,(-7L),0xBA7BF1C1L,0xCB9795AAL,1L},{0x63EE6C5DL,0xD213BAFFL,0x4B57DEBCL,0xD213BAFFL,0x63EE6C5DL},{0xBA7BF1C1L,0xDC53FADBL,(-7L),1L,0xDC53FADBL}},{{0x63EE6C5DL,0xEF7A28C9L,(-3L),0x43DBE9AAL,0x2AB73819L},{0xCB9795AAL,0x2AA7BA66L,(-8L),0xDC53FADBL,0xDC53FADBL},{9L,0x43DBE9AAL,9L,0L,0x63EE6C5DL}},{{0xDC53FADBL,(-7L),1L,0xDC53FADBL,1L},{0L,0x89211461L,0x4B57DEBCL,0x43DBE9AAL,9L},{0xBA7BF1C1L,0xCB9795AAL,1L,1L,0xCB9795AAL}}};
                int64_t l_1849 = 3L;
                int i, j, k;
                if (((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int64_t_s(((18446744073709551614UL | ((safe_unary_minus_func_uint8_t_u(((0x1F03D9C6L || (safe_sub_func_uint32_t_u_u((p_6 >= ((safe_lshift_func_uint16_t_u_s(0xB413L, (g_1818 != l_1819))) >= (l_1820 , l_1680))), 0x2793A67EL))) == 0UL))) & p_5)) || 65535UL))) <= 6L), p_6)) , p_7))
                { 
                    int32_t **l_1822 = (void*)0;
                    int32_t **l_1823 = &g_380[2][5][0];
                    int32_t l_1824 = 0xA7EBA57CL;
                    int32_t l_1828 = (-2L);
                    int32_t l_1829[3][3] = {{0x79F461EBL,0x79F461EBL,0x79F461EBL},{0x10C93D51L,0x10C93D51L,0x10C93D51L},{0x79F461EBL,0x79F461EBL,0x79F461EBL}};
                    int64_t l_1830 = 0xF40D8AFD970661A3LL;
                    int i, j;
                    (*l_1823) = l_1821;
                    l_1831--;
                    (*l_1516) &= (l_1739 , (*g_8));
                    (*l_1802) = &l_1826[5][1][0];
                    return &g_9;
                }
                else
                { 
                    uint16_t l_1848 = 1UL;
                    int32_t l_1850 = 0x23B47B7FL;
                    (*l_1516) &= (safe_mod_func_uint32_t_u_u((l_1715[2][2][0] |= ((safe_div_func_uint16_t_u_u(((l_1739 , (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_6, (**g_1161))), (((safe_rshift_func_int8_t_s_s((*g_860), (6UL && (safe_add_func_uint16_t_u_u(0x4856L, (safe_lshift_func_int16_t_s_s(0xEA3BL, 9))))))) > (***g_567)) , p_5)))) , (**g_278)), p_7)) | p_5)), l_1848));
                    ++l_1851;
                    return &g_225;
                }
            }
            for (l_1783 = (-5); (l_1783 <= (-1)); ++l_1783)
            { 
                int64_t l_1865 = 0xDBC988C72D6E07D9LL;
                uint32_t **l_1868[4][2][4] = {{{&g_1542,&g_1542,&g_1542,&g_1542},{&g_1542,&g_1542,&g_1542,&g_1542}},{{&g_1542,&g_1542,&g_1542,&g_1542},{&g_1542,&g_1542,&g_1542,&g_1542}},{{&g_1542,&g_1542,&g_1542,&g_1542},{&g_1542,&g_1542,&g_1542,&g_1542}},{{&g_1542,&g_1542,&g_1542,&g_1542},{&g_1542,&g_1542,&g_1542,&g_1542}}};
                int i, j, k;
                (*g_8) = ((*l_1516) ^= ((safe_rshift_func_int16_t_s_u((+((void*)0 == &p_7)), (l_1706 = ((((((l_1867 = (((safe_mul_func_uint8_t_u_u((p_7 >= ((***g_1528) = (0x522CDB70L == (safe_mul_func_int8_t_s_s((((l_1739.f2 == ((safe_lshift_func_uint16_t_u_u((((((((*g_808) , (*g_860)) , 1L) < l_1865) == (*g_1162)) == l_1866) < l_1706), 2)) <= l_1865)) < (-1L)) & 2L), l_1865))))), (*g_860))) , 0xB53B57F7L) , 0xC4L)) & 0x6DL) > l_1865) , (**g_1818)) >= l_1865) || p_7)))) , p_7));
                (*l_1516) |= (((0L == 0xBE94L) , 5UL) >= ((void*)0 == l_1868[3][0][0]));
                for (l_1362.f4 = 0; (l_1362.f4 < (-2)); l_1362.f4--)
                { 
                    int32_t l_1884 = (-3L);
                    (*l_1802) = &g_9;
                    l_1884 = ((*l_1803) = ((safe_rshift_func_uint8_t_u_s((p_5 = ((**l_1819) ^= ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((*g_279), 7)) != (safe_rshift_func_uint16_t_u_u((((g_1879 = p_5) ^ (((***g_567) |= (safe_mod_func_uint64_t_u_u(18446744073709551608UL, p_6))) ^ 0L)) || ((((*l_1516) , ((safe_mul_func_uint16_t_u_u(65533UL, 65535UL)) ^ p_5)) || l_1739.f4) || l_1739.f4)), 7))), (**g_278))) > (***g_1160)))), 7)) | 7L));
                    return &g_9;
                }
            }
            l_1886++;
        }
        else
        { 
            uint8_t l_1894 = 251UL;
            const int32_t **l_1895 = &l_1631[0][3][4];
            union U1 l_1900 = {1L};
            int32_t l_1917 = 0xBD8B75F8L;
            int32_t l_1918 = 0x414B2A83L;
            uint8_t **l_1930 = &g_120;
            l_1893 = ((safe_mod_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(0x3261EE45L, 6L)) == (l_1739 , l_1715[0][3][1])), 0x41DFL)) , &g_805[0][0][1]);
            (*l_1895) = func_32(&l_1715[3][3][2], &g_9, &g_9, l_1894);
            if ((((*g_120) = (safe_unary_minus_func_int64_t_s((safe_rshift_func_int16_t_s_s(((l_1899 = (*g_806)) != (l_1900 , (*g_806))), 9))))) >= (safe_div_func_int16_t_s_s(0x7FF1L, p_5))))
            { 
                (*g_8) = (safe_rshift_func_int8_t_s_s((&l_1414 != &g_9), ((l_1628[3][1] , (void*)0) == (*g_1818))));
            }
            else
            { 
                union U1 **l_1937 = &g_1165;
                for (l_1783 = 4; (l_1783 >= 0); l_1783 -= 1)
                { 
                    int i;
                    l_1918 = ((6L || p_6) , ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((l_1917 = (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((*g_8) ^= ((g_1520[(l_1783 + 2)]++) >= ((***g_567) , (p_5 < (l_1739 , (*g_1162)))))), ((safe_rshift_func_int16_t_s_s((p_6 < p_5), p_5)) >= l_1894))), p_7))) , p_7), (*g_860))), (*g_1162))) <= 0xE6L));
                    g_1919 ^= 1L;
                    if (l_1866)
                        continue;
                    (*l_1516) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(1UL, 0xDA60L)), (safe_rshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((((safe_div_func_int32_t_s_s(((g_1931 = l_1930) != (void*)0), 0xABB7E8F6L)) | (((safe_mul_func_uint8_t_u_u(g_1520[(l_1783 + 2)], 0x24L)) & p_7) | g_1520[(l_1783 + 2)])) , (*g_860)), (*g_120))) || 0x3A554FFEL), 7))));
                }
                (*l_1937) = ((!(safe_sub_func_int8_t_s_s(0x3AL, ((**g_448) = p_5)))) , &l_1628[3][0]);
            }
            for (g_1919 = 0; (g_1919 <= 1); g_1919 += 1)
            { 
                int64_t l_1938[6][5];
                int32_t *l_1947 = &l_1706;
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1938[i][j] = 0L;
                }
                if (l_1938[2][3])
                { 
                    int32_t *l_1946[7] = {(void*)0,(void*)0,&l_1415,(void*)0,(void*)0,&l_1415,(void*)0};
                    int i;
                    (*g_8) = ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((*g_860), ((l_1938[4][1] && ((void*)0 == (*g_448))) & (l_1917 &= (safe_add_func_int32_t_s_s((((!3L) | p_6) ^ ((****g_1527) | p_6)), l_1715[0][2][1])))))) || p_6), 3)) , l_1938[5][4]);
                    if (l_1680)
                        break;
                    return &g_9;
                }
                else
                { 
                    int32_t *l_1950 = (void*)0;
                    if (l_1948)
                        break;
                    if (l_1949)
                        continue;
                    return l_1950;
                }
            }
        }
        --l_1954;
    }
    (*g_8) = (((safe_rshift_func_uint16_t_u_u(p_6, 12)) , (safe_div_func_uint16_t_u_u((((((safe_mod_func_uint8_t_u_u(250UL, ((++(*g_120)) && (safe_mul_func_int32_t_s_s((&l_1418 != ((*l_1968) = (void*)0)), (((0x7DEEL == (***g_1160)) & (safe_rshift_func_int8_t_s_u((&g_806 == &g_806), 6))) < (**g_1931))))))) ^ p_7) != p_5) != p_6) , 0x089FL), (*g_1162)))) ^ p_5);
    return (*l_1968);
}



static int64_t  func_10(uint8_t  p_11, int32_t  p_12)
{ 
    uint8_t l_1315 = 255UL;
    int32_t l_1320 = 0xE35E900AL;
    int64_t l_1329[7];
    int i;
    for (i = 0; i < 7; i++)
        l_1329[i] = 1L;
    for (g_121.f4 = (-20); (g_121.f4 <= 5); g_121.f4 = safe_add_func_uint64_t_u_u(g_121.f4, 4))
    { 
        int32_t *l_1312 = &g_121.f3;
        int32_t *l_1313[7] = {&g_9,&g_121.f3,&g_121.f3,&g_9,&g_121.f3,&g_121.f3,&g_9};
        const union U1 l_1321[2] = {{-1L},{-1L}};
        uint32_t l_1322 = 5UL;
        struct S0 l_1327 = {0x8591L,0UL,0x907CE082L,0x2D719CE7L,-1L};
        int16_t l_1328 = 0xC5B5L;
        int i;
        --l_1315;
        (*l_1312) = ((((l_1315 | (*l_1312)) && ((safe_mod_func_int32_t_s_s((l_1320 &= 0L), (l_1321[1] , ((***g_567) = l_1322)))) != (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((l_1327 , l_1328), l_1315)), (*g_860))) >= l_1329[2]) != p_11))) || l_1329[2]) >= g_121.f3);
    }
    return g_1052;
}



static uint8_t  func_15(int32_t * p_16)
{ 
    int64_t l_19 = 1L;
    int32_t *l_30[1];
    int16_t *l_467[4][5];
    const uint8_t l_469 = 0UL;
    int32_t *l_470 = &g_121.f3;
    uint32_t l_511 = 4294967288UL;
    int64_t l_519 = (-1L);
    uint8_t l_522 = 0x96L;
    int16_t l_572 = 0x2309L;
    int8_t l_606[4][2][7] = {{{0L,(-2L),(-1L),(-6L),(-2L),(-2L),(-6L)},{0x70L,0xC9L,0x70L,(-1L),0x19L,(-1L),0x70L}},{{0L,(-6L),0L,0L,0L,0L,(-6L)},{0x07L,(-1L),0x45L,0xC9L,0x45L,(-1L),0x07L}},{{(-2L),0L,(-1L),(-1L),0L,(-2L),(-1L)},{0x19L,0xC9L,0L,0xC9L,0x19L,(-1L),0x19L}},{{0L,(-1L),(-1L),0L,(-2L),(-1L),(-6L)},{0x45L,0xC9L,0x45L,(-1L),0x07L,(-1L),0x45L}}};
    const int32_t *l_611 = &g_225;
    struct S0 l_625 = {8UL,5UL,0x7ABEDC6EL,0L,0x12DDDFBAL};
    uint32_t *l_640 = &g_71[3][1];
    uint32_t **l_639 = &l_640;
    uint32_t ***l_638 = &l_639;
    int32_t l_673[7];
    uint16_t ****l_694 = (void*)0;
    int32_t * const l_699 = &g_121.f3;
    uint64_t l_796 = 0x20BEFD51FC5D653BLL;
    struct S0 *****l_809 = &g_805[0][0][1];
    int8_t *l_859 = &g_69[0][0];
    int32_t l_876 = 0xE15CF8F8L;
    union U1 l_887 = {0x56L};
    const uint32_t l_934[7] = {0x52E06ADBL,0x52E06ADBL,0x52E06ADBL,0x52E06ADBL,0x52E06ADBL,0x52E06ADBL,0x52E06ADBL};
    union U1 *l_987 = &g_174;
    union U1 **l_986 = &l_987;
    uint16_t l_1023 = 65535UL;
    uint8_t ***l_1037 = &g_448;
    uint8_t ****l_1036[4][7] = {{&l_1037,&l_1037,&l_1037,&l_1037,&l_1037,&l_1037,&l_1037},{&l_1037,&l_1037,&l_1037,&l_1037,&l_1037,&l_1037,&l_1037},{&l_1037,&l_1037,&l_1037,&l_1037,&l_1037,&l_1037,&l_1037},{&l_1037,&l_1037,&l_1037,&l_1037,&l_1037,&l_1037,&l_1037}};
    int32_t l_1051 = 1L;
    int8_t l_1098 = 0xF9L;
    uint16_t l_1154 = 0xE38DL;
    int16_t ** const *l_1205 = &g_1161;
    uint32_t *l_1256[5];
    int8_t l_1278 = 0x14L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_30[i] = &g_9;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_467[i][j] = &g_468;
    }
    for (i = 0; i < 7; i++)
        l_673[i] = 0x8A54655FL;
    for (i = 0; i < 5; i++)
        l_1256[i] = &g_71[0][4];
    (*g_8) = (((safe_add_func_uint64_t_u_u(((g_9 , (18446744073709551606UL ^ (l_19 | (g_468 ^= (l_19 , func_20((l_19 && (g_103[0][0] = (safe_rshift_func_int16_t_s_u(func_26(l_19, l_30[0], p_16), (**g_263))))), l_30[0], g_188)))))) <= l_469), g_243[0])) , l_470) != (void*)0);
    return (**g_448);
}



static int16_t  func_20(uint64_t  p_21, int32_t * p_22, uint64_t  p_23)
{ 
    int32_t l_389 = 0xC06B8AFCL;
    int32_t l_390[4][1][4];
    const uint16_t *l_413 = &g_243[0];
    int32_t l_429 = 0xD56C7AF7L;
    int16_t *l_432 = &g_103[0][0];
    int16_t **l_431 = &l_432;
    int16_t ***l_430 = &l_431;
    uint8_t ***l_445 = (void*)0;
    uint8_t **l_447 = &g_120;
    uint8_t ***l_446[3][1];
    int32_t *l_449 = &l_390[3][0][0];
    int32_t *l_450 = &g_225;
    int32_t *l_451 = (void*)0;
    int32_t *l_452 = (void*)0;
    int32_t *l_453 = (void*)0;
    int32_t *l_454 = &l_390[2][0][3];
    int32_t *l_455 = &l_390[1][0][1];
    int32_t *l_456 = &l_429;
    int32_t *l_457[7] = {&l_429,&l_429,&l_429,&l_429,&l_429,&l_429,&l_429};
    int32_t l_458[7][7] = {{7L,7L,0xF597ACBCL,(-1L),0xF597ACBCL,7L,7L},{7L,0xF597ACBCL,(-1L),0xF597ACBCL,7L,7L,0xF597ACBCL},{0x4A288BBBL,1L,0x4A288BBBL,0xF597ACBCL,0xF597ACBCL,0x4A288BBBL,1L},{0xF597ACBCL,1L,(-1L),(-1L),1L,0xF597ACBCL,1L},{0x4A288BBBL,0xF597ACBCL,0xF597ACBCL,0x4A288BBBL,1L,0x4A288BBBL,0xF597ACBCL},{7L,7L,0xF597ACBCL,(-1L),0xF597ACBCL,7L,7L},{7L,0xF597ACBCL,(-1L),0xF597ACBCL,7L,7L,0xF597ACBCL}};
    int32_t l_459 = (-1L);
    uint64_t l_460 = 0x32F114DF09485D0ALL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_390[i][j][k] = (-1L);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_446[i][j] = &l_447;
    }
    for (g_121.f3 = 0; (g_121.f3 <= 1); g_121.f3 += 1)
    { 
        uint32_t l_386 = 0xC7A5C5EBL;
        int16_t l_395 = 0x085FL;
        int32_t l_438 = 0xEBFDEF3AL;
        int32_t l_439 = 0x37EF3F9CL;
        int32_t l_440 = 0L;
        int32_t l_441 = 0L;
        uint32_t l_442 = 1UL;
        l_386--;
        for (g_174.f0 = 0; (g_174.f0 <= 1); g_174.f0 += 1)
        { 
            int32_t l_393 = 0x899B7062L;
            int32_t l_394 = (-1L);
            struct S0 l_399 = {65532UL,18446744073709551606UL,0xA561795AL,-5L,-4L};
            int16_t * const * const *l_420 = (void*)0;
            int32_t l_435 = 1L;
            int32_t l_436 = (-1L);
            int32_t l_437[4][2];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_437[i][j] = 0xB5CE8C24L;
            }
            if (g_71[(g_121.f3 + 1)][(g_121.f3 + 3)])
            { 
                int i, j;
                return g_103[g_174.f0][g_121.f3];
            }
            else
            { 
                uint64_t l_396 = 1UL;
                int16_t ***l_421 = (void*)0;
                int16_t l_422 = 0x590BL;
                for (g_226 = 0; (g_226 <= 1); g_226 += 1)
                { 
                    int32_t *l_391 = &l_390[0][0][2];
                    int32_t *l_392[1][3][2];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_392[i][j][k] = &l_390[1][0][1];
                        }
                    }
                    l_396--;
                    (*g_8) = (l_399 , ((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((18446744073709551615UL && (safe_mul_func_int64_t_s_s(g_121.f4, ((safe_add_func_int64_t_s_s((8L || (safe_sub_func_int32_t_s_s((((safe_add_func_uint64_t_u_u(g_121.f0, (((+(((&g_73[3][0][3] != &g_234) && l_395) != (*g_120))) > (*g_8)) >= g_73[3][0][2]))) & 1L) < (**g_278)), l_390[1][0][1]))), g_238)) == p_21)))), 0xB1A930AC77B25053LL)), p_21)) <= 0UL));
                }
                l_422 &= ((*g_8) = ((((p_21 , (*g_263)) == l_413) == (((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((&g_127 != l_413), (*p_22))), (safe_div_func_uint16_t_u_u((l_420 == l_421), l_396)))) && g_103[0][3]) != 0xFBL)) < 0x27L));
            }
            if ((g_71[(g_121.f3 + 1)][(g_121.f3 + 3)] , ((*g_8) = (safe_div_func_uint64_t_u_u((l_399.f2 != ((p_21 <= ((safe_lshift_func_int8_t_s_s((-1L), (safe_add_func_uint16_t_u_u(l_429, (l_430 != (p_23 , l_420)))))) | 0x2D96D4037252700FLL)) && 0L)), 9L)))))
            { 
                int32_t *l_433 = &l_389;
                int32_t *l_434[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_434[i] = &l_390[1][0][1];
                l_442--;
                if (((*l_433) = l_436))
                { 
                    return p_23;
                }
                else
                { 
                    return p_21;
                }
            }
            else
            { 
                return p_21;
            }
        }
    }
    g_448 = &g_120;
    l_460--;
    (*p_22) = (safe_mod_func_int8_t_s_s(1L, (safe_add_func_uint64_t_u_u(g_186, (0x1FDE669CL ^ (-1L))))));
    return p_23;
}



static int16_t  func_26(uint32_t  p_27, int32_t * p_28, int32_t * p_29)
{ 
    int8_t l_31 = (-1L);
    int32_t *l_37 = &g_9;
    int32_t *l_39 = &g_9;
    int32_t **l_38 = &l_39;
    int32_t l_43 = 0L;
    int32_t *l_44 = &l_43;
    int32_t *l_45[1];
    struct S0 l_77 = {0x5F43L,0x7198F9F0L,1L,0L,0x3286B001L};
    int64_t l_128 = (-1L);
    uint32_t l_131 = 0x439DAF5BL;
    int8_t l_148 = 1L;
    uint16_t *l_155 = (void*)0;
    uint16_t **l_154 = &l_155;
    uint64_t *l_273 = &g_74[2];
    int16_t *l_313 = &g_103[0][0];
    int16_t * const *l_312 = &l_313;
    uint32_t **l_375 = (void*)0;
    int32_t * const l_381 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_45[i] = &l_43;
    l_43 ^= ((*p_28) = ((l_31 , func_32(l_37, &g_9, l_37, ((((*l_38) = p_29) != &g_9) , ((((safe_sub_func_int64_t_s_s(p_27, 0x645487972E7EB665LL)) , (**l_38)) , 0xFF5FF74FL) <= p_27)))) == (void*)0));
    ++g_46[6][0][3];
    if ((*p_29))
    { 
        int8_t l_56 = (-1L);
        int32_t l_57 = 0xE8824086L;
        int8_t *l_66 = (void*)0;
        int8_t *l_67 = &l_31;
        int8_t *l_68[5][4] = {{&g_69[0][2],&g_69[0][0],&g_69[0][2],&g_69[0][0]},{&g_69[0][2],&g_69[0][0],&g_69[0][2],&g_69[0][0]},{&g_69[0][2],&g_69[0][0],&g_69[0][2],&g_69[0][0]},{&g_69[0][2],&g_69[0][0],&g_69[0][2],&g_69[0][0]},{&g_69[0][2],&g_69[0][0],&g_69[0][2],&g_69[0][0]}};
        uint32_t *l_70[3][6] = {{&g_71[3][1],&g_71[2][2],&g_71[2][5],&g_71[3][1],&g_71[2][5],&g_71[2][2]},{&g_71[2][5],&g_71[3][1],&g_71[3][5],&g_71[3][1],&g_71[3][1],&g_71[3][5]},{&g_71[2][5],&g_71[2][5],&g_71[3][1],&g_71[3][1],&g_71[3][1],&g_71[3][1]}};
        int32_t l_72 = 0xABD119E2L;
        uint16_t *l_170 = &l_77.f0;
        uint64_t l_172 = 1UL;
        const uint32_t *l_187 = &g_188;
        uint32_t *l_201 = (void*)0;
        uint32_t **l_200 = &l_201;
        int32_t l_222 = 0L;
        const int32_t l_231 = 0xF08BABB4L;
        int32_t l_235 = (-1L);
        int32_t l_236 = 0L;
        int32_t l_237 = 0x0DCBC0DAL;
        int i, j;
        if ((g_9 | (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((~(l_57 = l_56)), (g_46[0][1][1] == ((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u(p_27, (g_74[3] = (g_73[3][0][3] = (safe_rshift_func_int8_t_s_s(0xF0L, (p_27 != ((((((*l_44) = ((l_72 = ((g_69[0][2] = ((*l_67) |= ((safe_add_func_int64_t_s_s(g_46[6][0][3], (*l_39))) || 0xB579AB67338D581CLL))) <= l_56)) | 0xC4505AF7L)) , 5L) <= (**l_38)) == g_9) , p_27)))))))) & l_56), 8UL)) && l_72)))) || g_69[0][0]), 4)), g_46[6][0][3]))))
        { 
            uint8_t *l_80 = &g_81;
            int32_t *l_99 = (void*)0;
            int32_t **l_108 = &l_45[0];
            int32_t l_125[3];
            int32_t l_129 = (-4L);
            int32_t l_130[3];
            int i;
            for (i = 0; i < 3; i++)
                l_125[i] = 0x5FD3A0BCL;
            for (i = 0; i < 3; i++)
                l_130[i] = 2L;
            (*g_8) = ((g_46[2][0][3] | p_27) && (0x9E2F9DBC33063242LL > (g_46[6][0][3] != (((l_77 , ((*l_80) |= (safe_add_func_uint8_t_u_u(p_27, 0xAEL)))) > (*l_37)) | p_27))));
            for (l_31 = 0; (l_31 == 6); l_31++)
            { 
                uint32_t l_88 = 0UL;
                int16_t *l_102 = &g_103[0][0];
                (**l_38) = (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(l_88, ((*l_102) ^= (g_74[5] >= (((p_27 <= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(l_88, ((void*)0 == l_99))), (safe_mod_func_int64_t_s_s((((p_27 < l_72) , 0x3439BF9AB2FCBA47LL) & 1L), 0xE6DEAED54F57EB90LL)))) || p_27), g_81)) > l_88), 0L)), 5))) > (*g_8)) , 0L))))), g_69[0][0]));
            }
            (*p_28) = (safe_mul_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u(((*l_80) = 0xB5L), (l_77 , (((*g_8) >= ((((*l_38) = p_28) != ((*l_108) = p_28)) | ((g_69[0][0] <= (l_72 < (*p_29))) , p_27))) && p_27)))) <= g_74[3]) | (*g_8)) > g_46[4][0][1]), 8UL));
            for (g_81 = (-10); (g_81 != 44); ++g_81)
            { 
                int32_t *l_111 = &l_77.f3;
                uint8_t **l_118 = (void*)0;
                uint8_t **l_119[7][5][3] = {{{&l_80,&l_80,&l_80},{(void*)0,(void*)0,&l_80},{(void*)0,&l_80,&l_80},{(void*)0,(void*)0,&l_80},{&l_80,(void*)0,&l_80}},{{&l_80,(void*)0,&l_80},{&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80},{(void*)0,(void*)0,&l_80}},{{(void*)0,(void*)0,&l_80},{(void*)0,(void*)0,(void*)0},{&l_80,&l_80,&l_80},{&l_80,(void*)0,(void*)0},{&l_80,&l_80,&l_80}},{{&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80},{(void*)0,(void*)0,&l_80},{(void*)0,&l_80,&l_80},{(void*)0,(void*)0,&l_80}},{{&l_80,(void*)0,&l_80},{&l_80,(void*)0,&l_80},{&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80}},{{(void*)0,(void*)0,&l_80},{(void*)0,(void*)0,&l_80},{(void*)0,(void*)0,(void*)0},{&l_80,&l_80,&l_80},{&l_80,(void*)0,(void*)0}},{{&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80},{(void*)0,(void*)0,&l_80},{(void*)0,&l_80,&l_80}}};
                int16_t *l_126 = &g_127;
                int i, j, k;
                for (l_57 = 3; (l_57 >= 0); l_57 -= 1)
                { 
                    int i, j;
                    (*p_29) ^= g_71[l_57][(l_57 + 2)];
                    if (g_71[l_57][(l_57 + 3)])
                        break;
                    (*l_108) = ((*l_38) = l_111);
                }
                (*l_38) = ((safe_sub_func_int32_t_s_s((((safe_div_func_int8_t_s_s((g_103[0][0] == (safe_add_func_int32_t_s_s((((g_120 = &g_46[6][0][3]) == &g_46[0][1][2]) < ((*l_126) = ((g_121 , (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((*p_28))) > (((((p_27 , (((*l_111) |= (&l_56 != l_80)) >= 1L)) & 0x3BL) >= l_125[2]) & p_27) < p_27)), g_121.f0))) && p_27))), l_128))), (*l_44))) , p_27) > 4L), 0xF5692BD2L)) , &g_9);
            }
            l_131++;
        }
        else
        { 
            const uint16_t l_138 = 0x30E8L;
            int32_t ** const l_147 = (void*)0;
            int16_t *l_149 = &g_103[0][0];
            uint16_t *l_150[3][1];
            int32_t l_151 = 0L;
            uint16_t **l_156 = &l_150[1][0];
            uint8_t **l_171 = &g_120;
            uint32_t **l_202[4][3][4] = {{{(void*)0,(void*)0,&l_201,(void*)0},{(void*)0,&l_201,&l_201,&l_201},{(void*)0,(void*)0,(void*)0,&l_201}},{{&l_201,&l_201,&l_201,(void*)0},{&l_201,(void*)0,(void*)0,&l_201},{(void*)0,(void*)0,&l_201,(void*)0}},{{(void*)0,&l_201,&l_201,&l_201},{(void*)0,(void*)0,(void*)0,&l_201},{&l_201,&l_201,&l_201,(void*)0}},{{&l_201,(void*)0,(void*)0,&l_201},{(void*)0,(void*)0,&l_201,(void*)0},{(void*)0,&l_201,&l_201,&l_201}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_150[i][j] = &l_77.f0;
            }
            if ((safe_div_func_uint16_t_u_u((l_151 = (((*l_149) ^= (0x08590E40L >= (safe_mul_func_uint16_t_u_u((l_138 >= ((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((*g_120) >= ((5L <= p_27) || (l_147 == (void*)0))), p_27)), 1)), g_46[3][0][2])), 0xB405L)) == p_27) ^ g_46[1][1][0]) != p_27)), l_148)))) >= g_121.f0)), g_121.f3)))
            { 
                for (l_43 = 5; (l_43 > 28); l_43++)
                { 
                    (*g_8) |= (p_27 > 0x2EL);
                    l_156 = l_154;
                    return (*l_37);
                }
            }
            else
            { 
                (*l_44) |= (*g_8);
                for (g_121.f3 = 14; (g_121.f3 != (-30)); g_121.f3--)
                { 
                    return g_121.f0;
                }
            }
            for (l_77.f2 = (-14); (l_77.f2 == (-13)); ++l_77.f2)
            { 
                return l_57;
            }
            (*l_38) = (void*)0;
            (*g_8) = l_72;
            for (l_56 = 28; (l_56 > (-10)); --l_56)
            { 
                uint16_t l_173 = 0UL;
                const uint32_t *l_183 = &g_71[3][4];
                const uint32_t **l_184[1][3][3];
                uint32_t **l_189 = &l_70[2][4];
                uint64_t *l_214[2][6] = {{&l_172,&l_172,&l_172,&l_172,&l_172,&l_172},{&l_172,&l_172,&l_172,&l_172,&l_172,&l_172}};
                uint8_t l_219 = 250UL;
                const int32_t *l_221 = &l_77.f3;
                const int32_t **l_220 = &l_221;
                int32_t l_223 = 0xD5457A2EL;
                int32_t l_224 = (-5L);
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_184[i][j][k] = &l_183;
                    }
                }
                for (g_81 = (-18); (g_81 >= 10); ++g_81)
                { 
                    (*l_44) = ((void*)0 == &l_45[0]);
                    (*p_29) = (safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((g_121.f3 != p_27), (safe_unary_minus_func_uint16_t_u((((((p_27 && (*p_28)) , l_170) != (*l_154)) & (((l_171 = (((*g_120) = 1UL) , &g_120)) == (void*)0) ^ l_172)) >= g_103[1][3]))))) < (*g_8)), 4));
                    return l_173;
                }
                if ((*g_8))
                    continue;
                (*l_44) = ((g_174 , (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(((**l_156) = 0UL), 5)) || ((safe_mod_func_int8_t_s_s((g_69[0][0] = (((*l_37) = ((safe_add_func_int16_t_s_s((((l_187 = (g_185[2][2] = l_183)) == ((*l_189) = (void*)0)) , (p_27 <= p_27)), ((*l_149) = ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((l_200 != l_202[0][0][3]), 0xFC8F313514C0A486LL)), 4)), g_74[3])), 7)) >= p_27), 7UL)) | g_46[6][0][3])))) && g_174.f0)) ^ 0x9582D88AL)), 8L)) || l_57)), 7))) && (*p_28));
                (*l_220) = func_32(p_28, p_29, &g_9, ((((((safe_div_func_uint16_t_u_u((l_219 = ((safe_unary_minus_func_uint8_t_u(((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((g_74[5]++) ^ (safe_sub_func_int32_t_s_s((((*l_37) || ((-1L) != (0xB1E83F6A43E87FF4LL & (p_29 != p_29)))) && (*l_44)), (*p_29)))), (*g_120))), 3)), (*p_28))), 6)) >= 255UL) , 0x4D09L) == g_9))) && (*g_120))), g_103[0][0])) , (void*)0) == l_150[2][0]) ^ (*g_8)) > g_73[1][0][3]) & p_27));
                g_226--;
            }
        }
        for (g_127 = (-29); (g_127 != 6); ++g_127)
        { 
            uint16_t ***l_233 = &l_154;
            uint16_t ****l_232 = &l_233;
            (*l_232) = ((p_27 > l_231) , (void*)0);
            return p_27;
        }
        --g_238;
        for (g_225 = 0; (g_225 == (-18)); g_225--)
        { 
            int16_t *l_244 = &g_103[0][0];
            int32_t l_247 = 1L;
            uint64_t *l_248[2];
            const uint16_t **l_282 = (void*)0;
            const int32_t *l_328[6] = {&g_121.f3,&g_121.f3,&g_121.f3,&g_121.f3,&g_121.f3,&g_121.f3};
            uint32_t **l_373 = &l_70[0][1];
            uint32_t ***l_374 = &l_200;
            uint32_t ***l_376 = &l_375;
            int i;
            for (i = 0; i < 2; i++)
                l_248[i] = &g_74[3];
            for (g_81 = 0; (g_81 <= 0); g_81 += 1)
            { 
                int i, j;
                return g_69[g_81][(g_81 + 1)];
            }
        }
    }
    else
    { 
        uint32_t l_377 = 18446744073709551615UL;
        const int32_t *l_383 = &g_9;
        const int32_t **l_382 = &l_383;
        struct S0 *l_384 = &g_121;
        struct S0 **l_385 = &l_384;
        l_377++;
        (*l_38) = g_380[3][6][0];
        (*l_382) = func_32(&g_9, &g_9, l_381, (g_186 , p_27));
        (*l_385) = l_384;
    }
    (*l_44) = ((*l_37) = (*l_44));
    return g_69[0][0];
}



static const int32_t * func_32(int32_t * p_33, int32_t * p_34, int32_t * const  p_35, int64_t  p_36)
{ 
    const int32_t *l_42 = &g_9;
    return l_42;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_46[i][j][k], "g_46[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_69[i][j], "g_69[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_71[i][j], "g_71[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_73[i][j][k], "g_73[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_103[i][j], "g_103[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    transparent_crc(g_121.f2, "g_121.f2", print_hash_value);
    transparent_crc(g_121.f3, "g_121.f3", print_hash_value);
    transparent_crc(g_121.f4, "g_121.f4", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_174.f0, "g_174.f0", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_243[i], "g_243[i]", print_hash_value);

    }
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_1032, "g_1032", print_hash_value);
    transparent_crc(g_1052, "g_1052", print_hash_value);
    transparent_crc(g_1108, "g_1108", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    transparent_crc(g_1314, "g_1314", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1520[i], "g_1520[i]", print_hash_value);

    }
    transparent_crc(g_1619, "g_1619", print_hash_value);
    transparent_crc(g_1718, "g_1718", print_hash_value);
    transparent_crc(g_1728, "g_1728", print_hash_value);
    transparent_crc(g_1764, "g_1764", print_hash_value);
    transparent_crc(g_1879, "g_1879", print_hash_value);
    transparent_crc(g_1919, "g_1919", print_hash_value);
    transparent_crc(g_2283, "g_2283", print_hash_value);
    transparent_crc(g_2337, "g_2337", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
