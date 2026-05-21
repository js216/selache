// SPDX-License-Identifier: MIT
// cctest_csmith_55fda70f.c --- cctest case csmith_55fda70f (csmith seed 1442686735)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x73353078 */

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

// Options:   -s 1442686735 -o /tmp/csmith_gen_008hhn0q/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint16_t  f0;
};

struct S1 {
   int64_t  f0;
   struct S0  f1;
   const int32_t  f2;
   uint32_t  f3;
   const uint16_t  f4;
};

union U2 {
   int32_t  f0;
};

union U3 {
   uint32_t  f0;
   int16_t  f1;
};

union U4 {
   int32_t  f0;
   int32_t  f1;
   uint64_t  f2;
   uint32_t  f3;
};

union U5 {
   uint64_t  f0;
   uint64_t  f1;
};

union U6 {
   uint64_t  f0;
};


static uint8_t g_9 = 0x6FL;
static union U6 g_20 = {0xF3403CA955A63A74LL};
static uint8_t g_23 = 255UL;
static int64_t g_25 = 0x6D54EC7E318B4743LL;
static const union U4 g_26 = {0xAE65C342L};
static int64_t g_48 = 0xAF75D59274CB070FLL;
static union U5 g_56 = {0x96A2A5EA8900E2E8LL};
static uint16_t g_75 = 0x2DA2L;
static uint32_t g_99[5][1][5] = {{{18446744073709551607UL,0UL,0UL,18446744073709551607UL,0x498C5F84L}},{{18446744073709551607UL,0xD1F7F3E9L,18446744073709551611UL,18446744073709551611UL,0xD1F7F3E9L}},{{0x498C5F84L,0UL,18446744073709551611UL,0x9D9FC0A4L,0x9D9FC0A4L}},{{0UL,0x498C5F84L,0UL,18446744073709551611UL,0x9D9FC0A4L}},{{0xD1F7F3E9L,18446744073709551607UL,0x9D9FC0A4L,18446744073709551607UL,0xD1F7F3E9L}}};
static union U2 g_102 = {0x2BDD4A0CL};
static union U3 g_118[2] = {{4294967292UL},{4294967292UL}};
static int32_t g_138 = 0xD9ED4790L;
static struct S1 g_192 = {0xB7A216F81079E170LL,{0xDF9CL},0x3895B9E8L,18446744073709551615UL,0UL};
static uint32_t g_242 = 0x97A0B385L;



static uint16_t  func_1(void);
static int32_t  func_2(union U3  p_3, int16_t  p_4, union U4  p_5, int32_t  p_6);
static union U3  func_7(union U5  p_8);
static union U5  func_10(uint32_t  p_11, const union U4  p_12, struct S0  p_13, uint64_t  p_14);




