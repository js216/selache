// SPDX-License-Identifier: MIT
// cctest_csmith_10043319.c --- cctest case csmith_10043319 (csmith seed 268710681)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x21f0d934 */

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

// Options:   -s 268710681 -o /tmp/csmith_gen_hhuu4yqy/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int64_t  f0;
   int32_t  f1;
};

union U1 {
   const struct S0  f0;
};

union U2 {
   struct S0  f0;
   int8_t  f1;
   struct S0  f2;
   int8_t * f3;
   int32_t  f4;
};

union U3 {
   uint16_t  f0;
   int8_t * f1;
};

union U4 {
   const uint8_t  f0;
   const int64_t  f1;
   uint32_t  f2;
   int32_t  f3;
};


static int32_t g_5[3] = {0xFE46C2E7L,0xFE46C2E7L,0xFE46C2E7L};
static int8_t g_12 = 0L;
static int8_t *g_11[3][2] = {{(void*)0,&g_12},{&g_12,(void*)0},{&g_12,&g_12}};
static int8_t **g_10 = &g_11[1][1];
static const union U1 g_18 = {{1L,-1L}};
static union U4 g_20 = {255UL};
static int32_t g_69 = 1L;
static int32_t *g_68 = &g_69;
static struct S0 g_74 = {-8L,0x12D46FEDL};
static int64_t g_102 = 0L;
static uint64_t g_103 = 0x2EE8FFC0A99849AALL;
static uint64_t g_107 = 0xCA48CC9215A14429LL;
static int16_t g_130[6] = {0x96BAL,0x96BAL,0x96BAL,0x96BAL,0x96BAL,0x96BAL};
static union U2 g_144[3] = {{{0xE03748BFE3BB384ELL,0xA52E2A0AL}},{{0xE03748BFE3BB384ELL,0xA52E2A0AL}},{{0xE03748BFE3BB384ELL,0xA52E2A0AL}}};
static int16_t **g_170[3] = {(void*)0,(void*)0,(void*)0};
static int16_t ***g_169[6] = {&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1],&g_170[1]};
static struct S0 * const g_200 = &g_74;
static struct S0 * const *g_199 = &g_200;
static struct S0 * const **g_198 = &g_199;
static union U1 g_233[7][2][6] = {{{{{0xBAD39F9CD19120BCLL,0x22C93696L}},{{1L,0L}},{{0x848BB9C06754C7A3LL,0x3618BF3FL}},{{0x848BB9C06754C7A3LL,0x3618BF3FL}},{{1L,0L}},{{0xBAD39F9CD19120BCLL,0x22C93696L}}},{{{8L,0L}},{{0xFAAC2A5FD6FEA034LL,0xFBC6411BL}},{{1L,0L}},{{0x4D2B49C788934BA7LL,0x2C62B346L}},{{8L,0x08190200L}},{{-1L,0x0B6EC3E8L}}}},{{{{0x687B3F213AF98670LL,0x66A3FBE8L}},{{-8L,0L}},{{7L,-8L}},{{0xDA5780539E8B652BLL,0xE1256EB5L}},{{0xE71A88FC1CA0347CLL,8L}},{{0x82BC353FDA3CCD9CLL,-9L}}},{{{0x687B3F213AF98670LL,0x66A3FBE8L}},{{0x1871A36315F1035ALL,0xF56564C8L}},{{0x6159998129C7174ALL,8L}},{{0xBAD39F9CD19120BCLL,0x22C93696L}},{{-1L,0x0B6EC3E8L}},{{2L,1L}}}},{{{{1L,-1L}},{{1L,0x6BB4594AL}},{{0xDE5B823450267AACLL,-1L}},{{0xFAAC2A5FD6FEA034LL,0xFBC6411BL}},{{0xE91BF3A08C533A9DLL,-1L}},{{0xDA5780539E8B652BLL,0xE1256EB5L}}},{{{0xE71A88FC1CA0347CLL,8L}},{{-8L,0L}},{{8L,0L}},{{-1L,0x0B6EC3E8L}},{{8L,0L}},{{-8L,0L}}}},{{{{0x6159998129C7174ALL,8L}},{{0x82BC353FDA3CCD9CLL,-9L}},{{0xA38F90603C690F1CLL,0xE6EE1648L}},{{0xEE92D2D4CAE694BDLL,0x6751E06EL}},{{0xE71A88FC1CA0347CLL,8L}},{{0x494586F0DDE49BDALL,-8L}}},{{{0x4D2B49C788934BA7LL,0x2C62B346L}},{{0xF528969514C4754ALL,0x1B3826BCL}},{{0xE91BF3A08C533A9DLL,-1L}},{{0xE71A88FC1CA0347CLL,8L}},{{2L,1L}},{{0xCADEBA3FE0BE34E6LL,1L}}}},{{{{1L,0L}},{{0xF528969514C4754ALL,0x1B3826BCL}},{{-8L,0L}},{{8L,0x08190200L}},{{0xE71A88FC1CA0347CLL,8L}},{{1L,-1L}}},{{{0xCADEBA3FE0BE34E6LL,1L}},{{0x82BC353FDA3CCD9CLL,-9L}},{{0x86CCFD89AFE7670DLL,0x5DB1E344L}},{{1L,0L}},{{8L,0L}},{{0xA38F90603C690F1CLL,0xE6EE1648L}}}},{{{{0xDE5B823450267AACLL,-1L}},{{-8L,0L}},{{-1L,0x0B6EC3E8L}},{{0xE91BF3A08C533A9DLL,-1L}},{{0xE91BF3A08C533A9DLL,-1L}},{{-1L,0x0B6EC3E8L}}},{{{1L,0x6BB4594AL}},{{1L,0x6BB4594AL}},{{8L,0x08190200L}},{{0x82BC353FDA3CCD9CLL,-9L}},{{-1L,0x0B6EC3E8L}},{{0x1871A36315F1035ALL,0xF56564C8L}}}},{{{{0xEE92D2D4CAE694BDLL,0x6751E06EL}},{{0x1871A36315F1035ALL,0xF56564C8L}},{{0xD5100AA5BD061763LL,0x08977165L}},{{0xDA5780539E8B652BLL,0xE1256EB5L}},{{1L,0L}},{{8L,0x08190200L}}},{{{8L,0x08190200L}},{{0xEE92D2D4CAE694BDLL,0x6751E06EL}},{{0xD5100AA5BD061763LL,0x08977165L}},{{8L,0L}},{{1L,0x6BB4594AL}},{{0x1871A36315F1035ALL,0xF56564C8L}}}}};
static union U1 g_236[1] = {{{0xC4AB4C20C9E94124LL,0xA1B65507L}}};
static union U1 *g_235 = &g_236[0];
static uint8_t g_272 = 5UL;
static union U3 g_303 = {0x1C36L};
static uint32_t g_312[3][4] = {{0x8BA8CF15L,0x8BA8CF15L,0x8BA8CF15L,0x8BA8CF15L},{0x8BA8CF15L,0x8BA8CF15L,0x8BA8CF15L,0x8BA8CF15L},{0x8BA8CF15L,0x8BA8CF15L,0x8BA8CF15L,0x8BA8CF15L}};
static uint32_t *g_311 = &g_312[2][2];
static uint32_t g_325 = 18446744073709551615UL;
static uint8_t g_361 = 0xF1L;
static uint8_t *g_388[2] = {&g_272,&g_272};
static uint64_t *g_408 = &g_103;
static uint64_t **g_407 = &g_408;
static int16_t g_478 = 0xD05FL;
static uint8_t g_479[6] = {0x9BL,0x9BL,0x9BL,0x9BL,0x9BL,0x9BL};
static int16_t *g_495 = (void*)0;
static int16_t ** const g_494 = &g_495;
static int16_t ** const *g_493[3] = {&g_494,&g_494,&g_494};
static int16_t ** const **g_492 = &g_493[0];
static int16_t ** const ***g_491 = &g_492;
static uint64_t *g_558 = &g_107;
static uint64_t *g_559 = &g_103;
static uint64_t ** const g_557[6] = {&g_559,&g_559,&g_559,&g_559,&g_559,&g_559};
static uint64_t ** const *g_556 = &g_557[0];
static uint16_t g_577 = 3UL;
static union U3 *g_613[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static int32_t g_648 = 0x511E5E6EL;
static int64_t g_649 = 9L;
static uint16_t g_651 = 0x7E8FL;
static int16_t ** const ** const *g_655 = &g_492;
static uint16_t g_665 = 65526UL;
static const union U3 *g_675 = &g_303;
static const union U3 ** const g_674 = &g_675;
static const union U3 ** const *g_673 = &g_674;
static const union U3 ** const **g_672 = &g_673;
static int8_t g_679 = 0x6CL;
static const union U2 g_680 = {{1L,4L}};
static struct S0 g_690 = {1L,1L};
static struct S0 *g_689[7] = {&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74};
static int8_t g_702 = 0L;
static uint8_t g_703 = 1UL;
static uint8_t **g_819 = &g_388[1];
static union U1 **g_902 = (void*)0;
static union U1 ***g_901 = &g_902;
static int32_t g_957 = (-1L);
static int16_t g_958 = (-1L);
static int32_t g_960 = (-4L);
static uint32_t g_961 = 18446744073709551612UL;
static uint16_t g_1059 = 65534UL;
static const uint64_t ***g_1083 = (void*)0;
static const uint8_t *g_1141 = &g_479[2];
static const uint8_t **g_1140 = &g_1141;
static uint8_t ***g_1237 = &g_819;
static uint8_t ****g_1236 = &g_1237;
static union U1 ****g_1251[6] = {&g_901,&g_901,&g_901,&g_901,&g_901,&g_901};
static union U1 *****g_1250 = &g_1251[1];
static union U1 * const *g_1253 = &g_235;
static const int16_t g_1281 = (-1L);
static const int16_t *g_1283 = &g_958;
static const int16_t **g_1282[5] = {&g_1283,&g_1283,&g_1283,&g_1283,&g_1283};
static const int8_t *g_1309 = &g_12;
static const int8_t **g_1308 = &g_1309;
static uint32_t * const g_1361 = (void*)0;
static uint32_t * const *g_1360 = &g_1361;
static uint32_t *g_1370 = &g_325;
static int64_t g_1380[3] = {0xBFA7145902F6B390LL,0xBFA7145902F6B390LL,0xBFA7145902F6B390LL};
static int16_t g_1381 = 0x2181L;
static uint32_t g_1383 = 0xE5DABC33L;
static int8_t g_1409[3] = {0x76L,0x76L,0x76L};
static int8_t g_1459 = 0L;
static int16_t g_1460 = 0x4BB6L;
static uint64_t g_1461[7] = {0xC417212EDDB87674LL,0xC417212EDDB87674LL,0xC417212EDDB87674LL,0xC417212EDDB87674LL,0xC417212EDDB87674LL,0xC417212EDDB87674LL,0xC417212EDDB87674LL};
static uint64_t g_1469 = 0x65E059D09EE9981FLL;
static int32_t g_1502 = (-2L);
static union U3 **g_1508 = &g_613[0][2];
static union U3 ***g_1507 = &g_1508;
static union U3 ****g_1506 = &g_1507;
static int64_t g_1530 = 8L;
static uint16_t *g_1699 = (void*)0;
static uint16_t ** const g_1698 = &g_1699;
static int16_t g_1789 = 0x9C79L;
static uint8_t g_1877 = 7UL;
static uint16_t **g_1895 = (void*)0;



static const uint16_t  func_1(void);
static const int8_t ** func_6(uint16_t  p_7, int8_t ** p_8, int8_t ** p_9);
static int8_t ** func_13(const union U1  p_14, uint32_t  p_15, union U4  p_16, uint32_t  p_17);
static union U2  func_21(const int8_t  p_22, int64_t  p_23, const int8_t * const  p_24, uint64_t  p_25, const union U2  p_26);
static union U2  func_27(const uint64_t  p_28, int8_t  p_29, int32_t  p_30, union U2  p_31, int16_t  p_32);
static uint64_t  func_35(int8_t ** p_36, int16_t  p_37);
static int8_t ** func_38(int8_t ** p_39, int8_t  p_40, uint16_t  p_41, int32_t  p_42, int8_t * p_43);
static const union U1  func_50(int8_t * p_51, int8_t * p_52, union U1  p_53, int8_t  p_54, uint32_t  p_55);




static const uint16_t  func_1(void)
{ 
    const uint16_t l_3[5][1] = {{65527UL},{65535UL},{65527UL},{65535UL},{65527UL}};
    int32_t l_19 = (-7L);
    int32_t l_1379 = 0xF01F10FBL;
    int32_t l_1382 = 0x3DBCB5C5L;
    int8_t l_1406 = 0L;
    union U2 l_1423 = {{0xA0D0979B675EE585LL,0L}};
    union U4 *l_1437 = &g_20;
    union U4 **l_1436 = &l_1437;
    uint8_t l_1490[2];
    union U3 * const *l_1512 = &g_613[0][2];
    union U3 * const * const *l_1511 = &l_1512;
    union U3 * const * const **l_1510 = &l_1511;
    union U1 ** const *l_1528 = (void*)0;
    union U1 ** const **l_1527 = &l_1528;
    union U1 ** const ***l_1526 = &l_1527;
    const int32_t l_1561 = 6L;
    int16_t l_1613 = 1L;
    uint64_t l_1620 = 0x238F0845EDEFC2B2LL;
    int16_t **l_1669 = &g_495;
    int32_t l_1678 = (-1L);
    int32_t l_1680 = 0x2251AE20L;
    uint64_t l_1686 = 4UL;
    int32_t * const l_1687 = &g_69;
    uint64_t l_1753 = 1UL;
    struct S0 *l_1769 = (void*)0;
    uint64_t l_1794 = 18446744073709551606UL;
    int32_t l_1829[5][1][4] = {{{0xF826DF30L,(-1L),(-1L),0x2F6F40FCL}},{{(-1L),1L,(-9L),1L}},{{1L,(-1L),0xF826DF30L,1L}},{{0xF826DF30L,1L,0x2F6F40FCL,0x2F6F40FCL}},{{(-1L),(-1L),(-9L),(-1L)}}};
    struct S0 l_1856 = {5L,8L};
    uint8_t l_1861 = 0xEFL;
    int32_t l_1886 = 0L;
    int32_t *l_1896 = &l_1886;
    int32_t **l_1897[2][4] = {{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1490[i] = 0x4CL;
    if ((safe_unary_minus_func_int32_t_s(l_3[1][0])))
    { 
        uint16_t l_4[1][7] = {{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}};
        int32_t l_1377[6];
        uint32_t l_1407 = 18446744073709551607UL;
        struct S0 *l_1419[2];
        union U3 l_1420 = {0x1C18L};
        int32_t l_1442 = 0L;
        uint8_t l_1444 = 255UL;
        int32_t l_1458 = (-3L);
        union U1 ** const ***l_1529 = &l_1527;
        uint8_t **l_1539 = (void*)0;
        int8_t l_1541 = (-4L);
        int32_t *l_1563 = &l_1442;
        int64_t *l_1566 = &g_1380[1];
        uint64_t l_1591 = 1UL;
        uint64_t l_1597 = 0x29BB3BD43E602851LL;
        union U1 l_1602 = {{0x323E2D0410CDD831LL,-1L}};
        uint16_t l_1610 = 0x7BE9L;
        int32_t l_1619 = (-2L);
        int32_t l_1638 = 0x7B93FA2AL;
        union U1 l_1647 = {{0L,4L}};
        uint32_t l_1702 = 0UL;
        const int32_t l_1797[6] = {0L,(-1L),(-1L),0L,(-1L),(-1L)};
        union U3 ***l_1808[1];
        int16_t l_1827 = 0L;
        int32_t l_1830 = 2L;
        uint32_t l_1832 = 0x46A90A25L;
        uint8_t *l_1847 = (void*)0;
        uint8_t ** const l_1846[3][7] = {{&l_1847,&l_1847,&l_1847,&l_1847,&l_1847,&l_1847,&l_1847},{&l_1847,&l_1847,&l_1847,&l_1847,&l_1847,&l_1847,&l_1847},{&l_1847,&l_1847,&l_1847,&l_1847,&l_1847,&l_1847,&l_1847}};
        uint8_t ** const *l_1845 = &l_1846[0][1];
        uint8_t ** const **l_1844 = &l_1845;
        uint32_t l_1850 = 0UL;
        int16_t l_1860 = 3L;
        union U2 l_1872[7] = {{{0xFE86E16D54157AACLL,-3L}},{{0xFE86E16D54157AACLL,-3L}},{{0xFE86E16D54157AACLL,-3L}},{{0xFE86E16D54157AACLL,-3L}},{{0xFE86E16D54157AACLL,-3L}},{{0xFE86E16D54157AACLL,-3L}},{{0xFE86E16D54157AACLL,-3L}}};
        int32_t **l_1892[2];
        int i, j;
        for (i = 0; i < 6; i++)
            l_1377[i] = 0x69B9F9ABL;
        for (i = 0; i < 2; i++)
            l_1419[i] = &g_74;
        for (i = 0; i < 1; i++)
            l_1808[i] = &g_1508;
        for (i = 0; i < 2; i++)
            l_1892[i] = (void*)0;
        for (g_5[0] = 0; (g_5[0] <= 0); g_5[0] += 1)
        { 
            const int8_t ***l_1365 = &g_1308;
            int32_t l_1375 = 0L;
            int32_t l_1378 = 0xA93D51F0L;
            union U1 l_1391 = {{1L,2L}};
            int16_t ** const *l_1404 = &g_494;
            int32_t l_1443 = 0x7978D3B4L;
            uint8_t *l_1449 = &g_272;
            int32_t l_1465 = 0x41607F80L;
            uint8_t *****l_1492 = &g_1236;
            union U2 l_1500 = {{-1L,0xD1D1BF72L}};
        }
        if ((((*g_558)++) >= ((*l_1566) = 0x9B96A0476DCF753ELL)))
        { 
            uint32_t l_1579[2][6] = {{18446744073709551606UL,0xBE61BE11L,18446744073709551606UL,18446744073709551606UL,0xBE61BE11L,18446744073709551606UL},{18446744073709551606UL,0xBE61BE11L,18446744073709551606UL,18446744073709551606UL,0xBE61BE11L,18446744073709551606UL}};
            int32_t l_1581 = 0L;
            int32_t *l_1614 = &g_957;
            int32_t *l_1615 = (void*)0;
            int32_t *l_1616 = &g_960;
            int32_t *l_1617 = &l_1423.f2.f1;
            int32_t *l_1618[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_19,&g_69,&l_19,&g_69,&l_19,&g_69,&l_19},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_19,&g_69,&l_19,&g_69,&l_19,&g_69,&l_19}};
            const uint64_t l_1636[4][6][3] = {{{1UL,18446744073709551606UL,18446744073709551606UL},{0x1AFD14BF4C0FCEF0LL,18446744073709551615UL,0xF8EE9365A393CBBBLL},{1UL,18446744073709551615UL,1UL},{0xA834EA703ED8DD30LL,0x1AFD14BF4C0FCEF0LL,0xF8EE9365A393CBBBLL},{0xA4BE92220EDE47ABLL,0xA4BE92220EDE47ABLL,18446744073709551606UL},{0x6582D38FE6168754LL,0x1AFD14BF4C0FCEF0LL,0x1AFD14BF4C0FCEF0LL}},{{18446744073709551606UL,18446744073709551615UL,0UL},{0x6582D38FE6168754LL,18446744073709551615UL,0x6582D38FE6168754LL},{0xA4BE92220EDE47ABLL,18446744073709551606UL,0UL},{0xA834EA703ED8DD30LL,0xA834EA703ED8DD30LL,0x1AFD14BF4C0FCEF0LL},{1UL,18446744073709551606UL,18446744073709551606UL},{0x1AFD14BF4C0FCEF0LL,18446744073709551615UL,0xF8EE9365A393CBBBLL}},{{1UL,18446744073709551615UL,1UL},{0xA834EA703ED8DD30LL,0x1AFD14BF4C0FCEF0LL,0xF8EE9365A393CBBBLL},{0xA4BE92220EDE47ABLL,0xA4BE92220EDE47ABLL,18446744073709551606UL},{0x6582D38FE6168754LL,0x1AFD14BF4C0FCEF0LL,0x1AFD14BF4C0FCEF0LL},{18446744073709551606UL,18446744073709551615UL,0UL},{0x6582D38FE6168754LL,18446744073709551615UL,0x6582D38FE6168754LL}},{{0xA4BE92220EDE47ABLL,18446744073709551606UL,0UL},{0xA834EA703ED8DD30LL,0xA834EA703ED8DD30LL,0x1AFD14BF4C0FCEF0LL},{1UL,18446744073709551606UL,18446744073709551606UL},{0x1AFD14BF4C0FCEF0LL,18446744073709551615UL,0xF8EE9365A393CBBBLL},{1UL,18446744073709551615UL,1UL},{0xA834EA703ED8DD30LL,0x1AFD14BF4C0FCEF0LL,0xF8EE9365A393CBBBLL}}};
            union U3 l_1654 = {65535UL};
            union U1 **l_1655 = &g_235;
            uint64_t l_1681 = 0UL;
            int i, j, k;
            for (g_958 = 2; (g_958 == (-23)); g_958--)
            { 
                union U1 l_1574 = {{0L,0x3A948B0AL}};
                uint16_t *l_1580[2][2][1];
                uint8_t l_1594[5];
                int32_t l_1595 = (-9L);
                int32_t l_1596 = 0x2187E59EL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1580[i][j][k] = &g_303.f0;
                    }
                }
                for (i = 0; i < 5; i++)
                    l_1594[i] = 0x0FL;
                (*g_68) ^= (safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_s((!(g_303.f0 |= (((l_1574 , ((!(safe_rshift_func_uint16_t_u_s(((65535UL < (0x91L | (+(*g_408)))) , (l_1574.f0.f0 > ((*l_1566) ^= (((l_1579[1][1] = (((0x179743AEL >= (*g_311)) != (***g_1237)) != l_1490[0])) != (*l_1563)) != (*l_1563))))), 0))) <= (*g_311))) || (*l_1563)) <= l_1490[1]))), l_1490[0])) || (***g_556)) ^ (-10L)) ^ l_1581), 10));
                for (l_1458 = 6; (l_1458 < (-18)); l_1458--)
                { 
                    int32_t *l_1584 = &l_1423.f4;
                    int32_t *l_1585 = &g_144[2].f4;
                    int32_t *l_1586 = (void*)0;
                    int32_t *l_1587 = &l_1423.f2.f1;
                    int32_t *l_1588 = &g_5[0];
                    int32_t *l_1589 = &g_5[1];
                    int32_t *l_1590[7][4] = {{(void*)0,(void*)0,&g_648,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_648,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_648,(void*)0}};
                    int32_t l_1609 = 1L;
                    int i, j;
                    --l_1591;
                    l_1594[3] ^= ((*l_1585) = 0x6F3EE468L);
                    l_1597++;
                    (*g_68) = (safe_div_func_int16_t_s_s((l_1602 , 1L), ((l_1595 > ((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((**g_407) , (safe_mul_func_int16_t_s_s((((g_130[5] ^ (((0x4909L && (*l_1588)) || g_74.f0) > (*g_311))) > l_1574.f0.f1) & (-1L)), (-5L)))), (*l_1563))), l_1579[0][1])) < (**g_407))) , 65535UL)));
                    l_1610++;
                }
                if (l_1613)
                    continue;
            }
            ++l_1620;
            for (l_1444 = 0; (l_1444 == 11); l_1444 = safe_add_func_uint16_t_u_u(l_1444, 5))
            { 
                int32_t **l_1625[3][7][7] = {{{(void*)0,&l_1616,&l_1614,&l_1618[2][4],&l_1617,&l_1616,&l_1617},{&l_1563,&l_1615,&l_1615,&l_1563,(void*)0,&l_1615,&l_1617},{&l_1615,&l_1618[1][1],&l_1614,(void*)0,(void*)0,&l_1614,&l_1618[1][1]},{(void*)0,&l_1618[1][6],(void*)0,&l_1616,&l_1615,&l_1617,&l_1617},{&l_1616,&l_1615,(void*)0,&l_1615,&l_1616,&l_1616,&l_1617},{(void*)0,(void*)0,&g_68,&l_1563,&l_1615,&l_1563,&g_68},{&g_68,&g_68,&l_1617,&l_1616,&l_1616,&l_1615,(void*)0}},{{(void*)0,&l_1563,&l_1615,&l_1615,&l_1563,(void*)0,&l_1615},{&l_1614,&l_1617,&l_1563,&l_1618[1][1],&l_1616,&l_1616,&l_1618[1][1]},{&l_1616,&l_1618[3][3],&l_1616,&l_1618[1][6],&l_1615,&l_1615,(void*)0},{&l_1563,&l_1617,&l_1614,&l_1615,&l_1614,&l_1617,&l_1563},{&l_1615,&l_1563,(void*)0,&l_1615,&l_1617,&l_1615,&l_1617},{&l_1617,&g_68,&g_68,&l_1617,&l_1616,&l_1616,&l_1615},{&g_68,(void*)0,(void*)0,&l_1616,&l_1616,(void*)0,(void*)0}},{{&l_1616,&l_1563,&l_1614,(void*)0,&g_68,&l_1615,&l_1615},{&l_1615,&g_68,&l_1616,&g_68,&l_1615,&l_1563,&l_1617},{(void*)0,&l_1616,&l_1563,(void*)0,&l_1618[1][1],(void*)0,&l_1563},{&l_1617,&l_1617,&l_1615,&l_1616,(void*)0,&l_1618[1][6],(void*)0},{(void*)0,(void*)0,&l_1617,&l_1617,(void*)0,(void*)0,&l_1618[1][1]},{&l_1615,&l_1615,&g_68,&l_1615,(void*)0,(void*)0,&l_1615},{&l_1616,&l_1618[2][4],&l_1616,&l_1615,&l_1618[1][1],&l_1614,(void*)0}}};
                uint16_t l_1633 = 65535UL;
                uint32_t l_1637 = 0UL;
                int i, j, k;
                g_68 = &l_1377[4];
                (*l_1563) = (safe_mod_func_uint8_t_u_u(((**g_655) == (void*)0), (+(((safe_sub_func_int32_t_s_s(((*g_68) = ((safe_sub_func_int64_t_s_s(((((g_236[0].f0.f0 && l_1633) >= (((safe_mod_func_int32_t_s_s(0x65874F90L, (l_1636[0][0][2] , (*g_68)))) > (**g_1308)) | 0xB16BL)) || 2L) & l_1637), l_19)) > l_1490[1])), (*g_311))) <= l_1638) || l_1613))));
                for (l_1637 = 0; (l_1637 <= 5); l_1637 += 1)
                { 
                    return g_1461[0];
                }
                for (l_1541 = 0; (l_1541 == (-15)); l_1541 = safe_sub_func_uint32_t_u_u(l_1541, 7))
                { 
                    (*g_68) |= (((safe_lshift_func_int8_t_s_u(((*g_558) > ((((g_665 = (((*l_1563) && (safe_lshift_func_int8_t_s_s((*l_1563), (safe_add_func_uint32_t_u_u((*g_311), (*l_1563)))))) , (*l_1563))) ^ 0UL) != l_1490[0]) , (*g_559))), 0)) > (*l_1563)) | g_5[1]);
                }
            }
            (*l_1616) ^= (l_1647 , (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((l_1654 , ((l_1655 == (***g_1250)) != (*g_1309))) <= (safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((~(safe_div_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u((*g_558), (((safe_lshift_func_uint8_t_u_u((*l_1563), (*l_1563))) == (-1L)) ^ g_325))) >= 0xFE9EL), l_1620))), l_1561)) < 0x4BL), l_1561))), (*g_1309))), (*l_1563))), g_272)));
            for (g_1059 = (-29); (g_1059 == 1); g_1059 = safe_add_func_int64_t_s_s(g_1059, 4))
            { 
                uint64_t l_1671 = 1UL;
                int32_t *l_1673[2];
                int32_t l_1679 = 1L;
                union U3 *l_1691[1][1][3];
                union U1 l_1692[5] = {{{0xA7FC130476F14ECCLL,0x5BA0B859L}},{{0xA7FC130476F14ECCLL,0x5BA0B859L}},{{0xA7FC130476F14ECCLL,0x5BA0B859L}},{{0xA7FC130476F14ECCLL,0x5BA0B859L}},{{0xA7FC130476F14ECCLL,0x5BA0B859L}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1673[i] = (void*)0;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1691[i][j][k] = (void*)0;
                    }
                }
                if ((*g_68))
                { 
                    int32_t l_1670[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1670[i] = 0L;
                    (*l_1616) = ((void*)0 != l_1669);
                    g_68 = &g_5[1];
                    if (l_1670[1])
                        break;
                    l_1671 = ((*l_1563) <= (*g_311));
                }
                else
                { 
                    int32_t **l_1672 = &g_68;
                    int32_t l_1674 = (-1L);
                    int32_t l_1675 = (-4L);
                    int32_t l_1676 = 0x58EF263FL;
                    int32_t l_1677[3][7] = {{0x7D92D73CL,0x7D92D73CL,0x7D92D73CL,0x7D92D73CL,0x7D92D73CL,0x7D92D73CL,0x7D92D73CL},{0x6FDCE21BL,0x6FDCE21BL,0x6FDCE21BL,0x6FDCE21BL,0x6FDCE21BL,0x6FDCE21BL,0x6FDCE21BL},{0x7D92D73CL,0x7D92D73CL,0x7D92D73CL,0x7D92D73CL,0x7D92D73CL,0x7D92D73CL,0x7D92D73CL}};
                    const struct S0 *l_1685[1];
                    const struct S0 **l_1684 = &l_1685[0];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1685[i] = &g_236[0].f0;
                    l_1673[0] = ((*l_1672) = &l_1382);
                    --l_1681;
                    (*l_1684) = (void*)0;
                    if (l_1686)
                        continue;
                }
                if (((void*)0 != &g_10))
                { 
                    int32_t **l_1688[5] = {&l_1563,&l_1563,&l_1563,&l_1563,&l_1563};
                    int32_t **l_1689 = &l_1617;
                    union U3 *l_1690 = &l_1420;
                    const int32_t l_1695 = (-8L);
                    uint16_t **l_1701[7] = {&g_1699,(void*)0,&g_1699,&g_1699,(void*)0,&g_1699,&g_1699};
                    uint16_t ***l_1700 = &l_1701[0];
                    int i;
                    (*l_1689) = l_1687;
                    (*l_1617) = (((((*g_1508) = l_1690) != l_1691[0][0][0]) , func_50((*g_10), (*g_10), l_1692[3], ((safe_lshift_func_int16_t_s_s(l_1695, (safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_uint8_t_u(((void*)0 != (*g_407)))))))) & (*g_68)), (*l_1687))) , (-1L));
                    (*l_1700) = g_1698;
                    l_1702++;
                    (*l_1614) ^= (*g_68);
                }
                else
                { 
                    (*l_1617) = ((void*)0 == l_1687);
                }
                (***g_672) = ((***g_1506) = (*g_1508));
            }
        }
        else
        { 
            uint64_t l_1713 = 1UL;
            uint32_t *l_1752 = &g_961;
            int32_t l_1754 = 0xA695851DL;
            struct S0 *l_1770 = (void*)0;
            int32_t l_1773 = 0xF165B507L;
            int8_t *l_1778 = (void*)0;
            int8_t *l_1779 = &g_702;
            uint32_t l_1785 = 0x8A7A56A4L;
            int32_t l_1790 = 0xF07E21A0L;
            int32_t l_1791 = 0x8C4B7362L;
            int32_t l_1792 = 0L;
            int32_t l_1793 = 0L;
            int32_t l_1821 = (-5L);
            int32_t l_1822[7][3][7] = {{{(-10L),0x72500DB7L,0xE9C2C30AL,0L,(-7L),0x97DF65E6L,(-7L)},{0L,0L,0L,0L,(-2L),0x02636B3AL,0xF592DBE3L},{(-1L),(-4L),1L,0x7DFF0300L,(-4L),6L,0L}},{{(-7L),0xB53A4347L,0x97DF65E6L,0x72500DB7L,0x59E7E69DL,0x97DF65E6L,0xF592DBE3L},{9L,0L,(-1L),(-7L),0x7DFF0300L,0x7DFF0300L,(-7L)},{(-1L),0L,(-1L),(-2L),0xB53A4347L,0x1B5F51ABL,(-4L)}},{{0L,(-2L),0x72500DB7L,0x7DFF0300L,0L,(-10L),0x02636B3AL},{(-1L),(-4L),(-9L),6L,8L,0xE9C2C30AL,(-1L)},{0x44BEBA1FL,6L,(-4L),8L,0x02636B3AL,8L,(-4L)}},{{6L,6L,(-10L),0L,(-2L),0x72500DB7L,0x7DFF0300L},{0L,(-4L),0x97DF65E6L,0L,0x912EC133L,(-10L),0L},{(-8L),(-2L),0x912EC133L,8L,(-2L),0x44BEBA1FL,0x97DF65E6L}},{{0x7DFF0300L,0x1B5F51ABL,0x72500DB7L,0x02636B3AL,0x02636B3AL,0x72500DB7L,0x1B5F51ABL},{0x7DFF0300L,0x97DF65E6L,0x44BEBA1FL,(-2L),8L,0x912EC133L,(-2L)},{(-8L),0L,(-10L),0x912EC133L,0L,0x97DF65E6L,(-4L)}},{{0L,0x7DFF0300L,0x72500DB7L,(-2L),0L,(-10L),6L},{6L,(-4L),8L,0x02636B3AL,8L,(-4L),6L},{0x44BEBA1FL,(-1L),0xE9C2C30AL,8L,6L,(-9L),(-4L)}},{{(-1L),0x02636B3AL,(-10L),0L,0x7DFF0300L,0x72500DB7L,(-2L)},{0L,(-4L),0xE9C2C30AL,0L,0x912EC133L,(-8L),0x1B5F51ABL},{(-8L),1L,8L,8L,1L,(-8L),0x97DF65E6L}}};
            int32_t *l_1857 = &l_1829[1][0][2];
            int32_t *l_1858 = &g_5[1];
            int32_t *l_1859[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1859[i] = &l_1790;
            if (((*g_68) = 0xE7301423L))
            { 
                int32_t **l_1705 = &g_68;
                union U1 ****l_1712[4][3][4] = {{{&g_901,&g_901,&g_901,&g_901},{&g_901,&g_901,&g_901,&g_901},{&g_901,&g_901,&g_901,&g_901}},{{&g_901,&g_901,&g_901,&g_901},{&g_901,&g_901,&g_901,&g_901},{&g_901,&g_901,&g_901,&g_901}},{{&g_901,&g_901,&g_901,&g_901},{&g_901,&g_901,&g_901,&g_901},{&g_901,&g_901,&g_901,&g_901}},{{&g_901,&g_901,&g_901,&g_901},{&g_901,&g_901,&g_901,&g_901},{&g_901,&g_901,&g_901,&g_901}}};
                int i, j, k;
                (*l_1705) = &g_1502;
                for (l_1379 = 4; (l_1379 >= 0); l_1379 -= 1)
                { 
                    int32_t l_1722[4];
                    int32_t *l_1723 = &g_960;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1722[i] = 0x73A42802L;
                    (*l_1723) &= (func_21((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((-2L), (safe_add_func_uint64_t_u_u(((((*g_1250) = (*g_1250)) != l_1712[0][0][0]) && l_1713), (safe_div_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(((((*g_311)++) > (safe_unary_minus_func_int8_t_s((+(*g_68))))) <= ((-5L) ^ (((*l_1563) < l_1722[2]) <= 65535UL))), 5)) == (*l_1687)) && (**l_1705)), (**g_819))))))), l_1713)), (*l_1687), (*g_1308), l_1713, g_144[0]) , (-6L));
                    return g_18.f0.f0;
                }
            }
            else
            { 
                int64_t l_1733 = 0xF9734DB8F254B195LL;
                uint16_t *l_1758 = &g_1059;
                union U1 *l_1774 = &g_236[0];
                if ((*g_68))
                { 
                    union U2 *l_1725 = &g_144[1];
                    union U2 **l_1724 = &l_1725;
                    int32_t l_1726 = (-1L);
                    (*l_1724) = &g_144[2];
                    l_1726 ^= (*g_68);
                }
                else
                { 
                    uint8_t *l_1738 = &l_1490[0];
                    int32_t l_1739 = (-6L);
                    int32_t *l_1740[4];
                    struct S0 l_1741 = {0x9487E398F38667A1LL,0L};
                    int8_t *l_1745[4][5][6] = {{{&g_1409[2],&g_1409[2],&g_1459,&g_679,&g_12,&g_12},{&g_1409[2],&g_702,&g_1409[0],&l_1541,&g_1409[2],&g_1459},{&l_1406,&g_1409[2],&g_1409[0],&g_12,&g_1409[2],&g_12},{&g_12,&g_12,&g_1459,&g_1459,&g_1409[0],(void*)0},{&g_1459,&g_1409[0],(void*)0,&g_12,&g_702,&g_1409[2]}},{{&g_702,&l_1406,&l_1541,&g_1409[2],&g_679,&g_12},{&g_679,&g_12,&g_1409[2],&g_702,&g_1409[2],&g_12},{&g_12,&l_1541,&g_1409[2],&l_1541,&g_1409[1],&g_1409[1]},{&g_1409[2],&l_1541,&l_1406,&g_702,(void*)0,&g_679},{&g_12,&l_1541,(void*)0,&g_702,&g_1409[1],&g_1459}},{{&l_1541,&l_1541,&g_1409[2],&g_1409[2],&g_1409[2],&l_1406},{&g_12,&g_12,&g_12,&l_1541,&g_1459,&g_1409[2]},{&g_702,&g_1409[2],&l_1541,&g_679,&g_1409[2],&g_702},{&l_1541,&g_702,&g_1409[0],&g_1409[0],&g_702,&l_1541},{&g_12,&g_679,&g_1409[2],&l_1541,&g_1459,&g_12}},{{&g_1409[1],&g_702,&g_12,&l_1541,&g_1409[2],&g_679},{&g_1409[1],&l_1406,&l_1541,&l_1541,&l_1541,&g_702},{&g_12,&g_1459,&g_1459,&g_1409[0],(void*)0,&g_12},{&l_1541,&g_702,&g_1409[2],&g_679,&g_679,&g_702},{&g_702,&g_12,&g_12,&l_1541,&g_679,&l_1541}}};
                    int8_t *l_1746 = (void*)0;
                    int8_t *l_1747 = (void*)0;
                    int8_t *l_1748 = &l_1406;
                    int8_t *l_1749 = &l_1423.f1;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1740[i] = &l_1377[4];
                    l_1377[2] ^= (safe_mod_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_1733, l_1733)), (*l_1687))) <= ((safe_mul_func_int8_t_s_s(l_1733, ((safe_sub_func_uint8_t_u_u(((*l_1738) = ((****g_1236) ^= (0x8D19E4FFL == (*g_68)))), (((l_1713 >= g_1281) == 1UL) > l_1739))) ^ l_1733))) == (*l_1687))) <= (*l_1563)), (*l_1563)));
