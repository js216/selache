// SPDX-License-Identifier: MIT
// cctest_csmith_93764379.c --- cctest case csmith_93764379 (csmith seed 2474001273)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x78b39b95 */
/* @exp_ticks 0x7d14 */

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

// Options:   -s 2474001273 -o /tmp/csmith_gen_m1n50m05/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint16_t  f0;
   const uint8_t  f1;
};

union U1 {
   struct S0  f0;
   const int32_t  f1;
};


static int32_t g_2 = 9L;
static int16_t g_13 = 0xAFE3L;
static uint8_t g_21 = 248UL;
static int32_t g_28 = 0x4A11600DL;
static uint32_t g_61 = 0xB364FEF5L;
static int8_t g_63 = 0xD1L;
static int32_t g_70 = 7L;
static int64_t g_73 = 0xDBC0BA889B05F673LL;
static union U1 g_74 = {{65535UL,251UL}};
static int64_t g_75[4] = {3L,3L,3L,3L};
static uint8_t g_91 = 0UL;
static uint16_t g_107[4][6] = {{65532UL,65532UL,65529UL,65532UL,65532UL,65529UL},{65532UL,65532UL,65529UL,65532UL,65532UL,65529UL},{65532UL,65532UL,65529UL,65532UL,65532UL,65529UL},{65532UL,65532UL,65529UL,65532UL,65532UL,65529UL}};
static int8_t * const g_109 = &g_63;
static int8_t * const *g_108 = &g_109;
static int32_t g_110 = 0x2BDBE1E6L;
static int16_t *g_112 = (void*)0;
static uint8_t g_121 = 0x8DL;
static int32_t *g_123 = (void*)0;
static int16_t g_127[3] = {3L,3L,3L};
static uint32_t g_137 = 0x3C997210L;
static int32_t g_161[2][2][3] = {{{0x7EEAFC45L,0x7EEAFC45L,1L},{0x12287F11L,0x12287F11L,0xF0C8DF09L}},{{0x7EEAFC45L,0x7EEAFC45L,1L},{0x12287F11L,0x12287F11L,0xF0C8DF09L}}};
static int16_t g_162 = 1L;
static uint8_t g_163 = 255UL;
static int32_t g_206 = (-4L);
static int8_t g_207 = 0x48L;
static int16_t g_210 = 0xD3F7L;
static uint32_t g_215[5][6] = {{0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L},{0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L},{0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L},{0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L},{0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L,0xF4B66F68L}};
static int16_t **g_218 = (void*)0;
static int32_t *g_221 = &g_70;
static int32_t *g_222 = &g_161[0][1][2];
static int32_t * const * const g_249 = &g_222;
static int32_t * const * const *g_248[2] = {&g_249,&g_249};
static int8_t *g_261 = &g_63;
static int8_t **g_260 = &g_261;
static int8_t ***g_259 = &g_260;
static int8_t ****g_258 = &g_259;
static uint8_t g_357 = 1UL;
static const int64_t *g_369 = &g_73;
static const int64_t **g_368 = &g_369;
static const int64_t ***g_367[5][1] = {{(void*)0},{&g_368},{(void*)0},{&g_368},{(void*)0}};
static uint16_t g_395 = 65533UL;
static uint8_t *g_407 = (void*)0;
static uint8_t **g_406 = &g_407;
static int64_t g_414 = 1L;
static int64_t g_415 = 0x7F85B942BDC13603LL;
static uint64_t g_416 = 0xB8496F064E6E990BLL;
static uint8_t g_424 = 255UL;
static uint64_t g_430 = 0x2C5261853A4BD303LL;
static uint32_t g_474 = 0x22ACAEEDL;
static struct S0 *g_477 = &g_74.f0;
static int32_t g_500 = 0x2C04C6FCL;
static uint32_t g_506 = 4294967288UL;
static int16_t g_509[1][4] = {{0xE0F0L,0xE0F0L,0xE0F0L,0xE0F0L}};
static const int16_t g_536 = 0xA8C6L;
static int16_t g_541 = (-1L);
static uint16_t g_542 = 0xC44CL;
static int32_t **g_670 = &g_123;
static int32_t ** const *g_669 = &g_670;
static uint32_t g_690 = 0UL;
static uint16_t g_695 = 2UL;
static int8_t ****g_700 = (void*)0;
static uint16_t *g_710 = (void*)0;
static uint16_t **g_709 = &g_710;
static uint16_t g_716 = 0UL;
static int64_t *g_755 = &g_415;
static int64_t **g_754 = &g_755;
static uint32_t g_765 = 18446744073709551615UL;
static int16_t g_776 = 0x3256L;
static int16_t g_777 = 0x6A0DL;
static int32_t g_778[7][5][3] = {{{0x8744671DL,(-1L),4L},{0x8744671DL,1L,1L},{0x8744671DL,0x1B718C0FL,0x8744671DL},{0x8744671DL,(-1L),4L},{0x8744671DL,1L,1L}},{{0x8744671DL,0x1B718C0FL,0x8744671DL},{0x8744671DL,(-1L),4L},{0x8744671DL,1L,1L},{0x8744671DL,0x1B718C0FL,0x8744671DL},{0x8744671DL,(-1L),4L}},{{0x8744671DL,1L,1L},{0x8744671DL,0x1B718C0FL,0x8744671DL},{0x8744671DL,(-1L),4L},{0x8744671DL,1L,1L},{0x8744671DL,0x1B718C0FL,0x8744671DL}},{{0x8744671DL,(-1L),4L},{0x8744671DL,1L,1L},{0x8744671DL,0x1B718C0FL,0x8744671DL},{0x8744671DL,(-1L),4L},{0x8744671DL,1L,1L}},{{0x8744671DL,0x1B718C0FL,0x8744671DL},{0x8744671DL,(-1L),4L},{0x8744671DL,1L,1L},{0x8744671DL,0x1B718C0FL,0x8744671DL},{0x8744671DL,(-1L),4L}},{{0x8744671DL,1L,1L},{0x8744671DL,0x1B718C0FL,0x8744671DL},{0x8744671DL,(-1L),4L},{0x8744671DL,1L,1L},{0x8744671DL,0x1B718C0FL,0x8744671DL}},{{0x8744671DL,(-1L),4L},{0x8744671DL,1L,1L},{0x8744671DL,0x1B718C0FL,0x8744671DL},{0x8744671DL,(-1L),4L},{0x8744671DL,1L,1L}}};
static uint32_t *g_783 = &g_61;
static uint32_t **g_782 = &g_783;
static struct S0 *g_832 = &g_74.f0;
static int32_t **g_905 = &g_222;
static int32_t ***g_904 = &g_905;
static int32_t **** const g_903 = &g_904;
static int32_t **** const *g_902 = &g_903;
static int8_t g_937 = (-1L);
static const uint8_t *g_984 = &g_121;
static const uint8_t **g_983 = &g_984;
static const uint8_t ***g_982[7][3] = {{(void*)0,(void*)0,&g_983},{&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983},{(void*)0,&g_983,&g_983},{&g_983,&g_983,&g_983},{&g_983,&g_983,&g_983}};
static const uint8_t ****g_981 = &g_982[0][2];
static const uint8_t *****g_980 = &g_981;
static uint8_t ***g_988 = &g_406;
static uint8_t ****g_987 = &g_988;
static uint8_t *****g_986 = &g_987;
static int32_t **g_1022[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t **g_1023[4][4][3] = {{{(void*)0,(void*)0,(void*)0},{&g_123,(void*)0,(void*)0},{&g_123,&g_123,&g_123},{&g_123,&g_123,(void*)0}},{{&g_123,(void*)0,&g_123},{&g_123,(void*)0,&g_123},{(void*)0,&g_123,&g_123},{(void*)0,(void*)0,(void*)0}},{{&g_123,&g_123,(void*)0},{&g_123,(void*)0,&g_123},{(void*)0,&g_123,(void*)0},{&g_123,(void*)0,&g_123}},{{(void*)0,&g_123,&g_123},{(void*)0,(void*)0,(void*)0},{&g_123,&g_123,&g_123},{(void*)0,&g_123,(void*)0}}};
static int16_t ****g_1092 = (void*)0;
static int32_t ***g_1132[7] = {&g_670,&g_1023[1][0][0],&g_670,&g_670,&g_1023[1][0][0],&g_670,&g_670};



static uint8_t  func_1(void);
static int32_t  func_5(int16_t  p_6, uint32_t  p_7, int32_t  p_8, uint16_t  p_9, uint32_t  p_10);
static int64_t  func_15(int32_t  p_16, const int16_t * p_17, int16_t * p_18, uint16_t  p_19);
static int16_t * func_24(uint8_t * p_25, int16_t  p_26);
static int32_t  func_31(const int64_t  p_32, uint8_t  p_33, uint64_t  p_34);
static int32_t  func_37(int32_t * p_38, union U1  p_39, int16_t  p_40, int64_t  p_41, int16_t * p_42);
static int32_t * func_43(int8_t  p_44);
static const uint32_t  func_45(struct S0  p_46);




static uint8_t  func_1(void)
{ 
    int32_t l_537[5] = {0xAD79AE35L,0xAD79AE35L,0xAD79AE35L,0xAD79AE35L,0xAD79AE35L};
    int32_t l_1192 = 1L;
    int32_t l_1196 = 0x307E4117L;
    int i;
    for (g_2 = 0; (g_2 != 6); g_2 = safe_add_func_int32_t_s_s(g_2, 6))
    { 
        int16_t *l_11 = (void*)0;
        int16_t *l_12 = &g_13;
        int64_t l_14[1];
        uint8_t *l_20 = &g_21;
        const int16_t *l_535 = &g_536;
        const int16_t **l_534 = &l_535;
        int32_t l_1174 = 0x05D6E0A5L;
        int32_t *l_1193 = &g_778[5][3][1];
        union U1 *l_1195 = &g_74;
        union U1 **l_1194 = &l_1195;
        int32_t *l_1197 = &l_537[4];
        int i;
        for (i = 0; i < 1; i++)
            l_14[i] = 0x7A5B7D8CF4C59CDCLL;
        l_1174 = func_5(((*l_12) = 1L), (((l_14[0] <= (func_15((0UL < (--(*l_20))), ((*l_534) = func_24(l_20, g_2)), &g_509[0][2], l_537[4]) != 0x9E232B54BC8717C1LL)) , l_14[0]) , 1UL), g_74.f0.f1, g_2, l_14[0]);
        (*l_1193) |= (((((((l_14[0] != (**g_260)) , ((l_1174 , (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((**g_782) = ((((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(((+((l_14[0] & (safe_div_func_uint8_t_u_u(l_537[4], 0x0EL))) >= (((*l_20) &= (safe_lshift_func_uint16_t_u_u((0x8BL <= l_1192), l_537[4]))) != (****g_258)))) > 65533UL), 255UL)) , (*g_709)) != (void*)0), (-5L))), 3)) > 0xB588L) , 0x1A0E1FEBL) , 0xCB611E27L)), (-1L))), 1UL)), 0xB244L))) && g_162)) <= 0x75L) > 6UL) == 8UL) ^ l_537[4]) || l_537[2]);
        (*l_1194) = &g_74;
        (*l_1197) = ((*l_1193) ^= l_1196);
    }
    return l_537[4];
}



