// SPDX-License-Identifier: MIT
// cctest_csmith_a1aa1b1d.c --- cctest case csmith_a1aa1b1d (csmith seed 2712279837)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb756c9c6 */

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

// Options:   -s 2712279837 -o /tmp/csmith_gen_hqs_zufe/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int16_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   const int16_t  f3;
};

union U1 {
   const int8_t  f0;
};

union U2 {
   const int8_t * f0;
   signed f1 : 30;
   unsigned f2 : 9;
   signed f3 : 21;
   int32_t  f4;
};


static int32_t g_2 = 0x8067E307L;
static int32_t g_6 = 0x2E96673EL;
static int8_t g_16 = 0x41L;
static int8_t *g_15 = &g_16;
static uint32_t g_19[1][5][7] = {{{0x40424B96L,18446744073709551606UL,0x67F5AEE0L,18446744073709551615UL,18446744073709551615UL,0x67F5AEE0L,18446744073709551606UL},{18446744073709551606UL,0x277EBD00L,18446744073709551609UL,0x277EBD00L,18446744073709551606UL,0x277EBD00L,18446744073709551609UL},{18446744073709551615UL,18446744073709551615UL,0x67F5AEE0L,18446744073709551606UL,0x40424B96L,0x40424B96L,18446744073709551606UL},{0x441791E6L,0xD9796A0BL,0x441791E6L,0x277EBD00L,0x441791E6L,0xD9796A0BL,0x441791E6L},{18446744073709551615UL,18446744073709551606UL,18446744073709551606UL,18446744073709551615UL,0x40424B96L,0x67F5AEE0L,0x67F5AEE0L}}};
static uint16_t g_36 = 0x1E75L;
static uint16_t g_58 = 65535UL;
static uint16_t *g_57 = &g_58;
static int32_t g_61 = 1L;
static const int8_t g_67 = 0xF8L;
static const int8_t *g_66 = &g_67;
static int32_t g_69 = 0x82A4162AL;
static uint32_t g_75 = 0x9D6F4693L;
static int32_t g_96 = 5L;
static int32_t g_100 = 0x11143DC2L;
static int32_t g_103 = 0xE32E7287L;
static int32_t g_112 = 0x431BEC19L;
static uint16_t g_113 = 0x5E9EL;
static union U1 g_126 = {0L};
static uint64_t g_146 = 18446744073709551613UL;
static uint32_t g_149 = 6UL;
static int32_t * const g_160 = &g_100;
static int32_t * const *g_159 = &g_160;
static int16_t g_166 = 0x4D60L;
static int64_t g_168 = (-1L);
static struct S0 g_203 = {0x13BEL,1UL,65531UL,0xE6FAL};
static int32_t **g_211 = (void*)0;
static int32_t **g_212 = (void*)0;
static union U2 g_235[5] = {{0},{0},{0},{0},{0}};
static union U2 *g_234 = &g_235[3];
static union U2 **g_233[2] = {&g_234,&g_234};
static uint8_t g_262 = 253UL;
static int8_t g_267 = 0xCBL;
static uint32_t g_323[4][6] = {{18446744073709551611UL,9UL,0UL,0x694E4AABL,9UL,0xA01B200FL},{0x694E4AABL,18446744073709551615UL,0x694E4AABL,0UL,9UL,18446744073709551611UL},{0x12D353DEL,18446744073709551615UL,0xDCBB15B2L,0x694E4AABL,0x694E4AABL,0xDCBB15B2L},{0xF3ED05CFL,0xF3ED05CFL,0xCE10AC72L,0x694E4AABL,18446744073709551615UL,0UL}};
static uint8_t g_330 = 1UL;
static int8_t g_342[7] = {0L,0L,0L,0L,0L,0L,0L};
static uint8_t g_345[7][2][5] = {{{0xE2L,255UL,255UL,0x22L,0x22L},{255UL,0xE2L,255UL,0x85L,0x22L}},{{1UL,0x83L,247UL,0UL,255UL},{255UL,0UL,0x64L,1UL,0xE2L}},{{0x29L,0xE2L,247UL,255UL,0x6AL},{0UL,255UL,255UL,0UL,0x29L}},{{0UL,1UL,255UL,0x52L,1UL},{0x29L,255UL,0x85L,247UL,0x22L}},{{255UL,0x29L,255UL,0x52L,247UL},{1UL,0UL,0x5AL,0UL,1UL}},{{255UL,0UL,0x29L,255UL,0xE2L},{0xE2L,0x29L,247UL,1UL,255UL}},{{0UL,255UL,1UL,0UL,0xE2L},{0x83L,1UL,0x85L,0x85L,1UL}}};
static uint64_t g_367 = 6UL;
static int8_t g_417 = 0x7DL;
static int8_t g_418 = 1L;
static uint32_t g_419 = 0x75A5B10DL;
static uint32_t g_425 = 1UL;
static uint8_t g_428[2][4][2] = {{{0xFCL,0UL},{0x80L,0UL},{0xFCL,0x80L},{0x25L,0x25L}},{{0x25L,0x80L},{0xFCL,0UL},{0x80L,0UL},{0xFCL,0x80L}}};
static int64_t g_465 = (-6L);
static int8_t g_466 = 0x27L;
static int8_t g_468 = (-1L);
static int64_t g_469 = 0x6F56A687C36A867BLL;
static uint16_t g_470 = 65535UL;
static uint32_t *g_507 = (void*)0;
static union U2 * const *g_527 = &g_234;
static union U2 * const **g_526 = &g_527;
static int8_t ** const g_732[7] = {&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15};
static int8_t ** const *g_731[5] = {&g_732[0],&g_732[0],&g_732[0],&g_732[0],&g_732[0]};
static int32_t *g_747 = &g_103;
static uint32_t g_769 = 0x54AD93DBL;
static uint8_t g_772[4][2][5] = {{{0x32L,246UL,0xD8L,246UL,0x32L},{0x32L,246UL,0xD8L,246UL,0x32L}},{{0x32L,246UL,0xD8L,246UL,0x32L},{0x32L,246UL,0xD8L,246UL,0x32L}},{{0x32L,246UL,0xD8L,246UL,0x32L},{0x32L,246UL,0xD8L,246UL,0x32L}},{{0x32L,246UL,0xD8L,246UL,0x32L},{0x32L,246UL,0xD8L,246UL,0x32L}}};
static const int32_t g_782 = 1L;
static const int32_t *g_781 = &g_782;
static const int32_t **g_780 = &g_781;
static union U2 ***g_794 = &g_233[1];
static uint64_t g_821 = 18446744073709551608UL;
static int32_t g_855 = 0x18D8A3EDL;
static uint32_t g_859 = 4294967295UL;
static uint64_t g_901[7] = {18446744073709551615UL,18446744073709551615UL,0xE3CC9831345FD99ELL,18446744073709551615UL,18446744073709551615UL,0xE3CC9831345FD99ELL,18446744073709551615UL};
static uint8_t g_1034 = 255UL;
static uint16_t ***g_1050 = (void*)0;
static uint16_t ****g_1053 = &g_1050;
static uint16_t *****g_1052[1][6][4] = {{{&g_1053,&g_1053,&g_1053,&g_1053},{&g_1053,&g_1053,&g_1053,&g_1053},{&g_1053,&g_1053,&g_1053,&g_1053},{&g_1053,&g_1053,&g_1053,&g_1053},{&g_1053,&g_1053,&g_1053,&g_1053},{&g_1053,&g_1053,&g_1053,&g_1053}}};
static int8_t ****g_1208 = (void*)0;
static uint64_t g_1334 = 1UL;
static uint8_t *g_1367[1][5] = {{&g_1034,&g_1034,&g_1034,&g_1034,&g_1034}};
static uint8_t **g_1366 = &g_1367[0][0];
static int8_t g_1406 = 0xA5L;
static int8_t g_1407 = (-2L);
static int64_t g_1408 = 0x9CBAD478332A55C6LL;
static uint8_t g_1409 = 5UL;
static uint32_t g_1450 = 0x6B38C2B3L;
static int32_t ***g_1459 = &g_212;
static int32_t ****g_1458 = &g_1459;
static uint8_t g_1487[3][7][5] = {{{7UL,7UL,0x1DL,0xAAL,246UL},{0UL,0xEAL,0xEAL,0UL,7UL},{0UL,0xAAL,0xF9L,0xF9L,0xAAL},{7UL,0xEAL,0xF9L,0x1DL,0x1DL},{0xEAL,7UL,0xEAL,0xF9L,0x1DL},{0xAAL,0UL,0x1DL,0UL,0xAAL},{0xEAL,0UL,7UL,0xAAL,7UL}},{{7UL,7UL,0x1DL,0xAAL,246UL},{0UL,0xEAL,0xEAL,0UL,7UL},{0UL,0xAAL,0xF9L,0xF9L,0xAAL},{7UL,0xEAL,0xF9L,0x1DL,0x1DL},{0xEAL,7UL,0xEAL,0xF9L,0x1DL},{0xAAL,0UL,0x1DL,0UL,0xAAL},{0xEAL,0UL,7UL,0xAAL,7UL}},{{7UL,7UL,0x1DL,0xAAL,246UL},{0UL,0xEAL,0xEAL,0UL,7UL},{0UL,0xAAL,0xF9L,0xF9L,0xAAL},{7UL,0xEAL,0xF9L,0x1DL,0x1DL},{0xEAL,7UL,0xEAL,0xF9L,0x1DL},{0xAAL,0UL,0x1DL,0UL,0xAAL},{0xEAL,0UL,7UL,0xAAL,7UL}}};
static uint64_t *g_1491 = &g_821;
static uint64_t **g_1490[7][4] = {{&g_1491,&g_1491,&g_1491,&g_1491},{&g_1491,&g_1491,&g_1491,&g_1491},{&g_1491,&g_1491,&g_1491,&g_1491},{&g_1491,&g_1491,&g_1491,&g_1491},{&g_1491,&g_1491,&g_1491,&g_1491},{&g_1491,&g_1491,&g_1491,&g_1491},{&g_1491,&g_1491,&g_1491,&g_1491}};
static uint64_t ***g_1489 = &g_1490[3][0];
static int32_t g_1545[3][6] = {{0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL},{0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL},{0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL,0xB56C7D4BL}};
static uint16_t g_1720 = 0x11FBL;
static uint8_t ***g_1731 = &g_1366;
static union U2 ****g_1775 = &g_794;
static union U2 *****g_1774 = &g_1775;
static int64_t *g_1812[7][3][7] = {{{&g_168,&g_465,&g_168,&g_1408,&g_168,&g_168,(void*)0},{&g_168,(void*)0,(void*)0,(void*)0,(void*)0,&g_168,&g_465},{&g_168,&g_1408,&g_469,&g_168,(void*)0,&g_465,&g_1408}},{{&g_1408,&g_168,&g_168,&g_1408,&g_168,&g_168,&g_1408},{&g_168,&g_168,&g_168,&g_465,&g_168,&g_469,&g_465},{(void*)0,&g_168,&g_1408,&g_168,&g_168,&g_1408,&g_168}},{{&g_168,(void*)0,&g_168,&g_465,(void*)0,&g_465,&g_168},{&g_1408,&g_168,&g_465,&g_1408,&g_168,&g_1408,&g_465},{&g_168,&g_168,&g_168,&g_465,&g_168,&g_1408,&g_168}},{{&g_168,&g_465,&g_168,&g_168,&g_469,&g_469,&g_168},{&g_1408,&g_168,&g_1408,&g_465,&g_168,&g_1408,(void*)0},{&g_168,&g_168,(void*)0,&g_465,&g_168,&g_168,&g_168}},{{(void*)0,&g_465,&g_465,(void*)0,(void*)0,&g_1408,&g_168},{&g_469,&g_168,&g_465,&g_168,&g_168,&g_469,&g_469},{&g_168,&g_168,(void*)0,&g_168,&g_168,&g_1408,&g_168}},{{(void*)0,(void*)0,&g_1408,&g_168,&g_465,&g_1408,&g_168},{&g_465,&g_168,&g_168,&g_168,&g_168,&g_465,(void*)0},{(void*)0,&g_168,&g_168,(void*)0,&g_168,&g_1408,&g_168}},{{&g_168,&g_469,&g_465,&g_465,&g_465,&g_469,&g_168},{&g_469,&g_168,&g_168,&g_465,&g_168,&g_469,&g_465},{(void*)0,&g_168,&g_1408,&g_168,&g_168,&g_1408,&g_168}}};
static uint32_t g_1829[6] = {0x4EADDEEEL,0x4EADDEEEL,0x4EADDEEEL,0x4EADDEEEL,0x4EADDEEEL,0x4EADDEEEL};
static int16_t *g_1849 = (void*)0;
static int16_t **g_1848 = &g_1849;
static uint16_t g_1874 = 0xAEE8L;
static int32_t g_1883 = (-1L);
static int32_t *****g_1942 = &g_1458;
static int64_t **g_2020 = &g_1812[2][2][2];
static union U1 g_2071 = {0x39L};
static int8_t *g_2083 = &g_1406;
static int32_t *g_2125[1] = {&g_100};
static uint8_t g_2177 = 9UL;
static uint32_t ***g_2261 = (void*)0;
static const uint32_t *g_2271 = &g_203.f1;
static const uint32_t **g_2270[5][2][3] = {{{&g_2271,(void*)0,(void*)0},{(void*)0,&g_2271,&g_2271}},{{&g_2271,&g_2271,&g_2271},{&g_2271,(void*)0,&g_2271}},{{&g_2271,&g_2271,(void*)0},{&g_2271,(void*)0,(void*)0}},{{(void*)0,&g_2271,&g_2271},{&g_2271,&g_2271,&g_2271}},{{&g_2271,(void*)0,&g_2271},{&g_2271,&g_2271,(void*)0}}};
static const uint32_t *** const g_2269 = &g_2270[3][0][2];



