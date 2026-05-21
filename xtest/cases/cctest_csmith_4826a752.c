// SPDX-License-Identifier: MIT
// cctest_csmith_4826a752.c --- cctest case csmith_4826a752 (csmith seed 1210492754)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf50f231c */

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

// Options:   -s 1210492754 -o /tmp/csmith_gen_yz5u_2so/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
   int64_t  f1;
   int64_t  f2;
   uint16_t  f3;
   uint16_t  f4;
   uint64_t  f5;
};

union U2 {
   int8_t  f0;
   int32_t  f1;
   struct S0  f2;
   int16_t  f3;
};


static int8_t g_7[1][3] = {{(-3L),(-3L),(-3L)}};
static int8_t g_34[3] = {0x65L,0x65L,0x65L};
static uint32_t g_35 = 0x7280DDA2L;
static uint64_t g_38[1] = {6UL};
static uint8_t g_40 = 255UL;
static int16_t g_61 = 0xD13BL;
static int32_t g_63 = (-1L);
static int16_t g_64 = 1L;
static uint8_t g_65 = 0xE8L;
static struct S0 g_70 = {-8L,0x9A0C815F77FB90EFLL,0xF249A233967BE2D7LL,1UL,65535UL,1UL};
static int8_t g_128 = 0xDFL;



static int32_t  func_1(void);
static int64_t  func_4(int32_t  p_5, int64_t  p_6);
static int16_t  func_16(int8_t  p_17, int32_t  p_18, int8_t  p_19);
static uint64_t  func_20(struct S0  p_21);




