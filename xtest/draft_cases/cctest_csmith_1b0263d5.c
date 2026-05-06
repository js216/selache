// SPDX-License-Identifier: MIT
// cctest_csmith_1b0263d5.c --- cctest case csmith_1b0263d5 (csmith seed 453141461)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x65056663 */

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

// Options:   -s 453141461 -o /tmp/csmith_gen_osjnta_z/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int16_t  f1;
   const uint16_t  f2;
   signed f3 : 7;
};

struct S1 {
   uint32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const int8_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

union U3 {
   const int32_t  f0;
};


static uint32_t g_4[5][2] = {{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL},{3UL,3UL}};
static int32_t g_7 = (-3L);
static int32_t g_9 = 1L;
static int16_t g_10 = 1L;
static union U3 g_33 = {0xE0F61949L};
static int8_t g_72 = (-3L);
static uint32_t g_73[3] = {0x332C3216L,0x332C3216L,0x332C3216L};
static uint32_t g_79[2] = {0x2B617F2EL,0x2B617F2EL};
static struct S2 g_98[4][1] = {{{1L,1UL}},{{1L,1UL}},{{1L,1UL}},{{1L,1UL}}};
static int8_t g_104[1][2][2] = {{{0L,0L},{0L,0L}}};
static uint16_t g_116 = 1UL;
static uint32_t g_123[4][3][5] = {{{0xBE8948E2L,0x236C4C45L,0xBE8948E2L,18446744073709551608UL,7UL},{0UL,1UL,0UL,4UL,4UL},{0xBE8948E2L,0x236C4C45L,0xBE8948E2L,18446744073709551608UL,7UL}},{{0UL,1UL,0UL,4UL,4UL},{0xBE8948E2L,0x236C4C45L,0xBE8948E2L,2UL,0xBE8948E2L},{0UL,18446744073709551612UL,0UL,0UL,0UL}},{{0xC4ABD77EL,0xDD76C8E4L,0xC4ABD77EL,2UL,0xBE8948E2L},{0UL,18446744073709551612UL,0UL,0UL,0UL},{0xC4ABD77EL,0xDD76C8E4L,0xC4ABD77EL,2UL,0xBE8948E2L}},{{0UL,18446744073709551612UL,0UL,0UL,0UL},{0xC4ABD77EL,0xDD76C8E4L,0xC4ABD77EL,2UL,0xBE8948E2L},{0UL,18446744073709551612UL,0UL,0UL,0UL}}};
static uint16_t g_130 = 0x0455L;
static int64_t g_156 = 0xC3C19AB705B545B5LL;
static struct S1 g_172[1] = {{0x236F7AE0L}};
static uint16_t g_204 = 0UL;
static int16_t g_227[1] = {0L};
static int8_t g_235 = (-1L);
static uint32_t g_236[1] = {18446744073709551608UL};
static struct S0 g_260 = {0x15C6941AL,0xCD34L,65535UL,-1};
static uint32_t g_264 = 0xD7E930A5L;



static uint32_t  func_1(void);
static struct S1  func_2(int16_t  p_3);
static int32_t  func_22(struct S2  p_23, int32_t  p_24);
static struct S2  func_25(union U3  p_26, union U3  p_27, const int8_t  p_28);




static uint32_t  func_1(void)
{ 
    struct S1 l_268[5][5][5] = {{{{0xD32C972FL},{18446744073709551614UL},{0x15D2ADA5L},{18446744073709551614UL},{0xD32C972FL}},{{3UL},{0UL},{0xD8268F0BL},{18446744073709551611UL},{0xD32C972FL}},{{0x8B10A065L},{18446744073709551611UL},{0x8B1A2417L},{0x747AF82BL},{0xD32C972FL}},{{0x6ECE8B49L},{7UL},{1UL},{0UL},{0xD32C972FL}},{{0x05D044DBL},{0x747AF82BL},{18446744073709551615UL},{7UL},{0xD32C972FL}}},{{{0xD32C972FL},{18446744073709551614UL},{0x15D2ADA5L},{18446744073709551614UL},{0xD32C972FL}},{{3UL},{0UL},{0xD8268F0BL},{18446744073709551611UL},{0xD32C972FL}},{{0x8B10A065L},{18446744073709551611UL},{0x8B1A2417L},{0x747AF82BL},{0xD32C972FL}},{{0x6ECE8B49L},{7UL},{1UL},{0UL},{0xD32C972FL}},{{0x05D044DBL},{0x747AF82BL},{18446744073709551615UL},{7UL},{0xD32C972FL}}},{{{0xD32C972FL},{18446744073709551614UL},{0x15D2ADA5L},{18446744073709551614UL},{0xD32C972FL}},{{3UL},{0UL},{0xD8268F0BL},{18446744073709551611UL},{0xD32C972FL}},{{0x8B10A065L},{18446744073709551611UL},{0x8B1A2417L},{0x747AF82BL},{0xD32C972FL}},{{0x6ECE8B49L},{7UL},{1UL},{0UL},{0xD32C972FL}},{{0x05D044DBL},{0x747AF82BL},{18446744073709551615UL},{7UL},{0xD32C972FL}}},{{{0xD32C972FL},{18446744073709551614UL},{0x15D2ADA5L},{18446744073709551614UL},{0xD32C972FL}},{{3UL},{0UL},{0xD8268F0BL},{18446744073709551611UL},{0xD32C972FL}},{{0x8B10A065L},{18446744073709551611UL},{0x8B1A2417L},{0x747AF82BL},{0xD32C972FL}},{{0x6ECE8B49L},{7UL},{1UL},{0UL},{0xD32C972FL}},{{0x05D044DBL},{0x747AF82BL},{18446744073709551615UL},{7UL},{0xD32C972FL}}},{{{0xD32C972FL},{18446744073709551614UL},{0x15D2ADA5L},{18446744073709551614UL},{0xD32C972FL}},{{3UL},{0UL},{0xD8268F0BL},{18446744073709551611UL},{0xD32C972FL}},{{0x8B10A065L},{18446744073709551611UL},{0x8B1A2417L},{0x747AF82BL},{0xD32C972FL}},{{0x6ECE8B49L},{7UL},{1UL},{0UL},{0xD32C972FL}},{{0x05D044DBL},{0x747AF82BL},{18446744073709551615UL},{7UL},{0xD32C972FL}}}};
    int32_t l_275 = 0x7CFB3C6DL;
    int i, j, k;
    l_268[2][0][1] = func_2(g_4[1][1]);
    g_260.f3 = ((g_9 = (-1L)) >= (safe_mod_func_uint8_t_u_u(0x19L, (safe_mod_func_uint64_t_u_u(0x4CC397EF02E0104FLL, (safe_mod_func_int16_t_s_s(((g_98[0][0] , (-1L)) >= 2L), l_275)))))));
    return g_104[0][1][0];
}



static struct S1  func_2(int16_t  p_3)
{ 
    struct S1 l_8[3] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
    union U3 l_32 = {0L};
    int32_t l_170 = (-1L);
    uint32_t l_223 = 8UL;
    int32_t l_226 = 0x51E51D77L;
    int32_t l_230[2];
    int32_t l_234 = 1L;
    struct S1 l_267 = {1UL};
    int i;
    for (i = 0; i < 2; i++)
        l_230[i] = 5L;
    for (p_3 = 0; (p_3 >= 25); ++p_3)
    { 
        for (g_7 = 1; (g_7 >= 0); g_7 -= 1)
        { 
            return l_8[0];
        }
    }
    for (g_7 = 0; (g_7 <= 2); g_7 += 1)
    { 
        uint8_t l_31 = 0xCAL;
        uint64_t l_188[2];
        int32_t l_189[5][2] = {{0xEC03ACE2L,0xEC03ACE2L},{0xEC03ACE2L,0xEC03ACE2L},{0xEC03ACE2L,0xEC03ACE2L},{0xEC03ACE2L,0xEC03ACE2L},{0xEC03ACE2L,0xEC03ACE2L}};
        uint32_t l_201 = 0x3AFEE91EL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_188[i] = 0UL;
        for (p_3 = 2; (p_3 >= 0); p_3 -= 1)
        { 
            int8_t l_11 = 1L;
            for (g_9 = 2; (g_9 >= 0); g_9 -= 1)
            { 
                uint16_t l_12 = 65529UL;
                g_10 = 1L;
                ++l_12;
            }
            if (p_3)
                continue;
            if (((safe_mod_func_int8_t_s_s(g_10, ((safe_sub_func_int64_t_s_s(g_4[1][1], (-5L))) , l_8[0].f0))) || 0xA0C0E075L))
            { 
                if (l_8[0].f0)
                    break;
            }
            else
            { 
                int64_t l_21 = 0L;
                int i;
                l_170 = ((l_21 = (safe_mul_func_uint8_t_u_u(l_8[0].f0, g_4[1][1]))) , func_22(func_25((((safe_mod_func_int32_t_s_s((g_9 ^= g_4[1][1]), (l_31 = l_8[0].f0))) | 0xE65DD4D1L) , l_32), g_33, g_4[1][1]), l_21));
                return l_8[g_7];
            }
        }
        for (g_10 = 0; (g_10 <= 2); g_10 += 1)
        { 
            struct S1 l_171 = {0x17B851E1L};
            uint64_t l_187 = 7UL;
            int32_t l_206 = 0x0117A253L;
            int i;
            if (g_98[0][0].f1)
                break;
            g_172[0] = (l_8[g_10] = l_171);
            if ((safe_mul_func_uint8_t_u_u((g_79[0] , ((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0L, 14)), 0)), (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_8[g_10].f0 < ((safe_add_func_uint64_t_u_u(g_73[2], l_187)) | 0x22EBL)), 5)), l_31)))) ^ g_104[0][1][0])), l_188[0])))
            { 
                l_189[3][1] = 0L;
            }
            else
            { 
                int64_t l_205 = 0x8200A0EF8C7F8F15LL;
                l_206 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(0x60L, ((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((-1L) ^ (g_204 ^= (p_3 = (safe_div_func_uint8_t_u_u(((!((l_201 && (safe_lshift_func_int16_t_s_u(4L, g_123[3][2][1]))) && g_79[0])) == (-1L)), 0x07L))))), 9)) && 0x39L), g_98[0][0].f0)) ^ l_205))), 4));
            }
        }
    }
    for (g_10 = 1; (g_10 >= 0); g_10 -= 1)
    { 
        int32_t l_207 = (-1L);
        struct S0 l_221[2][1] = {{{4294967288UL,-9L,0x4B15L,1}},{{4294967288UL,-9L,0x4B15L,1}}};
        int32_t l_228 = 8L;
        int32_t l_232 = 0x45AF8849L;
        int i, j;
        if (p_3)
        { 
            int32_t l_222 = (-6L);
            int32_t l_224 = 0x7135CD98L;
            int32_t l_233[4][5] = {{0x20BB8A06L,0x20BB8A06L,(-10L),0x9FB56803L,(-1L)},{0xEF03F5B9L,(-1L),0x61DA3FA1L,0x61DA3FA1L,(-1L)},{(-1L),(-10L),(-1L),0x61DA3FA1L,(-4L)},{7L,0x61DA3FA1L,0x20BB8A06L,0x61DA3FA1L,7L}};
            int i, j;
            if (l_207)
                break;
            if ((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((p_3 < ((~l_207) > 0xCE82L)), 0x3C22A316L)), l_207)))
            { 
                l_222 = ((((safe_lshift_func_uint16_t_u_s(l_170, 1)) > (safe_mul_func_uint16_t_u_u(((((l_32.f0 && (safe_mul_func_int16_t_s_s((l_207 |= (safe_mod_func_int32_t_s_s((-1L), ((l_221[0][0] , p_3) , p_3)))), g_4[1][1]))) < 0L) , g_204) , 0x811BL), p_3))) | p_3) < g_130);
                l_223 = 0x98444E19L;
            }
            else
            { 
                int8_t l_225 = 0x28L;
                int32_t l_229 = 7L;
                int32_t l_231[4][1] = {{0xBF0C42BAL},{(-9L)},{0xBF0C42BAL},{(-9L)}};
                int i, j;
                g_7 |= 0x1E4EF612L;
                g_236[0]++;
            }
        }
        else
        { 
            uint32_t l_247 = 0xE94D02D6L;
            struct S2 l_255 = {0x10L,0x30F0A0A2L};
            g_9 = (safe_add_func_int8_t_s_s(p_3, (p_3 , (safe_sub_func_uint16_t_u_u((((0x91L <= (safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_234 = l_247), p_3)), p_3))) >= 4L) && p_3), l_247)))));
            for (g_156 = 2; (g_156 >= 0); g_156 -= 1)
            { 
                uint16_t l_252 = 0xD20BL;
                int32_t l_253 = 0x06E3C85DL;
                int i, j;
                l_230[1] &= (0UL | (safe_div_func_uint8_t_u_u(((l_253 &= (g_4[g_10][g_10] < (((safe_div_func_uint8_t_u_u(g_4[g_10][g_10], ((((g_98[1][0] , g_4[(g_10 + 2)][g_10]) , p_3) == l_252) || g_130))) || g_4[1][1]) ^ 9UL))) && g_227[0]), l_221[0][0].f1)));
            }
            for (l_226 = 2; (l_226 >= 0); l_226 -= 1)
            { 
                uint16_t l_254 = 65535UL;
                uint16_t l_261 = 2UL;
                int i;
                g_7 ^= (l_254 < (l_255 , ((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((l_8[(g_10 + 1)] , (g_260 , p_3)), 9)) | g_79[0]) > l_170), 3L)) > l_261)));
                g_9 = ((safe_mod_func_int32_t_s_s(((((l_232 = 0x7706920802794F4CLL) < (g_264 = 0x012A3724DF3FE578LL)) & (-10L)) ^ ((safe_mod_func_uint16_t_u_u(l_255.f1, g_10)) & 0L)), 0x7C478B8BL)) <= g_236[0]);
            }
        }
    }
    return l_267;
}



