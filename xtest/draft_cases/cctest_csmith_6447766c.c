// SPDX-License-Identifier: MIT
// cctest_csmith_6447766c.c --- cctest case csmith_6447766c (csmith seed 1682404972)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4350b818 */

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

// Options:   -s 1682404972 -o /tmp/csmith_gen_7370fvga/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint16_t  f0;
   int16_t  f1;
   int32_t  f2;
   signed f3 : 16;
   const int8_t  f4;
   uint64_t  f5;
   signed f6 : 6;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const uint32_t  f0;
   const int32_t  f1;
   int8_t  f2;
   signed f3 : 20;
   uint32_t  f4;
   uint64_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   unsigned f0 : 13;
   uint64_t  f1;
   int16_t  f2;
   const uint16_t  f3;
   struct S0  f4;
};
#pragma pack(pop)

union U3 {
   uint16_t  f0;
};


static int32_t g_2 = (-9L);
static int32_t g_4 = 0x310FECAFL;
static int32_t g_15[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static int8_t g_24 = 3L;
static struct S1 g_56 = {6UL,1L,-1L,392,0xD571B4D0L,18446744073709551611UL};
static int16_t g_66 = (-9L);
static int32_t *g_74 = (void*)0;
static uint64_t g_84[7][4][3] = {{{18446744073709551615UL,0UL,0UL},{0x964CB199FC800275LL,18446744073709551611UL,0x964CB199FC800275LL},{0x964CB199FC800275LL,18446744073709551615UL,18446744073709551611UL},{18446744073709551615UL,0x964CB199FC800275LL,0x964CB199FC800275LL}},{{18446744073709551611UL,0x964CB199FC800275LL,0UL},{0UL,18446744073709551615UL,0x49AA0F805AAA48D7LL},{18446744073709551611UL,18446744073709551611UL,0x49AA0F805AAA48D7LL},{18446744073709551615UL,0UL,0UL}},{{0x964CB199FC800275LL,18446744073709551611UL,0x964CB199FC800275LL},{0x964CB199FC800275LL,18446744073709551615UL,18446744073709551611UL},{18446744073709551615UL,0x964CB199FC800275LL,0x964CB199FC800275LL},{18446744073709551611UL,0x964CB199FC800275LL,0UL}},{{0UL,18446744073709551615UL,0x49AA0F805AAA48D7LL},{18446744073709551611UL,18446744073709551611UL,18446744073709551611UL},{0x964CB199FC800275LL,0UL,0x49AA0F805AAA48D7LL},{0UL,0x33BC337E5C358597LL,0UL}},{{0UL,0x964CB199FC800275LL,0x33BC337E5C358597LL},{0x964CB199FC800275LL,0UL,0UL},{0x33BC337E5C358597LL,0UL,0x49AA0F805AAA48D7LL},{0UL,0x964CB199FC800275LL,18446744073709551611UL}},{{0x33BC337E5C358597LL,0x33BC337E5C358597LL,18446744073709551611UL},{0x964CB199FC800275LL,0UL,0x49AA0F805AAA48D7LL},{0UL,0x33BC337E5C358597LL,0UL},{0UL,0x964CB199FC800275LL,0x33BC337E5C358597LL}},{{0x964CB199FC800275LL,0UL,0UL},{0x33BC337E5C358597LL,0UL,0x49AA0F805AAA48D7LL},{0UL,0x964CB199FC800275LL,18446744073709551611UL},{0x33BC337E5C358597LL,0x33BC337E5C358597LL,18446744073709551611UL}}};
static uint16_t g_96 = 65526UL;
static int16_t g_98 = 0L;
static int8_t g_107[4][3] = {{0xC1L,0L,0xC1L},{0x89L,0x89L,0x89L},{0xC1L,0L,0xC1L},{0x89L,0x89L,0x89L}};
static int8_t *g_134 = &g_24;
static int8_t **g_133 = &g_134;
static struct S1 *g_200 = &g_56;
static struct S1 **g_199 = &g_200;
static union U3 g_210 = {65535UL};
static int64_t g_224 = 1L;
static int64_t *g_223 = &g_224;
static const struct S2 g_269 = {78,0x2A3C25BD731839F9LL,1L,65535UL,{65526UL,1L,2L,26,0L,1UL,-1}};
static uint32_t g_298 = 6UL;
static int64_t g_306 = 1L;
static uint8_t g_308 = 255UL;
static uint8_t *g_348 = &g_308;
static uint8_t **g_347[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint8_t g_388[2] = {1UL,1UL};
static struct S1 ***g_396 = &g_199;
static struct S1 ****g_395 = &g_396;
static uint8_t g_417 = 1UL;
static const struct S1 g_435 = {4294967294UL,1L,-2L,-733,2UL,0x3B653CF7F9D40536LL};
static uint32_t g_439[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
static const struct S1 *g_588[5][4][4] = {{{&g_56,&g_56,&g_435,&g_435},{&g_56,&g_435,&g_56,&g_56},{&g_56,&g_435,&g_435,&g_56},{&g_56,&g_56,&g_435,&g_435}},{{&g_56,&g_435,&g_56,&g_56},{&g_56,&g_56,&g_435,&g_56},{&g_56,&g_435,&g_56,&g_435},{&g_56,&g_56,&g_56,&g_56}},{{&g_56,&g_435,&g_435,&g_56},{&g_435,&g_435,&g_435,&g_435},{&g_56,&g_56,&g_56,&g_56},{&g_56,&g_435,&g_56,&g_56}},{{&g_56,&g_56,&g_435,&g_56},{&g_56,&g_56,&g_56,&g_56},{&g_56,&g_435,&g_435,&g_56},{&g_56,&g_56,&g_435,&g_435}},{{&g_56,&g_435,&g_56,&g_56},{&g_56,&g_435,&g_435,&g_56},{&g_56,&g_56,&g_435,&g_435},{&g_56,&g_435,&g_56,&g_56}}};
static const struct S1 **g_587 = &g_588[2][1][3];
static const struct S1 ***g_586 = &g_587;
static struct S1 *****g_595 = &g_395;
static const int64_t *g_638 = &g_224;
static const int64_t **g_637 = &g_638;
static const int64_t ***g_636 = &g_637;
static uint8_t g_657 = 0xBEL;
static uint8_t g_658 = 255UL;
static uint8_t g_659 = 0UL;
static uint8_t g_660 = 0xC6L;
static uint8_t g_661[3] = {0xE8L,0xE8L,0xE8L};
static uint8_t g_662 = 0x2AL;
static uint8_t * const g_656[5][4] = {{&g_660,&g_658,&g_660,&g_658},{&g_660,&g_658,&g_660,&g_658},{&g_660,&g_658,&g_660,&g_658},{&g_660,&g_658,&g_660,&g_658},{&g_660,&g_658,&g_660,&g_658}};
static uint8_t * const * const g_655 = &g_656[1][2];
static uint8_t * const * const *g_654 = &g_655;
static uint64_t *g_759 = &g_56.f5;
static union U3 g_808 = {65535UL};
static uint16_t *g_870[6] = {&g_96,&g_96,&g_96,&g_96,&g_96,&g_96};
static uint16_t **g_869 = &g_870[0];
static const int32_t *g_890 = (void*)0;
static int16_t g_916 = (-1L);
static const int64_t ****g_979 = &g_636;
static const int64_t *****g_978 = &g_979;
static uint32_t g_996 = 0x9C79F3FDL;
static uint8_t ***g_1069 = &g_347[3];
static uint8_t ****g_1068 = &g_1069;
static struct S1 * const * const g_1109 = &g_200;
static struct S1 * const * const *g_1108 = &g_1109;
static int32_t **g_1116 = &g_74;
static struct S0 *g_1140 = (void*)0;
static int64_t g_1172 = 1L;
static uint16_t g_1222 = 0xACDEL;
static struct S2 *g_1272[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int8_t ***g_1289 = &g_133;
static int8_t ****g_1288[6] = {&g_1289,&g_1289,&g_1289,&g_1289,&g_1289,&g_1289};
static int8_t *****g_1287 = &g_1288[3];
static struct S1 g_1371 = {4294967295UL,0xF0AF9071L,0L,-986,0xE730D40EL,0x11C420E703C8D62CLL};
static int32_t g_1408[5] = {0x78185459L,0x78185459L,0x78185459L,0x78185459L,0x78185459L};
static int16_t g_1462 = (-1L);
static int64_t **g_1499 = &g_223;
static int64_t ***g_1498 = &g_1499;
static struct S1 g_1516[5] = {{0x7FA3DF55L,0x1119FEE3L,0x64L,875,4294967294UL,0xB7872870C9C7638ELL},{0x7FA3DF55L,0x1119FEE3L,0x64L,875,4294967294UL,0xB7872870C9C7638ELL},{0x7FA3DF55L,0x1119FEE3L,0x64L,875,4294967294UL,0xB7872870C9C7638ELL},{0x7FA3DF55L,0x1119FEE3L,0x64L,875,4294967294UL,0xB7872870C9C7638ELL},{0x7FA3DF55L,0x1119FEE3L,0x64L,875,4294967294UL,0xB7872870C9C7638ELL}};
static uint64_t **g_1518 = (void*)0;
static uint64_t ***g_1517 = &g_1518;
static union U3 *g_1573 = (void*)0;
static union U3 **g_1572 = &g_1573;
static union U3 ***g_1571 = &g_1572;
static uint16_t g_1579 = 0x9F5AL;
static int64_t g_1606 = 1L;
static int32_t g_1655[7][4] = {{0L,0xA19DA9FDL,0L,0L},{0xA19DA9FDL,0xA19DA9FDL,(-1L),0xA19DA9FDL},{0xA19DA9FDL,0L,0L,0xA19DA9FDL},{0L,0xA19DA9FDL,0L,0L},{0xA19DA9FDL,0xA19DA9FDL,(-1L),0xA19DA9FDL},{0xA19DA9FDL,0L,0L,0xA19DA9FDL},{0L,0xA19DA9FDL,0L,0L}};
static int32_t * const g_1654[6] = {&g_1655[3][2],&g_1655[3][2],&g_1655[3][2],&g_1655[3][2],&g_1655[3][2],&g_1655[3][2]};
static int32_t * const *g_1653 = &g_1654[4];
static int32_t * const **g_1652[7][3] = {{&g_1653,&g_1653,&g_1653},{&g_1653,&g_1653,&g_1653},{&g_1653,&g_1653,&g_1653},{&g_1653,&g_1653,&g_1653},{&g_1653,&g_1653,&g_1653},{&g_1653,&g_1653,&g_1653},{&g_1653,&g_1653,&g_1653}};
static struct S0 **g_1781 = &g_1140;
static uint32_t g_1805 = 0x22DECBB8L;



static int64_t  func_1(void);
static int32_t  func_6(int32_t * p_7, int32_t  p_8, int8_t  p_9, struct S2  p_10);
static int32_t  func_11(int32_t  p_12);
static uint8_t  func_28(int8_t  p_29);
static int8_t  func_30(uint8_t  p_31, int64_t  p_32, int32_t * p_33, int32_t * p_34);
static uint32_t  func_35(int32_t  p_36, int64_t  p_37);
static struct S1  func_46(int8_t * p_47, uint32_t  p_48, const int32_t * p_49);
static int8_t * func_50(struct S1  p_51, int32_t  p_52, int32_t * p_53, int32_t  p_54, int32_t * p_55);




static int64_t  func_1(void)
{ 
    int32_t *l_3 = &g_4;
    union U3 l_5[3] = {{0x3E05L},{0x3E05L},{0x3E05L}};
    struct S2 l_1746 = {4,0UL,-6L,0xE14BL,{0x3172L,6L,0L,-44,-1L,1UL,5}};
    const int32_t l_1777 = 0x1737DBFCL;
    uint32_t l_1785[4];
    int32_t l_1803 = 0xB634F72AL;
    int16_t l_1829 = (-1L);
    int i;
    for (i = 0; i < 4; i++)
        l_1785[i] = 18446744073709551613UL;
    (*l_3) ^= g_2;
    for (g_2 = 2; (g_2 >= 0); g_2 -= 1)
    { 
        uint32_t l_13 = 0UL;
        int32_t l_1763 = 1L;
        int32_t l_1765 = 0L;
        int32_t l_1767 = 0L;
        int32_t l_1768 = 1L;
        int8_t l_1782 = (-1L);
        uint16_t l_1791 = 5UL;
        uint8_t l_1798 = 255UL;
        uint64_t l_1800 = 0x43A055B8C20692CDLL;
        int8_t l_1802 = 0x14L;
        int8_t *l_1828[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1828[i] = &g_1516[1].f2;
        for (g_4 = 2; (g_4 >= 0); g_4 -= 1)
        { 
            int32_t **l_1584 = &l_3;
            int32_t ***l_1585 = &l_1584;
            int32_t l_1590[1][4][7] = {{{5L,5L,5L,5L,5L,5L,5L},{0xF66E07C1L,0xF66E07C1L,0xF66E07C1L,0xF66E07C1L,0xF66E07C1L,0xF66E07C1L,0xF66E07C1L},{5L,5L,5L,5L,5L,5L,5L},{0xF66E07C1L,0xF66E07C1L,0xF66E07C1L,0xF66E07C1L,0xF66E07C1L,0xF66E07C1L,0xF66E07C1L}}};
            uint16_t l_1591 = 0x88CDL;
            int8_t *l_1592 = &g_56.f2;
            struct S2 l_1593[2] = {{41,0x6F738FF0E6737981LL,0x0DE5L,65535UL,{0x61DAL,0xA5AFL,0xD9281894L,-187,0L,0x079485704C77A45BLL,-7}},{41,0x6F738FF0E6737981LL,0x0DE5L,65535UL,{0x61DAL,0xA5AFL,0xD9281894L,-187,0L,0x079485704C77A45BLL,-7}}};
            uint64_t l_1769 = 0x487181A693960B57LL;
            int64_t * const l_1772 = &g_306;
            int8_t l_1799 = 1L;
            int i, j, k;
            if (func_6(&g_4, func_11(l_13), (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((*l_1592) = ((&l_3 != ((*l_1585) = l_1584)) > (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_1590[0][3][3], ((1UL < l_1591) || l_13))), l_13)))), 3)), g_56.f1)), l_1593[0]))
            { 
                for (g_657 = 0; (g_657 <= 2); g_657 += 1)
                { 
                    uint8_t *****l_1747[3][4] = {{&g_1068,&g_1068,&g_1068,&g_1068},{&g_1068,&g_1068,&g_1068,&g_1068},{&g_1068,&g_1068,&g_1068,&g_1068}};
                    int16_t *l_1748 = &g_1462;
                    uint64_t l_1749 = 0UL;
                    int32_t **l_1750 = (void*)0;
                    int32_t **l_1751[2][6][7] = {{{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&l_3,&g_74,&g_74},{(void*)0,&g_74,&g_74,&l_3,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&l_3,&g_74,&g_74},{(void*)0,&g_74,&g_74,&l_3,&g_74,&g_74,&g_74}},{{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&l_3,&g_74,&g_74},{(void*)0,&g_74,&g_74,&l_3,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74},{&g_74,&g_74,&g_74,&g_74,&l_3,&g_74,&g_74},{(void*)0,&g_74,&g_74,&l_3,(void*)0,(void*)0,&l_3}}};
                    int32_t **l_1752[2];
                    int32_t **l_1753 = (void*)0;
                    int32_t **l_1754 = &l_3;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1752[i] = (void*)0;
                }
            }
            else
            { 
                uint8_t l_1760[3];
                int64_t l_1764 = (-5L);
                int32_t l_1766 = 0xA1A2BD39L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1760[i] = 0UL;
                for (g_1371.f2 = 2; (g_1371.f2 >= 0); g_1371.f2 -= 1)
                { 
                    int i, j, k;
                    (*g_1116) = l_3;
                    if (g_84[(g_4 + 2)][(g_1371.f2 + 1)][g_4])
                        continue;
                }
                (*l_1584) = (*g_1116);
                for (l_1746.f4.f0 = 0; (l_1746.f4.f0 <= 2); l_1746.f4.f0 += 1)
                { 
                    int32_t *l_1755 = (void*)0;
                    int32_t *l_1756 = &l_1590[0][3][3];
                    int32_t *l_1757 = &l_1746.f4.f2;
                    int32_t *l_1758 = &l_1746.f4.f2;
                    int32_t *l_1759[3][2] = {{(void*)0,(void*)0},{&g_15[2],(void*)0},{(void*)0,&g_15[2]}};
                    int i, j;
                    --l_1760[1];
                    l_1769--;
                    (*l_1757) = (((3L >= (l_1772 != &l_1764)) | l_1766) > (safe_mul_func_uint8_t_u_u(l_1760[1], ((safe_rshift_func_uint16_t_u_u(l_1777, (((safe_lshift_func_int16_t_s_s(g_916, g_15[2])) != (**g_637)) == 0x1B2ABB48L))) == 0xB177L))));
                    if (l_1760[1])
                        continue;
                }
            }
            for (g_662 = 0; (g_662 <= 4); g_662 += 1)
            { 
                int32_t *l_1783 = &l_1590[0][3][3];
                int32_t *l_1784[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1784[i] = &g_15[2];
                for (g_657 = 0; (g_657 <= 0); g_657 += 1)
                { 
                    int64_t l_1780[7][2];
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1780[i][j] = 0xD539C24B5B1AA362LL;
                    }
                    if (l_1780[3][1])
                        break;
                }
                for (g_916 = 0; (g_916 <= 4); g_916 += 1)
                { 
                    g_1781 = (void*)0;
                }
                l_1785[0]--;
                if (l_13)
                { 
                    int32_t l_1790 = (-1L);
                    uint32_t *l_1794[7][3] = {{&l_1785[2],&l_1785[2],&l_1785[2]},{&g_298,(void*)0,&g_298},{&l_1785[2],&l_1785[2],&l_1785[2]},{&g_298,(void*)0,&g_298},{&l_1785[2],&l_1785[2],&l_1785[2]},{&g_298,(void*)0,&g_298},{&l_1785[2],&l_1785[2],&l_1785[2]}};
                    int32_t l_1795 = 0x2F9E185CL;
                    int16_t l_1801 = 0x189DL;
                    int32_t l_1804[6];
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_1804[i] = 8L;
                    l_1800 = (((0xED6DE1DB31833B34LL <= (((safe_mod_func_uint8_t_u_u(246UL, l_1790)) <= l_1791) != (safe_rshift_func_uint16_t_u_u((l_1790 < ((((l_1795 |= g_56.f4) , (+((((safe_unary_minus_func_int32_t_s((((*l_1783) && 0UL) != (-3L)))) >= 0xEA55EF7DL) & 7L) || l_1798))) == l_1799) >= (**g_133))), 11)))) && l_1798) , 0xBD273D77L);
                    if ((**g_1653))
                        break;
                    (**g_1653) = (*l_1783);
                    g_1805++;
                }
                else
                { 
                    return (**g_1499);
                }
            }
        }
        (**g_1653) ^= (safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u(((*g_759) | (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((**g_869) &= ((safe_div_func_uint64_t_u_u((((*****g_595) , 0x3800L) >= (safe_sub_func_int8_t_s_s(((***g_1289) = l_1767), (((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_1803, g_1371.f5)), (l_1746.f4.f6 ^= ((***g_586) , l_1777)))) < l_1829) <= l_1746.f1)))), 4L)) & 0x1A4FL)), 13)), g_1606))), l_1768)) ^ l_1802) != 0xCD3D779CL), l_1798)), l_1798)), (*g_348)));
    }
    return l_1746.f4.f3;
}