lbl_1755:
                    l_1754 |= (3L > ((l_1741 , ((safe_add_func_int16_t_s_s(((*l_1563) >= (func_21(((*l_1749) = ((*l_1748) &= (((*g_311) |= ((*l_1563) & (~(*l_1687)))) == 0L))), ((safe_lshift_func_int16_t_s_u((l_1752 != (void*)0), (*l_1563))) >= 0x68053C48AF356C1CLL), &l_1541, l_1753, g_680) , (-2L))), 0x1BCCL)) , l_1733)) | (*l_1687)));
                    (*l_1563) = (*g_68);
                    if (l_1739)
                        goto lbl_1755;
                }
                (*l_1563) ^= (safe_sub_func_int8_t_s_s((((--(*l_1758)) | l_1733) && (((&g_1361 != (void*)0) >= (safe_lshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s((((*l_1566) = ((*g_199) == (l_1770 = l_1769))) > (safe_sub_func_uint16_t_u_u(((*g_1308) == (*g_1308)), l_1773))), 0x756AL)) , 1UL) & 0UL), l_1733))) > 0xE020A92FL)), (*l_1687)));
                l_1774 = l_1774;
            }
            if ((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(((*l_1779) = (**g_1308)))), 3)))
            { 
                int32_t *l_1780 = &g_957;
                int32_t *l_1781 = &l_1377[3];
                int32_t *l_1782 = &l_1423.f4;
                int32_t *l_1783 = &g_690.f1;
                int32_t *l_1784[3][2] = {{&l_1377[3],&l_1377[3]},{&l_1678,&l_1377[3]},{&l_1377[3],&l_1678}};
                int32_t l_1788[7][3] = {{0L,0L,7L},{(-5L),(-6L),(-5L)},{0L,7L,7L},{0xDB2D5CA0L,(-6L),0xDB2D5CA0L},{0L,0L,7L},{(-5L),(-6L),(-5L)},{0L,7L,7L}};
                int i, j;
                --l_1785;
                --l_1794;
            }
            else
            { 
                return l_1797[4];
            }
            for (l_19 = 17; (l_19 > 18); ++l_19)
            { 
                int16_t l_1807 = 7L;
                int32_t l_1820 = 0xB088B60AL;
                int32_t l_1823 = (-1L);
                int32_t l_1824 = 0x5EDA492CL;
                int32_t l_1825 = 0x304337D2L;
                int32_t l_1826 = 1L;
                int32_t l_1831 = 0x64C23C50L;
                int32_t *l_1849[4][6] = {{&g_957,&g_957,(void*)0,&l_1829[4][0][1],(void*)0,&g_957},{(void*)0,&l_1826,&l_1829[4][0][1],&l_1829[4][0][1],&l_1826,(void*)0},{&g_957,(void*)0,&l_1829[4][0][1],(void*)0,&g_957,&g_957},{&l_1377[4],(void*)0,(void*)0,&l_1377[4],&l_1826,&l_1377[4]}};
                int i, j;
                for (g_478 = 0; (g_478 <= 2); g_478 += 1)
                { 
                    int i, j;
                    return g_312[g_478][(g_478 + 1)];
                }
                if (((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((!((****g_1236) = (g_20 , (safe_lshift_func_uint16_t_u_u((*l_1687), 13))))), l_1807)), ((func_50((*g_10), &l_1541, (**g_1253), (*g_1309), (*l_1563)) , (void*)0) != l_1808[0]))) <= (*l_1563)))
                { 
                    int32_t *l_1809 = &g_144[2].f0.f1;
                    int32_t *l_1810 = &g_144[2].f4;
                    int32_t l_1811 = 0x49EA6961L;
                    int32_t *l_1812 = &l_1811;
                    int32_t *l_1813 = &l_1754;
                    int32_t *l_1814 = &g_74.f1;
                    int32_t *l_1815 = &l_1754;
                    int32_t l_1816[1];
                    int32_t *l_1817 = &g_74.f1;
                    int32_t *l_1818 = &l_1379;
                    int32_t *l_1819[2][7][6] = {{{&g_648,&l_1382,&l_1816[0],&l_1754,&l_1754,&l_1816[0]},{(void*)0,(void*)0,&g_5[0],&g_1502,&l_1754,&l_1790},{&l_1754,&l_1382,&l_1377[1],&g_1502,&l_1382,&g_5[0]},{(void*)0,&l_1754,&l_1377[1],&l_1754,(void*)0,&l_1790},{&g_648,&l_1754,&g_5[0],&g_648,&l_1382,&l_1816[0]},{&g_648,&l_1382,&l_1816[0],&l_1754,&l_1754,&l_1816[0]},{(void*)0,(void*)0,&g_5[0],&g_1502,&l_1754,&l_1790}},{{&l_1754,&l_1382,&l_1377[1],&g_1502,&l_1382,&g_5[0]},{(void*)0,&l_1754,&l_1377[1],&l_1754,(void*)0,&l_1790},{&g_648,&l_1754,&g_5[0],&l_1816[0],&l_1816[0],&g_1502},{&l_1816[0],&l_1816[0],&g_1502,&l_1680,&l_1680,&g_1502},{&g_960,&g_960,&g_648,&l_1811,&l_1680,&l_1754},{&l_1680,&l_1816[0],&l_1382,&l_1811,&l_1816[0],&g_648},{&g_960,&l_1680,&l_1382,&l_1680,&g_960,&l_1754}}};
                    int32_t l_1828 = (-4L);
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1816[i] = 0L;
                    l_1832++;
                    l_1819[1][2][3] = &l_1826;
                }
                else
                { 
                    struct S0 **l_1848[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    (*g_68) &= ((safe_mul_func_uint16_t_u_u((*l_1563), (safe_add_func_uint32_t_u_u(1UL, (((safe_mul_func_int16_t_s_s((!(0L && (safe_div_func_uint32_t_u_u(l_1826, 0xC3729905L)))), ((&g_1237 == (l_1844 = (void*)0)) ^ (**g_407)))) || (**g_1140)) , l_1826))))) & (*g_408));
                    l_1419[0] = l_1419[0];
                }
                l_1850++;
                g_144[2].f0.f1 ^= (((*l_1563) = (+((((safe_sub_func_int32_t_s_s((*l_1563), (*g_68))) || 7UL) && ((*l_1563) <= (((l_1856 , &g_1251[1]) == &l_1527) & (*g_68)))) & 255UL))) ^ 0xB3L);
            }
            l_1861++;
            (*l_1563) &= (*g_68);
        }
        if ((func_50(&l_1541, (*g_10), (*g_235), (*l_1563), ((safe_mod_func_int64_t_s_s((((***g_1237) & (safe_rshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((((*l_1566) = (safe_add_func_uint16_t_u_u(((l_1872[1] , (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(0xFC70B210B670E9A4LL, (*l_1563))), (*g_1309)))) ^ (*l_1687)), (*l_1687)))) && (-1L)), 0x9E64CDCBED0355BFLL)), 3))) < g_1877), (*l_1563))) != 0x754C04A9EB128A04LL)) , (*g_68)))
        { 
            const union U1 l_1880 = {{1L,0x2A0A0687L}};
            uint64_t *l_1881 = (void*)0;
            uint64_t *l_1882 = &g_107;
            uint64_t *l_1883 = (void*)0;
            uint64_t *l_1884[1];
            uint64_t *l_1885 = &l_1620;
            union U2 l_1887 = {{0xECACDE434B17C965LL,0x516F8E87L}};
            int i;
            for (i = 0; i < 1; i++)
                l_1884[i] = &l_1597;
            (*g_68) &= ((*l_1687) = 0x73A42F89L);
            (*l_1563) = ((((safe_mul_func_uint8_t_u_u(0x02L, ((l_1872[4] , (l_1880 , l_1887)) , (**g_819)))) | 3L) & (*g_311)) > (*l_1563));
            for (l_1407 = 26; (l_1407 != 41); ++l_1407)
            { 
                const int16_t l_1890[1][2] = {{(-3L),(-3L)}};
                int i, j;
                return l_1890[0][1];
            }
        }
        else
        { 
            const uint64_t l_1891[3][2][1] = {{{0xA9D973F42457A510LL},{0UL}},{{0xA9D973F42457A510LL},{0UL}},{{0xA9D973F42457A510LL},{0UL}}};
            int i, j, k;
            return l_1891[1][0][0];
        }
        g_68 = (void*)0;
    }
    else
    { 
        uint16_t **l_1894 = (void*)0;
        uint16_t ***l_1893 = &l_1894;
        g_1895 = ((*l_1893) = (void*)0);
    }
    g_68 = l_1896;
    return (*l_1687);
}