static int32_t  func_5(int16_t  p_6, uint32_t  p_7, int32_t  p_8, uint16_t  p_9, uint32_t  p_10)
{ 
    int32_t l_567 = 0x4443CD03L;
    struct S0 **l_574 = &g_477;
    int32_t l_577 = 0x36A8BFF0L;
    int32_t *l_580[2];
    uint64_t l_584[4];
    int32_t **l_603 = &g_221;
    int32_t ** const *l_602[5][3] = {{&l_603,&l_603,&l_603},{&l_603,&l_603,(void*)0},{&l_603,&l_603,(void*)0},{&l_603,&l_603,&l_603},{&l_603,&l_603,&l_603}};
    uint32_t **l_785 = (void*)0;
    uint32_t *l_799[1][3][1];
    int64_t *l_839 = &g_75[1];
    int8_t ***l_917 = &g_260;
    uint8_t l_941 = 0x3EL;
    int32_t l_967 = 0x06760E6EL;
    int8_t l_1027 = 0x5EL;
    uint32_t l_1040 = 3UL;
    int32_t ***l_1133[7][6][5] = {{{&g_1022[3],&g_1022[3],(void*)0,&g_1022[5],(void*)0},{&g_670,&g_1022[0],&g_1022[5],&g_1022[5],&g_670},{&g_1023[3][0][2],&g_1023[1][0][2],&g_1022[5],&g_1023[1][0][2],(void*)0},{&g_1023[0][1][0],&g_1022[0],&g_1023[1][0][2],&g_1022[0],&g_1023[1][0][2]},{&g_1023[1][1][0],&g_1022[3],&g_1023[3][3][0],(void*)0,&g_670},{(void*)0,(void*)0,&g_1023[0][1][0],(void*)0,&g_670}},{{&g_1023[2][1][0],(void*)0,&g_670,&g_1022[5],&g_1023[1][0][2]},{&g_1022[5],&g_1022[5],&g_1023[1][1][0],(void*)0,&g_1023[1][0][2]},{&g_1022[5],&g_1023[0][0][0],&g_670,&g_1023[1][0][2],&g_670},{&g_1023[0][1][0],&g_1023[1][0][2],&g_1022[5],&g_1023[1][0][2],&g_670},{(void*)0,&g_670,&g_1023[1][0][2],(void*)0,&g_1023[1][0][2]},{(void*)0,(void*)0,(void*)0,&g_1023[2][1][0],&g_1023[1][0][2]}},{{(void*)0,&g_670,&g_1023[1][0][2],&g_1022[5],&g_670},{&g_670,&g_1023[1][3][2],&g_1022[5],&g_670,&g_670},{&g_1023[1][0][2],(void*)0,&g_1023[1][0][2],&g_1022[5],&g_1023[1][0][2]},{&g_670,&g_1023[1][0][2],&g_1023[0][0][0],&g_1022[4],(void*)0},{&g_1022[5],&g_1022[3],&g_1022[5],&g_1023[1][0][2],&g_670},{&g_1023[1][0][2],&g_670,&g_1023[0][0][0],(void*)0,(void*)0}},{{&g_1023[1][3][2],&g_670,&g_1023[1][0][2],(void*)0,&g_1023[0][1][0]},{&g_1023[0][1][0],&g_1022[5],&g_1022[5],&g_1023[2][3][2],(void*)0},{&g_1023[1][0][2],&g_1023[0][1][0],&g_1023[1][0][2],&g_1022[5],&g_1022[5]},{&g_1022[5],&g_670,(void*)0,&g_1023[1][0][2],&g_1022[5]},{(void*)0,&g_1023[1][1][0],&g_1023[1][0][2],&g_670,&g_1022[5]},{&g_1022[5],&g_1023[2][3][2],&g_1022[5],&g_1023[0][1][0],&g_1022[5]}},{{&g_1022[5],&g_1022[5],&g_670,&g_1022[0],&g_1022[4]},{(void*)0,&g_1023[1][0][2],&g_1023[1][1][0],&g_1022[5],(void*)0},{&g_1022[5],&g_1022[5],&g_670,(void*)0,&g_670},{&g_1023[1][0][2],(void*)0,&g_1022[5],&g_1023[3][0][2],&g_1023[1][0][2]},{&g_1023[1][0][2],&g_1022[4],&g_1022[4],&g_1023[1][0][2],(void*)0},{&g_1022[5],(void*)0,(void*)0,&g_1022[4],&g_1022[5]}},{{(void*)0,&g_1023[0][1][0],&g_670,&g_1022[5],(void*)0},{(void*)0,&g_1023[1][0][2],&g_1022[5],&g_1022[4],&g_670},{&g_1023[1][0][2],&g_670,&g_1022[5],&g_1023[1][0][2],(void*)0},{&g_1023[1][3][2],&g_1023[1][0][2],&g_1023[1][0][2],&g_1023[3][0][2],&g_670},{&g_1023[3][1][0],&g_670,&g_1023[2][3][2],(void*)0,&g_670},{&g_670,&g_1022[5],(void*)0,&g_1022[0],&g_1023[1][0][2]}},{{&g_1023[1][1][0],&g_670,&g_1022[5],&g_670,(void*)0},{&g_1023[1][0][2],&g_670,&g_1022[5],&g_1022[5],(void*)0},{&g_670,&g_670,&g_670,&g_1023[0][1][0],&g_1023[1][3][2]},{&g_1022[5],&g_670,(void*)0,(void*)0,&g_1023[1][0][2]},{&g_1023[1][0][2],&g_1022[5],&g_1022[3],&g_1022[5],(void*)0},{&g_670,&g_670,&g_1023[1][0][2],&g_1022[5],&g_1023[1][0][2]}}};
    int32_t ***l_1134 = &g_1023[1][0][2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_580[i] = &g_110;
    for (i = 0; i < 4; i++)
        l_584[i] = 0xE8B4579F48DB9DF9LL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_799[i][j][k] = &g_506;
        }
    }
    g_28 &= ((safe_lshift_func_uint16_t_u_s((l_567 , ((safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((((((void*)0 == l_574) , (safe_div_func_int64_t_s_s(((l_577 = ((-10L) ^ l_567)) && (safe_rshift_func_int8_t_s_s(((p_6 , g_74) , l_577), p_7))), 0xB2B2C3FE0CB6E95DLL))) != l_567) || (*g_369)), (**g_108))) , l_567), p_6)), p_10)) != l_567)), 1)) ^ 0xF717FC11L);
    for (g_91 = 0; (g_91 <= 1); g_91 += 1)
    { 
        uint16_t l_581 = 0xF5AFL;
        int32_t l_585 = 0x5188B396L;
        union U1 l_590 = {{0xCFBEL,255UL}};
        uint64_t l_593 = 0x3F5BC72F3AB5CA1FLL;
        int32_t l_594[1][4][3] = {{{1L,0x063C2FDAL,1L},{0L,0L,0L},{1L,0x063C2FDAL,1L},{0L,0L,0L}}};
        uint8_t *l_598 = &g_424;
        int32_t **l_600 = &g_123;
        int32_t ***l_599 = &l_600;
        int8_t ****l_638[2];
        int32_t **l_651 = &g_221;
        uint8_t ***l_761 = (void*)0;
        uint8_t ****l_760 = &l_761;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_638[i] = &g_259;
        l_581--;
        l_585 = l_584[0];
    }
    p_8 = p_6;
    return p_8;
}