static int32_t  func_6(int32_t * p_7, int32_t  p_8, int8_t  p_9, struct S2  p_10)
{ 
    int16_t l_1596 = 4L;
    int16_t *l_1600 = &g_98;
    int16_t **l_1599[5][2][5] = {{{(void*)0,&l_1600,(void*)0,(void*)0,(void*)0},{&l_1600,&l_1600,&l_1600,(void*)0,&l_1600}},{{&l_1600,(void*)0,&l_1600,(void*)0,&l_1600},{&l_1600,(void*)0,&l_1600,&l_1600,&l_1600}},{{(void*)0,(void*)0,(void*)0,&l_1600,(void*)0},{&l_1600,&l_1600,(void*)0,(void*)0,&l_1600}},{{&l_1600,&l_1600,&l_1600,&l_1600,&l_1600},{&l_1600,(void*)0,(void*)0,&l_1600,&l_1600}},{{(void*)0,&l_1600,(void*)0,(void*)0,(void*)0},{&l_1600,&l_1600,&l_1600,(void*)0,&l_1600}}};
    int32_t l_1631 = 0xC95B3BBAL;
    const uint8_t *l_1684[2][2] = {{&g_661[2],&g_661[2]},{&g_661[2],&g_661[2]}};
    const uint8_t ** const l_1683 = &l_1684[1][0];
    const uint8_t ** const *l_1682[1];
    int32_t l_1698 = 0L;
    int64_t l_1708 = 0x381ADB92DBB20977LL;
    int8_t l_1739 = 6L;
    struct S0 *l_1740 = (void*)0;
    struct S0 **l_1741 = (void*)0;
    struct S0 **l_1742 = &g_1140;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1682[i] = &l_1683;
lbl_1709:
    for (g_224 = 5; (g_224 >= 0); g_224 -= 1)
    { 
        uint16_t l_1602 = 65535UL;
        union U3 l_1611 = {0xD173L};
        for (p_8 = 5; (p_8 >= 0); p_8 -= 1)
        { 
            uint64_t l_1601 = 0xFA82CB353A728E7ALL;
            int32_t *l_1603[7];
            uint64_t ***l_1612[6] = {&g_1518,&g_1518,&g_1518,&g_1518,&g_1518,&g_1518};
            int i;
            for (i = 0; i < 7; i++)
                l_1603[i] = (void*)0;
            if ((*p_7))
                break;
            g_56.f3 = (safe_mul_func_int8_t_s_s((l_1602 = (l_1596 ^ ((*g_759) , (g_15[0] = ((safe_add_func_int32_t_s_s((p_10.f4.f2 &= ((((((((*****g_1287) = (***g_1289)) == l_1596) <= 0x9DL) ^ ((void*)0 != l_1599[2][1][0])) || l_1601) != l_1601) , (*p_7))), 0x628CB3D3L)) != (*g_759)))))), 0x56L));
            g_15[2] &= (safe_lshift_func_uint16_t_u_s(g_1606, (safe_mod_func_int64_t_s_s((((-6L) ^ ((***g_1289) |= (safe_add_func_uint8_t_u_u(((l_1611 , &g_1518) == l_1612[1]), l_1611.f0)))) > p_10.f4.f5), l_1596))));
            (*g_1116) = l_1603[3];
            if ((*p_7))
                continue;
        }
        return l_1602;
    }
    for (g_66 = 6; (g_66 >= 12); g_66 = safe_add_func_int8_t_s_s(g_66, 3))
    { 
        int8_t **** const *l_1623 = &g_1288[0];
        int32_t l_1624 = 0xB7D926C0L;
        int32_t ***l_1668 = (void*)0;
        struct S1 l_1721 = {1UL,0L,0xD1L,476,4294967294UL,0xEA15F42CC865D17ELL};
        if ((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((l_1596 > 8UL), (((*g_759) = (safe_lshift_func_int16_t_s_u(((((*p_7) , (((p_10.f4.f0 , l_1623) == &g_1288[3]) > 250UL)) ^ p_10.f0) < l_1624), p_10.f3))) && p_8))), p_10.f4.f4)), 1L)))
        { 
            if ((*p_7))
                break;
        }
        else
        { 
            uint8_t **l_1630 = &g_348;
            int32_t l_1644 = 0x01502879L;
            int32_t l_1660[4][2][2] = {{{0xF3F0F4B0L,0L},{0xA64871F7L,0L}},{{0xF3F0F4B0L,0L},{0xA64871F7L,0L}},{{0xF3F0F4B0L,0L},{0xA64871F7L,0L}},{{0xF3F0F4B0L,0L},{0xA64871F7L,0L}}};
            int32_t ***l_1666 = &g_1116;
            uint64_t l_1701[3][6];
            struct S1 *****l_1726 = &g_395;
            int32_t *l_1729 = &l_1631;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1701[i][j] = 0x47539E8DD0441FA9LL;
            }
            for (g_308 = 0; (g_308 == 43); ++g_308)
            { 
                int32_t ***l_1659 = (void*)0;
                int8_t **l_1662 = &g_134;
                int64_t l_1671 = 0x852A7E7240F4A61ELL;
                if (l_1596)
                { 
                    uint8_t *l_1629 = &g_657;
                    int32_t l_1638[1];
                    uint8_t *l_1643[5][7][5] = {{{&g_388[1],&g_658,(void*)0,&g_388[1],&g_388[1]},{(void*)0,(void*)0,&g_388[0],&g_308,&g_658},{&g_388[1],&g_658,(void*)0,(void*)0,(void*)0},{(void*)0,&g_308,&g_388[1],&g_388[1],&g_660},{&g_388[1],&g_659,&g_308,&g_308,&g_308},{&g_308,&g_388[1],&g_658,(void*)0,&g_658},{&g_388[0],&g_660,(void*)0,&g_660,&g_661[1]}},{{&g_308,&g_388[1],(void*)0,&g_660,&g_308},{&g_658,&g_308,(void*)0,(void*)0,(void*)0},{&g_658,&g_662,&g_308,&g_308,(void*)0},{&g_662,&g_662,&g_388[1],&g_388[1],&g_662},{&g_388[1],&g_417,&g_388[0],(void*)0,&g_308},{&g_659,(void*)0,&g_388[1],&g_308,&g_661[2]},{(void*)0,(void*)0,&g_662,&g_388[1],&g_388[1]}},{{&g_659,(void*)0,(void*)0,&g_308,(void*)0},{&g_388[1],&g_662,(void*)0,(void*)0,&g_660},{&g_662,&g_388[1],&g_661[2],&g_661[1],&g_662},{&g_661[1],(void*)0,&g_308,&g_388[1],&g_660},{&g_417,&g_660,&g_308,&g_658,(void*)0},{&g_417,&g_658,&g_308,&g_388[0],(void*)0},{&g_388[1],&g_659,&g_308,&g_658,&g_658}},{{&g_308,&g_660,&g_658,&g_661[2],(void*)0},{&g_659,(void*)0,&g_388[1],(void*)0,&g_659},{&g_659,(void*)0,(void*)0,&g_661[1],(void*)0},{&g_662,&g_661[2],&g_660,&g_388[1],&g_388[0]},{&g_661[2],(void*)0,(void*)0,(void*)0,(void*)0},{&g_662,&g_388[1],(void*)0,&g_662,&g_659},{(void*)0,&g_417,&g_662,(void*)0,(void*)0}},{{&g_662,&g_417,(void*)0,&g_659,&g_658},{&g_388[1],&g_388[1],&g_661[2],&g_308,(void*)0},{&g_658,&g_661[2],&g_659,(void*)0,(void*)0},{&g_659,&g_661[2],&g_417,&g_388[1],&g_660},{(void*)0,&g_388[1],(void*)0,&g_308,&g_417},{(void*)0,&g_417,&g_658,&g_308,&g_308},{(void*)0,&g_417,&g_417,(void*)0,&g_388[1]}}};
                    int32_t * const *l_1650 = &g_74;
                    int32_t * const **l_1649 = &l_1650;
                    int32_t * const ***l_1651[4][2] = {{&l_1649,&l_1649},{&l_1649,&l_1649},{&l_1649,&l_1649},{&l_1649,&l_1649}};
                    int32_t ***l_1656[2];
                    int32_t ****l_1657 = &l_1656[0];
                    int32_t ****l_1658[3];
                    int8_t **l_1661[4] = {&g_134,&g_134,&g_134,&g_134};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1638[i] = (-7L);
                    for (i = 0; i < 2; i++)
                        l_1656[i] = &g_1116;
                    for (i = 0; i < 3; i++)
                        l_1658[i] = (void*)0;
                    g_1371.f3 = (0x7279A4B7L > ((safe_sub_func_uint64_t_u_u((((((*l_1629) ^= p_10.f4.f0) | (l_1631 = (((*g_134) = ((((*g_759) = p_10.f2) , (void*)0) != l_1630)) & (l_1624 >= (p_10.f4.f0 | p_10.f4.f5))))) , 2UL) & p_9), 7UL)) < p_8));
                    (**g_1653) = (safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((0xADEE7A33L <= (*p_7)) < (p_10.f2 == (l_1660[1][0][1] = ((safe_add_func_uint32_t_u_u((((*g_1289) = (l_1638[0] , ((safe_rshift_func_uint8_t_u_u((l_1644 = (g_2 , ((*l_1629)++))), (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s((p_10.f4.f2 = (((g_1652[4][1] = l_1649) != (l_1659 = ((*l_1657) = l_1656[0]))) >= 65529UL)), l_1660[3][0][0])), 65535UL)))) , l_1661[1]))) == l_1662), (*p_7))) >= l_1596)))) && p_10.f4.f5), 0xC8B4BC21A39EDC6DLL)), 5L));
                    l_1624 = ((**g_1653) = 0xD9A134F2L);
                }
                else
                { 
                    int32_t ****l_1667 = (void*)0;
                    int32_t ****l_1669 = (void*)0;
                    int32_t ****l_1670 = &l_1659;
                    uint8_t ***l_1677 = &l_1630;
                    uint8_t ****l_1676 = &l_1677;
                    uint8_t ***l_1679 = (void*)0;
                    uint8_t ***l_1680 = (void*)0;
                    uint8_t ***l_1681 = &l_1630;
                    int32_t *l_1685[3][3][2] = {{{&g_4,&l_1644},{&l_1644,&g_4},{&l_1644,&l_1644}},{{&g_4,&l_1644},{&l_1644,&g_4},{&l_1644,&l_1644}},{{&g_4,&l_1644},{&l_1644,&g_4},{&l_1644,&l_1644}}};
                    uint16_t *l_1692 = (void*)0;
                    uint16_t *l_1693[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_96,&g_1222,&g_1222,&g_96,&g_1222},{(void*)0,(void*)0,&g_1222,(void*)0,(void*)0}};
                    int i, j, k;
                    (**g_1653) ^= (p_10.f1 > (~(((((*l_1670) = (l_1668 = (((p_10.f4 , (g_24 , ((safe_mod_func_int8_t_s_s((0x00L && (&p_7 == (func_46((**g_1289), g_269.f4.f5, (*g_1116)) , (void*)0))), p_10.f4.f2)) >= p_10.f3))) != 0UL) , l_1666))) != (void*)0) <= l_1671) < (*****g_978))));
                    p_10.f4.f2 ^= (safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_uint16_t_u_u((((*l_1676) = ((*g_1068) = (*g_1068))) != &g_347[1]), 9)) || ((!(((*l_1681) = ((**l_1676) = (*g_1069))) == (*g_654))) | ((p_10.f4.f3 = ((((**g_1653) < (((&p_10 == &p_10) , g_1516[1].f0) , (*p_7))) , (*g_1068)) == l_1682[0])) >= g_660))) | p_10.f3) , l_1660[1][0][0]), 0));
                    if (l_1631)
                        continue;
                    p_10.f4.f2 = (l_1698 |= (safe_add_func_int64_t_s_s(((l_1596 , (p_9 < ((**g_869) | (l_1660[3][0][0] && (safe_add_func_int16_t_s_s((g_1516[1].f2 && (safe_mod_func_uint16_t_u_u((l_1660[3][1][0] = (((**g_1653) = ((--p_10.f4.f0) ^ (p_10.f0 == (safe_add_func_int32_t_s_s(((l_1596 & 0x67L) && l_1631), 7UL))))) | (*p_7))), p_10.f4.f2))), 0UL)))))) == 0x89DFF95EL), 0xCEAE806B97EE2737LL)));
                    (***l_1670) = (***l_1670);
                }
            }
            for (g_1371.f4 = 17; (g_1371.f4 == 30); g_1371.f4++)
            { 
                if (l_1701[0][3])
                    break;
            }
            for (p_10.f4.f5 = 8; (p_10.f4.f5 != 40); p_10.f4.f5++)
            { 
                int32_t l_1719 = 0x0F2B05ADL;
                struct S1 l_1736[4][5] = {{{4294967295UL,0xBB7E44B3L,0x1BL,-559,0x6354A16FL,0xC1E2C889B122F32FLL},{0UL,0xB96D9474L,0xD6L,744,0xF9237FA0L,0x21199744A5E3FAC1LL},{0x8065AA5EL,0xB0A69D65L,0xB7L,-891,0x20195681L,0xACE36256411FDA03LL},{6UL,-9L,0xEDL,-645,0xB6EE83F7L,18446744073709551606UL},{0x8065AA5EL,0xB0A69D65L,0xB7L,-891,0x20195681L,0xACE36256411FDA03LL}},{{0x8065AA5EL,0xB0A69D65L,0xB7L,-891,0x20195681L,0xACE36256411FDA03LL},{0x8065AA5EL,0xB0A69D65L,0xB7L,-891,0x20195681L,0xACE36256411FDA03LL},{0x2BCEE231L,-1L,0x60L,-714,2UL,0x3E50A3B515E0A5D3LL},{6UL,-9L,0xEDL,-645,0xB6EE83F7L,18446744073709551606UL},{0x347F5AB0L,-7L,9L,356,0xBB44D7B8L,0x2CE2A50A001BBD51LL}},{{0UL,0xB96D9474L,0xD6L,744,0xF9237FA0L,0x21199744A5E3FAC1LL},{4294967295UL,0xBB7E44B3L,0x1BL,-559,0x6354A16FL,0xC1E2C889B122F32FLL},{4294967295UL,0xBB7E44B3L,0x1BL,-559,0x6354A16FL,0xC1E2C889B122F32FLL},{0UL,0xB96D9474L,0xD6L,744,0xF9237FA0L,0x21199744A5E3FAC1LL},{0x8065AA5EL,0xB0A69D65L,0xB7L,-891,0x20195681L,0xACE36256411FDA03LL}},{{0UL,0xB96D9474L,0xD6L,744,0xF9237FA0L,0x21199744A5E3FAC1LL},{6UL,-9L,0xEDL,-645,0xB6EE83F7L,18446744073709551606UL},{8UL,-1L,-7L,-259,0x8BA10415L,0UL},{8UL,-1L,-7L,-259,0x8BA10415L,0UL},{6UL,-9L,0xEDL,-645,0xB6EE83F7L,18446744073709551606UL}}};
                int i, j;
                if (((safe_mul_func_int8_t_s_s((*g_134), l_1708)) > 0UL))
                { 
                    (*g_1116) = (*g_1116);
                }
                else
                { 
                    if ((*p_7))
                        break;
                    (**g_1653) = (**g_1653);
                    if (p_10.f4.f6)
                        goto lbl_1709;
                }
                (**g_1653) |= (safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s((**g_133), ((void*)0 != g_1140))), (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((g_66 || ((0x27L >= (+g_388[1])) ^ (((***g_1498) = ((void*)0 != (*g_978))) & 7L))) >= l_1719), 1)), (*g_348)))));
                for (g_306 = 3; (g_306 >= 0); g_306 -= 1)
                { 
                    uint8_t l_1720 = 0x71L;
                    int8_t *l_1725[6][5][4] = {{{&g_107[1][0],&g_24,&g_107[1][0],&g_56.f2},{(void*)0,&l_1721.f2,&g_1516[1].f2,&g_56.f2},{&g_1371.f2,&g_107[1][0],&l_1721.f2,&l_1721.f2},{&g_56.f2,&l_1721.f2,&l_1721.f2,&g_24},{&g_1371.f2,&g_1371.f2,&g_1516[1].f2,&g_1516[1].f2}},{{(void*)0,(void*)0,&g_107[1][0],&g_56.f2},{&g_107[1][0],&g_56.f2,&l_1721.f2,&g_24},{&g_24,&g_107[3][1],(void*)0,&l_1721.f2},{&l_1721.f2,&g_107[3][1],&g_107[1][1],&g_24},{&g_56.f2,&l_1721.f2,&g_107[1][0],&l_1721.f2}},{{&g_56.f2,&l_1721.f2,(void*)0,&g_56.f2},{&g_107[1][0],&g_24,&g_1371.f2,&g_107[1][1]},{&g_56.f2,&g_1371.f2,&g_56.f2,(void*)0},{&g_56.f2,&g_107[3][1],&g_1371.f2,&l_1721.f2},{&g_107[1][0],(void*)0,(void*)0,&g_107[1][0]}},{{&g_56.f2,&l_1721.f2,&g_107[1][0],&g_1516[1].f2},{&g_56.f2,&l_1721.f2,&g_24,&l_1721.f2},{&g_56.f2,&g_107[1][1],&l_1721.f2,&l_1721.f2},{&l_1721.f2,&l_1721.f2,&g_107[3][1],&g_1516[1].f2},{&g_107[3][1],&l_1721.f2,&g_107[3][1],&g_107[1][0]}},{{&l_1721.f2,(void*)0,&g_56.f2,&l_1721.f2},{&l_1721.f2,&g_107[3][1],&g_1516[1].f2,(void*)0},{&l_1721.f2,&g_1371.f2,&g_1516[1].f2,&g_107[1][1]},{&l_1721.f2,&g_24,&g_56.f2,&g_56.f2},{&l_1721.f2,&l_1721.f2,&g_107[3][1],&l_1721.f2}},{{&g_107[3][1],&l_1721.f2,&g_107[3][1],&l_1721.f2},{&l_1721.f2,&g_56.f2,&l_1721.f2,&g_107[3][1]},{&g_56.f2,&g_56.f2,&g_24,&l_1721.f2},{&g_56.f2,&l_1721.f2,&g_107[1][0],&l_1721.f2},{&g_56.f2,&l_1721.f2,(void*)0,&g_56.f2}}};
                    int i, j, k;
                    if (l_1720)
                        break;
                    g_1655[(g_306 + 1)][g_306] = ((((l_1719 == (-1L)) >= ((((p_9 ^= (l_1721 , ((p_10.f4.f6 != p_10.f4.f0) || ((*l_1600) = (((safe_lshift_func_int8_t_s_u(((~((0xA121020E7B830754LL || (p_10.f4.f6 & p_10.f4.f3)) == l_1719)) <= g_269.f4.f1), 4)) || (*g_134)) ^ 0xFE7D4240L))))) | p_10.f2) , l_1726) == &g_395)) > (*g_759)) , 1L);
                    return l_1596;
                }
                if (g_66)
                    goto lbl_1709;
                for (p_8 = 0; (p_8 != (-9)); p_8 = safe_sub_func_int16_t_s_s(p_8, 9))
                { 
                    uint32_t *l_1737 = &l_1721.f4;
                    int32_t l_1738 = (-1L);
                    if (g_56.f5)
                        goto lbl_1709;
                    l_1729 = p_7;
                    l_1738 = ((***g_636) == (((*g_134) ^= (-1L)) == (p_10.f4.f4 <= (((p_10.f1 ^= p_10.f4.f4) , ((*l_1737) |= ((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((**g_869)++), 0x107BL)), (l_1736[3][4] , l_1736[3][4].f3))) | p_10.f3))) > 0xD7C8C8B1L))));
                }
            }
        }
        return l_1739;
    }
    (*l_1742) = l_1740;
    return (*p_7);
}