static const int8_t ** func_6(uint16_t  p_7, int8_t ** p_8, int8_t ** p_9)
{ 
    union U3 *l_1262 = (void*)0;
    uint64_t *l_1267 = (void*)0;
    union U1 l_1268[3][6] = {{{{0L,-1L}},{{0x25DB5D86A5C14006LL,0x2F0E4CF2L}},{{0L,-1L}},{{0x25DB5D86A5C14006LL,0x2F0E4CF2L}},{{0L,-1L}},{{0x25DB5D86A5C14006LL,0x2F0E4CF2L}}},{{{0L,-1L}},{{0x25DB5D86A5C14006LL,0x2F0E4CF2L}},{{0L,-1L}},{{0x25DB5D86A5C14006LL,0x2F0E4CF2L}},{{0L,-1L}},{{0x25DB5D86A5C14006LL,0x2F0E4CF2L}}},{{{0L,-1L}},{{0x25DB5D86A5C14006LL,0x2F0E4CF2L}},{{0L,-1L}},{{0x25DB5D86A5C14006LL,0x2F0E4CF2L}},{{0L,-1L}},{{0x25DB5D86A5C14006LL,0x2F0E4CF2L}}}};
    const int8_t **l_1288 = (void*)0;
    int32_t l_1292 = 1L;
    int8_t *l_1297 = &g_12;
    int32_t l_1316[3];
    uint32_t l_1349 = 18446744073709551608UL;
    int32_t l_1350[3];
    uint32_t *l_1363 = &l_1349;
    uint32_t **l_1362[4];
    int i, j;
    for (i = 0; i < 3; i++)
        l_1316[i] = 0x61DB1491L;
    for (i = 0; i < 3; i++)
        l_1350[i] = (-1L);
    for (i = 0; i < 4; i++)
        l_1362[i] = &l_1363;
    if ((safe_lshift_func_uint8_t_u_u(1UL, 1)))
    { 
lbl_1284:
        (**g_673) = l_1262;
    }
    else
    { 
        int32_t l_1265 = 0xE0B30654L;
        const int16_t *l_1280[1];
        const int16_t **l_1279 = &l_1280[0];
        const int8_t *l_1287 = (void*)0;
        const int8_t **l_1286 = &l_1287;
        union U1 l_1301 = {{0L,8L}};
        const int8_t **l_1319[2][3][2] = {{{&g_1309,&g_1309},{&g_1309,&g_1309},{&g_1309,&g_1309}},{{&g_1309,&g_1309},{&g_1309,&g_1309},{&g_1309,&g_1309}}};
        int32_t l_1335 = 0xBE20F6F8L;
        int16_t l_1346 = (-7L);
        int64_t l_1353 = 0x0106ABD9176CCA7ALL;
        struct S0 *l_1364 = &g_690;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1280[i] = &g_1281;
lbl_1307:
        for (g_361 = (-24); (g_361 < 12); g_361++)
        { 
            int8_t l_1266 = 0x42L;
            int32_t *l_1293 = (void*)0;
            int32_t *l_1294 = &l_1292;
            if (((((**g_556) = (**g_556)) == (l_1265 , (l_1266 , l_1267))) && (l_1268[2][0] , (l_1265 == (((((**g_407)--) >= (((((safe_mul_func_int8_t_s_s(0x81L, l_1266)) , p_7) != l_1268[2][0].f0.f0) || p_7) == g_20.f0)) >= 0x8DCB4CB6L) && 0xADDEFC70L)))))
            { 
                uint32_t l_1289 = 8UL;
                if ((~p_7))
                { 
                    const int16_t *l_1277 = &g_130[2];
                    const int16_t **l_1276 = &l_1277;
                    const int16_t ***l_1278[6];
                    union U1 **l_1285 = &g_235;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1278[i] = &l_1276;
                    g_1282[2] = (l_1279 = l_1276);
                    if (g_20.f0)
                        goto lbl_1284;
                    (*l_1285) = (*g_1253);
                    return l_1288;
                }
                else
                { 
                    l_1289--;
                }
                return l_1288;
            }
            else
            { 
                l_1292 |= 0xEE2FF5DEL;
            }
            if (g_680.f0.f1)
                break;
            (*l_1294) ^= (&g_20 != (void*)0);
        }
        for (g_20.f2 = 1; (g_20.f2 > 29); g_20.f2++)
        { 
            int8_t * const *l_1298 = &g_11[1][1];
            int8_t ***l_1302 = &g_10;
            struct S0 *l_1310 = &g_690;
            int32_t l_1317 = (-3L);
            uint16_t *l_1327 = &g_665;
            int32_t *l_1334[4];
            uint64_t l_1347 = 0x947B8B62C45EA8F2LL;
            int16_t *l_1348[5][3] = {{&g_958,&g_958,&g_958},{(void*)0,(void*)0,(void*)0},{&g_958,&g_958,&g_958},{(void*)0,(void*)0,(void*)0},{&g_958,&g_958,&g_958}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_1334[i] = &g_957;
            if ((((*l_1302) = ((l_1301 , l_1301.f0) , &l_1297)) != &g_11[1][1]))
            { 
                for (g_325 = 0; (g_325 <= 5); g_325 += 1)
                { 
                    if (p_7)
                        goto lbl_1284;
                }
            }
            else
            { 
                union U1 ** const **l_1303 = (void*)0;
                union U1 ** const ***l_1304 = &l_1303;
                int16_t ****l_1315 = &g_169[3];
                int32_t l_1318 = 1L;
                const int8_t **l_1320 = &l_1287;
                (*l_1304) = l_1303;
                for (g_577 = 14; (g_577 > 48); g_577 = safe_add_func_uint8_t_u_u(g_577, 2))
                { 
                    if (g_361)
                        goto lbl_1307;
                    if (p_7)
                        break;
                    return g_1308;
                }
                if ((((&g_74 == l_1310) >= ((65535UL & (safe_mul_func_uint8_t_u_u((((void*)0 == (**g_673)) && ((**g_407) = (l_1315 != l_1315))), p_7))) < (**g_819))) != l_1316[2]))
                { 
                    g_690.f1 |= l_1317;
                    if (l_1318)
                        break;
                }
                else
                { 
                    if (g_103)
                        goto lbl_1284;
                    return l_1319[1][2][0];
                }
                return &g_1309;
            }
            l_1350[0] &= ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(((*l_1327)--), 4)), ((safe_add_func_int32_t_s_s(((safe_div_func_int32_t_s_s((l_1335 = l_1268[2][0].f0.f0), (safe_mod_func_int8_t_s_s(((l_1349 = (safe_sub_func_int32_t_s_s((l_1292 = (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((**g_1308), (&g_10 == &g_10))), ((((safe_mul_func_int8_t_s_s((0UL & l_1346), (l_1346 != p_7))) != l_1301.f0.f1) == 1L) == 0x3385L)))), l_1347))) < 0xA47AL), l_1268[2][0].f0.f0)))) == p_7), g_690.f1)) ^ 0UL))) == 0x62L), 254UL)) , l_1268[2][0].f0.f1);
            g_74.f1 ^= (safe_mod_func_uint16_t_u_u(0x1638L, p_7));
        }
        l_1292 = (((l_1350[2] = l_1353) > (safe_div_func_uint32_t_u_u((l_1301.f0.f1 && (safe_mul_func_uint8_t_u_u(p_7, ((safe_add_func_uint16_t_u_u(p_7, (g_1360 != (((18446744073709551612UL || l_1335) ^ p_7) , l_1362[3])))) > p_7)))), l_1265))) , p_7);
        l_1364 = l_1364;
    }
    return l_1288;
}