static uint32_t  func_1(void);
static int32_t  func_7(union U2  p_8, uint8_t  p_9, int16_t  p_10, const int8_t * p_11, union U1  p_12);
static union U2  func_20(uint16_t  p_21, int8_t * p_22, const int16_t  p_23);
static union U2  func_24(int32_t  p_25, uint32_t  p_26, int32_t  p_27, int8_t  p_28);
static int16_t  func_30(int8_t ** const  p_31, int16_t  p_32, int8_t * p_33);
static int32_t  func_37(int8_t ** p_38, uint64_t  p_39, int64_t  p_40, uint16_t * p_41);
static uint16_t * func_42(int8_t ** p_43, int8_t  p_44, int8_t * p_45);
static uint16_t  func_54(uint16_t * p_55, int8_t * p_56);




static uint32_t  func_1(void)
{ 
    uint32_t l_29 = 0x55F1BB13L;
    int8_t *l_34 = &g_16;
    int8_t *l_2032[1][7][1] = {{{&g_418},{&g_466},{&g_418},{&g_466},{&g_418},{&g_466},{&g_418}}};
    union U1 l_2051 = {-10L};
    int32_t l_2095[4] = {0x389FB018L,0x389FB018L,0x389FB018L,0x389FB018L};
    struct S0 *l_2156 = &g_203;
    int32_t l_2157 = 0xA8C36075L;
    int32_t l_2158 = 0xF02F0620L;
    int32_t *l_2229 = &g_1545[1][4];
    int16_t l_2254[2][4][5] = {{{1L,1L,1L,0x6ECDL,0x6ECDL},{0xA4FBL,6L,0xA4FBL,0x510EL,0x510EL},{1L,1L,1L,0x6ECDL,0x6ECDL},{0xA4FBL,6L,0xA4FBL,0x510EL,0x510EL}},{{1L,1L,1L,0x6ECDL,0x6ECDL},{0x67FEL,0xB47EL,0x67FEL,0xA4FBL,0xA4FBL},{0x29E7L,0xB213L,0x29E7L,1L,1L},{0x67FEL,0xB47EL,0x67FEL,0xA4FBL,0xA4FBL}}};
    const int16_t l_2255 = 0x3242L;
    uint32_t ****l_2262[4];
    int32_t *** const l_2268 = &g_211;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2262[i] = (void*)0;
    for (g_2 = 7; (g_2 > (-22)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 1))
    { 
        int64_t l_5[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
        const int8_t *l_17[1];
        int32_t l_2089[6][4][5] = {{{1L,0x955BD4DBL,0x955BD4DBL,1L,0x478531E9L},{0L,8L,2L,9L,0x74313DD5L},{8L,0x75D81964L,8L,0x478531E9L,8L},{0x74313DD5L,0x955BD4DBL,(-2L),9L,0L}},{{0L,0x74313DD5L,6L,1L,(-4L)},{8L,(-4L),0L,0L,(-4L)},{0L,0x2909F65BL,0x956A3014L,0L,0L},{0x75D81964L,0L,2L,0L,8L}},{{0x956A3014L,0L,0x2909F65BL,0L,0x74313DD5L},{0x75D81964L,0x955BD4DBL,0xECD0EC18L,0x75D81964L,0x478531E9L},{0L,1L,2L,0L,0L},{8L,1L,8L,0x478531E9L,0x75D81964L}},{{0L,0x955BD4DBL,0x478531E9L,0x74313DD5L,0L},{0x74313DD5L,0L,6L,8L,0L},{8L,0L,0x478531E9L,0L,0L},{0L,0x2909F65BL,8L,(-4L),0L}},{{1L,(-4L),2L,(-4L),1L},{0x956A3014L,0x74313DD5L,0xECD0EC18L,0L,9L},{8L,0x955BD4DBL,0x2909F65BL,8L,0x478531E9L},{(-4L),0x75D81964L,2L,0x74313DD5L,9L}},{{8L,8L,0x956A3014L,0x478531E9L,1L},{9L,0x955BD4DBL,0L,0L,0L},{9L,9L,6L,0x75D81964L,0L},{8L,0L,(-2L),0L,0L}}};
        int8_t l_2140 = 0L;
        uint32_t l_2141[7];
        uint8_t l_2176[3];
        int32_t l_2200 = 0L;
        const int8_t l_2227 = 0xC6L;
        int64_t l_2234 = 0L;
        int32_t *l_2260 = &g_100;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_17[i] = &g_16;
        for (i = 0; i < 7; i++)
            l_2141[i] = 18446744073709551615UL;
        for (i = 0; i < 3; i++)
            l_2176[i] = 0x1EL;
        for (g_6 = 4; (g_6 >= 0); g_6 -= 1)
        { 
            const int8_t **l_18 = &l_17[0];
            int32_t *l_2068 = &g_69;
            union U1 *l_2070[4][6] = {{&g_2071,&g_2071,&g_2071,&g_2071,&g_2071,&g_2071},{&g_2071,&g_2071,&g_2071,&g_2071,&g_2071,&g_2071},{&g_2071,&g_2071,&g_2071,&g_2071,&g_2071,&g_2071},{&g_2071,&g_2071,&g_2071,&g_2071,&g_2071,&g_2071}};
            int32_t l_2096 = 0L;
            int8_t l_2097 = 0x3EL;
            int32_t l_2098 = (-5L);
            uint32_t l_2100 = 0UL;
            int8_t *l_2106 = &g_342[2];
            int16_t * const l_2121 = &g_166;
            int16_t l_2122 = 0L;
            union U2 l_2123 = {0};
            int32_t l_2124 = 0L;
            struct S0 l_2132 = {1L,0x15DF6B30L,0xC572L,1L};
            uint8_t * const *l_2136[7] = {&g_1367[0][1],&g_1367[0][1],&g_1367[0][1],&g_1367[0][1],&g_1367[0][1],&g_1367[0][1],&g_1367[0][1]};
            uint8_t * const **l_2135 = &l_2136[4];
            uint8_t * const ***l_2134 = &l_2135;
            int32_t l_2139[4];
            uint8_t l_2171 = 0x0AL;
            uint32_t l_2202 = 3UL;
            uint16_t l_2251[5];
            int i, j;
            for (i = 0; i < 4; i++)
                l_2139[i] = 0L;
            for (i = 0; i < 5; i++)
                l_2251[i] = 4UL;
        }
        (**g_159) &= (l_2089[5][3][0] ^= (((((*l_2229) < l_2176[2]) ^ ((safe_sub_func_int64_t_s_s((0xE9B6D6E5L == (*l_2229)), 0xB1974F554BE1D977LL)) , ((g_1545[2][2] , (safe_rshift_func_uint8_t_u_u(((***g_1731) ^= (((*g_2020) = (*g_2020)) == (void*)0)), l_2176[2]))) != 0xEB1A06A8A8F84545LL))) >= g_1334) ^ (*l_2229)));
        (*g_780) = l_2260;
        if ((**g_780))
            break;
    }
    (*g_160) &= (((*l_2229) = (((*g_15) = 0x42L) != (((void*)0 == (**g_1942)) , (((g_2261 = g_2261) != ((safe_sub_func_uint8_t_u_u(((+0L) && 0L), ((*g_2083) = (((**g_527) , l_2268) != (void*)0)))) , g_2269)) , (*l_2229))))) > (***g_1489));
    return g_69;
}



static int32_t  func_7(union U2  p_8, uint8_t  p_9, int16_t  p_10, const int8_t * p_11, union U1  p_12)
{ 
    int32_t l_2055 = 1L;
    uint32_t *l_2062 = (void*)0;
    int32_t l_2063 = (-8L);
    l_2063 ^= ((-9L) || (l_2055 = (((*g_15) = (1L > (!((p_8.f2 = (((safe_add_func_uint16_t_u_u((l_2055 , l_2055), (safe_rshift_func_int16_t_s_s((65535UL >= ((0x63L || (safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((l_2055 , l_2055) > l_2055), l_2055)), 3))) > 0x8D44L)), 7)))) && 0x5BD2C888L) < l_2055)) > l_2055)))) >= 0xA0L)));
    for (g_1034 = (-10); (g_1034 == 48); g_1034 = safe_add_func_uint8_t_u_u(g_1034, 9))
    { 
        if (p_10)
            break;
        for (g_855 = 3; (g_855 <= (-26)); g_855--)
        { 
            (*g_747) |= 0x583CD3E5L;
            return p_10;
        }
        return l_2055;
    }
    return l_2063;
}



