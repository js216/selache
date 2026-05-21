// SPDX-License-Identifier: MIT
// cctest_csmith_23509aa3.c --- cctest case csmith_23509aa3 (csmith seed 592485027)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb260ab1b */

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

// Options:   -s 592485027 -o /tmp/csmith_gen_z2hg78in/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint32_t  f0;
   int32_t  f1;
   int16_t  f2;
   const uint8_t  f3;
   int64_t  f4;
   const int64_t  f5;
   const int16_t  f6;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint64_t  f0;
   uint16_t  f1;
   uint16_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

union U2 {
   const int8_t  f0;
   uint32_t  f1;
   int16_t  f2;
};


static int32_t g_2[6] = {0x3F9E923EL,0x3F9E923EL,0x3F9E923EL,0x3F9E923EL,0x3F9E923EL,0x3F9E923EL};
static int32_t g_5 = (-8L);
static int32_t g_10 = 0L;
static int32_t *g_40 = &g_10;
static int32_t **g_39[1] = {&g_40};
static uint16_t g_72[5] = {1UL,1UL,1UL,1UL,1UL};
static int8_t g_75[3][6] = {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}};
static int32_t g_78 = 0x381ABBC9L;
static int16_t g_91 = (-3L);
static int64_t g_95 = 0x7D9ACC98CB2CAB94LL;
static uint8_t g_165 = 5UL;
static uint8_t *g_164 = &g_165;
static uint16_t g_174[6][5] = {{0x7D1AL,0x7498L,4UL,4UL,0x7498L},{0x31B9L,65531UL,4UL,0x62D2L,65531UL},{0x31B9L,0x7498L,2UL,0x62D2L,0x7498L},{0x7D1AL,65534UL,0UL,0UL,65534UL},{0x43AAL,0x3380L,0UL,65531UL,0x3380L},{0x43AAL,65534UL,0x7498L,65531UL,65534UL}};
static struct S1 g_186 = {0xC932F8380B90F0D3LL,65528UL,0x6CE7L,0x6FE6ED15L};
static uint64_t *g_237 = (void*)0;
static const union U2 g_247 = {0x0AL};
static uint16_t *g_278 = &g_174[3][1];
static uint16_t **g_277 = &g_278;
static uint16_t g_305 = 0xF656L;
static int32_t g_422 = 1L;
static int32_t * const g_421 = &g_422;
static int32_t * const *g_420 = &g_421;
static int64_t *g_511 = &g_95;
static int64_t **g_510 = &g_511;
static uint16_t ***g_550 = &g_277;
static int8_t g_595 = 0x0EL;
static union U2 g_602 = {-3L};
static uint8_t ** const g_630 = &g_164;
static uint8_t ** const *g_629 = &g_630;
static uint8_t g_697[2][3] = {{248UL,248UL,248UL},{2UL,2UL,2UL}};
static int32_t g_781[1] = {0xFF0C4BC8L};
static struct S1 *g_798 = &g_186;
static struct S1 **g_797 = &g_798;
static union U2 g_858[4][7] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{-1L},{-1L},{3L},{3L},{-1L},{-1L},{3L}},{{-10L},{1L},{-10L},{1L},{-10L},{1L},{-10L}},{{-1L},{3L},{3L},{-1L},{-1L},{3L},{3L}}};
static union U2 *g_857 = &g_858[3][4];
static uint32_t *g_871[4][4] = {{&g_186.f3,(void*)0,&g_186.f3,&g_186.f3},{&g_186.f3,&g_186.f3,&g_186.f3,&g_186.f3},{&g_186.f3,(void*)0,&g_186.f3,&g_186.f3},{&g_186.f3,&g_186.f3,&g_186.f3,&g_186.f3}};
static uint32_t **g_870 = &g_871[2][1];
static struct S1 ***g_880 = &g_797;
static uint8_t **g_996 = &g_164;
static uint8_t ***g_995 = &g_996;
static int64_t g_1010[5][7] = {{0xA71B56736C6E7481LL,0x89C2C0908FFC4EA9LL,(-5L),0x89C2C0908FFC4EA9LL,0xA71B56736C6E7481LL,0xA71B56736C6E7481LL,0x89C2C0908FFC4EA9LL},{0x8B9308CBEF739AD5LL,0L,0x8B9308CBEF739AD5LL,0x89C2C0908FFC4EA9LL,0x89C2C0908FFC4EA9LL,0x8B9308CBEF739AD5LL,0L},{0x89C2C0908FFC4EA9LL,0L,(-5L),(-5L),0L,0x89C2C0908FFC4EA9LL,0L},{0x8B9308CBEF739AD5LL,0x89C2C0908FFC4EA9LL,0x89C2C0908FFC4EA9LL,0x8B9308CBEF739AD5LL,0L,0x8B9308CBEF739AD5LL,0x89C2C0908FFC4EA9LL},{0xA71B56736C6E7481LL,0xA71B56736C6E7481LL,0x89C2C0908FFC4EA9LL,(-5L),0x89C2C0908FFC4EA9LL,0xA71B56736C6E7481LL,0xA71B56736C6E7481LL}};
static struct S1 g_1094 = {0xEEA9C674510B54E7LL,0xFD0AL,0x3851L,0x789E192EL};
static struct S1 g_1095 = {0xEAA12772802EFB3CLL,1UL,1UL,1UL};
static const uint8_t ** const **g_1133 = (void*)0;
static int32_t g_1141 = 0x341D02ABL;
static uint32_t g_1150 = 0x52BA4D79L;
static const union U2 g_1235 = {0xE0L};
static int64_t g_1273 = 0x85122A2CFB56EF27LL;
static struct S0 g_1335 = {0x89EEAE65L,0x09D0FD9CL,0x4416L,0x99L,0x7D4DDDCAE036D980LL,0xC9C0A2BEB4756187LL,0x46EFL};
static int32_t *g_1339 = (void*)0;
static uint8_t ** const **g_1395 = (void*)0;
static int32_t g_1429 = 0x50C09072L;
static uint16_t ****g_1446 = (void*)0;
static uint16_t ****g_1447 = &g_550;
static int32_t ***g_1501 = (void*)0;
static int32_t **** const g_1500 = &g_1501;
static uint64_t g_1605 = 0x62188A9EDF9D7DD7LL;
static int32_t g_1736[5] = {0x5491F83CL,0x5491F83CL,0x5491F83CL,0x5491F83CL,0x5491F83CL};
static int64_t g_1823 = 1L;
static int64_t g_1824[4][5] = {{0x17E03FC2316114EBLL,0L,(-8L),(-1L),(-8L)},{(-8L),(-8L),(-1L),(-1L),(-6L)},{0L,0x17E03FC2316114EBLL,0x17E03FC2316114EBLL,0L,(-8L)},{0L,(-1L),4L,4L,(-1L)}};
static int64_t * const g_1822[4][3] = {{&g_1824[2][0],&g_1824[2][0],&g_1824[2][0]},{&g_1823,&g_1823,&g_1823},{&g_1824[2][0],&g_1824[2][0],&g_1824[2][0]},{&g_1823,&g_1823,&g_1823}};
static int64_t * const *g_1821[3][4] = {{(void*)0,&g_1822[1][2],(void*)0,&g_1822[1][2]},{(void*)0,&g_1822[1][2],(void*)0,&g_1822[1][2]},{(void*)0,&g_1822[1][2],(void*)0,&g_1822[1][2]}};
static int64_t * const **g_1820 = &g_1821[2][2];
static int32_t **g_1830 = &g_1339;
static int32_t g_1931[7][5][4] = {{{0x5AC9CE77L,0x00349684L,0xFD7BE147L,4L},{0x38C4C559L,(-1L),(-1L),0xBCBBDBC3L},{0xCB1FBDEFL,0xD15F144DL,4L,0x38C4C559L},{0x5AC9CE77L,0xBCBBDBC3L,0x5AC9CE77L,0xFD7BE147L},{0x00349684L,0x0250BEF3L,0x93AB2CDDL,0xCB1FBDEFL}},{{0x0250BEF3L,0xD15F144DL,(-1L),0x0250BEF3L},{(-1L),0x38C4C559L,(-1L),4L},{0x0250BEF3L,0xB38000AFL,0x93AB2CDDL,0x00349684L},{0x00349684L,(-1L),0x5AC9CE77L,0x05FA745CL},{0x5AC9CE77L,0x05FA745CL,4L,4L}},{{0xCB1FBDEFL,0xCB1FBDEFL,0x38C4C559L,0xD15F144DL},{(-1L),0L,0xE0B972B3L,0x5AC9CE77L},{0x1B8AD74AL,0xD15F144DL,0xA76A3CC2L,0xE0B972B3L},{0L,0xD15F144DL,(-1L),0x5AC9CE77L},{0xD15F144DL,0L,(-1L),0xD15F144DL}},{{1L,0x31CE02AAL,0L,0xBDC97C2CL},{0xDBD44923L,0L,(-1L),0L},{4L,0x93AB2CDDL,1L,0xFD7BE147L},{0x1B8AD74AL,4L,(-1L),0xBDC97C2CL},{0x5AC9CE77L,(-1L),0x38C4C559L,(-1L)}},{{0x5AC9CE77L,0L,(-1L),0x31CE02AAL},{0x1B8AD74AL,(-1L),1L,0xE0B972B3L},{4L,0xDBD44923L,(-1L),(-1L)},{0xDBD44923L,0L,0L,0xDBD44923L},{1L,0x5AC9CE77L,(-1L),0xBDC97C2CL}},{{0xD15F144DL,0xFD7BE147L,(-1L),4L},{0L,0x93AB2CDDL,0xA76A3CC2L,4L},{0x1B8AD74AL,0xFD7BE147L,0xE0B972B3L,0xBDC97C2CL},{(-1L),0x5AC9CE77L,0x38C4C559L,0xDBD44923L},{0x31CE02AAL,0L,0xBDC97C2CL,(-1L)}},{{0x1B8AD74AL,0xDBD44923L,0x1B8AD74AL,0xE0B972B3L},{0xFD7BE147L,(-1L),(-1L),0x31CE02AAL},{(-1L),0L,0x93AB2CDDL,(-1L)},{1L,(-1L),0x93AB2CDDL,0xBDC97C2CL},{(-1L),4L,(-1L),0xFD7BE147L}}};
static int64_t ***g_1963 = &g_510;
static struct S1 ***g_1970[7] = {&g_797,&g_797,&g_797,&g_797,&g_797,&g_797,&g_797};
static uint8_t g_1987 = 0xCDL;
static const struct S0 g_1994 = {0x5532DC56L,0x5E722240L,4L,0x1BL,0xC317C49FFCBF5A0DLL,0x3D454D4A4A2D5806LL,0L};
static int64_t g_2022 = 0x0BB62769FBCA27F5LL;



static uint32_t  func_1(void);
static struct S1  func_22(int32_t  p_23, int32_t * p_24, union U2  p_25, int32_t  p_26, int32_t * p_27);
static struct S0  func_30(union U2  p_31);
static union U2  func_32(int16_t  p_33, int32_t  p_34, int32_t ** p_35, uint16_t  p_36, struct S0  p_37);
static union U2 * func_42(int32_t ** p_43);
static uint8_t  func_44(uint8_t  p_45, int32_t * p_46, int32_t ** p_47);
static int8_t  func_52(uint64_t  p_53, int32_t ** p_54);
static uint64_t  func_55(int32_t ** p_56, uint64_t  p_57);




static uint32_t  func_1(void)
{ 
    int32_t l_13 = 0xA62A9695L;
    int32_t *l_17 = (void*)0;
    int32_t **l_16 = &l_17;
    int32_t *l_19 = &g_5;
    int32_t **l_18 = &l_19;
    uint32_t l_38 = 0x36C1D66BL;
    struct S0 l_41[3] = {{0x60D4E023L,0x24A13297L,0x4902L,0x20L,0x3D57638FF4399391LL,0L,0L},{0x60D4E023L,0x24A13297L,0x4902L,0x20L,0x3D57638FF4399391LL,0L,0L},{0x60D4E023L,0x24A13297L,0x4902L,0x20L,0x3D57638FF4399391LL,0L,0L}};
    int32_t *l_1336 = &g_2[4];
    int8_t l_1337 = (-1L);
    struct S1 *l_1986 = &g_1094;
    uint8_t ***l_1992 = (void*)0;
    uint8_t ***l_1993 = &g_996;
    int16_t *l_1998 = &g_602.f2;
    uint16_t ****l_2005[3];
    const uint8_t *l_2007 = &g_1994.f3;
    const uint8_t **l_2006 = &l_2007;
    int64_t l_2008 = 0x261D132A90F5247FLL;
    int8_t l_2009 = (-4L);
    int32_t l_2011 = 1L;
    int64_t l_2012 = 6L;
    int32_t l_2013 = 0x4A96B4BEL;
    int32_t l_2014 = (-8L);
    int32_t l_2015 = 0xE65285B2L;
    int32_t l_2016 = (-1L);
    int32_t l_2017 = 4L;
    int32_t l_2018 = (-2L);
    int32_t l_2019 = (-2L);
    int32_t l_2020 = 2L;
    int32_t l_2021[3];
    uint32_t l_2023 = 0xF24FE3C3L;
    uint64_t l_2041 = 0xE7C14AB653B1DAB5LL;
    uint64_t l_2043 = 18446744073709551610UL;
    uint32_t l_2049 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 3; i++)
        l_2005[i] = &g_550;
    for (i = 0; i < 3; i++)
        l_2021[i] = 0xD732047BL;
    for (g_2[1] = (-5); (g_2[1] >= 13); g_2[1] = safe_add_func_int16_t_s_s(g_2[1], 4))
    { 
        uint32_t l_8 = 2UL;
        for (g_5 = 0; (g_5 == (-15)); g_5 = safe_sub_func_int8_t_s_s(g_5, 8))
        { 
            int32_t *l_9 = &g_10;
            (*l_9) = l_8;
        }
    }
    (*g_421) = ((safe_rshift_func_int16_t_s_u(l_13, 10)) | (safe_div_func_uint32_t_u_u((((((*l_16) = &g_2[1]) == ((*l_18) = &g_2[1])) == (safe_add_func_int8_t_s_s(g_10, ((g_2[3] | ((((*l_1986) = func_22(((**g_420) = (safe_lshift_func_int8_t_s_s((((((func_30((g_10 , func_32(g_5, l_38, g_39[0], l_38, l_41[1]))) , (*g_278)) , (*g_420)) != l_1336) > 0x726703B6L) || g_186.f3), 4))), &l_13, (*g_857), l_1337, &l_13)) , g_1235) , g_1987)) & 6UL)))) < 254UL), 4294967290UL)));
    (*l_16) = (*l_18);
    (*l_18) = (*l_18);
    if (((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(0L, (((*l_1993) = &g_164) != (((((g_1994 , (safe_mod_func_int32_t_s_s(((!((**l_18) | (&g_550 != ((((*l_1998) = (**l_16)) , (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(253UL, (**l_18))) < (*l_1336)), 13)), 3))) , l_2005[0])))) < (*l_17)), (*l_17)))) >= (*l_1336)) <= (**l_16)) <= 0x58L) , l_2006)))) , 0UL), g_1987)) ^ l_2008))
    { 
        int32_t *l_2010[4] = {&g_2[1],&g_2[1],&g_2[1],&g_2[1]};
        int i;
        l_2023++;
    }
    else
    { 
        union U2 **l_2027 = (void*)0;
        union U2 ***l_2026 = &l_2027;
        int32_t l_2028 = 0xCB8CEA5DL;
        const union U2 *l_2047 = &g_858[1][4];
        const union U2 **l_2046 = &l_2047;
        int64_t **l_2048[5];
        int i;
        for (i = 0; i < 5; i++)
            l_2048[i] = &g_511;
        if ((&g_857 == ((*l_2026) = &g_857)))
        { 
            return l_2028;
        }
        else
        { 
            int32_t *l_2031 = &g_1429;
            int8_t *l_2034 = &g_75[2][2];
            int64_t **l_2039 = &g_511;
            int32_t l_2040 = 0x530A9BCAL;
            uint8_t l_2042 = 0xB0L;
            l_2042 = (((((**g_420) = (((+(((*l_2031) ^= (+l_2028)) , (safe_mod_func_int8_t_s_s(((*l_2034) = 0xE6L), (safe_lshift_func_uint8_t_u_s(0x7CL, 1)))))) >= (((safe_sub_func_int64_t_s_s((0xAEL == ((**g_797) , (((*l_19) > (((*l_1998) = (l_2039 != (void*)0)) != 0x0A9BL)) , g_781[0]))), (*l_19))) > l_2040) == l_2028)) , 1L)) > l_2041) >= (***g_550)) | 0x04667120DD93BA6ALL);
            (*l_1986) = (*g_798);
        }
        l_2043++;
        (*l_2046) = &g_1235;
        l_2028 = ((l_2048[3] != l_2048[3]) , 1L);
    }
    return l_2049;
}



