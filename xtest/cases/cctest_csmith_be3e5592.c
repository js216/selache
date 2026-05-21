// SPDX-License-Identifier: MIT
// cctest_csmith_be3e5592.c --- cctest case csmith_be3e5592 (csmith seed 3191756178)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdb7c6eda */

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

// Options:   -s 3191756178 -o /tmp/csmith_gen_tl20jezs/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int8_t  f1;
   uint8_t  f2;
   const int16_t  f3;
   uint16_t  f4;
   int64_t  f5;
};

union U1 {
   int64_t  f0;
   int32_t  f1;
   uint32_t  f2;
};

union U2 {
   const uint32_t  f0;
   uint32_t  f1;
   int32_t  f2;
};


static int32_t g_3 = 0x6E58D020L;
static int32_t g_4[3] = {0xE677B568L,0xE677B568L,0xE677B568L};
static uint32_t g_44[3][4] = {{0x722525A5L,1UL,0x722525A5L,1UL},{0x722525A5L,1UL,1UL,0x722525A5L},{18446744073709551615UL,1UL,0x85B5F732L,1UL}};
static uint64_t g_67 = 0xCAE3649E8EE08A9CLL;
static uint64_t g_68 = 0x3638B4FD08915CC6LL;
static uint8_t g_69[3][2][4] = {{{0x65L,255UL,0x65L,255UL},{0x65L,255UL,0x65L,255UL}},{{0x65L,255UL,0x65L,255UL},{0x65L,255UL,0x65L,255UL}},{{0x65L,255UL,0x65L,255UL},{0x65L,255UL,0x65L,255UL}}};
static uint16_t g_75 = 0x58CEL;
static int16_t g_76[2] = {0xF526L,0xF526L};
static int32_t g_99 = (-3L);
static uint32_t g_141[1] = {4294967295UL};
static struct S0 g_144 = {4294967286UL,0xA9L,0UL,-3L,0xF423L,2L};
static uint64_t g_149 = 0x982017E6F66A9E61LL;
static union U1 g_152 = {0L};
static union U1 g_153[3] = {{-1L},{-1L},{-1L}};
static int64_t g_198 = 0xA86230F59ADD7983LL;
static uint64_t g_225 = 5UL;



static uint32_t  func_1(void);
static union U1  func_10(uint32_t  p_11, uint64_t  p_12, union U2  p_13);
static int32_t  func_18(uint16_t  p_19, int16_t  p_20, int8_t  p_21, uint8_t  p_22, uint8_t  p_23);
static union U2  func_24(uint32_t  p_25, int16_t  p_26);