static int32_t  func_11(int32_t  p_12)
{ 
    int32_t *l_14[2];
    uint8_t l_16[3][1][1];
    int64_t l_21 = (-2L);
    int8_t *l_22 = (void*)0;
    int8_t *l_23 = &g_24;
    uint16_t **l_1524 = &g_870[3];
    union U3 ***l_1576 = &g_1572;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_14[i] = &g_15[2];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_16[i][j][k] = 0xB6L;
        }
    }
    l_16[1][0][0]++;
    g_15[4] |= (safe_mod_func_int8_t_s_s(l_21, ((*l_23) = p_12)));
    for (l_21 = 0; l_21 < 2; l_21 += 1)
    {
        l_14[l_21] = &g_15[2];
    }
    for (g_24 = 0; (g_24 > (-29)); g_24 = safe_sub_func_uint32_t_u_u(g_24, 8))
    { 
        uint64_t l_27 = 0xDEB4763523E24B13LL;
        int32_t l_1543 = 2L;
        int32_t l_1544[1];
        uint32_t l_1547 = 0UL;
        int i;
        for (i = 0; i < 1; i++)
            l_1544[i] = (-5L);
    }
    return p_12;
}



static uint8_t  func_28(int8_t  p_29)
{ 
    int32_t *l_1425 = &g_15[2];
    int32_t *l_1426 = (void*)0;
    int32_t *l_1427 = &g_15[2];
    int32_t *l_1428 = &g_15[0];
    int32_t *l_1429 = &g_15[2];
    int32_t *l_1430 = &g_15[2];
    int32_t *l_1431[3][1][7];
    uint32_t l_1432 = 4294967289UL;
    int16_t *l_1442 = &g_916;
    int16_t **l_1441 = &l_1442;
    int64_t **l_1451[3];
    uint8_t l_1452 = 0x5FL;
    int8_t *l_1506 = &g_24;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
                l_1431[i][j][k] = &g_15[2];
        }
    }
    for (i = 0; i < 3; i++)
        l_1451[i] = &g_223;