static struct S1  func_22(int32_t  p_23, int32_t * p_24, union U2  p_25, int32_t  p_26, int32_t * p_27)
{ 
    int16_t l_1338 = 1L;
    struct S1 l_1360 = {0UL,0x8242L,65535UL,0x1D4A031FL};
    int64_t **l_1376 = &g_511;
    const int32_t *l_1406 = &g_78;
    int32_t *l_1425[7] = {&g_78,&g_78,&g_5,&g_78,&g_78,&g_5,&g_78};
    int32_t l_1427[1][2];
    uint16_t ***l_1437 = &g_277;
    uint32_t l_1450 = 0x3D511A6AL;
    const uint64_t l_1467 = 3UL;
    struct S0 l_1473 = {0xFF76C592L,0xE3011D06L,0L,0x67L,0x2CDC3955379EE20DLL,0x37C3BAA45012E083LL,0x3E5AL};
    const uint8_t *l_1479 = &g_165;
    const uint8_t **l_1478 = &l_1479;
    uint8_t l_1482 = 0xAFL;
    int32_t ****l_1502 = (void*)0;
    uint8_t l_1508 = 1UL;
    uint8_t l_1606 = 8UL;
    int32_t l_1662 = 0x30A96261L;
    uint32_t l_1729[3][3] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0UL,0UL,0UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
    int64_t * const **l_1827 = (void*)0;
    uint32_t * const *l_1860 = (void*)0;
    uint32_t l_1861 = 0xB019F615L;
    int16_t l_1881 = 0x8CD9L;
    int32_t l_1932[3][6][3] = {{{(-1L),0x20A28F9AL,0xB4599041L},{6L,0x20A28F9AL,0x20A28F9AL},{6L,0x20A28F9AL,1L},{(-1L),0x20A28F9AL,0xB4599041L},{6L,0x20A28F9AL,0x20A28F9AL},{6L,0x20A28F9AL,1L}},{{(-1L),0x20A28F9AL,0xB4599041L},{6L,0x20A28F9AL,0x20A28F9AL},{6L,0x20A28F9AL,1L},{(-1L),0x20A28F9AL,0xB4599041L},{6L,0x20A28F9AL,0x20A28F9AL},{6L,0x20A28F9AL,1L}},{{(-1L),0x20A28F9AL,0xB4599041L},{6L,0x20A28F9AL,0x20A28F9AL},{6L,0x20A28F9AL,1L},{(-1L),0x20A28F9AL,0xB4599041L},{6L,0x20A28F9AL,0x20A28F9AL},{6L,0x20A28F9AL,1L}}};
    struct S1 ***l_1946[3];
    int32_t ** const **l_1952 = (void*)0;
    const uint8_t **l_1980 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1427[i][j] = 3L;
    }
    for (i = 0; i < 3; i++)
        l_1946[i] = &g_797;
    if (l_1338)
    { 
        int32_t **l_1340 = &g_40;
        struct S1 l_1378 = {1UL,0x4478L,2UL,0x0F37035DL};
        int32_t l_1422[2];
        int32_t *l_1428 = &g_1429;
        int64_t **l_1459 = &g_511;
        int64_t ***l_1460 = &g_510;
        union U2 **l_1486[1];
        uint32_t l_1489[5];
        struct S1 **l_1511 = &g_798;
        int32_t **l_1520 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_1422[i] = 3L;
        for (i = 0; i < 1; i++)
            l_1486[i] = (void*)0;
        for (i = 0; i < 5; i++)
            l_1489[i] = 0x2BCAE24DL;
        (*l_1340) = g_1339;
        for (g_1095.f0 = 0; (g_1095.f0 >= 34); ++g_1095.f0)
        { 
            int32_t l_1356 = 1L;
            int32_t l_1357 = 7L;
            int64_t ***l_1377 = &l_1376;
            uint16_t l_1392[4] = {0x22FCL,0x22FCL,0x22FCL,0x22FCL};
            int32_t *l_1426 = &g_781[0];
            uint16_t l_1456 = 65535UL;
            int i;
            for (g_1335.f1 = 0; (g_1335.f1 <= 3); g_1335.f1 += 1)
            { 
                int32_t *l_1343 = &g_1141;
                int8_t *l_1355 = &g_75[1][2];
                int i, j;
                l_1343 = &p_26;
                (*l_1343) = g_1010[g_1335.f1][(g_1335.f1 + 3)];
                l_1357 &= (safe_sub_func_uint16_t_u_u(((g_72[(g_1335.f1 + 1)] ^ (safe_mod_func_uint64_t_u_u((~(((((*g_857) , (*g_511)) < (18446744073709551615UL && 18446744073709551607UL)) < 0xA7L) <= ((safe_mod_func_int64_t_s_s(((--(***g_995)) & ((*l_1355) = ((*l_1343) && 0xB0L))), 1UL)) != 0L))), l_1356))) >= (***g_550)), l_1338));
            }
        }
        if (((**g_420) = ((safe_div_func_uint16_t_u_u(((****g_1447) = (((((*l_1460) = (l_1459 = (void*)0)) != (void*)0) ^ (g_1335 , ((**g_420) | (safe_lshift_func_uint16_t_u_s(p_23, 8))))) < ((((safe_mul_func_int8_t_s_s(g_1335.f0, (safe_mod_func_int8_t_s_s(g_1095.f1, (-1L))))) > p_23) , 3UL) & l_1467))), p_26)) > 0x4E87L)))
        { 
            uint64_t l_1468 = 0x78019DBC56E1722ALL;
            l_1468--;
            (**g_420) ^= (*p_24);
            (*g_421) = (safe_div_func_int8_t_s_s((((l_1473 , g_697[0][1]) | (l_1378.f3 != (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((p_25 , (p_25.f0 == ((*g_629) != l_1478))), g_72[4])), 4L)))) || 0xA862L), 8UL));
        }
        else
        { 
            union U2 **l_1483 = &g_857;
            union U2 **l_1485 = &g_857;
            union U2 ***l_1484[3];
            int32_t l_1487 = 0xCDBC93C3L;
            uint32_t *l_1488[3];
            int16_t *l_1490 = (void*)0;
            int16_t *l_1491 = &g_1335.f2;
            struct S0 l_1492 = {0x3B5F3C7FL,0L,0xBB5EL,0x66L,7L,1L,0xC949L};
            int32_t *l_1496 = &l_1492.f1;
            int32_t l_1504 = 0x55E090B7L;
            int32_t l_1505 = 0x5055E884L;
            int32_t l_1506[7];
            int i;
            for (i = 0; i < 3; i++)
                l_1484[i] = &l_1485;
            for (i = 0; i < 3; i++)
                l_1488[i] = (void*)0;
            for (i = 0; i < 7; i++)
                l_1506[i] = 0L;
            p_27 = (void*)0;
            if ((((safe_lshift_func_int8_t_s_u(p_26, l_1482)) , func_32(g_78, (((l_1483 == (l_1486[0] = l_1483)) == (l_1489[1] = l_1487)) , (((*l_1491) ^= p_26) , (*p_24))), &g_1339, (****g_1447), l_1492)) , (*p_24)))
            { 
                int32_t *l_1495 = &l_1422[1];
                int32_t **l_1499 = &g_1339;
                for (l_1492.f4 = 0; (l_1492.f4 != (-6)); l_1492.f4--)
                { 
                    if ((**g_420))
                        break;
                }
                l_1496 = l_1495;
                for (g_95 = 25; (g_95 == (-14)); g_95--)
                { 
                    (*g_797) = (**g_880);
                }
                (*l_1499) = (*g_420);
                return l_1378;
            }
            else
            { 
                int32_t l_1503 = 0x81CCD2E1L;
                int32_t l_1507[4][4] = {{0x6C3DAB80L,0x480E7892L,0x6C3DAB80L,0x6C3DAB80L},{0x6C3DAB80L,0x6C3DAB80L,0x480E7892L,0x6C3DAB80L},{0x6C3DAB80L,1L,1L,0x6C3DAB80L},{1L,0x6C3DAB80L,1L,1L}};
                int i, j;
                l_1502 = g_1500;
                ++l_1508;
                (*g_421) &= (-1L);
                (**g_420) ^= l_1507[1][1];
            }
        }
        (**g_420) = ((((l_1473 , l_1511) != (*g_880)) == ((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((***g_880) , func_42(l_1520)) != &g_1235), 8)), (***g_550))), g_165)), p_26)) <= 0UL)) || (-7L));
    }
    else
    { 
        uint16_t l_1521 = 0x5852L;
        struct S1 ***l_1525 = (void*)0;
        uint8_t ** const l_1538 = &g_164;
        uint64_t *l_1539 = &g_1094.f0;
        int32_t *l_1542 = &l_1427[0][1];
        int32_t **l_1563[1][7][1] = {{{(void*)0},{&l_1425[0]},{(void*)0},{&l_1425[0]},{(void*)0},{&l_1425[0]},{(void*)0}}};
        struct S0 l_1564 = {4294967295UL,9L,0L,247UL,-1L,-1L,-1L};
        int8_t l_1604 = (-8L);
        uint8_t *l_1733[3][6] = {{&g_697[0][0],&l_1482,&l_1482,&g_697[0][0],&l_1482,&l_1482},{&g_697[0][0],&l_1482,&l_1482,&g_697[0][0],&l_1482,&l_1482},{&g_697[0][0],&l_1482,&l_1482,&g_697[0][0],&l_1482,&l_1482}};
        uint16_t l_1737 = 0x85D2L;
        int8_t *l_1806 = (void*)0;
        int8_t *l_1807 = &l_1604;
        int64_t *l_1808 = &g_1010[2][6];
        int8_t l_1842 = 0L;
        int16_t l_1934[7] = {0x1621L,0x42A7L,0x42A7L,0x1621L,0x42A7L,0x42A7L,0x1621L};
        uint32_t l_1985 = 0x136BE2AFL;
        int i, j, k;
lbl_1633:
        if ((l_1521 <= ((**g_797) , (((*g_798) , (+((*l_1539) = (safe_div_func_int16_t_s_s(((void*)0 != l_1525), (safe_rshift_func_uint8_t_u_u(((((((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((0x3FL == (safe_mod_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*p_27), p_26)), p_23)) , 0UL), p_25.f0))), l_1521)), p_23)) < 4UL) < g_1235.f0) , (void*)0) == l_1538) , (*l_1406)), (**g_996)))))))) == p_23))))
        { 
            int32_t *l_1540 = (void*)0;
            int32_t **l_1541 = &l_1425[3];
            l_1542 = ((*l_1541) = l_1540);
            return l_1360;
        }
        else
        { 
            int32_t *l_1560[3][6][3] = {{{&g_1429,(void*)0,(void*)0},{&g_1429,&g_1429,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1429,(void*)0},{(void*)0,&g_1429,(void*)0},{&g_1429,(void*)0,(void*)0}},{{&g_1429,&g_1429,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1429,(void*)0},{(void*)0,&g_1429,(void*)0},{&g_1429,(void*)0,(void*)0},{&g_1429,&g_1429,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1429,(void*)0},{(void*)0,&g_1429,(void*)0},{&g_1429,(void*)0,(void*)0},{&g_1429,&g_1429,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            int32_t l_1577 = 0L;
            int32_t l_1578 = (-1L);
            int8_t *l_1616 = &g_75[0][5];
            int8_t *l_1619 = &l_1604;
            struct S1 *l_1620 = &g_1095;
            int i, j, k;
            (*g_421) ^= (func_32((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((p_23 ^ (safe_mul_func_int16_t_s_s((g_602.f2 = (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((***g_550) = (safe_add_func_int8_t_s_s((*l_1406), (+0x9860413BL)))), 4)) > (safe_add_func_int8_t_s_s(4L, (((safe_add_func_int8_t_s_s(((((g_1429 = 4L) , (((((p_25 , ((0x6954L < (-7L)) < 0L)) < (**g_510)) & 0x9989L) & 0x3EA6F913L) > p_26)) , p_26) > (*g_511)), 0xE5L)) , p_25.f0) > 0L)))), 1UL))), (*l_1406)))), 2UL)), p_25.f0)), (*p_24), l_1563[0][0][0], p_26, l_1564) , 0x90CFC707L);
            for (l_1564.f1 = 0; (l_1564.f1 == (-25)); l_1564.f1 = safe_sub_func_uint64_t_u_u(l_1564.f1, 2))
            { 
                uint8_t *l_1573 = &g_697[0][1];
                int16_t *l_1601 = &g_602.f2;
                int64_t l_1607 = 3L;
                uint16_t *l_1608 = &g_1095.f2;
                uint32_t *l_1609 = (void*)0;
                uint32_t *l_1610 = &g_1094.f3;
                uint32_t l_1611 = 1UL;
                for (g_1335.f2 = 19; (g_1335.f2 <= 19); g_1335.f2++)
                { 
                    int32_t l_1576 = 0x5226A091L;
                    int32_t l_1579 = 0xD50242E2L;
                    uint8_t l_1580 = 0xBCL;
                    (*g_40) = (safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((*l_1542) = (((void*)0 == l_1573) && 0x90D57F16L)), p_26)), (safe_lshift_func_int16_t_s_u((l_1576 , 0x6BF9L), 12))));
                    --l_1580;
                    (*l_1542) ^= (-1L);
                }
                (**g_420) &= (((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((l_1577 ^= (***g_550)) || 0x69EFL) > (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((*l_1406), 7)) == ((*l_1610) &= ((-7L) > ((((safe_rshift_func_uint16_t_u_u(((*l_1608) ^= (safe_div_func_int16_t_s_s(((*l_1601) = g_1010[4][1]), (l_1578 | (((((((((safe_rshift_func_uint8_t_u_s(l_1604, 1)) <= g_1605) && l_1606) ^ p_26) , p_23) || l_1607) <= p_25.f0) != l_1607) && l_1578))))), l_1607)) , 3L) , 0xB5FAL) != g_1010[0][6])))), (-1L))) ^ g_781[0]) ^ l_1578) >= 1L) <= p_26), (*l_1406))), l_1611)) ^ 0x1881E059B73B7DECLL), 0xFD00L))), (-1L))), p_23)) , &g_595) != (void*)0);
            }
            (**g_420) = (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_25.f0, ((*l_1616) = p_26))), 255UL)) | (((*g_511) = (*g_511)) == ((((safe_rshift_func_int8_t_s_s(g_602.f2, ((*l_1619) = ((***g_629) , 0x46L)))) <= p_23) , p_25.f0) >= p_25.f0))) , 0xD87F5C66L);
            (*g_797) = l_1620;
        }
        p_27 = &p_26;
        if ((0x05L >= (safe_add_func_uint16_t_u_u(65534UL, 0x0CA5L))))
        { 
            int8_t l_1623 = 0x39L;
            union U2 **l_1627[3];
            union U2 ***l_1626 = &l_1627[0];
            int32_t **l_1647[4][7][3] = {{{&g_40,&l_1425[3],&g_40},{&g_40,&g_1339,&l_1425[6]},{&g_40,&g_1339,&g_40},{&g_40,(void*)0,&l_1542},{&g_40,&g_1339,&l_1542},{&g_40,&l_1542,&g_40},{&g_40,&l_1425[3],&g_40}},{{&g_40,&g_1339,&l_1425[6]},{&g_40,&g_1339,&g_40},{&g_40,(void*)0,&l_1542},{&g_40,&g_1339,&l_1542},{&g_40,&l_1542,&g_40},{&g_40,&l_1425[3],&g_40},{&g_40,&g_1339,&l_1425[6]}},{{&g_40,&g_1339,&g_40},{&g_40,(void*)0,&l_1542},{&g_40,&g_1339,&l_1542},{&g_40,&l_1542,&g_40},{&g_40,&l_1425[3],&g_40},{&g_40,&g_1339,&l_1425[6]},{&g_40,&g_1339,&g_40}},{{&g_40,(void*)0,&l_1542},{&g_40,&g_1339,&l_1542},{&g_40,&l_1542,&g_40},{&g_40,&l_1425[3],&g_40},{&g_40,&g_1339,&l_1425[6]},{&g_40,&g_1339,&g_40},{&g_40,(void*)0,&l_1542}}};
            int32_t l_1693[6][3] = {{0L,0x4089DE9FL,0L},{0x8ADB319CL,0L,0L},{0xAF41EF10L,0x4089DE9FL,0xAF41EF10L},{0x8ADB319CL,0x8ADB319CL,0L},{0L,0x4089DE9FL,0L},{0x8ADB319CL,0L,0L}};
            uint8_t l_1694 = 1UL;
            uint16_t *** const l_1741[2][5][4] = {{{(void*)0,&g_277,&g_277,&g_277},{(void*)0,&g_277,&g_277,&g_277},{(void*)0,&g_277,&g_277,&g_277},{(void*)0,&g_277,&g_277,&g_277},{(void*)0,&g_277,&g_277,&g_277}},{{(void*)0,&g_277,&g_277,&g_277},{(void*)0,&g_277,&g_277,&g_277},{(void*)0,&g_277,&g_277,&g_277},{(void*)0,&g_277,&g_277,&g_277},{(void*)0,&g_277,&g_277,&g_277}}};
            uint16_t ****l_1742 = &l_1437;
            struct S1 ***l_1767[1][1][4] = {{{&g_797,&g_797,&g_797,&g_797}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1627[i] = &g_857;
lbl_1651:
            p_27 = (p_24 = &p_26);
            if (l_1623)
            { 
                union U2 ***l_1628 = &l_1627[1];
                struct S1 **l_1636 = &g_798;
                int32_t l_1673 = 0xB4C95A51L;
                int16_t *l_1674 = &g_602.f2;
                int16_t *l_1675[1];
                uint16_t *****l_1687[3];
                int64_t l_1688[5];
                int i;
                for (i = 0; i < 1; i++)
                    l_1675[i] = &l_1338;
                for (i = 0; i < 3; i++)
                    l_1687[i] = &g_1446;
                for (i = 0; i < 5; i++)
                    l_1688[i] = 0x04810090AD183173LL;
                if ((((*l_1542) != (((((safe_sub_func_int8_t_s_s((l_1626 != ((l_1623 , 1L) , l_1628)), (((*g_798) = (***g_880)) , (safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_25.f0, p_26)), l_1623))))) | (**g_996)) < 0x0074L) || p_23) && 6L)) > 1UL))
                { 
                    if (l_1473.f0)
                        goto lbl_1633;
                    if (l_1473.f3)
                        goto lbl_1740;
                }
                else
                { 
                    return l_1360;
                }
                for (l_1508 = 0; (l_1508 <= 4); l_1508 += 1)
                { 
                    uint8_t ****l_1644 = &g_995;
                    int8_t *l_1648 = (void*)0;
                    int8_t *l_1649[1][1];
                    int32_t l_1650 = (-6L);
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1649[i][j] = (void*)0;
                    }
                    (*g_40) ^= ((safe_mul_func_int8_t_s_s(((void*)0 == l_1636), 0x87L)) & (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_1650 ^= (((~((((safe_sub_func_int32_t_s_s((((*l_1644) = (void*)0) == (void*)0), (-9L))) > (safe_mod_func_int16_t_s_s(((((l_1623 >= g_858[3][4].f0) , (*g_630)) == (*g_996)) || p_26), 0x246FL))) , (***g_1447)) == &l_1521)) , l_1647[1][2][1]) != (void*)0)), g_1094.f1)), 0xDEL)));
                    if (l_1467)
                        goto lbl_1651;
                    return (**l_1636);
                }
                (*l_1542) &= (safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((void*)0 == l_1539), (l_1662 , ((***l_1437)++)))), ((**g_797) , 0xDFDDL))), ((safe_div_func_uint32_t_u_u(0x634A96CDL, (+((~((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u((p_25.f2 = ((*l_1674) = l_1673)), 4)) , (*g_164)), g_1335.f5)) != (*l_1406))) & 0x684AL)))) && p_26))), p_26)), 0L));
                for (g_95 = 0; (g_95 <= 1); g_95 += 1)
                { 
                    (**g_420) = (safe_lshift_func_int16_t_s_s(0x0BCFL, (safe_mul_func_int16_t_s_s(p_25.f0, (safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(1UL)), (safe_rshift_func_int16_t_s_u((p_26 == (safe_mul_func_uint16_t_u_u((0x08L & (l_1687[2] != l_1687[0])), l_1688[3]))), p_25.f0))))))));
                    (*l_1542) = (safe_div_func_int32_t_s_s((l_1673 ^= 0x1834341EL), 4294967292UL));
                    (*p_27) = (*p_27);
                }
                for (g_165 = 0; (g_165 < 50); ++g_165)
                { 
                    (*p_24) &= 0L;
                    if ((*p_24))
                        continue;
                }
            }
            else
            { 
                return (**g_797);
            }
            for (l_1473.f2 = 1; (l_1473.f2 >= 0); l_1473.f2 -= 1)
            { 
                uint16_t l_1697 = 4UL;
                uint64_t l_1730 = 0x858AC843A567E249LL;
                --l_1694;
                for (g_91 = 0; (g_91 >= 0); g_91 -= 1)
                { 
                    int i, j;
                    p_27 = &l_1427[g_91][l_1473.f2];
                    if (g_697[l_1473.f2][l_1473.f2])
                        continue;
                }
                --l_1697;
                p_27 = &p_23;
                for (g_165 = 0; (g_165 <= 1); g_165 += 1)
                { 
                    uint16_t *****l_1704[2][2] = {{&g_1446,&g_1446},{&g_1446,&g_1446}};
                    int8_t *l_1705 = &g_75[0][2];
                    int i, j;
                    (**g_420) = (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(0L, ((*l_1705) = ((g_1446 = &g_550) == (void*)0)))) , ((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s((~0xD4B6083FL), g_72[(l_1473.f2 + 3)])), 0x7591L)), 0x1DF39AC0495EF504LL)), 0xE5L)) >= l_1693[(g_165 + 1)][g_165])), g_1335.f1));
                }
                for (g_1094.f3 = 0; (g_1094.f3 <= 1); g_1094.f3 += 1)
                { 
                    int16_t *l_1724 = &l_1338;
                    uint8_t *l_1732 = &l_1508;
                    uint8_t **l_1731[6][6][5] = {{{&l_1732,&l_1732,&l_1732,&l_1732,(void*)0},{(void*)0,&l_1732,&l_1732,&l_1732,(void*)0},{(void*)0,(void*)0,&l_1732,(void*)0,&l_1732},{&l_1732,&l_1732,&l_1732,&l_1732,&l_1732},{(void*)0,(void*)0,&l_1732,&l_1732,&l_1732},{&l_1732,(void*)0,&l_1732,&l_1732,&l_1732}},{{&l_1732,&l_1732,&l_1732,(void*)0,&l_1732},{&l_1732,&l_1732,&l_1732,&l_1732,&l_1732},{(void*)0,&l_1732,(void*)0,&l_1732,&l_1732},{&l_1732,(void*)0,&l_1732,&l_1732,&l_1732},{&l_1732,&l_1732,(void*)0,&l_1732,(void*)0},{(void*)0,(void*)0,&l_1732,&l_1732,&l_1732}},{{&l_1732,&l_1732,(void*)0,&l_1732,&l_1732},{&l_1732,&l_1732,&l_1732,&l_1732,&l_1732},{(void*)0,&l_1732,&l_1732,&l_1732,&l_1732},{&l_1732,&l_1732,&l_1732,(void*)0,&l_1732},{&l_1732,&l_1732,&l_1732,(void*)0,&l_1732},{&l_1732,&l_1732,&l_1732,&l_1732,&l_1732}},{{&l_1732,&l_1732,&l_1732,&l_1732,&l_1732},{&l_1732,&l_1732,&l_1732,&l_1732,&l_1732},{&l_1732,&l_1732,&l_1732,&l_1732,&l_1732},{&l_1732,&l_1732,(void*)0,&l_1732,&l_1732},{&l_1732,(void*)0,&l_1732,&l_1732,&l_1732},{&l_1732,&l_1732,(void*)0,&l_1732,&l_1732}},{{&l_1732,&l_1732,&l_1732,(void*)0,&l_1732},{(void*)0,&l_1732,&l_1732,(void*)0,&l_1732},{&l_1732,&l_1732,&l_1732,(void*)0,(void*)0},{&l_1732,&l_1732,&l_1732,(void*)0,(void*)0},{(void*)0,&l_1732,&l_1732,&l_1732,(void*)0},{(void*)0,&l_1732,&l_1732,(void*)0,&l_1732}},{{&l_1732,(void*)0,(void*)0,&l_1732,&l_1732},{&l_1732,&l_1732,(void*)0,&l_1732,&l_1732},{&l_1732,&l_1732,&l_1732,&l_1732,&l_1732},{(void*)0,&l_1732,&l_1732,&l_1732,&l_1732},{&l_1732,&l_1732,&l_1732,&l_1732,&l_1732},{(void*)0,(void*)0,&l_1732,&l_1732,&l_1732}}};
                    int i, j, k;
                    (*l_1542) = (g_72[(g_1094.f3 + 3)] <= (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((((+0x88CCCFBBL) , (safe_mod_func_int16_t_s_s(((*l_1724) ^= (safe_rshift_func_int8_t_s_s(0x7AL, 1))), (safe_lshift_func_uint8_t_u_u((0x0DF1B5EFL > (((-1L) == 0UL) > (safe_mod_func_uint8_t_u_u(l_1729[2][1], (***g_629))))), 3))))) & l_1730) >= g_305) | p_25.f0), (-1L))), 15)));
                    (*g_40) &= (p_23 && (((l_1733[0][3] = ((*g_996) = &l_1606)) == (void*)0) , (p_25.f2 , 0L)));
                }
            }
            if (((void*)0 != &g_1429))
            { 
lbl_1740:
                for (g_95 = 28; (g_95 >= (-27)); --g_95)
                { 
                    (**g_797) = (***g_880);
                    if ((*p_24))
                        break;
                    (**g_420) |= ((**g_510) > 1UL);
                    ++l_1737;
                }
                (*l_1742) = l_1741[1][2][0];
                return (***g_880);
            }
            else
            { 
                int32_t *l_1743 = &l_1662;
                p_24 = (p_27 = l_1743);
            }
            for (g_595 = (-17); (g_595 < 2); g_595 = safe_add_func_uint64_t_u_u(g_595, 7))
            { 
                int16_t l_1759 = 0x3D44L;
                const int32_t **l_1764 = &l_1406;
                uint32_t *l_1768 = &l_1450;
                uint32_t *l_1769 = &l_1360.f3;
                int32_t l_1782 = 0x0C062142L;
                (*g_40) = (p_25 , ((g_39[0] = (((safe_mul_func_int8_t_s_s(((+(safe_sub_func_int64_t_s_s((((void*)0 == &g_995) || (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((p_25.f2 ^ (safe_div_func_int16_t_s_s(((l_1759 , ((((*l_1539) = l_1759) >= ((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((***g_550), 0UL)), p_23)) || 1L)) <= 0x5C824F77L)) || p_25.f2), 3L))) , p_25) , 0x5CA3E3E1L), 0x71F02CF5L)), 5)), 0x83L))), p_23))) >= p_25.f2), g_72[4])) && g_2[1]) , (void*)0)) != l_1764));
                if ((*p_24))
                    continue;
                (*g_40) = ((l_1502 == l_1502) , ((*p_24) = (((*l_1769) &= ((*l_1768) = (p_25.f0 , (safe_mul_func_int64_t_s_s(((void*)0 == (*g_1500)), ((g_1335 , l_1767[0][0][0]) == &g_797)))))) , (*g_421))));
                (*p_27) = (safe_div_func_uint16_t_u_u((***g_550), (safe_sub_func_int16_t_s_s(g_781[0], (safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(0x711364CFEED37C1CLL, (((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((l_1782 = (*l_1542)) <= ((*g_278) ^ (safe_mul_func_int16_t_s_s(0L, 0xE9C8L)))), 0UL)), g_5)) >= g_10) ^ 0x73L))), (*l_1542)))))));
            }
        }
        else
        { 
            uint32_t l_1795 = 7UL;
            int32_t l_1796 = 0x08C3A4ABL;
            int32_t l_1797 = 0x13D1A9FEL;
            l_1797 = (((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((***g_550), p_23)) && (safe_mul_func_uint8_t_u_u((**g_996), ((0xCEB6L || ((void*)0 != p_27)) & (l_1796 = (safe_mul_func_uint16_t_u_u(((*l_1542) = (((((p_24 == p_24) & p_23) , l_1795) , &l_1733[0][3]) != &l_1733[0][1])), 0x28B0L))))))), g_1335.f1)) & p_23) , 1L);
        }
        if ((((****g_1447) < p_25.f0) >= ((*l_1808) ^= ((safe_rshift_func_int8_t_s_u((((*l_1807) &= (safe_sub_func_int32_t_s_s((*p_24), (((*g_511) = (safe_unary_minus_func_int8_t_s((!(safe_add_func_uint64_t_u_u((*l_1406), (*l_1406))))))) | ((g_697[0][1] > ((*l_1539) = (1L != 0x8E0BL))) <= 65535UL))))) != 0xBAL), (**g_996))) == (*l_1542)))))
        { 
            struct S1 l_1828 = {4UL,0x4834L,65526UL,0x3847EC58L};
            int32_t l_1831 = (-1L);
            int32_t l_1833 = (-1L);
            int32_t l_1834 = (-1L);
            int32_t l_1835 = 0x2053632AL;
            int32_t l_1836 = (-1L);
            int32_t l_1837 = 2L;
            int32_t l_1838 = 0L;
            int32_t l_1839 = (-4L);
            int32_t l_1840 = 0xE8C58183L;
            int32_t l_1841 = (-1L);
            int32_t l_1843 = 0x7310A7F9L;
            int32_t l_1845 = 0L;
            int32_t l_1847 = (-9L);
            uint16_t **l_1852 = &g_278;
            p_24 = &p_23;
            for (l_1564.f1 = 0; (l_1564.f1 >= 0); l_1564.f1 -= 1)
            { 
                int64_t * const **l_1826 = &g_1821[2][2];
                int64_t * const ***l_1825[7][5] = {{&l_1826,&l_1826,&l_1826,&l_1826,&l_1826},{&l_1826,&l_1826,&l_1826,&l_1826,&l_1826},{&l_1826,&l_1826,&l_1826,&l_1826,&l_1826},{&l_1826,&l_1826,&l_1826,&l_1826,&l_1826},{&l_1826,&l_1826,&l_1826,&l_1826,&l_1826},{&l_1826,&l_1826,&l_1826,&l_1826,&l_1826},{&l_1826,&l_1826,&l_1826,&l_1826,&l_1826}};
                int32_t l_1829 = 1L;
                int32_t l_1832 = (-1L);
                int32_t l_1844 = 0L;
                int32_t l_1846 = 0x707A33C9L;
                int32_t l_1848[4][2] = {{0x8544D24AL,0x8544D24AL},{0x8544D24AL,0x8544D24AL},{0x8544D24AL,0x8544D24AL},{0x8544D24AL,0x8544D24AL}};
                uint16_t l_1849 = 1UL;
                int i, j;
                (*g_40) &= (safe_add_func_uint64_t_u_u((safe_div_func_int8_t_s_s((~(safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s(p_23, (safe_mod_func_uint32_t_u_u((p_25.f0 <= ((&g_510 != (l_1827 = (g_1820 = (void*)0))) , g_305)), ((func_32((l_1828 , l_1829), (**g_420), g_1830, p_26, l_1473) , (*l_1406)) & 6L))))), l_1828.f2))), l_1829)), l_1828.f2));
                --l_1849;
                for (p_26 = 0; (p_26 <= 0); p_26 += 1)
                { 
                    (*g_421) &= ((1UL != (l_1852 == (void*)0)) <= g_781[0]);
                    l_1360 = ((**g_797) = (***g_880));
                }
            }
            (*g_1830) = &p_23;
        }
        else
        { 
            int16_t l_1853[3][1][3];
            int32_t l_1875 = 0x6C2C0B84L;
            int32_t l_1877 = 0x553EB20FL;
            int32_t l_1879 = 0x6B55E6A3L;
            uint8_t ***l_1886[7][4][2] = {{{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996}},{{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996}},{{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996}},{{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996}},{{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996}},{{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996}},{{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996},{&g_996,&g_996}}};
            union U2 **l_1896 = &g_857;
            union U2 ***l_1895 = &l_1896;
            int32_t l_1919 = 1L;
            int32_t l_1920 = 0L;
            int32_t l_1923 = 0x36577914L;
            int32_t l_1924[2];
            int32_t l_1933 = 0x2311F7A5L;
            int32_t *l_1956 = &l_1933;
            int32_t ** const l_1955 = &l_1956;
            int32_t ** const *l_1954 = &l_1955;
            int32_t ** const **l_1953 = &l_1954;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_1853[i][j][k] = 0x19B8L;
                }
            }
            for (i = 0; i < 2; i++)
                l_1924[i] = 0L;
            if (((l_1853[2][0][1] > ((safe_rshift_func_uint16_t_u_s(((0x6DL < 0x1EL) || 0x0FL), (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((-1L) >= ((((l_1860 == &g_871[2][1]) || g_1094.f0) & p_23) >= p_26)), p_26)) ^ 0L), 15)))) != l_1861)) > 0x11E3L))
            { 
                int64_t l_1871 = 0xDE5D1AC744F15D8FLL;
                int32_t l_1874 = 0x334BC441L;
                int32_t l_1876 = 0x47227839L;
                int32_t l_1878 = 1L;
                int32_t l_1880 = 0x176A4911L;
                uint64_t l_1882 = 18446744073709551615UL;
                if (l_1360.f2)
                    goto lbl_1633;
                for (l_1737 = 0; (l_1737 <= 18); l_1737++)
                { 
                    int64_t l_1870 = 0xA798245D5506DA2ELL;
                    int32_t *l_1872 = (void*)0;
                    int32_t l_1873[3][7][5] = {{{0xEBA60868L,(-1L),0xEC726AD3L,0x3F27913CL,(-1L)},{(-1L),0x82E31837L,0x86C634EEL,0x8FF18623L,4L},{(-1L),1L,0x783633C2L,(-7L),0xED89054DL},{0x82E31837L,0x783633C2L,1L,0xE6355994L,0xED89054DL},{0x8FF18623L,(-2L),(-10L),0xEF21D640L,4L},{0x77667F2AL,0xEF21D640L,0xEF21D640L,0x77667F2AL,(-1L)},{(-1L),0xED89054DL,(-1L),0x659C5271L,0x7711BA3BL}},{{(-2L),0xEBA60868L,0L,0x7711BA3BL,0L},{0x3F27913CL,0x4928C0EAL,0L,0x659C5271L,0x38904088L},{(-7L),0x7711BA3BL,0x8FF18623L,5L,(-1L)},{(-10L),0L,(-2L),1L,0xCFEB68C5L},{0x01DDC154L,0x3D3A27CAL,0L,0x8FF18623L,(-1L)},{0x146867B8L,0xDF59D1DDL,0L,0x494CB13AL,0xEBA60868L},{0xEBA60868L,0x01DDC154L,(-2L),0xEC726AD3L,(-2L)}},{{1L,1L,0x8FF18623L,0x1368201CL,0L},{1L,0x4928C0EAL,0xEBF6164CL,1L,0x270F62B7L},{0x3D3A27CAL,(-1L),(-1L),(-1L),0x38904088L},{0L,0x4928C0EAL,(-1L),0x86C634EEL,0x01DDC154L},{0xE7C314C9L,1L,1L,0xEBA60868L,4L},{0x659C5271L,0x01DDC154L,0x7711BA3BL,0x270F62B7L,0L},{0xEBF6164CL,0xDF59D1DDL,0xE6355994L,(-1L),0xEC726AD3L}}};
                    int i, j, k;
                    (*p_27) = (safe_mul_func_uint8_t_u_u(((func_32(p_25.f0, ((0xC2L > (l_1871 ^= ((safe_div_func_uint32_t_u_u(l_1853[1][0][2], (safe_lshift_func_uint8_t_u_u(p_25.f0, 0)))) , l_1870))) , (*p_27)), &p_24, p_25.f0, l_1564) , (-4L)) != 1L), g_1094.f2));
                    (*g_1830) = l_1872;
                    if ((*g_40))
                        continue;
                    ++l_1882;
                }
            }
            else
            { 
                union U2 **l_1885 = &g_857;
                uint8_t ****l_1887 = &l_1886[6][0][0];
                uint8_t ***l_1888 = (void*)0;
                union U2 *l_1892 = &g_602;
                union U2 ** const l_1891 = &l_1892;
                union U2 ** const *l_1890 = &l_1891;
                union U2 ** const **l_1889 = &l_1890;
                union U2 ** const *l_1894[1];
                union U2 ** const **l_1893 = &l_1894[0];
                const struct S1 *l_1900 = &g_186;
                int64_t *l_1902 = &g_1823;
                int32_t l_1913 = 0x163A5A51L;
                int32_t l_1918[7][3][3];
                uint16_t l_1935 = 1UL;
                uint64_t l_1948 = 18446744073709551610UL;
                int32_t ****l_1957 = &g_1501;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1894[i] = &l_1891;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1918[i][j][k] = (-2L);
                    }
                }
                (*l_1885) = &g_602;
                if ((p_23 < (((((*l_1887) = l_1886[6][0][0]) != l_1888) || (*p_24)) | (((*l_1893) = ((*l_1889) = (void*)0)) != l_1895))))
                { 
                    const union U2 l_1897 = {0xA5L};
                    const struct S1 **l_1901 = &l_1900;
                    int32_t *l_1903 = &g_422;
                    (*g_421) = ((**g_277) <= (l_1897 , (p_25.f0 | (safe_add_func_int8_t_s_s(0xCAL, ((**g_880) != ((*l_1901) = l_1900)))))));
                    (*p_27) |= ((void*)0 != l_1902);
                    p_24 = l_1903;
                }
                else
                { 
                    int32_t *l_1904 = (void*)0;
                    const int64_t *l_1907 = (void*)0;
                    const int64_t **l_1906 = &l_1907;
                    const int64_t ***l_1905 = &l_1906;
                    const int64_t ****l_1908 = &l_1905;
                    int16_t *l_1911 = (void*)0;
                    int16_t *l_1912 = &l_1473.f2;
                    int32_t l_1914 = 6L;
                    int32_t l_1915 = 0x851CB231L;
                    int32_t l_1916 = (-1L);
                    int32_t l_1917 = (-1L);
                    int32_t l_1921 = 0L;
                    int32_t l_1922[7][5][4] = {{{0xC3594FAFL,5L,0x40099F8CL,(-1L)},{(-1L),1L,(-1L),0xB94C5007L},{(-1L),0xB94C5007L,0x40099F8CL,0xCECE5C3EL},{0xC3594FAFL,0xB94C5007L,(-5L),0xB94C5007L},{0x40099F8CL,1L,(-5L),(-1L)}},{{0xC3594FAFL,5L,0x40099F8CL,(-1L)},{(-1L),1L,(-1L),0xB94C5007L},{(-1L),0xB94C5007L,0x40099F8CL,0xCECE5C3EL},{0xC3594FAFL,0xB94C5007L,(-5L),0xB94C5007L},{0x40099F8CL,1L,(-5L),(-1L)}},{{0xC3594FAFL,5L,0x40099F8CL,(-1L)},{(-1L),1L,(-1L),0xB94C5007L},{(-1L),0xB94C5007L,0x40099F8CL,0xCECE5C3EL},{0xC3594FAFL,0xB94C5007L,(-5L),0xB94C5007L},{0x40099F8CL,1L,(-5L),(-1L)}},{{0xC3594FAFL,5L,0x40099F8CL,(-1L)},{(-1L),1L,(-1L),0xB94C5007L},{(-1L),0xB94C5007L,0x40099F8CL,0xCECE5C3EL},{0xC3594FAFL,0xB94C5007L,(-5L),0xB94C5007L},{0x40099F8CL,1L,(-5L),(-1L)}},{{0xC3594FAFL,5L,0x40099F8CL,(-1L)},{(-1L),1L,(-1L),0xB94C5007L},{(-1L),0xB94C5007L,0x40099F8CL,0xCECE5C3EL},{0xC3594FAFL,0xB94C5007L,(-5L),0xB94C5007L},{0x40099F8CL,1L,(-5L),(-1L)}},{{0xC3594FAFL,5L,0x40099F8CL,(-1L)},{(-1L),1L,(-1L),0xB94C5007L},{(-1L),0xB94C5007L,0x40099F8CL,0xCECE5C3EL},{0xC3594FAFL,0xB94C5007L,(-5L),0xB94C5007L},{0x40099F8CL,1L,(-5L),(-1L)}},{{0xC3594FAFL,5L,0x40099F8CL,(-1L)},{(-1L),1L,(-1L),0xB94C5007L},{(-1L),0xB94C5007L,0x40099F8CL,(-1L)},{0x40099F8CL,0xCECE5C3EL,0xC529D6E0L,0xCECE5C3EL},{(-1L),5L,0xC529D6E0L,1L}}};
                    uint16_t l_1925 = 0x792CL;
                    int i, j, k;
                    (*g_1830) = l_1904;
                    (*l_1908) = l_1905;
                    (*g_421) = 0xB9E1D6DFL;
                    (*l_1542) &= (safe_sub_func_uint64_t_u_u(0UL, (((*l_1912) = (-1L)) < ((**g_420) || (*p_27)))));
                    if (g_1095.f2)
                        goto lbl_1928;
                    l_1925--;
                }
