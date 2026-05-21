// SPDX-License-Identifier: MIT
// cctest_csmith_47e47a78.c --- cctest case csmith_47e47a78 (csmith seed 1206155896)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3a979ced */

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

// Options:   -s 1206155896 -o /tmp/csmith_gen_e4x8j1sx/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int8_t  f1;
   int32_t  f2;
   uint16_t  f3;
   const uint32_t  f4;
};

union U1 {
   uint8_t  f0;
   int16_t  f1;
   uint32_t  f2;
};

union U2 {
   struct S0  f0;
   const uint32_t  f1;
   struct S0  f2;
};


static int32_t g_12 = 0xFB2C41ACL;
static uint32_t g_13 = 0x0BEFCDF1L;
static uint32_t g_14 = 4294967291UL;
static uint64_t g_15 = 0x36BE856DFC9B996ALL;
static uint16_t g_16[5] = {0x335CL,0x335CL,0x335CL,0x335CL,0x335CL};
static const struct S0 g_34[1][2][4] = {{{{18446744073709551615UL,-1L,0x1CD43A1EL,65535UL,0xA7412631L},{18446744073709551615UL,-1L,0x1CD43A1EL,65535UL,0xA7412631L},{18446744073709551615UL,-1L,0x1CD43A1EL,65535UL,0xA7412631L},{18446744073709551615UL,-1L,0x1CD43A1EL,65535UL,0xA7412631L}},{{18446744073709551615UL,-1L,0x1CD43A1EL,65535UL,0xA7412631L},{18446744073709551615UL,-1L,0x1CD43A1EL,65535UL,0xA7412631L},{18446744073709551615UL,-1L,0x1CD43A1EL,65535UL,0xA7412631L},{18446744073709551615UL,-1L,0x1CD43A1EL,65535UL,0xA7412631L}}}};
static union U1 g_41 = {247UL};
static uint16_t g_59[2][3] = {{0xF270L,0xF270L,0xF270L},{0xF270L,0xF270L,0xF270L}};
static int32_t g_60 = (-7L);
static int8_t g_137[2] = {0L,0L};
static uint8_t g_139 = 0xCFL;
static int32_t g_159 = 0x8C1DB4CFL;
static uint32_t g_179[2] = {18446744073709551615UL,18446744073709551615UL};
static int64_t g_244[5] = {4L,4L,4L,4L,4L};
static uint8_t g_247 = 3UL;
static int8_t g_251[1][5][4] = {{{(-1L),(-1L),0L,(-1L)},{(-1L),0x31L,0x31L,(-1L)},{0x31L,(-1L),0x31L,0x31L},{(-1L),(-1L),0L,(-1L)},{(-1L),0x31L,0L,0x31L}}};



static uint16_t  func_1(void);
static uint64_t  func_6(uint16_t  p_7, int16_t  p_8, int32_t  p_9, const int64_t  p_10);
static int32_t  func_21(int32_t  p_22, uint32_t  p_23);
static struct S0  func_24(uint16_t  p_25);




static uint16_t  func_1(void)
{ 
    uint32_t l_11 = 1UL;
    int32_t l_252 = 1L;
    uint64_t l_277 = 4UL;
    l_252 = ((safe_add_func_uint64_t_u_u(18446744073709551615UL, ((safe_add_func_int8_t_s_s(((g_251[0][1][1] &= (func_6(l_11, (g_16[3] &= (g_15 = ((g_14 = (l_11 | (g_13 = (((l_11 , g_12) != l_11) && g_12)))) < g_12))), g_12, l_11) ^ g_244[4])) > l_11), l_11)) , g_34[0][1][1].f3))) <= l_11);
    l_252 = (l_11 != (safe_add_func_int32_t_s_s(((!g_34[0][1][1].f0) >= (g_16[0] == ((safe_rshift_func_int16_t_s_s(((!(safe_rshift_func_uint16_t_u_s((g_59[0][0] &= 0xC426L), g_16[3]))) >= l_11), g_16[3])) != (-1L)))), 1UL)));
    for (g_14 = 23; (g_14 < 21); g_14 = safe_sub_func_uint16_t_u_u(g_14, 2))
    { 
        int64_t l_272 = 0x24B1641BD3BCB1EALL;
        l_277 = ((safe_add_func_int16_t_s_s(l_11, (g_59[0][2]--))) , ((!(safe_mod_func_uint32_t_u_u(0x58F5FF72L, (safe_rshift_func_uint16_t_u_s(l_272, 3))))) , (safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(g_251[0][2][1], l_272)), g_34[0][1][1].f3))));
        g_60 = g_15;
    }
    return l_277;
}