static int8_t ** func_13(const union U1  p_14, uint32_t  p_15, union U4  p_16, uint32_t  p_17)
{ 
    int8_t **l_44 = &g_11[2][1];
    uint8_t l_45 = 0xBAL;
    union U2 l_602 = {{0xF08302F1D8A5A8DELL,0L}};
    uint8_t l_677 = 0xFBL;
    const int8_t * const l_678 = &g_679;
    int32_t l_836 = 0xC68DBE59L;
    int32_t l_841 = (-2L);
    union U3 l_849[5][3][4] = {{{{6UL},{0x486BL},{1UL},{0x486BL}},{{0UL},{0x3580L},{0x0ED8L},{1UL}},{{0x486BL},{0x3580L},{0x3580L},{0x486BL}}},{{{0x3580L},{0x486BL},{0UL},{6UL}},{{0x3580L},{0UL},{0x3580L},{0x0ED8L}},{{0x486BL},{6UL},{0x0ED8L},{0x0ED8L}}},{{{0UL},{0UL},{1UL},{6UL}},{{6UL},{0x486BL},{1UL},{0x486BL}},{{0UL},{0x3580L},{0x0ED8L},{1UL}}},{{{0x486BL},{0x3580L},{0x3580L},{0x486BL}},{{0x3580L},{0x486BL},{0UL},{6UL}},{{0x3580L},{0UL},{0x3580L},{0x0ED8L}}},{{{0x486BL},{6UL},{0x0ED8L},{0x0ED8L}},{{0UL},{0UL},{1UL},{6UL}},{{6UL},{0x486BL},{1UL},{0x486BL}}}};
    int64_t l_956 = 0L;
    int16_t ****l_980 = &g_169[0];
    int16_t *****l_979[4] = {&l_980,&l_980,&l_980,&l_980};
    uint8_t l_1014[4][4][2] = {{{9UL,0x16L},{0x42L,0x42L},{0x16L,9UL},{0UL,9UL}},{{0x16L,0x42L},{0x42L,0x16L},{9UL,0UL},{9UL,0x16L}},{{0x42L,0x42L},{0x16L,9UL},{0UL,9UL},{0x16L,0x42L}},{{0x42L,0x16L},{9UL,0UL},{9UL,0x16L},{0x42L,0x42L}}};
    int64_t l_1027 = 2L;
    uint8_t **l_1066 = &g_388[1];
    uint32_t *l_1104 = &g_325;
    union U3 l_1116 = {0x2197L};
    const int64_t l_1128 = (-1L);
    uint32_t l_1195 = 0UL;
    int64_t *l_1198 = &l_1027;
    int64_t **l_1197 = &l_1198;
    uint16_t l_1199[3];
    uint16_t l_1238 = 0x81CBL;
    uint16_t l_1257 = 3UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1199[i] = 65527UL;
    g_690.f1 |= ((g_5[0] == (0UL >= (func_21(((func_27(((*g_559) = (((*g_558) = ((safe_mul_func_uint16_t_u_u(1UL, g_5[0])) , func_35(func_38(l_44, l_45, p_15, g_20.f0, (*l_44)), p_16.f0))) || 0xD2BBBAC5095AC927LL)), g_236[0].f0.f0, g_236[0].f0.f0, l_602, p_14.f0.f1) , g_144[2]) , 0L), l_677, l_678, p_15, g_680) , (*g_311)))) == p_14.f0.f1);
    if ((((safe_mul_func_int8_t_s_s(((+l_836) >= (l_602.f4 = (-1L))), (safe_lshift_func_int8_t_s_u((l_841 = (safe_rshift_func_int16_t_s_u((p_17 || p_16.f0), 15))), 5)))) , ((p_17 = (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((!p_16.f0), (l_849[0][2][2] , (safe_rshift_func_int16_t_s_s(l_602.f1, 5))))), p_14.f0.f0)), 0L))) == 4294967295UL)) ^ 0x2FF2L))
    { 
        union U3 * const l_852 = &l_849[0][2][2];
        union U3 **l_853[7][7][1] = {{{&g_613[0][2]},{(void*)0},{&g_613[0][2]},{(void*)0},{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][2]}},{{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][5]},{&g_613[0][2]},{(void*)0},{&g_613[0][2]},{&g_613[0][2]}},{{(void*)0},{&g_613[0][2]},{&g_613[0][1]},{&g_613[0][3]},{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][3]}},{{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][3]},{&g_613[0][2]}},{{&g_613[0][2]},{&g_613[0][3]},{&g_613[0][1]},{&g_613[0][2]},{(void*)0},{&g_613[0][2]},{&g_613[0][2]}},{{(void*)0},{&g_613[0][2]},{&g_613[0][1]},{&g_613[0][3]},{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][3]}},{{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][2]},{&g_613[0][3]},{&g_613[0][2]}}};
        union U3 **l_854 = &g_613[0][2];
        int32_t *l_855 = (void*)0;
        int32_t *l_856 = &l_836;
        int8_t **l_885 = &g_11[1][1];
        const int16_t l_911 = 0xC453L;
        int32_t l_954[6][4][5] = {{{0xD646C60BL,1L,1L,0x215AEFBBL,1L},{(-7L),(-7L),1L,0L,0x80ADB4B9L},{0x0F51C78BL,0x881E9A68L,1L,1L,7L},{0x80ADB4B9L,(-5L),0x59ECF578L,0x80ADB4B9L,0L}},{{0xFC636E93L,0x881E9A68L,0x6DFAA5C4L,0x881E9A68L,0xFC636E93L},{0x59ECF578L,(-7L),(-5L),0L,(-7L)},{0xFC636E93L,1L,0x858C43BCL,1L,1L},{0x80ADB4B9L,0L,1L,(-7L),(-7L)}},{{0x0F51C78BL,1L,0x0F51C78BL,1L,0xFC636E93L},{(-7L),(-5L),0L,(-7L),0L},{0xD646C60BL,0x215AEFBBL,0x6DFAA5C4L,1L,7L},{0x59ECF578L,0x80ADB4B9L,0L,0L,0x80ADB4B9L}},{{7L,1L,0x0F51C78BL,0x881E9A68L,1L},{0L,0x80ADB4B9L,1L,0x80ADB4B9L,0L},{0x0F51C78BL,0x215AEFBBL,0x858C43BCL,1L,0xD646C60BL},{0L,(-5L),(-5L),0L,0L}},{{7L,1L,0x6DFAA5C4L,0x215AEFBBL,0xD646C60BL},{0x59ECF578L,0L,0x59ECF578L,0L,0L},{0xD646C60BL,1L,1L,0x215AEFBBL,1L},{(-7L),(-7L),1L,0L,0x80ADB4B9L}},{{0x0F51C78BL,0x881E9A68L,1L,1L,7L},{0x80ADB4B9L,(-5L),0x59ECF578L,0x80ADB4B9L,0L},{0xFC636E93L,0x881E9A68L,0x6DFAA5C4L,0x881E9A68L,0xFC636E93L},{0x59ECF578L,(-7L),(-5L),0L,(-7L)}}};
        int16_t **l_964 = &g_495;
        uint32_t l_986 = 0xBD49F46AL;
        uint32_t l_989 = 4294967295UL;
        uint32_t l_1032 = 0x61C91F71L;
        union U1 **l_1055[7] = {&g_235,&g_235,&g_235,&g_235,&g_235,&g_235,&g_235};
        struct S0 l_1072 = {-1L,0x2BAFC19BL};
        int64_t *l_1120 = &g_649;
        int i, j, k;
        (*l_854) = l_852;
        if (((*l_856) = g_648))
        { 
            uint16_t *l_873 = &g_577;
            uint32_t *l_878 = &g_325;
            int8_t *l_881 = &g_144[2].f1;
            int32_t l_882 = (-8L);
            uint16_t *l_883 = &g_665;
            int32_t *l_900 = &l_602.f2.f1;
            const union U2 l_918 = {{0x4F17DE0EAEF298AELL,0x89622241L}};
            uint64_t *l_926 = &g_107;
            uint8_t l_943 = 1UL;
            int32_t l_951 = 0xA681FEE1L;
            int32_t l_952 = 0x42862F57L;
            int32_t l_953 = 0xDA59FD27L;
            int32_t l_955 = 0xAB1ABC84L;
            int32_t l_959 = 7L;
            union U3 l_1050 = {0UL};
            union U1 *l_1062[5] = {&g_236[0],&g_236[0],&g_236[0],&g_236[0],&g_236[0]};
            uint32_t l_1099 = 0x29DB715EL;
            union U4 l_1135 = {1UL};
            const uint8_t *l_1138 = &g_361;
            const uint8_t **l_1137 = &l_1138;
            int i;
            if ((safe_div_func_uint16_t_u_u(((*l_883) = ((safe_div_func_uint32_t_u_u(p_16.f0, (safe_mod_func_int64_t_s_s(((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s((1UL ^ p_14.f0.f0), (**g_407))), ((p_15 | (safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((--(*l_873)), (g_303.f0 = (safe_mul_func_int8_t_s_s((((*l_878) |= p_16.f0) , (safe_lshift_func_int8_t_s_u(((*l_881) = l_45), (**g_819)))), p_14.f0.f1))))), l_882))) < l_836))), 0x69L)) <= l_882), p_14.f0.f0)))) > 1UL)), (*l_856))))
            { 
                int32_t l_884 = 0xD4F5A689L;
                (*l_856) = l_884;
                for (g_107 = 0; (g_107 <= 5); g_107 += 1)
                { 
                    int i;
                    if (g_130[g_107])
                        break;
                    return l_885;
                }
            }
            else
            { 
                int64_t *l_886 = &g_102;
                int32_t l_891[3][6][7] = {{{(-3L),0x45285A51L,0xF35B042FL,0xF35B042FL,0x45285A51L,(-3L),(-1L)},{1L,0L,(-1L),(-6L),2L,(-5L),0xF35B042FL},{0xF35B042FL,0x30EEAD94L,0L,0x72AE58BEL,0L,0x65BB1992L,0x6E913FFBL},{0x5483EEB8L,(-5L),(-3L),(-1L),0x0E19BF33L,0L,0xD26EEC4CL},{0x30EEAD94L,0L,1L,0x27F6B718L,(-1L),0L,(-9L)},{1L,0x25CEEF34L,(-1L),(-1L),0x5483EEB8L,0L,0x0E19BF33L}},{{(-9L),0x30EEAD94L,0x0E19BF33L,(-1L),0x74BFF226L,0x5483EEB8L,0L},{0xF35B042FL,0xDB929EA6L,(-1L),0x27F6B718L,5L,5L,0x27F6B718L},{0x25CEEF34L,0x5483EEB8L,0x25CEEF34L,(-1L),0x59E1BCCEL,(-1L),0x4647E50BL},{0L,0x0E19BF33L,1L,0x0E307052L,(-1L),1L,(-1L)},{1L,(-6L),0x27F6B718L,0L,0L,(-1L),0L},{1L,(-1L),0L,0x59E1BCCEL,1L,5L,0x30EEAD94L}},{{(-1L),9L,0x74BFF226L,0L,1L,0x5483EEB8L,1L},{0L,(-1L),0x4647E50BL,5L,(-6L),0L,0xF35B042FL},{0L,1L,0L,9L,0x4647E50BL,0L,1L},{(-1L),0L,1L,0L,1L,0L,(-1L)},{1L,(-1L),(-9L),0L,(-1L),0xD26EEC4CL,0L},{1L,0x6E913FFBL,(-1L),(-5L),0x45285A51L,1L,(-8L)}}};
                int32_t l_898[6][3][6] = {{{2L,7L,0xADE36043L,0x488F41A2L,0x903C6783L,0x206D64A2L},{0x4A1D4702L,7L,0x06A5BC6BL,0xD9BDD25CL,0x903C6783L,(-1L)},{0x60DCB138L,7L,0x903C6783L,0x75C65209L,0x903C6783L,7L}},{{2L,7L,0xADE36043L,0x488F41A2L,0x903C6783L,0x206D64A2L},{0x4A1D4702L,7L,0x06A5BC6BL,0xD9BDD25CL,0x903C6783L,(-1L)},{0x60DCB138L,7L,0x903C6783L,0x75C65209L,0x903C6783L,7L}},{{2L,7L,0xADE36043L,0x488F41A2L,0x903C6783L,0x206D64A2L},{0x4A1D4702L,7L,0x06A5BC6BL,0xD9BDD25CL,0x903C6783L,(-1L)},{0x60DCB138L,7L,0x903C6783L,0x75C65209L,0x903C6783L,7L}},{{2L,7L,0xADE36043L,0x488F41A2L,0x903C6783L,0x206D64A2L},{0x4A1D4702L,7L,0x06A5BC6BL,0xD9BDD25CL,0x903C6783L,(-1L)},{0x60DCB138L,7L,0x903C6783L,0x75C65209L,0x903C6783L,7L}},{{2L,7L,0xADE36043L,0x488F41A2L,0x903C6783L,0x206D64A2L},{0x4A1D4702L,7L,0x06A5BC6BL,0xD9BDD25CL,0x903C6783L,(-1L)},{0x60DCB138L,(-10L),0x04480ECEL,(-1L),0x04480ECEL,(-10L)}},{{0x903C6783L,(-10L),0xEC47FB37L,0x206D64A2L,0x04480ECEL,0x8E6051B3L},{0x06A5BC6BL,(-10L),(-6L),7L,0x04480ECEL,0x9FCC8E9EL},{0xADE36043L,(-10L),0x04480ECEL,(-1L),0x04480ECEL,(-10L)}}};
                int i, j, k;
                if ((((*l_886) ^= 0xC621BA2A04CF7FDELL) < (--(*g_559))))
                { 
                    return l_44;
                }
                else
                { 
                    uint8_t l_894 = 248UL;
                    const struct S0 *l_896 = &g_236[0].f0;
                    const struct S0 **l_895 = &l_896;
                    int64_t l_897 = 0x1021517629FB792FLL;
                    int32_t **l_899[6] = {&g_68,&g_68,&g_68,&g_68,&g_68,&g_68};
                    union U1 ****l_903 = (void*)0;
                    union U1 ****l_904 = &g_901;
                    int i;
                    l_898[2][1][3] = (safe_sub_func_uint8_t_u_u(((l_891[2][0][4] &= 0x1144L) && ((((l_882 | (((safe_rshift_func_int16_t_s_s((l_894 >= (*l_856)), 0)) ^ (((l_891[0][0][1] |= ((*g_198) != l_895)) , p_14.f0.f0) || l_894)) && l_897)) ^ p_14.f0.f0) >= p_15) , g_312[2][2])), 0UL));
                    g_68 = &l_882;
                    l_900 = l_855;
                    (*l_904) = g_901;
                }
                l_602.f0.f1 = p_17;
                return &g_11[2][0];
            }
            if (((*l_856) != (p_17 <= (*g_311))))
            { 
                uint8_t ** const *l_919 = &g_819;
                uint64_t ****l_929 = (void*)0;
                int32_t l_930 = 0xD03C9684L;
                int8_t *l_932 = &l_602.f1;
                union U1 ***l_944 = &g_902;
                uint32_t *l_945[4][1][1];
                int32_t *l_948 = &l_882;
                int32_t *l_949 = &g_648;
                int32_t *l_950[4][5][2] = {{{(void*)0,&g_5[0]},{&l_841,&l_836},{&g_5[0],&l_836},{&l_841,&g_5[0]},{(void*)0,(void*)0}},{{(void*)0,&g_5[0]},{&l_841,&l_836},{&g_5[0],&l_836},{&l_841,&g_5[0]},{(void*)0,(void*)0}},{{(void*)0,&g_5[0]},{&l_841,&l_836},{&g_5[0],&l_836},{&l_841,&g_5[0]},{(void*)0,(void*)0}},{{(void*)0,&g_5[0]},{&l_841,&l_836},{&g_5[0],&l_836},{&l_841,&g_5[0]},{(void*)0,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_945[i][j][k] = &g_20.f2;
                    }
                }
                if (((*g_311) > (255UL > 0xF5L)))
                { 
                    const union U1 *l_906 = &g_236[0];
                    const union U1 **l_905 = &l_906;
                    int8_t *l_917 = &g_702;
                    int32_t l_920 = 8L;
                    int32_t *l_931[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_931[i] = &g_690.f1;
                    (*l_905) = &p_14;
                    if (l_45)
                        goto lbl_933;
                    l_920 = ((*l_856) = (safe_div_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_u(((*g_311) || l_911), (safe_unary_minus_func_int8_t_s((((((!((7UL && ((safe_unary_minus_func_uint8_t_u((safe_add_func_int16_t_s_s(p_14.f0.f0, (*l_856))))) >= ((*g_558) |= ((l_918 , l_602.f4) & p_14.f0.f1)))) | p_14.f0.f1)) >= 0L) , &g_819) != l_919) || l_920))))) , g_479[0]), (*g_559))));
                    l_602.f4 = (g_69 |= (safe_mod_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((+((((g_680 , (((void*)0 != l_926) , (l_920 = ((*l_856) , (safe_rshift_func_uint8_t_u_s(((((*l_856) = (-4L)) , (void*)0) == l_929), l_920)))))) != 0UL) == l_930) < (*g_311))), p_16.f0)) != p_14.f0.f1), 0x2412AF69F92BD37FLL)));