lbl_1928:
                (*p_27) &= 0x27C2369AL;
                if ((*p_27))
                { 
                    (**l_1895) = &p_25;
                }
                else
                { 
                    uint32_t l_1929 = 4294967288UL;
                    int32_t l_1930[3];
                    struct S1 l_1947 = {0x1A0750764055206BLL,9UL,65535UL,4294967295UL};
                    int32_t *****l_1958 = &l_1957;
                    uint32_t *l_1962 = &l_1947.f3;
                    int16_t *l_1964 = (void*)0;
                    int16_t *l_1965 = (void*)0;
                    int16_t *l_1966 = &l_1853[2][0][1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1930[i] = 0x500AAE82L;
                    l_1929 = (*p_27);
                    l_1935--;
                    l_1947 = ((safe_rshift_func_uint8_t_u_u(7UL, (((safe_rshift_func_int8_t_s_u(g_186.f3, (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((((((*g_798) = (*g_798)) , (void*)0) == (((p_26 , &g_797) == l_1946[2]) , &l_1896)) == p_23) < p_26), l_1929)), p_23)))) == p_23) < (*l_1542)))) , l_1947);
                    ++l_1948;
                    (**l_1955) = (((((*g_40) ^= (!(((((l_1953 = l_1952) == ((*l_1958) = ((l_1930[2] < g_2[4]) , l_1957))) ^ (!3L)) != ((*l_1966) = (safe_lshift_func_uint16_t_u_u(((((*l_1962) &= l_1948) ^ ((&g_1821[2][0] != g_1963) > p_25.f0)) >= 0UL), 14)))) & p_25.f0))) <= (**l_1955)) , g_186.f0) , (*g_421));
                }
            }
            for (g_186.f2 = 24; (g_186.f2 > 51); g_186.f2++)
            { 
                struct S1 ****l_1969 = &g_880;
                (*g_421) = ((0L <= ((**g_510) , (((*l_1969) = (void*)0) != g_1970[5]))) && p_25.f0);
                for (g_186.f3 = (-7); (g_186.f3 == 8); g_186.f3 = safe_add_func_uint16_t_u_u(g_186.f3, 8))
                { 
                    int32_t *l_1973 = &g_1931[6][1][0];
                    (*l_1955) = l_1973;
                }
            }
        }
        (*g_421) |= (((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int64_t_s_s(p_25.f0, (((((((safe_rshift_func_int8_t_s_u((p_23 & (((l_1980 == &l_1479) | p_26) >= (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_26, l_1985)), p_26)))), (**g_996))) <= (*l_1542)) ^ p_26) | g_1095.f2) ^ (****g_1447)) > p_23) < (*l_1406)))) ^ 0xEB6C028BL) <= 1UL), 10)) || g_1931[6][1][0]) && g_1150);
    }
    return (*g_798);
}