static int32_t  func_1(void)
{ 
    uint32_t l_8 = 0UL;
    uint32_t l_120 = 2UL;
    int32_t l_126 = 0xF46AD5B2L;
    int32_t l_127[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int i;
    g_128 = (safe_add_func_int64_t_s_s((l_120 = func_4(g_7[0][2], l_8)), (~(l_127[4] = (safe_mul_func_uint8_t_u_u(((((safe_mod_func_uint16_t_u_u(l_126, l_8)) != l_8) < g_7[0][2]) > 0x8AL), 0x63L))))));
    return g_34[2];
}



static int64_t  func_4(int32_t  p_5, int64_t  p_6)
{ 
    int32_t l_13 = 0L;
    struct S0 l_22 = {1L,0xA445A8CCEDB7758BLL,3L,3UL,0x8CCAL,3UL};
    uint8_t l_39[5] = {0xE5L,0xE5L,0xE5L,0xE5L,0xE5L};
    int32_t l_62 = 1L;
    uint16_t l_82 = 0x641FL;
    union U2 l_102 = {0x8DL};
    int64_t l_107 = 0x212F535E818B1E2CLL;
    int i;
lbl_83:
    g_40 = ((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_13, (safe_mod_func_uint64_t_u_u((l_13 , g_7[0][2]), (g_38[0] ^= (func_16((func_20((((p_5 && 0xB2C5L) != p_5) , l_22)) <= g_7[0][2]), p_6, l_22.f1) >= l_22.f3)))))), l_39[3])) , p_5);
    for (g_35 = (-23); (g_35 == 1); ++g_35)
    { 
        uint64_t l_43 = 0x8D9A65C8BB6AF833LL;
        int32_t l_55[5];
        struct S0 l_69 = {0L,-2L,4L,0xBB25L,65527UL,8UL};
        int i;
        for (i = 0; i < 5; i++)
            l_55[i] = 1L;
        if (g_38[0])
        { 
            union U2 l_54 = {3L};
            l_43 = 0x158E9D28L;
            for (p_5 = 0; (p_5 != (-28)); p_5--)
            { 
                int8_t l_48 = (-2L);
                int32_t l_60[2];
                uint32_t l_68 = 0x68AC39FBL;
                int i;
                for (i = 0; i < 2; i++)
                    l_60[i] = 8L;
                l_55[3] = (safe_rshift_func_int16_t_s_u((l_48 <= ((safe_mod_func_uint32_t_u_u((l_22.f5 & (l_43 ^ (((safe_div_func_int16_t_s_s((!((l_54 , l_54) , 1UL)), p_6)) | p_6) & 7L))), l_54.f0)) > 65535UL)), l_43));
                l_55[0] ^= ((safe_rshift_func_uint8_t_u_u(0UL, ((safe_div_func_int8_t_s_s(((p_6 >= g_7[0][1]) | (((l_68 = ((g_65--) , (((p_5 >= p_6) && (-1L)) | l_54.f0))) == g_34[0]) && p_6)), 0x66L)) <= 0x69L))) | g_38[0]);
                return g_34[0];
            }
            g_70 = l_69;
        }
        else
        { 
            struct S0 l_71[5][3][4] = {{{{1L,0L,0L,0x5DA1L,0x3C12L,18446744073709551609UL},{5L,-7L,0x9679FF52682FBA83LL,0x1A65L,0x42D1L,0x7B57B06E2AFE5885LL},{8L,-1L,-1L,0x7A40L,0UL,18446744073709551613UL},{0x2DL,0xF4160CA180BB484BLL,1L,0x4F79L,0x7D32L,0UL}},{{0L,1L,-3L,0x0A5EL,0xA727L,0x4F983824F8FB3CF2LL},{8L,-1L,-1L,0x7A40L,0UL,18446744073709551613UL},{-1L,0x1AD2EC94644A7470LL,0L,65535UL,0xF186L,18446744073709551615UL},{5L,-7L,0x9679FF52682FBA83LL,0x1A65L,0x42D1L,0x7B57B06E2AFE5885LL}},{{0xAAL,0L,0xA34A9EDB9B1DFB68LL,65526UL,7UL,0x8848F550CB7C4065LL},{-10L,0x8F42BE7AC75E1209LL,1L,2UL,0x7C28L,0x3333429DD6F46CE8LL},{-1L,0x1AD2EC94644A7470LL,0L,65535UL,0xF186L,18446744073709551615UL},{1L,0x1AB994F54D63FF5ALL,-8L,0x2F17L,3UL,0x154EA94EDB4A25C9LL}}},{{{0L,1L,-3L,0x0A5EL,0xA727L,0x4F983824F8FB3CF2LL},{0xD2L,-1L,5L,0UL,0UL,18446744073709551612UL},{8L,-1L,-1L,0x7A40L,0UL,18446744073709551613UL},{0x58L,0xF02998B4E4A0A603LL,0x1E9F44AA845225C7LL,0x3BB7L,65533UL,0x6E873F63695F895ELL}},{{1L,0L,0L,0x5DA1L,0x3C12L,18446744073709551609UL},{1L,0x3E2D46470AD0C79ELL,0L,0xADEAL,65535UL,18446744073709551615UL},{0x2DL,0xF4160CA180BB484BLL,1L,0x4F79L,0x7D32L,0UL},{0x9FL,0x4CD17FF15597B072LL,0L,0UL,1UL,0x8EC64C767A1E7967LL}},{{0x2DL,0xF4160CA180BB484BLL,1L,0x4F79L,0x7D32L,0UL},{0x9FL,0x4CD17FF15597B072LL,0L,0UL,1UL,0x8EC64C767A1E7967LL},{0x9FL,0x4CD17FF15597B072LL,0L,0UL,1UL,0x8EC64C767A1E7967LL},{0x2DL,0xF4160CA180BB484BLL,1L,0x4F79L,0x7D32L,0UL}}},{{{6L,0x97D506DC7391AF2ELL,-1L,4UL,65533UL,0xE7D4845EB5F4D78FLL},{0L,0x53B0E2D30B1440D3LL,7L,0x0A45L,7UL,0xEAAB991CC17125C8LL},{0x58L,0xF02998B4E4A0A603LL,0x1E9F44AA845225C7LL,0x3BB7L,65533UL,0x6E873F63695F895ELL},{8L,-1L,-1L,0x7A40L,0UL,18446744073709551613UL}},{{0xAAL,0L,0xA34A9EDB9B1DFB68LL,65526UL,7UL,0x8848F550CB7C4065LL},{0L,1L,-3L,0x0A5EL,0xA727L,0x4F983824F8FB3CF2LL},{-1L,0xEA07040CCA842DFALL,-1L,0UL,65529UL,0x5EB5CE3A63A67743LL},{1L,0x3E2D46470AD0C79ELL,0L,0xADEAL,65535UL,18446744073709551615UL}},{{8L,-1L,-1L,0x7A40L,0UL,18446744073709551613UL},{0xAAL,0L,0xA34A9EDB9B1DFB68LL,65526UL,7UL,0x8848F550CB7C4065LL},{0L,0x1E92403636CD8D4ALL,0x9C2412408B304F1BLL,7UL,65535UL,0x3B9B47BED26586BCLL},{1L,0x3E2D46470AD0C79ELL,0L,0xADEAL,65535UL,18446744073709551615UL}}},{{{8L,9L,-8L,0x4930L,0x3A44L,9UL},{0L,1L,-3L,0x0A5EL,0xA727L,0x4F983824F8FB3CF2LL},{-1L,0x1AD2EC94644A7470LL,0L,65535UL,0xF186L,18446744073709551615UL},{0xE0L,0xC07262726E94FA07LL,0x023CB4EFB57A5127LL,1UL,65535UL,0x24AB74881ACCAB44LL}},{{1L,0x1AB994F54D63FF5ALL,-8L,0x2F17L,3UL,0x154EA94EDB4A25C9LL},{1L,0L,0L,0x5DA1L,0x3C12L,18446744073709551609UL},{0x8CL,0x944EAF9A50DF4C6CLL,0L,0x37DEL,0UL,0x4E9E4B147B71623CLL},{-1L,0x1AD2EC94644A7470LL,0L,65535UL,0xF186L,18446744073709551615UL}},{{0xAAL,0L,0xA34A9EDB9B1DFB68LL,65526UL,7UL,0x8848F550CB7C4065LL},{0x2DL,0xF4160CA180BB484BLL,1L,0x4F79L,0x7D32L,0UL},{0xE6L,0x9926640828D0E349LL,0xF94F023CA64ADD8BLL,65529UL,8UL,18446744073709551615UL},{0x2DL,0xF4160CA180BB484BLL,1L,0x4F79L,0x7D32L,0UL}}},{{{0x8CL,0x944EAF9A50DF4C6CLL,0L,0x37DEL,0UL,0x4E9E4B147B71623CLL},{6L,0x97D506DC7391AF2ELL,-1L,4UL,65533UL,0xE7D4845EB5F4D78FLL},{0x28L,0L,0xE9A5F1CA18E4F1F3LL,65535UL,0xEAA5L,0xE6A3F393C2DF5847LL},{-10L,0x8F42BE7AC75E1209LL,1L,2UL,0x7C28L,0x3333429DD6F46CE8LL}},{{0x9FL,0x4CD17FF15597B072LL,0L,0UL,1UL,0x8EC64C767A1E7967LL},{0xAAL,0L,0xA34A9EDB9B1DFB68LL,65526UL,7UL,0x8848F550CB7C4065LL},{1L,0L,0L,0x5DA1L,0x3C12L,18446744073709551609UL},{-1L,0xEA07040CCA842DFALL,-1L,0UL,65529UL,0x5EB5CE3A63A67743LL}},{{-3L,0x608170AE80B3DF57LL,0L,65529UL,65535UL,0xBF6C930389EC31A1LL},{-7L,0L,5L,1UL,0UL,0UL},{-1L,0x1AD2EC94644A7470LL,0L,65535UL,0xF186L,18446744073709551615UL},{0L,0x1E92403636CD8D4ALL,0x9C2412408B304F1BLL,7UL,65535UL,0x3B9B47BED26586BCLL}}}};
            int i, j, k;
            l_71[1][1][0] = l_69;
        }
        for (p_6 = 0; (p_6 >= 0); p_6 -= 1)
        { 
            int32_t l_81 = (-4L);
            l_13 = (safe_div_func_int64_t_s_s((safe_div_func_int16_t_s_s(g_63, g_64)), (safe_rshift_func_int16_t_s_u((0x0720L < (((safe_mul_func_int16_t_s_s(((((~((((g_34[2] , 0x88B3L) < l_69.f4) == l_81) | p_5)) , g_70.f3) < 65532UL) ^ l_22.f0), 0x2BCEL)) | l_82) <= (-1L))), 6))));
            return p_6;
        }
        if (g_64)
            goto lbl_83;
    }
    for (g_70.f4 = 24; (g_70.f4 == 7); g_70.f4--)
    { 
        const int64_t l_86 = 7L;
        int64_t l_87 = 0x2F6955C0660AE455LL;
        int32_t l_105 = (-6L);
        int32_t l_106 = 0x659CF5E3L;
        uint64_t l_119 = 0UL;
        g_63 = ((g_35 || ((((g_70.f3 ^ l_22.f4) , l_22.f2) > l_86) == p_5)) < l_87);
        l_62 = (4UL > (g_70.f0 <= ((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((0x0AL <= (p_5 , p_5)), 6UL)), 0x56595279L)), g_70.f0)) , l_86)));
        if (((((((safe_mul_func_int16_t_s_s(((l_106 = ((-10L) || (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((l_102 , (safe_lshift_func_uint8_t_u_u((g_65 = ((l_105 = 0x598FL) == g_38[0])), 2))) == 0xD6AACE6EL), p_6)), 3)))) <= p_6), g_63)) >= g_7[0][0]) , 0L) != p_5) > 4294967288UL) | l_107))
        { 
            for (l_102.f2.f4 = 0; (l_102.f2.f4 < 16); l_102.f2.f4 = safe_add_func_int16_t_s_s(l_102.f2.f4, 1))
            { 
                l_22 = g_70;
            }
        }
        else
        { 
            int16_t l_116 = 0xEF53L;
            g_63 = (safe_sub_func_uint16_t_u_u(g_64, (1L != (safe_add_func_int16_t_s_s((((safe_mod_func_int64_t_s_s((l_116 >= ((safe_sub_func_int16_t_s_s(p_6, g_64)) | g_70.f1)), g_38[0])) > l_116) > l_116), 65528UL)))));
            if (l_119)
                continue;
        }
    }
    return p_5;
}



static int16_t  func_16(int8_t  p_17, int32_t  p_18, int8_t  p_19)
{ 
    --g_35;
    return g_34[1];
}



static uint64_t  func_20(struct S0  p_21)
{ 
    int64_t l_23[2];
    int32_t l_32 = 1L;
    int16_t l_33 = 0L;
    int i;
    for (i = 0; i < 2; i++)
        l_23[i] = 2L;
    for (p_21.f5 = 0; (p_21.f5 <= 1); p_21.f5 += 1)
    { 
        uint32_t l_24[1];
        int i;
        for (i = 0; i < 1; i++)
            l_24[i] = 0x2E072305L;
        ++l_24[0];
    }
    l_32 = (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(g_7[0][2], (p_21.f0 = ((-4L) ^ ((l_23[1] & (!0UL)) & 1L))))), l_23[1]));
    return l_33;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_34[i], "g_34[i]", print_hash_value);

    }
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);

    }
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1, "g_70.f1", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_70.f3, "g_70.f3", print_hash_value);
    transparent_crc(g_70.f4, "g_70.f4", print_hash_value);
    transparent_crc(g_70.f5, "g_70.f5", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