static uint16_t  func_1(void)
{ 
    int64_t l_19 = (-10L);
    int64_t l_24 = 0L;
    struct S0 l_27 = {0x896EL};
    uint32_t l_147 = 0x706B8BA9L;
    uint32_t l_166 = 0xDA91462BL;
    int32_t l_178 = 1L;
    union U3 l_233 = {4294967295UL};
    uint16_t l_247 = 0x702CL;
    if (func_2(func_7((g_9 , func_10((safe_add_func_uint16_t_u_u((g_25 |= (((safe_mul_func_int8_t_s_s((l_19 > (((((g_23 = (g_20 , ((safe_div_func_int32_t_s_s(l_19, g_9)) , g_20.f0))) & l_19) <= g_9) >= l_19) || l_24)), g_20.f0)) == l_24) , 0x4801L)), 0x6B5AL)), g_26, l_27, g_9))), l_19, g_26, l_27.f0))
    { 
        const uint64_t l_160 = 0UL;
        int32_t l_165 = 0x027B53E6L;
        uint64_t l_167 = 18446744073709551615UL;
        int32_t l_200[2][2][1] = {{{0L},{3L}},{{0L},{3L}}};
        int32_t l_210 = 5L;
        struct S1 l_215 = {-3L,{1UL},9L,0xDFEA92DAL,0xD49AL};
        int i, j, k;
lbl_226:
        ++l_147;
        if (((((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(1UL, ((safe_mod_func_uint16_t_u_u((((safe_div_func_int64_t_s_s((l_160 == (safe_rshift_func_uint8_t_u_s((g_26 , (safe_mul_func_uint16_t_u_u(g_56.f1, 0xD056L))), 1))), g_25)) || g_138) , l_165), l_166)) | g_56.f0))), l_167)) > g_102.f0), 1UL)) < 2UL) != g_99[4][0][0]) <= g_99[4][0][3]))
        { 
            int8_t l_176 = 0L;
            int32_t l_177[2];
            uint8_t l_193[3];
            int i;
            for (i = 0; i < 2; i++)
                l_177[i] = 0x6DDA51A4L;
            for (i = 0; i < 3; i++)
                l_193[i] = 249UL;
            l_178 &= (((g_75 = g_26.f3) && ((((l_27.f0 ^ (((safe_add_func_uint16_t_u_u((~((safe_add_func_int16_t_s_s(((l_177[0] ^= (g_102 , (((~((safe_mod_func_int16_t_s_s((18446744073709551608UL <= l_176), 0xFC28L)) && 0x0EB15947182C7354LL)) >= l_160) & l_165))) != g_56.f1), 1UL)) != 0x0524L)), g_75)) ^ 0x325BL) != 65532UL)) < l_176) & g_75) > g_56.f0)) | 0UL);
            for (l_165 = 0; (l_165 <= (-26)); l_165 = safe_sub_func_uint16_t_u_u(l_165, 6))
            { 
                int32_t l_191 = 0xEDEA70BFL;
                if (l_176)
                    break;
                l_191 = (g_102.f0 = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(8UL, 1)), ((((l_178 ^= ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((l_27.f0 , (0x17A1L < (((((safe_mod_func_int16_t_s_s(g_102.f0, g_99[0][0][4])) >= l_191) , g_192) , 0x8DD4L) > l_193[1]))), l_193[1])), 5)) <= g_192.f2)) == 0xCAA3L) <= 6L) && l_191))));
            }
        }
        else
        { 
            int16_t l_204[1][4][5] = {{{(-1L),(-4L),(-1L),(-4L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xD981L,(-4L),0xD981L,(-4L),0xD981L},{(-1L),(-1L),(-1L),(-1L),(-1L)}}};
            union U6 l_220 = {18446744073709551615UL};
            int32_t l_221 = 0x7672F530L;
            int i, j, k;
            for (g_192.f0 = 0; (g_192.f0 > 24); g_192.f0 = safe_add_func_int32_t_s_s(g_192.f0, 9))
            { 
                int32_t l_197 = 0L;
                uint8_t l_209 = 0xB5L;
                l_210 &= (((~l_197) | (safe_sub_func_uint8_t_u_u((l_200[1][0][0] = 252UL), (+l_165)))) & (safe_div_func_uint16_t_u_u((++g_75), ((safe_div_func_uint16_t_u_u((9UL <= l_209), 65530UL)) || l_197))));
                g_102.f0 &= ((~(l_221 = (safe_rshift_func_int16_t_s_s((g_118[1].f0 != (((!(l_215 , (~((safe_mul_func_int16_t_s_s(0x5306L, (safe_unary_minus_func_uint32_t_u((((((l_220 , 0x3AD35209E3FAC453LL) <= 0UL) | l_197) && g_192.f2) <= (-1L)))))) != l_19)))) <= g_118[1].f1) != g_118[1].f0)), 5)))) && 18446744073709551606UL);
            }
        }
        for (l_24 = 0; (l_24 != 0); l_24 = safe_add_func_uint32_t_u_u(l_24, 9))
        { 
            for (l_166 = 0; (l_166 < 53); l_166 = safe_add_func_uint8_t_u_u(l_166, 1))
            { 
                g_102.f0 = 0xF9293DCFL;
            }
            if (g_102.f0)
                goto lbl_226;
        }
    }
    else
    { 
        const int32_t l_234[3] = {0xAB29EDB2L,0xAB29EDB2L,0xAB29EDB2L};
        int16_t l_239[5][1];
        int32_t l_243 = 6L;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_239[i][j] = 5L;
        }
        l_243 &= ((safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((g_242 = (safe_lshift_func_int16_t_s_s((g_118[1].f1 = (((l_233 , ((l_234[0] || ((((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(l_239[3][0], (((safe_mul_func_int16_t_s_s(0x05F5L, g_48)) || g_20.f0) >= l_239[1][0]))) & 0x72561975L), l_239[4][0])) == 255UL) <= 18446744073709551609UL) <= g_26.f0)) && l_27.f0)) & 0xB9E387D5L) | l_27.f0)), 4))) , g_102.f0) == g_26.f1), g_26.f3)), l_234[0])) , g_23);
    }
    for (l_233.f0 = (-4); (l_233.f0 > 10); l_233.f0 = safe_add_func_int32_t_s_s(l_233.f0, 2))
    { 
        const int64_t l_246 = 0x5C7731CCDA156034LL;
        g_102.f0 = 0x2A5FB302L;
        if (l_246)
            continue;
    }
    return l_247;
}