static struct S0  func_30(union U2  p_31)
{ 
    uint8_t l_1321[5] = {6UL,6UL,6UL,6UL,6UL};
    int32_t *l_1333 = &g_1141;
    int32_t **l_1334 = &g_40;
    int i;
    (*l_1333) |= ((*g_421) = (((((((p_31.f0 > (l_1321[2] == (safe_mod_func_uint32_t_u_u(((((249UL ^ (safe_unary_minus_func_uint16_t_u(0xB477L))) != ((*g_511) = (safe_mod_func_uint32_t_u_u(((**g_510) >= (safe_add_func_int16_t_s_s(0x8D3DL, (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_1321[2] == 0x8F0ECE76L), p_31.f0)), l_1321[2]))))), p_31.f0)))) , (void*)0) != &g_857), l_1321[2])))) , 1UL) >= p_31.f0) , 1L) , 0L) < p_31.f0) | l_1321[1]));
    l_1333 = ((*l_1334) = l_1333);
    return g_1335;
}



static union U2  func_32(int16_t  p_33, int32_t  p_34, int32_t ** p_35, uint16_t  p_36, struct S0  p_37)
{ 
    uint16_t l_48 = 0x7906L;
    int32_t *l_49 = &g_2[1];
    int32_t ***l_939 = (void*)0;
    int32_t ***l_940 = &g_39[0];
    union U2 **l_1128 = &g_857;
    union U2 *l_1130[1];
    union U2 **l_1129 = &l_1130[0];
    const uint8_t ** const ***l_1134[4][3][6] = {{{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133}},{{(void*)0,&g_1133,&g_1133,&g_1133,&g_1133,(void*)0},{(void*)0,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133}},{{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,(void*)0,&g_1133,&g_1133}},{{(void*)0,&g_1133,&g_1133,&g_1133,&g_1133,(void*)0},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133},{&g_1133,&g_1133,&g_1133,&g_1133,&g_1133,&g_1133}}};
    struct S1 l_1142 = {18446744073709551615UL,0xDD50L,65535UL,2UL};
    int16_t *l_1149 = &g_602.f2;
    int64_t l_1165 = 0L;
    uint32_t *l_1185 = &l_1142.f3;
    int64_t l_1186 = (-5L);
    int64_t ** const l_1187 = &g_511;
    int16_t l_1189 = 0x558DL;
    int32_t l_1192 = 0x71A64A5AL;
    int32_t l_1193[1][7][5] = {{{0x7B4FFB9EL,4L,(-1L),4L,0x7B4FFB9EL},{(-6L),0xEEDFEC0AL,0x06A1FF41L,0x7B4FFB9EL,0L},{(-6L),0L,0xE0C0926EL,4L,4L},{0x7B4FFB9EL,(-1L),0x7B4FFB9EL,0xEEDFEC0AL,0L},{1L,4L,0L,0xEEDFEC0AL,0x7B4FFB9EL},{0L,0xE0C0926EL,4L,4L,0xE0C0926EL},{0xE0C0926EL,0L,0L,0x7B4FFB9EL,0x06A1FF41L}}};
    uint64_t l_1197 = 0x5C84479F69FF8121LL;
    uint16_t * const ***l_1231 = (void*)0;
    int32_t l_1272[7] = {0xB55CA949L,0x01883B8BL,0xB55CA949L,0xB55CA949L,0x01883B8BL,0xB55CA949L,0xB55CA949L};
    int32_t *l_1311 = &l_1272[1];
    int32_t *l_1312[5] = {&g_78,&g_78,&g_78,&g_78,&g_78};
    uint16_t l_1313 = 0xF094L;
    int8_t l_1316[4];
    uint32_t l_1317 = 0UL;
    union U2 l_1320 = {1L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1130[i] = &g_858[3][4];
    for (i = 0; i < 4; i++)
        l_1316[i] = 1L;
    return l_1320;
}



static union U2 * func_42(int32_t ** p_43)
{ 
    int64_t l_1121 = (-1L);
    int32_t *l_1122 = (void*)0;
    int32_t *l_1123[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_1124[4][1] = {{0x8A594F91L},{7UL},{0x8A594F91L},{7UL}};
    union U2 *l_1127 = &g_602;
    int i, j;
    l_1124[1][0]++;
    return l_1127;
}



static uint8_t  func_44(uint8_t  p_45, int32_t * p_46, int32_t ** p_47)
{ 
    uint8_t **l_946[7];
    uint8_t ***l_945 = &l_946[3];
    int8_t *l_947 = &g_595;
    struct S0 l_951 = {1UL,0L,0xB45BL,0xE8L,0L,0xB986772806AF9F6ELL,-1L};
    uint64_t *l_955 = &g_186.f0;
    int32_t l_956 = 0xAFF95702L;
    struct S1 l_961[4] = {{9UL,8UL,0xD80FL,4294967295UL},{9UL,8UL,0xD80FL,4294967295UL},{9UL,8UL,0xD80FL,4294967295UL},{9UL,8UL,0xD80FL,4294967295UL}};
    int32_t l_973[5];
    int8_t l_1009 = 1L;
    uint16_t l_1011[3];
    uint16_t ***l_1024 = &g_277;
    uint32_t l_1117 = 0UL;
    int i;
    for (i = 0; i < 7; i++)
        l_946[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_973[i] = 0xF70E207EL;
    for (i = 0; i < 3; i++)
        l_1011[i] = 0xF317L;
    if ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((*l_947) = (l_945 != &l_946[4])) ^ (g_174[5][0] , (+((safe_mul_func_int16_t_s_s(((((l_951 , 5L) != (l_956 = (((*g_278) = (+l_951.f4)) && ((safe_rshift_func_uint16_t_u_s((l_955 == (void*)0), g_697[0][1])) , l_951.f0)))) ^ l_951.f4) || p_45), p_45)) , l_951.f1)))), g_247.f0)), 0xC1L)))
    { 
        struct S1 l_957 = {6UL,65533UL,0x44A0L,0xE453B4E5L};
        struct S1 *l_958 = (void*)0;
        struct S1 *l_959 = (void*)0;
        struct S1 *l_960[7][4];
        int32_t l_970 = 0xBC417BA6L;
        int32_t l_971 = 0x97A38141L;
        int32_t l_972[4];
        uint16_t *l_1045[3];
        int32_t *l_1083 = &g_10;
        const uint16_t l_1109 = 1UL;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 4; j++)
                l_960[i][j] = &l_957;
        }
        for (i = 0; i < 4; i++)
            l_972[i] = 0x4CF14E65L;
        for (i = 0; i < 3; i++)
            l_1045[i] = &l_961[0].f2;
        l_961[0] = ((**g_797) = l_957);
        for (g_5 = 0; (g_5 != 12); g_5++)
        { 
            int32_t l_964[1];
            int32_t *l_965 = &l_956;
            int32_t *l_966 = &l_951.f1;
            int32_t *l_967 = &l_951.f1;
            int32_t *l_968 = (void*)0;
            int32_t *l_969[2];
            uint8_t l_974[7][7] = {{0x57L,0x57L,0x57L,0x57L,0x57L,0x57L,0x57L},{0xD9L,255UL,0xD9L,255UL,0xD9L,255UL,0xD9L},{0x57L,0x57L,0x57L,0x57L,0x57L,0x57L,0x57L},{0xD9L,255UL,0xD9L,255UL,0xD9L,255UL,0xD9L},{0x57L,0x57L,0x57L,0x57L,0x57L,0x57L,0x57L},{0xD9L,255UL,0xD9L,255UL,0xD9L,255UL,0xD9L},{0x57L,0x57L,0x57L,0x57L,0x57L,0x57L,0x57L}};
            int64_t *** const l_985 = (void*)0;
            uint32_t l_986 = 0x65B295D8L;
            int16_t *l_987[4];
            struct S1 l_992 = {0xB9291F5B905D109DLL,65535UL,65535UL,0xDDC1F6BDL};
            uint8_t ****l_997 = &l_945;
            uint16_t **l_1008 = (void*)0;
            int64_t **l_1016 = &g_511;
            int32_t l_1090 = 0x57742AE0L;
            int32_t l_1102 = 0xF8F20AA3L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_964[i] = (-4L);
            for (i = 0; i < 2; i++)
                l_969[i] = &l_951.f1;
            for (i = 0; i < 4; i++)
                l_987[i] = &l_951.f2;
            ++l_974[1][2];
            (*l_965) = (((g_91 = (safe_mul_func_int16_t_s_s((((((*g_629) == ((*l_945) = (*l_945))) <= ((*g_164) | (safe_add_func_int8_t_s_s(g_95, (safe_add_func_uint64_t_u_u((((((((l_985 != l_985) && (((l_986 || l_957.f2) && l_951.f3) != (*l_966))) == (*l_965)) <= p_45) != g_91) && 0x19L) == (*g_421)), 0x79049AE6B5BC8C1FLL)))))) , l_961[0]) , 0x9DDBL), l_961[0].f2))) == g_95) > 0xACL);
        }
    }
    else
    { 
        struct S1 *l_1110[6][4][4] = {{{&g_1094,&g_1094,&l_961[0],&g_1095},{&l_961[0],&l_961[0],&l_961[0],&g_1094},{&g_1094,&g_186,&g_186,&g_1094},{&g_1094,&l_961[0],&l_961[0],&g_186}},{{&l_961[0],&g_186,&g_1095,&l_961[0]},{(void*)0,&l_961[2],&g_1094,&l_961[0]},{&g_186,&g_186,(void*)0,&g_186},{&g_186,&l_961[0],&g_186,&g_1094}},{{&g_1095,&g_186,&g_186,&g_1094},{&l_961[2],&l_961[0],&g_1094,&g_1095},{&l_961[2],&g_1094,&g_186,&g_186},{&g_1095,&g_1095,&g_186,&l_961[0]}},{{&g_186,&g_186,(void*)0,&l_961[0]},{&g_186,&l_961[0],&g_1094,(void*)0},{(void*)0,&l_961[0],&g_1095,&l_961[0]},{&l_961[0],&g_186,&l_961[0],&l_961[0]}},{{&g_1094,&g_1095,&g_186,&g_186},{&g_1094,&g_1094,&l_961[0],&g_1095},{&l_961[0],&l_961[0],&l_961[0],&g_1094},{&g_1094,&g_186,&g_186,&g_1094}},{{&g_1094,&l_961[0],&l_961[0],&g_186},{&l_961[0],&g_186,&g_1095,&l_961[0]},{(void*)0,&l_961[2],&g_1094,&l_961[0]},{&g_186,&g_186,(void*)0,&g_186}}};
        const int32_t l_1111[7] = {0x58864CB7L,0x58864CB7L,0x58864CB7L,0x58864CB7L,0x58864CB7L,0x58864CB7L,0x58864CB7L};
        int32_t *l_1118 = &g_781[0];
        int32_t *l_1119[7] = {&l_951.f1,&l_951.f1,&l_951.f1,&l_951.f1,&l_951.f1,&l_951.f1,&l_951.f1};
        int32_t **l_1120 = &l_1119[0];
        int i, j, k;
        l_951.f1 = ((((((*g_797) = l_1110[4][1][3]) == l_1110[4][1][3]) && (**g_996)) , l_1111[3]) | ((*l_1118) = ((*g_421) = ((+(safe_mod_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((**g_277) = 65534UL), (l_1117 , 1UL))) || p_45), l_1111[1]))) != 0UL))));
        (*l_1120) = (l_961[3] , p_46);
    }
    return (***g_995);
}