static uint64_t  func_6(uint16_t  p_7, int16_t  p_8, int32_t  p_9, const int64_t  p_10)
{ 
    int16_t l_20 = 0x748BL;
    int32_t l_134 = (-1L);
    int32_t l_136[2];
    int64_t l_176 = 0L;
    int64_t l_206 = 0xB3813AB97BF4D477LL;
    uint16_t l_250 = 0xB7B2L;
    int i;
    for (i = 0; i < 2; i++)
        l_136[i] = 0L;
    for (p_8 = 0; (p_8 == (-4)); p_8--)
    { 
        int16_t l_131 = 0x466EL;
        int32_t l_132 = 0xE04AB730L;
        int32_t l_133[3][3][4] = {{{1L,1L,1L,1L},{1L,1L,(-9L),1L},{1L,1L,1L,1L}},{{1L,1L,1L,1L},{1L,1L,(-9L),1L},{1L,1L,1L,1L}},{{1L,1L,1L,1L},{1L,1L,(-9L),1L},{1L,1L,1L,1L}}};
        int64_t l_177 = 0L;
        int i, j, k;
        for (g_14 = 0; (g_14 <= 4); g_14 += 1)
        { 
            int32_t l_19 = 6L;
            int i;
            if (g_16[g_14])
            { 
                return p_7;
            }
            else
            { 
                uint32_t l_126 = 0xA6A4DFBEL;
                int32_t l_130[4][3][5] = {{{0xAD1E1EA8L,1L,0x5799C725L,0xB462C2F1L,0xDAA5E5C7L},{0L,1L,0x9615D095L,0L,0xBB96E4AEL},{0L,(-8L),0x4999CA7BL,1L,1L}},{{0xACBBF453L,(-8L),0xACBBF453L,0xBB96E4AEL,0L},{1L,1L,0xBB96E4AEL,0xDAA5E5C7L,0xB462C2F1L},{0xDAA5E5C7L,1L,4L,0x5692BD29L,0L}},{{0xACBBF453L,0xEC67F3A6L,0xBB96E4AEL,0xB462C2F1L,0xEC67F3A6L},{0xEC67F3A6L,0x5799C725L,0xACBBF453L,(-3L),0xB462C2F1L},{(-8L),(-3L),0x4999CA7BL,(-3L),(-8L)}},{{0xAD1E1EA8L,0xDAA5E5C7L,0x9615D095L,0xB462C2F1L,0x1307C177L},{0x5692BD29L,1L,0x5799C725L,0x5692BD29L,0xBB96E4AEL},{(-3L),0L,0x4999CA7BL,0xDAA5E5C7L,0x1307C177L}}};
                int i, j, k;
                l_19 = 3L;
                l_19 = l_20;
                l_130[0][2][4] = func_21((l_126 ^= (func_24(l_20) , (0x75L != ((-1L) & g_16[2])))), p_7);
            }
        }
        if ((l_133[2][2][2] = (l_132 = l_131)))
        { 
            int16_t l_135 = 0xA7C6L;
            int32_t l_138 = 0L;
            g_139++;
            for (g_14 = 0; (g_14 >= 43); g_14 = safe_add_func_uint64_t_u_u(g_14, 8))
            { 
                int32_t l_150[1][4];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_150[i][j] = 0L;
                }
                l_138 = (safe_rshift_func_uint16_t_u_u(p_7, ((safe_div_func_int32_t_s_s(((l_150[0][3] = (l_136[0] = (g_41.f0 = (++g_139)))) , (~0xE9L)), (((-6L) == (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((+((((0x14101932L < g_59[0][2]) == 3UL) >= l_131) == (-7L))), 1UL)) < g_159), p_10)), p_10))) | 3UL))) , l_132)));
                l_136[0] ^= (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(1L, (safe_add_func_uint32_t_u_u(g_34[0][1][1].f4, p_10)))), (safe_mul_func_uint16_t_u_u(1UL, 0x19CCL))));
            }
        }
        else
        { 
            uint32_t l_178[5][1] = {{0x805FBE3FL},{1UL},{0x805FBE3FL},{1UL},{0x805FBE3FL}};
            int i, j;
            l_178[1][0] = (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((65535UL <= (safe_div_func_uint32_t_u_u(((((g_15 = l_136[0]) , func_24(g_16[0])) , 0xA6L) && l_176), p_9))), p_9)), p_8)), l_177));
        }
        if ((((1L > (((--g_179[1]) , ((safe_rshift_func_uint8_t_u_u((p_10 || ((safe_add_func_uint64_t_u_u(0xDC2514DC0AA95C4CLL, ((p_10 | g_34[0][1][1].f1) & p_7))) < g_16[4])), 4)) == 4294967295UL)) || (-1L))) != g_15) == g_34[0][1][1].f0))
        { 
            g_159 = (safe_mod_func_uint32_t_u_u((((+((safe_sub_func_uint16_t_u_u((l_133[0][2][3] <= l_20), 0x7FAEL)) > g_34[0][1][1].f4)) , 18446744073709551615UL) ^ p_9), g_137[0]));
        }
        else
        { 
            if (g_179[1])
                break;
            l_132 = 0x4F58305FL;
        }
    }
    for (p_7 = 0; (p_7 <= 1); p_7 += 1)
    { 
        int32_t l_195 = 0x043B8F34L;
        union U2 l_229 = {{0x4F27B7FAL,7L,0x7C7E5BD8L,0x16D9L,4294967295UL}};
        int32_t l_242 = (-8L);
        int32_t l_243 = 1L;
        int32_t l_245 = 0x9C121501L;
        int32_t l_246[5][1] = {{0xCD871682L},{0x7034A44FL},{0xCD871682L},{0x7034A44FL},{0xCD871682L}};
        int i, j;
        if (l_136[p_7])
        { 
            int32_t l_196 = 0x6C57027BL;
            int32_t l_197 = 0xF33844FDL;
            int i;
            l_136[p_7] = (safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((l_197 = (((l_195 &= l_136[p_7]) , p_10) && (l_196 ^ (-8L)))), p_9)), l_196));
        }
        else
        { 
            int16_t l_211 = 0xD08AL;
            int32_t l_225 = 0L;
            union U2 l_226 = {{1UL,0x46L,0xBE125798L,65534UL,1UL}};
            int32_t l_234 = 0x852CF7C8L;
            if ((l_136[p_7] <= ((safe_div_func_uint8_t_u_u(249UL, (safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u(l_206, (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(0L, 11)), l_211)))) , g_34[0][1][1].f0) & g_60), l_134)), 0UL)))) == 0L)))
            { 
                const int32_t l_224 = 0L;
                g_60 &= (safe_rshift_func_uint8_t_u_u(p_8, 3));
                l_225 = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(0x5E3DL, 15)), (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(p_7, (safe_mod_func_int32_t_s_s(((g_159 > l_136[p_7]) ^ p_9), l_224)))), p_9))));
                if (p_10)
                    break;
            }
            else
            { 
                l_234 = (l_226 , (safe_add_func_uint8_t_u_u(((l_229 , ((g_41 , (safe_div_func_uint8_t_u_u(((((l_225 = (safe_lshift_func_uint16_t_u_s((g_16[2] ^= p_7), g_179[1]))) ^ g_13) > 0x819DL) <= p_8), l_226.f0.f3))) == g_34[0][1][1].f2)) && g_34[0][1][1].f2), g_34[0][1][1].f2)));
                g_60 = (l_136[0] == (safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_16[4], 0xDA69L)), (((safe_mod_func_int64_t_s_s(l_226.f0.f2, 18446744073709551613UL)) == 0UL) < 0L))));
            }
            for (l_195 = 0; (l_195 <= 1); l_195 += 1)
            { 
                uint16_t l_241 = 0xF08BL;
                return l_241;
            }
            return g_34[0][1][1].f1;
        }
        g_247++;
    }
    l_250 = p_9;
    return g_244[0];
}