static union U2  func_20(uint16_t  p_21, int8_t * p_22, const int16_t  p_23)
{ 
    int8_t l_2039 = 0x66L;
    uint16_t l_2040 = 0UL;
    int32_t **l_2041 = &g_747;
    int64_t **l_2044 = &g_1812[3][1][3];
    int16_t *l_2045 = &g_166;
    union U2 l_2050 = {0};
    (*l_2041) = ((((0x5E2A4AD7L >= ((**g_159) = p_23)) , (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u(l_2039, p_21)) <= p_21), 13)), ((**g_159) & (*g_747))))) , l_2040) , (*g_159));
    (*g_747) = (safe_mod_func_uint64_t_u_u((((void*)0 != &l_2039) >= (((void*)0 == l_2044) || (((*l_2045) = p_23) , p_21))), (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((-1L), p_23)), p_21))));
    (*g_160) = ((-1L) | (((**l_2041) < (**l_2041)) >= (*g_15)));
    return l_2050;
}



static union U2  func_24(int32_t  p_25, uint32_t  p_26, int32_t  p_27, int8_t  p_28)
{ 
    int32_t l_2006 = 3L;
    union U2 l_2009[2][1][4] = {{{{0},{0},{0},{0}}},{{{0},{0},{0},{0}}}};
    int64_t **l_2017 = &g_1812[1][1][3];
    int64_t ***l_2018 = &l_2017;
    int64_t **l_2019 = (void*)0;
    struct S0 l_2021 = {4L,0xDEC70AA4L,0x3FC9L,0x854EL};
    int8_t l_2022[3];
    int32_t *l_2023[1];
    uint16_t l_2024 = 65534UL;
    int64_t l_2030[7][2] = {{0x672F91C79A1CA19ELL,1L},{0x672F91C79A1CA19ELL,0x672F91C79A1CA19ELL},{1L,0x672F91C79A1CA19ELL},{0x672F91C79A1CA19ELL,1L},{0x672F91C79A1CA19ELL,0x672F91C79A1CA19ELL},{1L,0x672F91C79A1CA19ELL},{1L,0xE7B056E781AC6767LL}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2022[i] = 0xF7L;
    for (i = 0; i < 1; i++)
        l_2023[i] = &g_1545[1][4];
    l_2024 = ((g_1545[0][4] = (((**g_159) = 3L) , (p_27 = ((--(*g_57)) > (((((((l_2009[1][0][3] , (safe_div_func_uint64_t_u_u((***g_1489), (~((((*g_747) = l_2006) >= ((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((((*l_2018) = l_2017) != (g_2020 = l_2019)), (((l_2006 , l_2021) , 0x966DCABF9F0028BALL) && 0xE322A4A07A0AAD62LL))), p_28)) <= 1L)) != (**g_159)))))) , l_2022[2]) && (-1L)) ^ 0xCFL) , (*g_1774)) == (*g_1774)) != l_2021.f2))))) != p_26);
    l_2023[0] = (void*)0;
    (*g_747) ^= 0L;
    for (g_821 = 0; (g_821 < 49); ++g_821)
    { 
        int32_t l_2027 = (-4L);
        union U2 l_2031[2][3][3] = {{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}},{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}}};
        int i, j, k;
        (*g_747) |= 0x4D872166L;
        (*g_160) = (p_27 , (p_26 ^ l_2027));
        p_27 &= (l_2030[4][0] ^ 0L);
        return l_2031[0][0][0];
    }
    (**g_159) = 1L;
    return l_2009[0][0][2];
}