static int64_t  func_15(int32_t  p_16, const int16_t * p_17, int16_t * p_18, uint16_t  p_19)
{ 
    int32_t *l_538 = &g_28;
    int32_t *l_539 = &g_110;
    int32_t *l_540[2];
    int32_t l_564 = 1L;
    int i;
    for (i = 0; i < 2; i++)
        l_540[i] = &g_110;
    g_542--;
    (*l_538) = p_16;
    for (g_414 = 0; (g_414 <= (-2)); g_414 = safe_sub_func_uint32_t_u_u(g_414, 5))
    { 
        uint32_t *l_553 = &g_506;
        uint32_t *l_556 = &g_61;
        int64_t *l_557 = &g_73;
        int32_t l_558 = 1L;
        int32_t l_563 = 0x8A4CF801L;
        l_564 |= ((*l_539) = (((safe_rshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s(((*l_557) &= (((*l_553) = (safe_mod_func_uint32_t_u_u(4294967295UL, p_16))) != ((*l_556) = (safe_lshift_func_int8_t_s_u((-1L), 1))))), ((l_558 > (l_558 <= ((safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(l_558, ((l_563 = 4294967295UL) , g_21))) || g_91), 0x8FL)) & p_16))) | 0x3537L))), l_558)) && p_19) > 0L));
    }
    return (*g_369);
}