static int8_t  func_52(uint64_t  p_53, int32_t ** p_54)
{ 
    struct S1 *l_541 = &g_186;
    uint32_t l_543 = 0x1AF0A251L;
    int32_t l_553 = 1L;
    int32_t l_566[4][3] = {{0xBBDFDE62L,0xBBDFDE62L,0xBBDFDE62L},{8L,8L,8L},{0xBBDFDE62L,0xBBDFDE62L,0xBBDFDE62L},{8L,8L,8L}};
    int8_t l_623[4];
    const uint8_t *l_626 = &g_165;
    const uint8_t **l_625 = &l_626;
    const uint8_t ***l_624 = &l_625;
    int32_t l_632 = (-1L);
    const union U2 l_648 = {1L};
    struct S1 **l_657 = &l_541;
    uint32_t *l_676[3];
    int64_t **l_677 = (void*)0;
    int8_t *l_678[2][3] = {{&l_623[1],&l_623[1],&l_623[1]},{(void*)0,(void*)0,(void*)0}};
    int32_t l_679 = 0x799CEF85L;
    int32_t *l_680 = &g_5;
    int32_t l_731 = (-1L);
    uint32_t l_733 = 0x452FBF3EL;
    uint16_t ****l_884 = &g_550;
    int64_t l_929[1];
    int i, j;
    for (i = 0; i < 4; i++)
        l_623[i] = 0x0FL;
    for (i = 0; i < 3; i++)
        l_676[i] = &g_186.f3;
    for (i = 0; i < 1; i++)
        l_929[i] = 0x4B93F118A4F4128BLL;
lbl_551:
    (*g_421) = (**p_54);
    for (p_53 = 27; (p_53 <= 51); p_53++)
    { 
        struct S1 **l_542 = &l_541;
        int32_t l_548 = 9L;
        uint16_t ***l_549 = (void*)0;
        int32_t l_580[1][4][5] = {{{0x073E5FF7L,0L,0x073E5FF7L,0x073E5FF7L,0L},{0L,0x073E5FF7L,0x073E5FF7L,0L,0x073E5FF7L},{0L,0L,(-2L),0L,0L},{0x073E5FF7L,0L,0x073E5FF7L,0x073E5FF7L,0L}}};
        int64_t l_584 = 5L;
        uint64_t l_631 = 0xEA3B6DB42D4E2B11LL;
        uint8_t l_635 = 0x43L;
        int i, j, k;
        (*l_542) = l_541;
        for (g_95 = 0; (g_95 <= 4); g_95 += 1)
        { 
            struct S1 l_546 = {0UL,1UL,0x0E6DL,4294967293UL};
            int32_t l_559 = (-1L);
            int32_t l_578 = (-1L);
            int32_t l_579 = 0x45A974AAL;
            uint32_t l_581 = 18446744073709551606UL;
            int32_t l_585 = 2L;
            int32_t l_586[7] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
            int32_t l_587 = 0x3899F5CFL;
            int32_t l_588 = 0xDEC6CEB2L;
            int32_t l_589 = 0xF7827325L;
            int32_t l_590 = 0xCD9A14B9L;
            int32_t l_591 = (-3L);
            int32_t l_592 = 0x7CE99442L;
            int32_t l_593[2];
            int32_t l_594 = (-8L);
            uint32_t l_596[2][4][7] = {{{1UL,0x747A9D90L,0x9E6C9ECBL,0UL,4294967295UL,1UL,1UL},{0x9F164CD1L,0xCB12D018L,1UL,0xCB12D018L,0x9F164CD1L,4294967293UL,8UL},{0UL,0x747A9D90L,1UL,8UL,0x983D18ACL,1UL,0x983D18ACL},{0xED7012FEL,3UL,3UL,0xED7012FEL,0xCB12D018L,5UL,1UL}},{{0UL,8UL,1UL,1UL,2UL,2UL,1UL},{0x9B808043L,0xA157FC92L,0x9B808043L,4294967293UL,0xCB12D018L,3UL,0x9F164CD1L},{0UL,0x9E6C9ECBL,0x747A9D90L,1UL,0UL,1UL,0x747A9D90L},{0xCB12D018L,0xCB12D018L,8UL,5UL,1UL,3UL,0xA157FC92L}}};
            union U2 *l_601 = &g_602;
            const uint8_t ***l_628 = &l_625;
            uint16_t *l_643 = &g_186.f2;
            int8_t *l_646 = (void*)0;
            int8_t *l_647[2];
            uint64_t *l_649 = (void*)0;
            uint64_t *l_650 = &l_546.f0;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_593[i] = (-1L);
            for (i = 0; i < 2; i++)
                l_647[i] = &l_623[1];
            --l_543;
            (**l_542) = l_546;
            for (g_165 = 0; (g_165 <= 4); g_165 += 1)
            { 
                int32_t l_552 = (-10L);
                int32_t *l_554 = (void*)0;
                int32_t *l_555 = &l_548;
                int32_t *l_556 = (void*)0;
                int32_t *l_557 = &l_548;
                int32_t *l_558 = (void*)0;
                int32_t *l_560 = &g_422;
                int32_t l_561 = (-1L);
                int32_t *l_562 = &g_78;
                int32_t l_563[4] = {0xA92C175DL,0xA92C175DL,0xA92C175DL,0xA92C175DL};
                int32_t *l_564 = &g_78;
                int32_t *l_565 = &g_5;
                int32_t *l_567 = &l_563[1];
                int32_t *l_568 = &l_553;
                int32_t *l_569 = &l_559;
                int32_t *l_570 = &l_563[2];
                int32_t *l_571 = &l_566[3][0];
                int32_t *l_572 = &l_552;
                int32_t *l_573 = (void*)0;
                int32_t *l_574 = &l_566[3][0];
                int32_t *l_575 = &l_553;
                int32_t *l_576 = &g_5;
                int32_t *l_577[6][5][5] = {{{(void*)0,&l_566[1][0],&l_553,&l_563[2],&l_548},{&g_2[1],&g_5,&l_553,(void*)0,&g_2[1]},{&g_2[1],(void*)0,&l_566[2][2],&l_559,(void*)0},{&g_5,(void*)0,&l_559,&l_566[3][0],&l_552},{&g_78,&g_2[1],&l_559,&g_5,&l_563[1]}},{{&l_552,&l_553,&l_566[2][2],&l_553,&l_561},{(void*)0,&l_548,&l_553,&g_422,&l_559},{&g_422,(void*)0,&l_553,&l_553,(void*)0},{&g_2[5],(void*)0,&l_559,&l_548,&l_552},{(void*)0,&l_563[1],&g_422,&g_2[1],&l_566[3][0]}},{{&l_566[1][0],&g_2[1],&l_553,(void*)0,(void*)0},{(void*)0,&l_548,&l_561,(void*)0,&l_563[0]},{&g_2[5],&l_552,&g_5,&l_563[0],&l_553},{&g_422,&g_2[1],&g_5,&l_561,&l_553},{(void*)0,&l_559,&l_563[1],&l_561,&l_552}},{{&l_552,(void*)0,(void*)0,(void*)0,&g_2[1]},{&g_78,&l_548,&l_566[3][0],(void*)0,&l_561},{&g_5,&l_566[3][0],&l_552,&l_561,&l_566[3][0]},{&g_2[1],&l_563[0],&g_2[5],&l_561,&g_2[2]},{&g_2[1],&l_553,&l_548,&l_563[0],&l_548}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_566[1][2]},{&l_566[3][0],&g_78,(void*)0,(void*)0,&g_2[5]},{&l_552,&l_563[2],&l_566[3][0],&g_2[1],&l_552},{&l_548,&g_78,&g_2[2],&l_548,&l_561},{&l_552,(void*)0,&l_566[1][0],&l_553,&l_563[2]}},{{&l_566[1][1],&l_553,&l_566[3][0],&g_422,&g_78},{&l_566[3][0],&l_563[0],(void*)0,&l_553,&l_552},{&l_561,&l_566[3][0],&l_561,&g_5,(void*)0},{&l_553,&l_548,&l_561,&l_566[3][0],(void*)0},{(void*)0,(void*)0,(void*)0,&l_559,&l_552}}};
                int i, j, k;
                if (g_174[(g_165 + 1)][g_165])
                { 
                    int64_t l_547[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_547[i] = (-4L);
                    l_548 = l_547[1];
                }
                else
                { 
                    return l_543;
                }
                if (((g_550 = l_549) != l_549))
                { 
                    return p_53;
                }
                else
                { 
                    if ((**p_54))
                        break;
                    if (p_53)
                        goto lbl_551;
                    if (l_543)
                        continue;
                }
                l_581++;
                l_596[0][0][2]++;
                for (l_594 = 0; (l_594 >= 0); l_594 -= 1)
                { 
                    int8_t *l_605 = &g_75[0][5];
                    int64_t *l_606 = &l_584;
                    uint64_t *l_615 = &l_546.f0;
                    int i, j, k;
                    l_580[l_594][(l_594 + 2)][l_594] ^= ((((((safe_div_func_uint16_t_u_u(((l_566[(l_594 + 1)][(l_594 + 2)] > (((g_186 , (void*)0) == l_601) > (safe_mod_func_uint32_t_u_u((((*l_606) = (((l_596[(l_594 + 1)][(l_594 + 3)][(g_165 + 1)] = (l_566[(l_594 + 2)][(l_594 + 2)] != ((*l_605) = (0x1B01CC121C0A6A32LL >= l_596[(l_594 + 1)][(l_594 + 1)][(g_95 + 1)])))) | 2L) && p_53)) >= 0x2EF5C484B9C914B0LL), (*g_40))))) >= 9UL), g_2[0])) == (-8L)) || g_2[5]) ^ 0x9B05L) < p_53) | p_53);
                    (*g_421) = ((*l_570) = (l_592 = (0xAA29FAE5A9E3DA89LL && ((l_546 , l_566[2][1]) , (((0x294660D6D90ED813LL <= (4UL != ((*l_615) = ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(l_566[2][1], (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(65527UL, l_553)), 0x8EC3DA48L)))), 4)) ^ 3L)))) && (*l_560)) | 0L)))));
                    if ((*g_421))
                        continue;
                }
            }
            for (l_585 = 0; (l_585 >= 0); l_585 -= 1)
            { 
                int8_t *l_620 = (void*)0;
                int8_t *l_621[5] = {&g_75[2][3],&g_75[2][3],&g_75[2][3],&g_75[2][3],&g_75[2][3]};
                int32_t l_622 = 6L;
                const uint8_t ****l_627[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{&l_624,(void*)0,&l_624,(void*)0},{(void*)0,&l_624,&l_624,&l_624},{(void*)0,(void*)0,(void*)0,&l_624},{&l_624,&l_624,&l_624,(void*)0}};
                int32_t *l_633 = (void*)0;
                int32_t *l_634[7] = {&l_590,&l_590,&l_594,&l_590,&l_590,&l_594,&l_590};
                int i, j, k;
                l_566[3][0] = (l_635 = ((g_174[(l_585 + 4)][g_95] && (((*g_421) = ((safe_sub_func_uint64_t_u_u(((l_586[g_95] ^ ((l_624 = (l_628 = ((safe_rshift_func_uint16_t_u_s(((l_622 = (l_546 , ((l_596[l_585][(l_585 + 2)][(l_585 + 5)] ^ l_589) != 0x8BFEE1D0L))) , ((((0L || (-1L)) && 0UL) < l_553) == 0xBA72L)), l_623[1])) , l_624))) != g_629)) > l_580[0][1][3]), 0L)) <= l_631)) >= (*g_40))) | l_632));
            }
            (*g_421) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(0L, 0)), ((safe_add_func_uint16_t_u_u((~g_174[(g_95 + 1)][g_95]), p_53)) < (((((*g_278) && (++(*l_643))) ^ 0x9421A76C99E485A6LL) > (l_579 = l_593[0])) >= (((*l_650) = (((l_648 , l_584) != l_632) , 0UL)) | 0xD9FC3466C8CC912CLL)))));
        }
    }
    (*g_421) = (((safe_div_func_uint32_t_u_u(0xB745B690L, 0x2F88F425L)) || (--(**g_277))) > ((0x0F8A7CB8449C86ADLL != ((0x2F11D0BA9D59D63DLL & 0UL) && (l_566[3][0] <= ((((((*l_657) = &g_186) != (void*)0) & p_53) | (-4L)) <= p_53)))) == (**g_510)));
    (*l_680) &= (((safe_sub_func_uint8_t_u_u((((l_679 = (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((**l_657) , (((*g_421) = (safe_sub_func_uint32_t_u_u((g_174[3][1] ^ (safe_lshift_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((l_566[2][0] = 0UL), ((&g_510 != (void*)0) == 0UL))) , (l_553 = (&g_511 != l_677))), (**g_630))), p_53)) & 0x6AF8F4334B7F8A75LL) ^ 0x335EL) , 0x48B5L), 1))), g_72[4]))) != l_623[1])), (**p_54))) || 0L), l_632)), l_623[1]))) < 0x69D15B2F2781E08ELL) & 0L), (-1L))) || (**g_510)) < 0xB8L);
    if ((l_676[1] != l_680))
    { 
        uint16_t * const * const l_681 = &g_278;
        uint16_t * const *l_682 = &g_278;
        int32_t l_698 = 0L;
        union U2 *l_705[2][2][3] = {{{&g_602,&g_602,&g_602},{&g_602,&g_602,&g_602}},{{&g_602,&g_602,&g_602},{&g_602,&g_602,&g_602}}};
        int32_t *l_723 = &l_553;
        int32_t *l_727 = &g_78;
        int32_t *l_728 = &l_566[3][0];
        int32_t *l_729 = &g_78;
        int32_t *l_730[7][1] = {{&l_679},{&g_422},{&l_679},{&l_679},{&g_422},{&l_679},{&l_679}};
        int8_t l_732 = 0xD1L;
        int16_t *l_758 = &g_91;
        int16_t l_759[6][5] = {{0xA665L,0L,0L,1L,0L},{0x01A6L,0L,0L,0x01A6L,1L},{(-1L),0x01A6L,0x586FL,0L,0L},{0xA665L,0x01A6L,0xA665L,1L,0x01A6L},{0L,0L,1L,0L,1L},{0L,0L,0x586FL,0x01A6L,(-1L)}};
        const uint16_t *l_767 = &g_186.f1;
        const uint16_t **l_766 = &l_767;
        const uint16_t ***l_765 = &l_766;
        const uint16_t ***l_769[3][3][4] = {{{(void*)0,(void*)0,(void*)0,&l_766},{(void*)0,&l_766,&l_766,(void*)0},{&l_766,&l_766,&l_766,&l_766}},{{&l_766,(void*)0,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766},{(void*)0,(void*)0,(void*)0,&l_766}},{{(void*)0,&l_766,&l_766,(void*)0},{&l_766,&l_766,&l_766,&l_766},{&l_766,(void*)0,&l_766,&l_766}}};
        int8_t l_778 = 0L;
        int i, j, k;
        l_682 = l_681;
lbl_760:
        for (l_679 = (-6); (l_679 < 25); l_679 = safe_add_func_uint32_t_u_u(l_679, 5))
        { 
            int8_t l_713[5];
            uint16_t l_717 = 8UL;
            uint64_t l_726 = 0x5E9A54AF640B74C2LL;
            int i;
            for (i = 0; i < 5; i++)
                l_713[i] = 0x5FL;
            (*l_680) ^= (safe_div_func_uint32_t_u_u(p_53, p_53));
            for (p_53 = 0; (p_53 == 58); p_53 = safe_add_func_int16_t_s_s(p_53, 2))
            { 
                uint8_t *l_695 = (void*)0;
                uint8_t *l_696[2];
                union U2 **l_706 = &l_705[0][0][1];
                int32_t l_714 = 0x41EE1FE3L;
                int32_t l_715 = 0L;
                int32_t *l_716[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (i = 0; i < 2; i++)
                    l_696[i] = &g_697[0][1];
                l_717 &= ((*g_421) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(0x29L, (l_698 &= (**g_630)))), (safe_add_func_int64_t_s_s((((!(safe_mod_func_uint32_t_u_u(1UL, 8UL))) == (!(((*l_706) = l_705[1][1][0]) != &g_247))) ^ (l_715 |= (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s((l_713[4] & (**g_510)), (*l_680))) & (**g_510)) && 1UL) != (-1L)), 0x5482L)), l_714)))), l_713[4])))), g_697[0][0])));
                (*g_421) = (p_53 == ((safe_mod_func_uint64_t_u_u((p_53 <= 0x16L), l_698)) || 251UL));
                if ((*g_40))
                    break;
            }
            for (g_78 = 0; (g_78 > (-12)); g_78--)
            { 
                int32_t **l_722[6][6][4] = {{{&l_680,(void*)0,&g_40,&l_680},{&l_680,&g_40,&l_680,&g_40},{&l_680,&l_680,&l_680,&l_680},{(void*)0,&l_680,&g_40,&l_680},{(void*)0,&l_680,(void*)0,&l_680},{&g_40,(void*)0,&l_680,&l_680}},{{&g_40,&l_680,&l_680,(void*)0},{&l_680,(void*)0,&l_680,&g_40},{&g_40,(void*)0,&l_680,&g_40},{&g_40,&l_680,(void*)0,&l_680},{(void*)0,&l_680,&g_40,(void*)0},{(void*)0,&l_680,&l_680,&l_680}},{{&l_680,&l_680,&l_680,&l_680},{&l_680,&l_680,&g_40,&g_40},{&l_680,&g_40,&g_40,&g_40},{&l_680,&g_40,(void*)0,&g_40},{&g_40,&l_680,&l_680,&l_680},{&g_40,&l_680,&l_680,&l_680}},{{&g_40,&l_680,&l_680,(void*)0},{&l_680,&l_680,&g_40,&l_680},{&g_40,&l_680,&g_40,&l_680},{&l_680,&g_40,&g_40,&l_680},{&l_680,&l_680,&l_680,&l_680},{&l_680,&l_680,&g_40,&l_680}},{{&l_680,&l_680,&g_40,(void*)0},{&g_40,&g_40,&l_680,&l_680},{(void*)0,&g_40,&l_680,&l_680},{&l_680,(void*)0,(void*)0,&l_680},{(void*)0,&g_40,&l_680,(void*)0},{&l_680,&g_40,&l_680,&g_40}},{{&l_680,&l_680,&l_680,&g_40},{&l_680,&g_40,&g_40,(void*)0},{&g_40,&g_40,&l_680,&l_680},{&g_40,(void*)0,&g_40,&l_680},{&l_680,&g_40,&g_40,&l_680},{&g_40,&g_40,&g_40,(void*)0}}};
                int i, j, k;
                l_723 = (*p_54);
                for (l_698 = 0; (l_698 > (-17)); --l_698)
                { 
                    (*l_680) = (p_53 | (0x36L & 0x12L));
                }
            }
            if (l_726)
                continue;
        }
        ++l_733;
        for (g_186.f1 = 13; (g_186.f1 == 24); g_186.f1 = safe_add_func_int32_t_s_s(g_186.f1, 1))
        { 
            struct S1 l_748 = {18446744073709551615UL,65535UL,5UL,1UL};
            uint32_t **l_763 = (void*)0;
            const uint16_t ****l_768[6][5][1] = {{{&l_765},{&l_765},{(void*)0},{&l_765},{&l_765}},{{&l_765},{(void*)0},{&l_765},{&l_765},{&l_765}},{{(void*)0},{&l_765},{(void*)0},{&l_765},{&l_765}},{{&l_765},{(void*)0},{&l_765},{&l_765},{&l_765}},{{(void*)0},{&l_765},{&l_765},{&l_765},{(void*)0}},{{&l_765},{(void*)0},{&l_765},{&l_765},{&l_765}}};
            int i, j, k;
            for (l_733 = 0; (l_733 <= 3); l_733 += 1)
            { 
                uint64_t *l_742 = &g_186.f0;
                union U2 *l_761[2];
                union U2 **l_762 = &l_705[0][0][2];
                uint32_t **l_764 = &l_676[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_761[i] = &g_602;
                if ((safe_mod_func_uint64_t_u_u(((((*l_742) ^= (safe_rshift_func_uint16_t_u_s(g_174[(l_733 + 1)][(l_733 + 1)], 7))) && (((safe_lshift_func_int8_t_s_s(((l_623[l_733] != (((+((+l_623[l_733]) != (safe_unary_minus_func_uint64_t_u(18446744073709551613UL)))) ^ (((l_748 , (((*g_278) = ((~(safe_mul_func_uint16_t_u_u((~(g_186 , (safe_mul_func_int16_t_s_s(0xA004L, 1UL)))), 0xF2AAL))) == l_748.f2)) , 0x67A771CAB60AAB54LL)) && 0L) , (-1L))) > 0x8C96F7087D81399FLL)) , l_623[l_733]), 6)) <= p_53) != (*g_164))) && p_53), g_2[1])))
                { 
                    return p_53;
                }
                else
                { 
                    uint16_t ****l_757[3][7][1];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_757[i][j][k] = &g_550;
                        }
                    }
                    (*g_421) = (safe_div_func_int32_t_s_s((((((((&l_681 == (g_550 = &g_277)) , (**g_510)) , ((***g_629) |= 0x98L)) & p_53) , (l_758 == (void*)0)) , p_53) || 8UL), l_759[4][0]));
                    if (l_748.f1)
                        goto lbl_760;
                    (*l_727) = ((((*g_164) > p_53) != g_2[4]) && p_53);
                }
                (*l_762) = l_761[1];
                l_764 = l_763;
            }
            l_769[1][0][2] = (l_765 = l_765);
        }
        g_781[0] ^= (safe_add_func_uint64_t_u_u((*l_728), (safe_mul_func_uint8_t_u_u((***g_629), ((g_78 || (safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s(0x53487A9EL, l_778)), (*l_680)))) != ((safe_mod_func_int64_t_s_s((((*g_421) = (((((*l_680) , p_53) > (*l_727)) & g_10) == (**g_510))) > 0xFC575566L), (*l_727))) , 0x5EL))))));
    }
    else
    { 
        int32_t l_788[1][5][4] = {{{0L,0x2B058056L,0L,0L},{0xE0907646L,(-1L),0xE0907646L,0L},{0x8745D2DEL,(-1L),0x243B78E9L,0L},{(-1L),0x2B058056L,0x2B058056L,(-1L)},{0xE0907646L,0L,0x2B058056L,0L}}};
        int16_t l_796 = 0L;
        int64_t l_802 = (-1L);
        struct S1 **l_825 = &l_541;
        uint64_t l_856 = 0x78D8BA080EBB82C5LL;
        struct S1 ***l_879 = &g_797;
        uint32_t *l_882 = &g_186.f3;
        struct S1 l_906 = {3UL,65530UL,65531UL,4294967289UL};
        int32_t *l_911 = &l_788[0][1][0];
        int8_t l_931 = 1L;
        union U2 *l_935 = (void*)0;
        int i, j, k;
        if ((p_53 == (*l_680)))
        { 
            struct S1 l_782 = {18446744073709551611UL,0xD1ECL,0x5BA6L,1UL};
            int32_t *l_787 = &g_781[0];
            (*l_541) = l_782;
            for (l_782.f0 = 0; (l_782.f0 != 35); l_782.f0 = safe_add_func_int64_t_s_s(l_782.f0, 7))
            { 
                int32_t **l_785 = (void*)0;
                int32_t **l_786[2][6] = {{(void*)0,(void*)0,&l_680,(void*)0,(void*)0,&l_680},{(void*)0,(void*)0,&l_680,(void*)0,(void*)0,&l_680}};
                int i, j;
                l_787 = (*p_54);
                if (l_788[0][1][0])
                    break;
                return l_788[0][0][1];
            }
            for (l_679 = 0; (l_679 == (-19)); l_679 = safe_sub_func_uint8_t_u_u(l_679, 9))
            { 
                struct S1 ***l_799[6][5] = {{&g_797,&g_797,&g_797,&g_797,&g_797},{&g_797,&l_657,&l_657,&g_797,&g_797},{&l_657,&g_797,&l_657,&l_657,&l_657},{&g_797,&g_797,&g_797,&g_797,&g_797},{&l_657,&g_797,&g_797,&g_797,&g_797},{&g_797,&l_657,&g_797,&l_657,&l_657}};
                int32_t **l_803 = &l_680;
                int32_t **l_804 = &l_787;
                int i, j;
            }
        }
        else
        { 
            int64_t l_812 = 0xC642AEF94E57BE72LL;
            int32_t l_843 = (-1L);
            const uint8_t l_854 = 0x6EL;
            uint64_t l_855 = 2UL;
            union U2 l_869 = {0x04L};
            struct S1 l_905 = {18446744073709551613UL,0xD67BL,0x66F1L,0x77DFD9CFL};
            int32_t *l_915 = &g_781[0];
            union U2 *l_917 = &g_602;
            int32_t l_934 = 0L;
            if (((safe_rshift_func_int16_t_s_u((-1L), 4)) & (safe_rshift_func_int16_t_s_u((l_812 | (*l_680)), 13))))
            { 
                uint8_t **l_820[3];
                uint8_t ***l_819 = &l_820[0];
                struct S1 **l_826 = &g_798;
                struct S1 ***l_827 = &l_826;
                int32_t l_832 = 0xB23EFED8L;
                int i;
                for (i = 0; i < 3; i++)
                    l_820[i] = &g_164;
                (*g_421) = (0UL >= ((((*l_680) = (g_186.f3 < (((safe_div_func_uint16_t_u_u((--(**g_277)), (safe_sub_func_uint32_t_u_u((((((((l_819 != (void*)0) & (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_825 == ((*l_827) = l_826)), 4)), (safe_mul_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(p_53, 255UL)) ^ 0xD53DDA9F23357B2CLL), 0x55C4L))))) | g_781[0]) == 5L) >= p_53) , l_832) > 0xBDL), p_53)))) == 0xAC43D0994FC7E77DLL) == 0x5107BFE3803A9486LL))) & g_91) <= l_788[0][1][0]));
            }
            else
            { 
                uint64_t l_853 = 0x6E0631DC005FF071LL;
                struct S0 l_861 = {4294967293UL,0L,-4L,255UL,0x356A85E1F2315C81LL,0x8CC841958787A7BFLL,0xCFE9L};
                const uint32_t *l_873[6][5][5] = {{{&g_186.f3,&g_186.f3,&g_186.f3,&g_186.f3,&g_186.f3},{(void*)0,&g_186.f3,(void*)0,(void*)0,&g_186.f3},{&g_186.f3,(void*)0,(void*)0,&g_186.f3,(void*)0},{&g_186.f3,&g_186.f3,&g_186.f3,&g_186.f3,&g_186.f3},{(void*)0,&g_186.f3,(void*)0,(void*)0,&g_186.f3}},{{&g_186.f3,(void*)0,(void*)0,&g_186.f3,(void*)0},{&g_186.f3,&g_186.f3,&g_186.f3,&g_186.f3,(void*)0},{&g_186.f3,(void*)0,&g_186.f3,&g_186.f3,(void*)0},{(void*)0,&g_186.f3,&g_186.f3,(void*)0,&g_186.f3},{(void*)0,(void*)0,&g_186.f3,(void*)0,(void*)0}},{{&g_186.f3,(void*)0,&g_186.f3,&g_186.f3,(void*)0},{(void*)0,&g_186.f3,&g_186.f3,(void*)0,&g_186.f3},{(void*)0,(void*)0,&g_186.f3,(void*)0,(void*)0},{&g_186.f3,(void*)0,&g_186.f3,&g_186.f3,(void*)0},{(void*)0,&g_186.f3,&g_186.f3,(void*)0,&g_186.f3}},{{(void*)0,(void*)0,&g_186.f3,(void*)0,(void*)0},{&g_186.f3,(void*)0,&g_186.f3,&g_186.f3,(void*)0},{(void*)0,&g_186.f3,&g_186.f3,(void*)0,&g_186.f3},{(void*)0,(void*)0,&g_186.f3,(void*)0,(void*)0},{&g_186.f3,(void*)0,&g_186.f3,&g_186.f3,(void*)0}},{{(void*)0,&g_186.f3,&g_186.f3,(void*)0,&g_186.f3},{(void*)0,(void*)0,&g_186.f3,(void*)0,(void*)0},{&g_186.f3,(void*)0,&g_186.f3,&g_186.f3,(void*)0},{(void*)0,&g_186.f3,&g_186.f3,(void*)0,&g_186.f3},{(void*)0,(void*)0,&g_186.f3,(void*)0,(void*)0}},{{&g_186.f3,(void*)0,&g_186.f3,&g_186.f3,(void*)0},{(void*)0,&g_186.f3,&g_186.f3,(void*)0,&g_186.f3},{(void*)0,(void*)0,&g_186.f3,(void*)0,(void*)0},{&g_186.f3,(void*)0,&g_186.f3,&g_186.f3,(void*)0},{(void*)0,&g_186.f3,&g_186.f3,(void*)0,&g_186.f3}}};
                const uint32_t **l_872 = &l_873[3][3][4];
                uint32_t *l_881[4] = {&g_186.f3,&g_186.f3,&g_186.f3,&g_186.f3};
                uint32_t **l_883 = &l_676[0];
                uint16_t ****l_885 = &g_550;
                int32_t l_904 = 5L;
                int i, j, k;
                for (g_186.f3 = (-21); (g_186.f3 < 18); ++g_186.f3)
                { 
                    int16_t *l_840 = &g_91;
                    int16_t *l_841 = &g_602.f2;
                    uint8_t *l_842[6] = {&g_697[1][0],&g_697[1][0],&g_697[1][0],&g_697[1][0],&g_697[1][0],&g_697[1][0]};
                    struct S1 **l_852 = &g_798;
                    union U2 l_862 = {0xE5L};
                    uint32_t l_874[4][2][6] = {{{0xA9EDC5EBL,1UL,0x59781419L,0x59781419L,1UL,0xA9EDC5EBL},{0xA00F048AL,0xA9EDC5EBL,0x59781419L,0xA9EDC5EBL,0xA00F048AL,0xA00F048AL}},{{4294967290UL,0xA9EDC5EBL,0xA9EDC5EBL,4294967290UL,1UL,4294967290UL},{4294967290UL,1UL,4294967290UL,0xA9EDC5EBL,0xA9EDC5EBL,4294967290UL}},{{0xA00F048AL,0xA00F048AL,0xA9EDC5EBL,0x59781419L,0xA9EDC5EBL,0xA00F048AL},{0xA9EDC5EBL,1UL,0x59781419L,0x59781419L,1UL,0xA9EDC5EBL}},{{0xA00F048AL,0xA9EDC5EBL,0x59781419L,0xA9EDC5EBL,0xA00F048AL,0xA00F048AL},{4294967290UL,0xA9EDC5EBL,0xA9EDC5EBL,4294967290UL,1UL,4294967290UL}}};
                    int i, j, k;
                    (*g_421) = ((safe_mul_func_int8_t_s_s((l_855 = ((((((+(((p_53 > (p_53 , ((safe_div_func_int16_t_s_s((((*l_840) = g_186.f3) <= (((*g_164) = p_53) > (((*l_841) = 0x32BCL) , (--g_697[0][1])))), (l_788[0][1][0] = ((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((**p_54), ((safe_add_func_int32_t_s_s(((p_53 , l_852) != l_825), 4294967295UL)) >= 4294967292UL))), 3)) && p_53)))) ^ 0xC9L))) , l_853) && p_53)) & p_53) || l_854) , g_781[0]) > p_53) ^ l_802)), 9UL)) >= 0xC3L);
                    if (l_856)
                        break;
                    g_857 = &g_602;
                    (*l_680) = (safe_lshift_func_int16_t_s_u((((g_595 = l_854) | ((void*)0 == &g_797)) && (l_861 , (l_862 , (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_s(((l_861.f1 = ((l_869 , g_870) == l_872)) , 0x06L), l_861.f3)) == 0xA1L) & l_874[1][0][4]), 10)), (**g_277)))))), 12));
                    if (l_861.f4)
                        break;
                }
