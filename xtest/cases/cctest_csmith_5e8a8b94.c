// SPDX-License-Identifier: MIT
// cctest_csmith_5e8a8b94.c --- cctest case csmith_5e8a8b94 (csmith seed 1586138004)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x73fe3ff2 */
/* @exp_ticks 0x3e45 */

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

// Options:   -s 1586138004 -o /tmp/csmith_gen_9bvq_tu7/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
};

union U1 {
   const uint32_t  f0;
   uint8_t  f1;
   int8_t  f2;
};


static int32_t g_3 = 1L;
static int16_t g_37[1] = {(-4L)};
static uint32_t g_48 = 2UL;
static struct S0 g_51[3] = {{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}};
static uint8_t g_63 = 2UL;
static int8_t g_66 = 0x8AL;
static int32_t g_119 = 1L;
static uint64_t g_141 = 18446744073709551609UL;
static int64_t g_145 = 0xF5EEAC9F24D48F7CLL;
static union U1 g_157 = {0x66B76CAEL};
static uint16_t g_185 = 0UL;
static int8_t g_252 = 0xF8L;
static int16_t g_263 = (-1L);
static uint64_t g_283 = 18446744073709551612UL;
static int32_t g_293 = 0xF8F9937BL;
static uint32_t g_294 = 9UL;
static int32_t g_300[3] = {1L,1L,1L};
static int64_t g_323[4] = {0x77CEEA620BF2F6F7LL,0x77CEEA620BF2F6F7LL,0x77CEEA620BF2F6F7LL,0x77CEEA620BF2F6F7LL};
static int32_t g_364[2][4] = {{0L,1L,1L,0L},{1L,0L,1L,1L}};
static uint8_t g_385[1][5][3] = {{{247UL,0x61L,0x65L},{6UL,0UL,6UL},{6UL,247UL,0UL},{247UL,6UL,6UL},{0UL,6UL,0x65L}}};



static uint32_t  func_1(void);
static int32_t  func_4(const uint64_t  p_5, const int32_t  p_6, uint32_t  p_7, int32_t  p_8, int32_t  p_9);
static int64_t  func_10(int8_t  p_11, int32_t  p_12, int16_t  p_13, int8_t  p_14);
static struct S0  func_22(uint64_t  p_23, int32_t  p_24, int16_t  p_25, int32_t  p_26, uint16_t  p_27);