static int16_t * func_24(uint8_t * p_25, int16_t  p_26)
{ 
    int32_t *l_27 = &g_28;
    int8_t *****l_313[7] = {&g_258,&g_258,&g_258,&g_258,&g_258,&g_258,&g_258};
    uint32_t l_336[3];
    int64_t *l_337 = &g_75[2];
    union U1 l_342 = {{0x4464L,253UL}};
    const int64_t *l_366 = &g_73;
    const int64_t **l_365 = &l_366;
    const int64_t *** const l_364 = &l_365;
    int16_t ***l_380 = &g_218;
    int32_t l_389 = 0L;
    int32_t l_390 = (-1L);
    int32_t l_393 = 0x7EA18E5CL;
    int32_t l_498 = (-2L);
    int32_t l_502 = 0x15538C67L;
    int32_t *l_532 = &l_390;
    int16_t *l_533 = &g_162;
    int i;
    for (i = 0; i < 3; i++)
        l_336[i] = 4294967295UL;
lbl_346:
    (*l_27) = 4L;
    if ((safe_rshift_func_uint8_t_u_s((*l_27), p_26)))
    { 
        struct S0 l_47 = {1UL,9UL};
        uint32_t l_83 = 0x1FBCDA4FL;
        union U1 l_111 = {{0UL,0x45L}};
        uint64_t l_301 = 1UL;
        int8_t *****l_328 = &g_258;
        const uint64_t l_330 = 18446744073709551615UL;
        uint8_t l_410[6] = {0x14L,0x14L,0x14L,0x14L,0x14L,0x14L};
        int32_t l_413[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i;
        if (func_31((safe_add_func_int32_t_s_s(func_37(func_43((((((func_45(l_47) > ((safe_add_func_uint16_t_u_u(((((~(safe_mul_func_int32_t_s_s(l_47.f1, ((((p_26 >= (l_27 != (void*)0)) && (safe_add_func_uint64_t_u_u(p_26, g_2))) >= l_47.f1) > l_47.f1)))) && 0UL) <= 0xABL) & g_74.f0.f0), 3L)) | 0xD7L)) & 0L) , l_83) > p_26) , p_26)), l_111, g_74.f0.f0, p_26, g_112), 1UL)), l_301, p_26))
        { 
            uint16_t l_314[6];
            uint32_t *l_326 = &g_215[3][1];
            uint32_t *l_327 = &l_83;
            int64_t *l_329 = &g_73;
            uint16_t *l_331 = (void*)0;
            int64_t **l_338 = &l_329;
            uint16_t *l_339 = (void*)0;
            uint16_t *l_340 = (void*)0;
            uint16_t *l_341 = &g_107[1][4];
            int32_t *l_343 = &g_110;
            int32_t l_350[3][3][2] = {{{0x0B4FE36AL,2L},{0x23272E7DL,0x23272E7DL},{2L,0x0B4FE36AL}},{{0x84B799F4L,0x0B4FE36AL},{2L,0x23272E7DL},{0x23272E7DL,2L}},{{0x0B4FE36AL,0x84B799F4L},{0x0B4FE36AL,2L},{0x23272E7DL,0x23272E7DL}}};
            struct S0 l_382[3][2][3] = {{{{0x3CF0L,249UL},{0x3CF0L,249UL},{0x3CF0L,249UL}},{{0x27A3L,1UL},{0x27A3L,1UL},{0x27A3L,1UL}}},{{{0x3CF0L,249UL},{0x3CF0L,249UL},{0x3CF0L,249UL}},{{0x27A3L,1UL},{0x27A3L,1UL},{0x27A3L,1UL}}},{{{0x3CF0L,249UL},{0x3CF0L,249UL},{0x3CF0L,249UL}},{{0x27A3L,1UL},{0x27A3L,1UL},{0x27A3L,1UL}}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_314[i] = 0xD498L;
            (*l_27) = (safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((g_107[0][5] = (safe_unary_minus_func_int32_t_s((((((safe_div_func_uint32_t_u_u(0x537D4A57L, (safe_mod_func_int64_t_s_s(((*l_329) = ((((safe_mul_func_uint16_t_u_u(((l_313[3] == ((((*l_327) = (l_314[5] ^ ((((*l_326) = (((safe_sub_func_int8_t_s_s((**g_260), (safe_mul_func_int8_t_s_s((g_163 , (~(safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((((l_111 , (safe_mod_func_uint16_t_u_u(((g_70 == p_26) | p_26), 2UL))) , g_137) <= (*l_27)), p_26)), g_73)))), g_63)))) > (*l_27)) != g_161[0][1][0])) == p_26) == p_26))) == p_26) , l_328)) && g_107[2][5]), (*l_27))) > 0x48006E1E5D73EC10LL) <= g_137) || p_26)), 6UL)))) == l_301) | 0x6E9EABD2L) == l_330) != 0xD0L)))) , (*l_27)), p_26)) & (****g_258)), p_26));
            (*l_343) &= (((((*l_27) = ((*l_27) > ((((*g_261) = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(l_336[2], 3)) & 0x1E40FFE85CD88943LL), ((*l_341) = (((*l_338) = l_337) != (void*)0))))) < p_26) <= (l_342 , 0x007EA7F4L)))) == l_314[1]) < l_111.f0.f0) >= 1UL);
            for (g_70 = 0; (g_70 != (-2)); g_70 = safe_sub_func_int64_t_s_s(g_70, 1))
            { 
                int8_t **l_383[3];
                int32_t l_394 = 8L;
                uint8_t **l_409 = &g_407;
                int32_t *l_411 = &g_28;
                int32_t *l_412[7] = {&l_350[1][0][0],&l_350[1][0][0],(void*)0,&l_350[1][0][0],&l_350[1][0][0],(void*)0,&l_350[1][0][0]};
                int i;
                for (i = 0; i < 3; i++)
                    l_383[i] = &g_261;
                if (l_111.f0.f1)
                    goto lbl_346;
                for (g_137 = 0; (g_137 < 25); g_137 = safe_add_func_uint64_t_u_u(g_137, 5))
                { 
                    int32_t *l_349 = &g_28;
                    int32_t *l_351 = &l_350[2][2][0];
                    int32_t *l_352 = (void*)0;
                    int32_t *l_353 = &g_28;
                    int32_t *l_354 = &g_28;
                    int32_t *l_355 = &g_28;
                    int32_t *l_356 = &g_110;
                    int16_t ***l_381 = (void*)0;
                    g_357--;
                    if (p_26)
                        continue;
                    (*l_27) = (safe_mod_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(p_26, g_74.f0.f0)), g_75[2]));
                    g_367[0][0] = l_364;
                    (*l_355) = (safe_rshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((*l_343) , ((***l_328) == (((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(9L, 6)) && (5UL ^ l_47.f1)), ((0x1B913420L <= (l_380 == l_381)) & 0x5604L))) , l_382[2][0][1]) , l_383[2]))), g_162)) , p_26) <= (**g_368)), 4));
                }
                for (g_91 = 0; (g_91 <= 4); g_91 += 1)
                { 
                    struct S0 *l_385 = (void*)0;
                    struct S0 **l_384 = &l_385;
                    int32_t *l_386 = &g_110;
                    int32_t *l_387 = &l_350[1][2][1];
                    int32_t *l_388 = &g_28;
                    int32_t *l_391 = &g_110;
                    int32_t *l_392[5][6][1] = {{{&l_389},{&g_110},{&l_390},{&g_28},{&g_110},{&g_28}},{{&l_390},{&g_110},{&l_389},{&l_389},{&g_110},{&l_390}},{{&g_28},{&g_110},{&g_28},{&l_390},{&g_110},{&l_389}},{{&l_389},{&g_110},{&l_390},{&g_28},{&g_110},{&g_28}},{{&l_390},{&g_110},{&l_389},{&l_389},{&g_110},{&l_390}}};
                    uint8_t ***l_408[6][1][2] = {{{&g_406,&g_406}},{{&g_406,&g_406}},{{&g_406,&g_406}},{{&g_406,&g_406}},{{&g_406,&g_406}},{{&g_406,&g_406}}};
                    int i, j, k;
                    (*l_384) = (void*)0;
                    g_395--;
                    (*l_27) |= ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((g_215[g_91][g_91] ^ (0L >= (0xE4L && p_26))) == (safe_sub_func_uint32_t_u_u((((g_406 = g_406) == l_409) > (&g_28 == (void*)0)), 0x88B40468L))), 1)) || l_410[2]), 9L)) & (*g_109));
                }
                if (p_26)
                    continue;
                g_416--;
            }
        }
        else
        { 
            int32_t *l_427 = &l_393;
            int32_t *l_428 = &l_413[3];
            int32_t *l_429[3];
            uint16_t *l_445 = &g_107[0][1];
            uint64_t *l_446 = &g_430;
            int32_t **l_447 = &l_429[2];
            int i;
            for (i = 0; i < 3; i++)
                l_429[i] = &l_393;
            for (g_207 = (-26); (g_207 <= 22); g_207++)
            { 
                int32_t *l_421 = &g_110;
                int32_t *l_422 = &l_413[1];
                int32_t *l_423[6][5][5] = {{{&l_413[3],(void*)0,&g_110,&l_393,&g_28},{&l_413[5],&l_413[5],&l_413[3],&l_390,&l_413[3]},{&l_413[3],&l_413[2],&l_413[2],&l_413[3],&l_390},{&l_413[5],(void*)0,&g_2,&g_28,&l_390},{&l_413[2],&l_393,&l_390,&g_110,&l_390}},{{(void*)0,(void*)0,&l_390,&g_28,&g_2},{&l_390,&l_390,&l_390,&l_413[3],&l_413[2]},{&l_413[3],&l_390,&l_413[3],&l_390,&l_413[3]},{&l_413[3],&l_390,&g_28,&l_393,&g_110},{&g_28,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_393,&l_393,&l_393,&l_390,&g_110},{&l_390,(void*)0,(void*)0,&l_413[3],&l_413[3]},{&g_110,&l_413[2],&l_413[3],&l_413[3],&l_413[2]},{(void*)0,&l_413[5],(void*)0,&l_413[3],&g_2},{&l_393,(void*)0,&l_393,&l_390,&l_390}},{{&l_413[3],(void*)0,(void*)0,&l_413[3],&l_390},{&l_393,&l_413[3],&g_28,&l_413[3],&l_390},{(void*)0,&l_413[5],&l_413[3],(void*)0,&l_413[3]},{&g_110,&g_110,&l_390,&l_413[3],&g_28},{&l_390,&l_413[3],&l_390,&l_413[3],(void*)0}},{{&l_393,&l_390,&l_390,&l_390,&l_393},{&g_28,&l_413[3],&g_2,&l_413[3],(void*)0},{&l_413[3],&g_110,&l_413[2],&l_413[3],&l_413[3]},{&l_413[3],&l_413[5],&l_413[3],&l_413[3],(void*)0},{&l_390,&l_413[3],&g_110,&l_390,&l_393}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_413[2],(void*)0,&g_110,&l_393,&g_28},{&l_413[5],&l_413[5],&l_413[3],&l_390,&l_413[3]},{&l_413[3],&l_413[2],&l_413[2],&l_413[3],&l_390},{&l_413[5],(void*)0,&g_2,&g_28,&l_390}}};
                int i, j, k;
                (*l_27) = g_74.f0.f0;
                --g_424;
            }
            g_430--;
            (*l_27) = ((*l_427) = ((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int16_t_s_s(0x9D6CL, ((((safe_rshift_func_int8_t_s_s(l_410[2], 3)) , (safe_lshift_func_uint8_t_u_s(((g_107[0][5] != (&p_26 != (void*)0)) && (((((*l_446) |= (safe_unary_minus_func_int32_t_s(((((safe_rshift_func_int16_t_s_s(p_26, 15)) || (safe_sub_func_uint8_t_u_u((((*l_445) |= g_163) >= p_26), p_26))) , (*l_27)) , 0xF026A4BCL)))) & l_47.f0) , p_26) ^ p_26)), 2))) , 0UL) ^ 0xEFL))))) > p_26));
            (*l_447) = (void*)0;
        }
        (*l_27) |= (-1L);
    }
    else
    { 
        uint64_t l_455 = 0xE896B92F2EC4FD2FLL;
        struct S0 *l_459 = &l_342.f0;
        int32_t l_461 = 0x0A9A9697L;
        int16_t *l_480 = &g_127[0];
        int32_t *l_483[5] = {&l_393,&l_393,&l_393,&l_393,&l_393};
        uint16_t l_510 = 65527UL;
        int i;
        for (g_163 = 27; (g_163 <= 34); g_163 = safe_add_func_uint32_t_u_u(g_163, 8))
        { 
            struct S0 *l_451 = (void*)0;
            struct S0 **l_450 = &l_451;
            struct S0 **l_452 = (void*)0;
            struct S0 *l_454[2][7][7] = {{{&l_342.f0,&l_342.f0,&l_342.f0,&l_342.f0,&g_74.f0,&l_342.f0,&g_74.f0},{&g_74.f0,&g_74.f0,&l_342.f0,(void*)0,(void*)0,&l_342.f0,&l_342.f0},{&g_74.f0,&g_74.f0,&g_74.f0,(void*)0,&l_342.f0,(void*)0,&g_74.f0},{(void*)0,(void*)0,&l_342.f0,&g_74.f0,&l_342.f0,&l_342.f0,&g_74.f0},{(void*)0,(void*)0,&g_74.f0,&l_342.f0,&g_74.f0,&l_342.f0,&l_342.f0},{&l_342.f0,&g_74.f0,&g_74.f0,&l_342.f0,&g_74.f0,&l_342.f0,&l_342.f0},{&l_342.f0,&g_74.f0,(void*)0,&l_342.f0,&g_74.f0,(void*)0,&l_342.f0}},{{&g_74.f0,&g_74.f0,&g_74.f0,(void*)0,&g_74.f0,(void*)0,(void*)0},{&l_342.f0,&l_342.f0,(void*)0,&l_342.f0,&l_342.f0,&g_74.f0,(void*)0},{(void*)0,(void*)0,&g_74.f0,&l_342.f0,&l_342.f0,&l_342.f0,&g_74.f0},{&l_342.f0,(void*)0,&l_342.f0,&g_74.f0,(void*)0,(void*)0,&g_74.f0},{(void*)0,&l_342.f0,(void*)0,&l_342.f0,(void*)0,&g_74.f0,&g_74.f0},{&l_342.f0,&l_342.f0,(void*)0,&g_74.f0,&g_74.f0,(void*)0,&l_342.f0},{&g_74.f0,(void*)0,&g_74.f0,&l_342.f0,&l_342.f0,&g_74.f0,(void*)0}}};
            struct S0 **l_453 = &l_454[1][5][6];
            int16_t *l_460 = &g_162;
            int32_t l_470 = (-5L);
            int32_t *l_482 = &l_390;
            int32_t l_496 = 0xF853BB08L;
            int32_t l_497 = (-8L);
            int32_t l_499 = 0xB6968DE9L;
            int32_t l_503 = 0L;
            int32_t l_504[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_504[i] = 0xB766F39BL;
            (*l_453) = ((*l_450) = (void*)0);
            if (((l_461 = ((*l_460) ^= ((l_455 >= ((+0x1006L) , (safe_lshift_func_int16_t_s_s((((((((p_26 ^ (0x0C99L < (((*l_337) &= ((((((*l_27) = (((*l_453) = l_459) == (void*)0)) >= p_26) & g_127[0]) <= g_210) , (*g_369))) && (**g_368)))) == p_26) , 0x94A3L) , p_26) > 65534UL) ^ l_455) < p_26), p_26)))) , g_61))) > 65533UL))
            { 
                const int32_t **l_462 = (void*)0;
                const int32_t *l_464[4][5][4] = {{{&l_393,&l_393,&l_393,&l_393},{&l_390,&l_390,&g_110,&g_2},{&l_390,&l_393,&g_2,&l_461},{&g_2,&l_461,&l_393,&g_2},{&l_390,&l_461,&l_393,&l_461}},{{&l_461,&l_393,&l_393,&g_2},{&l_389,&l_390,&l_393,&l_393},{&l_390,&l_393,&l_461,&l_461},{&l_390,&l_393,&l_393,&l_390},{&l_389,&l_461,&l_393,&l_393}},{{&l_461,&l_393,&l_393,&g_2},{&l_390,&l_389,&l_393,&g_2},{&g_2,&l_393,&g_2,&l_393},{&l_390,&l_461,&g_110,&l_390},{&l_390,&l_393,&l_393,&l_461}},{{&l_393,&l_393,&l_393,&l_393},{&l_390,&l_390,&g_110,&g_2},{&l_390,&l_393,&g_2,&l_461},{&g_2,&l_461,&l_393,&g_2},{&l_390,&l_461,&l_393,&l_461}}};
                const int32_t **l_463 = &l_464[0][1][2];
                int32_t l_468 = 0xD036A4EDL;
                int32_t l_471[4][6][7] = {{{0L,(-7L),0x596BDCC6L,0xC32E632FL,0x5867767CL,0x5D44BDA9L,0x83F67FE7L},{(-1L),0xB1E3F738L,0x5D44BDA9L,0x78160A71L,0x83F67FE7L,0x78160A71L,0x5D44BDA9L},{0x76508F86L,0x76508F86L,0xF2E0DB1EL,(-2L),(-1L),0xE50DB341L,0x63F66FD7L},{0x7444D8A0L,0xFEF239FBL,0x596BDCC6L,(-1L),0x3478B93CL,0x57EBB463L,0xB1E3F738L},{5L,(-2L),0x78160A71L,0xFEF239FBL,(-1L),0xFACC17FFL,0x5867767CL},{0L,0x83F67FE7L,0x3FAD2A69L,0x25B6DF71L,0x83F67FE7L,0xF2E0DB1EL,(-2L)}},{{0x7F397508L,(-3L),0xFEF239FBL,0x3697CAC5L,0x5867767CL,5L,0xB1E3F738L},{0x57EBB463L,0x5D44BDA9L,1L,0xC420A949L,5L,0x4040F5C5L,0x6E735E70L},{0x54195F14L,(-1L),(-2L),0xF117ED82L,0x5D44BDA9L,0L,0xF117ED82L},{0x596BDCC6L,(-3L),1L,0xF117ED82L,0xFE969718L,(-2L),0x3478B93CL},{1L,0x872BA1E2L,0x0B59D0CFL,0xC420A949L,0x57EBB463L,1L,0xE50DB341L},{0x89AB3EE1L,5L,0x7F397508L,0x596BDCC6L,1L,0xC32E632FL,(-1L)}},{{0L,0xF2E0DB1EL,(-1L),0xD6E4B812L,(-1L),0xF2E0DB1EL,0L},{0x6E735E70L,0xFACC17FFL,0xBEF84BF2L,0x3EF1349DL,0x5D44BDA9L,0x4040F5C5L,(-1L)},{0x89AB3EE1L,0x57EBB463L,0x5FC61098L,(-1L),0xF117ED82L,0x25B6DF71L,0x57EBB463L},{0xF117ED82L,0xE50DB341L,0xBEF84BF2L,0x5867767CL,8L,1L,(-4L)},{1L,0x78160A71L,(-1L),1L,(-4L),0xD1C8D14FL,0x3EF1349DL},{0x54195F14L,0x5D44BDA9L,0x7F397508L,1L,0xF117ED82L,0xC3F93BFEL,0L}},{{0xFEF239FBL,1L,0x0B59D0CFL,0xFACC17FFL,0xF2E0DB1EL,6L,5L},{0xD1C8D14FL,(-4L),1L,(-1L),0x78160A71L,1L,8L},{0xF117ED82L,(-4L),(-2L),(-7L),1L,(-9L),0x57EBB463L},{0L,1L,1L,0x596BDCC6L,0L,0xC70A3668L,0x78160A71L},{0x4040F5C5L,0x5D44BDA9L,0x3EF1349DL,0xBEF84BF2L,0xFACC17FFL,0x6E735E70L,0x6E735E70L},{0x5D44BDA9L,0x78160A71L,0x83F67FE7L,0x78160A71L,0x5D44BDA9L,0xB1E3F738L,(-1L)}}};
                int i, j, k;
                if (p_26)
                    break;
                (*l_27) = (-3L);
                (*l_463) = (void*)0;
                for (g_70 = 0; (g_70 <= 3); g_70 += 1)
                { 
                    int32_t *l_465 = (void*)0;
                    int32_t *l_466 = (void*)0;
                    int32_t *l_467 = &g_110;
                    int32_t *l_469 = &l_461;
                    int32_t l_472 = (-6L);
                    int32_t *l_473[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_473[i] = &l_461;
                    g_474++;
                    (*l_27) = 1L;
                    if (g_75[g_70])
                        break;
                    (*l_450) = g_477;
                    return &g_210;
                }
                for (g_207 = (-25); (g_207 < 15); g_207++)
                { 
                    return l_480;
                }
            }
            else
            { 
                int32_t **l_481[3];
                uint32_t *l_513 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_481[i] = &l_27;
                l_483[1] = (l_482 = (g_123 = &g_2));
                for (g_395 = 0; (g_395 <= 16); g_395 = safe_add_func_int64_t_s_s(g_395, 2))
                { 
                    int8_t l_501[5];
                    int32_t l_505[5][2] = {{0xEB55A9C7L,0x5B9F92A2L},{0L,0x5B9F92A2L},{0xEB55A9C7L,0L},{0x144507B0L,0x144507B0L},{0x144507B0L,0L}};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_501[i] = (-2L);
                    g_123 = func_43((*l_482));
                    l_482 = ((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((0x9EB4A091661B09A1LL & ((*l_27) = (+((g_73 , (safe_add_func_int8_t_s_s(0xD2L, (((*l_27) >= (safe_unary_minus_func_uint16_t_u(g_137))) ^ 18446744073709551615UL)))) , p_26)))), p_26)) < l_390), 0)) <= (**g_108)), 0x8EL)) , (void*)0);
                    g_506++;
                    return l_480;
                }
                l_510++;
                (*l_27) ^= (65535UL & (((*g_123) > ((((g_61 = 0UL) < (*g_123)) & ((safe_mul_func_uint8_t_u_u(1UL, (***g_259))) != p_26)) , g_215[3][5])) <= (**g_108)));
            }
        }
    }
    (*l_27) = (((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((-8L), 15)) & (18446744073709551607UL < (((((safe_mul_func_int8_t_s_s((((**g_249) = ((*l_27) <= (safe_add_func_uint32_t_u_u(0xE9B67A10L, (safe_mul_func_uint16_t_u_u(g_395, ((((((safe_sub_func_int64_t_s_s(((((((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*l_27) <= ((*l_532) = p_26)), g_424)), 0x8EL)) && (*l_27)) < p_26) , p_26) ^ p_26) , p_26), 5UL)) <= p_26) >= (*l_27)) , p_26) , (*l_27)) <= (*l_27)))))))) , (-1L)), (*l_27))) , (*g_109)) && (*l_27)) & (-7L)) , (*l_27)))), (*l_27))) == p_26) == p_26);
    return l_533;
}