lbl_907:
                if ((safe_add_func_uint64_t_u_u((p_53 ^ (safe_mod_func_int16_t_s_s(((((g_880 = (l_879 = &l_657)) == &g_797) <= (((*g_870) = l_881[0]) != ((*l_883) = l_882))) || 1UL), (0L ^ (*g_40))))), l_861.f0)))
                { 
                    uint16_t *****l_886 = &l_885;
                    uint64_t *l_889 = &l_855;
                    int8_t l_890 = 0x0EL;
                    int32_t l_901 = 0x2B9EE5EFL;
                    int16_t *l_902[7][6][6] = {{{&l_796,&l_861.f2,&g_91,&g_91,&l_796,&l_861.f2},{&g_91,&l_796,&l_796,&l_861.f2,&l_861.f2,&l_861.f2},{&l_861.f2,&g_91,&g_91,&l_861.f2,(void*)0,(void*)0},{&l_796,&g_91,&l_796,(void*)0,(void*)0,(void*)0},{&l_796,&l_796,&l_796,&g_91,(void*)0,&g_91},{&g_91,&g_91,&g_91,&g_91,(void*)0,&l_796}},{{&g_91,&l_796,(void*)0,&g_91,&l_796,(void*)0},{(void*)0,&g_91,&l_796,&g_91,(void*)0,&l_796},{&g_91,(void*)0,&g_91,&g_91,(void*)0,&g_91},{&g_91,(void*)0,(void*)0,&g_91,&l_796,&g_91},{&l_796,&g_91,(void*)0,(void*)0,(void*)0,&g_91},{&l_796,&l_796,&g_91,&l_861.f2,&l_861.f2,&l_796}},{{&l_861.f2,&l_861.f2,&l_796,&g_91,&l_796,(void*)0},{&l_861.f2,&l_861.f2,(void*)0,&l_861.f2,&l_861.f2,&l_796},{&g_91,&l_796,&g_91,&l_861.f2,(void*)0,&g_91},{&l_861.f2,&g_91,&l_796,&l_796,&l_796,(void*)0},{&l_861.f2,(void*)0,&l_796,&l_861.f2,(void*)0,(void*)0},{&g_91,(void*)0,&l_796,&l_861.f2,(void*)0,&l_796}},{{&l_861.f2,&g_91,(void*)0,&g_91,&l_796,&l_796},{&l_861.f2,&l_796,&l_796,&l_861.f2,(void*)0,(void*)0},{&l_796,&g_91,&l_796,(void*)0,(void*)0,(void*)0},{&l_796,&l_796,&l_796,&g_91,(void*)0,&g_91},{&g_91,&g_91,&g_91,&g_91,(void*)0,&l_796},{&g_91,&l_796,(void*)0,&g_91,&l_796,(void*)0}},{{(void*)0,&g_91,&l_796,&g_91,(void*)0,&l_796},{&g_91,(void*)0,&g_91,&g_91,(void*)0,&g_91},{&g_91,(void*)0,(void*)0,&g_91,&l_796,&g_91},{&l_796,&g_91,(void*)0,(void*)0,(void*)0,&g_91},{&l_796,&l_796,&g_91,&l_861.f2,&l_861.f2,&l_796},{&l_861.f2,&l_861.f2,&l_796,&g_91,&l_796,(void*)0}},{{&l_861.f2,&l_861.f2,(void*)0,&l_861.f2,&l_861.f2,&l_796},{&g_91,&l_796,&g_91,&l_861.f2,(void*)0,&g_91},{&l_861.f2,&g_91,&l_796,&l_796,&l_796,(void*)0},{&l_861.f2,(void*)0,&l_796,&l_861.f2,(void*)0,(void*)0},{&g_91,(void*)0,&l_796,&g_91,&l_796,&l_796},{(void*)0,(void*)0,&l_796,&l_796,&l_796,&l_796}},{{&l_796,(void*)0,(void*)0,&l_796,&l_861.f2,&l_796},{&l_796,&g_91,&l_861.f2,&g_91,&l_861.f2,&l_796},{&l_796,&l_861.f2,&g_91,&l_796,&l_861.f2,(void*)0},{(void*)0,&g_91,(void*)0,&l_861.f2,&l_861.f2,&l_861.f2},{&l_796,(void*)0,&g_91,(void*)0,&l_796,&l_861.f2},{&g_91,(void*)0,&l_796,(void*)0,&l_796,&l_796}}};
                    int32_t l_903 = 0xFC538597L;
                    int i, j, k;
                    (*l_680) = (l_884 == ((*l_886) = l_885));
                    (*g_421) ^= (((((((p_53 = ((*g_511) < (l_890 = ((*l_889) ^= (safe_mul_func_uint8_t_u_u((**g_630), p_53)))))) != (((((safe_sub_func_uint64_t_u_u((l_788[0][0][0] = (safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((((safe_lshift_func_int16_t_s_s((g_602.f2 = (l_903 |= (safe_sub_func_int16_t_s_s(((*l_680) = l_901), 65535UL)))), g_247.f0)) >= (((*g_278) = ((l_904 >= g_2[1]) || l_854)) <= 0xA8F2L)) , g_72[4]) != l_861.f0) <= (*g_511)), 0x4EL)), l_901))), l_861.f2)) && l_843) > l_861.f1) & l_796) , (*g_511))) ^ 0x5A1AE985ACAB8C52LL) , (***g_629)) | l_869.f0) , 0L) ^ (*g_40));
                    l_906 = ((**g_797) = l_905);
                    return p_53;
                }
                else
                { 
                    (*g_421) |= (**p_54);
                    if (g_95)
                        goto lbl_907;
                }
                for (l_861.f1 = 0; (l_861.f1 >= (-30)); l_861.f1 = safe_sub_func_int64_t_s_s(l_861.f1, 3))
                { 
                    int32_t **l_910[4] = {&l_680,&l_680,&l_680,&l_680};
                    int i;
                    l_911 = (void*)0;
                }
                for (g_5 = 22; (g_5 >= 14); g_5--)
                { 
                    int32_t **l_914[4][7][7] = {{{&l_680,(void*)0,&l_680,(void*)0,&l_680,(void*)0,&l_680},{&g_40,&g_40,(void*)0,&l_680,&l_680,&l_680,&l_680},{&l_911,&l_680,&g_40,&g_40,&g_40,&l_911,(void*)0},{&g_40,&l_680,(void*)0,&l_911,&l_911,&l_911,&g_40},{&l_680,&g_40,(void*)0,&l_680,&l_680,(void*)0,&l_680},{&l_680,(void*)0,&l_911,&l_680,&l_911,&l_911,(void*)0},{&l_680,(void*)0,&l_680,&l_680,&g_40,&l_680,&l_680}},{{&l_680,&l_680,&l_680,&l_680,&l_680,&l_680,&g_40},{&l_680,&l_911,&l_911,(void*)0,&l_911,(void*)0,&g_40},{(void*)0,&l_680,(void*)0,&l_911,&g_40,&l_911,(void*)0},{&l_680,&l_680,(void*)0,&l_680,&g_40,(void*)0,&l_680},{&l_911,&l_680,&g_40,(void*)0,(void*)0,(void*)0,&l_911},{&l_680,&l_911,(void*)0,&l_680,&g_40,&g_40,(void*)0},{&l_911,&l_680,&l_680,&l_911,&g_40,(void*)0,&l_680}},{{&l_911,&l_680,(void*)0,&l_911,&l_911,&l_680,(void*)0},{&l_911,&l_680,&l_680,&l_911,&l_680,&g_40,&l_911},{&l_680,&l_911,&l_911,&l_680,&g_40,(void*)0,&l_911},{&l_911,&l_911,(void*)0,&l_680,&l_911,&g_40,(void*)0},{(void*)0,&l_680,&l_680,&g_40,&l_680,&l_680,&l_680},{&g_40,&l_911,&l_680,&l_680,&l_911,&g_40,(void*)0},{&l_911,(void*)0,&l_680,&l_911,&l_680,(void*)0,&l_680}},{{&l_911,&g_40,&l_680,&l_911,(void*)0,(void*)0,(void*)0},{(void*)0,&l_911,&l_680,&l_680,(void*)0,&l_680,&l_680},{(void*)0,&l_680,&l_911,&g_40,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_911,(void*)0,(void*)0,&l_680,&l_680},{&l_911,&l_911,&g_40,&g_40,&l_680,&l_680,&l_680},{&l_911,&l_911,(void*)0,&g_40,&l_911,(void*)0,&g_40},{&l_911,&l_680,&l_911,(void*)0,&g_40,&l_911,&l_680}}};
                    int i, j, k;
                    l_915 = (void*)0;
                }
            }
            for (l_731 = 1; (l_731 >= 0); l_731 -= 1)
            { 
                union U2 **l_918[5];
                uint8_t **l_930 = &g_164;
                int32_t l_932 = 1L;
                int16_t *l_933 = &g_91;
                int i;
                for (i = 0; i < 5; i++)
                    l_918[i] = &l_917;
                (*g_421) ^= (+(((((l_917 = l_917) != (((((safe_div_func_int64_t_s_s(((*g_511) = (safe_mul_func_int16_t_s_s((4294967295UL <= p_53), (safe_div_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(l_929[0], (((((*l_933) = ((((((p_53 <= (((l_930 == (void*)0) , l_931) == (**g_510))) & (*g_511)) > p_53) , p_53) | l_932) , p_53)) ^ (*g_278)) > 0xF584L) ^ (-1L)))) && 0UL), g_5)), (-2L)))))), l_932)) > 65535UL) && l_934) != p_53) , l_935)) , p_53) <= l_932) || 6UL));
                for (g_602.f2 = 1; (g_602.f2 >= 0); g_602.f2 -= 1)
                { 
                    int32_t *l_936 = (void*)0;
                    int32_t **l_937[6] = {&l_911,&l_911,&l_911,&l_911,&l_911,&l_911};
                    int i;
                    l_680 = l_936;
                }
                for (l_906.f1 = 0; (l_906.f1 <= 0); l_906.f1 += 1)
                { 
                    int32_t *l_938[7] = {&l_566[3][0],&l_566[3][0],&l_566[3][0],&l_566[3][0],&l_566[3][0],&l_566[3][0],&l_566[3][0]};
                    int i;
                    l_938[3] = l_938[3];
                }
            }
        }
    }
    return p_53;
}