lbl_1474:
    l_1432--;
lbl_1469:
    g_56.f3 ^= ((*l_1430) = ((((safe_mod_func_int8_t_s_s(0x5CL, (((((*l_1428) , ((((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((*g_348) &= ((void*)0 != l_1441)), 2)), (*g_134))) , ((safe_mod_func_uint32_t_u_u(((((safe_div_func_int16_t_s_s(((*l_1442) = (((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(((**g_636) == (g_223 = &g_306)), p_29)), (*g_348))) | (*g_759)) ^ p_29)), p_29)) , 0x5C65F9F70A318D98LL) ^ p_29) ^ (*l_1430)), 0xED49E5B1L)) | (**g_869))) ^ (*l_1429)) <= p_29)) > 0x36E8B5BEL) & (*g_759)) , l_1452))) && p_29) & p_29) & p_29));
    for (g_662 = 0; (g_662 > 45); g_662 = safe_add_func_int64_t_s_s(g_662, 1))
    { 
        uint16_t l_1472 = 3UL;
        int32_t l_1475 = 0xC9719478L;
        int32_t l_1476 = 0xF12D29D7L;
        int32_t l_1488 = (-2L);
        int64_t ***l_1497 = &l_1451[0];
        if (((*g_638) | (((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(g_1371.f3, (((g_808 , (*l_1430)) , ((-7L) && (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((g_417 ^ g_1462))), 0x49L)))) == 0x32F18B51L))), 6)) || (**g_869)) == 0xB6AB475316206A8ELL)))
        { 
            (*l_1429) |= 0x5F13DA78L;
        }
        else
        { 
            uint32_t l_1463 = 0UL;
            l_1463++;
            if ((safe_unary_minus_func_uint16_t_u(p_29)))
            { 
                for (g_308 = 3; (g_308 <= 3); g_308++)
                { 
                    if (g_308)
                        goto lbl_1469;
                    if (l_1463)
                        break;
                }
            }
            else
            { 
                int64_t l_1473 = 0x66A7D3BBBE39E8DBLL;
                (*l_1427) |= ((safe_mod_func_int64_t_s_s(l_1472, l_1473)) && (**g_869));
            }
        }
        for (g_1172 = 0; (g_1172 <= 0); g_1172 += 1)
        { 
            uint32_t l_1477 = 1UL;
            for (g_210.f0 = 0; (g_210.f0 <= 6); g_210.f0 += 1)
            { 
                int i, j, k;
                for (g_1371.f4 = 0; (g_1371.f4 <= 0); g_1371.f4 += 1)
                { 
                    (*l_1429) = 4L;
                    if (g_662)
                        goto lbl_1474;
                }
                for (g_1371.f4 = 0; (g_1371.f4 <= 5); g_1371.f4 += 1)
                { 
                    (*l_1425) = 0x6024CB74L;
                }
                if (p_29)
                    continue;
                g_1272[g_210.f0] = g_1272[(g_1172 + 5)];
            }
            for (g_308 = 2; (g_308 <= 6); g_308 += 1)
            { 
                int i, j, k;
                (*l_1427) = (g_269.f4.f1 == (((void*)0 != &l_1431[(g_1172 + 1)][g_1172][g_1172]) >= p_29));
                l_1477--;
            }
            if ((*l_1427))
                break;
        }
        for (g_210.f0 = (-22); (g_210.f0 == 19); g_210.f0 = safe_add_func_int32_t_s_s(g_210.f0, 9))
        { 
            uint32_t l_1482 = 0x9815EB5AL;
            int32_t l_1486 = 0xD4131BD3L;
            int32_t l_1487 = 0x74748C25L;
            for (l_1475 = 2; (l_1475 >= 0); l_1475 -= 1)
            { 
                int32_t l_1485 = 0xE61EBFD8L;
                int64_t ****l_1494 = (void*)0;
                int64_t ****l_1495 = (void*)0;
                int64_t ***l_1496 = &l_1451[2];
                int i;
                (*g_1116) = &l_1476;
                for (g_1371.f2 = 1; (g_1371.f2 <= 4); g_1371.f2 += 1)
                { 
                    uint32_t l_1489 = 0xD1145693L;
                    l_1482--;
                    l_1489++;
                }
                (*l_1428) &= ((safe_add_func_int16_t_s_s(((**l_1441) = (-1L)), ((g_661[l_1475] , (l_1496 = (void*)0)) == (g_1498 = l_1497)))) , ((safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((((safe_add_func_uint16_t_u_u(0x46B1L, ((((*g_133) = l_1506) == &p_29) , p_29))) <= 0L) <= 0L), 0x3493BC58D5F7A1AALL)), 4)) < p_29));
                return p_29;
            }
        }
        for (g_660 = 0; (g_660 != 40); g_660 = safe_add_func_int16_t_s_s(g_660, 4))
        { 
            struct S1 *l_1514 = (void*)0;
            for (g_66 = 0; (g_66 < 20); ++g_66)
            { 
                int32_t *l_1513[1][5][5] = {{{&l_1475,&g_4,&l_1475,&g_4,&g_4},{&l_1488,&g_4,&l_1488,(void*)0,(void*)0},{&l_1475,&g_4,&l_1475,&g_4,&g_4},{&l_1488,&g_4,&l_1488,(void*)0,(void*)0},{&l_1475,&g_4,&l_1475,&g_4,&g_4}}};
                struct S1 *l_1515 = &g_1516[1];
                int i, j, k;
                for (l_1488 = 0; (l_1488 != 14); ++l_1488)
                { 
                    if (p_29)
                        break;
                    if (p_29)
                        continue;
                }
                (*g_1116) = l_1513[0][1][4];
                l_1515 = l_1514;
            }
            g_1517 = g_1517;
        }
    }
    return p_29;
}



