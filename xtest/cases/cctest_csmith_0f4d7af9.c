// SPDX-License-Identifier: MIT
// cctest_csmith_0f4d7af9.c --- cctest case csmith_0f4d7af9 (csmith seed 256735993)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xaa43ccd0 */

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

// Options:   -s 256735993 -o /tmp/csmith_gen_0n5pv649/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   const int64_t  f1;
   const uint32_t  f2;
   const uint16_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   int16_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

struct S2 {
   signed f0 : 13;
   const signed f1 : 20;
};

struct S3 {
   uint32_t  f0;
   const uint16_t  f1;
   uint64_t  f2;
   const struct S0  f3;
};

struct S4 {
   signed f0 : 26;
   unsigned f1 : 31;
   struct S3  f2;
};

union U5 {
   uint8_t  f0;
   uint16_t  f1;
   int32_t  f2;
   const int32_t  f3;
};

union U6 {
   int8_t  f0;
   uint32_t  f1;
   int32_t  f2;
   struct S1  f3;
};

union U7 {
   signed f0 : 18;
   uint64_t  f1;
   uint32_t  f2;
   uint8_t  f3;
};


static int32_t g_2 = 0L;
static union U5 g_20 = {0x95L};
static int8_t g_27 = 0x2FL;
static struct S1 g_46 = {0x06B0L,-5L,0L};
static int64_t g_47[5][3] = {{1L,0x4DEA1A09BBF73BC9LL,1L},{1L,0x4DEA1A09BBF73BC9LL,1L},{1L,0x4DEA1A09BBF73BC9LL,1L},{1L,0x4DEA1A09BBF73BC9LL,1L},{1L,0x4DEA1A09BBF73BC9LL,1L}};
static int32_t g_50[3][4][3] = {{{5L,(-6L),5L},{1L,3L,1L},{5L,(-6L),5L},{1L,3L,1L}},{{5L,(-6L),5L},{1L,3L,1L},{5L,(-6L),5L},{1L,3L,1L}},{{5L,(-6L),5L},{1L,3L,1L},{5L,5L,0L},{0x564AC20FL,1L,0x564AC20FL}}};
static uint32_t g_88 = 0x5382869BL;
static union U6 g_96 = {0xA1L};
static int64_t g_134[4] = {0x20809C307FEAA8E9LL,0x20809C307FEAA8E9LL,0x20809C307FEAA8E9LL,0x20809C307FEAA8E9LL};
static uint32_t g_138 = 0UL;
static struct S3 g_170 = {0x56564C8AL,1UL,0x8A848BB9C06754C7LL,{0x393618BF3F67E56BLL,0x4594A1EE92D2D4CALL,0x694BD967L,0x1E06L}};
static uint32_t g_175 = 0xBB949037L;
static union U7 g_184 = {0xD0524EEFL};
static union U5 g_186 = {250UL};
static struct S2 g_216 = {-40,-314};
static uint16_t g_268 = 0UL;
static uint64_t g_325[5][3] = {{0x7049906E010D127DLL,0x7049906E010D127DLL,0x7049906E010D127DLL},{0x7049906E010D127DLL,0x7049906E010D127DLL,0x7049906E010D127DLL},{0x7049906E010D127DLL,0x7049906E010D127DLL,0x7049906E010D127DLL},{0x7049906E010D127DLL,0x7049906E010D127DLL,0x7049906E010D127DLL},{0x7049906E010D127DLL,0x7049906E010D127DLL,0x7049906E010D127DLL}};



static uint64_t  func_1(void);
static int32_t  func_5(int32_t  p_6, struct S3  p_7);
static union U5  func_8(union U5  p_9, uint32_t  p_10, struct S3  p_11, union U5  p_12, uint32_t  p_13);
static union U7  func_15(struct S4  p_16, union U5  p_17, int16_t  p_18);