static uint32_t  func_1(void)
{ 
    uint64_t l_2[5][5][1] = {{{18446744073709551608UL},{0xDD03248C66F5A9C4LL},{1UL},{0xDD03248C66F5A9C4LL},{18446744073709551608UL}},{{18446744073709551615UL},{18446744073709551608UL},{0xDD03248C66F5A9C4LL},{1UL},{0xDD03248C66F5A9C4LL}},{{18446744073709551608UL},{18446744073709551615UL},{1UL},{18446744073709551615UL},{0UL}},{{18446744073709551615UL},{1UL},{1UL},{1UL},{18446744073709551615UL}},{{0UL},{18446744073709551615UL},{1UL},{1UL},{1UL}}};
    int32_t l_344 = 0L;
    int32_t l_366 = (-3L);
    int32_t l_386 = 0x19E8A7EAL;
    int i, j, k;
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    { 
        uint8_t l_15 = 0x20L;
        int16_t l_28 = 9L;
        uint16_t l_52 = 65535UL;
        uint16_t l_309[3][5] = {{0x9D3EL,65527UL,0x9D3EL,65527UL,0x9D3EL},{0x9F58L,0x9F58L,0x9F58L,0x9F58L,0x9F58L},{0x9D3EL,65527UL,0x9D3EL,65527UL,0x9D3EL}};
        int32_t l_310 = 0x5A4FAB11L;
        int8_t l_365 = 0L;
        int i, j;
        if ((((func_4((func_10(g_3, l_15, l_15, (safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((func_22((l_28 && l_15), l_2[2][2][0], g_3, g_3, l_28) , g_37[0]) == g_51[1].f0), (-7L))), l_52)), 0))) <= 0x1F13ED7A34FC8B02LL), l_28, l_15, l_28, l_52) , l_2[1][0][0]) ^ g_3) && 0x82E4A64BL))
        { 
            l_310 = (((g_185 ^= (0x405EL | (((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(g_48, (0L && l_52))), 3)), l_2[4][3][0])) , (-5L)) | l_28))) < g_145) >= l_309[1][2]);
        }
        else
        { 
            uint16_t l_313 = 0xAC17L;
            int64_t l_330 = 0x9B879C4290134D32LL;
            int32_t l_335 = 0xE3E4855EL;
            if ((safe_add_func_uint16_t_u_u(((g_51[1] , ((18446744073709551614UL & l_2[4][3][0]) >= (g_283 & l_313))) , l_28), g_141)))
            { 
                int32_t l_322 = 0x17913F10L;
                g_323[2] &= ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(0x3900L, 7)) == (l_2[2][4][0] , (g_300[1] && ((g_119 = l_322) || g_37[0])))), 0x7EEFL)), g_157.f2)), l_2[4][3][0])) & g_294);
            }
            else
            { 
                int16_t l_333 = 0x61D6L;
                int32_t l_334[2][5] = {{1L,1L,1L,1L,1L},{2L,0L,2L,0L,2L}};
                int i, j;
                g_119 = ((g_323[3] >= (l_335 = ((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(((l_334[0][4] = (l_330 , ((6L > ((safe_lshift_func_int16_t_s_u(l_333, g_323[3])) > l_2[4][3][0])) > l_333))) != (-7L)), 0x3ED4L)), l_313)), 0xCCL)) & l_333))) | 0x42L);
                g_119 |= (safe_rshift_func_int16_t_s_u((l_335 = ((safe_mul_func_int8_t_s_s((g_185 < ((safe_lshift_func_uint16_t_u_s(6UL, (safe_mod_func_int8_t_s_s(((l_344 = g_63) | g_141), 0x07L)))) != g_63)), 0x59L)) && l_333)), g_252));
            }
        }
        if (((safe_mul_func_uint16_t_u_u((((((g_119 = (safe_unary_minus_func_uint16_t_u((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(g_300[1], ((l_344 ^ (safe_rshift_func_uint8_t_u_s((+(0x17L != (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(g_185, g_48)), l_309[1][2])), g_252)))), g_185))) == g_119))) & 0x6463L), g_119))))) > g_3) | l_344) > 0xA44A4B08019D96A4LL) , 1UL), 0xF394L)) <= 0xC6659E40L))
        { 
            int8_t l_361 = 0x2BL;
            return l_361;
        }
        else
        { 
            if (l_28)
                break;
        }
        for (g_66 = 0; (g_66 <= 0); g_66 += 1)
        { 
            uint64_t l_362 = 0x12E2B93D78048BA4LL;
            int32_t l_363 = 0xA0A2A0B7L;
            int32_t l_367 = 4L;
            g_51[1] = func_22(l_2[1][0][0], g_145, g_51[1].f0, (((g_252 ^= l_344) , g_252) >= l_362), g_300[1]);
            for (g_63 = 0; (g_63 <= 0); g_63 += 1)
            { 
                uint8_t l_368 = 0xFEL;
                int i, j, k;
                l_368++;
                l_386 ^= (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((((g_263 &= ((safe_div_func_int16_t_s_s((((l_310 = (-1L)) >= (safe_mul_func_uint16_t_u_u((l_2[(g_3 + 2)][(g_63 + 4)][g_66] <= (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u((((g_185 ^= l_2[(g_63 + 4)][(g_63 + 2)][g_3]) ^ ((l_363 |= (g_385[0][2][0] = (l_2[g_63][g_3][g_66] , 1UL))) ^ l_2[(g_66 + 4)][(g_3 + 1)][g_63])) != 0UL), 4)) || l_2[(g_66 + 4)][(g_63 + 4)][g_66]) != g_63), g_63)) ^ l_344), 0x0D65FEBDL))), l_362))) <= l_344), l_366)) , l_2[1][3][0])) == g_37[0]) , 3UL), l_362)), g_37[0]));
            }
        }
    }
    return g_294;
}