static int16_t  func_30(int8_t ** const  p_31, int16_t  p_32, int8_t * p_33)
{ 
    uint16_t *l_35 = &g_36;
    int8_t **l_46 = &g_15;
    int32_t l_47 = (-1L);
    int32_t l_1863 = 1L;
    int32_t l_1864[7] = {1L,1L,0x00B877E3L,1L,1L,0x00B877E3L,1L};
    int32_t *l_1865 = &g_1545[2][2];
    int32_t *l_1866 = &l_1864[3];
    int32_t *l_1867 = &g_1545[0][2];
    int32_t *l_1868 = &g_69;
    int32_t *l_1869 = &g_61;
    int32_t *l_1870 = (void*)0;
    int32_t *l_1871 = &g_69;
    int32_t *l_1872[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int16_t l_1873 = 0xA069L;
    int32_t *l_1909 = (void*)0;
    int8_t l_1944 = 0L;
    uint32_t l_1946 = 1UL;
    union U1 l_1966 = {0x68L};
    int i, j;
    l_47 = ((((*l_35) = 0x108FL) & ((func_37(&g_15, g_16, g_16, func_42(l_46, l_47, (*l_46))) ^ l_47) >= (**g_1366))) >= l_47);
lbl_1923:
    --g_1874;
lbl_1918:
    (*g_747) |= (safe_div_func_int16_t_s_s(((**p_31) <= (safe_add_func_int32_t_s_s((*l_1865), ((0x73L == ((&l_1866 != (void*)0) != (safe_mul_func_uint16_t_u_u(p_32, (*l_1868))))) , (*l_1869))))), g_1883));
    for (g_149 = 10; (g_149 > 4); g_149 = safe_sub_func_int32_t_s_s(g_149, 1))
    { 
        int32_t l_1890 = 0xF0A6BDDCL;
        int16_t *l_1895 = (void*)0;
        int16_t *l_1896 = &g_166;
        struct S0 l_1897 = {-7L,4294967294UL,65535UL,9L};
        union U2 *****l_1908 = &g_1775;
        uint16_t l_1920 = 65535UL;
        int32_t *****l_1941 = &g_1458;
        int32_t l_1943 = 0x455AC047L;
        int32_t l_1945 = 0xC1C0AAAFL;
        uint16_t **l_1962[5] = {&g_57,&g_57,&g_57,&g_57,&g_57};
        uint16_t ***l_1961 = &l_1962[2];
        int i;
        if (((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(l_1890, (safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*l_1896) |= (-2L)), ((*l_1865) <= 0L))), ((*l_1868) && 0UL))))), (l_1897 , 0xF9FC858FL))) < (*p_33)))
        { 
            uint32_t l_1907 = 0x9F3D6996L;
            uint16_t * const *l_1914 = &l_35;
            int32_t l_1919[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            (*l_1867) = (safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((0xE8L ^ ((((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_32, l_1897.f2)), 3)) , ((*g_57) = (!(l_1907 <= ((l_1908 = l_1908) == ((l_1907 != p_32) , (void*)0)))))) , p_32) < p_32)), p_32)) , (*l_1871)), 7));
            (*g_780) = l_1909;
            for (g_367 = 0; (g_367 <= 1); g_367 += 1)
            { 
                uint64_t l_1910 = 1UL;
                uint16_t **l_1913 = (void*)0;
                uint8_t ****l_1928[3][6] = {{&g_1731,(void*)0,(void*)0,(void*)0,(void*)0,&g_1731},{&g_1731,&g_1731,&g_1731,(void*)0,&g_1731,(void*)0},{&g_1731,&g_1731,&g_1731,(void*)0,&g_1731,&g_1731}};
                int i, j;
                ++l_1910;
                (*g_780) = &l_1864[2];
                if (p_32)
                { 
                    uint32_t l_1915 = 9UL;
                    (**g_159) = (l_1913 != l_1914);
                    l_1915--;
                    if (p_32)
                        break;
                    if (l_1897.f1)
                        goto lbl_1918;
                }
                else
                { 
                    return p_32;
                }
                l_1920--;
                for (l_1897.f1 = 0; (l_1897.f1 <= 4); l_1897.f1 += 1)
                { 
                    if (l_1890)
                        goto lbl_1923;
                    return p_32;
                }
                for (g_69 = 1; (g_69 >= 0); g_69 -= 1)
                { 
                    int64_t *l_1940 = &g_168;
                    int i;
                    (*g_747) |= (((*l_1940) = (safe_add_func_uint16_t_u_u((l_1897.f3 < (l_1890 <= ((void*)0 == l_1928[0][1]))), (((*g_160) = ((safe_div_func_int64_t_s_s(((((**g_1458) == ((safe_div_func_int8_t_s_s(((**p_31) = (((+((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(l_1910, ((l_1919[0] & p_32) ^ p_32))) && p_32), 65531UL)), l_1919[0])) , l_1919[0])) & 0x88ADL) , 0x58L)), 0xC5L)) , (void*)0)) != 0xD1B0L) , p_32), l_1897.f2)) < l_1919[3])) & p_32)))) | l_1910);
                    l_1941 = (g_203 , (g_1942 = l_1941));
                }
            }
            ++l_1946;
            (*l_1869) = (**g_159);
        }
        else
        { 
            int32_t l_1958[2];
            int64_t *l_1963 = &g_469;
            int i;
            for (i = 0; i < 2; i++)
                l_1958[i] = 0x1AA5C639L;
            (*g_747) |= (p_32 && (((safe_rshift_func_int16_t_s_u(0xF785L, 7)) < p_32) <= ((*l_1963) = ((+g_468) && ((*g_57) &= ((safe_sub_func_uint16_t_u_u(p_32, ((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(l_1958[0], ((safe_lshift_func_uint8_t_u_s(1UL, 2)) , (*l_1868)))) != (**g_1366)), p_32)) , l_1961) != (void*)0) , (*l_1867)))) == g_166))))));
            (*l_1869) = p_32;
        }
        if (p_32)
            break;
        for (l_47 = 4; (l_47 == 12); l_47 = safe_add_func_uint8_t_u_u(l_47, 1))
        { 
            struct S0 l_1986 = {0x9A55L,0xFBF874E5L,2UL,7L};
            int32_t *l_1991[1][2][7];
            uint32_t **l_1992[6] = {&g_507,&g_507,&g_507,&g_507,&g_507,&g_507};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_1991[i][j][k] = &g_69;
                }
            }
            for (g_1407 = 0; g_1407 < 2; g_1407 += 1)
            {
                for (g_203.f2 = 0; g_203.f2 < 4; g_203.f2 += 1)
                {
                    for (p_32 = 0; p_32 < 2; p_32 += 1)
                    {
                        g_428[g_1407][g_203.f2][p_32] = 0x55L;
                    }
                }
            }
            (*g_747) = (((l_1966 , (void*)0) != (**g_1774)) , (safe_add_func_int64_t_s_s(p_32, ((*g_1491) == (safe_rshift_func_int16_t_s_s(g_19[0][2][2], (65535UL & p_32)))))));
            (*g_780) = &l_1864[2];
            for (g_203.f1 = (-2); (g_203.f1 <= 22); g_203.f1++)
            { 
                int32_t l_1973 = 0xCA92CCC1L;
                uint32_t ***l_1993 = &l_1992[3];
                uint32_t **l_1994 = (void*)0;
                (*l_1869) |= (l_1973 == ((((l_1994 = ((*l_1993) = ((safe_add_func_int8_t_s_s(((((((((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((*p_33), ((safe_div_func_uint64_t_u_u(p_32, p_32)) , 0L))), (l_1986 , (((*l_1868) = (((*l_1866) &= (safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(l_1986.f3, 5UL)) <= l_1986.f1), l_1986.f3))) == g_2)) , p_32)))), 3)), 0UL)) , l_1991[0][0][3]) == (*g_159)) > 65535UL) || 0x2DL) , g_468) | l_1973) >= 0x67L), p_32)) , l_1992[3]))) != &g_507) < 0x17BBL) != 0x9FD5E824L));
                if (p_32)
                    continue;
            }
        }
        for (l_1897.f1 = 0; (l_1897.f1 != 12); l_1897.f1 = safe_add_func_int32_t_s_s(l_1897.f1, 4))
        { 
            struct S0 *l_1998 = &l_1897;
            struct S0 **l_1997 = &l_1998;
            (*l_1997) = &g_203;
        }
    }
    for (g_166 = 0; (g_166 <= 27); ++g_166)
    { 
        uint16_t l_2001[5][1][2] = {{{0xEDB9L,0xEDB9L}},{{0xEDB9L,0xEDB9L}},{{0xEDB9L,0xEDB9L}},{{0xEDB9L,0xEDB9L}},{{0xEDB9L,0xEDB9L}}};
        int i, j, k;
        l_2001[3][0][1]--;
        if (g_69)
            goto lbl_1923;
    }
    return p_32;
}



static int32_t  func_37(int8_t ** p_38, uint64_t  p_39, int64_t  p_40, uint16_t * p_41)
{ 
    uint32_t l_1176 = 4294967295UL;
    int8_t **l_1206 = &g_15;
    int8_t ***l_1205[7][6] = {{&l_1206,&l_1206,&l_1206,&l_1206,&l_1206,&l_1206},{&l_1206,&l_1206,&l_1206,&l_1206,&l_1206,&l_1206},{&l_1206,&l_1206,&l_1206,&l_1206,&l_1206,&l_1206},{&l_1206,&l_1206,&l_1206,&l_1206,&l_1206,&l_1206},{&l_1206,&l_1206,&l_1206,&l_1206,&l_1206,&l_1206},{&l_1206,&l_1206,&l_1206,&l_1206,&l_1206,&l_1206},{&l_1206,&l_1206,&l_1206,&l_1206,&l_1206,&l_1206}};
    int8_t ****l_1204 = &l_1205[4][3];
    uint16_t ** const l_1228 = &g_57;
    int32_t l_1257[6][7] = {{0x2D8255A8L,0x6F2E1B5BL,(-1L),(-4L),0xB1786752L,0x4E5230D5L,0xF1737747L},{0x0BC1A0EEL,0x9B32C2B3L,0xF637B16EL,0xF1737747L,0x2D8255A8L,0x0F33ABA8L,0x0F33ABA8L},{0xF637B16EL,0L,(-1L),0L,0xF637B16EL,0x7BBDE69BL,0x82A3944FL},{0x82A3944FL,0L,0xDFBD2E75L,0x6F2E1B5BL,(-4L),0x577A0CFEL,0x2D8255A8L},{0L,0x9B32C2B3L,(-4L),(-9L),(-1L),(-1L),(-9L)},{0x82A3944FL,0x6F2E1B5BL,0x82A3944FL,(-1L),0x4E5230D5L,0x9B32C2B3L,(-9L)}};
    int32_t l_1258 = 0xC0DD2943L;
    uint8_t l_1285[3];
    uint64_t *l_1297 = &g_367;
    int8_t **l_1300 = &g_15;
    union U1 l_1317 = {0x79L};
    struct S0 l_1322 = {0L,0UL,65529UL,1L};
    uint32_t *l_1325 = &g_769;
    uint32_t **l_1327 = &g_507;
    int32_t l_1370 = 0x278A7AA1L;
    uint16_t l_1481 = 0UL;
    uint64_t l_1496 = 18446744073709551614UL;
    int32_t *l_1503[1][6];
    int64_t l_1513[2];
    uint16_t l_1524[6] = {65532UL,65532UL,65532UL,65532UL,65532UL,65532UL};
    int8_t l_1525[7][6] = {{(-1L),(-4L),0x6EL,(-4L),(-1L),4L},{(-1L),(-4L),0xA7L,(-1L),0x17L,(-1L)},{(-1L),0x17L,(-1L),(-4L),(-4L),(-1L)},{(-1L),(-1L),0xA7L,0x59L,(-4L),4L},{0xAEL,(-1L),0x17L,0xC3L,(-1L),(-1L)},{0xE5L,0xAEL,0x17L,0xAEL,0xE5L,(-4L)},{0x9EL,0xAEL,(-1L),0x9EL,(-1L),0x59L}};
    int16_t * const l_1591 = &g_166;
    int16_t * const *l_1590 = &l_1591;
    union U2 ****l_1595 = &g_794;
    int32_t * const * const *l_1653 = &g_159;
    int32_t * const * const **l_1652 = &l_1653;
    int32_t * const * const ***l_1651 = &l_1652;
    int32_t l_1655[6][1][6] = {{{(-10L),0x5F0C5645L,(-10L),(-4L),0x4B98978CL,0xBB37AF65L}},{{0x7DC611B7L,(-4L),0x499E5CC3L,0xC0D61517L,0x8AA60970L,0x8AA60970L}},{{0xC0D61517L,0x8AA60970L,0x8AA60970L,0xC0D61517L,0x499E5CC3L,(-4L)}},{{0x7DC611B7L,0xBB37AF65L,0x4B98978CL,(-4L),(-10L),0x5F0C5645L}},{{(-10L),0x499E5CC3L,9L,0x499E5CC3L,(-10L),(-1L)}},{{0x5F0C5645L,0xBB37AF65L,0xBE592FC1L,0xA9EA8382L,0x499E5CC3L,0x4B98978CL}}};
    uint32_t *l_1685 = &g_149;
    uint8_t l_1817[6] = {250UL,250UL,250UL,250UL,250UL,250UL};
    int16_t *l_1847 = &g_166;
    int16_t **l_1846 = &l_1847;
    int16_t ***l_1850 = &g_1848;
    int32_t l_1862 = 0x4B4996DBL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1285[i] = 255UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_1503[i][j] = (void*)0;
    }
    for (i = 0; i < 2; i++)
        l_1513[i] = (-2L);
    for (g_330 = (-21); (g_330 > 54); g_330 = safe_add_func_uint8_t_u_u(g_330, 3))
    { 
        uint64_t *l_1167 = &g_367;
        int32_t l_1170[7][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x679A845AL,(-4L),0x679A845AL,(-4L),0x679A845AL},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x679A845AL,(-4L),0x679A845AL,(-4L),0x679A845AL},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0x679A845AL,(-4L),0x679A845AL,(-4L),0x679A845AL},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
        int8_t ***l_1210 = &l_1206;
        const int8_t * const *l_1212[2];
        const int8_t * const **l_1211[6];
        uint8_t *l_1222 = &g_1034;
        uint8_t **l_1221 = &l_1222;
        union U2 l_1242 = {0};
        int32_t *l_1244 = &g_103;
        uint32_t l_1277[2];
        int16_t l_1281 = 1L;
        int32_t *l_1282 = &g_103;
        int32_t *l_1283[6] = {&l_1258,&l_1257[5][6],&l_1258,&l_1258,&l_1257[5][6],&l_1258};
        int64_t l_1284 = 0L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1212[i] = &g_66;
        for (i = 0; i < 6; i++)
            l_1211[i] = &l_1212[0];
        for (i = 0; i < 2; i++)
            l_1277[i] = 18446744073709551607UL;
    }
    return p_39;
}