static int32_t  func_21(int32_t  p_22, uint32_t  p_23)
{ 
    uint64_t l_127[3];
    int i;
    for (i = 0; i < 3; i++)
        l_127[i] = 18446744073709551615UL;
    l_127[2] = p_22;
    for (p_22 = (-25); (p_22 < 5); ++p_22)
    { 
        if (l_127[2])
            break;
    }
    return p_22;
}



static struct S0  func_24(uint16_t  p_25)
{ 
    int16_t l_28 = 0xFF5FL;
    int32_t l_35[2][5][2] = {{{(-1L),(-1L)},{(-1L),0x1939EFD9L},{0L,0xDD145601L},{0x1939EFD9L,0xDD145601L},{0L,0x1939EFD9L}},{{(-1L),(-1L)},{(-1L),0x1939EFD9L},{0L,0xDD145601L},{0x1939EFD9L,0xDD145601L},{0L,0x1939EFD9L}}};
    int32_t l_45 = 2L;
    int32_t l_46[5][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
    struct S0 l_64[1] = {{0xF746A6ECL,0xD2L,0x26019FDEL,0x1321L,0UL}};
    uint32_t l_65 = 8UL;
    union U1 l_79 = {0x4EL};
    int i, j, k;
    for (g_13 = (-24); (g_13 >= 15); g_13 = safe_add_func_int16_t_s_s(g_13, 9))
    { 
        int32_t l_31 = 0x25C7E4DDL;
        l_28 = g_16[3];
        l_31 = (safe_lshift_func_int8_t_s_u((l_31 <= l_31), (0xB49A5C1B09C821F9LL == (0xB78CD908L < p_25))));
    }
    if (l_28)
    { 
        int32_t l_36 = (-4L);
        int32_t l_62 = (-1L);
        int16_t l_83 = (-1L);
        l_35[0][3][1] = (g_34[0][1][1] , 4L);
        if ((l_36 = (-1L)))
        { 
            int64_t l_61 = 0x7CFCBFA339BCA7AFLL;
            int32_t l_63 = 0xD061DAE5L;
            if (((p_25 , 0x26L) == p_25))
            { 
                uint32_t l_44 = 18446744073709551613UL;
                l_46[3][0] = (g_13 <= ((safe_add_func_int16_t_s_s((l_45 = (0x351F4A1AL < (g_41 , ((l_35[0][3][1] = (safe_add_func_int64_t_s_s(l_35[0][3][0], l_44))) < l_28)))), p_25)) & 0UL));
            }
            else
            { 
                uint64_t l_58 = 18446744073709551615UL;
                l_61 = ((p_25 && (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((g_16[3] | (g_60 = ((0x12B2L != (+(((((((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((g_41.f0 = 0x4BL) >= 0xDAL), 0x11L)), (-2L))), l_36)) < l_58) ^ p_25) , g_34[0][1][1].f2) != g_59[0][2]) ^ p_25) > 0xEDF5A291505FFFC4LL))) > 2L))), 5)) == g_16[3]), l_58))) ^ g_14);
                l_63 = (l_62 = 0L);
            }
            return l_64[0];
        }
        else
        { 
            union U1 l_78 = {255UL};
            int32_t l_82 = (-2L);
            int32_t l_98[1][3][3] = {{{(-7L),0L,(-7L)},{0L,0L,0L},{(-7L),0L,(-7L)}}};
            uint32_t l_108 = 0x954321B6L;
            int i, j, k;
            if ((l_65 , ((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_62, 5)), (safe_rshift_func_int8_t_s_s(((l_83 = (l_82 |= ((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(((l_79 = l_78) , (safe_div_func_uint64_t_u_u((g_15 = ((0x3EB33379L != 0xDC21833DL) != 6L)), p_25))), l_64[0].f4)), p_25)) >= l_46[0][1]))) <= p_25), 3)))), 2)) , g_16[1])))
            { 
                uint32_t l_96 = 0x642B86B6L;
                int32_t l_97 = 7L;
                uint32_t l_109 = 1UL;
                int32_t l_110 = (-1L);
                l_98[0][0][2] |= (l_62 = ((((g_41.f1 = (0xC533L || (safe_lshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((l_96 = (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0x76C5L, (l_64[0].f4 && ((l_82 <= 1L) & 0L)))), p_25)), l_83))) | 248UL) & l_64[0].f2), 0x0CL)), l_97)) <= l_82), 4)))) != 0x4FF7L) == g_34[0][1][1].f0) ^ g_59[1][0]));
                l_110 ^= (safe_mod_func_uint32_t_u_u(((g_41.f0 = (safe_rshift_func_uint8_t_u_s((g_34[0][1][1].f1 && g_60), 3))) > (l_109 ^= ((l_82 = (l_97 &= (+(safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((l_98[0][2][1] = (g_60 | p_25)) ^ g_59[0][1]) & l_108) ^ 1L), g_34[0][1][1].f1)), 65535UL))))) != p_25))), 0x3BE12964L));
                l_46[3][0] = 0L;
            }
            else
            { 
                l_98[0][0][2] = (p_25 , 0x2702ECBAL);
                l_82 = (((((((g_34[0][1][1].f1 < (safe_mod_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((g_34[0][1][1] , g_16[3]), (safe_add_func_int8_t_s_s((!(safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((0x22L > g_34[0][1][1].f3), p_25)), 0x89730A75L))), 0x06L)))) | (-1L)), 248UL))) && l_78.f0) >= p_25) > p_25) != p_25) > l_78.f0) <= 0x986CBD83L);
            }
        }
    }
    else
    { 
        for (l_28 = 0; (l_28 >= 15); ++l_28)
        { 
            for (g_12 = 0; (g_12 != (-27)); g_12--)
            { 
                g_60 = p_25;
            }
        }
    }
    return l_64[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_16[i], "g_16[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_34[i][j][k].f0, "g_34[i][j][k].f0", print_hash_value);
                transparent_crc(g_34[i][j][k].f1, "g_34[i][j][k].f1", print_hash_value);
                transparent_crc(g_34[i][j][k].f2, "g_34[i][j][k].f2", print_hash_value);
                transparent_crc(g_34[i][j][k].f3, "g_34[i][j][k].f3", print_hash_value);
                transparent_crc(g_34[i][j][k].f4, "g_34[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_59[i][j], "g_59[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_137[i], "g_137[i]", print_hash_value);

    }
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_179[i], "g_179[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_244[i], "g_244[i]", print_hash_value);

    }
    transparent_crc(g_247, "g_247", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_251[i][j][k], "g_251[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