static int32_t  func_4(const uint64_t  p_5, const int32_t  p_6, uint32_t  p_7, int32_t  p_8, int32_t  p_9)
{ 
    int8_t l_266 = (-1L);
    int32_t l_267 = 0x0FE0D3B1L;
    int32_t l_284 = 0xE48052E4L;
    int32_t l_285 = (-7L);
    int8_t l_297[4];
    int i;
    for (i = 0; i < 4; i++)
        l_297[i] = 0x32L;
    for (g_157.f2 = 0; (g_157.f2 >= 0); g_157.f2 -= 1)
    { 
        int32_t l_259 = 0L;
        int32_t l_260 = 9L;
        uint64_t l_286 = 0x6DE1D1B8B10F9901LL;
        int i;
        if (((g_157 , 0xDBL) && (g_37[g_157.f2] == (((l_260 |= (((l_259 = ((--g_63) , ((g_145 = (g_37[0] , g_145)) < g_66))) || g_252) | g_141)) , (-7L)) & g_141))))
        { 
            int32_t l_268 = 0L;
            uint16_t l_273 = 0UL;
            for (g_141 = 0; (g_141 <= 2); g_141 += 1)
            { 
                l_259 |= (((safe_sub_func_uint8_t_u_u(((g_63 <= (l_267 = (l_266 = (g_263 || (safe_rshift_func_uint16_t_u_u(0x52A8L, 9)))))) , (((l_267 |= p_5) <= p_8) >= 0x31903B4FL)), (-1L))) < l_268) < l_268);
                g_283 &= (((((safe_lshift_func_uint16_t_u_u(0UL, ((l_267 , (safe_mul_func_uint16_t_u_u((l_273 != (safe_add_func_uint16_t_u_u((l_267 &= (+((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s((-1L), g_37[0])), p_7)), 255UL)) & p_9))), p_6))), 0x3B04L))) & (-4L)))) || g_119) < l_266) < (-8L)) ^ p_9);
            }
            --l_286;
            for (g_185 = 0; (g_185 <= 2); g_185 += 1)
            { 
                int i;
                g_119 = g_37[g_157.f2];
                if (p_7)
                    continue;
            }
        }
        else
        { 
            int16_t l_291 = 0xD0F6L;
            int32_t l_292[2][3] = {{0x31470323L,1L,0x31470323L},{0x31470323L,1L,0x31470323L}};
            int i, j;
            l_260 = (0xDFL >= (((l_260 <= ((((((safe_lshift_func_uint16_t_u_u((l_291 = g_66), 4)) && 0x54FB1B3AE5EB9F0FLL) , g_157.f2) == (-10L)) && (-6L)) , 3UL)) > l_292[1][0]) , l_286));
        }
        --g_294;
        l_259 = l_297[0];
    }
    g_300[1] = (g_119 = (l_297[0] && (l_267 >= (safe_lshift_func_int8_t_s_s(0x83L, g_294)))));
    for (g_293 = 0; (g_293 > (-29)); g_293 = safe_sub_func_uint64_t_u_u(g_293, 3))
    { 
        return p_5;
    }
    return g_119;
}