static int32_t  func_31(const int64_t  p_32, uint8_t  p_33, uint64_t  p_34)
{ 
    g_28 ^= p_34;
    return g_75[1];
}



static int32_t  func_37(int32_t * p_38, union U1  p_39, int16_t  p_40, int64_t  p_41, int16_t * p_42)
{ 
    uint32_t l_120[4] = {4294967291UL,4294967291UL,4294967291UL,4294967291UL};
    int16_t *l_158 = &g_127[0];
    int32_t l_160 = (-3L);
    int8_t *l_198 = &g_63;
    int8_t **l_197[5] = {&l_198,&l_198,&l_198,&l_198,&l_198};
    int8_t ***l_196[4] = {&l_197[1],&l_197[1],&l_197[1],&l_197[1]};
    int32_t l_208 = 0xA09A699AL;
    uint32_t l_267 = 1UL;
    uint8_t *l_300 = &g_121;
    uint8_t **l_299[6][1] = {{(void*)0},{(void*)0},{&l_300},{(void*)0},{(void*)0},{&l_300}};
    int i, j;
lbl_171:
    for (g_70 = 0; (g_70 < (-3)); --g_70)
    { 
        int32_t **l_122[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        g_123 = func_43((safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s(((8L < g_107[0][4]) != ((l_120[2] < (p_39.f0.f1 != ((g_107[0][5] , (p_39.f0.f0 <= (((p_39.f0.f0 <= g_107[0][5]) && 0xCAC200E0L) <= l_120[2]))) <= 1L))) < 0x92D1L)))), g_121)), g_91)));
    }