static uint64_t  func_1(void)
{ 
    union U5 l_14 = {0xBFL};
    struct S3 l_185 = {8UL,0xBE43L,0x6D30F81C467306D3LL,{3L,8L,1UL,0xDA21L}};
    int32_t l_250[5][5][1] = {{{(-8L)},{(-9L)},{0x7A882262L},{(-9L)},{(-8L)}},{{(-1L)},{(-8L)},{(-9L)},{0x7A882262L},{(-9L)}},{{(-8L)},{(-1L)},{(-8L)},{(-9L)},{0x7A882262L}},{{(-9L)},{(-8L)},{(-1L)},{(-8L)},{(-9L)}},{{0x7A882262L},{(-9L)},{(-8L)},{(-1L)},{(-8L)}}};
    int32_t l_252 = 0x4255ED36L;
    int8_t l_257 = 0L;
    int8_t l_324 = 0x9DL;
    int8_t l_327 = 0L;
    int i, j, k;
    for (g_2 = 0; (g_2 >= (-22)); g_2 = safe_sub_func_uint16_t_u_u(g_2, 4))
    { 
        struct S4 l_19 = {-6437,4165,{0x0C256FAEL,0xA486L,2UL,{0xEF4FC6A3F0BDE8AFLL,-9L,0UL,0xC927L}}};
        int32_t l_23[5];
        int32_t l_24 = 0x0BC5DE30L;
        uint32_t l_254[5];
        int i;
        for (i = 0; i < 5; i++)
            l_23[i] = 1L;
        for (i = 0; i < 5; i++)
            l_254[i] = 0x140C127AL;
        if (func_5((func_8(l_14, (((func_15(l_19, g_20, (((safe_lshift_func_uint8_t_u_s((l_23[3] = l_14.f0), l_14.f0)) <= g_20.f0) || l_24)) , 0UL) >= l_14.f0) == g_170.f2), l_185, g_186, g_170.f1) , 1L), l_185))
        { 
            uint64_t l_247 = 18446744073709551615UL;
            l_247++;
        }
        else
        { 
            int32_t l_251 = 1L;
            int32_t l_253[1];
            int i;
            for (i = 0; i < 1; i++)
                l_253[i] = (-3L);
            l_254[2]--;
            return l_257;
        }
        if ((safe_sub_func_int16_t_s_s(g_170.f2, (((l_14.f2 = (safe_mod_func_uint32_t_u_u((l_23[3] &= (safe_mod_func_uint64_t_u_u((((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0xBEL, ((g_268++) | l_185.f2))), (safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(l_19.f1, l_185.f0)), g_20.f0)))) , g_216) , g_20) , 0L) < 0xDFE0L), g_170.f0))), g_170.f3.f3))) != 0xD051CAA546107686LL) ^ 0x65L))))
        { 
            l_23[3] = (safe_lshift_func_int8_t_s_s(l_250[1][2][0], 1));
        }
        else
        { 
            const int32_t l_309 = 0xF179101BL;
            int32_t l_310 = 3L;
            for (l_14.f2 = (-22); (l_14.f2 < 16); l_14.f2 = safe_add_func_int32_t_s_s(l_14.f2, 6))
            { 
                struct S1 l_283 = {0x7BE3L,0L,0x83C7C355L};
                l_250[3][1][0] |= (safe_sub_func_uint8_t_u_u((((l_283.f2 = (safe_sub_func_uint32_t_u_u(((g_184.f3 = (l_283 , (safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(l_185.f1, (0x3305DE484FDC5ECALL & (g_46.f1 == g_170.f3.f1)))), l_185.f1)), 1UL)))) & g_2), (-1L)))) ^ g_47[0][1]) , 0x38L), l_185.f3.f0));
            }
            g_46.f2 &= g_88;
            l_310 = (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((((g_134[1] &= ((safe_mod_func_uint32_t_u_u((~0xE109F48CL), (safe_add_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(g_175, l_14.f2)) == (safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_47[3][2], (-1L))), 0xB635L))), l_309)) <= l_185.f3.f1), 8UL)))) & 0xBBC1L)) > l_24) == (-4L)), 3L)), g_2)) & l_14.f2), l_19.f2.f3.f3));
        }
    }
    for (g_170.f2 = 5; (g_170.f2 > 33); g_170.f2++)
    { 
        struct S0 l_314 = {1L,0xDE907A0B91226863LL,0x23433ED3L,0xCF2FL};
        g_50[2][0][1] = (~(l_314 , g_88));
    }
    if ((safe_rshift_func_int16_t_s_s(g_46.f2, 15)))
    { 
        int8_t l_326 = (-10L);
        l_14.f2 = (0x0E9EB29FL > ((safe_add_func_uint8_t_u_u((!(l_326 = ((g_325[2][0] ^= (safe_div_func_int64_t_s_s((g_138 > (safe_add_func_uint16_t_u_u(l_185.f3.f3, (l_324 == g_50[0][3][2])))), l_185.f3.f1))) , g_170.f1))), 0xE3L)) | 6UL));
        return l_250[0][4][0];
    }
    else
    { 
        uint16_t l_328 = 0x6BE0L;
        --l_328;
    }
    return g_216.f0;
}