static uint32_t  func_1(void)
{ 
    union U1 l_2[2][2] = {{{0x40FC0272A7275995LL},{0x40FC0272A7275995LL}},{{0x40FC0272A7275995LL},{0x40FC0272A7275995LL}}};
    int32_t l_158[5][1][5] = {{{0x0A9E87E3L,(-5L),(-5L),0x0A9E87E3L,0L}},{{0x0A9E87E3L,0x88135523L,1L,1L,0x88135523L}},{{0L,(-5L),1L,0x244BBC70L,0x244BBC70L}},{{(-5L),0L,(-5L),1L,0x244BBC70L}},{{0x88135523L,0x0A9E87E3L,0x244BBC70L,0x0A9E87E3L,0x88135523L}}};
    uint64_t l_190 = 9UL;
    int8_t l_192[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_192[i] = (-1L);
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { 
        uint16_t l_9 = 0x4F88L;
        int32_t l_191 = 0x2F756BAAL;
        union U1 l_194 = {0x049C42DECD23E7C5LL};
        uint8_t l_202[4][4] = {{0x60L,0x60L,1UL,0x6CL},{0x27L,0x5EL,0x27L,1UL},{0x27L,1UL,1UL,0x27L},{0x60L,1UL,0x6CL,1UL}};
        int i, j;
        for (g_4[0] = 0; (g_4[0] <= 1); g_4[0] += 1)
        { 
            int64_t l_14 = 1L;
            union U2 l_15 = {1UL};
            int32_t l_154[5][2][4] = {{{0xE3CAE63CL,0x2F6125DDL,0xE3CAE63CL,0L},{5L,0x2F6125DDL,0x531B7E96L,0L}},{{0x2F6125DDL,0xE9F4FA42L,0xE9F4FA42L,0x2F6125DDL},{0xE3CAE63CL,0L,0xE9F4FA42L,0L}},{{0x2F6125DDL,5L,0x531B7E96L,5L},{5L,0xE9F4FA42L,0xE3CAE63CL,5L}},{{0xE3CAE63CL,5L,0L,0L},{0L,0L,0x531B7E96L,0x2F6125DDL}},{{0L,0xE9F4FA42L,0L,0L},{0xE3CAE63CL,0x2F6125DDL,0xE3CAE63CL,0L}}};
            int32_t l_155[1][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_155[i][j] = 0xA2F6955CL;
            }
            l_155[0][0] = (safe_div_func_int16_t_s_s((l_154[2][1][3] = ((0x4D03L > (safe_sub_func_int8_t_s_s((l_9 >= g_3), ((g_153[0] = (g_152 = (l_2[g_3][g_4[0]] = func_10(g_4[0], l_14, l_15)))) , g_4[2])))) <= 0UL)), (-4L)));
            for (g_99 = 0; (g_99 > 7); g_99++)
            { 
                uint32_t l_159 = 4294967295UL;
                g_153[0].f1 |= 4L;
                ++l_159;
                g_153[0].f1 = g_4[0];
            }
        }
        if ((safe_add_func_uint32_t_u_u((((0x4CAB455570B09ED6LL & g_4[0]) & 0x7BL) >= ((((safe_div_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(0x8424L, l_9)) < 0x59L), g_99)) && (-1L)) | g_69[0][0][2]) & 0xA1L)), g_144.f3)))
        { 
            int32_t l_171 = 9L;
            g_4[0] = (((!g_4[0]) <= ((g_149 = 9UL) == 0x292AD2651A99610ALL)) > (g_152.f0 = ((safe_lshift_func_uint8_t_u_u(((((((0xE75D9F9298E093FELL & g_144.f2) == l_9) == l_158[0][0][0]) ^ 0x527A06FA74B5D444LL) && g_144.f0) < g_153[0].f1), g_76[1])) ^ 65530UL)));
            l_171 = (-1L);
            if (l_9)
                continue;
        }
        else
        { 
            int32_t l_184 = 0xFB6E159CL;
            uint64_t l_185 = 0UL;
            int32_t l_201 = 1L;
            int64_t l_213 = 0xD237605CBCC48F9FLL;
            uint32_t l_224 = 0x533DA5EFL;
            if (((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((g_144.f2 ^ ((safe_sub_func_uint64_t_u_u(((safe_add_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(l_184, 5)), ((l_191 = (l_185 < ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(0x7943L, 12)), l_190)) || l_158[0][0][0]))) >= g_153[0].f1))) <= l_158[1][0][1]) ^ g_75), l_190)) & g_68), l_185)) | g_153[0].f2)), l_192[0])), g_144.f5)) && l_9))
            { 
                int8_t l_193 = (-1L);
                int32_t l_199 = 1L;
                int32_t l_200 = (-1L);
                l_193 = l_9;
                l_200 = (l_199 = (l_194 , ((g_198 ^= (safe_unary_minus_func_int8_t_s(((safe_add_func_uint16_t_u_u((((-3L) >= g_144.f0) > (g_76[0] = g_69[0][0][2])), g_152.f1)) <= g_69[0][0][0])))) , 1L)));
            }
            else
            { 
                l_202[0][2]--;
                if (l_192[1])
                    continue;
                l_201 &= (((safe_mod_func_int32_t_s_s((-1L), 0x4616CE41L)) && (safe_add_func_uint16_t_u_u((g_75 &= 0x9B32L), (l_158[0][0][0] = ((safe_div_func_int8_t_s_s(1L, l_192[0])) && 0UL))))) , 0xF9EDCDB7L);
            }
            if (((safe_add_func_int8_t_s_s((-1L), l_213)) || (g_144.f0 == (safe_add_func_uint32_t_u_u(((l_194.f1 |= l_213) >= (-5L)), l_9)))))
            { 
                uint8_t l_217 = 0x0EL;
                l_217 = (+0x723CL);
            }
            else
            { 
                if (l_194.f1)
                    break;
            }
            g_152.f1 ^= (((g_76[1] < ((g_144.f2 = (g_69[0][0][2] = ((safe_mod_func_int32_t_s_s((l_201 = (((g_69[0][0][2] || 250UL) == (((((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((g_144 , g_141[0]), l_194.f1)) , g_144.f1), 15)) | l_192[0]) <= l_224) & g_144.f5) != 6UL)) ^ g_225)), l_192[0])) >= 0xA9A72296L))) <= g_4[0])) , g_144.f5) ^ g_75);
        }
    }
    return g_225;
}