lbl_233:
    for (g_110 = 0; (g_110 != 9); ++g_110)
    { 
        uint8_t l_130 = 0UL;
        int32_t l_131 = 0xEE16EA25L;
        int32_t l_136 = 0xC9C96BA6L;
        int8_t * const *l_150 = &g_109;
        const int16_t *l_157[3];
        uint64_t l_159 = 2UL;
        int i;
        for (i = 0; i < 3; i++)
            l_157[i] = &g_127[0];
        if ((*p_38))
        { 
            int16_t *l_126 = &g_127[0];
            int32_t l_135 = (-5L);
            int32_t l_140 = 0xFEE1C1FAL;
            int32_t l_146 = 0L;
            int32_t l_209 = (-1L);
            int32_t l_211 = 0x2F18E3F2L;
            int32_t l_212 = 0x7BAF2F34L;
            int32_t l_213 = 2L;
            int32_t l_214 = 0x563AE6E0L;
            if ((((*l_126) = 0xA162L) > (safe_div_func_uint8_t_u_u(l_130, 0x3CL))))
            { 
                int32_t *l_132 = &l_131;
                int32_t *l_133 = &g_28;
                int32_t *l_134[1];
                uint8_t *l_149 = &g_91;
                int i;
                for (i = 0; i < 1; i++)
                    l_134[i] = (void*)0;
                g_137--;
                if (l_140)
                    continue;
                (*l_133) &= (0x0BDFL && ((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((((~(*g_109)) != l_146) > (p_41 &= g_107[1][4])) , ((((safe_div_func_uint8_t_u_u(((*l_149) = ((void*)0 != &p_38)), ((p_39 , p_40) , l_146))) || g_137) , l_150) == &g_109)), l_120[0])), p_39.f0.f1)) > 0x8D18L) , 0xE3DBA419L) <= 4294967290UL));
                if ((*p_38))
                { 
                    (*l_132) = (p_39.f0.f1 & 1L);
                    l_159 = ((*l_133) = ((safe_lshift_func_uint8_t_u_s(g_110, 1)) > (l_146 || ((p_41 & (((l_136 = ((((((*l_149) = (&g_127[0] != &p_40)) || (safe_sub_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((-2L) & (l_157[2] != l_158)), 2UL)) <= g_127[0]), (*l_132)))) != g_127[0]) , g_2) || 1UL)) | 0xCF6C4FF3L) == 0xCDL)) > p_39.f0.f1))));
                    g_163++;
                }
                else
                { 
                    int32_t l_170 = (-6L);
                    (*l_132) = (g_28 = (safe_mul_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((g_74.f0 , g_162), l_170)), 0UL)));
                }
                if (g_74.f0.f1)
                    goto lbl_171;
            }
            else
            { 
                int32_t l_189 = 0xFE26F8D6L;
                int32_t *l_199 = &l_135;
                int32_t *l_200 = (void*)0;
                int32_t *l_201 = &l_131;
                int32_t *l_202 = &l_140;
                int32_t *l_203 = &l_136;
                int32_t *l_204 = &g_28;
                int32_t *l_205[3][7][2] = {{{(void*)0,(void*)0},{&l_140,(void*)0},{(void*)0,&l_140},{(void*)0,(void*)0},{&l_140,(void*)0},{(void*)0,&l_140},{(void*)0,(void*)0}},{{&l_140,(void*)0},{(void*)0,&l_140},{(void*)0,(void*)0},{&l_140,(void*)0},{(void*)0,&l_140},{(void*)0,(void*)0},{&l_140,(void*)0}},{{(void*)0,&l_140},{(void*)0,(void*)0},{&l_140,(void*)0},{(void*)0,&l_140},{(void*)0,&l_140},{&l_136,&l_140},{&l_140,&l_136}}};
                int i, j, k;
                for (g_137 = 0; (g_137 <= 15); g_137 = safe_add_func_uint32_t_u_u(g_137, 2))
                { 
                    uint64_t l_174 = 0xF434AC2647FD4F96LL;
                    uint32_t *l_190[1][5][3] = {{{&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61}}};
                    int32_t *l_191 = &g_161[0][1][2];
                    struct S0 l_192 = {6UL,0x79L};
                    uint16_t *l_193 = &g_107[0][2];
                    int32_t *l_194 = &l_160;
                    int i, j, k;
                    (*l_194) |= (((0xDF6FL | (((((l_174 >= (safe_lshift_func_uint16_t_u_u((!((~(((*l_193) = (p_39.f0.f1 , (((safe_mul_func_uint16_t_u_u(0UL, (g_162 = ((*l_126) = l_174)))) , ((((*l_191) = (safe_add_func_int32_t_s_s((1L < (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((g_61 &= ((((safe_rshift_func_uint8_t_u_u(0x1BL, 4)) , l_189) , p_39.f0) , p_39.f0.f1)), 0x8A7DDC29L)), l_131))), g_70))) , p_39.f0) , l_192)) , 65535UL))) , p_40)) == p_39.f0.f1)), 15))) & g_70) , 0xEA3A27DCL) , 0xFDC0L) & 0x40E4L)) && (*p_38)) != l_120[1]);
                    return (*p_38);
                }
                if (((0L != (*p_38)) & 0x94BCA523A4458DFDLL))
                { 
                    return l_160;
                }
                else
                { 
                    int8_t ****l_195 = (void*)0;
                    l_196[2] = (void*)0;
                }
                if (g_127[0])
                    break;
                --g_215[3][3];
            }
        }
        else
        { 
            int32_t *l_220 = &g_161[1][1][1];
            int32_t **l_219[7] = {&l_220,&l_220,&l_220,&l_220,&l_220,&l_220,&l_220};
            int32_t *l_223 = &l_208;
            int i;
            g_218 = &p_42;
            (*l_223) = ((g_221 = p_38) == (g_222 = &g_161[0][1][2]));
        }
        return (*p_38);
    }
    for (g_28 = 3; (g_28 >= 0); g_28 -= 1)
    { 
        int16_t ***l_224 = (void*)0;
        int16_t ***l_225 = &g_218;
        int32_t * const *l_247 = &g_222;
        int32_t * const * const *l_246 = &l_247;
        (*l_225) = &p_42;
        for (g_210 = 0; (g_210 <= 3); g_210 += 1)
        { 
            uint8_t *l_242[7] = {&g_121,&g_121,&g_121,&g_121,&g_121,&g_121,&g_121};
            int32_t l_245[6][7] = {{0xE3443E91L,0x256EB59EL,0x256EB59EL,0xE3443E91L,0L,0x7DC95DA5L,1L},{0x92424469L,0x7DC95DA5L,0x1A88FC1CL,0L,0L,0x1A88FC1CL,0x7DC95DA5L},{0L,0x92424469L,0x8C533A9DL,0xC4E51E7AL,0x256EB59EL,1L,1L},{0x8C533A9DL,0x92424469L,0L,0x92424469L,0x8C533A9DL,0xC4E51E7AL,0x256EB59EL},{0x1A88FC1CL,0x7DC95DA5L,0x92424469L,0xC4E51E7AL,0x8B652B0EL,0xC4E51E7AL,0x92424469L},{0x256EB59EL,0x256EB59EL,0xE3443E91L,0L,0x7DC95DA5L,1L,0x1A88FC1CL}};
            int32_t *l_256 = &l_160;
            int32_t *l_257 = &l_245[0][6];
            int8_t *****l_262 = &g_258;
            int i, j;
            for (p_41 = 0; (p_41 <= 3); p_41 += 1)
            { 
                union U1 l_241[5] = {{{0x18CDL,0x10L}},{{0x18CDL,0x10L}},{{0x18CDL,0x10L}},{{0x18CDL,0x10L}},{{0x18CDL,0x10L}}};
                int i;
                if (l_120[g_28])
                    break;
                for (g_137 = 0; (g_137 <= 4); g_137 += 1)
                { 
                    int32_t *l_229 = &l_208;
                    int32_t **l_232 = &g_123;
                    int i, j;
                    (*l_229) |= ((*p_38) &= (safe_div_func_uint8_t_u_u((~(g_107[g_28][g_28] = l_120[g_210])), 0x03L)));
                    (*p_38) &= (g_215[p_41][g_210] != (safe_lshift_func_uint16_t_u_u(g_215[(p_41 + 1)][(p_41 + 2)], 3)));
                    (*l_232) = &g_110;
                }
                for (g_206 = 0; (g_206 <= 3); g_206 += 1)
                { 
                    int32_t **l_235 = (void*)0;
                    int32_t ***l_234 = &l_235;
                    uint8_t **l_243 = &l_242[3];
                    uint8_t * const l_244 = &g_91;
                    int i, j;
                    if (p_39.f0.f0)
                        goto lbl_233;
                    if (l_120[g_206])
                        break;
                    (*p_38) = (g_215[(g_28 + 1)][(g_210 + 2)] != (((*l_234) = &p_38) == (void*)0));
                    l_245[0][6] = ((*p_38) = (safe_add_func_int64_t_s_s((!6L), (safe_sub_func_int64_t_s_s(0x0267AAC250361599LL, ((l_241[4] , ((*l_243) = l_242[2])) == l_244))))));
                    if (g_127[0])
                        break;
                }
            }
            if (l_120[g_210])
                continue;
            g_248[0] = l_246;
            (*l_257) = ((*l_256) = ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((void*)0 == p_38) ^ ((l_120[g_210] == ((*p_38) = g_215[g_210][(g_28 + 2)])) & g_215[g_210][(g_28 + 2)])), (safe_mod_func_uint32_t_u_u(((p_39.f0 , p_39.f0.f1) && 6UL), l_160)))), l_120[3])) < l_120[g_210]));
            (*l_262) = g_258;
        }
    }
    for (g_121 = (-14); (g_121 >= 29); g_121 = safe_add_func_uint64_t_u_u(g_121, 3))
    { 
        int32_t *l_265 = &g_110;
        int32_t *l_266[2];
        uint16_t *l_274 = &g_107[0][5];
        uint16_t **l_273 = &l_274;
        const int32_t l_290 = 0xE0729CE5L;
        int64_t *l_293 = &g_75[2];
        uint8_t *l_296 = &g_163;
        int i;
        for (i = 0; i < 2; i++)
            l_266[i] = &g_110;
        ++l_267;
        g_28 &= (((~l_120[2]) , (((safe_div_func_int8_t_s_s((l_160 = ((***g_259) = ((((*l_273) = p_42) != ((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((**g_260) > (safe_unary_minus_func_int64_t_s((safe_lshift_func_uint16_t_u_s(g_162, 12))))), p_39.f0.f1)), (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s(0L, 255UL)) < 0xDAA66EDB1092C0A3LL) , p_39.f0.f1) ^ l_290), 3)) < 0x25A5C96155687981LL), g_215[1][1])), (-1L))))) , (void*)0)) > 0UL))), g_137)) , g_121) & 0x7630L)) , 0xB4E28337L);
        (*p_38) &= (((safe_sub_func_int32_t_s_s((-1L), ((void*)0 == (*g_108)))) < (((g_73 = ((*l_293) &= 0xDA21B0A5AFFB38D0LL)) ^ (safe_mul_func_uint8_t_u_u(((*l_296)--), 1UL))) < ((l_208 = (l_299[0][0] != (void*)0)) && 0UL))) <= g_70);
    }
    return (*p_38);
}