static uint16_t * func_42(int8_t ** p_43, int8_t  p_44, int8_t * p_45)
{ 
    const int64_t l_817 = (-1L);
    int32_t l_819 = 0xA7EF28F0L;
    int32_t l_856 = (-3L);
    int32_t l_857 = 0x4008EEE8L;
    int32_t l_858[6][6][2] = {{{0x2C4C7608L,0x800FB706L},{1L,0x800FB706L},{0x2C4C7608L,0x5805A011L},{0x7D343048L,1L},{3L,0L},{0xE7CAFCF3L,(-1L)}},{{0L,0x2C4C7608L},{0xB2563328L,0xB2563328L},{(-7L),0x7D343048L},{0xBE0D6085L,0x91C40D7EL},{0x859BACD2L,(-1L)},{0x1440FA50L,0x859BACD2L}},{{0L,0L},{0L,0x859BACD2L},{0x1440FA50L,(-1L)},{0x859BACD2L,0x91C40D7EL},{0xBE0D6085L,0x7D343048L},{(-7L),0xB2563328L}},{{0xB2563328L,0x2C4C7608L},{0L,(-1L)},{0xE7CAFCF3L,0L},{3L,1L},{0x7D343048L,0x5805A011L},{0x2C4C7608L,0x800FB706L}},{{1L,0x800FB706L},{0x2C4C7608L,0x5805A011L},{0x7D343048L,1L},{3L,0L},{0xE7CAFCF3L,(-1L)},{0L,0x2C4C7608L}},{{0xB2563328L,0xB2563328L},{(-7L),0x7D343048L},{0xBE0D6085L,0x91C40D7EL},{0x859BACD2L,(-1L)},{0x1440FA50L,0x859BACD2L},{0L,0L}}};
    int8_t **l_870 = &g_15;
    uint16_t l_877 = 0xE6A7L;
    union U2 **l_880 = &g_234;
    int32_t *l_885 = (void*)0;
    uint16_t l_944 = 65535UL;
    uint16_t **l_955 = &g_57;
    uint16_t ***l_954 = &l_955;
    union U1 l_1077[5] = {{0xF8L},{0xF8L},{0xF8L},{0xF8L},{0xF8L}};
    int64_t l_1088 = 0xDEA76DAA3947388DLL;
    int16_t l_1098[1][1][3];
    int32_t l_1113 = 0x3E4B51BFL;
    const uint32_t l_1150 = 0x08AD99A7L;
    uint16_t l_1162 = 65528UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_1098[i][j][k] = 0xDC0CL;
        }
    }
    for (p_44 = 2; (p_44 < (-21)); p_44 = safe_sub_func_uint32_t_u_u(p_44, 9))
    { 
        int64_t l_816 = 0xE4EEC08A5A2E0A7DLL;
        int32_t l_820[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
        int8_t *l_832 = (void*)0;
        uint16_t *l_846 = &g_470;
        int i;
    }
    return (**l_954);
}



