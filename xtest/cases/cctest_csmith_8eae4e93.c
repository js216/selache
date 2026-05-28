// SPDX-License-Identifier: MIT
// cctest_csmith_8eae4e93.c --- cctest case csmith_8eae4e93 (csmith seed 2393788051)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x33b6ec0e */
/* @exp_ticks 0x3942 */

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

// Options:   -s 2393788051 -o /tmp/csmith_gen_v8nb3295/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint16_t  f0;
   const int16_t  f1;
   uint16_t  f2;
   int8_t  f3;
   int16_t  f4;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint8_t  f0;
};
#pragma pack(pop)

union U2 {
   int8_t  f0;
   struct S1  f1;
   struct S1  f2;
};


static uint16_t g_7 = 1UL;
static struct S0 g_34[3] = {{0x42B6L,0x2B60L,0x800FL,0x68L,2L},{0x42B6L,0x2B60L,0x800FL,0x68L,2L},{0x42B6L,0x2B60L,0x800FL,0x68L,2L}};
static union U2 g_39 = {0xF2L};
static uint16_t g_66[5] = {0xE2BDL,0xE2BDL,0xE2BDL,0xE2BDL,0xE2BDL};
static uint8_t g_85 = 0xA4L;
static int64_t g_107 = 0x59313D93154CD5CALL;
static int16_t g_108 = 0x2E3AL;
static uint16_t g_109 = 0x0579L;
static uint32_t g_120 = 1UL;
static uint16_t g_122 = 65530UL;
static uint32_t g_130[4][1][2] = {{{3UL,0xD337155FL}},{{3UL,3UL}},{{0xD337155FL,3UL}},{{3UL,0xD337155FL}}};



static const uint8_t  func_1(void);
static struct S1  func_12(int32_t  p_13, union U2  p_14, int8_t  p_15);
static int32_t  func_16(uint32_t  p_17, int32_t  p_18, union U2  p_19);
static int16_t  func_22(const uint8_t  p_23, int32_t  p_24);




static const uint8_t  func_1(void)
{ 
    int32_t l_8 = (-9L);
    const int32_t l_10 = (-1L);
    int32_t l_11 = (-2L);
    const int32_t l_25[1][4][5] = {{{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xF7806AA1L,(-7L),0xF7806AA1L,(-7L),0xF7806AA1L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0xF7806AA1L,(-7L),0xF7806AA1L,(-7L),0xF7806AA1L}}};
    int32_t l_35 = 0x1D89E177L;
    const int64_t l_36[3] = {0xDD3610CB4E3473EDLL,0xDD3610CB4E3473EDLL,0xDD3610CB4E3473EDLL};
    union U2 l_69[2] = {{0x22L},{0x22L}};
    int i, j, k;
    l_11 = (4294967295UL == (safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_7 = (!0UL)), (l_8 |= (-1L)))), (+l_10))));
lbl_121:
    g_39.f2 = (l_10 , func_12(func_16((g_7 , (safe_add_func_uint32_t_u_u((func_22(l_25[0][3][2], ((l_11 = (l_35 = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((safe_div_func_int8_t_s_s((g_34[1] , l_11), l_35)) > 0x31L) || 0xF314L), 5L)), 0x4CL)), 6)))) > l_36[1])) == 8UL), l_10))), l_8, g_39), l_69[0], l_36[1]));
    if ((l_25[0][3][2] , (((g_34[1] , g_34[1].f4) < (safe_mul_func_uint16_t_u_u(g_66[2], 0L))) == g_34[1].f3)))
    { 
        int64_t l_99 = 0x1172E912FB0E7D4ELL;
        int32_t l_119 = (-1L);
lbl_112:
        l_99 |= (1UL == g_7);
        for (l_11 = (-6); (l_11 < (-14)); --l_11)
        { 
            uint8_t l_102[3][2] = {{0x7FL,0x7FL},{0x7FL,0x7FL},{0x7FL,0x7FL}};
            int i, j;
            if (((((-8L) >= ((l_102[2][1] = 0xC094L) && 0x6E4FL)) > (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((g_39.f2.f0 <= 9UL), 9)), g_39.f1.f0))) >= 0x8FB111D0L))
            { 
                --g_109;
                if (g_85)
                    goto lbl_112;
            }
            else
            { 
                const int16_t l_113[5] = {1L,1L,1L,1L,1L};
                int i;
                return l_113[1];
            }
            if (g_34[1].f2)
                continue;
            for (g_39.f2.f0 = 14; (g_39.f2.f0 == 58); ++g_39.f2.f0)
            { 
                uint32_t l_118 = 0xF3BFE2B3L;
                g_120 = (g_34[1].f4 & (safe_rshift_func_uint16_t_u_s(l_69[0].f0, (((l_99 != (l_119 = (g_108 , l_118))) < g_34[1].f1) != g_34[1].f4))));
            }
        }
        if (g_39.f2.f0)
            goto lbl_121;
    }
    else
    { 
        uint64_t l_129 = 18446744073709551607UL;
        int32_t l_134 = 0x2C2B6DE2L;
        ++g_122;
        g_130[2][0][0] = (safe_mul_func_uint16_t_u_u((3L > (l_129 = (g_39.f1.f0 <= (safe_mod_func_uint8_t_u_u(((l_10 ^ g_85) <= l_35), l_25[0][3][2]))))), l_35));
        for (g_108 = 0; (g_108 >= 24); ++g_108)
        { 
            int32_t l_133 = 0x9D52CC18L;
            if (g_7)
                break;
            l_134 |= l_133;
        }
    }
    return g_34[1].f1;
}