lbl_933:
                    (*l_856) |= ((((*g_10) = l_881) == l_932) & 0xACA3L);
                    (*l_900) = l_930;
                }
                else
                { 
                    const struct S0 *l_934 = &g_18.f0;
                    const struct S0 **l_935 = &l_934;
                    const struct S0 *l_937 = &g_74;
                    const struct S0 **l_936 = &l_937;
                    (*l_900) = p_16.f0;
                    (*l_936) = ((*l_935) = l_934);
                    return l_885;
                }
                (*l_856) = ((safe_div_func_int32_t_s_s((l_677 , (safe_unary_minus_func_int16_t_s(l_930))), (*g_311))) <= (safe_mul_func_int8_t_s_s(l_943, (((void*)0 == l_944) | (--p_17)))));
                g_961++;
            }
            else
            { 
                int16_t **l_965 = &g_495;
                int32_t l_970 = (-1L);
                for (g_960 = 0; (g_960 >= 0); g_960 -= 1)
                { 
                    uint32_t *l_973 = (void*)0;
                    uint32_t **l_974 = &l_973;
                    int32_t l_983 = 0L;
                    int i;
                    (*l_856) = ((l_918.f0 , l_964) == l_965);
                    l_983 = ((--(*g_311)) <= (safe_div_func_int16_t_s_s(0L, (((**g_819) = (l_970 || (safe_lshift_func_int8_t_s_s(((((((*l_974) = l_973) != ((safe_mul_func_int8_t_s_s((l_970 = ((-4L) || (safe_sub_func_uint64_t_u_u((l_979[1] != (void*)0), (((safe_div_func_uint64_t_u_u((p_17 & p_17), g_325)) , (**g_819)) > (-2L)))))), 0x16L)) , l_855)) || 0xC9L) != (**g_407)) > 1UL), 7)))) ^ (-1L)))));
                }
            }
            if ((((safe_sub_func_int16_t_s_s((((g_20 , l_849[3][1][1]) , ((*l_881) = ((*l_856) >= l_602.f4))) || (*l_856)), ((l_986 ^ (safe_rshift_func_uint8_t_u_u(l_989, 5))) || (-1L)))) > p_14.f0.f0) ^ (-7L)))
            { 
                union U4 *l_991 = &g_20;
                union U4 **l_990 = &l_991;
                union U3 *l_994 = &l_849[4][0][2];
                int32_t l_998 = 0x248B7DB7L;
                (*l_990) = &p_16;
                for (l_955 = 0; (l_955 < (-23)); --l_955)
                { 
                    union U3 *l_995 = &g_303;
                    const int32_t l_1012 = 0x3519B3BDL;
                    l_995 = ((*l_854) = l_994);
                    l_900 = &g_648;
                    (*l_900) = ((safe_rshift_func_int16_t_s_u((p_14.f0.f0 <= (l_998 & (safe_mod_func_uint16_t_u_u(g_74.f0, (safe_unary_minus_func_int16_t_s(p_14.f0.f1)))))), 6)) && (safe_mod_func_int64_t_s_s(1L, (((safe_rshift_func_int16_t_s_s((((*l_878)--) , ((safe_mod_func_uint8_t_u_u((*l_856), (l_998 = (p_16.f0 || 0L)))) | (-1L))), l_1012)) > p_17) & g_680.f0.f1))));
                }
            }
            else
            { 
                int32_t *l_1013[1][2];
                int16_t l_1034 = 0x7BECL;
                int16_t ** const ***l_1045 = &g_492;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1013[i][j] = &g_690.f1;
                }
                --l_1014[1][2][0];
                for (l_943 = 0; (l_943 <= 6); l_943 += 1)
                { 
                    const uint16_t *l_1020 = (void*)0;
                    int32_t l_1033 = 0xBE1E3514L;
                    g_69 &= (~((safe_rshift_func_int16_t_s_s((l_841 ^= ((p_14.f0.f0 , l_1020) != ((((l_1033 = (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_1027 |= p_17), 2)), (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(p_14.f0.f0, (p_14 , ((*l_856) && p_15)))), p_15)))), l_1032))) == (*l_856)) , 0L) , (void*)0))), l_1034)) && p_17));
                    (*l_856) &= (+(1L < (safe_add_func_int8_t_s_s(1L, (safe_mul_func_uint8_t_u_u(1UL, (safe_div_func_uint64_t_u_u((~(((((safe_sub_func_int32_t_s_s(((((void*)0 == l_926) && g_958) | (((**g_407) || (**g_407)) < g_703)), p_17)) && 9L) , l_1014[2][2][1]) || 0x45F1L) > 0xD7BE8CFAL)), 0x4FDE3CB25FB79AEFLL))))))));
                }
                (*l_1045) = (*g_655);
            }
            if (((((*g_311) = (safe_add_func_int64_t_s_s(p_14.f0.f1, (safe_mul_func_int16_t_s_s(((l_1050 , p_14.f0.f1) & ((-7L) > (g_679 >= 0xAB90L))), 1UL))))) >= 0L) && 4L))
            { 
                int32_t **l_1051 = &l_900;
                uint8_t *l_1065 = &l_1014[0][0][1];
                (*l_1051) = &l_954[3][2][3];
                for (g_649 = 0; (g_649 == 22); g_649 = safe_add_func_int64_t_s_s(g_649, 6))
                { 
                    int32_t *l_1054[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1054[i] = &g_69;
                    (*l_1051) = l_1054[0];
                    (*l_900) &= l_1014[0][1][0];
                }
                if ((((((0x6C25C211L || (((**g_819) = (((*g_901) = (*g_901)) == l_1055[6])) > ((~(safe_lshift_func_uint16_t_u_u(((*l_883) = ((((g_1059 <= ((safe_mod_func_uint16_t_u_u(((void*)0 == l_1062[0]), ((*l_900) = ((safe_lshift_func_uint8_t_u_s(((*l_1065) = p_17), 3)) && p_17)))) >= g_960)) != p_14.f0.f1) > p_15) > p_17)), 0))) == 0x6595L))) , l_1066) == l_1066) == g_236[0].f0.f0) && p_14.f0.f0))
                { 
                    (**l_1051) &= 9L;
                    (*l_1051) = &g_5[1];
                    (*l_856) = (safe_rshift_func_uint16_t_u_u((!((*l_1065) &= (safe_rshift_func_uint16_t_u_u((l_1072 , (safe_mul_func_uint16_t_u_u((((*l_980) == (void*)0) || (safe_sub_func_int16_t_s_s(2L, 1L))), (safe_add_func_uint32_t_u_u((*g_311), (p_17 == p_14.f0.f0)))))), 12)))), g_312[2][2]));
                }
                else
                { 
                    const uint64_t *l_1081 = &g_107;
                    const uint64_t **l_1080 = &l_1081;
                    const uint64_t ***l_1079[3][5][6] = {{{&l_1080,&l_1080,&l_1080,&l_1080,&l_1080,(void*)0},{&l_1080,&l_1080,&l_1080,(void*)0,&l_1080,&l_1080},{(void*)0,&l_1080,&l_1080,&l_1080,(void*)0,&l_1080},{&l_1080,&l_1080,&l_1080,&l_1080,(void*)0,&l_1080},{&l_1080,&l_1080,(void*)0,&l_1080,&l_1080,&l_1080}},{{&l_1080,&l_1080,&l_1080,&l_1080,&l_1080,&l_1080},{(void*)0,&l_1080,&l_1080,&l_1080,&l_1080,&l_1080},{&l_1080,&l_1080,&l_1080,&l_1080,&l_1080,&l_1080},{&l_1080,&l_1080,&l_1080,(void*)0,&l_1080,&l_1080},{&l_1080,(void*)0,&l_1080,&l_1080,&l_1080,&l_1080}},{{&l_1080,(void*)0,(void*)0,&l_1080,&l_1080,&l_1080},{&l_1080,&l_1080,&l_1080,&l_1080,&l_1080,&l_1080},{&l_1080,&l_1080,&l_1080,&l_1080,&l_1080,&l_1080},{&l_1080,&l_1080,&l_1080,&l_1080,(void*)0,(void*)0},{&l_1080,&l_1080,&l_1080,&l_1080,(void*)0,&l_1080}}};
                    const uint64_t ****l_1082[1][7];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_1082[i][j] = &l_1079[1][2][5];
                    }
                    g_1083 = l_1079[1][2][5];
                    (*l_856) |= (safe_sub_func_uint16_t_u_u(0xDE89L, (safe_mul_func_int16_t_s_s((p_16.f0 & ((*g_311) ^= (l_956 || p_14.f0.f0))), ((*l_900) , 0x5941L)))));
                    return &g_11[0][1];
                }
            }
            else
            { 
                int64_t l_1092 = 1L;
                int32_t l_1098 = 3L;
                union U3 ***l_1119 = &l_853[3][6][0];
                uint16_t l_1136 = 0x3976L;
                const uint8_t ***l_1139[5][6] = {{&l_1137,&l_1137,&l_1137,&l_1137,&l_1137,&l_1137},{&l_1137,&l_1137,&l_1137,&l_1137,&l_1137,&l_1137},{&l_1137,&l_1137,&l_1137,&l_1137,&l_1137,&l_1137},{&l_1137,&l_1137,&l_1137,&l_1137,&l_1137,&l_1137},{&l_1137,&l_1137,&l_1137,&l_1137,&l_1137,&l_1137}};
                int i, j;
                for (l_986 = 0; (l_986 >= 28); l_986 = safe_add_func_uint64_t_u_u(l_986, 2))
                { 
                    int32_t *l_1090 = &g_74.f1;
                    int32_t *l_1091 = &l_959;
                    int32_t *l_1093 = (void*)0;
                    int32_t *l_1094 = (void*)0;
                    int32_t *l_1095 = &g_648;
                    int32_t *l_1096 = &l_959;
                    int32_t *l_1097[7];
                    int8_t **l_1107 = &g_11[0][1];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1097[i] = &l_836;
                    l_1099++;
                    (*l_1090) = (((((p_16 , (safe_add_func_uint16_t_u_u(((*l_883) = 0xF148L), (l_878 != l_1104)))) <= (0x73L | (&l_989 != &g_312[2][2]))) , l_841) | p_16.f0) >= p_16.f0);
                    return l_1107;
                }
                (*l_856) &= ((!(((safe_div_func_int16_t_s_s((l_602.f1 >= (((**l_1066) ^= (((*g_408) = (*g_559)) >= g_18.f0.f1)) ^ ((((((safe_add_func_uint16_t_u_u((+p_14.f0.f1), (l_1116 , (safe_add_func_uint16_t_u_u(((void*)0 == l_1119), 0x6466L))))) < (*g_311)) & g_957) && 0xF0L) , l_1120) != l_1120))), g_69)) >= p_16.f0) != g_680.f0.f1)) > p_17);
                l_841 = ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((~(safe_div_func_uint64_t_u_u(((*g_558) &= p_17), (((((*l_883) = g_102) , (func_27(l_1128, ((g_665 = ((safe_div_func_uint64_t_u_u(((*g_408)--), (p_15 & ((((safe_rshift_func_uint8_t_u_u((((g_130[1] <= ((*l_1120) = (((l_1098 = (l_1135 , (*l_856))) == l_1092) || 1L))) > 0x9114DA346D83CCE0LL) , (**g_819)), p_15)) & 0x9A730B4977631D86LL) , p_16.f0) <= l_841)))) < p_14.f0.f1)) || l_1014[1][2][0]), p_14.f0.f1, l_918, l_1092) , (***g_198))) , l_956) & p_16.f0)))) | 1L), 0x06L)), l_1136)) == p_14.f0.f0);
                g_1140 = l_1137;
                for (g_961 = 0; (g_961 <= 1); g_961 += 1)
                { 
                    struct S0 **l_1142[3][4][5] = {{{&g_689[4],&g_689[0],(void*)0,&g_689[0],&g_689[0]},{&g_689[3],&g_689[0],&g_689[0],&g_689[0],&g_689[3]},{&g_689[0],&g_689[0],(void*)0,&g_689[0],&g_689[0]},{&g_689[3],&g_689[0],&g_689[0],&g_689[0],&g_689[3]}},{{&g_689[0],&g_689[0],(void*)0,&g_689[0],&g_689[0]},{&g_689[3],&g_689[0],&g_689[0],&g_689[0],&g_689[3]},{&g_689[0],&g_689[0],(void*)0,&g_689[0],&g_689[0]},{&g_689[3],&g_689[0],&g_689[0],&g_689[0],&g_689[3]}},{{&g_689[0],&g_689[0],(void*)0,&g_689[0],&g_689[0]},{&g_689[3],&g_689[0],&g_689[0],&g_689[0],&g_689[3]},{&g_689[0],&g_689[0],(void*)0,&g_689[0],&g_689[0]},{&g_689[3],&g_689[0],&g_689[0],&g_689[0],&g_689[3]}}};
                    int i, j, k;
                    (*g_198) = l_1142[0][2][1];
                    if (l_1128)
                        continue;
                }
            }
        }
        else
        { 
            return &g_11[1][1];
        }
        l_602.f2.f1 = l_1014[3][3][0];
    }
    else
    { 
        uint8_t l_1145 = 246UL;
        struct S0 l_1146 = {1L,0L};
        uint8_t **l_1150 = (void*)0;
        int32_t l_1214 = 0x0B9C659AL;
        int32_t l_1216 = 5L;
        uint64_t l_1220 = 0x86B01E5CCC7AF1CELL;
        uint8_t ****l_1234 = (void*)0;
        union U2 l_1239 = {{0xCF8A5E4387F381D9LL,0x4818EBB6L}};
        union U4 l_1241 = {0xB7L};
        union U1 * const *l_1252 = &g_235;
        int32_t *l_1254 = &l_841;
        int32_t *l_1255 = &l_1239.f0.f1;
        int32_t *l_1256[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1256[i][j] = (void*)0;
        }
        for (g_703 = (-27); (g_703 != 12); ++g_703)
        { 
            int16_t **l_1147 = &g_495;
            int32_t l_1162 = 1L;
            uint64_t l_1169 = 0x03CCB1128967BA15LL;
            int8_t l_1188 = 0x6DL;
            int32_t *l_1200 = &l_1162;
            int32_t *l_1201 = &l_602.f0.f1;
            int32_t *l_1202 = &l_836;
            int32_t *l_1203 = &g_690.f1;
            int32_t *l_1204 = &g_648;
            int32_t *l_1205 = &l_602.f0.f1;
            int32_t *l_1206 = &l_836;
            int32_t *l_1207 = &g_957;
            int32_t *l_1208 = &l_602.f0.f1;
            int32_t *l_1209 = &g_74.f1;
            int32_t *l_1210 = &g_957;
            int32_t *l_1211 = (void*)0;
            int32_t *l_1212 = &g_144[2].f4;
            int32_t *l_1213[7];
            int32_t l_1215[4];
            uint32_t l_1217 = 8UL;
            union U3 l_1225 = {0x0561L};
            struct S0 l_1233 = {0x2B9F10FDBCCB4C4CLL,-1L};
            int i;
            for (i = 0; i < 7; i++)
                l_1213[i] = &g_144[2].f4;
            for (i = 0; i < 4; i++)
                l_1215[i] = 0x78A060F3L;
            if ((((l_1145 , (l_1116 , l_1146)) , l_1147) != (void*)0))
            { 
                union U4 l_1153 = {0x4EL};
                int32_t l_1170 = 0L;
                int8_t *l_1171 = &l_602.f1;
                if ((safe_mod_func_int8_t_s_s(((void*)0 == l_1150), (safe_div_func_int64_t_s_s((l_1153 , (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((l_1162 >= ((*l_1171) = (l_1170 = (((safe_div_func_int8_t_s_s(((((((safe_add_func_int64_t_s_s(p_17, (safe_div_func_int16_t_s_s(p_15, 0xC622L)))) && l_1169) > 0x10L) || p_14.f0.f1) == 255UL) <= (*g_558)), 250UL)) & l_1153.f0) | (*g_408))))), l_1145)), p_14.f0.f0)), p_14.f0.f0)) && (**g_407)), p_17))), g_312[2][2])))))
                { 
                    uint16_t *l_1189 = &g_651;
                    int32_t *l_1190 = &g_957;
                    (*l_1190) = ((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*l_1189) = (((safe_unary_minus_func_uint16_t_u(g_325)) && (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((((*l_1171) = ((safe_sub_func_uint8_t_u_u(((**g_819) = l_1145), (l_1146.f0 >= ((g_144[2] , ((0L != ((***g_556) = ((*g_559) || ((safe_div_func_uint8_t_u_u(((((safe_div_func_int64_t_s_s((((l_1146.f1 ^= (*g_1141)) , p_14.f0.f0) != 0x999C9F98AD7FB3D3LL), l_1145)) <= 0L) | l_1170) && g_303.f0), p_14.f0.f0)) != (*g_559))))) != l_1169)) | 8L)))) < p_14.f0.f1)) > p_16.f0))), l_677)), 5))) > l_1188)) == p_17), (**g_1140))), p_14.f0.f0)) , 1L);
                }
                else
                { 
                    int32_t l_1191 = 0xC94CF332L;
                    l_1191 ^= l_1128;
                    return l_44;
                }
            }
            else
            { 
                int32_t **l_1192[6][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                int i, j;
                g_68 = &l_841;
            }
            (*l_1200) = ((((safe_rshift_func_uint16_t_u_s(p_14.f0.f1, 8)) > (l_1195 , (l_841 , (safe_unary_minus_func_int64_t_s((l_956 >= ((void*)0 == l_1197))))))) , (l_677 | l_1199[2])) == 0xF1E138A2L);
            l_1217++;
            l_1220++;
            for (l_1027 = 3; (l_1027 >= (-14)); l_1027--)
            { 
                uint64_t *l_1228 = (void*)0;
                uint8_t *****l_1235 = &l_1234;
                int32_t l_1240 = 0xE1396780L;
                int8_t *l_1242[6] = {&g_702,(void*)0,&g_702,&g_702,(void*)0,&g_702};
                uint16_t *l_1243 = (void*)0;
                uint16_t *l_1244 = &g_1059;
                int32_t l_1245 = 0xC1E29911L;
                int i;
                if ((l_1225 , (0x20863C22L <= (safe_rshift_func_int8_t_s_u((l_1245 ^= (((*l_1244) |= ((l_836 = (((((((func_27((l_841 = p_15), (safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((l_1233 , p_14) , (((*l_1235) = l_1234) == g_1236)) <= 1UL) , l_1199[2]), p_15)), l_1145)), l_1238, l_1239, l_1240) , 0xDBF2BEE0L) > 0x8B5761ECL) >= 0UL) & p_16.f0) <= l_1240) , l_1241) , (*l_1200))) == 0x99L)) & g_648)), 0)))))
                { 
                    uint16_t l_1246 = 0x7C58L;
                    --l_1246;
                }
                else
                { 
                    int32_t **l_1249 = &l_1212;
                    (*l_1249) = (void*)0;
                }
                if (l_836)
                    continue;
                g_1250 = (void*)0;
                g_1253 = l_1252;
            }
        }
        l_1257++;
    }
    return l_44;
}