static uint16_t  func_54(uint16_t * p_55, int8_t * p_56)
{ 
    const int16_t l_59[6] = {0L,0L,3L,0L,0L,3L};
    int32_t *l_60 = &g_61;
    const int8_t *l_64 = &g_16;
    const int8_t **l_65[3];
    int32_t *l_68 = &g_69;
    union U2 l_70[1][2] = {{{0},{0}}};
    int32_t l_73 = 0x22F105EEL;
    uint32_t *l_74 = &g_75;
    uint16_t l_124 = 0xEC56L;
    uint64_t *l_145 = &g_146;
    uint8_t l_179 = 1UL;
    const uint32_t l_181 = 0xFEC7DE13L;
    union U2 *l_221 = &l_70[0][0];
    union U2 ***l_271 = &g_233[1];
    int32_t l_296 = 0x8D8C5060L;
    int32_t l_315 = 0x6EC5EEC6L;
    int32_t l_317 = 0xFC317155L;
    int32_t l_318 = (-10L);
    int32_t l_319 = 0x17ADE7F3L;
    int32_t l_322 = 0x58059803L;
    const union U2 ***l_360 = (void*)0;
    uint64_t l_380 = 1UL;
    uint16_t *l_449 = &g_203.f2;
    int32_t l_461 = 0x36AA3F65L;
    uint8_t *l_494[5][6] = {{&g_345[6][1][3],&l_179,&g_345[6][1][3],&l_179,&g_345[6][1][3],&l_179},{&g_345[6][1][3],&l_179,&g_345[6][1][3],&l_179,&g_345[6][1][3],&l_179},{&g_345[6][1][3],&l_179,&g_345[6][1][3],&l_179,&g_345[6][1][3],&l_179},{&g_345[6][1][3],&l_179,&g_345[6][1][3],&l_179,&g_345[6][1][3],&l_179},{&g_345[6][1][3],&l_179,&g_345[6][1][3],&l_179,&g_345[6][1][3],&l_179}};
    int16_t *l_649[1];
    int32_t l_662 = 1L;
    int32_t l_664 = 0x8E5827DFL;
    uint32_t l_684 = 0xCDC15962L;
    uint64_t l_813 = 0x3E818AA37B67351ALL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_65[i] = &l_64;
    for (i = 0; i < 1; i++)
        l_649[i] = &g_166;
lbl_86:
    (*l_60) = l_59[2];
    if (((((0xB6L & 6L) ^ ((safe_rshift_func_int8_t_s_u(((((*l_60) ^ ((*l_68) = ((g_66 = l_64) == (void*)0))) <= (((*l_74) = ((l_73 &= (l_70[0][0] , ((safe_div_func_uint16_t_u_u(((*l_60) && g_67), 0xD5AEL)) == 65527UL))) | 0x11L)) | (*l_60))) | 0xF156L), 6)) & (*l_60))) >= 0x2FL) <= 0xBD553F32L))
    { 
        const int32_t *l_93 = &l_73;
        int32_t l_97 = 0xF48D0B90L;
        uint8_t l_150 = 1UL;
        uint16_t *l_151 = &g_58;
        struct S0 l_158 = {0L,1UL,65535UL,0x2BA0L};
        int32_t l_169 = 0x429FF7D8L;
        union U2 l_190 = {0};
        union U2 **l_229 = (void*)0;
        union U2 **l_236 = &l_221;
        if ((*l_68))
        { 
            uint64_t l_83[1][5][7] = {{{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,7UL,1UL,1UL,7UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,7UL,1UL,1UL,7UL,1UL}}};
            int32_t l_111 = 0xE462E6BCL;
            uint16_t *l_127 = &g_58;
            int8_t *l_165[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t *l_167 = &g_168;
            int i, j, k;
            if ((+(1UL || (((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0x87F1L, l_83[0][3][1])), g_16)) , 0x5A3FL) >= (safe_rshift_func_uint16_t_u_u(65535UL, 6))))))
            { 
                const int32_t **l_94 = &l_93;
                int8_t *l_95[1];
                int32_t *l_98 = (void*)0;
                int32_t *l_99 = &g_100;
                int32_t *l_101 = (void*)0;
                int32_t *l_102 = &g_103;
                int32_t *l_104 = (void*)0;
                int32_t *l_105 = (void*)0;
                int32_t *l_106 = (void*)0;
                int32_t *l_107 = &l_97;
                int32_t *l_108 = (void*)0;
                int32_t *l_109 = &g_61;
                int32_t *l_110[3][6][5] = {{{&g_2,&g_103,(void*)0,&g_6,&g_61},{&g_6,&l_97,&g_61,&g_100,&g_2},{&g_2,&l_73,&g_69,&g_6,&l_97},{&g_6,&g_100,(void*)0,&g_69,(void*)0},{&l_97,&g_103,(void*)0,&g_103,&l_97},{(void*)0,&g_61,&g_69,&g_100,&g_2}},{{&g_103,&l_97,&g_61,&l_73,&g_100},{&l_97,&g_2,(void*)0,&g_61,&g_2},{&g_6,&l_73,(void*)0,&g_2,&l_97},{&g_2,&g_100,&g_61,&g_69,(void*)0},{(void*)0,&g_100,&g_100,(void*)0,&l_97},{&g_69,&l_73,&l_97,&g_6,&g_2}},{{&g_100,&g_2,&g_103,&g_2,&g_61},{&g_69,&l_97,(void*)0,&g_6,&g_103},{&g_100,&g_61,&g_100,(void*)0,(void*)0},{&l_73,&g_103,&g_103,&g_69,&g_69},{&l_73,&g_100,&l_73,&g_2,&g_6},{&g_100,&l_73,&g_2,&g_61,&g_100}}};
                uint64_t *l_125 = &l_83[0][3][1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_95[i] = &g_16;
                if (l_73)
                    goto lbl_86;
                (*l_102) &= ((*l_99) &= (0UL || (((*p_55) != (l_83[0][3][1] || ((((safe_div_func_uint16_t_u_u(3UL, (safe_mod_func_int16_t_s_s((g_16 , ((g_96 = (safe_sub_func_uint32_t_u_u(1UL, (((((*l_94) = l_93) == &g_69) , &g_67) != l_95[0])))) && (*l_68))), 0x870AL)))) || 0xC2B2271DL) || (*l_60)) >= l_97))) , (*l_93))));
                g_113++;
                (*l_107) = ((((safe_rshift_func_int8_t_s_s((((((((void*)0 != l_93) <= ((safe_unary_minus_func_uint64_t_u(18446744073709551615UL)) && (g_58 | (!((((safe_sub_func_uint64_t_u_u(((*l_125) = ((1UL && (safe_mul_func_int16_t_s_s((-6L), (((*p_55) & 6L) > g_96)))) >= l_124)), (*l_60))) == 0xD5L) != l_111) <= (*l_99)))))) == (-4L)) , &l_93) == &l_93) || (*l_68)), (*g_15))) >= l_111) == 0x0C25L) >= 0xFCE93EF3L);
                (*l_68) = (g_2 & (((void*)0 != p_55) , 0x58E78D8CL));
            }
            else
            { 
                uint16_t l_147[4] = {3UL,3UL,3UL,3UL};
                int i;
                if (g_103)
                    goto lbl_86;
                (*l_60) |= (5UL | 0x7286844AA6C347B9LL);
                for (g_58 = 0; (g_58 <= 2); g_58 += 1)
                { 
                    union U1 l_128[5][1] = {{{0xF1L}},{{0x5AL}},{{0xF1L}},{{0x5AL}},{{0xF1L}}};
                    uint32_t *l_148 = &g_149;
                    int i, j;
                    (*l_60) = ((g_126 , l_127) != ((((l_128[4][0] , (safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((((((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u((((*l_74)++) < ((*l_148) = (safe_mul_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(l_83[0][3][1], (safe_add_func_uint16_t_u_u((g_19[0][0][4] < (l_145 != (void*)0)), (*l_60))))) >= l_147[3]) != 4294967293UL), (*l_68))))), (*g_15))) & g_96) >= g_100), l_128[4][0].f0)) ^ 0x7F93178D71A0F86ELL) != (*l_60)) ^ l_111) >= l_150) , 6L), g_61)), (*g_57)))) || 2UL) , l_83[0][3][1]) , l_151));
                    if (g_149)
                        continue;
                }
            }
            l_169 = ((safe_lshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((((l_158 , g_159) == &l_93) ^ (((safe_add_func_uint64_t_u_u(18446744073709551612UL, (safe_lshift_func_uint16_t_u_u((*l_60), 8)))) , ((*l_167) = ((l_97 = 0x7AL) && (g_166 ^= ((-3L) >= (*l_60)))))) != g_6)), (*l_60))), (*l_60))) <= (*g_15)), (*l_93))) >= (*l_93));
        }
        else
        { 
            int8_t l_172 = 0x7AL;
            int32_t *l_182 = &g_61;
            int32_t **l_183 = &l_60;
            int64_t *l_216 = &g_168;
            struct S0 l_228 = {0x1AB0L,0x25A454C0L,0x2960L,0xC3BEL};
            l_97 &= (((*g_160) ^= (safe_mul_func_uint8_t_u_u(0x43L, ((&l_97 == (l_60 = (void*)0)) > l_172)))) , ((safe_sub_func_int32_t_s_s((*l_68), ((**g_159) = (((((safe_div_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_s((*l_93), 1)) < ((*l_74) &= (((*g_57) , l_60) == l_60))) , (-1L)), g_61)) , (*l_68)) < g_19[0][3][1]) == (*g_66)) == (*g_15))))) && l_179));
            l_169 = (l_172 & ((*g_57) != (+l_181)));
            (*l_183) = l_182;
            if ((safe_div_func_uint32_t_u_u((((*l_74) |= ((safe_add_func_uint32_t_u_u(0xC0DD8427L, (safe_mod_func_uint64_t_u_u((l_190 , ((safe_add_func_uint64_t_u_u((*l_68), (((*l_182) || ((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((((((safe_add_func_int16_t_s_s(((g_203 , (*l_182)) , (safe_mul_func_uint16_t_u_u((*p_55), (*p_55)))), 1UL)) <= (*l_68)) , (-1L)) == (*l_93)) | g_19[0][1][3]), (*g_15))), (**l_183))), 7)), 0xC6L)) | 6UL)) < (*g_160)))) & g_19[0][3][1])), 0xDFC4768125F44ECFLL)))) && 0UL)) && (*l_60)), (**l_183))))
            { 
                int16_t l_213 = 0xBBD1L;
                for (g_61 = 0; (g_61 < 3); g_61 = safe_add_func_uint16_t_u_u(g_61, 7))
                { 
                    int32_t ***l_210 = &l_183;
                    g_103 = ((*g_160) = (safe_mul_func_uint8_t_u_u(((((g_212 = (g_211 = ((*l_210) = &l_182))) != &l_93) <= (0xC0L & ((*l_93) == (g_166 & ((-1L) <= ((*l_93) == l_213)))))) > l_213), (*p_56))));
                    (**g_159) = (safe_div_func_uint64_t_u_u(0x3002C6F77066E75ALL, (((void*)0 == l_216) & (*g_57))));
                    if ((*l_93))
                        continue;
                }
                for (g_75 = (-21); (g_75 < 30); g_75 = safe_add_func_uint8_t_u_u(g_75, 2))
                { 
                    (*l_60) = (safe_mod_func_int8_t_s_s((*l_93), 0x90L));
                    if ((*l_60))
                        break;
                }
            }
            else
            { 
                union U2 **l_222 = &l_221;
                union U2 **l_223 = (void*)0;
                union U2 *l_225 = &l_70[0][0];
                union U2 **l_224 = &l_225;
                union U1 l_239 = {1L};
                int32_t **l_241 = &l_182;
                int32_t l_268[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_268[i] = 0x95594B54L;
                (*l_224) = ((*l_222) = l_221);
                for (l_172 = 26; (l_172 <= 2); l_172 = safe_sub_func_int32_t_s_s(l_172, 5))
                { 
                    union U2 ***l_230 = &l_229;
                    union U2 ***l_231 = (void*)0;
                    union U2 ***l_232[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t l_261 = (-7L);
                    int32_t ***l_265 = &l_241;
                    int8_t *l_266 = &g_267;
                    int i, j;
                    (*l_182) = (*g_160);
                    (*l_68) |= (l_228 , (((*l_230) = l_229) != (l_236 = (g_233[1] = &l_221))));
                    (*l_68) &= (safe_rshift_func_uint16_t_u_s((l_239 , (~((g_126 , l_241) == ((g_112 |= (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s((((((safe_mod_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((~(((((((((-1L) == (safe_div_func_uint16_t_u_u((l_268[1] ^= (((safe_div_func_int32_t_s_s((((g_262 = l_261) > ((*l_266) = (safe_mod_func_uint8_t_u_u((((g_126 , l_265) != (void*)0) != 0xA77B2AC475FA8B90LL), (**l_241))))) || 0x74L), (**l_241))) >= 0x65C1L) || g_2)), (***l_265)))) <= (*l_93)) ^ g_96) , l_228) , (*g_57)) , 1L) ^ 0x2D8B73B3AB43E131LL) == 0xC58AL)), (*l_93))), (***l_265))) != g_146) > (*l_60)), (***l_265))) == 0xEBL) <= (*l_60)) , (void*)0) == (void*)0), (*l_182))), (*p_55))) & 65527UL), 0x27L)), (*l_93)))) , &g_160)))), 7));
                }
            }
            (**l_183) = (&l_73 != (*g_159));
        }
    }
    else
    { 
        return (*p_55);
    }