static int32_t  func_2(union U3  p_3, int16_t  p_4, union U4  p_5, int32_t  p_6)
{ 
    for (g_20.f0 = 0; (g_20.f0 <= 0); g_20.f0 += 1)
    { 
        uint32_t l_146 = 0x1DE84E00L;
        return l_146;
    }
    return p_5.f0;
}



static union U3  func_7(union U5  p_8)
{ 
    uint8_t l_60 = 6UL;
    int32_t l_64 = 0xEB71DEE1L;
    const uint64_t l_70 = 18446744073709551615UL;
    uint8_t l_73 = 0x53L;
    int32_t l_74 = 0xED4E1BE6L;
    uint32_t l_86[4];
    union U6 l_97 = {0xD8287126A377049BLL};
    struct S0 l_98 = {0UL};
    uint32_t l_107 = 0x4CE628F5L;
    int32_t l_128 = 0x24F76BCCL;
    union U3 l_145 = {0x384D70BFL};
    int i;
    for (i = 0; i < 4; i++)
        l_86[i] = 0x30550D74L;
    l_64 ^= (((+(safe_lshift_func_uint8_t_u_u(l_60, (p_8.f1 <= (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint64_t_u(g_48)), p_8.f1)))))) && 0L) ^ l_60);
    if ((l_64 ^ (safe_div_func_uint64_t_u_u(((!0xC17A62E52AB26C3ALL) > (0x9969097B3892EBBALL == ((!((~(l_70 <= g_20.f0)) <= 249UL)) , l_64))), 0x05C6DFA21EB82DDCLL))))
    { 
        int8_t l_71 = 0xA6L;
        l_71 = (g_25 ^ 0x92AC6B8A9B06ECFBLL);
    }
    else
    { 
        union U2 l_72[1] = {{-1L}};
        int i;
        l_64 = ((l_72[0] , (0x06L ^ l_73)) || g_9);
        --g_75;
    }
    for (g_25 = (-17); (g_25 == 5); g_25++)
    { 
        int32_t l_90 = 0xD9F560E8L;
        int32_t l_108 = 0x132EE097L;
        for (l_74 = 0; (l_74 < (-2)); --l_74)
        { 
            uint16_t l_89[1][4];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_89[i][j] = 65535UL;
            }
            l_90 = (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((g_75 = (l_73 || l_86[2])), (l_89[0][3] = ((safe_sub_func_uint64_t_u_u(g_56.f0, p_8.f0)) < g_25)))), p_8.f0));
            g_99[4][0][3] = ((p_8.f0 > (safe_mul_func_uint16_t_u_u(8UL, (safe_div_func_uint64_t_u_u(((l_90 = ((4294967289UL <= (safe_lshift_func_int16_t_s_u(((l_97 , l_98) , (-8L)), 8))) , 0xB55CL)) > g_48), p_8.f0))))) != g_26.f0);
        }
        if ((safe_lshift_func_int8_t_s_u(((l_108 ^= (g_99[4][0][3] != (((g_102 , (((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(0xEECEL, (((((l_90 | l_98.f0) < l_86[2]) <= p_8.f1) < l_90) && 0x401126FE5016CB79LL))) != 2L), 1UL)) > l_74) > 0xD2L)) & l_107) | 0UL))) < g_48), p_8.f0)))
        { 
            union U4 l_117 = {0x96A5E243L};
            l_64 &= ((0xBCL < (safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((-1L), 13)), 18446744073709551606UL)), ((safe_add_func_int8_t_s_s((p_8.f0 & g_20.f0), p_8.f1)) > 0xD0L)))) , g_48);
            if ((l_117 , p_8.f1))
            { 
                int16_t l_125 = 0x9520L;
                l_90 = (g_118[1] , (safe_div_func_int8_t_s_s((l_125 &= (safe_rshift_func_uint16_t_u_s((l_64 = (g_26 , (safe_lshift_func_uint8_t_u_u((0xBD5792D6L ^ ((p_8.f1 <= 1L) != 0x52B0L)), 3)))), 12))), p_8.f1)));
                l_64 = (p_8.f0 || (safe_add_func_int8_t_s_s(l_128, l_125)));
            }
            else
            { 
                int8_t l_129 = 0x01L;
                l_129 ^= (g_118[1].f0 | g_99[4][0][3]);
                l_117.f0 = (safe_lshift_func_uint16_t_u_u(p_8.f1, 1));
            }
        }
        else
        { 
            uint16_t l_132 = 0xB259L;
            l_64 = l_132;
            for (g_56.f1 = (-13); (g_56.f1 <= 46); ++g_56.f1)
            { 
                uint64_t l_135 = 1UL;
                g_102.f0 = (g_138 = ((((l_135 < g_26.f0) == p_8.f0) | (safe_sub_func_int32_t_s_s((0x33L | 255UL), g_20.f0))) | g_48));
            }
        }
        l_64 = ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(g_99[4][0][3], 12)) >= (g_48 = 1L)), (l_74 = (((safe_mul_func_int8_t_s_s(g_118[1].f0, ((g_26.f1 & 0x33BDL) >= l_86[2]))) || 6L) >= l_90)))) ^ g_26.f0);
    }
    return l_145;
}