static union U2  func_21(const int8_t  p_22, int64_t  p_23, const int8_t * const  p_24, uint64_t  p_25, const union U2  p_26)
{ 
    uint32_t l_685 = 9UL;
    int32_t l_695 = 0xA8813FA4L;
    int32_t l_696 = 0x61D017DAL;
    int32_t l_697 = 1L;
    int32_t l_698 = (-1L);
    int32_t l_699 = 0xE4EE0D34L;
    int32_t l_700 = (-2L);
    int32_t l_701 = 0L;
    struct S0 **l_710 = &g_689[0];
    union U3 **l_718 = &g_613[0][5];
    union U3 ***l_717 = &l_718;
    union U3 ****l_716 = &l_717;
    union U1 l_719 = {{-4L,0xA35F2C10L}};
    const int16_t *** const l_784 = (void*)0;
    const int16_t *** const *l_783 = &l_784;
    uint32_t l_790 = 1UL;
    uint8_t ***l_828 = (void*)0;
    union U2 l_832 = {{-1L,0xD3A1B649L}};
    for (p_25 = 0; (p_25 >= 27); p_25++)
    { 
        int32_t *l_683 = (void*)0;
        int32_t l_684 = 0x8A1AF33EL;
        int32_t **l_688 = &g_68;
        ++l_685;
        (*l_688) = &g_648;
        (**l_688) = l_685;
        g_689[0] = (*g_199);
    }
    for (g_107 = 0; (g_107 <= 1); g_107 += 1)
    { 
        int32_t *l_691 = &g_144[2].f0.f1;
        int32_t *l_692 = &g_74.f1;
        int32_t *l_693 = &g_144[2].f0.f1;
        int32_t *l_694[7] = {&g_648,&g_648,&g_648,&g_648,&g_648,&g_648,&g_648};
        int64_t *l_720 = &g_649;
        int16_t l_760 = 0x4B63L;
        const int16_t *** const l_782 = (void*)0;
        const int16_t *** const *l_781 = &l_782;
        union U2 l_787 = {{0x31FC31C3090F8DB9LL,0x12AFFEC6L}};
        union U1 *l_793 = &g_233[6][1][3];
        struct S0 * const l_815 = &g_690;
        int i;
        if (g_130[(g_107 + 2)])
            break;
        g_703--;
        (*l_693) = ((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_130[(g_107 + 4)], ((*g_198) == l_710))), (safe_mod_func_uint64_t_u_u(((+g_577) ^ (((*l_720) = (((l_716 != (l_719 , (l_719 , (void*)0))) & (*g_559)) || p_26.f0.f0)) != 0x25391E787CD882F9LL)), 5UL)))) || p_22);
        for (g_74.f1 = 0; (g_74.f1 <= 1); g_74.f1 += 1)
        { 
            union U3 ***l_738[5] = {&l_718,&l_718,&l_718,&l_718,&l_718};
            int32_t l_755 = 0xBCBF61D6L;
            int32_t l_759 = 7L;
            int32_t l_788 = 1L;
            int16_t ****l_798 = &g_169[4];
            int64_t *l_812 = (void*)0;
            uint8_t ***l_829[7];
            int i;
            for (i = 0; i < 7; i++)
                l_829[i] = (void*)0;
        }
    }
    return l_832;
}



static union U2  func_27(const uint64_t  p_28, int8_t  p_29, int32_t  p_30, union U2  p_31, int16_t  p_32)
{ 
    uint8_t *l_605 = &g_479[2];
    union U3 *l_608 = &g_303;
    union U3 *l_610 = &g_303;
    union U3 **l_609 = &l_610;
    union U3 *l_612 = &g_303;
    union U3 **l_611[2];
    int32_t *l_614 = &g_74.f1;
    uint32_t l_619[3];
    struct S0 *l_623 = &g_74;
    struct S0 **l_622 = &l_623;
    uint16_t l_624 = 0x334DL;
    int32_t l_635 = 0L;
    int32_t l_636 = 0xA3EA97BFL;
    int32_t l_637[5][7] = {{0xBDCB6508L,0L,0xBDCB6508L,1L,1L,1L,0xBDCB6508L},{9L,9L,0L,9L,9L,0L,9L},{1L,1L,0xBDCB6508L,0L,0xBDCB6508L,1L,1L},{0x5050F4D0L,9L,0x5050F4D0L,0x5050F4D0L,9L,0x5050F4D0L,0x5050F4D0L},{1L,0L,0L,0L,1L,0xE4ED3A98L,1L}};
    uint16_t l_638[4] = {0xFA04L,0xFA04L,0xFA04L,0xFA04L};
    int16_t ** const ** const * const l_654[4] = {&g_492,&g_492,&g_492,&g_492};
    int32_t l_663 = 4L;
    const union U3 *l_671 = (void*)0;
    const union U3 ** const l_670 = &l_671;
    const union U3 ** const *l_669 = &l_670;
    const union U3 ** const **l_668 = &l_669;
    int i, j;
    for (i = 0; i < 2; i++)
        l_611[i] = &l_612;
    for (i = 0; i < 3; i++)
        l_619[i] = 0xD0DB4E0CL;
    (*l_614) |= (safe_rshift_func_uint8_t_u_u(((*l_605) &= p_29), (0xB5CA1FA15D6A9CFDLL & ((((*g_559) = (*g_559)) , l_608) == (g_613[0][2] = ((*l_609) = l_608))))));
    if ((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(l_619[0], ((*l_614) ^ (0xC6DBD5CC6A068D99LL > (safe_mod_func_uint8_t_u_u(0x23L, (((l_622 == (*g_198)) | (0x97C760F1L != (*g_311))) || 1UL))))))) <= p_28), l_624)))
    { 
        union U3 ***l_625 = &l_611[1];
        union U3 ****l_626 = &l_625;
        (*l_626) = l_625;
    }
    else
    { 
        return p_31;
    }
    for (g_272 = 0; (g_272 <= 2); g_272 += 1)
    { 
        int32_t l_662 = 0x611F65CFL;
        int32_t l_664 = 0x254FA28DL;
        for (g_103 = 0; (g_103 <= 2); g_103 += 1)
        { 
            int32_t *l_627 = &g_69;
            int32_t *l_628 = &g_144[2].f0.f1;
            int32_t *l_629 = &g_144[2].f2.f1;
            int32_t *l_630 = (void*)0;
            int32_t *l_631 = &g_144[2].f2.f1;
            int32_t *l_632 = &g_144[2].f0.f1;
            int32_t *l_633 = &g_69;
            int32_t *l_634[5][2] = {{&g_144[2].f0.f1,(void*)0},{&g_69,&g_144[2].f0.f1},{&g_5[1],&g_5[1]},{&g_5[1],&g_144[2].f0.f1},{&g_69,(void*)0}};
            union U1 *l_644[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_644[i] = &g_233[5][1][3];
            l_638[0]++;
            for (p_29 = 0; (p_29 <= 2); p_29 += 1)
            { 
                uint32_t l_641 = 0x73D80C34L;
                union U1 **l_645[3];
                int32_t l_646 = 1L;
                int32_t l_650[1];
                int i;
                for (i = 0; i < 3; i++)
                    l_645[i] = &l_644[2];
                for (i = 0; i < 1; i++)
                    l_650[i] = 0xCD009B4BL;
                l_641++;
                g_235 = l_644[0];
                l_634[0][1] = l_633;
                p_31.f0.f1 |= g_312[2][2];
                for (g_361 = 0; (g_361 <= 2); g_361 += 1)
                { 
                    int32_t l_647 = (-4L);
                    --g_651;
                    return g_144[1];
                }
            }
        }
        for (g_325 = 0; (g_325 <= 2); g_325 += 1)
        { 
            g_655 = l_654[2];
        }
        if (p_28)
            continue;
        for (g_20.f2 = 0; (g_20.f2 <= 2); g_20.f2 += 1)
        { 
            int32_t *l_656 = &g_69;
            int32_t *l_657 = &g_144[2].f0.f1;
            int32_t *l_658 = &g_144[2].f2.f1;
            int32_t *l_659 = &g_144[2].f4;
            int32_t *l_660 = &g_144[2].f0.f1;
            int32_t *l_661[5];
            union U3 *l_676 = (void*)0;
            int i;
            for (i = 0; i < 5; i++)
                l_661[i] = &g_144[2].f0.f1;
            g_665--;
            g_672 = (l_662 , l_668);
            (*l_670) = l_676;
            return p_31;
        }
    }
    return g_144[1];
}