static int32_t  func_5(int32_t  p_6, struct S3  p_7)
{ 
    int16_t l_244 = 0x994BL;
    int32_t l_245 = 0x8A8D59F8L;
    int32_t l_246 = (-4L);
    l_246 = (safe_div_func_uint8_t_u_u(((p_7.f0 | ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((~((safe_div_func_int64_t_s_s(((((0x0DL | (l_244 , ((l_245 &= 0xA6250EC678523272LL) != g_138))) || p_7.f3.f2) | l_244) | (-7L)), 1L)) ^ 0x75CFL)), 0x8DL)), g_96.f0)) == 0x4890E8C7L)) == l_244), 0xDDL));
    return g_46.f2;
}



static union U5  func_8(union U5  p_9, uint32_t  p_10, struct S3  p_11, union U5  p_12, uint32_t  p_13)
{ 
    uint64_t l_219[4][4] = {{0xEC10CD837A4677E4LL,18446744073709551615UL,0xABD20069F1A1A9ECLL,0UL},{0xEC10CD837A4677E4LL,0xABD20069F1A1A9ECLL,0xEC10CD837A4677E4LL,0UL},{18446744073709551615UL,0UL,0UL,0UL},{0xABD20069F1A1A9ECLL,0xABD20069F1A1A9ECLL,0x3D8A235920794434LL,0UL}};
    int32_t l_226 = 0L;
    uint64_t l_227 = 0xB5C2FCE0FFC3AD43LL;
    int i, j;
    for (g_46.f1 = 0; (g_46.f1 > 26); g_46.f1 = safe_add_func_uint64_t_u_u(g_46.f1, 8))
    { 
        uint32_t l_201 = 0x83FA38E5L;
        int32_t l_218 = 0xA00BC215L;
        for (g_184.f1 = (-13); (g_184.f1 <= 48); g_184.f1++)
        { 
            int32_t l_217[4][1] = {{(-1L)},{0x958F3101L},{(-1L)},{0x958F3101L}};
            int i, j;
            for (g_96.f0 = 8; (g_96.f0 == 22); g_96.f0 = safe_add_func_uint64_t_u_u(g_96.f0, 6))
            { 
                g_46.f2 ^= g_50[1][3][1];
                if (g_184.f3)
                    continue;
                l_201 ^= (p_12.f2 = (p_13 > ((p_13 & ((safe_div_func_uint32_t_u_u((p_10 = ((safe_sub_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u(0x622FL, 11)) == p_11.f3.f2) >= 0xD1L), p_10)) && g_46.f0)), g_27)) >= (-2L))) <= p_12.f0)));
            }
            l_219[3][0] = (((((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((g_170.f2 = (safe_sub_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_s(l_201, 10)) & (safe_mod_func_uint32_t_u_u(g_184.f3, l_201))) ^ (safe_rshift_func_int16_t_s_s(((l_218 = ((safe_div_func_uint8_t_u_u((g_216 , l_217[1][0]), 0xB9L)) || (-1L))) & l_201), 12))) != 0xC9L), l_217[1][0]))), p_11.f3.f1)), p_9.f0)) ^ p_12.f0) || p_11.f0) < 4294967295UL) == 0x09L);
        }
        for (p_11.f0 = (-8); (p_11.f0 < 17); p_11.f0 = safe_add_func_int16_t_s_s(p_11.f0, 1))
        { 
            uint64_t l_222 = 0x30DD82E2B8542A95LL;
            ++l_222;
            l_227 &= (~((g_170.f3.f3 | (l_226 &= l_219[0][0])) > l_219[3][0]));
            for (p_13 = (-2); (p_13 >= 23); p_13++)
            { 
                uint64_t l_232 = 0xFD2AC4DE56E9C9E9LL;
                g_50[1][3][1] = (l_232 = (safe_mul_func_int16_t_s_s(l_201, (g_47[3][1] == (l_218 ^ p_11.f3.f0)))));
            }
        }
    }
    return g_20;
}