static int64_t  func_10(int8_t  p_11, int32_t  p_12, int16_t  p_13, int8_t  p_14)
{ 
    struct S0 l_56[5] = {{0xFA52E963E9BECC42LL},{0xFA52E963E9BECC42LL},{0xFA52E963E9BECC42LL},{0xFA52E963E9BECC42LL},{0xFA52E963E9BECC42LL}};
    int32_t l_64[3][3][3] = {{{(-1L),0x9B759721L,(-1L)},{0L,0xB4F50F89L,6L},{3L,0xB4F50F89L,1L}},{{0L,0x9B759721L,0L},{0L,0L,0L},{0L,0xC97D735FL,0x2D778712L}},{{3L,(-1L),0x2D778712L},{0L,0x2D778712L,0L},{(-1L),1L,0L}}};
    int64_t l_69 = 0xAA0404C6930A8756LL;
    const uint8_t l_74 = 251UL;
    uint16_t l_81 = 0xACC2L;
    int64_t l_82 = 0x828E342BA517386FLL;
    int32_t l_83 = (-1L);
    int32_t l_93 = 0x6833E316L;
    int32_t l_132 = 7L;
    int32_t l_181 = 0xF39AA58BL;
    int32_t l_254 = (-7L);
    int i, j, k;
    for (p_14 = 0; (p_14 >= 22); p_14 = safe_add_func_int16_t_s_s(p_14, 4))
    { 
        int64_t l_55 = 0x3D4D864B91BF520FLL;
        struct S0 l_65 = {1UL};
        l_56[2] = (l_55 , g_51[1]);
        l_65 = (func_22(p_11, l_56[2].f0, ((safe_rshift_func_int8_t_s_u((l_64[0][1][2] &= (safe_mod_func_int16_t_s_s(0x4F36L, (g_63 = (safe_sub_func_uint8_t_u_u(l_55, 0x5FL)))))), l_56[2].f0)) , l_55), l_56[2].f0, l_56[2].f0) , l_56[1]);
        g_66 &= g_37[0];
    }
    if ((((safe_rshift_func_int16_t_s_s((((g_63 && ((l_83 = ((((l_69 = p_14) , ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_74 , (safe_mod_func_int8_t_s_s((l_64[0][1][2] = (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((g_63 = (0x9DL && p_13)), 4)) != l_64[2][2][2]), l_81))), l_56[2].f0))), 1L)), l_82)) & p_12)) != l_81) > 0x3AFD543CL)) != p_11)) || l_83) , p_11), 12)) != g_51[1].f0) & p_14))
    { 
        int32_t l_92[4] = {0xCCF6B01AL,0xCCF6B01AL,0xCCF6B01AL,0xCCF6B01AL};
        int i;
        if (p_11)
        { 
            uint64_t l_94 = 18446744073709551615UL;
            int16_t l_117 = 0x145FL;
            if ((((4294967295UL & ((l_93 = (l_83 |= (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((4294967295UL ^ (((l_64[1][1][1] = (safe_mod_func_int8_t_s_s((1UL > ((safe_div_func_int16_t_s_s(g_3, g_48)) > l_69)), 0x80L))) & 0xEAA4458F5970FBD1LL) > 0x5BL)), l_92[0])), 6)))) | 8L)) , l_92[0]) < l_94))
            { 
                union U1 l_105[1][1] = {{{0UL}}};
                int32_t l_116 = 7L;
                int32_t l_118 = 4L;
                int i, j;
                g_119 = ((g_63 |= (safe_sub_func_uint64_t_u_u(l_92[2], (l_83 = (l_118 ^= ((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_105[0][0] , (safe_mod_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u((l_116 |= (safe_mod_func_uint16_t_u_u(0UL, (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((l_94 || 3UL) , 0x3AB8L), g_37[0])), l_83))))), 65535UL)) != l_92[3]), g_66))), p_13)), l_92[0])), g_37[0])), l_117)) == (-1L))))))) != p_11);
                l_92[0] = (safe_mod_func_uint64_t_u_u(((((1L > (safe_lshift_func_uint8_t_u_s(((p_14 , (((safe_lshift_func_int16_t_s_s(0xB031L, (safe_sub_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u((l_92[0] <= p_12), p_14)) , g_119), p_12)))) < l_92[0]) ^ 0x1853L)) , 0xF7L), p_11))) && g_63) >= (-10L)) <= p_14), l_83));
                g_141 &= (((safe_lshift_func_int16_t_s_s(l_132, 13)) , (0x3BC2F6D6L ^ (l_93 = (p_11 , ((((((safe_rshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s((((safe_add_func_int8_t_s_s((p_13 , p_11), 0x13L)) >= 0UL) ^ 9L), 1UL)) , 0x88L), 0)) <= 18446744073709551615UL) ^ g_119) != g_37[0]) && p_12) & 0xC10FD05F7741F5D6LL))))) & p_12);
            }
            else
            { 
                uint8_t l_142 = 1UL;
                l_92[2] ^= l_64[0][1][2];
                g_119 &= ((func_22(g_37[0], l_92[2], p_12, p_12, p_11) , l_142) ^ g_63);
            }
        }
        else
        { 
            g_145 = (((g_51[1].f0 = l_69) ^ (safe_mod_func_uint16_t_u_u(l_92[1], p_14))) && (g_66 = 0x16L));
            l_64[0][1][2] = (+(safe_sub_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s((-10L), (safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((1UL || (g_48 | (-7L))), g_141)), 4294967295UL)))), l_92[0])), p_13)));
        }
    }
    else
    { 
        uint32_t l_160[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        union U1 l_169 = {0xFF1EAABBL};
        int32_t l_170[3][3];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_170[i][j] = 0L;
        }
        l_170[0][2] = (g_157 , (((l_160[4] |= p_13) == ((((safe_mul_func_int8_t_s_s(((safe_add_func_int64_t_s_s(l_93, (safe_sub_func_uint32_t_u_u(((g_157.f2 = (safe_div_func_uint64_t_u_u(((l_169 , p_14) != 1L), g_51[1].f0))) == l_169.f0), g_145)))) >= g_63), g_48)) || l_83) , l_169.f2) >= l_74)) < 1UL));
        g_119 = (((((safe_lshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u((0x6E98D5FDL > l_181), 0)) || (l_160[4] == g_119)) && p_13), p_12)) || 18446744073709551615UL), 0xA722102788A45519LL)) || l_160[2]), g_141)) > 0xA6L), l_169.f0)) & g_141) == g_119) == g_157.f2) & 0xEB46L);
        if (l_169.f0)
        { 
            uint32_t l_183 = 0x9E56F2F1L;
            struct S0 l_196 = {18446744073709551613UL};
            int32_t l_210 = 0x96E28CD3L;
            if ((+l_183))
            { 
                int16_t l_184[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_184[i] = 0L;
                g_185++;
            }
            else
            { 
                const int8_t l_195 = 0x4FL;
                l_196 = ((((safe_mul_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((~((p_12 >= (safe_sub_func_int8_t_s_s((((l_169.f2 , g_66) >= ((l_195 , l_170[0][2]) ^ p_11)) > g_66), l_195))) <= 1L)) && p_14), 0L)), 0L)) && g_37[0]) & 0xD03F83878C6F71F7LL) , g_51[1]);
                g_119 = (safe_add_func_int16_t_s_s((l_160[1] != (safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s((g_145 && ((l_83 = (g_51[1].f0 >= g_66)) | g_51[1].f0)), l_81)), 0x8522CE914191B569LL))), g_141));
                l_210 ^= (l_93 |= ((l_64[0][1][1] ^= (g_119 = (safe_sub_func_uint32_t_u_u(p_14, g_51[1].f0)))) < ((safe_sub_func_int16_t_s_s(l_169.f2, (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s((1L || p_13))), 5)))) && p_13)));
            }
            for (g_66 = 2; (g_66 >= 0); g_66 -= 1)
            { 
                l_210 = (-5L);
            }
        }
        else
        { 
            l_64[0][1][2] &= l_82;
        }
    }
    if (l_132)
    { 
        uint32_t l_226[4];
        struct S0 l_239[1] = {{18446744073709551606UL}};
        int i;
        for (i = 0; i < 4; i++)
            l_226[i] = 18446744073709551611UL;
        for (g_66 = (-28); (g_66 != 4); g_66 = safe_add_func_int32_t_s_s(g_66, 8))
        { 
            uint32_t l_218 = 0xDF329044L;
            int32_t l_225 = 3L;
            uint8_t l_227 = 0xD3L;
            l_83 = ((safe_lshift_func_int16_t_s_s(((+(((safe_mul_func_int16_t_s_s(0x0E70L, 0xE88BL)) | (0x91CA70F6C1F0966BLL >= ((g_119 = 0x6F01792AL) && l_218))) <= 0x5DL)) , (-1L)), 14)) > 0x682EL);
            l_227 = (safe_div_func_uint64_t_u_u((g_51[1].f0 = 0xF97CE154029CE55DLL), (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((l_82 , g_37[0]) , (((l_225 = (g_37[0] && p_14)) < l_226[0]) ^ p_12)), p_14)), 255UL))));
            for (g_119 = 3; (g_119 >= 0); g_119 -= 1)
            { 
                return g_185;
            }
        }
        for (g_119 = (-23); (g_119 >= (-7)); g_119 = safe_add_func_uint64_t_u_u(g_119, 5))
        { 
            uint32_t l_232 = 0x8CAC2623L;
            struct S0 l_238 = {1UL};
            for (l_83 = 10; (l_83 < (-3)); l_83 = safe_sub_func_uint64_t_u_u(l_83, 5))
            { 
                uint32_t l_237[5][5][4] = {{{0x3A185DD0L,0xE14BB8DEL,7UL,7UL},{0xE25FB50DL,0xE25FB50DL,7UL,0xD6875EE9L},{0x3A185DD0L,4294967290UL,4294967289UL,0xE14BB8DEL},{0x9F9507BAL,4294967289UL,0xD6875EE9L,4294967289UL},{0xD6875EE9L,4294967289UL,0x9F9507BAL,0xE14BB8DEL}},{{4294967289UL,4294967290UL,0x3A185DD0L,0xD6875EE9L},{7UL,0xE25FB50DL,0xE25FB50DL,7UL},{7UL,0xE14BB8DEL,0x3A185DD0L,4294967295UL},{4294967289UL,7UL,0x9F9507BAL,4294967289UL},{0xD6875EE9L,4UL,0xD6875EE9L,4294967289UL}},{{0x9F9507BAL,7UL,4294967289UL,4294967295UL},{0x3A185DD0L,0xE14BB8DEL,7UL,7UL},{0xE25FB50DL,0xE25FB50DL,7UL,0xD6875EE9L},{0x3A185DD0L,4294967290UL,4294967289UL,0xE14BB8DEL},{0x9F9507BAL,4294967289UL,0xD6875EE9L,4294967289UL}},{{0xD6875EE9L,4294967289UL,0x9F9507BAL,0xE14BB8DEL},{4294967289UL,4294967290UL,0x3A185DD0L,0xD6875EE9L},{7UL,0xE25FB50DL,0xE25FB50DL,7UL},{7UL,0xE14BB8DEL,0x3A185DD0L,4294967295UL},{4294967289UL,7UL,0x9F9507BAL,4294967289UL}},{{0xD6875EE9L,4UL,0xD6875EE9L,4294967289UL},{0x9F9507BAL,7UL,4294967289UL,4294967295UL},{0x3A185DD0L,0xE14BB8DEL,7UL,7UL},{0xE25FB50DL,0xE25FB50DL,7UL,0xD6875EE9L},{0x3A185DD0L,4294967290UL,4294967289UL,0xE14BB8DEL}}};
                int i, j, k;
                g_51[1] = func_22(((l_232 , (g_66 , (safe_rshift_func_int16_t_s_u((g_37[0] = ((g_141 < (safe_sub_func_int16_t_s_s(p_11, l_237[3][2][3]))) & l_232)), 11)))) & g_119), p_13, p_11, g_141, g_157.f2);
            }
            l_83 = g_63;
            l_239[0] = l_238;
        }
        return l_81;
    }
    else
    { 
        int8_t l_250 = 1L;
        int32_t l_251 = 0x4C8C8FA0L;
        int32_t l_253 = 0L;
        l_253 = (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((g_119 != (l_56[2].f0 != (((g_37[0] = (((g_252 = ((safe_add_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((l_251 = (((l_250 ^ (p_13 >= p_11)) | 65533UL) >= 65535UL)), g_37[0])) | l_250), g_48)) , l_250), g_66)) <= (-9L))) | p_12) , g_63)) < 0xEC3EL) < g_145))), l_250)) , l_250), g_185));
    }
    return l_254;
}