static int32_t  func_22(struct S2  p_23, int32_t  p_24)
{ 
    uint32_t l_105 = 0xD1396874L;
    struct S1 l_117 = {18446744073709551614UL};
    int32_t l_140 = 0xCAAD51B3L;
    int32_t l_141 = 8L;
    int32_t l_164 = 0xBC646FADL;
    uint32_t l_165 = 0x2F1B771CL;
    ++l_105;
    for (p_23.f1 = 0; (p_23.f1 <= 16); p_23.f1 = safe_add_func_uint16_t_u_u(p_23.f1, 1))
    { 
        int8_t l_122 = 0xEAL;
        int32_t l_131 = 0x19FA1A8EL;
        for (g_9 = 17; (g_9 != (-3)); g_9 = safe_sub_func_uint8_t_u_u(g_9, 1))
        { 
            int8_t l_115 = 0L;
            g_116 = ((safe_rshift_func_uint8_t_u_u(((+(((18446744073709551615UL ^ (l_115 <= (0xD72C8AEE2D86AEC8LL ^ g_72))) && 0x8A5FABF0L) >= l_115)) <= 5UL), l_115)) , g_9);
            if (p_23.f0)
                break;
        }
        l_117 = l_117;
        if (p_23.f0)
        { 
            for (l_117.f0 = (-17); (l_117.f0 <= 27); l_117.f0++)
            { 
                return l_117.f0;
            }
            for (l_105 = 16; (l_105 != 4); l_105 = safe_sub_func_uint16_t_u_u(l_105, 3))
            { 
                ++g_123[3][2][1];
                return p_24;
            }
        }
        else
        { 
            union U3 l_129 = {0x774F07DEL};
            int32_t l_153 = 0x8AAF6E95L;
            struct S1 l_157 = {18446744073709551615UL};
            p_24 = ((!(l_131 = (((safe_add_func_int64_t_s_s(((p_24 , (g_116 >= ((g_130 ^= (p_24 > ((func_25(l_129, l_129, g_72) , 0x40L) <= 0x01L))) , g_123[2][0][2]))) > 0xC455L), l_129.f0)) , l_122) != 0x5672CF6FL))) >= l_122);
            if ((l_141 &= (((safe_rshift_func_int8_t_s_u((~((((l_131 & (~((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((1UL > ((l_140 = 1UL) != g_130)), g_104[0][1][0])), 0xD9L)) , 0x28L))) >= p_24) == l_131) & 0xC9008584L)), 5)) > g_10) , 0x2FE60FC5L)))
            { 
                int8_t l_145 = 0L;
                l_140 &= ((safe_sub_func_uint32_t_u_u((~((0xFDC4L > (l_145 <= (l_131 = (l_153 |= ((safe_sub_func_uint16_t_u_u((((safe_unary_minus_func_uint32_t_u(0UL)) >= (safe_mod_func_int64_t_s_s((safe_mod_func_int8_t_s_s((-1L), p_24)), l_145))) <= 0x6304L), p_23.f0)) & l_141))))) | l_145)), p_23.f0)) && l_105);
                l_140 |= (g_9 = (safe_mod_func_uint8_t_u_u((g_156 = l_145), (l_131 = p_23.f0))));
                l_157 = l_157;
            }
            else
            { 
                return l_141;
            }
        }
    }
    g_9 |= (safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(9UL, (((safe_mul_func_uint16_t_u_u((++l_165), ((g_156 >= (safe_mul_func_uint16_t_u_u(p_23.f0, (l_105 != g_73[2])))) , g_7))) < 65535UL) | l_164))), 65532UL));
    return p_24;
}