static union U5  func_10(uint32_t  p_11, const union U4  p_12, struct S0  p_13, uint64_t  p_14)
{ 
    const uint64_t l_46 = 0UL;
    int32_t l_47[1];
    int32_t l_49[1][3][4];
    int32_t l_55 = (-2L);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_47[i] = 0x1248C331L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
                l_49[i][j][k] = 1L;
        }
    }
    l_49[0][1][1] = (safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((-2L), (safe_div_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((0x380DL != (safe_lshift_func_uint16_t_u_s(((g_48 |= (l_47[0] = ((safe_add_func_uint32_t_u_u(((((safe_add_func_int64_t_s_s(0xBFEFA2E5769E8A28LL, (safe_add_func_uint16_t_u_u((255UL | l_46), g_26.f0)))) == 0x32L) > p_11) , g_26.f3), 0x3251F81FL)) & p_11))) < l_46), p_14))), l_46)), g_9)) >= g_26.f3) & 0x73C098B3027FE137LL), 65530UL)))), 1));
    for (g_20.f0 = 0; (g_20.f0 > 35); ++g_20.f0)
    { 
        struct S1 l_54[1] = {{0x626DAC17B1AB372CLL,{65529UL},1L,0x861E80F9L,0x066EL}};
        int i;
        l_47[0] &= ((l_49[0][0][0] = ((l_46 || (((5UL <= (safe_div_func_uint8_t_u_u(((l_49[0][1][1] , (l_54[0] , p_12.f1)) == l_55), p_12.f3))) < l_46) <= 0UL)) & 0xABL)) & l_46);
    }
    return g_56;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
    transparent_crc(g_26.f3, "g_26.f3", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_99[i][j][k], "g_99[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_118[i].f1, "g_118[i].f1", print_hash_value);

    }
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_192.f0, "g_192.f0", print_hash_value);
    transparent_crc(g_192.f1.f0, "g_192.f1.f0", print_hash_value);
    transparent_crc(g_192.f2, "g_192.f2", print_hash_value);
    transparent_crc(g_192.f3, "g_192.f3", print_hash_value);
    transparent_crc(g_192.f4, "g_192.f4", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