static struct S0  func_22(uint64_t  p_23, int32_t  p_24, int16_t  p_25, int32_t  p_26, uint16_t  p_27)
{ 
    uint32_t l_42[4] = {0x50E35260L,0x50E35260L,0x50E35260L,0x50E35260L};
    int32_t l_43 = 0xB3915004L;
    int32_t l_44 = 0xA7967268L;
    int32_t l_45 = 0L;
    int32_t l_46[2][2][4] = {{{(-5L),0x7EEDF667L,(-5L),(-5L)},{0x7EEDF667L,0x7EEDF667L,(-7L),0x7EEDF667L}},{{0x7EEDF667L,(-5L),(-5L),0x7EEDF667L},{(-5L),0x7EEDF667L,(-5L),(-5L)}}};
    struct S0 l_47[3] = {{0xB4C01F903A798BE4LL},{0xB4C01F903A798BE4LL},{0xB4C01F903A798BE4LL}};
    int i, j, k;
    l_46[1][0][1] = ((((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((((l_45 = ((safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_int8_t_s_u((g_37[0] &= g_3), 4)) && (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((l_42[1] , (p_26 && (l_44 = ((l_43 = 0xA3418EB0L) & l_42[1])))), g_3)), 4UL))) <= 0x4BL) | l_42[1]), 7)) | l_42[1])) || 0xBEL) > p_24), g_3)), l_42[0])) > 0x68D270C1L) == (-1L)) != 4294967295UL);
    if ((p_24 = p_24))
    { 
        p_24 = (-10L);
    }
    else
    { 
        return l_47[1];
    }
    ++g_48;
    return g_51[1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_37[i], "g_37[i]", print_hash_value);

    }
    transparent_crc(g_48, "g_48", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_51[i].f0, "g_51[i].f0", print_hash_value);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_157.f1, "g_157.f1", print_hash_value);
    transparent_crc(g_157.f2, "g_157.f2", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_300[i], "g_300[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_323[i], "g_323[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_364[i][j], "g_364[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_385[i][j][k], "g_385[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