static uint64_t  func_55(int32_t ** p_56, uint64_t  p_57)
{ 
    uint64_t l_67 = 18446744073709551609UL;
    union U2 l_70 = {-4L};
    int32_t l_73 = 0L;
    int32_t l_96 = 0x91824DA4L;
    int32_t l_109 = 0x73D51CD1L;
    int32_t l_110 = 9L;
    int32_t l_111 = (-1L);
    int32_t l_112 = 0x0DCE90FCL;
    int32_t l_113 = 9L;
    int32_t l_114 = 0x0E593522L;
    int32_t l_115 = 0xCFC7CCE1L;
    int32_t l_116 = 0L;
    uint64_t l_117[6];
    const int16_t *l_124 = (void*)0;
    int32_t **l_125 = &g_40;
    int32_t ** const l_128 = &g_40;
    uint8_t l_129 = 0x68L;
    int32_t l_131 = (-1L);
    int32_t l_132 = (-7L);
    int32_t l_133 = 0xA53124D0L;
    int32_t l_134 = 0L;
    int32_t l_135 = 1L;
    int32_t l_136[1][4][6] = {{{0x0713B03AL,(-1L),0x0713B03AL,(-4L),(-4L),0x0713B03AL},{0x0F7CF346L,0x0F7CF346L,(-4L),6L,(-4L),0x0F7CF346L},{(-4L),(-1L),6L,6L,(-1L),(-4L)},{0x0F7CF346L,(-4L),6L,(-4L),0x0F7CF346L,0x0F7CF346L}}};
    uint32_t l_141[3];
    int64_t l_161 = 0x2D96BE51E0490286LL;
    int8_t l_176 = 0x34L;
    struct S0 l_190[1] = {{0xE1C27CB4L,0L,0xDCABL,0x8AL,0x2F9D535500DB5DDCLL,-1L,2L}};
    int8_t l_245 = 0xA7L;
    union U2 * const l_263 = &l_70;
    struct S1 *l_302 = &g_186;
    int8_t l_314 = 0xD7L;
    int8_t l_319 = 0xD4L;
    uint8_t l_320[2][2][5] = {{{0x1CL,1UL,0x1CL,0xA6L,0xA6L},{0x1CL,1UL,0x1CL,0xA6L,0xA6L}},{{0x1CL,1UL,0x1CL,0xA6L,0xA6L},{0x1CL,1UL,0x1CL,0xA6L,0xA6L}}};
    uint64_t * const l_329 = (void*)0;
    uint16_t **l_411 = &g_278;
    int64_t l_470 = 0L;
    int32_t *l_521 = &l_190[0].f1;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_117[i] = 0x0E2D0DC50425FF93LL;
    for (i = 0; i < 3; i++)
        l_141[i] = 1UL;
    for (g_5 = 0; (g_5 <= (-5)); g_5 = safe_sub_func_int32_t_s_s(g_5, 6))
    { 
        int32_t *l_64 = &g_5;
        uint16_t *l_71[6];
        int8_t *l_74 = &g_75[0][5];
        uint64_t *l_76 = &l_67;
        int32_t *l_77 = &g_78;
        int16_t *l_89 = &l_70.f2;
        int16_t *l_90[4][3][4] = {{{&l_70.f2,(void*)0,(void*)0,&l_70.f2},{(void*)0,&l_70.f2,(void*)0,(void*)0},{&l_70.f2,&l_70.f2,&g_91,&l_70.f2}},{{&l_70.f2,(void*)0,(void*)0,&l_70.f2},{(void*)0,&l_70.f2,(void*)0,(void*)0},{&l_70.f2,&l_70.f2,&g_91,&l_70.f2}},{{&l_70.f2,(void*)0,(void*)0,&l_70.f2},{(void*)0,&l_70.f2,(void*)0,(void*)0},{&l_70.f2,&l_70.f2,&g_91,&l_70.f2}},{{&l_70.f2,(void*)0,(void*)0,&l_70.f2},{(void*)0,&l_70.f2,(void*)0,(void*)0},{&l_70.f2,&l_70.f2,&g_91,&l_70.f2}}};
        int64_t *l_94 = &g_95;
        int32_t *l_97 = (void*)0;
        int32_t *l_98 = &g_78;
        int32_t *l_99 = &l_96;
        int32_t *l_100 = &g_78;
        int32_t *l_101 = &l_73;
        int32_t *l_102 = &l_73;
        int32_t *l_103 = (void*)0;
        int32_t *l_104 = &l_96;
        int32_t *l_105 = &l_73;
        int32_t *l_106 = &g_78;
        int32_t l_107 = 1L;
        int32_t *l_108[2][3] = {{&g_78,&g_78,&g_78},{&g_10,&g_10,&g_10}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_71[i] = &g_72[4];
        if ((**p_56))
            break;
        (*l_77) |= (safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(((l_64 == (*p_56)) | ((*l_76) = (safe_mod_func_int8_t_s_s(((*l_74) = ((p_57 ^ ((p_57 > (g_10 >= l_67)) < (safe_mod_func_uint64_t_u_u((((l_73 = ((l_70 , g_2[0]) , g_2[4])) || g_10) < 4294967294UL), g_72[4])))) | p_57)), (*l_64))))), 18446744073709551615UL)), (*l_64)));
        (*l_77) = (safe_div_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(p_57, (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((0x8D5C8807L | g_78), ((*l_64) <= ((*l_64) == (safe_rshift_func_int16_t_s_s((l_73 ^= p_57), (l_96 = (((*l_94) = ((safe_sub_func_int8_t_s_s(g_75[0][5], l_67)) < 0xB4L)) <= l_70.f0)))))))), p_57)))) | p_57), p_57));
        l_117[4]--;
    }
    if ((safe_add_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u(l_116, (l_124 != (void*)0))) ^ (p_57 ^ (((void*)0 != l_125) != ((((safe_lshift_func_uint16_t_u_u(0UL, p_57)) , l_128) != l_125) || (**l_128))))) , 4294967295UL) == l_129), g_10)))
    { 
        int32_t *l_130[5] = {&g_78,&g_78,&g_78,&g_78,&g_78};
        int16_t l_137 = 1L;
        uint32_t l_138 = 0x4E103B03L;
        uint8_t *l_163 = &l_129;
        union U2 l_170 = {-1L};
        uint8_t l_172 = 255UL;
        uint8_t l_175 = 9UL;
        int i;
        ++l_138;
        l_141[2]++;
        if ((safe_sub_func_int8_t_s_s(((**l_128) & (((g_5 > (g_2[1] , (safe_mod_func_int8_t_s_s(0L, ((0x15A9L == g_2[1]) , (((safe_div_func_uint32_t_u_u((p_57 < (**l_128)), g_95)) & 0L) ^ g_5)))))) , (**l_128)) || p_57)), 250UL)))
        { 
            uint8_t *l_158 = &l_129;
            int32_t l_162 = 1L;
            l_162 = ((((safe_mul_func_int8_t_s_s(p_57, ((*l_158) = (safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0xAB12DF45L, 0x5FD2DC11L)), (-1L)))))) < p_57) || ((safe_sub_func_uint16_t_u_u(p_57, ((**l_128) , 0UL))) > l_161)) , (**p_56));
            l_132 = (**p_56);
            return p_57;
        }
        else
        { 
            int8_t l_171 = 6L;
            uint64_t *l_173[3];
            int i;
            for (i = 0; i < 3; i++)
                l_173[i] = &l_67;
            l_176 = (l_175 = (((l_163 != g_164) ^ (g_174[3][1] = (safe_sub_func_int64_t_s_s(((safe_div_func_int32_t_s_s((((g_75[1][1] = p_57) != (p_57 , (((-4L) || (l_170 , (((l_171 != g_2[1]) >= l_172) ^ g_91))) ^ g_91))) < 0xB2L), 0x33664A16L)) | l_171), g_2[5])))) ^ p_57));
            return l_171;
        }
    }
    else
    { 
        uint32_t l_195 = 0xFD3730B5L;
        int32_t l_204 = 0x5F8E820DL;
        int32_t l_215 = 7L;
        int8_t l_276 = 0x1CL;
        uint16_t ***l_279 = &g_277;
        int16_t *l_280 = (void*)0;
        struct S1 *l_303 = &g_186;
        int32_t l_315 = 1L;
        int32_t l_317 = 0x675DDC7EL;
        int32_t l_318 = 7L;
        uint32_t l_359[1];
        struct S0 l_367[7][4] = {{{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L},{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L},{0xCB8C2E7DL,0L,-3L,255UL,0x106AA308A3910C8CLL,0x545C969D0910C1CELL,0x65AAL},{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L}},{{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L},{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L},{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L},{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L}},{{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L},{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L},{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L},{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L}},{{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L},{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L},{0xCB8C2E7DL,0L,-3L,255UL,0x106AA308A3910C8CLL,0x545C969D0910C1CELL,0x65AAL},{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L}},{{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L},{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L},{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L},{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L}},{{0xCB8C2E7DL,0L,-3L,255UL,0x106AA308A3910C8CLL,0x545C969D0910C1CELL,0x65AAL},{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L},{0xCB8C2E7DL,0L,-3L,255UL,0x106AA308A3910C8CLL,0x545C969D0910C1CELL,0x65AAL},{0xCB8C2E7DL,0L,-3L,255UL,0x106AA308A3910C8CLL,0x545C969D0910C1CELL,0x65AAL}},{{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L},{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L},{0x760DDEF9L,2L,0xC71CL,0x89L,0L,1L,-1L},{4294967295UL,0L,0xA02EL,255UL,1L,1L,0x6026L}}};
        uint64_t l_383[2];
        int64_t *l_517 = &g_95;
        int i, j;
        for (i = 0; i < 1; i++)
            l_359[i] = 4294967290UL;
        for (i = 0; i < 2; i++)
            l_383[i] = 0UL;
        if (((void*)0 != &l_70))
        { 
            uint64_t l_179 = 1UL;
            struct S1 l_187 = {18446744073709551615UL,65526UL,65535UL,7UL};
            int32_t *l_207 = &l_112;
lbl_206:
            for (g_95 = 29; (g_95 <= (-24)); --g_95)
            { 
                l_179 = 1L;
                return p_57;
            }
            for (l_161 = 0; (l_161 >= 29); l_161 = safe_add_func_uint64_t_u_u(l_161, 9))
            { 
                uint16_t *l_202 = &g_174[3][1];
                for (l_110 = 19; (l_110 >= 23); l_110 = safe_add_func_uint8_t_u_u(l_110, 7))
                { 
                    int32_t *l_184 = &l_131;
                    int32_t **l_185 = &l_184;
                    uint32_t *l_197 = &l_141[2];
                    int64_t *l_203[4];
                    struct S1 *l_205 = &g_186;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_203[i] = &g_95;
                    l_184 = (*p_56);
                    (*l_185) = (void*)0;
                    l_187 = g_186;
                    (*l_205) = ((p_57 , (l_70 , (safe_sub_func_uint64_t_u_u((&g_165 == &g_165), (l_190[0] , (l_204 = (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_195 >= (+((--(*l_197)) , ((safe_add_func_int32_t_s_s((((((l_202 == &g_174[3][1]) < (*g_164)) , 2L) != g_75[1][0]) >= g_75[0][5]), (**p_56))) , 0UL)))), 12)), g_186.f2)))))))) , g_186);
                    if (l_195)
                        goto lbl_206;
                }
            }
            (*l_207) = (**l_128);
        }
        else
        { 
            uint16_t l_227 = 0x7CD0L;
            uint8_t * const * const l_270 = &g_164;
            uint8_t * const **l_271 = (void*)0;
            uint8_t * const *l_273 = (void*)0;
            uint8_t * const **l_272[5][4][3] = {{{(void*)0,(void*)0,(void*)0},{&l_273,&l_273,&l_273},{(void*)0,(void*)0,(void*)0},{&l_273,&l_273,&l_273}},{{(void*)0,(void*)0,(void*)0},{&l_273,&l_273,&l_273},{(void*)0,(void*)0,(void*)0},{&l_273,&l_273,&l_273}},{{(void*)0,(void*)0,(void*)0},{&l_273,&l_273,&l_273},{(void*)0,(void*)0,(void*)0},{&l_273,&l_273,&l_273}},{{(void*)0,(void*)0,(void*)0},{&l_273,&l_273,&l_273},{(void*)0,(void*)0,(void*)0},{&l_273,&l_273,&l_273}},{{(void*)0,(void*)0,(void*)0},{&l_273,&l_273,&l_273},{(void*)0,(void*)0,(void*)0},{&l_273,&l_273,&l_273}}};
            uint8_t * const **l_274 = (void*)0;
            uint8_t * const **l_275 = &l_273;
            int i, j, k;
            for (l_116 = 5; (l_116 < (-7)); --l_116)
            { 
                uint64_t l_216 = 0x65C340BFBFA90F90LL;
                int32_t **l_219 = (void*)0;
                int32_t **l_220 = (void*)0;
                int32_t *l_222 = &l_109;
                int32_t **l_221 = &l_222;
                int32_t l_226[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_226[i] = 0x7CFAC040L;
                for (l_135 = 0; (l_135 > 12); l_135++)
                { 
                    int32_t *l_212 = &l_190[0].f1;
                    int32_t **l_213 = &l_212;
                    int32_t *l_214[3][3] = {{(void*)0,&g_2[1],&g_2[1]},{(void*)0,&g_2[1],&g_2[1]},{(void*)0,&g_2[1],&g_2[1]}};
                    int i, j;
                    l_212 = (*p_56);
                    (*l_213) = (*p_56);
                    ++l_216;
                }
                (*l_221) = &l_215;
                for (l_132 = 0; (l_132 <= 2); l_132 = safe_add_func_int8_t_s_s(l_132, 3))
                { 
                    int32_t *l_225[6] = {&g_2[1],&l_114,&l_114,&g_2[1],&l_114,&l_114};
                    int8_t *l_236[1];
                    int64_t *l_238 = &g_95;
                    uint16_t *l_246 = &g_174[5][0];
                    uint32_t *l_254[5][5] = {{&l_141[2],&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_141[2],&l_141[2],&l_195},{&l_141[2],&l_195,&l_195,&l_195,&l_195},{&l_195,&l_195,&l_141[2],&l_141[2],&l_195},{&l_141[2],&l_195,&l_195,&l_195,&l_195}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_236[i] = (void*)0;
                    l_227++;
                    (*l_222) ^= ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(g_2[1], ((safe_mul_func_uint16_t_u_u(((*l_246) ^= (p_57 | ((g_186.f3 && (g_75[2][5] = g_2[1])) , (((*l_238) = (g_237 == g_237)) || (l_245 |= (((safe_rshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((l_190[0] , (*g_164)), p_57)) < 0xE9L), (*g_40))), l_204)) && g_72[0]) ^ 2UL)))))), 0xE19FL)) , g_72[4]))), 0x05L)) != 1UL);
                    l_115 &= (((g_247 , (safe_mod_func_int16_t_s_s(p_57, (safe_sub_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((g_186.f3 && (g_186.f3--)) , (safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(((l_263 != (void*)0) , (*l_222)), ((((safe_sub_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((g_186.f3 = ((**p_56) ^ p_57)) & g_2[0]), 2UL)), p_57)) <= p_57), 0x149B1DF9L)) , g_72[4]) < (**p_56)) , (-10L)))) == 0xD5306C592088E90CLL), 15)), 7UL))), l_227)) < l_227), (-1L)))))) , 4294967294UL) < 1L);
                }
            }
            (*l_275) = l_270;
            l_276 = (**p_56);
        }