static union U1  func_10(uint32_t  p_11, uint64_t  p_12, union U2  p_13)
{ 
    uint64_t l_27 = 0x6695CD1D2A6F9A4DLL;
    struct S0 l_28 = {2UL,0x48L,250UL,0L,8UL,0x4E7F13BCF59F89F2LL};
    int32_t l_150 = 0xB7B902C6L;
    union U1 l_151 = {-1L};
    l_150 = (safe_add_func_int32_t_s_s(func_18((func_24(((((l_27 & (l_28 , p_13.f2)) != (((safe_add_func_int16_t_s_s(p_12, l_28.f2)) && 0x73E70D28L) < l_28.f0)) || 0x433C8A0C09020024LL) ^ 1L), g_3) , 0xC8E4L), p_12, p_13.f2, g_3, g_4[2]), p_11));
    return l_151;
}



static int32_t  func_18(uint16_t  p_19, int16_t  p_20, int8_t  p_21, uint8_t  p_22, uint8_t  p_23)
{ 
    int32_t l_42 = 0x9D28BC13L;
    int16_t l_62 = 0x153DL;
    int64_t l_70 = 0x16D0A58DE384C7D0LL;
    int32_t l_103 = (-3L);
    struct S0 l_127 = {8UL,1L,0x92L,0x6408L,0x8D0EL,0x497F94F023CA64ADLL};
    for (p_19 = (-23); (p_19 == 39); p_19 = safe_add_func_uint8_t_u_u(p_19, 9))
    { 
        int64_t l_43[5][1] = {{(-4L)},{(-1L)},{(-4L)},{(-1L)},{(-4L)}};
        uint64_t l_95 = 0x53FEA944068BD6B8LL;
        int32_t l_96 = 0xA1E7967BL;
        int i, j;
        if ((safe_add_func_int32_t_s_s((g_44[1][3] &= (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((g_4[0] , (((safe_rshift_func_uint16_t_u_u(g_4[0], (l_42 | (((l_43[0][0] | 0xFB38A83A56CF6D70LL) == g_4[0]) , g_3)))) ^ 0xB1ED3090L) || g_4[0])), p_21)) || l_43[0][0]), p_19))), 7UL)))
        { 
            int64_t l_71 = (-2L);
            int32_t l_72 = (-1L);
            if ((+(safe_lshift_func_int8_t_s_s(p_19, (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(0L, p_21)), p_20))))))
            { 
                int64_t l_66 = 2L;
                l_72 = (safe_sub_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((l_71 = (safe_mod_func_uint64_t_u_u((p_19 , (safe_mod_func_uint16_t_u_u(((g_69[0][0][2] = (safe_mul_func_int16_t_s_s((4294967292UL < l_62), (((g_68 = (+(g_67 = (safe_rshift_func_int8_t_s_s((p_21 = l_66), g_44[1][1]))))) ^ 0L) | l_42)))) >= l_70), 0xABB2L))), 0x9E1B0F05BA845DB3LL))), 0xE2L)) | 0xA0C8L), g_4[1]));
            }
            else
            { 
                l_72 = p_23;
            }
        }
        else
        { 
            uint32_t l_77 = 0x6E2AFE58L;
            if ((g_69[0][0][2] , (-1L)))
            { 
                g_75 ^= ((safe_mod_func_int64_t_s_s((5L && (-1L)), g_68)) || 0x75L);
                return p_22;
            }
            else
            { 
                g_76[1] = p_23;
            }
            l_96 = (l_77 >= (safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((p_20 = (0x298B4A01L == (((safe_mod_func_uint8_t_u_u((g_69[0][0][2] , (safe_lshift_func_int16_t_s_u(((~(safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s(((0xA25CL > p_19) && p_22), 0)) ^ l_43[4][0]) > 0xEBL), g_4[0])), 0xA677L))) && 0UL), 15))), l_95)) ^ p_23) < g_67))), 4)), g_3)) , 0x63L), p_22)));
        }
        for (g_68 = 0; (g_68 < 60); g_68 = safe_add_func_uint64_t_u_u(g_68, 4))
        { 
            uint8_t l_100 = 0UL;
            int32_t l_107 = 0x79EC616AL;
            int32_t l_108 = (-1L);
            int32_t l_109 = 0x7D506DC7L;
            l_100++;
            if (g_75)
            { 
                uint32_t l_104 = 0xE7BEB33EL;
                --l_104;
            }
            else
            { 
                uint8_t l_110 = 5UL;
                --l_110;
                l_96 = (p_23 < (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((l_42 |= ((-10L) != l_43[0][0])) , (p_20 ^ l_43[3][0])), p_23)), 0x10L)));
            }
            l_96 ^= ((safe_unary_minus_func_int64_t_s((((0xAA845225C753BB74LL >= l_95) != g_67) | (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((p_21 = ((safe_div_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(g_76[0], l_107)) || l_109) == 18446744073709551611UL), l_95)) || l_103)), g_99)), (-1L)))))) | l_103);
        }
    }
    if ((255UL < g_69[2][1][3]))
    { 
        union U1 l_126 = {0x74881ACCAB448763LL};
        g_99 = (l_126 , ((l_127 , 1UL) | p_21));
        if (((safe_sub_func_uint32_t_u_u((((l_126.f1 = ((safe_rshift_func_int8_t_s_s((((safe_add_func_int64_t_s_s(7L, ((safe_add_func_int64_t_s_s((l_103 |= g_69[1][1][1]), (safe_mul_func_uint16_t_u_u((p_19 , (((0xEC31A1128F678E9ALL >= 0x1CA18E4F1F3A62AELL) != g_68) , p_20)), g_75)))) <= 0xF5847FBBL))) | g_4[0]) <= p_23), 2)) >= p_19)) , g_69[1][1][2]) != g_75), g_69[2][1][3])) , 0x06111E29L))
        { 
            uint32_t l_138 = 0x4B528247L;
            l_138 = g_75;
            for (g_68 = 24; (g_68 > 38); g_68 = safe_add_func_int32_t_s_s(g_68, 1))
            { 
                g_141[0]--;
            }
        }
        else
        { 
            g_149 = (g_99 = ((g_144 , (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(p_22, 11)), g_4[0]))) | g_76[1]));
        }
    }
    else
    { 
        return l_70;
    }
    l_103 = l_42;
    return p_19;
}



static union U2  func_24(uint32_t  p_25, int16_t  p_26)
{ 
    union U2 l_31 = {0x5A60C437L};
    return l_31;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_44[i][j], "g_44[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_69[i][j][k], "g_69[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_76[i], "g_76[i]", print_hash_value);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_144.f0, "g_144.f0", print_hash_value);
    transparent_crc(g_144.f1, "g_144.f1", print_hash_value);
    transparent_crc(g_144.f2, "g_144.f2", print_hash_value);
    transparent_crc(g_144.f3, "g_144.f3", print_hash_value);
    transparent_crc(g_144.f4, "g_144.f4", print_hash_value);
    transparent_crc(g_144.f5, "g_144.f5", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_152.f1, "g_152.f1", print_hash_value);
    transparent_crc(g_152.f2, "g_152.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_153[i].f1, "g_153[i].f1", print_hash_value);
        transparent_crc(g_153[i].f2, "g_153[i].f2", print_hash_value);

    }
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