static union U7  func_15(struct S4  p_16, union U5  p_17, int16_t  p_18)
{ 
    struct S4 l_26 = {579,9714,{3UL,65531UL,0x20603003393D3B28LL,{0x330C202EAB385FAELL,0x1B4C5108D7EBC4D5LL,0x16FF7DD1L,0UL}}};
    int32_t l_28 = 0x40BBFB6FL;
    uint64_t l_42 = 0x8D378B361F168752LL;
    struct S1 l_45 = {1L,0x18CDL,1L};
    int8_t l_48[3];
    struct S2 l_63[3] = {{-6,1009},{-6,1009},{-6,1009}};
    int64_t l_127 = (-1L);
    int32_t l_129 = (-9L);
    int32_t l_130 = (-8L);
    int32_t l_131 = 0xC63F9E7CL;
    int32_t l_132[4];
    int32_t l_135 = 0x76F3A889L;
    int32_t l_136 = 1L;
    int8_t l_180 = 9L;
    int i;
    for (i = 0; i < 3; i++)
        l_48[i] = 0x1EL;
    for (i = 0; i < 4; i++)
        l_132[i] = 0xD564CCD3L;
    if (g_20.f0)
    { 
        uint64_t l_25 = 0xD8E7DFBF73ECB6AELL;
        l_25 ^= 0x007DFDCBL;
        g_27 = (l_26 , (((p_16.f0 ^= (-2L)) == l_26.f2.f3.f2) >= p_16.f2.f0));
        g_20.f2 = ((p_16.f0 == 0x8DL) ^ (l_28 <= 5UL));
    }
    else
    { 
        int16_t l_41 = 1L;
        g_20.f2 = (safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(4294967295UL, (safe_add_func_int16_t_s_s(1L, (safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((((((l_41 != 3L) != 1UL) ^ p_16.f2.f1) || g_20.f0) & p_17.f0), l_41)), p_16.f2.f0)))))), l_42)) || (-8L)), 5L));
        for (p_16.f2.f2 = 0; (p_16.f2.f2 != 20); ++p_16.f2.f2)
        { 
            g_46 = l_45;
        }
        for (l_45.f0 = 0; (l_45.f0 <= 2); l_45.f0 += 1)
        { 
            l_48[0] = (p_16.f0 |= p_16.f2.f3.f2);
            for (g_20.f0 = 0; (g_20.f0 <= 2); g_20.f0 += 1)
            { 
                struct S1 l_49 = {0xA998L,4L,-1L};
                int i, j;
                if (g_47[(l_45.f0 + 1)][l_45.f0])
                    break;
                l_49 = (g_20.f0 , g_46);
            }
        }
    }
    if (l_26.f0)
    { 
        struct S2 l_51 = {-82,700};
        union U7 l_58 = {0x6400F4CAL};
        uint32_t l_64 = 5UL;
        struct S4 l_84 = {2180,46272,{2UL,0x660FL,18446744073709551615UL,{1L,0L,1UL,0x957EL}}};
        uint64_t l_87 = 0xBDF0E56CCD6F842CLL;
        int32_t l_89 = (-1L);
        g_50[1][3][1] = g_47[2][2];
        if ((l_51 , (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(g_50[2][3][0], (safe_lshift_func_int16_t_s_s(5L, 2)))), (l_58 , l_26.f2.f2)))))
        { 
            uint64_t l_69 = 0x06C131537F146A40LL;
            int32_t l_70 = 0xC91969D3L;
            int32_t l_80 = 0L;
            g_50[2][2][0] = (safe_sub_func_uint16_t_u_u(0x143BL, l_45.f2));
            if ((safe_lshift_func_uint16_t_u_u((l_63[0] , ((g_27 |= (((l_51.f1 > l_64) || (p_16.f1 = (((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((((l_45 , l_26.f2.f3.f2) && p_16.f0) > 0L), l_69)), p_16.f2.f3.f2)) ^ g_20.f0) && 4294967286UL))) , l_69)) & 1L)), g_20.f0)))
            { 
                l_70 = (l_26.f0 = p_16.f2.f1);
            }
            else
            { 
                uint8_t l_75 = 0x14L;
                l_80 &= ((safe_rshift_func_int8_t_s_u((l_70 = (((g_46.f0 ^ g_50[1][3][1]) || (safe_div_func_int64_t_s_s(0x28C401F3C7B641BALL, (l_75++)))) , (safe_lshift_func_uint16_t_u_s(l_69, 14)))), p_16.f2.f3.f2)) , g_2);
                l_89 ^= ((!g_46.f0) , (safe_add_func_uint16_t_u_u((((p_16.f2.f3.f3 >= ((l_84 , (g_88 ^= (safe_rshift_func_int8_t_s_s(((((g_27 , g_20.f0) || l_87) != 0xD144L) == 0L), p_16.f2.f3.f2)))) , 0x10E0C72D929A3F83LL)) | l_58.f0) != l_51.f0), p_16.f2.f3.f1)));
            }
            g_50[0][3][0] |= 1L;
        }
        else
        { 
            uint32_t l_108[1][3][2] = {{{0x6FDFC4D2L,0x6FDFC4D2L},{18446744073709551615UL,0x6FDFC4D2L},{0x6FDFC4D2L,18446744073709551615UL}}};
            int32_t l_123 = 0xA025993BL;
            int i, j, k;
            if ((safe_mod_func_int8_t_s_s((p_17.f0 | 1L), (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(7UL, 4)), ((((l_51.f0 <= p_16.f2.f3.f3) < p_16.f1) , g_96) , l_26.f2.f3.f0))))))
            { 
                int16_t l_115 = (-1L);
                int32_t l_116 = (-1L);
                g_50[1][3][1] = (safe_sub_func_int32_t_s_s((l_26.f2.f2 ^ ((((safe_sub_func_uint16_t_u_u((((!(!((p_17.f0 >= (!(g_20.f0 = (safe_mod_func_int32_t_s_s((((((((0x5D9AL == (l_108[0][0][1] |= (g_2 <= p_16.f2.f1))) , g_27) == 0xB2B6A97F434AC264LL) & 4294967294UL) || 1L) & l_84.f2.f3.f0) && g_50[1][3][1]), 0xFA0D3B92L))))) , p_16.f2.f1))) ^ 0xC76DL) ^ p_16.f2.f3.f0), g_27)) , l_108[0][0][1]) == p_16.f2.f1) <= p_16.f2.f3.f1)), g_47[0][1]));
                p_17.f2 = ((((--g_20.f0) != p_16.f1) > ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((l_108[0][1][0] < (l_115 = ((p_17 , (2L ^ 0x92B95AF3L)) || l_48[1]))) & p_18) | 0UL), 1)), l_116)) == 0xE285L)) ^ p_16.f0);
                l_123 &= (p_17.f2 <= (p_18 = (safe_mul_func_uint16_t_u_u(((p_16.f0 = (safe_lshift_func_uint16_t_u_u(l_115, 14))) , ((((((((safe_lshift_func_int16_t_s_s((g_46.f1 && 0xFEB0CFFEL), 9)) <= g_27) , 255UL) == p_16.f2.f2) ^ g_50[2][0][0]) != (-1L)) != g_46.f1) | g_2)), 0xA733L))));
            }
            else
            { 
                l_63[0].f0 = (((l_123 = p_17.f0) & p_16.f2.f3.f1) >= ((0x4EF8352AL & (g_88 = ((+(safe_rshift_func_int8_t_s_s(0x84L, 5))) && g_27))) & 0L));
                g_20.f2 = (g_46 , 0xAC1B64A9L);
            }
        }
    }
    else
    { 
        int32_t l_128[1];
        int8_t l_133 = 0L;
        int64_t l_137 = 8L;
        int i;
        for (i = 0; i < 1; i++)
            l_128[i] = 1L;
        g_138++;
        l_132[1] &= (safe_sub_func_int64_t_s_s(0xF5654A653397D4F8LL, (p_16.f2.f3 , (((((g_27 = ((safe_lshift_func_int16_t_s_s(0x9340L, (safe_add_func_uint32_t_u_u((l_26.f0 != 0x8DL), (-1L))))) < g_88)) >= l_128[0]) <= g_88) != p_16.f2.f2) != l_136))));
        for (g_20.f1 = 13; (g_20.f1 > 39); g_20.f1 = safe_add_func_int32_t_s_s(g_20.f1, 2))
        { 
            int8_t l_177[2];
            int i;
            for (i = 0; i < 2; i++)
                l_177[i] = 1L;
            l_128[0] = (safe_sub_func_uint64_t_u_u((((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_s(0x174AL, 0)) , p_17) , 1UL) & (safe_rshift_func_int8_t_s_u(g_46.f1, p_18))), 1L)) & (-1L)) != l_26.f2.f3.f0), p_16.f2.f2));
            if (((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((p_16.f2.f3.f0 < l_127) >= (safe_add_func_int8_t_s_s((((l_128[0] = g_20.f0) == (-4L)) ^ 0xE1256EB59E71A88FLL), p_16.f2.f3.f2))), l_26.f2.f2)), g_50[0][3][2])) | p_16.f2.f1))
            { 
                uint8_t l_164 = 1UL;
                p_17.f2 = (p_16.f2.f2 > (safe_unary_minus_func_int8_t_s((g_96.f0 <= (--l_164)))));
                if (l_132[1])
                    continue;
            }
            else
            { 
                struct S1 l_167[4][1] = {{{0x0AAAL,0x0B6EL,0x3E81A10DL}},{{0x0AAAL,0x0B6EL,0x3E81A10DL}},{{0x0AAAL,0x0B6EL,0x3E81A10DL}},{{0x0AAAL,0x0B6EL,0x3E81A10DL}}};
                uint64_t l_176 = 1UL;
                int i, j;
                l_167[1][0] = l_167[3][0];
                g_46.f2 &= (l_167[3][0].f2 = (p_16.f2.f3.f0 >= (safe_div_func_int16_t_s_s(((((g_170 , (p_16.f2.f0 && ((((((safe_mul_func_uint16_t_u_u((p_17.f1 = (((safe_sub_func_int32_t_s_s(((((g_175 |= g_88) == l_26.f2.f2) <= l_167[3][0].f2) | 1UL), g_88)) || p_16.f0) | p_16.f2.f3.f2)), l_176)) > p_16.f2.f3.f2) < l_177[0]) != 0x7CB4L) & l_167[3][0].f2) && g_170.f1))) || p_18) | 0xCE5635FC2021FB11LL) != (-1L)), 0x8798L))));
                l_136 = l_176;
            }
        }
    }
    for (g_138 = 10; (g_138 > 60); g_138 = safe_add_func_uint32_t_u_u(g_138, 5))
    { 
        uint64_t l_181 = 18446744073709551610UL;
        l_181++;
    }
    return g_184;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_46.f0, "g_46.f0", print_hash_value);
    transparent_crc(g_46.f1, "g_46.f1", print_hash_value);
    transparent_crc(g_46.f2, "g_46.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_47[i][j], "g_47[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_50[i][j][k], "g_50[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_134[i], "g_134[i]", print_hash_value);

    }
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_170.f0, "g_170.f0", print_hash_value);
    transparent_crc(g_170.f1, "g_170.f1", print_hash_value);
    transparent_crc(g_170.f2, "g_170.f2", print_hash_value);
    transparent_crc(g_170.f3.f0, "g_170.f3.f0", print_hash_value);
    transparent_crc(g_170.f3.f1, "g_170.f3.f1", print_hash_value);
    transparent_crc(g_170.f3.f2, "g_170.f3.f2", print_hash_value);
    transparent_crc(g_170.f3.f3, "g_170.f3.f3", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_186.f0, "g_186.f0", print_hash_value);
    transparent_crc(g_216.f0, "g_216.f0", print_hash_value);
    transparent_crc(g_216.f1, "g_216.f1", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_325[i][j], "g_325[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