lbl_386:
        (*l_279) = g_277;
        if ((**l_128))
        { 
            int16_t l_285 = 2L;
            int32_t l_313 = (-7L);
            int32_t l_316[4][1] = {{(-1L)},{0xEE0A41E7L},{(-1L)},{0xEE0A41E7L}};
            int32_t *l_371 = (void*)0;
            int32_t *l_372 = &l_190[0].f1;
            int32_t *l_373 = &l_313;
            int32_t *l_374 = &l_96;
            int32_t *l_375 = &g_5;
            int32_t *l_376 = (void*)0;
            int32_t *l_377 = &l_132;
            int32_t *l_378 = &l_190[0].f1;
            int32_t *l_379 = &l_317;
            int32_t *l_380 = &l_116;
            int32_t *l_381 = &l_114;
            int32_t *l_382 = &l_132;
            union U2 l_391 = {0x93L};
            int8_t *l_408 = (void*)0;
            int8_t *l_409[2][7][5] = {{{&l_314,&l_319,&g_75[1][4],&l_319,&l_314},{&g_75[1][0],&l_314,&l_245,&g_75[1][0],&l_276},{&l_314,(void*)0,&l_314,&l_319,&l_314},{&l_276,&l_276,(void*)0,&l_314,&l_276},{&l_176,&l_319,&l_176,(void*)0,&l_314},{&l_276,&l_245,&l_245,&l_276,&g_75[1][0]},{&l_314,&l_319,&l_314,&l_319,&l_314}},{{&g_75[1][0],&l_276,&l_245,&l_245,&l_276},{&l_314,(void*)0,&l_176,&l_319,&l_176},{&l_276,&l_314,(void*)0,&l_276,&l_276},{&l_314,&l_319,&l_314,(void*)0,&l_314},{&l_276,&g_75[1][0],&l_245,&l_314,&g_75[1][0]},{&l_314,&l_319,&g_75[1][4],&l_319,&l_314},{&g_75[1][0],&l_314,&l_245,&g_75[1][0],&l_276}}};
            uint64_t *l_410 = &l_117[4];
            uint64_t *l_412 = &l_383[0];
            uint16_t *l_456[1][1];
            uint8_t **l_462 = &g_164;
            uint16_t ***l_483 = &l_411;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_456[i][j] = &g_186.f1;
            }
            if ((((((void*)0 != l_280) > ((((safe_mod_func_uint8_t_u_u((((*g_278) = (*g_278)) >= 0x5825L), ((*g_164) ^= p_57))) < (((safe_sub_func_int64_t_s_s(l_285, (safe_unary_minus_func_uint16_t_u(p_57)))) , 0UL) , 0x555EL)) == (*g_40)) && (**p_56))) , &l_117[3]) != &l_117[4]))
            { 
                int8_t l_301 = 1L;
                for (l_111 = 26; (l_111 != (-7)); l_111 = safe_sub_func_int8_t_s_s(l_111, 1))
                { 
                    int32_t *l_289 = &l_109;
                    int64_t *l_300 = &l_190[0].f4;
                    int16_t l_304 = 0L;
                    uint32_t *l_306 = &l_141[2];
                    int32_t *l_307[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_307[i] = (void*)0;
                    l_135 = (((*l_306) = (((*l_289) = (**l_128)) || (safe_add_func_int64_t_s_s((((g_305 = (safe_mul_func_int16_t_s_s((*l_289), (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((((((((safe_mod_func_uint16_t_u_u(((p_57 && (-6L)) , ((void*)0 == &g_247)), (((((((((*l_300) &= p_57) <= 0x9B8B7CAE24931814LL) | l_204) >= (**p_56)) >= l_301) , 0x3AE16EAFACCB905CLL) , p_57) | l_301))) , l_302) != l_303) <= l_304) < 0xBE566E3EBE734CB3LL) | g_247.f0) , l_301), g_72[4])) ^ 0L), 255UL))))) , 0xB9L) >= 0x8CL), g_247.f0)))) != (**p_56));
                }
            }
            else
            { 
                int32_t *l_308 = (void*)0;
                int32_t *l_309 = &l_132;
                int32_t *l_310 = (void*)0;
                int32_t *l_311 = &l_215;
                int32_t *l_312[7];
                int32_t **l_323 = &l_311;
                int32_t **l_324 = (void*)0;
                int32_t **l_325 = &l_309;
                uint64_t **l_328 = &g_237;
                uint16_t *l_338 = &g_72[4];
                uint64_t *l_349[6][6] = {{&g_186.f0,&l_67,&l_117[1],(void*)0,&l_117[0],&l_117[0]},{&g_186.f0,&g_186.f0,&g_186.f0,&l_117[0],&l_117[0],&g_186.f0},{&l_117[4],&l_67,&l_67,&g_186.f0,(void*)0,(void*)0},{&l_67,&g_186.f0,&l_117[1],&g_186.f0,(void*)0,&g_186.f0},{&l_67,&l_67,&l_67,(void*)0,&l_117[0],&g_186.f0},{&g_186.f0,&g_186.f0,&g_186.f0,(void*)0,&l_117[4],&l_117[0]}};
                int32_t *l_353 = (void*)0;
                uint16_t l_369 = 65535UL;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_312[i] = &l_131;
lbl_354:
                ++l_320[1][0][2];
                (*l_309) &= (**p_56);
                (*l_325) = ((*l_323) = (g_5 , &l_313));
                if (((safe_div_func_uint8_t_u_u(((p_57 | (((((*l_328) = &p_57) == l_329) , (safe_mul_func_uint8_t_u_u(((((**g_277)++) <= (safe_lshift_func_int16_t_s_u((((safe_add_func_int16_t_s_s((**l_125), (--(*l_338)))) & (safe_lshift_func_int8_t_s_u(((++(*g_164)) < (safe_sub_func_int8_t_s_s((((((safe_mul_func_int8_t_s_s(g_10, (((g_186.f0++) != (p_57 > g_186.f2)) >= l_313))) >= g_95) && (**p_56)) , 9L) >= p_57), l_285))), g_95))) > l_317), p_57))) < 6UL), p_57))) == 0L)) < p_57), p_57)) | p_57))
                { 
                    int16_t l_352 = 1L;
                    (*l_325) = (*p_56);
                    (**l_323) = l_352;
                    l_315 = (p_57 , l_317);
                    (*l_325) = l_353;
                }
                else
                { 
                    int32_t l_358 = 0x5B5812A0L;
                    int32_t l_362 = 0x9F8A84BFL;
                    int64_t *l_368 = &g_95;
                    int32_t l_370 = (-6L);
                    (*l_323) = (*l_128);
                    if (l_245)
                        goto lbl_354;
                    l_316[1][0] &= 0x138E5EC0L;
                    l_370 |= (g_186.f3 , ((+((*l_368) ^= (((safe_rshift_func_uint16_t_u_s((((l_358 |= g_165) ^ l_359[0]) & p_57), (safe_div_func_int16_t_s_s((((l_362 &= 1L) || ((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((l_367[4][1] , &l_316[1][0]) != (void*)0), g_186.f2)), 0x83BFL)) | p_57)) , g_174[1][3]), g_174[2][4])))) , g_174[2][4]) >= 0x97BFL))) != l_369));
                }
            }
            l_383[0]++;
            if (l_70.f0)
                goto lbl_386;
            if (((safe_add_func_int32_t_s_s(((((safe_mod_func_uint64_t_u_u(((*l_412) &= ((l_391 , (safe_div_func_uint8_t_u_u(0x90L, (((safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(9L, ((safe_mul_func_int16_t_s_s((g_72[3] ^ (((((((safe_rshift_func_uint16_t_u_s(((*g_164) | (((*l_410) |= ((safe_mul_func_int8_t_s_s((g_75[1][4] = ((+p_57) , ((safe_unary_minus_func_int32_t_s((&l_319 == (void*)0))) & (**p_56)))), p_57)) | (*l_379))) != (**l_128))), p_57)) & p_57) <= (*g_164)) , (*g_40)) , p_57) , (void*)0) != l_411)), (*l_382))) | p_57))) , (-1L)), p_57)) && 255UL) , (*g_164))))) == p_57)), p_57)) == 0x099C7239L) , &l_411) == (void*)0), 0x87EE1269L)) , 0x02507343L))
            { 
                uint64_t l_457[2][4][3] = {{{18446744073709551606UL,0xB9C9078721B7ECB7LL,0x5750D68474F3D4FCLL},{1UL,0xB9C9078721B7ECB7LL,18446744073709551615UL},{0x2D7968D05565867ELL,0xB9C9078721B7ECB7LL,0xB9C9078721B7ECB7LL},{18446744073709551606UL,0xB9C9078721B7ECB7LL,0x5750D68474F3D4FCLL}},{{1UL,0xB9C9078721B7ECB7LL,18446744073709551615UL},{0x2D7968D05565867ELL,0xB9C9078721B7ECB7LL,0xB9C9078721B7ECB7LL},{18446744073709551606UL,0xB9C9078721B7ECB7LL,0x5750D68474F3D4FCLL},{1UL,0xB9C9078721B7ECB7LL,18446744073709551615UL}}};
                int i, j, k;
                if ((safe_add_func_uint32_t_u_u((!(((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((g_420 = (void*)0) != (void*)0), ((safe_lshift_func_int16_t_s_u((*l_381), (safe_mul_func_int8_t_s_s(((void*)0 != l_374), p_57)))) != ((safe_mul_func_uint8_t_u_u((*g_164), (*l_382))) && (**l_128))))), (*g_278))) | 18446744073709551614UL) != l_359[0])), (*l_374))))
                { 
                    uint32_t l_434 = 1UL;
                    (*l_382) &= 3L;
                    if (l_391.f0)
                        goto lbl_435;
lbl_435:
                    (*l_381) &= (((((*g_40) ^ (safe_mod_func_int8_t_s_s((g_186.f1 <= (((*l_382) = 8L) != 0x176B996CL)), (safe_unary_minus_func_int16_t_s((-1L)))))) < (safe_lshift_func_int16_t_s_s((((g_75[1][5] = (-6L)) | ((*l_373) >= 4L)) || g_78), p_57))) == l_434) ^ 4294967295UL);
                    return p_57;
                }
                else
                { 
                    int32_t l_436 = 0x59B34656L;
                    l_436 &= 0x711D7478L;
                }
                (*l_382) = (((*l_378) | (((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((&l_285 == (l_367[4][3] , (void*)0)), ((*g_164) = (safe_add_func_int64_t_s_s(g_2[4], (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((g_75[1][1] = ((((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((~((p_57 = (safe_lshift_func_int8_t_s_s((l_318 = (l_315 &= (l_456[0][0] == (*g_277)))), 5))) , 0x22L)), 1)) <= (**l_128)), l_457[0][2][0])), 0x3AA8L)) , p_57) <= 1UL) , g_91)), l_367[4][1].f4)), 7L))))))), 1UL)) , (void*)0) == (void*)0)) < g_78);
            }
            else
            { 
                int32_t l_469[1][7][1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_469[i][j][k] = 0xE779FA27L;
                    }
                }
                for (g_5 = 23; (g_5 <= 25); g_5 = safe_add_func_int64_t_s_s(g_5, 8))
                { 
                    int32_t **l_471 = &l_374;
                    int32_t **l_472 = (void*)0;
                    int32_t **l_473 = &l_381;
                    int16_t *l_474 = &l_367[4][1].f2;
                    l_470 &= (safe_sub_func_int8_t_s_s((0xAB17L | (((((void*)0 == l_462) | 0xF4EE46EDL) <= ((safe_lshift_func_uint8_t_u_u((**l_128), 5)) || (safe_div_func_uint64_t_u_u(18446744073709551615UL, ((safe_sub_func_int64_t_s_s(1L, 0x067DE6980EA35E69LL)) ^ l_469[0][2][0]))))) , p_57)), 255UL));
                    (*l_471) = &l_317;
                    (*l_473) = (*g_420);
                    (*l_471) = ((**l_128) , &l_204);
                    (*l_382) &= (((**p_56) || (65531UL == ((l_474 == l_474) >= (((safe_sub_func_int64_t_s_s(0x810907D4F655CD40LL, (+((((safe_div_func_int32_t_s_s((~(((safe_lshift_func_int16_t_s_u((g_91 = ((*p_56) != (*g_420))), 8)) > p_57) < g_72[4])), g_2[5])) , &g_277) == l_483) , 1L)))) , (void*)0) != (void*)0)))) <= g_186.f0);
                }
                return p_57;
            }
        }
        else
        { 
            uint64_t l_493 = 0xB243176C6C08CD32LL;
            struct S1 l_513 = {0x539DC152115C9872LL,0xAC13L,0x8352L,0xED14633AL};
            int64_t *l_516 = &l_161;
            int16_t *l_518 = &l_70.f2;
            int16_t *l_519 = &l_70.f2;
            int16_t *l_520 = &g_91;
            (**g_420) = 0x293C4C16L;
            for (g_5 = 0; (g_5 > 1); ++g_5)
            { 
                int32_t *l_486 = &l_190[0].f1;
                int32_t *l_487 = &l_190[0].f1;
                int32_t *l_488 = &l_73;
                int32_t *l_489 = &l_215;
                int32_t *l_490 = &l_136[0][0][0];
                int32_t *l_491 = &l_96;
                int32_t *l_492[7][5];
                int64_t ***l_512 = &g_510;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_492[i][j] = &l_131;
                }
                l_493--;
                for (l_317 = 0; (l_317 <= 24); l_317 = safe_add_func_uint8_t_u_u(l_317, 3))
                { 
                    uint8_t *l_500 = &l_320[0][0][2];
                    uint8_t **l_501 = &l_500;
                    int32_t l_506 = 9L;
                    int8_t *l_509 = &l_319;
                    (**g_420) = (safe_lshift_func_int16_t_s_s(((((*l_501) = l_500) == &g_165) , (((safe_add_func_uint16_t_u_u(l_315, (safe_mul_func_uint16_t_u_u(0xB2FEL, l_506)))) || ((*l_509) = ((safe_mul_func_int8_t_s_s((0x5C68B403L & (**l_125)), (**l_125))) == 0x3FD6L))) <= 5L)), p_57));
                    if ((**l_128))
                        continue;
                }
                (*l_512) = g_510;
            }
            (**g_420) = (l_513 , (((*l_519) = (safe_rshift_func_uint8_t_u_s(255UL, ((*g_421) ^ (((*l_520) ^= (((((l_516 != (g_247 , l_517)) | p_57) > 4L) < 1L) && 0x00851962AFFA064BLL)) ^ 0x626DL))))) && p_57));
            (*g_421) ^= (**p_56);
        }
    }
    l_521 = (*l_125);
    (*g_421) ^= ((safe_mul_func_int16_t_s_s((0L > ((void*)0 != &l_319)), (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((~(*g_278)), ((void*)0 == (*l_125)))), (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(0x1BAEL, 0x40CCL)), 3)))), 9L)), p_57)), p_57)))) != 0UL);
    return (*l_521);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_75[i][j], "g_75[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_174[i][j], "g_174[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_186.f0, "g_186.f0", print_hash_value);
    transparent_crc(g_186.f1, "g_186.f1", print_hash_value);
    transparent_crc(g_186.f2, "g_186.f2", print_hash_value);
    transparent_crc(g_186.f3, "g_186.f3", print_hash_value);
    transparent_crc(g_247.f0, "g_247.f0", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_602.f0, "g_602.f0", print_hash_value);
    transparent_crc(g_602.f2, "g_602.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_697[i][j], "g_697[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_781[i], "g_781[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_858[i][j].f0, "g_858[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1010[i][j], "g_1010[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1094.f0, "g_1094.f0", print_hash_value);
    transparent_crc(g_1094.f1, "g_1094.f1", print_hash_value);
    transparent_crc(g_1094.f2, "g_1094.f2", print_hash_value);
    transparent_crc(g_1094.f3, "g_1094.f3", print_hash_value);
    transparent_crc(g_1095.f0, "g_1095.f0", print_hash_value);
    transparent_crc(g_1095.f1, "g_1095.f1", print_hash_value);
    transparent_crc(g_1095.f2, "g_1095.f2", print_hash_value);
    transparent_crc(g_1095.f3, "g_1095.f3", print_hash_value);
    transparent_crc(g_1141, "g_1141", print_hash_value);
    transparent_crc(g_1150, "g_1150", print_hash_value);
    transparent_crc(g_1235.f0, "g_1235.f0", print_hash_value);
    transparent_crc(g_1273, "g_1273", print_hash_value);
    transparent_crc(g_1335.f0, "g_1335.f0", print_hash_value);
    transparent_crc(g_1335.f1, "g_1335.f1", print_hash_value);
    transparent_crc(g_1335.f2, "g_1335.f2", print_hash_value);
    transparent_crc(g_1335.f3, "g_1335.f3", print_hash_value);
    transparent_crc(g_1335.f4, "g_1335.f4", print_hash_value);
    transparent_crc(g_1335.f5, "g_1335.f5", print_hash_value);
    transparent_crc(g_1335.f6, "g_1335.f6", print_hash_value);
    transparent_crc(g_1429, "g_1429", print_hash_value);
    transparent_crc(g_1605, "g_1605", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1736[i], "g_1736[i]", print_hash_value);

    }
    transparent_crc(g_1823, "g_1823", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1824[i][j], "g_1824[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1931[i][j][k], "g_1931[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1987, "g_1987", print_hash_value);
    transparent_crc(g_1994.f0, "g_1994.f0", print_hash_value);
    transparent_crc(g_1994.f1, "g_1994.f1", print_hash_value);
    transparent_crc(g_1994.f2, "g_1994.f2", print_hash_value);
    transparent_crc(g_1994.f3, "g_1994.f3", print_hash_value);
    transparent_crc(g_1994.f4, "g_1994.f4", print_hash_value);
    transparent_crc(g_1994.f5, "g_1994.f5", print_hash_value);
    transparent_crc(g_1994.f6, "g_1994.f6", print_hash_value);
    transparent_crc(g_2022, "g_2022", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