static int32_t * func_43(int8_t  p_44)
{ 
    int32_t *l_84[1][3];
    int8_t *l_89[5] = {&g_63,&g_63,&g_63,&g_63,&g_63};
    int8_t **l_88 = &l_89[4];
    uint8_t *l_90 = &g_91;
    uint16_t *l_106 = &g_107[0][5];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_84[i][j] = &g_28;
    }
    g_28 = 0L;
    g_110 ^= (g_28 = ((~(safe_lshift_func_int8_t_s_u(g_74.f0.f1, ((((p_44 >= p_44) , (((&g_63 != ((*l_88) = &p_44)) > (--(*l_90))) != ((safe_mod_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((0xFBL == (safe_sub_func_uint32_t_u_u((((((*l_106) = ((safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(g_61, g_74.f0.f0)) & g_74.f0.f0), g_75[1])) != p_44)) , 65528UL) , l_88) == g_108), 0x8752EB69L))), p_44)) != g_74.f0.f1), 1L)) ^ 0x68EBBCFA1F81FC11LL), p_44)) < g_63))) || p_44) , p_44)))) < g_63));
    return &g_110;
}



static const uint32_t  func_45(struct S0  p_46)
{ 
    int32_t *l_58 = &g_28;
    int8_t *l_62 = &g_63;
    const int8_t l_66 = 0xD3L;
    int32_t *l_69[7][3][4] = {{{&g_2,&g_2,&g_2,&g_2},{&g_2,(void*)0,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2}},{{(void*)0,(void*)0,(void*)0,&g_2},{(void*)0,&g_2,&g_2,(void*)0},{&g_2,&g_2,&g_2,&g_2}},{{&g_2,(void*)0,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2},{(void*)0,(void*)0,(void*)0,&g_2}},{{(void*)0,&g_2,&g_2,(void*)0},{&g_2,&g_2,&g_2,&g_2},{&g_2,(void*)0,&g_2,&g_2}},{{&g_2,&g_2,&g_2,&g_2},{(void*)0,(void*)0,(void*)0,&g_2},{(void*)0,&g_2,&g_2,(void*)0}},{{&g_2,&g_2,&g_2,&g_2},{&g_2,(void*)0,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_2}},{{(void*)0,(void*)0,(void*)0,&g_2},{(void*)0,&g_2,&g_2,(void*)0},{&g_2,&g_2,&g_2,&g_2}}};
    int64_t *l_71 = (void*)0;
    int64_t *l_72 = &g_73;
    int i, j, k;
    g_75[1] = ((((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((((*l_72) = (safe_mod_func_int32_t_s_s(((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((((*l_58) &= 0L) <= ((((g_2 | (safe_mod_func_int16_t_s_s(((0x1BL != ((*l_62) |= (g_61 &= p_46.f0))) >= (safe_mod_func_uint32_t_u_u(l_66, (g_70 = (safe_rshift_func_int16_t_s_s(p_46.f1, p_46.f0)))))), g_2))) , g_61) && g_63) <= p_46.f0)), p_46.f0)), 0x734826AAF09D89C1LL)) & p_46.f0), p_46.f1))) , g_74) , (-1L)), g_2)), 6)) || 0x89L) && p_46.f0) > g_74.f0.f0);
    return (*l_58);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74.f0.f0, "g_74.f0.f0", print_hash_value);
    transparent_crc(g_74.f0.f1, "g_74.f0.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_75[i], "g_75[i]", print_hash_value);

    }
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_107[i][j], "g_107[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_127[i], "g_127[i]", print_hash_value);

    }
    transparent_crc(g_137, "g_137", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_161[i][j][k], "g_161[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_215[i][j], "g_215[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_509[i][j], "g_509[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_778[i][j][k], "g_778[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_937, "g_937", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