static int8_t  func_30(uint8_t  p_31, int64_t  p_32, int32_t * p_33, int32_t * p_34)
{ 
    uint16_t l_1414[4][7][6] = {{{1UL,65528UL,65534UL,0x8F14L,0x52FAL,0x8491L},{0x10FCL,0x341FL,1UL,9UL,65528UL,8UL},{0x7AD6L,65535UL,1UL,0x8532L,0x8F14L,65527UL},{0x6808L,0x4254L,0UL,65534UL,8UL,1UL},{0x8491L,65528UL,0x7AD6L,0x341FL,65533UL,0xFF44L},{65532UL,0x533AL,7UL,0xF378L,0x341FL,1UL},{65528UL,0xFF44L,0xA970L,0x3898L,0x05C6L,0UL}},{{7UL,0x7AD6L,1UL,0UL,0UL,4UL},{4UL,0x05C6L,65533UL,0x10FCL,0x5555L,0x5C58L},{1UL,0UL,65526UL,0UL,1UL,1UL},{9UL,65527UL,0x3898L,0UL,0x64FAL,0xAF67L},{0xFC01L,65526UL,65528UL,65527UL,0UL,0xAF67L},{1UL,0x2998L,0x3898L,65533UL,0x8945L,1UL},{0UL,1UL,65526UL,0x155BL,0xF378L,0UL}},{{0xFD05L,0x14DFL,0x52FAL,0x54D6L,0xFC01L,65526UL},{1UL,65535UL,0UL,65533UL,0xA970L,1UL},{0x6206L,65535UL,65534UL,1UL,65535UL,65535UL},{0xC01EL,0x341FL,0x5C58L,65532UL,1UL,1UL},{0x64FAL,65535UL,65534UL,0x4254L,0x2998L,0xEF37L},{65535UL,0xB873L,1UL,0xFF44L,0x64FAL,5UL},{8UL,0x45C6L,0x8F14L,0x64FAL,65534UL,0xAFD9L}},{{0x05C6L,65526UL,0xEF37L,0x8F14L,0UL,65532UL},{65533UL,0xEDB9L,0x341FL,0UL,0xB873L,0xB873L},{0xCA08L,0UL,0UL,0xCA08L,0UL,0x64FAL},{1UL,0x3081L,1UL,0x0B89L,65528UL,1UL},{0x341FL,0x8491L,0xAF67L,7UL,65528UL,9UL},{0xA970L,0x3081L,1UL,0x8532L,0UL,0x7AD6L},{65528UL,0UL,1UL,65526UL,0xB873L,1UL}}};
    int32_t *l_1415[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_4,&g_4,&g_4,&g_4,&g_4},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_4,&g_4,&g_4,&g_4,&g_4},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_4,&g_4,&g_4,&g_4,&g_4},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_1416 = 0xC7404730L;
    int32_t l_1417 = 0xCEF8EB14L;
    int32_t l_1418 = 0x7342A499L;
    int64_t l_1419 = (-1L);
    int16_t l_1420 = 0x22DFL;
    int32_t l_1421[1][3];
    uint8_t l_1422 = 0x31L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1421[i][j] = 0xC5152D12L;
    }
    g_1371.f3 = ((*p_33) = (l_1414[3][6][5] = ((void*)0 != p_33)));
    l_1422++;
    return p_31;
}



static uint32_t  func_35(int32_t  p_36, int64_t  p_37)
{ 
    uint16_t l_38 = 0x626AL;
    int32_t l_39[6][4][2] = {{{0x6C2DB602L,0x097756EBL},{(-7L),0x3547A058L},{0x097756EBL,0x3547A058L},{(-7L),0x097756EBL}},{{0x6C2DB602L,0x6C2DB602L},{0x6C2DB602L,0x097756EBL},{(-7L),0x3547A058L},{0x097756EBL,0x3547A058L}},{{(-7L),0x097756EBL},{0x6C2DB602L,0x6C2DB602L},{0x6C2DB602L,0x097756EBL},{(-7L),0x3547A058L}},{{0x097756EBL,0x3547A058L},{(-7L),0x097756EBL},{0x6C2DB602L,0x6C2DB602L},{0x6C2DB602L,0x097756EBL}},{{(-7L),0x3547A058L},{0x097756EBL,0x3547A058L},{(-7L),0x097756EBL},{0x6C2DB602L,0x6C2DB602L}},{{0x6C2DB602L,0x097756EBL},{(-7L),0x3547A058L},{0x097756EBL,0x3547A058L},{(-7L),0x097756EBL}}};
    int32_t *l_58 = (void*)0;
    int8_t *l_67 = &g_24;
    struct S1 ***l_1223 = (void*)0;
    uint16_t * const *l_1260 = &g_870[0];
    uint16_t * const **l_1259 = &l_1260;
    struct S2 *l_1270 = (void*)0;
    const union U3 l_1311 = {0x5012L};
    uint32_t l_1337 = 4294967295UL;
    union U3 *l_1372[7];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1372[i] = (void*)0;
    l_39[5][0][0] = l_38;
    for (p_36 = 0; (p_36 <= 27); p_36 = safe_add_func_int32_t_s_s(p_36, 3))
    { 
        uint8_t l_43 = 9UL;
        struct S2 l_1205 = {56,18446744073709551609UL,-6L,65532UL,{65534UL,-4L,0L,111,0L,0x0CDB4B8351184C3ALL,2}};
        int32_t l_1221 = (-3L);
        int64_t **l_1254[2][5][3] = {{{&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223}},{{&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223}}};
        int64_t ***l_1253 = &l_1254[1][2][2];
        int16_t *l_1264 = (void*)0;
        int32_t l_1281 = 0L;
        int32_t l_1282 = 0x0572B1E9L;
        int32_t l_1283 = 0x1ABCCF97L;
        int8_t *** const *l_1302 = &g_1289;
        int8_t *** const **l_1301 = &l_1302;
        uint32_t *l_1316 = (void*)0;
        union U3 *l_1375 = &g_210;
        int32_t l_1391 = (-1L);
        int32_t l_1407 = (-1L);
        int32_t l_1409 = 1L;
        int i, j, k;
    }
    return g_1408[0];
}



static struct S1  func_46(int8_t * p_47, uint32_t  p_48, const int32_t * p_49)
{ 
    uint64_t l_621 = 18446744073709551615UL;
    int32_t l_626[2];
    struct S1 * const ***l_629 = (void*)0;
    int16_t l_632[7] = {0x43C9L,0xFEB7L,0xFEB7L,0x43C9L,0xFEB7L,0xFEB7L,0x43C9L};
    union U3 l_650 = {0UL};
    uint8_t ***l_663[6] = {(void*)0,&g_347[1],(void*)0,(void*)0,&g_347[1],(void*)0};
    uint32_t l_686[4][5];
    struct S2 l_894 = {62,4UL,2L,65532UL,{1UL,0x9AF5L,0x294BFA04L,-148,0xAFL,0xEB948DB7690F6450LL,1}};
    int64_t **l_897[3][1][6];
    int32_t l_922 = 0x44646694L;
    uint64_t l_931 = 18446744073709551610UL;
    int32_t *l_935 = &l_894.f4.f2;
    uint16_t **l_941[3][7] = {{&g_870[5],&g_870[2],&g_870[2],&g_870[5],&g_870[5],&g_870[2],&g_870[2]},{&g_870[3],(void*)0,&g_870[3],(void*)0,&g_870[3],(void*)0,&g_870[3]},{&g_870[5],&g_870[5],&g_870[2],&g_870[2],&g_870[5],&g_870[5],&g_870[2]}};
    int32_t l_951 = 0x94725652L;
    int32_t l_962[2];
    int8_t l_1042 = (-1L);
    const int32_t l_1056 = 1L;
    const int8_t *l_1087 = &g_24;
    const int8_t **l_1086 = &l_1087;
    const int8_t ***l_1085[2][2];
    const int8_t **** const l_1084[3] = {&l_1085[0][1],&l_1085[0][1],&l_1085[0][1]};
    const int8_t **** const *l_1083 = &l_1084[2];
    uint32_t l_1128 = 0x10262B10L;
    union U3 **l_1146 = (void*)0;
    struct S1 l_1202 = {1UL,0x851BCA5FL,0L,-554,0x7DEA6460L,5UL};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_626[i] = 0xDA49B890L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_686[i][j] = 0x91639B84L;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_897[i][j][k] = &g_223;
        }
    }
    for (i = 0; i < 2; i++)
        l_962[i] = (-1L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_1085[i][j] = &l_1086;
    }
    return l_1202;
}