static struct S2  func_25(union U3  p_26, union U3  p_27, const int8_t  p_28)
{ 
    int8_t l_41 = 0L;
    int32_t l_43 = 0x6C20B133L;
    int32_t l_44 = 0xC17F7268L;
    int8_t l_78 = 0x4CL;
    uint8_t l_97 = 7UL;
    struct S1 l_101 = {18446744073709551615UL};
    struct S0 l_102 = {0UL,0xE417L,65535UL,-2};
    struct S2 l_103 = {-7L,0x8410211DL};
    for (g_10 = 1; (g_10 >= 0); g_10 -= 1)
    { 
        struct S1 l_40 = {0xB974DB9BL};
        int32_t l_42 = (-5L);
        l_44 = (safe_add_func_int32_t_s_s(g_9, (l_43 = ((!(!(l_42 = (safe_sub_func_int64_t_s_s(((l_40 , (l_40 , 0x3DL)) > l_41), 0xD54BA4FDAF0DB126LL))))) , p_26.f0))));
        for (l_44 = 0; (l_44 <= 1); l_44 += 1)
        { 
            int i, j;
            l_43 = (g_9 = ((safe_div_func_uint32_t_u_u((g_4[(l_44 + 3)][g_10] ^ 8L), (((safe_sub_func_uint16_t_u_u(g_4[(l_44 + 3)][g_10], (safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((safe_div_func_int32_t_s_s(1L, 4294967295UL)) & p_27.f0) != g_4[1][1]), g_4[(l_44 + 3)][g_10])), l_41)))) >= l_41) && g_4[0][0]))) == p_28));
        }
    }
    for (g_10 = 0; (g_10 <= 1); g_10 += 1)
    { 
        uint16_t l_64 = 9UL;
        int32_t l_65 = 0x189EEBB9L;
        if ((safe_add_func_int32_t_s_s((p_26.f0 && (((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s(p_27.f0, l_43)), ((l_65 = (safe_mod_func_int32_t_s_s(((!((g_9 ^ l_64) < l_64)) && g_9), p_26.f0))) != g_4[1][1]))) | g_7) && g_33.f0)), p_27.f0)))
        { 
            l_65 |= (-5L);
        }
        else
        { 
            uint8_t l_76 = 5UL;
            int32_t l_77 = 0L;
            int32_t l_80 = (-8L);
            int32_t l_81 = 2L;
            int32_t l_82[1];
            int i;
            for (i = 0; i < 1; i++)
                l_82[i] = (-5L);
            l_82[0] |= (safe_sub_func_uint64_t_u_u(18446744073709551615UL, (safe_rshift_func_uint8_t_u_s((((l_81 = (l_44 = ((safe_rshift_func_int16_t_s_u((l_80 = (((++g_73[2]) > (g_79[0] |= (((l_76 & l_43) && ((l_78 |= (l_77 = (0x634890B8L > l_65))) ^ l_65)) ^ g_4[1][1]))) == g_7)), 11)) | l_65))) & p_27.f0) , p_27.f0), 1))));
            l_80 = ((l_77 = (g_4[3][1] = ((1L && (l_65 &= 0xF4L)) < (safe_add_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_s(0xB9L, ((safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((l_82[0] ^ (-1L)) < 0L), l_64)), 6)) != 0xD4L), l_97)), l_44)) & 0xF77C4363893D9136LL), p_27.f0)) , g_72))) && p_27.f0), g_79[1]))))) & p_26.f0);
            if (l_41)
                continue;
        }
        if (p_26.f0)
            break;
        return g_98[0][0];
    }
    l_44 = ((((((((g_7 , (safe_mul_func_int16_t_s_s(((l_101 , (l_102 , (0xEFL && 0xA0L))) >= l_97), 1L))) < l_78) || l_97) | 0x152693CEL) && g_79[1]) == p_26.f0) < 0L) , p_27.f0);
    return l_103;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_73[i], "g_73[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_79[i], "g_79[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_98[i][j].f0, "g_98[i][j].f0", print_hash_value);
            transparent_crc(g_98[i][j].f1, "g_98[i][j].f1", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_104[i][j][k], "g_104[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_123[i][j][k], "g_123[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_172[i].f0, "g_172[i].f0", print_hash_value);

    }
    transparent_crc(g_204, "g_204", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_227[i], "g_227[i]", print_hash_value);

    }
    transparent_crc(g_235, "g_235", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_236[i], "g_236[i]", print_hash_value);

    }
    transparent_crc(g_260.f0, "g_260.f0", print_hash_value);
    transparent_crc(g_260.f1, "g_260.f1", print_hash_value);
    transparent_crc(g_260.f2, "g_260.f2", print_hash_value);
    transparent_crc(g_260.f3, "g_260.f3", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