static struct S1  func_12(int32_t  p_13, union U2  p_14, int8_t  p_15)
{ 
    uint64_t l_70 = 0x0A54AE8BCD06DB25LL;
    int32_t l_83 = 1L;
    if ((l_70 , l_70))
    { 
        struct S1 l_73 = {0UL};
        const int64_t l_84 = 7L;
        for (g_7 = 0; (g_7 >= 34); g_7 = safe_add_func_int16_t_s_s(g_7, 9))
        { 
            return l_73;
        }
        for (p_14.f1.f0 = (-3); (p_14.f1.f0 > 20); p_14.f1.f0++)
        { 
            g_85 = (((+(g_66[1] != ((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((0x921AL != (safe_rshift_func_int16_t_s_s(p_14.f1.f0, (l_83 = p_14.f0)))) & g_34[1].f4), 0x6AL)), 0UL)) ^ g_7))) & l_84) <= l_73.f0);
        }
    }
    else
    { 
        uint8_t l_88 = 253UL;
        int32_t l_91 = (-1L);
        p_13 = (p_14.f0 > ((((l_91 = ((l_88 ^ 0L) | ((((safe_rshift_func_int8_t_s_s((g_34[1].f1 && l_70), l_70)) , 4294967295UL) || p_13) == 0x9E812ED6L))) , p_14.f0) , 8L) ^ g_34[1].f4));
        for (g_85 = 0; (g_85 < 31); ++g_85)
        { 
            if (p_14.f2.f0)
                break;
        }
        for (g_39.f2.f0 = 27; (g_39.f2.f0 == 54); g_39.f2.f0 = safe_add_func_int8_t_s_s(g_39.f2.f0, 5))
        { 
            int8_t l_96[3];
            int i;
            for (i = 0; i < 3; i++)
                l_96[i] = 0x2BL;
            l_83 = l_96[1];
        }
    }
    return p_14.f1;
}



static int32_t  func_16(uint32_t  p_17, int32_t  p_18, union U2  p_19)
{ 
    const uint8_t l_55 = 0x16L;
    for (p_19.f0 = 0; (p_19.f0 <= 10); ++p_19.f0)
    { 
        struct S0 l_54 = {65535UL,-4L,1UL,0x09L,0xC3C6L};
        const uint8_t l_60 = 0UL;
        int32_t l_61[2][4][2] = {{{(-6L),(-6L)},{1L,(-6L)},{(-6L),1L},{(-6L),(-6L)}},{{1L,(-6L)},{(-6L),1L},{(-6L),(-6L)},{1L,(-6L)}}};
        int i, j, k;
        if (g_34[1].f4)
            break;
        if ((safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((((l_54 , (l_55 , (safe_add_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s(l_60, g_39.f1.f0)) != 0x4C77A5C6L) , l_60), g_34[1].f2)))) , p_19.f1.f0) ^ 0x1EL), p_19.f2.f0)) || p_19.f2.f0), 1L)), l_55)) , l_54.f3) && p_19.f0), g_34[1].f1)), l_55)), 0xA4L)))
        { 
            l_61[1][0][0] = 0xAED416A7L;
            if (l_55)
                break;
        }
        else
        { 
            struct S1 l_64 = {0x1CL};
            int32_t l_65 = 0xDEB0CCCFL;
            if ((((((g_39.f0 |= (((g_34[1].f3 | l_55) < p_17) == (-5L))) < 0UL) != 4L) && 2UL) == g_7))
            { 
                l_64 = g_39.f1;
            }
            else
            { 
                l_65 |= l_64.f0;
                --g_66[2];
            }
        }
        if (g_66[0])
            continue;
    }
    return l_55;
}



static int16_t  func_22(const uint8_t  p_23, int32_t  p_24)
{ 
    struct S1 l_37 = {1UL};
    struct S1 l_38 = {255UL};
    l_38 = l_37;
    return g_7;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_34[i].f0, "g_34[i].f0", print_hash_value);
        transparent_crc(g_34[i].f1, "g_34[i].f1", print_hash_value);
        transparent_crc(g_34[i].f2, "g_34[i].f2", print_hash_value);
        transparent_crc(g_34[i].f3, "g_34[i].f3", print_hash_value);
        transparent_crc(g_34[i].f4, "g_34[i].f4", print_hash_value);

    }
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1.f0, "g_39.f1.f0", print_hash_value);
    transparent_crc(g_39.f2.f0, "g_39.f2.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);

    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_130[i][j][k], "g_130[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