lbl_638:
    (*l_68) = 0L;
    for (l_73 = 4; (l_73 >= 0); l_73 -= 1)
    { 
        uint16_t l_275[5];
        int32_t l_297 = 0x08633E49L;
        int32_t l_316 = 0x42E006BCL;
        int32_t l_321[1];
        const union U1 l_340 = {0xC7L};
        uint16_t l_343[1];
        int32_t *l_344[7][5];
        const union U2 ****l_361 = &l_360;
        int8_t l_372 = (-10L);
        union U1 l_381 = {2L};
        int8_t **l_431 = (void*)0;
        const union U2 *l_434 = &g_235[4];
        uint16_t l_551 = 0x92AEL;
        int i, j;
        for (i = 0; i < 5; i++)
            l_275[i] = 0UL;
        for (i = 0; i < 1; i++)
            l_321[i] = (-1L);
        for (i = 0; i < 1; i++)
            l_343[i] = 6UL;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 5; j++)
                l_344[i][j] = &l_322;
        }
        for (g_267 = 1; (g_267 >= 0); g_267 -= 1)
        { 
            int32_t **l_292 = &l_68;
            union U2 ***l_306 = &g_233[1];
            union U1 l_307 = {1L};
            int32_t l_320[4][6][5] = {{{(-4L),0L,0L,(-4L),0L},{(-4L),(-4L),0xE6E705DCL,0L,0L},{0xE6E705DCL,0L,0xE6E705DCL,0xE6E705DCL,0L},{0L,0xE6E705DCL,0xE6E705DCL,0L,0xE6E705DCL},{0L,0L,(-4L),0L,0L},{0xE6E705DCL,0L,0xE6E705DCL,0xE6E705DCL,0L}},{{0L,0xE6E705DCL,0xE6E705DCL,0L,0xE6E705DCL},{0L,0L,(-4L),0L,0L},{0xE6E705DCL,0L,0xE6E705DCL,0xE6E705DCL,0L},{0L,0xE6E705DCL,0xE6E705DCL,0L,0xE6E705DCL},{0L,0L,(-4L),0L,0L},{0xE6E705DCL,0L,0xE6E705DCL,0xE6E705DCL,0L}},{{0L,0xE6E705DCL,0xE6E705DCL,0L,0xE6E705DCL},{0L,0L,(-4L),0L,0L},{0xE6E705DCL,0L,0xE6E705DCL,0xE6E705DCL,0L},{0L,0xE6E705DCL,0xE6E705DCL,0L,0xE6E705DCL},{0L,0L,(-4L),0L,0L},{0xE6E705DCL,0L,0xE6E705DCL,0xE6E705DCL,0L}},{{0L,0xE6E705DCL,0xE6E705DCL,0L,0xE6E705DCL},{0L,0L,(-4L),0L,0L},{0xE6E705DCL,0L,0xE6E705DCL,0xE6E705DCL,0L},{0L,0xE6E705DCL,0xE6E705DCL,0L,0xE6E705DCL},{0L,0L,(-4L),0L,0L},{0xE6E705DCL,0L,0xE6E705DCL,0xE6E705DCL,0L}}};
            union U2 ** const l_336 = (void*)0;
            union U2 ** const *l_335 = &l_336;
            uint32_t *l_337 = &g_149;
            int8_t *l_341 = &g_342[2];
            int i, j, k;
        }
        for (l_319 = 0; (l_319 <= 1); l_319 += 1)
        { 
            return (*g_57);
        }
        --g_345[1][1][0];
        if ((((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((*g_15), 4)), (*g_57))) <= (++(*l_74))) > (safe_div_func_uint32_t_u_u((g_126 , (safe_mul_func_uint8_t_u_u(((-4L) ^ (safe_div_func_uint16_t_u_u(((g_203.f3 , (l_271 == ((*l_361) = l_360))) , (*p_55)), (*g_57)))), (*g_66)))), (*l_60)))) , (*l_60)) <= 1L))
        { 
            int32_t l_365 = 0x635BB5E4L;
            uint8_t *l_375 = &g_330;
            int32_t l_416 = (-1L);
            int32_t l_422 = (-1L);
            int32_t l_423 = 0x690E307CL;
            int32_t l_424 = (-7L);
            for (g_58 = 0; (g_58 <= 1); g_58 += 1)
            { 
                int32_t l_362 = 7L;
                int32_t l_363 = 0L;
                int32_t l_364 = 0xA7DEDD07L;
                int32_t l_366 = 0xB0F98DAFL;
                int i, j;
                g_367--;
                return (*g_57);
            }
            if (((*p_56) || (safe_mul_func_uint16_t_u_u((l_372 != ((safe_mul_func_uint8_t_u_u((++(*l_375)), (((((*l_145) = g_19[0][4][5]) , g_203) , g_203.f2) || (((safe_lshift_func_int16_t_s_u(((l_365 <= l_380) , (-1L)), 4)) , (*l_68)) >= 0x878338062D219729LL)))) ^ 0x7FL)), (*g_57)))))
            { 
                int64_t l_389[5];
                union U2 l_392 = {0};
                int i;
                for (i = 0; i < 5; i++)
                    l_389[i] = 0xE5519FD23FB49201LL;
                if ((*g_160))
                    break;
                if ((l_381 , (*g_160)))
                { 
                    int32_t l_388 = 1L;
                    int i;
                    l_389[4] ^= (((((((*l_60) >= (safe_sub_func_int16_t_s_s((((((*l_68) < (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((*p_55), ((g_235[l_73] , &g_168) != &g_168))), l_388))) && 0x71L) & l_365) > (*l_60)), (*g_57)))) >= (*l_60)) && (*p_56)) || g_345[1][1][0]) < (*g_15)) , 0xCBB907D6L);
                }
                else
                { 
                    int32_t l_405[6] = {0x5DAD05FFL,0x5DAD05FFL,0x5DAD05FFL,0x5DAD05FFL,0x5DAD05FFL,0x5DAD05FFL};
                    int i;
                    (*l_68) = ((((safe_add_func_int32_t_s_s((((l_392 , (*g_66)) & ((safe_mul_func_int8_t_s_s(((safe_add_func_int64_t_s_s((l_365 <= (((safe_rshift_func_uint16_t_u_s(((void*)0 == &g_342[2]), 2)) <= (*p_56)) , (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((*p_55), (*g_57))), l_389[4])), 3)))), g_61)) < l_405[1]), 8L)) != g_203.f1)) != g_67), (*l_60))) > (*g_57)) , (***l_271)) , (*g_160));
                }
            }
            else
            { 
                int16_t *l_412 = &g_166;
                int32_t l_415[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_415[i] = 7L;
                (*l_60) &= (safe_mul_func_int16_t_s_s(((!(~((safe_div_func_uint64_t_u_u(g_323[0][0], l_365)) , ((*l_412) = (*l_68))))) == (*l_68)), (safe_rshift_func_uint8_t_u_u(l_365, 5))));
                ++g_419;
                ++g_425;
                for (g_166 = 1; (g_166 >= 0); g_166 -= 1)
                { 
                    int32_t l_429 = 0xAF999BD8L;
                    (*l_68) = g_428[1][3][0];
                    return l_429;
                }
            }
            return (*g_57);
        }
        else
        { 
            uint64_t l_430 = 0UL;
            int32_t l_462 = 0L;
            int32_t l_467 = (-9L);
            uint32_t *l_505[5][2] = {{&g_75,&g_75},{&g_75,&g_75},{&g_75,&g_75},{&g_75,&g_75},{&g_75,&g_75}};
            int32_t l_523 = 0xCF255FB2L;
            int i, j;
            if (l_430)
                break;
            (*l_68) ^= (0x629C30A2L >= (g_203.f1 <= ((255UL != ((void*)0 == l_431)) > ((*l_145)--))));
            (**g_159) |= (l_430 , (*l_68));
            for (g_75 = 0; (g_75 <= 1); g_75 += 1)
            { 
                int32_t l_435[2][7] = {{0xDAF1052CL,(-7L),(-1L),0xFD9A5C29L,(-1L),(-7L),0xDAF1052CL},{0xDAF1052CL,(-7L),(-1L),0xFD9A5C29L,(-1L),(-7L),0xDAF1052CL}};
                union U2 ****l_444 = (void*)0;
                struct S0 l_447 = {0x9767L,0UL,0x65C0L,0x5C10L};
                uint16_t *l_475[5];
                uint8_t *l_493 = &g_330;
                union U1 l_549[3][2] = {{{0x6CL},{0x8EL}},{{0x6CL},{0x6CL}},{{0x8EL},{0x6CL}}};
                uint8_t l_550 = 253UL;
                int8_t l_554 = (-1L);
                int i, j;
                for (i = 0; i < 5; i++)
                    l_475[i] = &l_275[3];
                if (((((void*)0 == l_434) > ((l_435[0][3] > 0x5916L) , l_430)) ^ ((*p_55) & (safe_lshift_func_int8_t_s_s(((l_271 != (void*)0) , 1L), (*g_66))))))
                { 
                    union U2 *** const *l_445 = &l_271;
                    uint16_t **l_446[1][7] = {{&g_57,&g_57,&g_57,&g_57,&g_57,&g_57,&g_57}};
                    uint16_t *l_448 = &g_203.f2;
                    uint32_t *l_450 = &g_425;
                    int32_t l_459 = 0x23CC18F2L;
                    int16_t *l_460 = &g_166;
                    int i, j;
                    (**g_159) |= (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((l_444 == l_445), g_345[1][1][0])), ((*l_450) = ((g_57 = p_55) == (l_447 , (l_449 = (l_448 = &l_343[0]))))))) < 0x356AL), 0));
                    (*l_68) = (safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((l_60 = l_450) != (void*)0), g_126.f0)), (l_447.f3 , (((((((*l_460) = (safe_rshift_func_int16_t_s_u((l_459 && 0x28L), (((((**g_159) = (g_203 , l_430)) < g_203.f3) >= g_428[1][3][0]) != l_459)))) , (*g_57)) > 0xAB27L) <= g_203.f3) <= 1UL) && (*l_68))))) || l_430), (*p_56)));
                }
                else
                { 
                    int32_t l_463 = 0x57C7EED5L;
                    int32_t l_464[5] = {0xDAEB9554L,0xDAEB9554L,0xDAEB9554L,0xDAEB9554L,0xDAEB9554L};
                    union U2 * const l_478 = &l_70[0][0];
                    int i;
                    --g_470;
                    (*l_60) &= (safe_mul_func_int8_t_s_s((l_475[4] != &g_470), 7L));
                    (**g_159) ^= (safe_sub_func_int16_t_s_s((l_478 == (void*)0), l_467));
                    (*g_160) = (safe_lshift_func_int8_t_s_s((*p_56), 6));
                }
            }
            return (*p_55);
        }
    }
    for (g_465 = (-8); (g_465 <= (-9)); --g_465)
    { 
        uint16_t l_589 = 1UL;
        uint64_t l_595 = 18446744073709551615UL;
        struct S0 l_620 = {-9L,0xCC4CEA9AL,65535UL,0x6C18L};
        uint32_t * const *l_633 = &l_74;
        int32_t ***l_634[6] = {&g_211,&g_212,&g_212,&g_211,&g_212,&g_212};
        uint16_t **l_691 = &l_449;
        union U2 *l_752 = &l_70[0][0];
        int8_t l_797 = 9L;
        int i;
        for (g_100 = 1; (g_100 < (-25)); --g_100)
        { 
            const int16_t l_561 = 0xC2D9L;
            int8_t *l_562[2][1][2] = {{{&g_267,&g_267}},{{&g_267,&g_267}}};
            int8_t **l_563 = &g_15;
            int32_t l_566 = 1L;
            int32_t l_588 = 0x519E11B6L;
            int16_t *l_591 = &g_166;
            int8_t ***l_613 = &l_563;
            union U2 *** const l_623 = (void*)0;
            int32_t ***l_635 = &g_212;
            int i, j, k;
            (*l_60) = ((l_561 , ((&g_466 != ((*l_563) = l_562[0][0][0])) >= (*p_56))) && l_561);
            (*l_68) &= (l_566 = (((safe_sub_func_uint16_t_u_u(((--g_428[1][3][0]) ^ (safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(l_561, (((safe_add_func_int8_t_s_s((*g_15), ((((safe_mod_func_uint8_t_u_u((18446744073709551615UL == (safe_mul_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(((*g_15) <= (+((*l_60) < (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_126.f0, 0UL)), l_588))))), l_561)) && l_588), 0x2FB9L))), (*g_15))) | l_566) <= 0x14954DFEL) < (*g_66)))) , (*g_57)) > (*p_55)))) < (*g_57)), (*g_57))), g_345[1][1][0]))), l_589)) ^ 251UL) , (-1L)));
            (*l_68) &= ((safe_unary_minus_func_int16_t_s(((*l_591) = g_16))) , (safe_unary_minus_func_int16_t_s(((safe_mul_func_uint8_t_u_u(251UL, ((0xC5L ^ (l_595 | ((*l_74) ^= (((((-4L) & (!(safe_mul_func_uint16_t_u_u(0x24C5L, 65535UL)))) , 0x0EE0F5FFL) != 0xB3CB56F7L) & g_112)))) == 4294967295UL))) && 0x9292L))));
            if ((((safe_lshift_func_int16_t_s_s((-1L), 3)) <= (((safe_div_func_uint64_t_u_u((safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((2L > ((*l_68) | (safe_div_func_uint32_t_u_u((0UL || (safe_lshift_func_int16_t_s_s(g_16, 15))), (+(~(((*l_613) = &g_15) != &p_56))))))), g_166)), (*l_68))), 0x5E2911D6F9921DADLL)) < 0xC6613F7DL) < (*l_68))) <= l_588))
            { 
                const struct S0 l_624 = {1L,0UL,65533UL,-1L};
                (*l_68) = (safe_lshift_func_uint8_t_u_u((((((safe_lshift_func_int16_t_s_u(((*l_60) & (((safe_add_func_int32_t_s_s(((g_465 && (l_620 , g_16)) >= (safe_div_func_uint64_t_u_u(((l_623 == (((((&g_470 != &l_124) | g_262) < 0x43L) , l_624) , l_623)) == 8L), g_16))), 0xAAF2251BL)) >= g_75) , l_588)), 13)) , 0x8AD1L) | l_561) == 18446744073709551611UL) , 255UL), l_588));
                (*l_60) &= ((+((safe_mod_func_int64_t_s_s((&g_262 == &g_428[1][1][0]), 0x44A55CB2507A25CDLL)) & ((*l_68) >= l_620.f2))) && l_595);
            }
            else
            { 
                struct S0 l_628 = {0x4EBFL,4294967295UL,0xBC9BL,0x8AA6L};
                (*l_60) ^= ((l_628 , (((safe_rshift_func_int16_t_s_s(g_168, (safe_lshift_func_uint8_t_u_u(251UL, l_620.f0)))) | (l_633 != (((l_635 = l_634[0]) != &g_159) , &g_507))) & l_628.f1)) && l_628.f1);
            }
            for (g_96 = (-29); (g_96 == (-23)); g_96 = safe_add_func_uint8_t_u_u(g_96, 6))
            { 
                int16_t l_643 = 0x884DL;
                struct S0 l_644 = {1L,0x725513B1L,0UL,1L};
                int32_t **l_647[7][1][7] = {{{&l_60,(void*)0,&l_60,&l_68,&l_60,&l_68,&l_60}},{{(void*)0,(void*)0,&l_60,&l_60,&l_68,&l_60,&l_60}},{{&l_60,&l_60,&l_60,&l_68,&l_68,&l_68,(void*)0}},{{&l_68,&l_60,&l_60,&l_60,&l_60,&l_60,&l_60}},{{&l_60,&l_68,&l_60,&l_68,&l_68,(void*)0,&l_68}},{{&l_60,&l_68,&l_60,&l_60,&l_60,&l_68,&l_60}},{{&l_68,(void*)0,&l_68,&l_68,&l_60,&l_68,&l_60}}};
                int i, j, k;
                if (g_96)
                    goto lbl_638;
                (*l_60) = (g_126 , (g_103 ^= ((((safe_add_func_uint8_t_u_u(g_203.f3, ((safe_mul_func_uint16_t_u_u((l_643 , (((g_323[2][3] && (l_635 != (l_644 , &g_211))) < (*l_60)) >= l_644.f3)), (*g_57))) & 0xB9L))) | 0x53D724DEL) | l_644.f3) ^ 0x3751L)));
                for (g_470 = 0; (g_470 <= 21); ++g_470)
                { 
                    uint8_t l_661 = 0x43L;
                    int32_t l_663 = 0L;
                    int32_t l_678 = 8L;
                    const union U2 l_683 = {0};
                    if ((*l_68))
                        break;
                    (*l_635) = l_647[3][0][0];
                    l_664 ^= (((~(l_663 = (p_56 == (((((*l_591) ^= ((l_649[0] = &g_166) == &l_59[0])) || (safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u(((safe_mod_func_uint64_t_u_u((((((l_566 , ((((safe_rshift_func_uint8_t_u_s((((*g_57) = (safe_mul_func_uint8_t_u_u((((0x8EF93EEFL < ((**l_633) = (l_661 , g_146))) ^ 0x7A9AL) >= (-4L)), 0x83L))) | 6L), 0)) , (*g_57)) & l_661) || g_58)) == g_67) > (*l_68)) , (*l_60)) | (*l_68)), 0x1EA38D8AB382801FLL)) > g_342[2]))) == g_428[1][3][0]), (*g_66))), (*p_56)))) | l_662) , (void*)0)))) > (*p_56)) & 1L);
                    (*l_68) &= ((safe_div_func_int16_t_s_s(l_661, (*p_55))) && (safe_unary_minus_func_int64_t_s((safe_div_func_uint64_t_u_u(((((((safe_mul_func_int16_t_s_s(0x1285L, 0x4072L)) , (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_146, (safe_lshift_func_int8_t_s_u(l_678, (((safe_mul_func_int16_t_s_s(((*l_591) = (safe_lshift_func_int8_t_s_u((*g_66), 3))), l_678)) == (-1L)) | 18446744073709551613UL))))), 247UL))) , l_683) , l_684) && l_588) || 0xAF54L), g_419)))));
                }
                (*l_68) = (*l_60);
            }
        }
        for (g_267 = 0; (g_267 < 4); g_267 = safe_add_func_int32_t_s_s(g_267, 9))
        { 
            uint16_t **l_690[7][3] = {{&g_57,&g_57,&g_57},{&l_449,&g_57,&l_449},{&g_57,&g_57,&g_57},{&l_449,&g_57,&l_449},{&g_57,&g_57,&g_57},{&l_449,&g_57,&l_449},{&g_57,&g_57,&g_57}};
            uint16_t ***l_689 = &l_690[4][0];
            uint16_t ***l_692 = &l_691;
            int32_t l_693 = 0xC01809C0L;
            const int32_t l_710 = 0x21557EF0L;
            union U1 l_744 = {0xF0L};
            const uint16_t *l_750 = (void*)0;
            const uint16_t **l_749 = &l_750;
            const uint16_t ***l_748 = &l_749;
            union U2 l_789 = {0};
            int i, j;
        }
        (*g_747) |= (-1L);
        l_813--;
    }
    return (*l_68);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_19[i][j][k], "g_19[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_203.f1, "g_203.f1", print_hash_value);
    transparent_crc(g_203.f2, "g_203.f2", print_hash_value);
    transparent_crc(g_203.f3, "g_203.f3", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_323[i][j], "g_323[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_330, "g_330", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_342[i], "g_342[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_345[i][j][k], "g_345[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_428[i][j][k], "g_428[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_772[i][j][k], "g_772[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_782, "g_782", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_855, "g_855", print_hash_value);
    transparent_crc(g_859, "g_859", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_901[i], "g_901[i]", print_hash_value);

    }
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1334, "g_1334", print_hash_value);
    transparent_crc(g_1406, "g_1406", print_hash_value);
    transparent_crc(g_1407, "g_1407", print_hash_value);
    transparent_crc(g_1408, "g_1408", print_hash_value);
    transparent_crc(g_1409, "g_1409", print_hash_value);
    transparent_crc(g_1450, "g_1450", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1487[i][j][k], "g_1487[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1545[i][j], "g_1545[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1720, "g_1720", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1829[i], "g_1829[i]", print_hash_value);

    }
    transparent_crc(g_1874, "g_1874", print_hash_value);
    transparent_crc(g_1883, "g_1883", print_hash_value);
    transparent_crc(g_2071.f0, "g_2071.f0", print_hash_value);
    transparent_crc(g_2177, "g_2177", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