static int8_t * func_50(struct S1  p_51, int32_t  p_52, int32_t * p_53, int32_t  p_54, int32_t * p_55)
{ 
    const uint32_t l_75 = 18446744073709551615UL;
    int8_t l_108[4] = {0x0CL,0x0CL,0x0CL,0x0CL};
    int32_t l_109 = (-5L);
    int32_t l_114[7][7][2] = {{{0x3286A6E1L,1L},{0x0C905CCAL,0x3286A6E1L},{1L,0x0A49417EL},{1L,0x3286A6E1L},{0x0C905CCAL,1L},{0x3286A6E1L,0xD60A08B2L},{0xDF05FF3CL,0x3286A6E1L}},{{0x0A49417EL,1L},{1L,(-8L)},{0xDF05FF3CL,1L},{(-8L),1L},{0xDF05FF3CL,(-8L)},{1L,1L},{0x0A49417EL,0x3286A6E1L}},{{0xDF05FF3CL,0xD60A08B2L},{0x3286A6E1L,1L},{0x0C905CCAL,0x3286A6E1L},{1L,0x0A49417EL},{1L,0x3286A6E1L},{0x0C905CCAL,1L},{0x3286A6E1L,0xD60A08B2L}},{{0xDF05FF3CL,0x3286A6E1L},{0x0A49417EL,1L},{1L,(-8L)},{0xDF05FF3CL,1L},{(-8L),1L},{0xDF05FF3CL,(-8L)},{1L,1L}},{{0x0A49417EL,0x3286A6E1L},{0xDF05FF3CL,0xD60A08B2L},{0x3286A6E1L,1L},{0x0C905CCAL,0x3286A6E1L},{1L,0x0A49417EL},{1L,0x3286A6E1L},{0x0C905CCAL,1L}},{{0x3286A6E1L,0xD60A08B2L},{0xDF05FF3CL,0x3286A6E1L},{0x0A49417EL,1L},{1L,(-8L)},{0xDF05FF3CL,1L},{(-8L),1L},{0xDF05FF3CL,(-8L)}},{{1L,1L},{0x0A49417EL,0x3286A6E1L},{0xDF05FF3CL,0xD60A08B2L},{0x3286A6E1L,1L},{0x0C905CCAL,0x3286A6E1L},{1L,0x0A49417EL},{1L,0x3286A6E1L}}};
    int32_t l_159 = (-1L);
    union U3 l_186 = {0x812EL};
    struct S1 *l_217 = &g_56;
    int16_t l_218 = 0xAACBL;
    int64_t *l_226[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_232 = (void*)0;
    const struct S2 l_241 = {73,6UL,-5L,0xFB04L,{0x59EFL,1L,1L,-24,1L,0x0D5D64FB073FBF91LL,2}};
    union U3 l_280 = {0x83EAL};
    uint8_t *l_312 = (void*)0;
    uint8_t **l_311 = &l_312;
    struct S1 ***l_394 = (void*)0;
    struct S1 ****l_393 = &l_394;
    uint32_t l_420 = 0x08E3F8CBL;
    const struct S1 *l_434 = &g_435;
    int32_t l_438 = (-1L);
    int32_t *l_442[2][4];
    uint8_t l_447 = 0UL;
    int32_t *l_460 = &g_15[4];
    int16_t l_464 = 0xEE1BL;
    uint8_t l_490 = 0xFBL;
    uint32_t l_606 = 0x9A9D49C7L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_442[i][j] = &l_114[6][2][1];
    }
    for (p_52 = 4; (p_52 < (-30)); p_52--)
    { 
        int32_t **l_71 = (void*)0;
        int32_t *l_73 = &g_15[1];
        int32_t **l_72[1];
        int64_t *l_94 = (void*)0;
        uint16_t *l_95 = &g_96;
        int16_t *l_97 = &g_98;
        int8_t *l_132[7][7] = {{(void*)0,&l_108[0],&g_107[1][0],&l_108[0],(void*)0,&g_24,(void*)0},{&l_108[3],&g_107[3][1],&g_107[3][1],&l_108[3],(void*)0,&g_107[3][1],&l_108[3]},{&g_56.f2,&l_108[0],&g_56.f2,(void*)0,&g_56.f2,(void*)0,&g_56.f2},{&l_108[3],&l_108[3],&g_56.f2,&l_108[3],&l_108[3],&g_107[3][1],&l_108[3]},{(void*)0,(void*)0,&g_107[3][1],&l_108[0],&g_107[3][1],(void*)0,(void*)0},{(void*)0,&g_107[3][1],&g_56.f2,&g_107[3][1],(void*)0,&g_56.f2,&g_56.f2},{&g_56.f2,(void*)0,&g_56.f2,(void*)0,&g_56.f2,&l_108[0],&g_56.f2}};
        int8_t **l_131 = &l_132[4][3];
        int64_t l_182 = 1L;
        uint32_t l_183[5][2];
        uint16_t l_192 = 1UL;
        struct S1 **l_201 = &g_200;
        int i, j;
        for (i = 0; i < 1; i++)
            l_72[i] = &l_73;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_183[i][j] = 18446744073709551610UL;
        }
        g_74 = (void*)0;
        (*p_55) = l_75;
        if (((safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(p_51.f2, 4)) || (safe_lshift_func_int8_t_s_u(g_84[2][1][1], 7))), 65530UL)), (safe_div_func_uint32_t_u_u(p_51.f0, g_56.f5)))) != (((*l_97) &= (+((*l_95) = (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0x54FFL, ((((*l_73) = (!(((((+0UL) ^ p_51.f5) > g_66) >= l_75) | (-2L)))) && p_51.f1) | g_56.f2))), 0x717EL))))) || (*l_73))))
        { 
            uint32_t l_103 = 0x4C899101L;
            int8_t *l_104 = (void*)0;
            int8_t *l_105 = &g_56.f2;
            int8_t *l_106 = &g_107[3][1];
            int32_t l_113 = 0x882539F8L;
            int32_t l_122 = (-5L);
            int32_t l_167 = 0x3EB63C3FL;
            int32_t l_173 = 0xF25558BBL;
            int32_t l_180 = (-7L);
            int32_t l_181 = 0L;
            struct S0 l_189 = {0xD303L,0L,-1L,-181,0x5FL,1UL,-4};
            uint16_t *l_190[3][3][7] = {{{&l_189.f0,&g_96,(void*)0,(void*)0,&g_96,&l_189.f0,&g_96},{&l_186.f0,(void*)0,&l_186.f0,&l_189.f0,&l_186.f0,(void*)0,&l_186.f0},{&l_189.f0,(void*)0,&g_96,&g_96,&g_96,&g_96,(void*)0}},{{&g_96,(void*)0,&g_96,(void*)0,&g_96,(void*)0,&g_96},{&g_96,&g_96,&g_96,(void*)0,&l_189.f0,&l_189.f0,(void*)0},{&l_186.f0,&l_189.f0,&l_186.f0,(void*)0,&l_186.f0,&l_189.f0,&l_186.f0}},{{&g_96,(void*)0,(void*)0,&g_96,&l_189.f0,&g_96,&g_96},{&g_96,&l_189.f0,&g_96,&l_189.f0,&g_96,&l_189.f0,&g_96},{&l_189.f0,&g_96,(void*)0,(void*)0,&g_96,&l_189.f0,&g_96}}};
            union U3 l_208 = {0x091DL};
            int i, j, k;
            g_56.f3 ^= (((0x5EL > p_51.f2) ^ (0UL == (safe_sub_func_uint64_t_u_u((((g_84[2][1][1] , (safe_mul_func_int8_t_s_s(((*l_106) = ((*l_105) = l_103)), l_108[3]))) , p_51.f0) | l_103), p_51.f4)))) ^ (*p_53));
            if (l_103)
            { 
                return &g_107[3][1];
            }
            else
            { 
                int16_t l_110[3];
                int32_t l_111[6] = {2L,2L,2L,2L,2L,2L};
                struct S1 *l_162 = &g_56;
                struct S1 **l_161 = &l_162;
                int i;
                for (i = 0; i < 3; i++)
                    l_110[i] = 1L;
                p_53 = p_53;
                for (p_51.f2 = 0; (p_51.f2 <= 4); p_51.f2 += 1)
                { 
                    int32_t l_112 = (-3L);
                    int32_t l_115 = 0xE50A2DCCL;
                    int32_t l_116 = (-8L);
                    int32_t l_117 = 0x03959C9AL;
                    int32_t l_118 = 0xA7A27731L;
                    int32_t l_119 = (-1L);
                    int32_t l_120 = 0x33A2A3A7L;
                    int32_t l_121 = 0xC08D5A12L;
                    uint32_t l_123 = 0xC3B9D746L;
                    int i;
                    l_123--;
                    p_55 = &g_15[2];
                    g_74 = &g_15[0];
                }
                for (l_113 = 4; (l_113 >= 0); l_113 -= 1)
                { 
                    struct S1 l_130 = {0x4F3EF624L,0x37666566L,3L,872,0xDB4FB469L,1UL};
                    int8_t ***l_135 = &g_133;
                    int i;
                    p_51.f3 &= (g_15[l_113] = (((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((((l_130 , ((g_96 = (l_131 != ((*l_135) = g_133))) && (&g_134 == &g_134))) , (((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((*p_53) != ((1L & 1L) & g_15[2])) > 0xE4L), p_51.f2)), p_51.f1)) == (*p_53)) ^ 0UL)) , l_111[2]) && p_52), 4)), 2)) | 0UL) , p_54) | p_52) | 3UL));
                    if (g_4)
                        break;
                    (*p_55) = ((!(((safe_rshift_func_int8_t_s_u((*g_134), 4)) && ((l_110[2] , ((((65535UL <= 0xBB55L) <= (l_103 , p_51.f5)) < (+(((1L ^ 0xEC0BL) > (**g_133)) & l_109))) != p_51.f3)) <= 0xD10CE58A11968FDBLL)) >= g_84[2][1][1])) < (**g_133));
                }
                for (l_113 = 0; (l_113 >= (-6)); l_113 = safe_sub_func_uint8_t_u_u(l_113, 6))
                { 
                    int8_t l_158 = 4L;
                    int32_t l_160 = 0x08E153FFL;
                    l_160 ^= ((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((((*l_97) = (safe_rshift_func_int16_t_s_s(g_56.f5, 7))) , g_15[2]) != 0x7BBFL), (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(g_56.f5, (((-5L) && (safe_sub_func_uint64_t_u_u((((g_107[0][1] ^ ((((1L >= p_51.f4) , p_51.f2) || l_158) > l_122)) >= p_51.f4) , l_159), l_158))) || 0xEBL))) , l_113), 0xF4L)))) == l_111[3]), 8L)) != 0x6D4199CFL);
                    g_15[2] = (*p_55);
                }
                (*l_161) = &p_51;
            }
            for (l_113 = 0; (l_113 <= 22); l_113 = safe_add_func_uint8_t_u_u(l_113, 6))
            { 
                int32_t l_168 = 1L;
                int32_t l_170 = 0L;
                int32_t l_177 = 0x847CEFB7L;
                int32_t l_178[5][1][7] = {{{1L,0xE6C04E2FL,(-4L),1L,(-4L),0xE6C04E2FL,1L}},{{0xE6C04E2FL,0xDDA32BF4L,0xAC825AF4L,(-10L),(-1L),(-4L),(-1L)}},{{0xE6C04E2FL,(-1L),(-1L),0xE6C04E2FL,0x3EC07951L,1L,1L}},{{1L,1L,0xAC825AF4L,0x3EC07951L,0x3EC07951L,0xAC825AF4L,1L}},{{0x3EC07951L,1L,(-4L),0xDDA32BF4L,(-1L),1L,1L}}};
                int i, j, k;
                for (l_103 = 0; (l_103 > 45); l_103 = safe_add_func_uint64_t_u_u(l_103, 1))
                { 
                    int32_t l_169 = 0xA8395A48L;
                    int32_t l_171 = 0x7E5EAF47L;
                    int32_t l_172 = 0x8B35087BL;
                    int32_t l_174 = 0x19CDBA80L;
                    int32_t l_175 = (-1L);
                    int32_t l_176 = 7L;
                    int32_t l_179 = (-1L);
                    int16_t *l_191[6];
                    uint32_t *l_193 = &g_56.f4;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_191[i] = &l_189.f1;
                    if (l_108[3])
                        break;
                    --l_183[2][1];
                    (*p_55) = (8UL | ((*l_193) = (l_186 , (0UL & (((safe_sub_func_uint32_t_u_u(((l_189 , l_190[1][1][4]) != (void*)0), ((void*)0 != l_191[3]))) , l_192) != p_51.f0)))));
                    if ((*p_53))
                        continue;
                }
                for (l_180 = 0; (l_180 > 2); l_180++)
                { 
                    union U3 *l_209 = &l_208;
                    if (g_15[2])
                        break;
                    (*p_55) |= (safe_rshift_func_int8_t_s_u((p_51.f2 = (~(g_199 != l_201))), (p_53 != g_74)));
                    p_51.f3 &= (safe_mul_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((((*p_55) = (l_114[3][3][0] , (safe_mod_func_uint64_t_u_u(((((((*l_209) = l_208) , (g_210 , (g_210 , (safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_51.f4, 4)), 2))))) < (safe_div_func_uint64_t_u_u(5UL, g_107[3][1]))) & p_51.f4) >= 0x798E07820917177ALL), g_107[2][0])))) , p_51.f5), (-7L))) == g_4), 0xB55FL));
                }
            }
            (*l_73) = g_2;
        }
        else
        { 
            (*l_201) = l_217;
            if (l_218)
                break;
        }
    }
    for (g_96 = 0; (g_96 != 54); g_96 = safe_add_func_uint16_t_u_u(g_96, 9))
    { 
        int64_t **l_225[1][4][4] = {{{&g_223,&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223,&g_223}}};
        uint16_t *l_229 = &l_186.f0;
        int32_t l_233[7];
        int8_t *l_330 = (void*)0;
        uint8_t l_344 = 0x3FL;
        int8_t ***l_364 = &g_133;
        int8_t l_389 = (-9L);
        uint8_t l_390 = 1UL;
        int32_t *l_437 = &l_114[1][0][1];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_233[i] = 0L;
        (*p_55) = (g_56.f3 = (safe_add_func_uint8_t_u_u(g_15[1], (l_233[6] = ((l_226[3] = g_223) != ((safe_rshift_func_uint16_t_u_u(((*l_229)--), 8)) , (l_232 = l_232)))))));
        if (((&p_53 == &g_74) >= ((*g_223) = p_51.f1)))
        { 
            int32_t l_255 = 0x17DD6611L;
            int16_t *l_256[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int8_t ***l_265 = &g_133;
            const int64_t *l_272 = &g_224;
            int32_t l_274[6][2] = {{0xC04760FDL,0x387FDDEAL},{(-7L),0x387FDDEAL},{0xC04760FDL,(-7L)},{1L,1L},{1L,(-7L)},{0xC04760FDL,0x387FDDEAL}};
            int32_t l_275[2];
            uint16_t l_303 = 0x0ABDL;
            int32_t l_342 = (-1L);
            int64_t l_343 = (-7L);
            int32_t **l_358[1];
            uint32_t l_402[7][1] = {{0UL},{4294967295UL},{4294967295UL},{0UL},{4294967295UL},{4294967295UL},{0UL}};
            int32_t l_424 = 0x319C0927L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_275[i] = 0xC73E7629L;
            for (i = 0; i < 1; i++)
                l_358[i] = &g_74;
            if (((~(safe_mul_func_uint8_t_u_u(p_54, (((*p_55) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(l_233[6], (l_109 = ((l_241 , (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u((((safe_mul_func_int16_t_s_s((p_53 == (void*)0), (safe_sub_func_uint64_t_u_u(0xAA62EC7BEB2B36C2LL, (((((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((g_15[2] != p_54) != 0L), g_24)), (**g_133))), 3)) >= l_233[6]) ^ l_241.f4.f2) >= g_210.f0) < p_51.f0))))) , l_255) & g_210.f0))), 0x5F79306F493AA1A8LL))) < (-8L))))), 1))) <= 1UL)))) <= p_52))
            { 
                int16_t l_266[6][2][3];
                struct S1 ***l_268 = &g_199;
                struct S1 ****l_267 = &l_268;
                int64_t *l_273 = &g_224;
                int32_t l_299 = (-1L);
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_266[i][j][k] = 0L;
                    }
                }
                l_266[4][0][1] |= (g_15[2] & ((0x5851E5C6F841FF86LL ^ ((p_51.f3 < g_107[2][0]) , (((l_186 , ((safe_mul_func_int16_t_s_s((l_255 >= ((safe_mod_func_int32_t_s_s(0x92101502L, 4294967295UL)) != l_255)), 0xEF46L)) ^ 8L)) , (void*)0) == l_265))) < 65535UL));
                (*l_267) = &g_199;
                l_275[0] = (((((((p_51 , ((((void*)0 == &p_55) || (g_269 , ((safe_mul_func_uint16_t_u_u(g_210.f0, (l_272 == (l_273 = &g_224)))) , p_51.f1))) >= 0xE34AF9EAF7DD5602LL)) != l_266[3][0][2]) & l_274[5][0]) , p_51.f5) , &g_200) == &l_217) == l_241.f3);
                g_56.f3 = ((*p_55) = ((safe_sub_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((l_299 = (l_280 , (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((g_98 && ((((((*g_223) = (-6L)) , p_51.f1) > (safe_div_func_int64_t_s_s((255UL == ((safe_mul_func_uint16_t_u_u(((!(!(~p_51.f3))) || (safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_266[1][1][0], l_233[6])), g_210.f0))), 0xB267L)) <= g_56.f0)), 8L))) <= g_298) >= p_51.f1)) , (*g_133)) != (*g_133)), 10)), 5UL)))) > 0xD6CEL), 0xE99FDD93EADBCF66LL)), 0xBAL)) != (**g_133)));
            }
            else
            { 
                struct S1 *l_300[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint8_t *l_307 = &g_308;
                int32_t l_316[2][7][7] = {{{(-3L),1L,0x950CD63CL,0x679F912CL,0xE918DBAEL,0x679F912CL,0x950CD63CL},{1L,1L,0xF55728C4L,0xE5C421F5L,0xE918DBAEL,0xD4712D92L,1L},{1L,(-3L),0x950CD63CL,0xE5C421F5L,0L,0x679F912CL,1L},{(-3L),1L,0x950CD63CL,0x679F912CL,0xE918DBAEL,0x679F912CL,0x950CD63CL},{1L,1L,1L,0xFE08873CL,0x97335239L,3L,(-3L)},{0L,0xBE5CBDDBL,5L,0xFE08873CL,(-4L),0x57EA85A4L,(-3L)},{0xBE5CBDDBL,0L,5L,0x57EA85A4L,0x97335239L,0x57EA85A4L,5L}},{{0L,0L,1L,0xFE08873CL,0x97335239L,3L,(-3L)},{0L,0xBE5CBDDBL,5L,0xFE08873CL,(-4L),0x57EA85A4L,(-3L)},{0xBE5CBDDBL,0L,5L,0x57EA85A4L,0x97335239L,0x57EA85A4L,5L},{0L,0L,1L,0xFE08873CL,0x97335239L,3L,(-3L)},{0L,0xBE5CBDDBL,5L,0xFE08873CL,(-4L),0x57EA85A4L,(-3L)},{0xBE5CBDDBL,0L,5L,0x57EA85A4L,0x97335239L,0x57EA85A4L,5L},{0L,0L,1L,0xFE08873CL,0x97335239L,3L,(-3L)}}};
                int32_t l_328[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_328[i] = 0L;
                if (((l_300[1] == (((safe_mod_func_uint8_t_u_u(((void*)0 != p_55), (p_51.f2 ^= l_303))) < (safe_mod_func_uint8_t_u_u((g_306 = 0xD6L), (++(*l_307))))) , (*g_199))) < 0x82F0E3FB895A3996LL))
                { 
                    uint8_t ***l_313 = &l_311;
                    (*l_313) = (p_51 , l_311);
                }
                else
                { 
                    int64_t l_327 = 0x3C33400544009106LL;
                    int32_t *l_329 = &l_109;
                    (*l_329) ^= ((safe_mul_func_uint16_t_u_u(l_316[1][5][2], (l_328[0] = (0xA8C30F78D322387CLL <= ((*g_223) = ((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0x6A998CC7L, 0xF11AC0BCL)), (**g_133))), 1L)) , ((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(l_316[1][5][2], 4UL)) | l_316[0][2][2]), l_327)) || 0xC7L))))))) && (*p_55));
                }
                return l_330;
            }
            for (l_303 = 19; (l_303 < 9); l_303--)
            { 
                const uint64_t l_335 = 0x6C5632800E8F7104LL;
                int32_t l_337 = 0xC9C4EFA5L;
                int32_t l_338 = 0x3C31ED0AL;
                int32_t l_339 = 0L;
                int32_t l_340 = 0x3DA630ADL;
                int32_t l_341[6][5][4] = {{{0xC2A1C6CFL,0L,0xB4687D50L,0x305C4B03L},{0x89FBF3F2L,0xC2A1C6CFL,0xABE5EF2AL,8L},{(-1L),0x3FAAC7D0L,0L,0xCF12418AL},{(-1L),0xA336BF2BL,0xABE5EF2AL,0x1D01273CL},{0x89FBF3F2L,0xCF12418AL,0xB4687D50L,0x24B5B738L}},{{0xC2A1C6CFL,0x86F13AC1L,4L,0x3FAAC7D0L},{0x86F13AC1L,0xA336BF2BL,0xA336BF2BL,0x86F13AC1L},{0xB4687D50L,(-1L),4L,8L},{(-1L),0x305C4B03L,4L,0xC2A1C6CFL},{0xD47FFEDEL,0L,(-7L),0xC2A1C6CFL}},{{0x89FBF3F2L,0x305C4B03L,0x24B5B738L,8L},{0x3FAAC7D0L,(-1L),0L,0x86F13AC1L},{0x1D01273CL,0xA336BF2BL,8L,0x3FAAC7D0L},{0x89FBF3F2L,0x86F13AC1L,0x89FBF3F2L,0x24B5B738L},{0x305C4B03L,0xCF12418AL,4L,0x1D01273CL}},{{0xCF12418AL,0xA336BF2BL,0L,0xCF12418AL},{0xB4687D50L,0x3FAAC7D0L,0L,8L},{0xCF12418AL,0xC2A1C6CFL,4L,0x305C4B03L},{0x305C4B03L,0L,0x89FBF3F2L,0xD47FFEDEL},{0x89FBF3F2L,0xD47FFEDEL,8L,8L}},{{0x1D01273CL,0x1D01273CL,0L,(-1L)},{0x3FAAC7D0L,0xA336BF2BL,0x24B5B738L,(-1L)},{0x89FBF3F2L,(-1L),(-7L),0x24B5B738L},{0xD47FFEDEL,(-1L),4L,(-1L)},{(-1L),0xA336BF2BL,4L,(-1L)}},{{0xB4687D50L,0x1D01273CL,0xA336BF2BL,8L},{0x86F13AC1L,0xD47FFEDEL,4L,0xD47FFEDEL},{0xC2A1C6CFL,0L,0xB4687D50L,0x305C4B03L},{0x89FBF3F2L,0xC2A1C6CFL,0xABE5EF2AL,8L},{(-1L),0x3FAAC7D0L,0L,0xCF12418AL}}};
                uint16_t l_357 = 65535UL;
                int i, j, k;
                for (l_255 = 0; (l_255 < (-5)); l_255 = safe_sub_func_int64_t_s_s(l_255, 8))
                { 
                    if (l_335)
                        break;
                    if (l_233[6])
                        continue;
                    return (*g_133);
                }
                for (g_210.f0 = 0; (g_210.f0 <= 1); g_210.f0 += 1)
                { 
                    int32_t *l_336[4][3][3] = {{{&l_275[1],&l_114[3][3][0],&l_114[3][3][0]},{&l_233[3],&l_109,&l_233[3]},{&l_275[1],&l_233[4],&l_114[3][3][0]}},{{&g_15[2],&g_15[2],&g_15[2]},{&g_15[3],&l_233[4],&l_233[4]},{&g_15[2],&l_109,&l_114[3][3][0]}},{{&g_15[3],&l_114[3][3][0],&g_15[3]},{&g_15[2],&g_15[2],&l_114[3][3][0]},{&l_275[1],&l_275[1],&l_233[4]}},{{&l_233[3],&g_15[2],&g_15[2]},{&l_233[4],&l_114[3][3][0],&l_114[3][3][0]},{&l_233[3],&l_109,&l_233[3]}}};
                    uint8_t ***l_349 = &l_311;
                    int i, j, k;
                    --l_344;
                    l_340 |= (g_347[1] == ((*l_349) = &g_348));
                    return (*g_133);
                }
                if ((!((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(0xF8CAL, l_274[0][1])), (((safe_mod_func_int16_t_s_s((g_306 ^ (l_343 , ((1UL | (((p_52 && l_335) | p_51.f4) | l_357)) != 2L))), l_241.f4.f2)) , l_186) , (**g_133)))) | p_51.f0)))
                { 
                    l_358[0] = &p_55;
                    g_15[3] = (l_226[3] != (void*)0);
                    p_53 = p_55;
                }
                else
                { 
                    int64_t l_386 = 0x0C2AE53849AF41FELL;
                    int32_t l_387 = (-3L);
                    g_56.f3 = ((0xFBCA930CL < ((*g_223) , ((!((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((g_269.f2 , (&g_133 != l_364)) | (((((((*g_348) = p_51.f5) , ((safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(g_269.f4.f0, 0x0087316FL)) && 0UL), 255UL)) || 0x8A4EL)) | (*g_223)) | g_269.f4.f2) && l_335) != p_51.f5)), 6)) && (**g_133)), p_51.f0)) | p_52)) , (*p_55)))) > (-1L));
                    g_388[1] &= (((safe_mul_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(((g_84[2][1][1] < (*p_53)) == (safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s((l_341[4][2][2] = (l_387 = ((p_52 & ((((((+p_51.f2) && (safe_lshift_func_int8_t_s_s((**g_133), 2))) & (((safe_mod_func_int32_t_s_s((g_56.f3 = (p_51.f3 = ((safe_add_func_uint16_t_u_u((l_241.f4.f6 == ((**g_133) || l_386)), 1UL)) == 0UL))), 1UL)) < (*p_55)) , (*g_223))) & g_107[3][1]) != 0x61L) >= 1L)) >= p_51.f4))), g_84[6][1][2])) < g_308), 12))), g_224)) >= p_54), 0x0CL)) && g_66) | 0x16DA471B65A9A6FELL);
                    return (**l_265);
                }
                l_390--;
                (*p_55) |= (l_393 == g_395);
            }
            for (l_343 = 27; (l_343 <= (-15)); l_343 = safe_sub_func_int8_t_s_s(l_343, 8))
            { 
                int32_t l_400[6][3][4] = {{{6L,(-1L),(-1L),6L},{6L,8L,4L,(-1L)},{2L,6L,0x33A6073AL,(-1L)}},{{0x6BC236DAL,0x85BB7C56L,0x6BC236DAL,(-1L)},{0x33A6073AL,6L,2L,(-1L)},{4L,8L,6L,6L}},{{(-1L),(-1L),6L,0x6BC236DAL},{4L,0x986C118DL,2L,8L},{0x33A6073AL,2L,0x6BC236DAL,2L}},{{0x6BC236DAL,2L,0x33A6073AL,8L},{2L,0x986C118DL,4L,0x6BC236DAL},{6L,(-1L),(-1L),6L}},{{6L,8L,4L,(-1L)},{2L,6L,0x33A6073AL,(-1L)},{0x6BC236DAL,0x85BB7C56L,0x6BC236DAL,(-1L)}},{{0x33A6073AL,6L,2L,(-1L)},{4L,8L,6L,6L},{(-1L),(-1L),6L,0x6BC236DAL}}};
                int32_t *l_401 = (void*)0;
                uint32_t l_436[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_436[i] = 0x22386F98L;
                if (((*p_55) &= ((~0x1EL) <= l_400[2][1][0])))
                { 
                    int8_t l_418 = (-3L);
                    int32_t l_419 = 0x8239DCB0L;
                    uint64_t *l_421 = &g_56.f5;
                    uint64_t *l_422 = &g_84[0][2][0];
                    int32_t ***l_423 = &l_358[0];
                    l_401 = &g_15[1];
                    (*l_401) = (*l_401);
                    (*p_55) = ((p_51.f5 = ((*l_422) = ((*l_421) = ((((((((l_402[0][0] = p_51.f2) , (safe_div_func_int8_t_s_s((((l_418 = ((((safe_lshift_func_int8_t_s_s(p_51.f0, 2)) > ((safe_mod_func_uint8_t_u_u(0UL, p_51.f2)) & (((((*g_223) = (0x1EE9L & (safe_sub_func_int16_t_s_s(0xB733L, (safe_mod_func_int16_t_s_s(((((safe_add_func_int32_t_s_s(g_269.f3, l_241.f0)) || 1UL) | g_417) <= 0xEA8E5C578D276F74LL), p_51.f0)))))) , g_15[2]) > p_51.f3) && p_52))) >= p_51.f3) || (*p_55))) , 0x832E2A44L) || 0xFB40FC71L), (*g_134)))) >= l_419) <= (*g_134)) <= 0x63FD9240L) , l_420) && g_56.f2) | g_84[2][2][1])))) >= p_51.f0);
                    (*l_423) = &g_74;
                    (*l_401) &= (l_424 <= (+((void*)0 != &g_396)));
                }
                else
                { 
                    int8_t *l_426 = &l_389;
                    return (*g_133);
                }
                g_56.f3 ^= (safe_div_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u((!(g_66 & p_51.f3)), (((0x16A8L <= l_390) == p_51.f5) > (((*l_401) = (safe_lshift_func_int16_t_s_s((l_436[1] |= ((*l_401) >= ((*g_348) |= ((l_434 = (***g_395)) != (void*)0)))), 0))) , 4294967288UL)))) , 0UL) > 0x1FC5FC05L), g_306));
                for (p_52 = 1; (p_52 >= 0); p_52 -= 1)
                { 
                    (*l_401) = (*l_401);
                    (*p_55) ^= 0L;
                    l_437 = &g_4;
                    --g_439[2];
                    l_442[1][2] = (g_74 = &g_15[2]);
                }
            }
        }
        else
        { 
            for (l_420 = 0; (l_420 < 23); l_420 = safe_add_func_int8_t_s_s(l_420, 4))
            { 
                return (**l_364);
            }
        }
    }
    for (g_308 = 0; (g_308 < 34); g_308 = safe_add_func_uint16_t_u_u(g_308, 9))
    { 
        uint32_t l_491 = 1UL;
        int8_t ***l_514 = &g_133;
        int32_t l_516 = 0x28E5D746L;
        int8_t l_519 = 0xD8L;
        uint16_t l_521 = 0xB8E8L;
        const uint8_t *l_527 = &g_388[0];
        const uint8_t **l_526 = &l_527;
        int8_t l_546 = 1L;
        struct S1 *****l_594 = &g_395;
        int32_t l_603 = 0xE44DF2AFL;
        int32_t l_604 = 0x528B2C3AL;
        int32_t l_605[1][6] = {{0x4AD75109L,1L,1L,0x4AD75109L,1L,1L}};
        int i, j;
    }
    return (*g_133);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);

    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_56.f2, "g_56.f2", print_hash_value);
    transparent_crc(g_56.f3, "g_56.f3", print_hash_value);
    transparent_crc(g_56.f4, "g_56.f4", print_hash_value);
    transparent_crc(g_56.f5, "g_56.f5", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_84[i][j][k], "g_84[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_107[i][j], "g_107[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_210.f0, "g_210.f0", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    transparent_crc(g_269.f1, "g_269.f1", print_hash_value);
    transparent_crc(g_269.f2, "g_269.f2", print_hash_value);
    transparent_crc(g_269.f3, "g_269.f3", print_hash_value);
    transparent_crc(g_269.f4.f0, "g_269.f4.f0", print_hash_value);
    transparent_crc(g_269.f4.f1, "g_269.f4.f1", print_hash_value);
    transparent_crc(g_269.f4.f2, "g_269.f4.f2", print_hash_value);
    transparent_crc(g_269.f4.f3, "g_269.f4.f3", print_hash_value);
    transparent_crc(g_269.f4.f4, "g_269.f4.f4", print_hash_value);
    transparent_crc(g_269.f4.f5, "g_269.f4.f5", print_hash_value);
    transparent_crc(g_269.f4.f6, "g_269.f4.f6", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_388[i], "g_388[i]", print_hash_value);

    }
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_435.f0, "g_435.f0", print_hash_value);
    transparent_crc(g_435.f1, "g_435.f1", print_hash_value);
    transparent_crc(g_435.f2, "g_435.f2", print_hash_value);
    transparent_crc(g_435.f3, "g_435.f3", print_hash_value);
    transparent_crc(g_435.f4, "g_435.f4", print_hash_value);
    transparent_crc(g_435.f5, "g_435.f5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_439[i], "g_439[i]", print_hash_value);

    }
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_661[i], "g_661[i]", print_hash_value);

    }
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_808.f0, "g_808.f0", print_hash_value);
    transparent_crc(g_916, "g_916", print_hash_value);
    transparent_crc(g_996, "g_996", print_hash_value);
    transparent_crc(g_1172, "g_1172", print_hash_value);
    transparent_crc(g_1222, "g_1222", print_hash_value);
    transparent_crc(g_1371.f0, "g_1371.f0", print_hash_value);
    transparent_crc(g_1371.f1, "g_1371.f1", print_hash_value);
    transparent_crc(g_1371.f2, "g_1371.f2", print_hash_value);
    transparent_crc(g_1371.f3, "g_1371.f3", print_hash_value);
    transparent_crc(g_1371.f4, "g_1371.f4", print_hash_value);
    transparent_crc(g_1371.f5, "g_1371.f5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1408[i], "g_1408[i]", print_hash_value);

    }
    transparent_crc(g_1462, "g_1462", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1516[i].f0, "g_1516[i].f0", print_hash_value);
        transparent_crc(g_1516[i].f1, "g_1516[i].f1", print_hash_value);
        transparent_crc(g_1516[i].f2, "g_1516[i].f2", print_hash_value);
        transparent_crc(g_1516[i].f3, "g_1516[i].f3", print_hash_value);
        transparent_crc(g_1516[i].f4, "g_1516[i].f4", print_hash_value);
        transparent_crc(g_1516[i].f5, "g_1516[i].f5", print_hash_value);

    }
    transparent_crc(g_1579, "g_1579", print_hash_value);
    transparent_crc(g_1606, "g_1606", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1655[i][j], "g_1655[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1805, "g_1805", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