static uint64_t  func_35(int8_t ** p_36, int16_t  p_37)
{ 
    union U1 *l_232 = &g_233[5][1][3];
    union U1 **l_234[1];
    int32_t l_239 = 0x750AC283L;
    uint8_t * const *l_240 = (void*)0;
    int64_t l_253 = 0xA1215F5D2826EAEDLL;
    int8_t l_262 = 0L;
    uint8_t *l_269 = (void*)0;
    int32_t l_300 = 0x464BCB63L;
    uint16_t l_322[1][4][3] = {{{0x5133L,65528UL,65528UL},{0x5133L,65528UL,65528UL},{0x5133L,65528UL,65528UL},{0x5133L,65528UL,65528UL}}};
    struct S0 l_462 = {7L,0x4A0CEEA6L};
    const uint64_t *l_468 = &g_103;
    const uint64_t **l_467[4][3][5] = {{{&l_468,&l_468,&l_468,&l_468,&l_468},{(void*)0,(void*)0,&l_468,(void*)0,(void*)0},{&l_468,&l_468,&l_468,&l_468,&l_468}},{{(void*)0,&l_468,&l_468,(void*)0,&l_468},{&l_468,&l_468,&l_468,&l_468,&l_468},{&l_468,(void*)0,&l_468,&l_468,(void*)0}},{{&l_468,&l_468,&l_468,&l_468,&l_468},{&l_468,&l_468,(void*)0,&l_468,&l_468},{&l_468,&l_468,&l_468,&l_468,&l_468}},{{&l_468,&l_468,&l_468,&l_468,&l_468},{&l_468,&l_468,&l_468,&l_468,&l_468},{&l_468,&l_468,&l_468,&l_468,&l_468}}};
    const uint64_t ***l_466 = &l_467[1][1][1];
    int16_t ** const *l_490 = &g_170[0];
    int16_t ** const **l_489 = &l_490;
    int16_t ** const ***l_488 = &l_489;
    union U4 l_515 = {0x2DL};
    int16_t ****l_543 = &g_169[5];
    int16_t *****l_542 = &l_543;
    int16_t l_576 = 0x080AL;
    uint64_t **l_595[2];
    uint64_t **l_597 = &g_408;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_234[i] = &l_232;
    for (i = 0; i < 2; i++)
        l_595[i] = &g_558;
lbl_354:
    g_235 = l_232;
    for (g_107 = 4; (g_107 > 57); g_107 = safe_add_func_uint8_t_u_u(g_107, 5))
    { 
        uint8_t * const **l_241 = &l_240;
        int16_t ** const *l_258 = (void*)0;
        int16_t ** const **l_257 = &l_258;
        int32_t l_261[7][5][1] = {{{8L},{0xAFFB38D0L},{5L},{0x6D39F524L},{5L}},{{0xAFFB38D0L},{8L},{0x4F3CDA21L},{0x342583E3L},{0x342583E3L}},{{0x4F3CDA21L},{8L},{0xAFFB38D0L},{5L},{0x6D39F524L}},{{5L},{0xAFFB38D0L},{8L},{0x4F3CDA21L},{0x342583E3L}},{{0x342583E3L},{0x4F3CDA21L},{8L},{0xAFFB38D0L},{5L}},{{0x6D39F524L},{5L},{0xAFFB38D0L},{8L},{0x4F3CDA21L}},{{0x342583E3L},{0x342583E3L},{0x4F3CDA21L},{8L},{0xAFFB38D0L}}};
        uint8_t *l_271 = &g_272;
        int64_t *l_273 = &l_253;
        uint32_t l_275 = 0x735E2F03L;
        int8_t *l_286 = &l_262;
        int32_t l_289[3];
        int32_t *l_359 = &g_74.f1;
        uint64_t l_413 = 0x9600B08A2019C03DLL;
        union U4 l_416 = {0x73L};
        uint16_t l_438[7] = {0x697CL,0x697CL,7UL,0x697CL,0x697CL,7UL,0x697CL};
        int16_t l_505 = 0x4F68L;
        struct S0 *l_514 = &g_74;
        int16_t ****l_541 = &g_169[4];
        int16_t *****l_540[4];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_289[i] = 0x7A4677E4L;
        for (i = 0; i < 4; i++)
            l_540[i] = &l_541;
        l_239 &= 0x2DBCC6B9L;
        (*l_241) = l_240;
        for (g_69 = 0; (g_69 <= 5); g_69 += 1)
        { 
            struct S0 l_247[5] = {{0L,0xEDB1092CL},{0L,0xEDB1092CL},{0L,0xEDB1092CL},{0L,0xEDB1092CL},{0L,0xEDB1092CL}};
            struct S0 *l_279 = &g_74;
            struct S0 **l_278 = &l_279;
            int8_t *l_285 = &l_262;
            uint8_t ***l_298 = (void*)0;
            int32_t l_306 = (-2L);
            int8_t l_313 = 0x50L;
            int16_t ***l_314[5];
            uint16_t *l_350 = &l_322[0][0][0];
            uint32_t *l_397 = &g_312[0][0];
            uint64_t **l_409 = (void*)0;
            int32_t l_510[3];
            uint8_t l_524 = 255UL;
            uint64_t *l_548 = &l_413;
            uint64_t *l_563 = &g_103;
            uint64_t *l_564 = &g_107;
            uint64_t *l_565 = &g_107;
            uint64_t ** const l_562[6] = {&l_564,&l_564,&l_565,&l_564,&l_564,&l_565};
            uint64_t ** const *l_561 = &l_562[2];
            union U3 *l_580 = &g_303;
            int i;
            for (i = 0; i < 5; i++)
                l_314[i] = &g_170[0];
            for (i = 0; i < 3; i++)
                l_510[i] = 9L;
            for (l_239 = 1; (l_239 <= 5); l_239 += 1)
            { 
                uint8_t l_244 = 1UL;
                int16_t ****l_254 = (void*)0;
                int32_t l_263 = 0x55A25A28L;
                int32_t l_264[2];
                const int64_t *l_274 = &g_74.f0;
                int32_t *l_280[2][6][6] = {{{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1},{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1},{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1},{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1},{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1},{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1}},{{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1},{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1},{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1},{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1},{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1},{&g_5[2],&g_5[2],&l_247[2].f1,&g_5[2],&g_5[2],&l_247[2].f1}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_264[i] = 1L;
                for (g_12 = 0; (g_12 <= 5); g_12 += 1)
                { 
                    int16_t *l_251 = &g_130[5];
                    int16_t ** const *l_256 = &g_170[1];
                    int16_t ** const **l_255 = &l_256;
                    uint8_t **l_270[6];
                    int32_t *l_276 = (void*)0;
                    int32_t *l_277[6][3][4] = {{{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69}},{{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69}},{{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69}},{{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69}},{{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69}},{{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69},{(void*)0,&g_69,(void*)0,&g_69}}};
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_270[i] = &l_269;
                    if (g_130[g_69])
                        break;
                    l_264[1] |= ((l_263 = (safe_sub_func_int8_t_s_s(l_244, (safe_lshift_func_uint8_t_u_u(((l_247[2] , (((safe_rshift_func_int16_t_s_u(((*l_251) &= (safe_unary_minus_func_uint16_t_u(p_37))), 2)) , (~l_253)) , (l_254 == (l_257 = l_255)))) != ((safe_rshift_func_uint8_t_u_s(l_261[4][3][0], 6)) || l_262)), 6))))) != l_261[2][0][0]);
                    g_74.f1 &= (safe_mul_func_uint8_t_u_u(((*g_10) == (*g_10)), ((safe_sub_func_int16_t_s_s((l_239 | ((((l_271 = l_269) != &g_272) , (l_273 == l_274)) != 0L)), p_37)) | l_275)));
                    return p_37;
                }
                g_144[2].f4 = (l_278 != (*g_198));
                l_289[1] |= ((safe_mod_func_uint32_t_u_u(((p_37 = ((safe_add_func_uint32_t_u_u(((l_286 = l_285) != (*g_10)), l_262)) > ((safe_unary_minus_func_uint16_t_u(l_261[6][2][0])) <= ((+g_130[4]) == ((&g_199 != (void*)0) == g_74.f1))))) , g_74.f0), 7L)) ^ g_69);
                if (((l_261[3][4][0] = (0x20069F1AL && (((void*)0 == &g_199) != ((safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((*l_286) = ((void*)0 != l_298)), p_37)), (+l_247[2].f0))) || (-1L)), g_107)) | 0xCE0FFC3AD434E0CELL)))) >= l_247[2].f1))
                { 
                    uint8_t l_319 = 251UL;
                    int32_t l_320[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_320[i] = 9L;
                    l_300 &= (-1L);
                    l_247[2].f1 = (safe_add_func_int16_t_s_s(((g_303 , (l_306 = (safe_rshift_func_uint8_t_u_s(0UL, 6)))) || (safe_mul_func_uint8_t_u_u(((p_37 && ((((safe_div_func_uint32_t_u_u(((((l_280[0][5][3] == g_311) < (((g_144[2] , (0L & p_37)) != p_37) & l_313)) >= 8L) || 9UL), p_37)) && 8L) , l_314[4]) == (void*)0)) < 0x24L), g_102))), 0x2B2DL));
                    l_322[0][0][0] = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((l_319 = p_37) != l_275), 7)), ((1UL | l_320[1]) || (l_320[1] = (((+g_5[1]) < ((((((((((*l_232) , ((l_261[4][3][0] == l_275) && p_37)) , &g_272) != &g_272) , (*g_311)) & l_261[4][3][0]) || g_74.f1) && (*g_311)) , 7L) <= l_300)) , l_247[2].f0)))));
                    if (l_247[2].f0)
                        break;
                }
                else
                { 
                    int8_t l_323 = 0x19L;
                    int32_t l_324 = 0x4EE2C136L;
                    uint64_t *l_329[6][7] = {{&g_107,&g_107,&g_103,&g_107,&g_103,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107},{&g_107,&g_103,&g_107,&g_103,&g_103,&g_107,&g_103},{&g_107,&g_103,&g_107,&g_107,&g_103,&g_107,&g_103},{&g_107,&g_103,&g_103,&g_107,&g_103,&g_107,&g_103},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107}};
                    uint64_t **l_328 = &l_329[0][0];
                    uint64_t ***l_330 = (void*)0;
                    uint64_t ***l_331 = &l_328;
                    int32_t **l_347 = &g_68;
                    int i, j;
                    g_325--;
                    (*l_331) = l_328;
                    l_261[4][3][0] &= ((safe_mod_func_int32_t_s_s(p_37, (((~(safe_rshift_func_uint8_t_u_u((+(((((*l_273) = g_69) , (safe_mod_func_int8_t_s_s(l_324, (safe_sub_func_uint64_t_u_u((+(0x6BL < g_12)), (safe_rshift_func_int8_t_s_s(p_37, ((safe_rshift_func_uint16_t_u_u((((void*)0 != &g_235) , l_322[0][1][2]), 15)) , l_289[0])))))))) | l_275) | p_37)), 2))) >= l_247[2].f1) || 4294967292UL))) >= 6L);
                    (*l_347) = &l_261[4][3][0];
                }
            }
            if ((safe_rshift_func_uint16_t_u_s((--(*l_350)), l_253)))
            { 
                int32_t **l_358[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_358[i] = &g_68;
                for (g_103 = 1; (g_103 <= 5); g_103 += 1)
                { 
                    int32_t *l_353 = &l_289[0];
                    int32_t **l_355 = &g_68;
                    int i;
                    (*l_353) |= g_130[g_103];
                    if (p_37)
                        continue;
                    (*l_353) &= 0xB8496F06L;
                    if (g_103)
                        goto lbl_354;
                    (*l_355) = &g_69;
                }
                l_261[4][3][0] ^= (safe_rshift_func_int16_t_s_s(p_37, 13));
                l_359 = &g_5[1];
            }
            else
            { 
                return l_313;
            }
            if (l_306)
            { 
                int16_t l_366[1];
                int32_t *l_377 = &g_144[2].f2.f1;
                int i;
                for (i = 0; i < 1; i++)
                    l_366[i] = 0L;
                for (l_262 = 5; (l_262 >= 0); l_262 -= 1)
                { 
                    uint8_t *l_360 = &g_361;
                    int32_t *l_367 = (void*)0;
                    uint32_t l_368 = 1UL;
                    l_247[2].f1 = (((*g_311) == (((*l_271) = p_37) >= (((*l_360) = g_12) == (*l_359)))) > ((((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((p_37 > (p_37 < (0x2374L | (-4L)))) | l_366[0]), l_262)), 65535UL)) ^ l_300) , p_37) == g_233[5][1][3].f0.f0));
                    if (l_368)
                        continue;
                    if ((*l_359))
                        continue;
                }
                (*l_377) = (((void*)0 == &g_102) , ((safe_rshift_func_int8_t_s_s(((g_20 , ((safe_sub_func_int8_t_s_s((0xEDF8L == (((g_236[0].f0.f0 > p_37) , (((((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((void*)0 != &g_103) | l_306), l_247[2].f0)), p_37)) , p_37) >= 3L) , (*g_311)) >= 0xE84EA6F8L)) == p_37)), p_37)) <= l_366[0])) & l_322[0][0][0]), 2)) > 0x10F59383L));
                (*l_377) = (!(safe_mod_func_int32_t_s_s(0x35917724L, ((*g_311) |= ((safe_mod_func_int16_t_s_s((p_37 > (+(safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(((g_388[1] = &g_361) == ((safe_add_func_int16_t_s_s(((!(+(safe_add_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((((*g_199) == (*g_199)) && (l_397 != &g_312[1][3])) <= (*l_359)), l_306)) > 0x8D41L), 0x857FL)))) && p_37), l_262)) , (void*)0)), 0xF397L)), 3)))), g_236[0].f0.f1)) , 6UL)))));
            }
            else
            { 
                uint8_t l_399 = 0xB8L;
                int32_t l_402 = 0x2A3F9073L;
                uint64_t **l_403 = (void*)0;
                uint64_t **l_406 = (void*)0;
                for (g_361 = 0; (g_361 <= 5); g_361 += 1)
                { 
                    int32_t *l_398[7] = {(void*)0,(void*)0,&g_5[2],(void*)0,(void*)0,&g_5[2],(void*)0};
                    uint64_t **l_405 = (void*)0;
                    uint64_t ***l_404 = &l_405;
                    int32_t **l_410 = &l_398[3];
                    int i;
                    l_399++;
                    l_402 = (-1L);
                    (*l_410) = (((*g_311) >= (l_289[1] = ((l_406 = ((*l_404) = (l_403 = l_403))) == (l_409 = g_407)))) , &l_402);
                }
            }
            if ((safe_mul_func_int8_t_s_s(l_313, l_413)))
            { 
                uint16_t l_415 = 0xA4EDL;
                union U2 l_432 = {{0xC8B6E1BD89AB3EE1LL,0xF06CB067L}};
                uint16_t *l_435 = &l_415;
                int32_t *l_436 = (void*)0;
                int32_t *l_437[6];
                int16_t ** const ***l_496 = &g_492;
                uint8_t **l_523 = &g_388[1];
                uint8_t ***l_522 = &l_523;
                int i;
                for (i = 0; i < 6; i++)
                    l_437[i] = &l_239;
                for (g_361 = 0; (g_361 <= 5); g_361 += 1)
                { 
                    int32_t *l_414 = &l_289[1];
                    int i;
                    l_415 &= ((*l_414) = g_130[g_69]);
                }
                if ((l_416 , (l_300 = (l_438[0] = (safe_div_func_uint16_t_u_u(0xBDA9L, (safe_rshift_func_uint16_t_u_s(((*l_435) = (safe_mod_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((**g_407) <= (safe_mul_func_uint16_t_u_u(((*l_350) &= ((((+((safe_mod_func_int16_t_s_s(0xBD77L, (((((*g_311) == (l_432 , (safe_mod_func_int32_t_s_s(((p_37 ^ 0x15L) <= (-8L)), (*g_311))))) | 6L) > (-5L)) ^ p_37))) && p_37)) != p_37) > (*l_359)) < (*l_359))), l_239))), l_247[2].f0)), p_37)) > l_247[2].f1) , (void*)0) == &g_235), (**g_407)))), 7))))))))
                { 
                    int16_t l_441 = 0x63BCL;
                    int16_t ****l_443 = &g_169[4];
                    int16_t *****l_442 = &l_443;
                    const int32_t l_455[2] = {(-5L),(-5L)};
                    uint8_t l_463[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_463[i] = 9UL;
                    if (p_37)
                        break;
                    if (l_247[2].f1)
                        continue;
                    g_68 = &l_261[2][0][0];
                    (*l_442) = (((safe_mod_func_int64_t_s_s(l_441, 0x93BFE93EF1349D58LL)) <= p_37) , (void*)0);
                    l_239 = (+((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((((l_322[0][0][0] || (p_37 ^ (l_300 > ((safe_div_func_int8_t_s_s((*l_359), ((*l_286) |= (safe_div_func_uint8_t_u_u(l_455[0], ((safe_mod_func_uint8_t_u_u((l_462.f1 = ((*l_271) = (safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(6UL, (l_462 , 0x2159L))), g_69)))), l_455[1])) ^ 3L)))))) <= (*l_359))))) && l_463[0]) , (-1L)), 1)) != g_69), 0xC81DL)) < (*g_68)));
                }
                else
                { 
                    g_74.f1 ^= ((void*)0 != &g_233[5][1][3]);
                }
                for (l_462.f1 = 5; (l_462.f1 >= 0); l_462.f1 -= 1)
                { 
                    const uint64_t ****l_469 = &l_466;
                    g_144[2].f2.f1 = ((safe_mod_func_uint16_t_u_u((&l_409 == ((*l_469) = l_466)), 2L)) < (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((void*)0 == &g_236[0]), 0)), ((!(-8L)) == ((*g_311) = (safe_unary_minus_func_int16_t_s((((*l_271) = 0UL) || 0x6BL))))))));
                    l_300 ^= (safe_mod_func_int64_t_s_s((l_247[2].f0 , 0L), p_37));
                    ++g_479[2];
                }
                for (l_416.f2 = 0; (l_416.f2 <= 5); l_416.f2 += 1)
                { 
                    int16_t l_486 = (-1L);
                    uint64_t *l_511 = &l_413;
                    uint16_t l_512 = 65532UL;
                    int32_t l_513 = (-3L);
                    l_513 ^= (safe_mod_func_uint64_t_u_u(((((safe_sub_func_uint8_t_u_u(p_37, l_486)) || ((((!(((l_496 = (g_491 = l_488)) == (void*)0) || (safe_add_func_uint64_t_u_u((*g_408), ((*l_511) = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((l_505 ^ (safe_lshift_func_int8_t_s_s(((*l_286) ^= (safe_rshift_func_uint8_t_u_u(l_510[2], 2))), (*l_359)))), p_37)) >= p_37), 4)), 2)) != 0x08426D6A88F2D55BLL)))))) & l_486) < p_37) >= 0xBBL)) , 0xE83A8E64L) | l_512), l_510[2]));
                }
                l_524 &= ((l_416 , l_514) == (l_515 , ((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s(1L, (((**l_488) = (**l_496)) != (void*)0))) || ((((safe_add_func_int64_t_s_s((((*l_522) = (void*)0) != (*l_241)), 0xC272F5E644F59E82LL)) | p_37) <= l_322[0][0][0]) <= 1L)) | 0x522EL), (*l_359))) , (void*)0)));
            }
            else
            { 
                int8_t *l_532 = &g_12;
                int32_t *l_539[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_539[i] = &l_247[2].f1;
                for (l_413 = 0; (l_413 <= 5); l_413 += 1)
                { 
                    const uint32_t l_527[3][1] = {{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL}};
                    int32_t l_533 = (-1L);
                    int32_t *l_536 = (void*)0;
                    int32_t *l_537[3][3] = {{&g_74.f1,&l_261[4][3][0],&g_74.f1},{(void*)0,(void*)0,(void*)0},{&g_74.f1,&l_261[4][3][0],&g_74.f1}};
                    int i, j;
                    l_533 = (safe_add_func_uint64_t_u_u(l_527[1][0], (p_37 >= ((g_144[2] , (safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(0xE3EAL, (func_50(l_286, l_532, (*g_235), l_253, (*g_311)) , 0x1090L))), 0xDE4656F078F233DELL))) != 1UL))));
                    l_300 |= ((safe_mod_func_uint64_t_u_u(p_37, 0xC987BE1634E99069LL)) <= 0x1248L);
                    if ((*g_68))
                        break;
                }
                for (l_275 = 0; (l_275 <= 5); l_275 += 1)
                { 
                    int32_t **l_538 = &g_68;
                    l_539[2] = ((*l_538) = &l_300);
                }
                return p_37;
            }
            if (((*g_408) == ((*l_548) = ((((l_542 = l_540[3]) == &l_489) >= (safe_rshift_func_uint8_t_u_u((((*l_397)--) <= (((*g_408) && ((((g_20 , ((&p_37 != &p_37) < 0x3BDA51932E26F1D8LL)) , (*l_359)) & p_37) && 0x8A61E69C4B8A8CAELL)) <= g_130[0])), 4))) & 1L))))
            { 
                int32_t * const l_549 = &l_247[2].f1;
                int32_t **l_550 = (void*)0;
                int32_t **l_551 = &g_68;
                (*l_551) = l_549;
            }
            else
            { 
                uint64_t ** const *l_554 = &g_407;
                uint64_t ** const **l_555 = (void*)0;
                uint64_t ** const **l_560[2];
                int32_t l_574 = 1L;
                int32_t *l_575[5] = {&g_144[2].f0.f1,&g_144[2].f0.f1,&g_144[2].f0.f1,&g_144[2].f0.f1,&g_144[2].f0.f1};
                union U3 **l_581 = &l_580;
                int i;
                for (i = 0; i < 2; i++)
                    l_560[i] = &l_554;
                l_261[4][3][0] |= (((safe_mod_func_uint32_t_u_u(0x9D395F22L, (((*l_359) < ((l_561 = (g_556 = l_554)) != (void*)0)) , (*l_359)))) & ((*l_273) = ((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*l_286) |= (safe_rshift_func_int16_t_s_u(((((*g_311) >= (safe_div_func_int8_t_s_s(((p_37 < p_37) == g_18.f0.f1), l_574))) < (*g_311)) < p_37), 14))) ^ p_37), 6UL)), l_313)) || p_37))) > l_510[2]);
                g_577++;
                (*l_581) = l_580;
            }
        }
    }
    for (p_37 = 15; (p_37 != 19); p_37 = safe_add_func_uint16_t_u_u(p_37, 1))
    { 
        uint64_t **l_594 = &g_408;
        uint64_t ***l_596[6] = {&g_407,&g_407,&g_407,&g_407,&g_407,&g_407};
        union U2 l_598 = {{0L,-1L}};
        int16_t *****l_599 = &l_543;
        int32_t l_600 = 0xA8F7F17FL;
        int32_t *l_601 = &g_144[2].f4;
        int i;
        (*l_601) = ((safe_mul_func_uint8_t_u_u((p_37 >= (((*g_559) = l_576) & (((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u((l_600 ^= (safe_mul_func_int16_t_s_s((((*g_311)++) == ((*g_556) != (l_597 = (l_595[0] = l_594)))), (l_239 = ((p_37 , (void*)0) == ((l_598 , g_233[5][1][3].f0.f1) , l_599)))))), 4)) <= p_37), g_74.f0)) , 7UL) , l_598.f0.f1))), 1UL)) && 0UL);
    }
    return p_37;
}



static int8_t ** func_38(int8_t ** p_39, int8_t  p_40, uint16_t  p_41, int32_t  p_42, int8_t * p_43)
{ 
    union U1 l_58 = {{0x3497140DA8F9E1C2LL,4L}};
    int8_t *l_59[4][7] = {{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12}};
    struct S0 *l_73 = &g_74;
    uint32_t l_76 = 1UL;
    uint32_t l_99 = 8UL;
    int32_t l_112 = 0x4CAC200EL;
    int32_t **l_218 = &g_68;
    int32_t *l_219[5][3] = {{(void*)0,(void*)0,(void*)0},{&l_112,&l_112,&l_112},{(void*)0,(void*)0,(void*)0},{&l_112,&l_112,&l_112},{(void*)0,(void*)0,(void*)0}};
    int64_t *l_224[5][3][6] = {{{&g_102,(void*)0,&g_102,(void*)0,&g_102,&g_102},{&g_102,(void*)0,(void*)0,&g_102,(void*)0,&g_102},{&g_102,(void*)0,&g_102,(void*)0,(void*)0,&g_102}},{{&g_102,&g_102,(void*)0,&g_102,(void*)0,&g_102},{(void*)0,(void*)0,&g_102,&g_102,(void*)0,(void*)0},{&g_102,(void*)0,&g_102,(void*)0,&g_102,&g_102}},{{&g_102,(void*)0,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{(void*)0,(void*)0,&g_102,(void*)0,&g_102,(void*)0}},{{&g_102,&g_102,(void*)0,(void*)0,&g_102,&g_102},{(void*)0,&g_102,(void*)0,&g_102,(void*)0,(void*)0},{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102}},{{&g_102,&g_102,&g_102,&g_102,&g_102,&g_102},{(void*)0,(void*)0,&g_102,(void*)0,&g_102,(void*)0},{&g_102,&g_102,(void*)0,(void*)0,&g_102,&g_102}}};
    uint32_t l_230 = 2UL;
    int8_t **l_231 = (void*)0;
    int i, j, k;
    if (g_12)
    { 
        union U4 l_56 = {0x7AL};
        struct S0 l_57[2][2][7] = {{{{-2L,1L},{0x26DC75DF642D9490LL,-1L},{3L,1L},{0x26DC75DF642D9490LL,-1L},{-2L,1L},{-2L,1L},{0x26DC75DF642D9490LL,-1L}},{{0xF7F2F1E73E4F9F01LL,1L},{0xFC6A3F0BDE8AFF65LL,0xE17C927DL},{0xF7F2F1E73E4F9F01LL,1L},{0x10320BA2C160EC25LL,0xD5AB883EL},{0x10320BA2C160EC25LL,0xD5AB883EL},{0xF7F2F1E73E4F9F01LL,1L},{0xFC6A3F0BDE8AFF65LL,0xE17C927DL}}},{{{0x26DC75DF642D9490LL,-1L},{0x0D5D742CC3231A29LL,-4L},{3L,1L},{3L,1L},{0x0D5D742CC3231A29LL,-4L},{0x26DC75DF642D9490LL,-1L},{0x0D5D742CC3231A29LL,-4L}},{{0xF7F2F1E73E4F9F01LL,1L},{0x10320BA2C160EC25LL,0xD5AB883EL},{0x10320BA2C160EC25LL,0xD5AB883EL},{0xF7F2F1E73E4F9F01LL,1L},{0xFC6A3F0BDE8AFF65LL,0xE17C927DL},{0xF7F2F1E73E4F9F01LL,1L},{0x10320BA2C160EC25LL,0xD5AB883EL}}}};
        int16_t l_60 = 1L;
        int32_t *l_77 = &g_74.f1;
        int8_t **l_78[5][6][5] = {{{&l_59[0][6],&l_59[2][2],&g_11[1][1],&l_59[3][3],&l_59[3][6]},{(void*)0,&l_59[0][6],(void*)0,&l_59[0][6],&g_11[1][1]},{&l_59[0][6],&l_59[0][6],&g_11[1][1],&g_11[1][1],(void*)0},{(void*)0,&l_59[0][6],&l_59[3][6],&l_59[3][0],&g_11[1][1]},{&g_11[0][0],&l_59[0][6],&g_11[1][1],(void*)0,&l_59[0][6]},{(void*)0,&l_59[2][2],(void*)0,(void*)0,&l_59[0][6]}},{{&l_59[0][6],(void*)0,&g_11[1][1],&l_59[0][5],&g_11[1][1]},{(void*)0,(void*)0,&l_59[0][6],(void*)0,(void*)0},{&l_59[0][6],&g_11[1][0],&l_59[0][6],(void*)0,&g_11[1][1]},{(void*)0,&g_11[0][1],&g_11[1][1],&l_59[3][0],&l_59[3][6]},{&g_11[1][1],&g_11[1][0],(void*)0,&g_11[1][1],&g_11[1][1]},{&g_11[1][1],(void*)0,&g_11[1][1],&l_59[0][6],(void*)0}},{{(void*)0,(void*)0,&l_59[3][6],&l_59[3][3],&g_11[1][1]},{&l_59[0][6],&l_59[2][2],&g_11[1][1],&l_59[3][3],&l_59[3][6]},{(void*)0,&l_59[0][6],(void*)0,&l_59[0][6],&g_11[1][1]},{&l_59[0][6],&l_59[0][6],&g_11[1][1],&g_11[1][1],(void*)0},{(void*)0,&l_59[0][6],&l_59[3][6],&l_59[3][0],&g_11[1][1]},{&g_11[0][0],&l_59[0][6],&g_11[1][1],(void*)0,&l_59[0][6]}},{{(void*)0,&l_59[2][2],(void*)0,(void*)0,&l_59[0][6]},{&l_59[0][6],(void*)0,&g_11[1][1],&l_59[0][5],&g_11[1][1]},{(void*)0,(void*)0,&l_59[0][6],(void*)0,(void*)0},{&l_59[0][6],&g_11[1][0],&l_59[0][6],(void*)0,&g_11[1][1]},{(void*)0,&g_11[1][1],&g_11[2][1],&l_59[2][1],&l_59[0][2]},{&g_11[1][1],&l_59[0][6],&g_11[1][1],&g_11[0][0],&g_11[2][0]}},{{&g_11[1][1],&l_59[0][6],&l_59[3][1],&g_11[0][1],&l_59[0][6]},{(void*)0,&g_11[1][0],&l_59[0][2],(void*)0,&g_11[2][0]},{&l_59[3][6],&g_11[1][1],&g_11[2][0],(void*)0,&l_59[0][2]},{&l_59[0][6],&l_59[2][6],&l_59[0][6],&g_11[0][1],&l_59[3][1]},{&l_59[2][6],(void*)0,&g_11[2][0],&g_11[0][0],&g_11[1][1]},{&g_11[1][0],(void*)0,&l_59[0][2],&l_59[2][1],&g_11[2][1]}}};
        int8_t **l_79 = (void*)0;
        int i, j, k;
        for (p_40 = 0; (p_40 <= 25); p_40 = safe_add_func_int8_t_s_s(p_40, 9))
        { 
            int32_t *l_72 = &l_57[0][1][5].f1;
            struct S0 **l_75 = &l_73;
            (*l_72) = ((safe_lshift_func_int16_t_s_s((func_50((l_56 , ((*g_10) = (*g_10))), (l_57[0][1][5] , (l_58 , l_59[0][6])), g_18, l_58.f0.f0, l_60) , p_40), 9)) ^ p_41);
            (*l_75) = l_73;
        }
        (*l_77) = (l_76 || (-1L));
        return l_79;
    }
    else
    { 
        uint32_t l_100 = 0x916079B8L;
        int32_t l_108 = (-10L);
        struct S0 **l_124 = (void*)0;
        int16_t *l_129 = &g_130[5];
        int8_t *l_143[6][1][3] = {{{&g_12,&g_12,&g_12}},{{(void*)0,&g_12,(void*)0}},{{&g_12,&g_12,&g_12}},{{(void*)0,&g_12,(void*)0}},{{&g_12,&g_12,&g_12}},{{(void*)0,&g_12,(void*)0}}};
        int16_t **l_147 = &l_129;
        int32_t *l_211 = &g_144[2].f4;
        int32_t *l_212 = &g_144[2].f0.f1;
        int32_t *l_213 = &g_74.f1;
        int32_t *l_214[1][5];
        uint16_t l_215 = 0x6613L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_214[i][j] = &l_108;
        }
        if ((*g_68))
        { 
            uint32_t l_82 = 0x072FE88DL;
            int32_t **l_83 = (void*)0;
            int32_t **l_84 = &g_68;
            (*l_84) = (((safe_rshift_func_uint8_t_u_s(l_76, l_82)) ^ 0x8B361F168752EB69LL) , &g_69);
        }
        else
        { 
            return &g_11[1][1];
        }
        for (p_42 = 0; (p_42 <= 15); ++p_42)
        { 
            int64_t *l_101 = &g_102;
            uint64_t *l_106[7][4][3] = {{{&g_107,&g_107,&g_107},{&g_107,(void*)0,(void*)0},{&g_107,&g_107,&g_107},{&g_107,&g_107,(void*)0}},{{&g_107,&g_107,&g_107},{(void*)0,&g_107,&g_107},{(void*)0,&g_107,&g_107},{&g_107,&g_107,(void*)0}},{{&g_107,&g_107,&g_107},{&g_107,(void*)0,&g_107},{&g_107,&g_107,(void*)0},{(void*)0,(void*)0,&g_107}},{{&g_107,&g_107,&g_107},{(void*)0,&g_107,&g_107},{&g_107,&g_107,(void*)0},{(void*)0,(void*)0,&g_107}},{{&g_107,&g_107,(void*)0},{&g_107,&g_107,&g_107},{&g_107,(void*)0,&g_107},{&g_107,&g_107,&g_107}},{{(void*)0,&g_107,&g_107},{(void*)0,&g_107,&g_107},{&g_107,(void*)0,&g_107},{&g_107,&g_107,&g_107}},{{&g_107,(void*)0,(void*)0},{&g_107,&g_107,&g_107},{&g_107,&g_107,(void*)0},{&g_107,&g_107,&g_107}}};
            int16_t *l_111 = (void*)0;
            int32_t l_113 = 0L;
            struct S0 **l_126 = &l_73;
            uint8_t l_154 = 1UL;
            int16_t ***l_165 = (void*)0;
            int8_t *l_207 = &g_12;
            union U1 l_208 = {{0xEF8352AC2D4355F6LL,-1L}};
            int32_t l_210 = 1L;
            int i, j, k;
            (*g_68) = (((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((((g_69 <= ((((l_112 = (safe_mod_func_int8_t_s_s(((safe_div_func_int64_t_s_s(g_18.f0.f1, (safe_mod_func_int8_t_s_s(p_40, (safe_lshift_func_int8_t_s_s(l_99, 2)))))) ^ (g_103 &= ((*l_101) = l_100))), ((safe_sub_func_int64_t_s_s(g_18.f0.f0, (g_107--))) , 0x2BL)))) & g_5[0]) && g_18.f0.f1) <= l_113)) <= l_100) || 18446744073709551614UL), 4)) ^ g_74.f0), p_41)) && l_58.f0.f1) , 0xBABBD54EL);
            (*g_68) |= ((p_40 | 0UL) > g_20.f0);
            for (l_99 = (-25); (l_99 > 41); l_99 = safe_add_func_int64_t_s_s(l_99, 9))
            { 
                struct S0 ***l_125 = &l_124;
                int32_t l_131 = 0x1FAE94C9L;
                int64_t *l_134 = &g_102;
                for (g_107 = 0; (g_107 < 52); ++g_107)
                { 
                    if (p_41)
                        break;
                    if ((*g_68))
                        continue;
                }
            }
            for (g_74.f1 = (-3); (g_74.f1 == (-21)); g_74.f1 = safe_sub_func_uint8_t_u_u(g_74.f1, 5))
            { 
                int16_t * const *l_164 = &l_129;
                int16_t * const **l_163[5][2] = {{&l_164,&l_164},{&l_164,(void*)0},{&l_164,(void*)0},{&l_164,&l_164},{&l_164,&l_164}};
                int16_t ***l_167 = &l_147;
                uint64_t l_201[7] = {0x3A565356F8BEA3A2LL,0UL,0x3A565356F8BEA3A2LL,0x3A565356F8BEA3A2LL,0UL,0x3A565356F8BEA3A2LL,0x3A565356F8BEA3A2LL};
                uint8_t *l_206 = &l_154;
                int32_t *l_209 = &g_144[2].f4;
                int i, j;
                for (l_100 = 0; (l_100 == 53); l_100++)
                { 
                    int32_t *l_152 = &l_112;
                    int32_t *l_153[4][2];
                    int16_t ****l_166 = (void*)0;
                    int16_t ****l_168[2];
                    const int32_t *l_176 = (void*)0;
                    const int32_t **l_175 = &l_176;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_153[i][j] = &l_108;
                    }
                    for (i = 0; i < 2; i++)
                        l_168[i] = &l_165;
                    ++l_154;
                    (*l_175) = ((safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((p_40 = (g_107 , (safe_sub_func_uint16_t_u_u(p_42, (p_42 , (l_163[4][0] == (g_169[4] = (l_167 = l_165)))))))) == (safe_add_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((g_130[2] > (0x31B4L > p_41)), 0x21L)) & 0x69A602268D07ABCELL), 6L))), g_74.f0)), p_41)) , (void*)0);
                }
                for (g_107 = (-30); (g_107 != 9); ++g_107)
                { 
                    int32_t l_189 = (-1L);
                    int32_t **l_190 = &g_68;
                    if (p_41)
                        break;
                }
            }
            l_210 = l_210;
        }
        ++l_215;
    }
    l_219[4][1] = ((*l_218) = &p_42);
    g_69 |= ((**l_218) | (((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((p_40 >= ((g_102 = 0L) || 5L)), (safe_add_func_int64_t_s_s(p_40, ((safe_unary_minus_func_int8_t_s(((((safe_mul_func_int16_t_s_s(((**g_199) , (255UL <= l_230)), 6UL)) && p_41) && g_130[5]) <= g_130[5]))) | (*g_68)))))), g_5[0])) | p_42) | 1L));
    return l_231;
}



static const union U1  func_50(int8_t * p_51, int8_t * p_52, union U1  p_53, int8_t  p_54, uint32_t  p_55)
{ 
    int32_t *l_61 = &g_5[0];
    const struct S0 *l_62 = &g_18.f0;
    const struct S0 **l_63 = &l_62;
    int32_t **l_64 = (void*)0;
    int32_t **l_65 = &l_61;
    int32_t *l_67 = &g_5[0];
    int32_t **l_66[7];
    union U2 l_70 = {{0L,1L}};
    const union U1 l_71 = {{0xFBA308D5B94995FBLL,0x3C6211EEL}};
    int i;
    for (i = 0; i < 7; i++)
        l_66[i] = &l_67;
    l_61 = l_61;
    (*l_63) = l_62;
    g_68 = ((*l_65) = l_61);
    (*l_65) = (l_70 , (*l_65));
    return l_71;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_18.f0.f0, "g_18.f0.f0", print_hash_value);
    transparent_crc(g_18.f0.f1, "g_18.f0.f1", print_hash_value);
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_130[i], "g_130[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_233[i][j][k].f0.f0, "g_233[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_233[i][j][k].f0.f1, "g_233[i][j][k].f0.f1", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_236[i].f0.f0, "g_236[i].f0.f0", print_hash_value);
        transparent_crc(g_236[i].f0.f1, "g_236[i].f0.f1", print_hash_value);

    }
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_303.f0, "g_303.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_312[i][j], "g_312[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_479[i], "g_479[i]", print_hash_value);

    }
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_680.f0.f0, "g_680.f0.f0", print_hash_value);
    transparent_crc(g_680.f0.f1, "g_680.f0.f1", print_hash_value);
    transparent_crc(g_690.f0, "g_690.f0", print_hash_value);
    transparent_crc(g_690.f1, "g_690.f1", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    transparent_crc(g_957, "g_957", print_hash_value);
    transparent_crc(g_958, "g_958", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1281, "g_1281", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1380[i], "g_1380[i]", print_hash_value);

    }
    transparent_crc(g_1381, "g_1381", print_hash_value);
    transparent_crc(g_1383, "g_1383", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1409[i], "g_1409[i]", print_hash_value);

    }
    transparent_crc(g_1459, "g_1459", print_hash_value);
    transparent_crc(g_1460, "g_1460", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1461[i], "g_1461[i]", print_hash_value);

    }
    transparent_crc(g_1469, "g_1469", print_hash_value);
    transparent_crc(g_1502, "g_1502", print_hash_value);
    transparent_crc(g_1530, "g_1530", print_hash_value);
    transparent_crc(g_1789, "g_1789", print_hash_value);
    transparent_crc(g_1877, "g_1877", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
