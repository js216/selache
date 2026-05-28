// SPDX-License-Identifier: MIT
// cctest_csmith_31812fc6.c --- cctest case csmith_31812fc6 (csmith seed 830549958)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xff0d5f48 */
/* @exp_ticks 0x5683 */

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

// Options:   -s 830549958 -o /tmp/csmith_gen_pezjfiu6/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint32_t  f0;
   uint32_t  f1;
   int8_t  f2;
   const uint16_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int8_t  f0;
   const int32_t  f1;
   const uint32_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   uint16_t  f1;
   uint8_t  f2;
};
#pragma pack(pop)

union U3 {
   int16_t  f0;
   uint32_t  f1;
   int16_t  f2;
   struct S2  f3;
};


static int32_t g_2 = 0xA162C9CCL;
static struct S0 g_11 = {0x9C710427L,0xBA75A592L,1L,0xD1E1L};
static int32_t g_41 = 0L;
static int32_t g_47 = 4L;
static int32_t g_50[1] = {0L};
static struct S1 g_59 = {0x77L,0L,0x6603FA8BL};
static uint8_t g_60 = 254UL;
static uint64_t g_66 = 0x340C09C4F4FCF427LL;
static struct S2 g_96 = {7UL,0x1105L,0UL};
static int32_t g_99 = (-8L);
static uint8_t g_117 = 0xA6L;
static int16_t g_135[4] = {0xA897L,0xA897L,0xA897L,0xA897L};
static int32_t g_138 = (-1L);
static int8_t *g_233 = &g_11.f2;
static uint8_t g_261 = 8UL;
static uint64_t *g_290 = &g_66;
static uint64_t **g_289 = &g_290;
static uint64_t *** const g_288 = &g_289;
static uint32_t g_302[6][4] = {{0x947B89F7L,0x18506245L,18446744073709551609UL,18446744073709551609UL},{0xED5C3192L,0xED5C3192L,0xA2FD06D7L,0x18506245L},{0x18506245L,0x947B89F7L,0xA2FD06D7L,0x947B89F7L},{0xED5C3192L,0xFD6F03D8L,18446744073709551609UL,0xA2FD06D7L},{0x947B89F7L,0xFD6F03D8L,0xFD6F03D8L,0x947B89F7L},{0xFD6F03D8L,0x947B89F7L,0xED5C3192L,0x18506245L}};
static uint32_t *g_323 = &g_96.f0;
static uint32_t **g_322 = &g_323;
static uint64_t g_380[7][4] = {{0xE96A8D5574EA3051LL,0xCBA844F2EB83E223LL,0xE96A8D5574EA3051LL,0xE2BD0B358BC29AFALL},{9UL,0x89AE162749795CE8LL,0xE2BD0B358BC29AFALL,0xE2BD0B358BC29AFALL},{0xCBA844F2EB83E223LL,0xCBA844F2EB83E223LL,1UL,0x89AE162749795CE8LL},{0x89AE162749795CE8LL,9UL,1UL,9UL},{0xCBA844F2EB83E223LL,0x89AE162749795CE8LL,1UL,0xCBA844F2EB83E223LL},{0xE96A8D5574EA3051LL,0x89AE162749795CE8LL,0x89AE162749795CE8LL,0xE96A8D5574EA3051LL},{0x89AE162749795CE8LL,0xE96A8D5574EA3051LL,0x5027362A58C58305LL,0xE2BD0B358BC29AFALL}};
static uint64_t g_381 = 18446744073709551608UL;
static uint8_t g_422[4][2] = {{0xDCL,4UL},{4UL,0xDCL},{4UL,4UL},{0xDCL,4UL}};
static int64_t g_426 = 0xB660F0CE56365849LL;
static uint32_t g_450 = 0x89C085A2L;
static union U3 g_453 = {-9L};
static int32_t *g_563[5] = {&g_138,&g_138,&g_138,&g_138,&g_138};
static int32_t **g_562 = &g_563[4];
static const struct S2 *g_608 = (void*)0;
static const struct S2 **g_607[1][6][2] = {{{&g_608,&g_608},{&g_608,&g_608},{&g_608,&g_608},{&g_608,&g_608},{&g_608,&g_608},{&g_608,&g_608}}};
static const struct S2 ***g_606 = &g_607[0][2][0];
static const uint32_t g_619 = 1UL;
static const uint32_t *g_618 = &g_619;
static const uint32_t **g_617 = &g_618;
static const int32_t *g_625 = &g_41;
static int8_t **g_678 = &g_233;
static uint16_t g_756 = 0x3F1BL;
static uint8_t ***g_793 = (void*)0;
static const int16_t *g_820[3] = {&g_453.f0,&g_453.f0,&g_453.f0};
static const int16_t **g_819[2] = {&g_820[0],&g_820[0]};
static const int16_t *** const g_818 = &g_819[1];
static uint64_t g_880 = 0UL;
static int64_t g_926 = 0xFF1E5D6C2A9FB416LL;
static int32_t g_976 = 0x8CD8C947L;
static int64_t g_996[7] = {0xC388306DA168F0EALL,0xC388306DA168F0EALL,0xC388306DA168F0EALL,0xC388306DA168F0EALL,0xC388306DA168F0EALL,0xC388306DA168F0EALL,0xC388306DA168F0EALL};
static struct S0 g_1038 = {0x83BF4B87L,0x321ECD22L,0L,1UL};
static struct S0 *g_1037 = &g_1038;
static struct S0 g_1157 = {0x369A1F35L,18446744073709551615UL,0x76L,0x2E89L};
static int32_t ***g_1201 = &g_562;
static int32_t ****g_1200 = &g_1201;
static int32_t g_1232[4] = {0x1F1258FBL,0x1F1258FBL,0x1F1258FBL,0x1F1258FBL};
static int8_t ** const *g_1400 = (void*)0;
static int8_t ** const **g_1399 = &g_1400;
static const uint8_t *g_1413 = &g_261;
static const uint8_t **g_1412[6] = {&g_1413,&g_1413,&g_1413,&g_1413,&g_1413,&g_1413};
static int16_t ****g_1433 = (void*)0;
static int16_t g_1450 = (-2L);
static int32_t **g_1504 = &g_563[4];
static int32_t *** const g_1503 = &g_1504;
static int32_t *** const *g_1502 = &g_1503;
static uint64_t ** const *g_1530 = &g_289;
static uint64_t ** const **g_1529[5] = {&g_1530,&g_1530,&g_1530,&g_1530,&g_1530};
static uint64_t ** const ***g_1528 = &g_1529[2];
static union U3 *g_1541 = &g_453;
static union U3 **g_1540[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static struct S2 *****g_1561 = (void*)0;
static uint8_t *g_1671 = &g_60;
static uint8_t **g_1670 = &g_1671;
static uint8_t ***g_1669 = &g_1670;
static int64_t g_1696 = 0xEC430EA62182CA4DLL;
static uint32_t *g_1842[7][5] = {{&g_302[3][0],&g_302[3][0],&g_302[3][0],&g_302[3][0],&g_302[3][0]},{&g_11.f1,&g_11.f1,&g_11.f1,&g_11.f1,&g_11.f1},{&g_302[3][0],&g_302[3][0],&g_302[3][0],&g_302[3][0],&g_302[3][0]},{&g_11.f1,&g_11.f1,&g_11.f1,&g_11.f1,&g_11.f1},{&g_302[3][0],&g_302[3][0],&g_302[3][0],&g_302[3][0],&g_302[3][0]},{&g_11.f1,&g_11.f1,&g_11.f1,&g_11.f1,&g_11.f1},{&g_302[3][0],&g_302[3][0],&g_302[3][0],&g_302[3][0],&g_302[3][0]}};
static uint32_t **g_1841 = &g_1842[0][2];
static int16_t *g_1865 = &g_135[3];
static int16_t **g_1864 = &g_1865;
static int16_t ***g_1863 = &g_1864;
static int16_t g_1878 = (-3L);
static int16_t * const g_1877 = &g_1878;
static int16_t * const *g_1876 = &g_1877;
static uint64_t ***g_1986 = &g_289;
static uint64_t ****g_1985[2][4][3] = {{{&g_1986,&g_1986,&g_1986},{&g_1986,&g_1986,&g_1986},{&g_1986,&g_1986,&g_1986},{&g_1986,&g_1986,&g_1986}},{{&g_1986,&g_1986,&g_1986},{&g_1986,&g_1986,&g_1986},{&g_1986,&g_1986,&g_1986},{&g_1986,&g_1986,&g_1986}}};
static uint64_t *****g_1984 = &g_1985[0][1][0];
static uint64_t *****g_1987 = (void*)0;
static int32_t g_2027 = 0x6AB65697L;
static int32_t *g_2034 = &g_1232[0];
static struct S1 **g_2046[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int16_t g_2067 = (-1L);
static uint16_t *g_2182 = &g_96.f1;
static uint16_t **g_2181 = &g_2182;
static uint32_t g_2189 = 5UL;
static uint8_t g_2240 = 0x46L;
static int8_t ***g_2297[5] = {&g_678,&g_678,&g_678,&g_678,&g_678};
static int8_t ****g_2296 = &g_2297[3];
static uint32_t g_2304 = 4294967290UL;



static int32_t  func_1(void);
static struct S0  func_5(struct S0  p_6, int16_t  p_7, uint16_t  p_8, uint8_t  p_9, int32_t  p_10);
static int16_t  func_13(const int16_t  p_14, const uint16_t  p_15, int16_t  p_16, union U3  p_17);
static int64_t  func_22(struct S0  p_23, const uint32_t  p_24, struct S1  p_25, struct S0  p_26);
static struct S0  func_27(int16_t  p_28);
static int32_t * func_30(int32_t * p_31, int64_t  p_32, int8_t  p_33, int32_t  p_34, const uint64_t  p_35);
static int32_t * func_36(int32_t  p_37);
static struct S2  func_53(int32_t * p_54, uint16_t  p_55, union U3  p_56, int32_t * p_57, uint64_t  p_58);




static int32_t  func_1(void)
{ 
    uint64_t l_29 = 9UL;
    int32_t l_1589[4] = {(-1L),(-1L),(-1L),(-1L)};
    uint16_t l_1794 = 0x7E2EL;
    uint16_t **l_2183 = &g_2182;
    struct S2 *l_2208 = (void*)0;
    struct S2 **l_2207 = &l_2208;
    struct S2 ***l_2206 = &l_2207;
    struct S2 **** const l_2205 = &l_2206;
    struct S1 l_2219 = {-1L,0x0F8014B8L,0UL};
    uint32_t l_2237 = 18446744073709551615UL;
    int32_t *l_2246 = &g_1232[0];
    int8_t ****l_2299[7][1][1] = {{{(void*)0}},{{&g_2297[3]}},{{(void*)0}},{{(void*)0}},{{&g_2297[3]}},{{(void*)0}},{{(void*)0}}};
    union U3 *l_2354 = (void*)0;
    uint8_t l_2370 = 247UL;
    struct S0 *l_2371 = &g_11;
    struct S0 **l_2372[5];
    int32_t l_2394 = 0x717860A0L;
    int16_t **l_2395[4] = {&g_1865,&g_1865,&g_1865,&g_1865};
    uint32_t l_2396 = 4294967286UL;
    int64_t l_2397 = 0L;
    uint16_t * const *l_2435 = (void*)0;
    uint16_t * const **l_2434[2];
    uint16_t * const ***l_2433[7] = {&l_2434[1],&l_2434[1],&l_2434[1],&l_2434[1],&l_2434[1],&l_2434[1],&l_2434[1]};
    uint32_t l_2498 = 0xD4F818B7L;
    int64_t l_2500[6] = {0x6FDAB6075C6B8164LL,(-1L),(-1L),0x6FDAB6075C6B8164LL,(-1L),(-1L)};
    struct S2 *** const l_2504 = (void*)0;
    struct S2 *** const *l_2503 = &l_2504;
    int64_t *l_2554 = &g_926;
    int64_t **l_2553 = &l_2554;
    int64_t ***l_2552[7] = {&l_2553,&l_2553,&l_2553,&l_2553,&l_2553,&l_2553,&l_2553};
    uint32_t ***l_2568 = (void*)0;
    int16_t l_2638 = 0xBF42L;
    int64_t l_2643 = 0x902FAC48821260DFLL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_2372[i] = &g_1037;
    for (i = 0; i < 2; i++)
        l_2434[i] = &l_2435;
    for (g_2 = 0; (g_2 != 26); ++g_2)
    { 
        struct S1 l_12 = {0L,0x0E2632C5L,6UL};
        struct S0 l_616 = {18446744073709551608UL,0x1E8CEEA1L,-1L,0x3B2CL};
        int64_t *l_1587 = &g_996[0];
        uint16_t *l_1588[4];
        union U3 l_1590[3] = {{0L},{0L},{0L}};
        int32_t l_2177 = 7L;
        uint16_t **l_2180[4][5][3] = {{{(void*)0,(void*)0,(void*)0},{&l_1588[1],&l_1588[1],&l_1588[1]},{(void*)0,(void*)0,(void*)0},{&l_1588[1],&l_1588[1],&l_1588[1]},{(void*)0,(void*)0,(void*)0}},{{&l_1588[1],&l_1588[1],&l_1588[1]},{(void*)0,(void*)0,(void*)0},{&l_1588[1],&l_1588[1],&l_1588[1]},{(void*)0,(void*)0,(void*)0},{&l_1588[1],&l_1588[1],&l_1588[1]}},{{(void*)0,(void*)0,(void*)0},{&l_1588[1],&l_1588[1],&l_1588[1]},{(void*)0,(void*)0,(void*)0},{&l_1588[1],&l_1588[1],&l_1588[1]},{(void*)0,(void*)0,(void*)0}},{{&l_1588[1],&l_1588[1],&l_1588[1]},{(void*)0,(void*)0,(void*)0},{&l_1588[1],&l_1588[1],&l_1588[1]},{(void*)0,(void*)0,(void*)0},{&l_1588[1],&l_1588[1],&l_1588[1]}}};
        uint16_t ***l_2179[7] = {&l_2180[3][1][0],&l_2180[2][1][1],&l_2180[3][1][0],&l_2180[3][1][0],&l_2180[2][1][1],&l_2180[3][1][0],&l_2180[3][1][0]};
        int32_t l_2186 = (-1L);
        int32_t l_2187[6] = {(-1L),(-1L),6L,(-1L),(-1L),6L};
        int64_t l_2188 = 0x9D66DD006A17E192LL;
        struct S2 l_2200 = {0x16A32128L,0xC5BBL,255UL};
        int32_t *l_2275 = &g_50[0];
        int16_t l_2301 = 0xAA44L;
        uint16_t l_2338[7] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL};
        uint64_t l_2340 = 0x5651FBD0AD1CDAE9LL;
        uint64_t *l_2368 = (void*)0;
        uint64_t *l_2369 = &l_2340;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1588[i] = (void*)0;
    }
    g_1037 = l_2371;
    if (((safe_add_func_int64_t_s_s(0xF80223B456384BCELL, (safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((((*l_2246) || ((safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((0x1EL >= (((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((((safe_add_func_uint8_t_u_u(l_2394, 0xABL)) < (((*l_2246) , (*g_818)) == l_2395[0])) != (*l_2246)) && 0x4B4C909188AB16EALL), (*l_2246))), (*l_2246))) >= g_996[0]))) , (**g_1864)) != 0x4F78L)), (*l_2246))), l_2396)) & 0xD9L), l_2397)) ^ 0xB305B458C74F1F38LL)) >= (*l_2246)), (*l_2246))), 2)))) & (**g_289)))
    { 
        uint32_t l_2410 = 8UL;
        union U3 l_2423[2] = {{0xB43AL},{0xB43AL}};
        int32_t *l_2424 = &l_1589[1];
        int8_t l_2439 = 8L;
        struct S1 l_2447 = {-10L,0xDADB81A0L,6UL};
        int i;
        for (g_2067 = 0; (g_2067 <= 4); g_2067 += 1)
        { 
            union U3 l_2407 = {1L};
            int32_t l_2427 = 2L;
            for (g_756 = 0; (g_756 <= 4); g_756 += 1)
            { 
                const int16_t l_2400 = 0x1B9CL;
                struct S2 l_2425 = {0x7973B608L,0xCEB0L,1UL};
                if ((safe_mul_func_uint8_t_u_u(l_2400, (safe_div_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((0UL > 0xC0A24381L), (safe_lshift_func_uint8_t_u_u(((l_2407 , ((void*)0 == &g_2182)) | ((safe_sub_func_uint16_t_u_u(l_2410, l_2400)) , g_450)), 0)))) == g_453.f0), l_2400)))))
                { 
                    int32_t l_2426 = 0x65672E6CL;
                    l_2427 = (((0x8A807CEECB772727LL > ((safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((*l_2246), 2)), (--(***g_1986)))), (0UL >= (l_2425 , 18446744073709551614UL)))), (**g_1864))), (**g_2181))) <= 18446744073709551608UL)) <= 4294967287UL) < l_2426);
                    if (l_2426)
                        continue;
                }
                else
                { 
                    return g_302[3][0];
                }
                if (l_2407.f2)
                    break;
                for (g_96.f2 = 0; (g_96.f2 <= 4); g_96.f2 += 1)
                { 
                    int32_t l_2428 = 0x6269C28DL;
                    const struct S0 *l_2443 = &g_1157;
                    const struct S0 **l_2442 = &l_2443;
                    const struct S0 ***l_2444 = &l_2442;
                    (*l_2424) = (l_2428 != (safe_sub_func_int16_t_s_s((((l_2433[0] == (void*)0) > (***g_1669)) <= ((((*g_1877) &= (safe_lshift_func_int16_t_s_s(((0UL < (!(l_2439 <= ((((safe_lshift_func_int8_t_s_u((((*l_2444) = l_2442) != (void*)0), (**g_1670))) != (-7L)) == 7L) <= l_2407.f0)))) && g_422[3][1]), (***g_818)))) , l_2428) >= l_2425.f1)), (*l_2246))));
                    return g_453.f2;
                }
            }
            (*g_1504) = l_2424;
            for (g_926 = 0; (g_926 <= 3); g_926 += 1)
            { 
                for (l_2219.f0 = 0; (l_2219.f0 <= 1); l_2219.f0 += 1)
                { 
                    return g_422[0][1];
                }
                for (l_2237 = 1; (l_2237 <= 4); l_2237 += 1)
                { 
                    uint64_t *l_2448 = &g_381;
                    int32_t l_2449 = 0L;
                    int i;
                    (*l_2246) = ((safe_mul_func_int16_t_s_s(((*g_1877) = (l_2447 , (g_135[g_926] &= ((*g_1413) >= ((****g_2296) &= ((void*)0 == l_2448)))))), l_2449)) <= 0L);
                }
            }
        }
    }
    else
    { 
        struct S2 l_2456 = {0xF8E0E8DCL,65527UL,0x26L};
        struct S0 l_2457 = {0x53980FD6L,6UL,4L,0xB43EL};
        union U3 l_2462 = {0xF79AL};
        int32_t *l_2463[1];
        uint8_t l_2464 = 0UL;
        uint64_t **l_2465 = &g_290;
        uint8_t l_2470 = 0x13L;
        struct S1 l_2482 = {7L,0xDDAD1655L,0x59AD4776L};
        uint32_t **l_2483 = (void*)0;
        uint64_t l_2499[7][5] = {{18446744073709551615UL,0x3051CF21480C92CCLL,0UL,0xBE63C3624845C51FLL,0xBE63C3624845C51FLL},{18446744073709551615UL,0x7B1C270AF8B9D235LL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL},{18446744073709551606UL,0x80C6A4EFCE818B35LL,0xBE63C3624845C51FLL,0x80C6A4EFCE818B35LL,18446744073709551606UL},{18446744073709551615UL,0xF5D8D3FF57AF3EF0LL,0x7B1C270AF8B9D235LL,18446744073709551611UL,0x7B1C270AF8B9D235LL},{18446744073709551615UL,18446744073709551615UL,0xBE63C3624845C51FLL,18446744073709551606UL,0xF7144B1C5F78FB2ELL},{0xF5D8D3FF57AF3EF0LL,18446744073709551615UL,18446744073709551615UL,0xF5D8D3FF57AF3EF0LL,0x7B1C270AF8B9D235LL},{0x80C6A4EFCE818B35LL,18446744073709551606UL,0UL,0UL,18446744073709551606UL}};
        struct S2 *** const *l_2501 = &l_2206;
        struct S2 *** const **l_2502[5] = {&l_2501,&l_2501,&l_2501,&l_2501,&l_2501};
        uint32_t l_2523 = 1UL;
        uint16_t l_2593 = 0x7621L;
        int32_t ***l_2606 = (void*)0;
        const uint64_t l_2614 = 0x87DEB37FBDF51DE6LL;
        uint16_t l_2628 = 0UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_2463[i] = &l_1589[1];
        if ((safe_mod_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((*g_1541) , (l_2456 , (2L == ((l_2457 , (safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((func_27(l_2457.f0) , (func_53(func_36(((-4L) != g_2240)), l_2456.f0, l_2462, l_2463[0], (*l_2246)) , 3UL)) | (*l_2246)), 0x8FL)) , (*l_2246)), (*l_2246)))) >= 0x04L)))), (*g_1877))), (*g_2034))) , &l_2354) == &l_2354) ^ (*l_2246)), 0x1B20L)))
        { 
            return g_976;
        }
        else
        { 
            int32_t l_2475 = (-3L);
            if (((l_2464 != (*g_2182)) & (l_2465 == (*g_1530))))
            { 
                for (l_2394 = (-28); (l_2394 < (-23)); l_2394 = safe_add_func_int64_t_s_s(l_2394, 5))
                { 
                    int32_t l_2468 = 9L;
                    int32_t l_2469 = 0x8BB986C9L;
                    l_2470++;
                }
            }
            else
            { 
                uint32_t l_2478 = 0UL;
                int32_t l_2479 = 0xEFD8A8FBL;
                uint32_t ***l_2484 = &g_1841;
                for (g_96.f0 = 0; (g_96.f0 < 23); g_96.f0++)
                { 
                    (*l_2246) = (*l_2246);
                    return g_1038.f2;
                }
                (**g_606) = ((*g_1541) , &l_2456);
                for (g_117 = 0; (g_117 <= 6); g_117 += 1)
                { 
                    int i;
                    return g_996[g_117];
                }
                l_2479 ^= ((*l_2246) |= (l_2475 < (safe_mul_func_int8_t_s_s(l_2478, 3UL))));
                (*g_2034) = (safe_rshift_func_int16_t_s_s((((*l_2484) = (l_2482 , l_2483)) != (void*)0), 10));
            }
            (***g_1502) = (void*)0;
        }
        if (((&g_606 != (l_2503 = ((l_2500[3] = (safe_lshift_func_int8_t_s_u(((*g_323) , ((((((~(safe_sub_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s(0x22L, 7)) ^ g_1038.f3) >= (((((***g_1863) = ((**g_1876) = (((0x3D2222E555286DB4LL ^ g_11.f1) | (safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((void*)0 != (**g_818)), l_2498)) == (*g_290)), 0x8BL)) && 0L), 4))) < l_2499[0][2]))) , g_50[0]) , (*l_2246)) , (-6L))), (*l_2246)))) < (*l_2246)) ^ 0UL) , 0x78L) , (*g_2034)) && 0xC1F1CBE8L)), 2))) , l_2501))) < (***g_818)))
        { 
            struct S2 l_2505 = {4UL,0x50D6L,249UL};
            uint64_t l_2510 = 0x7CDB26AB757E91F9LL;
            const union U3 l_2511[7] = {{-9L},{0xC6BEL},{0xC6BEL},{-9L},{0xC6BEL},{0xC6BEL},{-9L}};
            int32_t l_2524 = 0x348F4814L;
            uint32_t l_2536 = 0x0DA4D09AL;
            int32_t l_2543 = (-1L);
            uint64_t l_2545 = 0x7439D89A8003DF08LL;
            uint8_t ****l_2567 = &g_793;
            int32_t l_2635 = 0x2EEBB5C0L;
            int32_t l_2637 = 1L;
            int32_t l_2639 = (-4L);
            uint16_t l_2640 = 0UL;
            int i;
            g_453.f3 = l_2505;
            if ((*l_2246))
            { 
                uint32_t l_2522[7][7];
                int32_t l_2527 = (-5L);
                int32_t l_2528 = 0x4B9B268AL;
                int32_t *l_2532 = &g_50[0];
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_2522[i][j] = 4294967295UL;
                }
                l_2524 = ((((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((l_2510 ^ ((l_2219 , l_2511[2]) , (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((-1L), ((safe_rshift_func_int16_t_s_u(0L, 10)) > ((*l_2246) = (((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((-9L), ((((****g_2296) &= 0L) <= l_2522[5][2]) , l_2523))), (*g_290))) < (*l_2246)) && 0x6CE65EB7F5C01F23LL))))), (**g_1670))))), l_2522[5][2])), 0xD0L)) < l_2522[0][6]) == l_2522[5][2]) , l_2505.f0);
                for (l_2462.f1 = (-20); (l_2462.f1 > 32); l_2462.f1 = safe_add_func_int32_t_s_s(l_2462.f1, 9))
                { 
                    uint64_t l_2529 = 0xCB6928CB3B2AC945LL;
                    ++l_2529;
                }
                l_2532 = (***g_1200);
            }
            else
            { 
                int32_t l_2533 = 0x32D1C12AL;
                int32_t l_2534 = 0x496D26EBL;
                int8_t l_2539 = 0L;
                int32_t l_2544[6][3][2] = {{{1L,(-6L)},{5L,0xA436CCADL},{(-10L),0x27FF6058L}},{{0x27FF6058L,0x27FF6058L},{(-10L),0xA436CCADL},{5L,(-6L)}},{{1L,(-10L)},{7L,1L},{0L,0x54941AB0L}},{{0L,1L},{7L,(-10L)},{1L,(-6L)}},{{5L,0xA436CCADL},{(-10L),0x27FF6058L},{0x27FF6058L,0x27FF6058L}},{{(-10L),0xA436CCADL},{5L,(-6L)},{1L,(-10L)}}};
                int i, j, k;
                for (g_1157.f2 = 0; (g_1157.f2 >= 0); g_1157.f2 -= 1)
                { 
                    int32_t l_2535 = 0xFAD4B773L;
                    l_2536--;
                }
                if (l_2539)
                { 
                    uint16_t l_2540 = 1UL;
                    int32_t *l_2541 = &g_138;
                    (***g_1502) = l_2541;
                }
                else
                { 
                    int8_t l_2542[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2542[i] = 0x96L;
                    --l_2545;
                }
            }
            for (l_2523 = 0; (l_2523 == 40); l_2523 = safe_add_func_uint32_t_u_u(l_2523, 6))
            { 
                int32_t l_2566 = 0x0B185D49L;
                for (l_2505.f2 = 0; (l_2505.f2 < 19); l_2505.f2 = safe_add_func_uint16_t_u_u(l_2505.f2, 7))
                { 
                    int64_t ****l_2555 = &l_2552[5];
                    int32_t *** const l_2557 = &g_1504;
                    (*l_2555) = l_2552[3];
                    (*g_2034) = ((!(((*g_1200) = (*g_1200)) != l_2557)) ^ (safe_div_func_int8_t_s_s((~(((((((*g_323) | ((safe_div_func_uint64_t_u_u(((*g_290) = (((!(*l_2246)) == ((((safe_mod_func_uint16_t_u_u(l_2566, (*l_2246))) & l_2566) > 9L) ^ (*g_233))) , l_2510)), (*l_2246))) == (**g_2181))) & (**g_322)) == l_2566) ^ 1UL) == l_2566) ^ l_2511[2].f2)), (*g_1413))));
                }
            }
            for (l_2457.f2 = 0; (l_2457.f2 <= 0); l_2457.f2 += 1)
            { 
                int16_t ***l_2582 = &l_2395[0];
                const int32_t l_2592 = 0xB1994BE2L;
                struct S1 l_2596[1][6][5] = {{{{1L,-1L,0xBBF4E137L},{0xE4L,0x7F1251DCL,18446744073709551608UL},{1L,-1L,0xBBF4E137L},{1L,-1L,0xBBF4E137L},{0xE4L,0x7F1251DCL,18446744073709551608UL}},{{0x6CL,-1L,0xDC5A29C6L},{0xDCL,-1L,0x59900F23L},{0xDCL,-1L,0x59900F23L},{0x6CL,-1L,0xDC5A29C6L},{0xDCL,-1L,0x59900F23L}},{{0xE4L,0x7F1251DCL,18446744073709551608UL},{0xE4L,0x7F1251DCL,18446744073709551608UL},{-10L,0x15EA830BL,0x0B54C2B8L},{0xE4L,0x7F1251DCL,18446744073709551608UL},{0xE4L,0x7F1251DCL,18446744073709551608UL}},{{0xDCL,-1L,0x59900F23L},{0x6CL,-1L,0xDC5A29C6L},{0xDCL,-1L,0x59900F23L},{0xDCL,-1L,0x59900F23L},{0x6CL,-1L,0xDC5A29C6L}},{{0xE4L,0x7F1251DCL,18446744073709551608UL},{1L,-1L,0xBBF4E137L},{1L,-1L,0xBBF4E137L},{0xE4L,0x7F1251DCL,18446744073709551608UL},{1L,-1L,0xBBF4E137L}},{{0x6CL,-1L,0xDC5A29C6L},{0x6CL,-1L,0xDC5A29C6L},{0x2AL,0xC5CAF398L,0xDF61CBA2L},{0x6CL,-1L,0xDC5A29C6L},{0x6CL,-1L,0xDC5A29C6L}}}};
                int32_t ***l_2605 = &g_1504;
                int32_t ****l_2604[2];
                int16_t l_2607 = 0x0D95L;
                uint32_t l_2612 = 18446744073709551609UL;
                uint16_t l_2613 = 0xA200L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_2604[i] = &l_2605;
                (*g_2034) ^= ((void*)0 == l_2567);
                if ((((*g_1201) = ((**g_1502) = (*g_1201))) == &l_2463[l_2457.f2]))
                { 
                    uint32_t ****l_2569 = &l_2568;
                    uint64_t l_2583 = 0x90EBADBFB00C059ELL;
                    int32_t l_2590 = 0x199439CCL;
                    int32_t l_2591 = (-1L);
                    (*l_2569) = l_2568;
                    l_2591 |= (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((***g_818), (((((!(safe_lshift_func_int8_t_s_s(((*l_2246) ^ (+(safe_sub_func_uint16_t_u_u((l_2583 = ((safe_rshift_func_int8_t_s_u((*l_2246), 0)) >= ((l_2582 = &g_1864) != (void*)0))), ((*g_1865) ^= (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_2536, ((*g_2182) = (**g_2181)))), 1UL)), (*l_2246)))))))), 7))) || 0x1FD1272FL) < 0UL) , (*g_323)) > l_2590))), 3UL));
                    if (l_2592)
                        break;
                    return g_2240;
                }
                else
                { 
                    int i;
                    l_2593--;
                }
                l_2607 = ((l_2219 , l_2596[0][0][2]) , ((*g_2034) = (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((+(safe_sub_func_uint32_t_u_u(((*g_1200) == (l_2606 = (*g_1200))), 0xF3FE06C8L))), (*g_1413))), 3))));
                (**g_1201) = (**g_1201);
                for (g_96.f0 = 1; (g_96.f0 <= 4); g_96.f0 += 1)
                { 
                    uint32_t l_2615 = 18446744073709551608UL;
                    l_2615++;
                }
            }
            for (g_2067 = 4; (g_2067 >= 0); g_2067 -= 1)
            { 
                uint16_t l_2620 = 0x6112L;
                uint8_t l_2627 = 0UL;
                int32_t *l_2631 = (void*)0;
                int32_t l_2633 = 1L;
                int32_t l_2634 = 1L;
                int32_t l_2636[2][5] = {{1L,6L,1L,1L,6L},{6L,1L,1L,6L,1L}};
                int i, j;
                for (l_2457.f2 = 4; (l_2457.f2 >= 0); l_2457.f2 -= 1)
                { 
                    uint8_t l_2626[3];
                    union U3 l_2632 = {0xF546L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2626[i] = 0xB0L;
                    l_2627 ^= (l_2620 || (((((**g_322) = ((*l_2246) & (**g_1670))) > (*g_2034)) > ((((*g_1541) , (((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((((*g_618) ^ l_2524) != l_2620) > (**g_617)), (*l_2246))), l_2543)))) & l_2626[0]) > l_2510)) , 0L) & 0x7BL)) > 0x68308125350BE3DDLL));
                    if (l_2505.f2)
                        break;
                    l_2628--;
                    g_96 = l_2505;
                }
                l_2640++;
            }
        }
        else
        { 
            (*l_2246) = (*g_2034);
        }
    }
    return l_2643;
}



static struct S0  func_5(struct S0  p_6, int16_t  p_7, uint16_t  p_8, uint8_t  p_9, int32_t  p_10)
{ 
    union U3 l_1807 = {0x0363L};
    uint8_t ***l_1812 = (void*)0;
    struct S0 l_1828 = {0xE773C6D0L,0xD713D09BL,0xB1L,3UL};
    struct S1 l_1838 = {-7L,0xC2303B2CL,18446744073709551615UL};
    uint32_t *l_1840 = (void*)0;
    uint32_t **l_1839 = &l_1840;
    int32_t l_1887 = 0x35F65A4CL;
    int32_t l_1890[4] = {0xC94C7A7AL,0xC94C7A7AL,0xC94C7A7AL,0xC94C7A7AL};
    uint32_t l_1938 = 0x4244A7B6L;
    struct S2 l_1952[7] = {{4294967288UL,1UL,0x4FL},{5UL,0xE6A3L,0xABL},{5UL,0xE6A3L,0xABL},{4294967288UL,1UL,0x4FL},{5UL,0xE6A3L,0xABL},{5UL,0xE6A3L,0xABL},{4294967288UL,1UL,0x4FL}};
    uint64_t ***l_1982 = &g_289;
    uint64_t ****l_1981 = &l_1982;
    uint64_t *****l_1980 = &l_1981;
    struct S0 l_1998 = {0xF2A6CA0CL,18446744073709551607UL,-1L,0xD10FL};
    int32_t l_2038 = 0xF990BD68L;
    int64_t *l_2043 = &g_926;
    int64_t **l_2042 = &l_2043;
    struct S2 l_2049 = {0xC29D91FBL,0xB5A7L,0xB3L};
    uint8_t l_2053 = 0x4FL;
    int32_t l_2069 = (-1L);
    int32_t *l_2098 = &g_2027;
    uint32_t l_2143 = 0x496B39ECL;
    union U3 **l_2173 = (void*)0;
    struct S1 *l_2176[7] = {&l_1838,&l_1838,&l_1838,&l_1838,&l_1838,&l_1838,&l_1838};
    struct S1 **l_2175 = &l_2176[6];
    int i;
    if (p_6.f1)
    { 
        union U3 *l_1797 = &g_453;
        struct S2 l_1800 = {0x84C70250L,0x6848L,1UL};
        struct S2 *l_1801 = (void*)0;
        struct S2 *l_1802[3];
        uint8_t ***l_1814[4];
        int32_t l_1817 = 0L;
        struct S1 l_1837 = {0x2BL,-6L,0x1054C006L};
        int16_t * const l_1861[2] = {&l_1807.f0,&l_1807.f0};
        int16_t * const *l_1860[6] = {&l_1861[1],&l_1861[1],&l_1861[1],&l_1861[1],&l_1861[1],&l_1861[1]};
        int16_t * const **l_1859[2][6][6] = {{{&l_1860[5],&l_1860[0],&l_1860[5],&l_1860[5],&l_1860[5],&l_1860[5]},{(void*)0,(void*)0,&l_1860[5],&l_1860[5],&l_1860[5],(void*)0},{&l_1860[5],&l_1860[0],&l_1860[5],&l_1860[5],&l_1860[0],&l_1860[5]},{(void*)0,&l_1860[5],&l_1860[5],&l_1860[5],(void*)0,(void*)0},{&l_1860[5],&l_1860[5],&l_1860[5],&l_1860[5],&l_1860[0],&l_1860[5]},{&l_1860[5],&l_1860[0],&l_1860[5],&l_1860[5],&l_1860[5],&l_1860[5]}},{{(void*)0,(void*)0,&l_1860[5],&l_1860[5],&l_1860[5],(void*)0},{&l_1860[5],&l_1860[0],&l_1860[5],&l_1860[5],&l_1860[0],&l_1860[5]},{(void*)0,&l_1860[5],&l_1860[5],&l_1860[5],(void*)0,(void*)0},{&l_1860[5],&l_1860[5],&l_1860[5],&l_1860[5],&l_1860[0],&l_1860[5]},{&l_1860[5],&l_1860[0],&l_1860[5],&l_1860[5],&l_1860[5],&l_1860[5]},{(void*)0,(void*)0,&l_1860[5],&l_1860[5],&l_1860[5],(void*)0}}};
        int16_t ***l_1862 = (void*)0;
        int32_t l_1895 = 1L;
        int32_t l_1896 = 0xA0D0C613L;
        int32_t l_1897 = 1L;
        int32_t ***l_1903 = &g_1504;
        int32_t l_1933 = 0xDC1B35A4L;
        int32_t l_1937[6][7] = {{(-8L),2L,1L,(-1L),2L,(-1L),1L},{2L,2L,1L,0x07687D47L,(-8L),1L,(-8L)},{0x07687D47L,1L,1L,0x07687D47L,(-1L),(-8L),0x07687D47L},{(-8L),(-8L),(-1L),(-1L),(-8L),(-8L),1L},{(-8L),0x07687D47L,1L,2L,2L,1L,0x07687D47L},{(-8L),1L,(-8L),(-8L),(-1L),(-1L),(-8L)}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1802[i] = (void*)0;
        for (i = 0; i < 4; i++)
            l_1814[i] = &g_1670;
        for (p_9 = 0; (p_9 >= 3); p_9 = safe_add_func_int32_t_s_s(p_9, 7))
        { 
            union U3 **l_1798 = &l_1797;
            int32_t l_1799 = (-9L);
            (*l_1798) = l_1797;
            if (l_1799)
                continue;
        }
lbl_1909:
        g_96 = l_1800;
        (*g_1528) = (*g_1528);
        for (g_41 = 0; (g_41 <= (-5)); g_41 = safe_sub_func_int8_t_s_s(g_41, 2))
        { 
            uint8_t ***l_1813 = &g_1670;
            int64_t *l_1815 = &g_1696;
            int32_t l_1816 = 0x119D02E1L;
            int16_t *l_1818 = (void*)0;
            int16_t *l_1819 = &g_453.f0;
            int8_t ***l_1832 = (void*)0;
            int8_t ****l_1831 = &l_1832;
            int32_t l_1891 = (-1L);
            int32_t l_1892 = 2L;
            int32_t l_1894 = 0x56DB2199L;
            if ((((*l_1819) = (safe_sub_func_int32_t_s_s(((p_6.f1 | (l_1807 , (1L != (((safe_sub_func_int64_t_s_s(((*l_1815) = (safe_div_func_uint64_t_u_u(((l_1813 = l_1812) == l_1814[2]), 0xB0ECA233379D19FBLL))), (l_1817 = l_1816))) < 0UL) , l_1816)))) >= p_7), p_6.f0))) | 65535UL))
            { 
                int32_t *l_1824[4] = {&g_41,&g_41,&g_41,&g_41};
                int i;
                p_10 |= ((safe_add_func_int32_t_s_s((l_1816 = (safe_rshift_func_uint8_t_u_u((&p_10 == &p_10), 0))), (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(p_9)), l_1807.f2)))) | 0x5B05DB18L);
            }
            else
            { 
                return l_1828;
            }
            if (p_6.f0)
                continue;
            for (l_1807.f3.f0 = 12; (l_1807.f3.f0 > 38); ++l_1807.f3.f0)
            { 
                uint16_t l_1835 = 0x979EL;
                uint64_t **l_1836 = (void*)0;
                int32_t l_1882 = 0xE3AA2605L;
                int32_t l_1893 = 0x5D4E862FL;
                uint8_t l_1898 = 0x90L;
                int32_t *l_1911 = &l_1816;
                int32_t **l_1910 = &l_1911;
                if ((((&g_1400 != l_1831) <= ((*g_290) = ((~p_8) != p_8))) != 0x8BDA53ECL))
                { 
                    uint64_t **l_1834 = (void*)0;
                    int32_t *l_1843 = &g_47;
                    (*l_1843) = (((l_1834 == (l_1835 , l_1836)) , l_1837) , (l_1838 , ((p_6.f0 , l_1839) != g_1841)));
                    return p_6;
                }
                else
                { 
                    int32_t *l_1844 = &g_99;
                    (*l_1844) &= l_1828.f1;
                }
                if ((safe_add_func_uint16_t_u_u((((0xCE7DL || (g_59 , ((*l_1819) &= (safe_mod_func_int8_t_s_s(l_1816, (*g_233)))))) > (safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s(((*l_1815) = (l_1859[0][2][5] != (g_1863 = l_1862))), (safe_sub_func_int64_t_s_s(((((*g_290) = (g_50[0] || l_1828.f3)) , &l_1797) != &g_1541), l_1828.f1)))), 18446744073709551612UL)), p_6.f2)), 0xF047L)) >= (-1L)), p_6.f3))) && 1UL), l_1835)))
                { 
                    int16_t * const *l_1875 = &g_1865;
                    int32_t *l_1881 = &g_1232[2];
                    int32_t l_1883 = 0x38CB7997L;
                    int32_t *l_1884 = (void*)0;
                    int32_t *l_1885 = &l_1883;
                    int32_t *l_1886 = &g_1232[0];
                    int32_t *l_1888 = &g_138;
                    int32_t *l_1889[2][5] = {{(void*)0,&l_1882,&g_138,&l_1882,(void*)0},{(void*)0,&l_1882,&g_138,&l_1882,(void*)0}};
                    int32_t * const *l_1905 = (void*)0;
                    int32_t * const **l_1904 = &l_1905;
                    int i, j;
                    (*l_1881) |= (+((((0x8AE0L == p_10) >= (safe_mod_func_int16_t_s_s((0x69DB6D3399C5656CLL & ((safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(((*l_1815) = ((g_1876 = l_1875) != &l_1819)), (((safe_sub_func_uint8_t_u_u((p_6.f0 , p_8), (-1L))) && l_1807.f2) || p_6.f1))), 10)) >= p_7)), (-1L)))) || 0xEDL) , p_7));
                    l_1882 = p_6.f0;
                    l_1898--;
                    (*l_1886) = ((l_1897 &= p_6.f0) || (l_1903 != l_1904));
                }
                else
                { 
                    int32_t *l_1908 = &l_1891;
                    if (p_8)
                        break;
                    (*l_1908) = (p_7 < ((*g_290) = (&l_1814[2] == (void*)0)));
                }
                if (p_8)
                    goto lbl_1909;
                (*l_1910) = ((**g_1503) = (void*)0);
            }
        }
        for (g_453.f2 = 1; (g_453.f2 >= 0); g_453.f2 -= 1)
        { 
            struct S2 **l_1912 = &l_1801;
            int32_t *l_1913 = &l_1890[0];
            int64_t *l_1916 = &g_426;
            int8_t l_1929 = 0xD3L;
            int32_t l_1932 = 0x1A388042L;
            int32_t l_1934 = (-1L);
            int32_t l_1935 = 0xF8B1064BL;
            int32_t l_1936 = (-3L);
            uint16_t l_1941 = 0x82ABL;
            uint16_t l_1944 = 0x27EBL;
            int i;
            (*l_1913) |= ((void*)0 != l_1912);
            if ((((safe_add_func_int64_t_s_s(((*l_1916) |= (((void*)0 != &g_819[g_453.f2]) & (*g_290))), (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((p_10 = (safe_rshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((*g_618), (*l_1913))) ^ (((p_8 | (safe_sub_func_int64_t_s_s((p_6.f2 >= (-1L)), 0x0B8FA1F0F26D84F9LL))) && p_6.f3) , (*l_1913))), g_261)), 7))) != 0x7057AB5DL), (-5L))), p_9)))) > g_1038.f3) && g_1038.f0))
            { 
                int16_t l_1930 = 0xAF71L;
                int32_t *l_1931[5][3][7] = {{{&g_1232[3],&g_50[0],&g_41,(void*)0,&l_1887,(void*)0,&g_41},{&g_2,&g_2,&l_1887,&l_1897,(void*)0,&l_1895,&g_1232[3]},{&g_1232[3],(void*)0,&l_1896,&l_1896,(void*)0,&g_1232[3],&l_1887}},{{&l_1890[2],&l_1887,&l_1897,(void*)0,(void*)0,(void*)0,(void*)0},{&g_41,(void*)0,&g_41,&g_2,&l_1887,&g_138,&g_1232[3]},{&l_1897,&l_1887,&g_1232[3],&l_1897,&g_1232[3],&g_2,(void*)0}},{{&l_1896,&l_1896,&g_41,&g_50[0],&g_2,&g_1232[3],&g_2},{&g_2,&l_1895,&l_1895,&g_2,&l_1897,&l_1890[2],&l_1897},{(void*)0,&g_138,&g_41,(void*)0,(void*)0,&g_41,&g_138}},{{&l_1897,(void*)0,&g_1232[3],&l_1887,&l_1895,&l_1897,&l_1897},{&g_1232[3],(void*)0,(void*)0,(void*)0,&g_1232[3],&l_1896,&g_2},{&l_1897,&l_1890[2],(void*)0,&l_1887,(void*)0,&l_1887,(void*)0}},{{&g_2,&g_2,&l_1896,(void*)0,&g_138,&g_41,&g_41},{&l_1897,&l_1887,&g_2,&g_2,&l_1887,&l_1897,(void*)0},{&g_1232[3],&l_1896,(void*)0,&g_50[0],&g_138,&g_138,&g_50[0]}}};
                int i, j, k;
                --l_1938;
                ++l_1941;
            }
            else
            { 
                for (g_59.f0 = 1; (g_59.f0 >= 0); g_59.f0 -= 1)
                { 
                    (*l_1913) = l_1944;
                    if (p_6.f2)
                        break;
                    return (*g_1037);
                }
                for (l_1895 = 0; (l_1895 <= 1); l_1895 += 1)
                { 
                    return l_1828;
                }
            }
            for (g_450 = 0; (g_450 <= 1); g_450 += 1)
            { 
                uint8_t l_1948 = 0x99L;
                uint8_t l_1951 = 0xBBL;
                for (g_41 = 0; (g_41 <= 1); g_41 += 1)
                { 
                    int32_t *l_1945 = &l_1890[3];
                    int32_t *l_1946 = &l_1933;
                    int32_t *l_1947[3][6][3] = {{{&l_1934,&l_1896,&l_1896},{&l_1890[2],&l_1896,&g_50[0]},{&l_1935,(void*)0,&g_99},{&l_1890[2],&g_138,&g_99},{&l_1934,(void*)0,&g_50[0]},{&l_1817,&g_138,&l_1896}},{{&l_1817,(void*)0,&g_138},{&l_1934,&l_1896,&l_1896},{&l_1890[2],&l_1896,&g_50[0]},{&l_1935,(void*)0,&g_99},{&l_1890[2],&g_138,&g_99},{&l_1934,(void*)0,&g_50[0]}},{{&l_1817,&g_138,&l_1896},{&l_1817,(void*)0,&g_138},{&l_1934,&l_1896,&l_1896},{&l_1890[2],&l_1896,&g_50[0]},{&l_1935,(void*)0,&g_99},{&l_1890[2],&g_138,&g_99}}};
                    int i, j, k;
                    l_1948++;
                    if (l_1951)
                        break;
                }
            }
            for (g_60 = 0; (g_60 <= 1); g_60 += 1)
            { 
                for (p_9 = 0; (p_9 <= 1); p_9 += 1)
                { 
                    int i;
                    if (p_8)
                        break;
                    g_819[g_60] = (void*)0;
                    (***g_1200) = &p_10;
                    g_96 = (g_59 , l_1952[0]);
                }
                for (g_99 = 0; (g_99 != (-9)); g_99 = safe_sub_func_int16_t_s_s(g_99, 1))
                { 
                    struct S2 *l_1959 = (void*)0;
                    (*l_1913) &= (safe_add_func_int16_t_s_s(((((p_6.f3 ^ (((safe_mod_func_int64_t_s_s((p_9 == ((void*)0 != l_1959)), p_10)) >= ((18446744073709551612UL >= (safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(g_99, 12)), l_1838.f2))) | (*g_233))) , 8UL)) <= (*g_1671)) , 0xF02A0755L) >= p_6.f0), 0x4F94L));
                    p_10 = (&l_1838 != (void*)0);
                }
            }
        }
    }
    else
    { 
        uint16_t l_1968 = 3UL;
        int32_t l_1969 = 0xC4E23A0BL;
        int32_t *l_1972 = &g_50[0];
        int32_t *l_1973 = &g_41;
        union U3 l_1975 = {0x93DDL};
        const uint32_t *l_1977 = &l_1828.f0;
        const uint32_t **l_1976 = &l_1977;
        uint64_t *****l_1983 = &l_1981;
        uint32_t l_1999 = 18446744073709551615UL;
        int32_t *l_2031[2][3] = {{&l_1890[3],&l_1890[3],&l_1890[3]},{&l_1890[3],&l_1890[3],&l_1890[3]}};
        int8_t *l_2032 = (void*)0;
        struct S1 l_2036[4][2] = {{{0x76L,0xAFA15260L,1UL},{0x76L,0xAFA15260L,1UL}},{{0x76L,0xAFA15260L,1UL},{0x76L,0xAFA15260L,1UL}},{{0x76L,0xAFA15260L,1UL},{0x76L,0xAFA15260L,1UL}},{{0x76L,0xAFA15260L,1UL},{0x76L,0xAFA15260L,1UL}}};
        struct S0 *l_2047 = &g_11;
        uint64_t l_2060 = 0xAF640DE0EBD967F9LL;
        uint8_t l_2070 = 0xB2L;
        int32_t l_2124[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_2124[i] = 0x7A7E32EAL;
        (*l_1972) = (safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((l_1968 ^ (p_10 = 0xA4444C38L)), (l_1969 = 0xB5325EEAL))), (safe_div_func_int16_t_s_s(((-2L) > (***g_1863)), p_6.f3))));
lbl_2102:
        l_1973 = ((***g_1200) = &l_1887);
        if ((!(((l_1975 , (void*)0) != (l_1887 , (l_1807 , l_1976))) , (safe_add_func_uint32_t_u_u(((((l_1983 = l_1980) == (g_1987 = (g_1984 = &l_1981))) , (*l_1973)) < p_10), p_6.f3)))))
        { 
            struct S2 l_2000 = {0x3D439363L,65535UL,1UL};
            struct S1 l_2004 = {1L,0x718A84D2L,4UL};
            uint16_t l_2017[2][6][6] = {{{0x215AL,0x215AL,1UL,0xE844L,1UL,0x215AL},{1UL,65535UL,0xE844L,0xE844L,65535UL,1UL},{0x215AL,1UL,0xE844L,1UL,0x215AL,0x215AL},{0x2CA5L,1UL,1UL,0x2CA5L,65535UL,0x2CA5L},{0x2CA5L,65535UL,0x2CA5L,1UL,1UL,0x2CA5L},{0x215AL,0x215AL,1UL,0xE844L,1UL,0x215AL}},{{1UL,65535UL,0xE844L,0xE844L,65535UL,1UL},{0x215AL,1UL,0xE844L,1UL,0x215AL,0x215AL},{0x2CA5L,1UL,1UL,0x2CA5L,65535UL,0x2CA5L},{0x2CA5L,0x215AL,0xE844L,0x2CA5L,0x2CA5L,0xE844L},{1UL,1UL,0x2CA5L,65535UL,0x2CA5L,1UL},{0x2CA5L,0x215AL,65535UL,65535UL,0x215AL,0x2CA5L}}};
            int32_t l_2030 = (-1L);
            int32_t *l_2035 = &l_1887;
            const uint8_t l_2037 = 4UL;
            int32_t l_2066[7];
            const struct S2 **l_2099 = &g_608;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_2066[i] = (-10L);
            if ((safe_mul_func_uint16_t_u_u((l_1807 , (((((safe_lshift_func_uint16_t_u_s(((1L != (safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(0xA907L, 0x5E1BL)) | (l_1998 , ((p_9 ^ p_6.f2) == (*l_1972)))), g_41)), l_1999))) <= p_6.f0), (*g_1877))) < 0x788AFB1CL) > 5UL) && p_7) , l_1938)), p_6.f2)))
            { 
                int16_t l_2011 = (-10L);
                int32_t l_2012 = 0x9CCD29D3L;
                int64_t *l_2020[3][2][6] = {{{(void*)0,(void*)0,(void*)0,&g_996[0],&g_996[0],&g_1696},{&g_1696,&g_426,&g_426,&g_996[0],&g_426,&g_426}},{{&g_1696,&g_1696,&g_996[0],&g_996[0],(void*)0,(void*)0},{(void*)0,&g_996[0],&g_1696,&g_1696,&g_1696,&g_1696}},{{&g_996[0],&g_996[0],&g_996[0],(void*)0,(void*)0,&g_1696},{&g_426,&g_1696,&g_996[0],&g_996[0],&g_426,&g_996[0]}}};
                struct S2 *l_2021 = &l_1952[0];
                struct S2 *l_2022[3][2][6] = {{{&g_96,(void*)0,&g_96,&g_96,&l_2000,&g_96},{&l_2000,&g_96,&g_453.f3,(void*)0,&l_2000,&l_2000}},{{(void*)0,&l_2000,&l_2000,(void*)0,&g_453.f3,&g_96},{&l_2000,&g_96,&l_2000,&g_96,&g_96,(void*)0}},{{&g_96,&g_453.f3,&g_96,&g_453.f3,&g_96,(void*)0},{(void*)0,&g_96,(void*)0,(void*)0,&g_453.f3,&l_2000}}};
                uint32_t *l_2028 = &l_1975.f3.f0;
                uint32_t *l_2029[2];
                int8_t *l_2033 = (void*)0;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_2029[i] = (void*)0;
                for (l_1807.f3.f2 = 0; (l_1807.f3.f2 <= 1); l_1807.f3.f2 += 1)
                { 
                    struct S2 *l_2001 = &l_1975.f3;
                    (*l_2001) = l_2000;
                    (*l_1972) ^= (((l_2012 |= (safe_sub_func_int32_t_s_s((p_10 = 0L), (l_2004 , (safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((((safe_div_func_uint16_t_u_u((p_8 == p_6.f1), (0x32L & ((*g_1671) |= p_6.f2)))) , (p_8 && l_1838.f2)) >= p_9), p_6.f1)), l_2011)))))) , 0xCA19L) <= l_2000.f1);
                }
                g_453.f3 = (g_96 = ((*l_2021) = func_53((((safe_mul_func_uint16_t_u_u((((((*l_1973) = (safe_sub_func_int64_t_s_s(l_2017[0][0][5], (0L <= (((**g_1864) | (((p_9 , &g_976) == l_1977) && p_6.f3)) ^ l_2011))))) ^ (*g_625)) == (**g_1864)) == 0x41L), p_10)) < l_2000.f1) , &l_1969), (*l_1972), l_1975, &l_2012, p_7)));
                (*l_1973) &= ((safe_lshift_func_int8_t_s_s((-6L), 5)) | (p_10 | ((*g_618) <= l_2004.f0)));
                (*l_2035) |= (safe_div_func_int32_t_s_s((g_59.f2 == ((-1L) ^ ((g_2027 = g_1038.f2) , ((l_2030 ^= (**g_617)) != (func_53(g_2034, p_8, (*g_1541), l_2035, (*g_290)) , p_8))))), 1L));
            }
            else
            { 
                int64_t **l_2040 = (void*)0;
                int32_t l_2052 = 0xD0D52157L;
                int16_t l_2057 = (-6L);
                int32_t l_2058 = 1L;
                int32_t l_2059 = 0xF009EE3FL;
                int32_t l_2068[2][7][4] = {{{0x1E4AA302L,0xB59A0B5EL,6L,0xE1DC5D4BL},{5L,0x699DF980L,0xAB531733L,0x4AB573FCL},{(-1L),5L,(-1L),(-9L)},{6L,(-3L),0xAD043346L,0x699DF980L},{0xE1DC5D4BL,(-1L),0x4AB573FCL,(-3L)},{0xE9DD07A3L,(-4L),0x4AB573FCL,0xB59A0B5EL},{0xE1DC5D4BL,0x2F96A753L,0xAD043346L,0xAD043346L}},{{6L,6L,(-1L),0xE9DD07A3L},{(-1L),0xE9DD07A3L,0xAB531733L,5L},{5L,0x5D022B33L,6L,0xAB531733L},{0x1E4AA302L,0x5D022B33L,0xE3012BABL,5L},{0x5D022B33L,0xE9DD07A3L,(-9L),0xE9DD07A3L},{0x4F16BE14L,6L,(-3L),0xAD043346L},{(-9L),0x2F96A753L,(-4L),0xB59A0B5EL}}};
                int i, j, k;
                if (((l_2036[1][0] , (l_2037 > l_2038)) < ((+l_1887) & p_6.f0)))
                { 
                    (***g_1200) = &p_10;
                }
                else
                { 
                    int64_t ***l_2041 = &l_2040;
                    l_2042 = ((*l_2041) = l_2040);
                }
lbl_2063:
                for (p_7 = 0; (p_7 < 17); p_7 = safe_add_func_int8_t_s_s(p_7, 1))
                { 
                    (*g_562) = &p_10;
                    if ((*g_2034))
                        continue;
                    l_1887 = (l_1838.f1 , 0x5E972E6FL);
                }
                if ((((void*)0 != g_2046[4]) , p_6.f1))
                { 
                    struct S0 **l_2048 = &g_1037;
                    (*l_2048) = l_2047;
                    return p_6;
                }
                else
                { 
                    struct S2 *l_2050 = &l_2049;
                    int32_t l_2051 = 1L;
                    int32_t l_2056[6] = {0xC27877F7L,0xA7083D25L,0xC27877F7L,0xC27877F7L,0xA7083D25L,0xC27877F7L};
                    int i;
                    (*l_2050) = l_2049;
                    --l_2053;
                    --l_2060;
                    if (l_1999)
                        goto lbl_2063;
                    (*l_1972) |= (safe_sub_func_uint64_t_u_u((l_1998 , (&l_2000 == (void*)0)), (65531UL && g_59.f0)));
                }
                l_2070--;
                (*g_818) = (void*)0;
            }
            for (l_2053 = 0; (l_2053 <= 51); ++l_2053)
            { 
                union U3 l_2097 = {0xF385L};
                int32_t l_2101 = 0x35C12522L;
                for (l_2000.f2 = 0; (l_2000.f2 == 30); l_2000.f2 = safe_add_func_uint64_t_u_u(l_2000.f2, 8))
                { 
                    struct S2 *l_2077 = &g_96;
                    int32_t *l_2081 = &l_2030;
                    uint16_t *l_2082 = (void*)0;
                    uint16_t *l_2083 = &l_2017[0][0][5];
                    uint8_t *l_2096 = &g_96.f2;
                    int8_t l_2100 = 0xBBL;
                    (*l_2077) = l_2049;
                    l_2101 |= ((*g_2034) &= (((*l_2098) ^= (safe_mul_func_int8_t_s_s((((safe_unary_minus_func_int16_t_s(((((*l_2077) = func_53(l_2081, ((*l_2083) = 65534UL), (((*l_2096) = (p_6.f3 < (((++(**g_1670)) , (safe_mul_func_int8_t_s_s(((*g_233) ^= (0x47D4L && (safe_mod_func_uint32_t_u_u(((((((safe_mod_func_int32_t_s_s((0x54L <= (safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((p_6.f2 & 7L), 0x9627D35BL)), p_8))), 5L)) == p_6.f1) < 1L) > g_96.f0) > (*l_2035)) > g_453.f0), p_10)))), p_6.f1))) || g_619))) , l_2097), l_2098, p_10)) , l_2099) == l_2099))) || 4294967294UL) != l_2100), (*l_2081)))) < (*l_2035)));
                    if (l_2004.f0)
                        goto lbl_2102;
                }
            }
        }
        else
        { 
            int32_t l_2105 = 0x680E47E4L;
            int32_t l_2134 = 0x16691D69L;
            int32_t l_2135 = (-9L);
            int32_t l_2137 = 0x0F37C126L;
            int32_t l_2139 = (-5L);
            for (l_1828.f2 = (-7); (l_1828.f2 != 21); l_1828.f2++)
            { 
                int32_t l_2106 = 0x3FF5F7A2L;
                int32_t l_2107[2][7][3] = {{{(-1L),0x6E66161CL,(-1L)},{(-9L),(-1L),0x89E00171L},{(-3L),(-1L),(-1L)},{0x89E00171L,(-9L),0xD31C0455L},{(-1L),(-3L),0L},{0x89E00171L,0x89E00171L,0xAEB0871CL},{(-3L),(-1L),0L}},{{(-9L),0x89E00171L,(-9L)},{(-1L),(-3L),0x6E66161CL},{(-1L),(-9L),(-9L)},{0x6E66161CL,(-1L),0L},{(-1L),(-1L),0xAEB0871CL},{0x6E66161CL,0x6E66161CL,0L},{(-1L),0xD31C0455L,0xAEB0871CL}}};
                int8_t *l_2111[6];
                uint64_t l_2140 = 0xA03D949717776AB2LL;
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_2111[i] = (void*)0;
                for (g_1157.f2 = 0; (g_1157.f2 <= 3); g_1157.f2 += 1)
                { 
                    uint32_t l_2108[5];
                    int8_t *l_2112 = &l_2036[1][0].f0;
                    int8_t *l_2113 = &l_1828.f2;
                    uint16_t l_2129 = 0x9D93L;
                    struct S2 l_2130 = {4294967295UL,0xB45BL,0xD2L};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2108[i] = 0UL;
                    --l_2108[4];
                    if (g_135[g_1157.f2])
                        continue;
                    (*l_1972) |= ((l_2112 = l_2111[2]) == l_2113);
                    (*l_2098) &= (((0x68784C1E5BB9C905LL || (safe_add_func_int8_t_s_s(((*g_233) = ((((safe_add_func_uint64_t_u_u(0xCD24F5E8F856281ALL, (safe_add_func_uint32_t_u_u((0xAC27L || ((safe_lshift_func_uint16_t_u_s(0x79D1L, 10)) != (safe_sub_func_uint8_t_u_u(((*g_1671) |= (l_2124[0] <= 0x09L)), ((safe_add_func_int32_t_s_s(((*l_1972) &= (safe_lshift_func_uint8_t_u_u(l_2107[0][3][2], 5))), 1UL)) & g_422[1][1]))))), g_135[g_1157.f2])))) | l_2129) ^ p_6.f1) && g_135[g_1157.f2])), l_2106))) , l_2130) , 7L);
                    if ((*l_2098))
                        break;
                }
                for (g_1696 = 0; (g_1696 < 13); g_1696 = safe_add_func_uint16_t_u_u(g_1696, 1))
                { 
                    int64_t l_2133 = 1L;
                    int32_t l_2136 = 1L;
                    int32_t l_2138 = 7L;
                    ++l_2140;
                }
                if ((*g_625))
                    continue;
                (**g_1503) = (void*)0;
            }
        }
        return p_6;
    }
    ++l_2143;
    for (l_2038 = 0; (l_2038 <= (-30)); l_2038--)
    { 
        uint8_t l_2158 = 0x13L;
        uint16_t *l_2161 = &l_1807.f3.f1;
        int32_t l_2174 = (-10L);
        (*g_2034) |= (((p_6.f1 , ((safe_sub_func_uint64_t_u_u(((((((safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((*l_2098), 4)), 6L)) || ((*l_2161) = (safe_mod_func_uint8_t_u_u(((p_9 = (((*g_1865) ^= l_2158) && p_10)) ^ ((((((**g_1670) = ((p_7 & ((safe_rshift_func_uint16_t_u_s((((*l_2098) ^ g_50[0]) > p_6.f0), (*l_2098))) , p_6.f0)) > (**g_1670))) , l_1838) , p_6.f0) >= 18446744073709551615UL) != (*g_625))), (**g_678))))) | (-5L)) , g_1561) != (void*)0) >= p_6.f3), 1UL)) , (-1L))) , (*l_2098)) >= (*l_2098));
        for (l_1807.f3.f0 = 6; (l_1807.f3.f0 > 56); l_1807.f3.f0 = safe_add_func_int64_t_s_s(l_1807.f3.f0, 8))
        { 
            uint64_t l_2168 = 0x1743E5C0779B58F6LL;
            struct S2 *l_2170 = &g_96;
            struct S2 **l_2169[2][3][6] = {{{&l_2170,(void*)0,&l_2170,&l_2170,(void*)0,&l_2170},{&l_2170,(void*)0,&l_2170,&l_2170,(void*)0,&l_2170},{&l_2170,(void*)0,&l_2170,&l_2170,(void*)0,&l_2170}},{{&l_2170,(void*)0,&l_2170,&l_2170,(void*)0,&l_2170},{&l_2170,(void*)0,&l_2170,&l_2170,(void*)0,&l_2170},{&l_2170,(void*)0,&l_2170,&l_2170,(void*)0,&l_2170}}};
            int i, j, k;
            (*g_2034) ^= (((*g_233) , (safe_rshift_func_uint8_t_u_s((p_9++), 1))) <= ((*g_1413) > (((((l_2168 != ((void*)0 != l_2169[0][2][5])) <= (g_2027 , (p_7 == 0xE482B4872BF7BAFELL))) && 0xFD2789E1L) > g_2) | (-2L))));
        }
        l_2174 &= (safe_add_func_uint64_t_u_u(0x864FAC7E533C7870LL, (&g_1541 == l_2173)));
    }
    (*l_2175) = &l_1838;
    return (*g_1037);
}



static int16_t  func_13(const int16_t  p_14, const uint16_t  p_15, int16_t  p_16, union U3  p_17)
{ 
    int32_t l_1591 = (-1L);
    int32_t l_1592 = 2L;
    uint16_t l_1594 = 0x0FABL;
    uint32_t l_1618[6][5][7] = {{{0x43BA12BCL,4294967295UL,0x43BA12BCL,0x64E8F463L,4294967295UL,0xD8B3E12AL,3UL},{0x33BD207DL,4294967293UL,4294967295UL,0x98BFB95FL,0xD1C722FBL,0x7165BA39L,0x47787FDEL},{0x9E84DECEL,0UL,0x07C5B4D1L,0x504D9BB5L,0x9A700070L,0xD8B3E12AL,4294967295UL},{0x5CECE050L,4UL,4294967295UL,0xE98BFBD0L,0x03D09F1EL,0x980AB91CL,0x4C9D9ACCL},{0x88278C5BL,0x19C6BF6AL,4294967289UL,0x03D09F1EL,0x3FCA1BEFL,0UL,0x19C6BF6AL}},{{0x43BA12BCL,0x47787FDEL,0xD8B3E12AL,0UL,4294967295UL,4294967288UL,0x39175716L},{0x4A5728A9L,0x47787FDEL,0x7845690DL,0x81B4D260L,0xD1C722FBL,0UL,0x9A700070L},{0x74DE6B9CL,0x19C6BF6AL,0x33BD207DL,0x7CE4F555L,1UL,0x7CE4F555L,0x33BD207DL},{4UL,4UL,0x7165BA39L,0x7845690DL,0x19C6BF6AL,0x4C9D9ACCL,0UL},{0UL,0UL,0xE98BFBD0L,0x7165BA39L,4UL,0UL,4294967295UL}},{{0xD8B3E12AL,4294967293UL,1UL,4294967295UL,0x19C6BF6AL,0x736D4A27L,1UL},{0x03D09F1EL,4294967295UL,0x7845690DL,0x98BFB95FL,1UL,0x4A5728A9L,3UL},{1UL,0x7165BA39L,0x4A5728A9L,4294967288UL,0xD1C722FBL,0x9E84DECEL,0x33BD207DL},{0x5CECE050L,4UL,0x07C5B4D1L,4294967295UL,4294967295UL,4294967295UL,4UL},{0x5CECE050L,4294967295UL,0x06C3BB14L,0x7165BA39L,0x3FCA1BEFL,0x980AB91CL,0x64E8F463L}},{{1UL,0x7D467BE4L,0x74DE6B9CL,0x03D09F1EL,0x03D09F1EL,0x74DE6B9CL,0x7D467BE4L},{0x03D09F1EL,0x47787FDEL,4294967295UL,0xCB3835A3L,0x9A700070L,0x64E8F463L,0x39175716L},{0xD8B3E12AL,0x33BD207DL,0x03D09F1EL,1UL,0xD1C722FBL,0x7CE4F555L,4294967295UL},{0UL,0x980AB91CL,0x33BD207DL,0xCB3835A3L,4294967295UL,4UL,0x88278C5BL},{4UL,4294967295UL,0xE98BFBD0L,0x03D09F1EL,0x980AB91CL,0x4C9D9ACCL,0x07C5B4D1L}},{{0x74DE6B9CL,4UL,0x9E84DECEL,0x7165BA39L,0UL,0x74DE6B9CL,1UL},{0x4A5728A9L,4294967293UL,0x81B4D260L,4294967295UL,0x7D467BE4L,0xD8B3E12AL,0x980AB91CL},{0xCB3835A3L,0x504D9BB5L,0x7CE4F555L,0x81B4D260L,0x980AB91CL,4294967289UL,0x43BA12BCL},{0x5ECEF9CBL,4294967295UL,0x74DE6B9CL,0x47787FDEL,0x74DE6B9CL,4294967295UL,0x5ECEF9CBL},{4294967295UL,0x9E84DECEL,4294967291UL,0x736D4A27L,0x64E8F463L,0x07C5B4D1L,4294967288UL}},{{0x06C3BB14L,0x4C9D9ACCL,0x98BFB95FL,0x33D8A32FL,0x7CE4F555L,4294967295UL,0x88278C5BL},{0xF35810B0L,4294967295UL,4294967291UL,4UL,4UL,0x43BA12BCL,4294967295UL},{0xCB3835A3L,0xF35810B0L,0x74DE6B9CL,0xE98BFBD0L,0x4C9D9ACCL,0x81B4D260L,1UL},{0x07C5B4D1L,0x5ECEF9CBL,0x7CE4F555L,4294967295UL,0x74DE6B9CL,0x7165BA39L,0x64E8F463L},{0x03D09F1EL,0xD8B3E12AL,4294967295UL,0x9E84DECEL,0x19C6BF6AL,0x7165BA39L,0xF35810B0L}}};
    struct S1 * const l_1633 = &g_59;
    int32_t l_1673 = 1L;
    uint64_t l_1734 = 18446744073709551613UL;
    int64_t *l_1776 = &g_926;
    struct S2 *l_1789 = &g_96;
    struct S2 **l_1788 = &l_1789;
    struct S2 ***l_1787[5][7] = {{&l_1788,&l_1788,&l_1788,&l_1788,&l_1788,&l_1788,&l_1788},{&l_1788,&l_1788,(void*)0,(void*)0,&l_1788,&l_1788,&l_1788},{&l_1788,&l_1788,&l_1788,&l_1788,&l_1788,&l_1788,&l_1788},{&l_1788,&l_1788,&l_1788,(void*)0,&l_1788,&l_1788,&l_1788},{&l_1788,&l_1788,(void*)0,&l_1788,&l_1788,&l_1788,&l_1788}};
    struct S2 **** const l_1786 = &l_1787[4][5];
    int i, j, k;
    l_1592 |= l_1591;
    if ((~((0UL && (l_1592 > l_1592)) >= l_1594)))
    { 
        uint8_t l_1603[5][4][7] = {{{253UL,0UL,255UL,1UL,0x9EL,0x14L,6UL},{0x20L,255UL,0UL,0xE8L,0UL,0xE1L,0UL},{0x14L,0x9EL,0x9EL,0x14L,253UL,0xE1L,2UL},{0xE8L,0UL,255UL,0x20L,0x14L,0x14L,255UL}},{{1UL,255UL,0UL,253UL,255UL,0UL,2UL},{255UL,0x33L,255UL,255UL,0x33L,255UL,0UL},{255UL,1UL,0x14L,255UL,3UL,0x18L,6UL},{1UL,2UL,6UL,0x9EL,0xE8L,0xF9L,3UL}},{{0xE8L,1UL,253UL,0UL,0UL,253UL,1UL},{0x14L,0x33L,253UL,0xF9L,249UL,0UL,0x14L},{0x20L,255UL,6UL,0UL,0xE1L,255UL,0x9EL},{253UL,0UL,0x14L,0xF9L,6UL,6UL,0xF9L}},{{255UL,0x9EL,255UL,0UL,6UL,0xE8L,0x14L},{255UL,255UL,0UL,0x9EL,0xE1L,0x33L,0x18L},{4UL,255UL,255UL,0xE8L,0xE1L,1UL,1UL},{0UL,249UL,4UL,249UL,0UL,0x33L,1UL}},{{255UL,6UL,0x14L,0x9EL,1UL,255UL,0UL},{0x14L,0x33L,0xE8L,3UL,0x14L,0UL,0x18L},{255UL,0x9EL,2UL,0x18L,2UL,0x9EL,255UL},{0UL,0x9EL,0UL,1UL,249UL,255UL,4UL}}};
        struct S1 *l_1632 = &g_59;
        int32_t *l_1636 = &g_2;
        int32_t *l_1637 = &g_50[0];
        uint8_t *l_1668[4] = {&g_422[0][1],&g_422[0][1],&g_422[0][1],&g_422[0][1]};
        uint8_t **l_1667 = &l_1668[2];
        uint8_t ***l_1666[2][4] = {{&l_1667,&l_1667,&l_1667,&l_1667},{&l_1667,&l_1667,&l_1667,&l_1667}};
        int32_t l_1675 = (-1L);
        int32_t *l_1677[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1677[i] = &l_1591;
        if (l_1591)
        { 
            int64_t l_1605 = 0xDC2CB065082839CDLL;
            const uint32_t l_1634 = 0xDC168E99L;
            uint64_t *l_1640 = (void*)0;
            struct S1 l_1660 = {0xCFL,0xEFD37DBAL,0xF4C3EAE7L};
            if (l_1591)
            { 
                int16_t l_1604 = 1L;
                int32_t l_1606 = 0L;
                int32_t *l_1607 = &g_50[0];
                uint16_t *l_1614[3];
                int8_t *l_1615[3][4] = {{&g_1157.f2,&g_1157.f2,&g_1157.f2,&g_1157.f2},{&g_1157.f2,&g_1157.f2,&g_1157.f2,&g_1157.f2},{&g_1157.f2,&g_1157.f2,&g_1157.f2,&g_1157.f2}};
                int16_t *l_1625 = &g_135[1];
                int16_t **l_1624[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int16_t ***l_1623 = &l_1624[0];
                uint8_t *l_1635 = &l_1603[0][2][3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1614[i] = &g_453.f3.f1;
                (*l_1607) |= (safe_div_func_int32_t_s_s((p_16 | (l_1606 = ((0x05D3E574L != ((*g_1037) , p_17.f0)) , ((safe_div_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int32_t_s_s((l_1603[3][0][4] && (&g_818 != (void*)0)), l_1603[3][0][4])) >= p_17.f0) , 0UL), 12)) | 0x00BBCBF3L) || l_1604) ^ l_1603[3][0][4]), 0x51L)) & l_1605)))), 2UL));
                if ((((safe_lshift_func_uint8_t_u_u(((*l_1607) != l_1594), 6)) , (safe_unary_minus_func_uint64_t_u(p_15))) == (l_1594 , ((l_1605 && (safe_lshift_func_int8_t_s_s(l_1594, 5))) , (((((g_59.f0 = (((+((g_96.f1 ^= (p_17.f3.f1 = ((*g_233) != p_14))) >= 1L)) , (*l_1607)) && l_1603[3][0][4])) >= p_16) & p_15) && 9UL) != 7L)))))
                { 
                    uint32_t l_1616 = 0x0B531676L;
                    l_1592 = l_1616;
                    (*g_1504) = (*g_562);
                }
                else
                { 
                    int64_t l_1617[1][2][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1617[i][j][k] = (-6L);
                        }
                    }
                    return l_1617[0][1][0];
                }
                l_1637 = func_30(l_1636, g_11.f2, (*g_233), l_1594, l_1605);
                for (g_261 = 0; (g_261 < 18); g_261++)
                { 
                    int8_t l_1654 = 0x60L;
                    int32_t l_1655 = 0xC0892649L;
                    int32_t l_1656 = 1L;
                    (*l_1607) = ((l_1640 != (void*)0) >= (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((0xC0C1288D011A184FLL | (((safe_sub_func_int16_t_s_s((((((((*g_322) = (g_59 , (void*)0)) != ((((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((!(l_1655 = (safe_add_func_uint16_t_u_u((l_1654 = g_1157.f0), p_17.f0)))), l_1656)), p_14)) >= l_1618[0][0][1]) == (*l_1636)) , (*g_617))) , l_1636) != &g_302[3][0]) & l_1592) , (-1L)), 7UL)) > g_66) || l_1656)), 6)), 1)));
                }
                for (p_17.f3.f0 = 0; (p_17.f3.f0 > 59); ++p_17.f3.f0)
                { 
                    uint8_t ****l_1665[6][4][1] = {{{(void*)0},{(void*)0},{&g_793},{(void*)0}},{{(void*)0},{&g_793},{(void*)0},{(void*)0}},{{&g_793},{(void*)0},{(void*)0},{&g_793}},{{(void*)0},{(void*)0},{&g_793},{(void*)0}},{{(void*)0},{&g_793},{(void*)0},{(void*)0}},{{&g_793},{(void*)0},{(void*)0},{&g_793}}};
                    int32_t l_1672[1][6];
                    int32_t *l_1674[4][1] = {{&g_1232[0]},{&l_1606},{&g_1232[0]},{&l_1606}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_1672[i][j] = (-6L);
                    }
                    l_1675 ^= (safe_unary_minus_func_int16_t_s(((((((((*g_1037) , l_1660) , ((*l_1607) < 4L)) && (!((*l_1607) != (((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_uint8_t_u(((l_1666[0][3] = g_793) == (g_1669 = g_793)))) > l_1672[0][2]), l_1672[0][2])) || 0x88L) , l_1592)))) , 65535UL) >= p_16) != p_16) || l_1673)));
                    (*l_1607) ^= 2L;
                }
            }
            else
            { 
                return p_16;
            }
        }
        else
        { 
            int32_t **l_1676 = &l_1637;
            (*l_1676) = ((**g_1201) = (void*)0);
        }
        l_1591 &= p_15;
    }
    else
    { 
        struct S2 l_1680 = {0x9824FC0CL,4UL,249UL};
        int32_t l_1683 = 0x626BEC8EL;
        const int16_t **l_1708 = &g_820[0];
        struct S0 l_1726 = {0x70C00E7BL,4UL,0L,0x0156L};
        int64_t l_1733[3][5] = {{0xDE064E2B61CFDC4ELL,0x880FB2656718AA05LL,0x4814522ACCA6EE38LL,(-1L),0x4814522ACCA6EE38LL},{0x4814522ACCA6EE38LL,0x4814522ACCA6EE38LL,1L,(-1L),(-3L)},{0x880FB2656718AA05LL,0xDE064E2B61CFDC4ELL,0xDE064E2B61CFDC4ELL,0x880FB2656718AA05LL,0x4814522ACCA6EE38LL}};
        int32_t l_1767[5][1];
        struct S2 *l_1785 = &g_96;
        struct S2 * const *l_1784 = &l_1785;
        struct S2 * const **l_1783 = &l_1784;
        struct S2 * const ***l_1782[5][1][2];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_1767[i][j] = 2L;
        }
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1782[i][j][k] = &l_1783;
            }
        }
        for (g_1450 = 0; (g_1450 > 10); g_1450++)
        { 
            int32_t l_1706 = 0x7FF532F8L;
            const struct S2 l_1707 = {0xFCCCDE53L,1UL,0x96L};
            uint64_t ***l_1729[6];
            uint64_t ****l_1728 = &l_1729[5];
            uint64_t *****l_1727 = &l_1728;
            int32_t l_1736[6][5][1] = {{{0xBCF20372L},{0xDD3E8C19L},{0xBCF20372L},{0xBCF20372L},{0xDD3E8C19L}},{{0xBCF20372L},{0xBCF20372L},{0xDD3E8C19L},{0xBCF20372L},{0xBCF20372L}},{{0xDD3E8C19L},{0xBCF20372L},{0xBCF20372L},{0xDD3E8C19L},{0xBCF20372L}},{{0xBCF20372L},{0xDD3E8C19L},{0xBCF20372L},{0xBCF20372L},{0xDD3E8C19L}},{{0xBCF20372L},{0xBCF20372L},{0xDD3E8C19L},{0xBCF20372L},{0xBCF20372L}},{{0xDD3E8C19L},{0xBCF20372L},{0xBCF20372L},{0xDD3E8C19L},{0xBCF20372L}}};
            uint32_t l_1768 = 0UL;
            struct S0 *l_1774 = &g_1157;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1729[i] = (void*)0;
            for (g_66 = 1; (g_66 <= 5); g_66 += 1)
            { 
                uint8_t l_1682 = 0xCBL;
                int32_t l_1699 = 0x0ED8363FL;
                int32_t l_1760 = (-1L);
                int32_t l_1764 = 0x1D18948EL;
                int32_t l_1766 = 5L;
                for (g_60 = 0; (g_60 <= 5); g_60 += 1)
                { 
                    int32_t *l_1681 = &g_2;
                    uint8_t *l_1697[2];
                    int32_t l_1698 = (-2L);
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1697[i] = &g_422[1][1];
                    (***g_1200) = (l_1680 , l_1681);
                    l_1683 = l_1682;
                    l_1699 &= (((~(safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((65527UL && ((g_96.f2 |= ((safe_mul_func_uint8_t_u_u(p_16, (*g_233))) && (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(l_1592, 7)) >= (0x1F6CB5B949B62F37LL <= ((1L >= ((g_1696 = ((!18446744073709551615UL) || g_59.f1)) , 4294967290UL)) || 0xEF8D9C6FF944C4B9LL))), 15)))) | 250UL)), l_1698)), 0x2B044D34L))) & p_17.f2) , 2L);
                }
                if ((safe_lshift_func_int8_t_s_s(((***g_1669) == ((((l_1683 = 0x5E5DAFE5B444E175LL) > l_1618[1][3][4]) <= (safe_sub_func_int32_t_s_s(p_15, (safe_mod_func_uint8_t_u_u(l_1706, (l_1707 , l_1680.f1)))))) <= 9L)), 3)))
                { 
                    const int16_t **l_1709 = &g_820[0];
                    int16_t *l_1711 = &g_1450;
                    int16_t **l_1710[5];
                    int16_t ***l_1712 = &l_1710[2];
                    uint64_t *** const *l_1725 = &g_288;
                    uint64_t *** const **l_1724 = &l_1725;
                    const uint8_t ***l_1732 = &g_1412[1];
                    const int32_t l_1735[1][4] = {{0L,0L,0L,0L}};
                    int32_t *l_1737 = &g_47;
                    int32_t *l_1738 = &l_1699;
                    int32_t *l_1739 = (void*)0;
                    int32_t *l_1740 = &g_1232[1];
                    int32_t *l_1741 = &g_138;
                    int32_t *l_1742 = &g_41;
                    int32_t *l_1743 = (void*)0;
                    int32_t *l_1744 = (void*)0;
                    int32_t *l_1745 = &l_1683;
                    int32_t *l_1746 = (void*)0;
                    int32_t *l_1747 = &g_138;
                    int32_t *l_1748 = &g_1232[2];
                    int32_t *l_1749 = &l_1683;
                    int32_t *l_1750 = &l_1683;
                    int32_t *l_1751 = &l_1736[5][3][0];
                    int32_t *l_1752 = &g_99;
                    int32_t *l_1753 = &g_47;
                    int32_t *l_1754 = &l_1699;
                    int32_t *l_1755 = (void*)0;
                    int32_t *l_1756 = &g_99;
                    int32_t *l_1757 = &l_1706;
                    int32_t *l_1758 = &g_50[0];
                    int32_t *l_1759 = &l_1699;
                    int32_t *l_1761 = &l_1706;
                    int32_t *l_1762 = &g_1232[1];
                    int32_t *l_1763 = (void*)0;
                    int32_t *l_1765[4][2] = {{&l_1699,&l_1699},{&l_1699,&l_1699},{&l_1699,&l_1699},{&l_1699,&l_1699}};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1710[i] = &l_1711;
                    l_1683 = ((l_1709 = l_1708) != ((*l_1712) = l_1710[1]));
                    l_1736[4][1][0] ^= (safe_rshift_func_uint16_t_u_s((((safe_div_func_int16_t_s_s((-1L), (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((((*g_1037) , l_1724) == (l_1726 , l_1727)) & (safe_div_func_int32_t_s_s(((((void*)0 != l_1732) , l_1733[0][1]) , l_1734), (**g_617)))) ^ 0L), l_1706)), 7L)))), 0UL)))) >= (**g_322)) <= 1UL), l_1735[0][3]));
                    if (l_1735[0][3])
                        continue;
                    l_1768--;
                }
                else
                { 
                    struct S0 **l_1773 = &g_1037;
                    int32_t l_1775 = 2L;
                    l_1775 &= (1UL > (p_16 <= (((*l_1773) = &g_1038) == l_1774)));
                }
                if (p_17.f2)
                    break;
                (*g_1504) = &l_1706;
            }
            return p_17.f2;
        }
        l_1673 &= (((l_1776 != ((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((safe_add_func_int32_t_s_s(l_1726.f1, p_14)))), ((l_1782[3][0][1] == l_1786) , (safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u(1UL, 0x8F9C4C0AL)), p_17.f0))))) , (void*)0)) || (**g_322)) & (**g_322));
    }
    return p_17.f0;
}



static int64_t  func_22(struct S0  p_23, const uint32_t  p_24, struct S1  p_25, struct S0  p_26)
{ 
    uint32_t **l_620 = &g_323;
    const int32_t *l_622 = &g_50[0];
    int32_t l_630 = 0x0B4C4520L;
    int32_t l_631 = 0x6FE22DEDL;
    int32_t l_632 = (-10L);
    int32_t l_633 = 1L;
    int32_t l_634 = 4L;
    int32_t l_635[5] = {0xED48C9EAL,0xED48C9EAL,0xED48C9EAL,0xED48C9EAL,0xED48C9EAL};
    uint8_t l_637 = 249UL;
    int8_t ** const l_640 = &g_233;
    union U3 l_672 = {0L};
    uint8_t *l_692 = (void*)0;
    uint8_t * const *l_691 = &l_692;
    uint32_t l_739 = 0xE9000739L;
    int32_t *l_757 = (void*)0;
    int32_t *l_758 = &l_631;
    int32_t *l_759 = &g_99;
    int32_t *l_760 = (void*)0;
    int32_t *l_761 = &l_632;
    int32_t *l_762 = (void*)0;
    int32_t *l_763 = (void*)0;
    int32_t *l_764 = &l_634;
    int32_t *l_765 = &l_635[3];
    int32_t *l_766 = &l_633;
    int32_t *l_767 = &l_631;
    int32_t *l_768[1][5][5] = {{{&l_632,&l_632,&l_632,&l_632,&l_632},{&l_635[3],&l_635[3],&l_635[3],&l_635[3],&l_635[3]},{&l_632,&l_632,&l_632,&l_632,&l_632},{&l_635[3],&l_635[3],&l_635[3],&l_635[3],&l_635[3]},{&l_632,&l_632,&l_632,&l_632,&l_632}}};
    int8_t l_769 = 0x6EL;
    int16_t l_770 = (-4L);
    int8_t l_771 = 0x43L;
    uint8_t l_772 = 0x00L;
    uint32_t l_775 = 0x64680805L;
    const int32_t l_782 = 0xD9C729F7L;
    int16_t l_785 = 0x64DFL;
    struct S2 l_792 = {0x03710C93L,0xF53FL,0x81L};
    uint16_t l_799 = 0UL;
    int16_t *l_816 = &g_135[2];
    int16_t **l_815 = &l_816;
    int16_t ***l_814 = &l_815;
    const uint64_t l_837[4] = {0xCD32675630F562D6LL,0xCD32675630F562D6LL,0xCD32675630F562D6LL,0xCD32675630F562D6LL};
    struct S2 *l_870 = &l_792;
    struct S2 **l_869 = &l_870;
    int8_t l_886[6];
    int8_t l_895 = (-1L);
    int32_t l_941 = 0x4A8FA33EL;
    int8_t l_1064 = 0xD2L;
    uint64_t ***l_1065 = &g_289;
    uint64_t l_1110 = 18446744073709551615UL;
    uint16_t l_1125 = 65527UL;
    uint8_t l_1210 = 255UL;
    struct S0 l_1238 = {0x5BBCF935L,0x38D2BBF0L,0x12L,0UL};
    uint32_t **l_1254 = (void*)0;
    uint32_t l_1258 = 0x0CBE3628L;
    uint32_t l_1272 = 0x0705466DL;
    int32_t *l_1309[6][2];
    int32_t l_1317 = 1L;
    uint32_t l_1452 = 0xF65DC141L;
    int8_t ***l_1459 = &g_678;
    int8_t ****l_1458 = &l_1459;
    uint64_t l_1461[6][2][6] = {{{0xD65171016BA4E3A4LL,0xD65171016BA4E3A4LL,18446744073709551611UL,0x44D2B54952E60862LL,0x8D675708AD546619LL,18446744073709551615UL},{0xF8D30FBF210A467DLL,1UL,0xC8B61FC5093FFB81LL,0x45F357A02AFF890ALL,0x89C7821CC848A8B0LL,18446744073709551611UL}},{{0xD6FDFAC260AD1074LL,0xF8D30FBF210A467DLL,0xC8B61FC5093FFB81LL,18446744073709551615UL,0xD65171016BA4E3A4LL,18446744073709551615UL},{18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,0xD9C6A0AA4231ECAALL,0x99827EAF4FF69DE0LL,0x4A219658E4D0AD8ELL}},{{0xD9C6A0AA4231ECAALL,0x99827EAF4FF69DE0LL,0x4A219658E4D0AD8ELL,0x89C7821CC848A8B0LL,5UL,0x8D675708AD546619LL},{0x44D2B54952E60862LL,0x4A219658E4D0AD8ELL,0xA995E8FAF7C148C9LL,0x89C7821CC848A8B0LL,0xD9C6A0AA4231ECAALL,0xD9C6A0AA4231ECAALL}},{{0xD9C6A0AA4231ECAALL,18446744073709551612UL,18446744073709551612UL,0xD9C6A0AA4231ECAALL,0xF8D30FBF210A467DLL,1UL},{18446744073709551611UL,0x44D2B54952E60862LL,0x8D675708AD546619LL,18446744073709551615UL,0xA995E8FAF7C148C9LL,0xC8B61FC5093FFB81LL}},{{0xD6FDFAC260AD1074LL,0x89C7821CC848A8B0LL,0xD65171016BA4E3A4LL,0x45F357A02AFF890ALL,0xA995E8FAF7C148C9LL,0x99827EAF4FF69DE0LL},{0xF8D30FBF210A467DLL,0x44D2B54952E60862LL,0xD9C6A0AA4231ECAALL,0x44D2B54952E60862LL,0xF8D30FBF210A467DLL,0x45F357A02AFF890ALL}},{{0xD65171016BA4E3A4LL,18446744073709551612UL,0x246378C2E026C6D5LL,1UL,0xD9C6A0AA4231ECAALL,0xD6FDFAC260AD1074LL},{0x246378C2E026C6D5LL,0x4A219658E4D0AD8ELL,0xF8D30FBF210A467DLL,18446744073709551612UL,5UL,0xD6FDFAC260AD1074LL}}};
    struct S1 l_1464 = {0xE3L,1L,0UL};
    const uint64_t *****l_1508 = (void*)0;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_886[i] = 1L;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_1309[i][j] = &l_941;
    }
    for (g_59.f0 = 0; (g_59.f0 <= 3); g_59.f0 += 1)
    { 
        uint32_t ***l_621 = &l_620;
        int32_t l_636 = 0x0A349E7BL;
        uint64_t l_662 = 0x2E0C5CF1A3842323LL;
        struct S2 * const l_663 = &g_96;
        int32_t l_680[5];
        uint32_t l_684 = 0xCDBC1E89L;
        union U3 *l_690 = &l_672;
        union U3 **l_689 = &l_690;
        int32_t *l_719 = &l_680[4];
        int32_t *l_720 = &g_50[0];
        int32_t *l_721 = &g_50[0];
        int32_t *l_722 = &g_138;
        int32_t *l_723 = (void*)0;
        int32_t *l_724 = (void*)0;
        int32_t *l_725 = &l_635[3];
        int32_t *l_726 = &g_138;
        int32_t *l_727 = &g_99;
        int32_t *l_728 = &g_50[0];
        int32_t *l_729 = &l_634;
        int32_t *l_730 = &l_632;
        int32_t *l_731 = (void*)0;
        int32_t *l_732 = &l_633;
        int32_t *l_733 = (void*)0;
        int32_t *l_734 = &g_41;
        int32_t *l_735 = &g_50[0];
        int32_t *l_736 = &l_631;
        int32_t *l_737 = &l_634;
        int32_t *l_738[1][4][5] = {{{(void*)0,&g_50[0],&g_138,&g_50[0],(void*)0},{&g_41,&g_50[0],&g_47,(void*)0,&g_47},{&g_47,&g_47,&g_138,(void*)0,&l_636},{&g_50[0],&g_41,&g_41,&g_50[0],&g_47}}};
        struct S1 l_752 = {0xB4L,5L,4UL};
        uint64_t ***l_753 = &g_289;
        uint16_t *l_754 = &l_672.f3.f1;
        uint16_t *l_755[6][5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_680[i] = 0x1AF440F9L;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 5; j++)
                l_755[i][j] = &g_756;
        }
    }
    ++l_772;
    --l_775;
    return g_1232[2];
}



static struct S0  func_27(int16_t  p_28)
{ 
    int16_t l_38 = 0x0EA1L;
    uint8_t *l_421 = &g_422[0][1];
    int32_t l_423 = (-1L);
    int64_t *l_424 = (void*)0;
    int64_t *l_425 = &g_426;
    int32_t **l_581 = &g_563[4];
    uint16_t *l_584 = &g_96.f1;
    int32_t *l_587 = &g_41;
    int16_t l_588 = 0x25D5L;
    int32_t l_597 = 0x6387F6CFL;
    int32_t l_598[2];
    uint64_t *l_599 = &g_380[6][3];
    int32_t *l_600 = &g_50[0];
    int32_t *l_601[5] = {&g_47,&g_47,&g_47,&g_47,&g_47};
    uint64_t l_602 = 0xF2BBF0C9A7B17574LL;
    uint32_t l_605 = 0xF4E3ED46L;
    const struct S2 ****l_609 = &g_606;
    struct S2 *l_612[2];
    struct S2 **l_611 = &l_612[0];
    struct S2 ***l_610 = &l_611;
    struct S0 l_613[2][4] = {{{0xFBC4C03BL,0UL,0xCAL,0x184DL},{0x42F542A8L,18446744073709551608UL,0L,65532UL},{0xFBC4C03BL,0UL,0xCAL,0x184DL},{0x42F542A8L,18446744073709551608UL,0L,65532UL}},{{0xFBC4C03BL,0UL,0xCAL,0x184DL},{0x42F542A8L,18446744073709551608UL,0L,65532UL},{0xFBC4C03BL,0UL,0xCAL,0x184DL},{0x42F542A8L,18446744073709551608UL,0L,65532UL}}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_598[i] = 0x08394E19L;
    for (i = 0; i < 2; i++)
        l_612[i] = &g_96;
    (*l_581) = func_30(func_36(l_38), g_11.f3, p_28, (safe_sub_func_uint8_t_u_u(g_380[4][1], ((safe_mod_func_uint8_t_u_u((((*l_425) = (safe_add_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((p_28 > (((((*l_421) = (0xB6F22AA5L <= l_38)) | l_423) , 0x06L) >= p_28)), l_38)) <= l_38), l_423))) , 0x2EL), l_38)) != p_28))), l_423);
    l_602 ^= ((*l_600) = ((*g_290) > (((*l_587) |= (safe_mul_func_uint16_t_u_u((--(*l_584)), g_135[2]))) > (l_588 || (safe_sub_func_uint8_t_u_u((g_135[3] ^ p_28), (safe_sub_func_uint64_t_u_u((((((-3L) == ((*l_599) = (safe_sub_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((*g_290), l_597)) , 0x5DL), l_598[1])))) >= g_135[2]) <= p_28) && p_28), 2UL))))))));
    for (g_453.f1 = 0; (g_453.f1 <= 14); g_453.f1 = safe_add_func_int16_t_s_s(g_453.f1, 3))
    { 
        (*l_600) ^= p_28;
        return g_11;
    }
    l_605 = (*l_600);
    (*l_587) = (((*l_609) = g_606) != (g_59 , l_610));
    return l_613[0][2];
}



static int32_t * func_30(int32_t * p_31, int64_t  p_32, int8_t  p_33, int32_t  p_34, const uint64_t  p_35)
{ 
    int32_t *l_433[1][4][3];
    int32_t *l_434 = &g_41;
    union U3 *l_452[7];
    int16_t *l_547 = &g_135[2];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
                l_433[i][j][k] = &g_50[0];
        }
    }
    for (i = 0; i < 7; i++)
        l_452[i] = &g_453;
    for (g_261 = (-10); (g_261 != 32); ++g_261)
    { 
        uint32_t l_435 = 0x31A3DCA2L;
        int64_t l_439[4][6] = {{4L,7L,4L,7L,4L,7L},{4L,7L,4L,7L,4L,7L},{4L,7L,4L,7L,4L,7L},{4L,7L,4L,7L,4L,7L}};
        uint32_t *l_448 = (void*)0;
        uint32_t *l_449 = &g_450;
        int16_t l_451[5][3][6] = {{{3L,(-1L),0x36EFL,0x9BD3L,0xC44FL,0xD50EL},{0xEF1AL,6L,0L,0x600EL,0L,6L},{0x36EFL,0x3D27L,0xF0E6L,(-1L),(-1L),0xE7F8L}},{{0x3D27L,0x0981L,0x9CD9L,0xD50EL,0x1F22L,0xC4B1L},{0xE467L,0x0981L,0L,7L,(-1L),(-5L)},{0xE7F8L,0x3D27L,(-1L),0x3DA0L,0L,6L}},{{0x9420L,6L,0x70A2L,0x36EFL,0xC44FL,0xAD83L},{0xAD83L,(-1L),(-6L),0xA4D4L,0xD50EL,0xCC49L},{6L,0xCC49L,3L,0x5AB3L,0x5AB3L,3L}},{{(-10L),(-10L),0xA4D4L,0xE467L,0x3D27L,(-1L)},{0L,0xE7F8L,(-9L),0x36EFL,0x76E4L,0x600EL},{(-4L),0L,(-9L),0xF421L,0xCC49L,0x3D27L}},{{0xC44FL,0xF421L,0x600EL,0x9420L,(-1L),0x76E4L},{0x9420L,(-1L),0x76E4L,7L,0L,(-1L)},{0x8817L,0x3DA0L,0xA4D4L,0xE7F8L,0x5AB3L,0xC4B1L}}};
        union U3 **l_454 = &l_452[4];
        int32_t l_493 = 0L;
        int32_t l_498 = (-1L);
        const struct S2 l_510 = {0x539FFBFBL,7UL,255UL};
        int32_t l_515 = (-3L);
        int32_t l_518 = 0xCFB07734L;
        int32_t l_520 = (-1L);
        int32_t l_521 = 0xAB925C6CL;
        int32_t l_522 = (-2L);
        int8_t l_523[1];
        int32_t l_524 = 0L;
        int32_t l_525[7] = {0x905ACEABL,0x02EFAD09L,0x905ACEABL,0x905ACEABL,0x02EFAD09L,0x905ACEABL,0x905ACEABL};
        uint32_t l_527 = 0xA49C146AL;
        const int16_t *l_531 = &l_451[0][1][2];
        const int16_t * const *l_530 = &l_531;
        int32_t l_575[7][6][3] = {{{0x5B107947L,0xEC0B6B4CL,0xEC0B6B4CL},{(-4L),0x2AC250F4L,0xF6D7396FL},{(-1L),0xC7EBA640L,0L},{0L,(-1L),0x29F5CE19L},{0L,(-3L),(-6L)},{(-3L),(-1L),0x2510B996L}},{{0xBA9D0716L,0xC7EBA640L,0x5B107947L},{0x2AC250F4L,0x2AC250F4L,(-1L)},{(-6L),0xEC0B6B4CL,0x7B1BE756L},{(-2L),5L,0x908C8E75L},{0x7B1BE756L,0xEAE89E46L,0xBA9D0716L},{0xA97EC07BL,(-2L),0x908C8E75L}},{{0xCC8C87F5L,(-1L),0x7B1BE756L},{(-1L),0xC20D1B0DL,(-1L)},{0x87E581DFL,(-3L),0x5B107947L},{0L,(-1L),0x2510B996L},{(-3L),0xBA9D0716L,(-6L)},{0x7A909276L,0x2510B996L,0x29F5CE19L}},{{(-3L),0x4E3C8FFCL,0L},{0L,0xF6D7396FL,0xF6D7396FL},{0x87E581DFL,(-6L),0xEC0B6B4CL},{(-1L),0x7A909276L,0L},{0xCC8C87F5L,(-1L),0x1D9C8695L},{0xA97EC07BL,0x469E99D2L,0x2AC250F4L}},{{0x7B1BE756L,(-1L),0xEAE89E46L},{(-2L),0x7A909276L,0L},{(-6L),(-6L),(-1L)},{0x2AC250F4L,0xF6D7396FL,(-3L)},{0xBA9D0716L,0x4E3C8FFCL,0xC79E4853L},{(-3L),0x2510B996L,(-2L)}},{{0L,0xBA9D0716L,0xC79E4853L},{0L,(-1L),(-3L)},{(-1L),(-3L),(-1L)},{(-4L),0xC20D1B0DL,0L},{0x5B107947L,(-1L),0xEAE89E46L},{0xC20D1B0DL,(-2L),0x2AC250F4L}},{{0xC7EBA640L,0xEAE89E46L,0x1D9C8695L},{0xC20D1B0DL,5L,0L},{0x5B107947L,0xEC0B6B4CL,0xEC0B6B4CL},{(-4L),0x2AC250F4L,0xF6D7396FL},{(-1L),0xC7EBA640L,0L},{0L,(-1L),0x29F5CE19L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_523[i] = 0xE5L;
        for (g_60 = 19; (g_60 < 21); g_60 = safe_add_func_int16_t_s_s(g_60, 4))
        { 
            int32_t *l_432 = (void*)0;
            int32_t **l_431[3][1][6] = {{{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432}},{{&l_432,&l_432,&l_432,(void*)0,(void*)0,&l_432}},{{(void*)0,(void*)0,&l_432,&l_432,&l_432,&l_432}}};
            int i, j, k;
            l_433[0][2][2] = &p_34;
            return l_434;
        }
        for (g_41 = 0; (g_41 >= 0); g_41 -= 1)
        { 
            for (p_34 = 3; (p_34 >= 0); p_34 -= 1)
            { 
                int i, j, k;
                return l_433[g_41][p_34][(g_41 + 2)];
            }
            for (g_99 = 0; (g_99 >= 0); g_99 -= 1)
            { 
                int i, j, k;
                l_435 = g_59.f2;
            }
        }
        (*l_434) = ((g_426 = (safe_sub_func_int16_t_s_s((!(l_439[2][3] & ((safe_mod_func_int32_t_s_s((p_32 , g_50[0]), (*g_323))) | ((safe_unary_minus_func_int8_t_s((((*l_449) = (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s(0L, p_34)))) & (g_11 , (*g_233))), g_11.f0))) & 0x756B1A0AL))) != l_451[4][2][1])))), p_33))) , 5L);
        (*l_454) = l_452[4];
        for (g_453.f3.f2 = (-12); (g_453.f3.f2 == 27); g_453.f3.f2 = safe_add_func_uint64_t_u_u(g_453.f3.f2, 6))
        { 
            int16_t l_484 = (-8L);
            int32_t l_495 = 0x19124565L;
            int32_t l_497[3];
            uint32_t l_502 = 0x1380FC15L;
            int16_t l_526 = 6L;
            struct S2 *l_553 = &g_96;
            struct S2 **l_552 = &l_553;
            int8_t l_557 = 0x1DL;
            union U3 *l_561 = &g_453;
            int i;
            for (i = 0; i < 3; i++)
                l_497[i] = 0x88D385ECL;
            if (g_135[2])
                break;
            for (g_59.f0 = 12; (g_59.f0 <= 10); --g_59.f0)
            { 
                uint8_t *l_483 = &g_422[0][1];
                int32_t l_490 = (-10L);
                int32_t l_494 = 0xAE55C1E3L;
                int32_t l_496 = 3L;
                int32_t l_499 = 0x3E985698L;
                int32_t l_501[2][3][7] = {{{(-5L),2L,0x33303D4CL,0x6C9AA88BL,0x6C9AA88BL,0x33303D4CL,2L},{0x4D3F1518L,(-3L),(-4L),0x93DCADF4L,0x4D3F1518L,0x93DCADF4L,0x43D13061L},{0L,0x0E41AA05L,0x6C9AA88BL,(-5L),(-5L),0x6C9AA88BL,0x0E41AA05L}},{{0L,0x43D13061L,0x93DCADF4L,0x4D3F1518L,0x4D3F1518L,0x93DCADF4L,0x43D13061L},{0L,0x0E41AA05L,0x6C9AA88BL,(-5L),(-5L),0x6C9AA88BL,0x0E41AA05L},{0L,0x43D13061L,0x93DCADF4L,0x4D3F1518L,0x4D3F1518L,0x93DCADF4L,0x43D13061L}}};
                int i, j, k;
                (*l_434) &= (((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((+((safe_sub_func_uint16_t_u_u((g_96.f1 = ((safe_lshift_func_int8_t_s_s(1L, 5)) >= (safe_lshift_func_int16_t_s_u(((((1UL > ((*l_449) &= (~p_35))) , 0xCFL) && (safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(p_35, ((safe_rshift_func_uint8_t_u_u(((*l_483) = ((safe_div_func_int16_t_s_s(0L, (safe_mul_func_uint16_t_u_u(5UL, p_35)))) | g_66)), 0)) ^ (-4L)))) ^ 0L), 8))) != 1UL), 7)))), (-1L))) < g_2)), 0x546DL)), p_34)), 12)) & p_32) >= l_484);
                for (g_41 = 0; (g_41 >= 26); g_41 = safe_add_func_uint8_t_u_u(g_41, 2))
                { 
                    uint8_t l_487 = 0x85L;
                    if (l_487)
                        break;
                }
                for (g_381 = 17; (g_381 != 17); g_381 = safe_add_func_uint8_t_u_u(g_381, 6))
                { 
                    int16_t l_491 = 0x9DD5L;
                    int32_t l_492 = 0x0AF15DCCL;
                    int16_t l_500 = 0x121DL;
                    l_502++;
                    return &g_2;
                }
            }
            if ((safe_div_func_int64_t_s_s(p_33, p_34)))
            { 
                uint16_t l_507 = 0xB694L;
                int32_t l_512 = 0x35E89D6EL;
                int32_t l_514 = 0x1CDC19C9L;
                int32_t l_517 = 0xF1B8B2D2L;
                int32_t l_519[6][2][5] = {{{(-9L),(-9L),(-9L),(-9L),(-9L)},{3L,3L,3L,3L,3L}},{{(-9L),(-9L),(-9L),(-9L),(-9L)},{3L,3L,3L,3L,3L}},{{(-9L),(-9L),(-9L),(-9L),(-9L)},{3L,3L,3L,3L,3L}},{{(-9L),(-9L),(-9L),(-9L),(-9L)},{3L,3L,3L,3L,3L}},{{(-9L),(-9L),(-9L),(-9L),(-9L)},{3L,3L,3L,3L,3L}},{{(-9L),(-9L),(-9L),(-9L),(-9L)},{3L,3L,3L,3L,3L}}};
                const int16_t * const **l_532 = &l_530;
                int32_t ***l_564[4][3][5] = {{{&g_562,&g_562,(void*)0,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,(void*)0,&g_562,&g_562,&g_562}},{{&g_562,&g_562,(void*)0,&g_562,&g_562},{&g_562,&g_562,(void*)0,&g_562,&g_562},{&g_562,(void*)0,(void*)0,&g_562,&g_562}},{{&g_562,&g_562,(void*)0,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,(void*)0,&g_562,&g_562,&g_562}},{{&g_562,&g_562,(void*)0,&g_562,&g_562},{&g_562,&g_562,&g_562,&g_562,&g_562},{&g_562,(void*)0,&g_562,&g_562,&g_562}}};
                int i, j, k;
                --l_507;
                for (g_41 = 2; (g_41 >= 0); g_41 -= 1)
                { 
                    struct S2 *l_511[2];
                    int32_t l_513 = 0x14A26411L;
                    int32_t l_516[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_511[i] = &g_96;
                    for (i = 0; i < 2; i++)
                        l_516[i] = (-1L);
                    g_96 = l_510;
                    ++l_527;
                }
                if ((((0xCB5FL <= ((((*g_290) , ((*l_532) = l_530)) == (void*)0) || (safe_rshift_func_uint8_t_u_u(0xFBL, 4)))) <= g_60) != (safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((((**g_322) = (safe_lshift_func_uint16_t_u_u((p_34 >= 0xC403D4F7L), 11))) >= (*p_31)), p_33)) >= l_507), 0UL))))
                { 
                    int32_t *l_541[2][3] = {{&g_99,&g_99,&g_99},{&l_493,&l_493,&l_493}};
                    int32_t **l_542 = &l_541[0][2];
                    int i, j;
                    (*l_542) = l_541[1][0];
                    return &g_99;
                }
                else
                { 
                    (*l_434) |= (safe_lshift_func_uint16_t_u_u((0xCFL != (safe_add_func_uint8_t_u_u((g_11.f2 ^ (l_547 != &g_135[1])), (safe_rshift_func_int16_t_s_s(((l_493 > ((l_497[1] == (0x26A5L && l_522)) ^ 0UL)) || 0x1F55BF52L), 6))))), p_33));
                }
                for (l_524 = 0; (l_524 <= 2); l_524 += 1)
                { 
                    struct S2 ***l_554 = &l_552;
                    int16_t l_555 = 0x3F8AL;
                    int32_t l_556[6];
                    uint8_t l_558 = 7UL;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_556[i] = 8L;
                    (*l_434) ^= l_451[l_524][l_524][l_524];
                    (*l_554) = l_552;
                    --l_558;
                    g_50[0] &= (l_561 != l_561);
                    if ((*p_31))
                        continue;
                }
                g_562 = g_562;
            }
            else
            { 
                uint64_t l_565 = 0UL;
                if ((*p_31))
                    break;
                --l_565;
            }
            for (g_381 = 0; (g_381 == 49); g_381 = safe_add_func_int64_t_s_s(g_381, 2))
            { 
                uint16_t l_570 = 0UL;
                int32_t l_576 = (-2L);
                uint16_t l_577 = 0UL;
                --l_570;
                for (l_435 = 0; (l_435 <= 4); l_435 += 1)
                { 
                    uint8_t *l_574 = &g_117;
                    (*l_434) |= (~((*l_574) ^= 0x2AL));
                }
                if (l_570)
                    break;
                ++l_577;
            }
            for (g_138 = 0; (g_138 <= 2); g_138 += 1)
            { 
                int32_t *l_580 = &l_497[1];
                int i;
                for (p_34 = 3; (p_34 >= 0); p_34 -= 1)
                { 
                    return (*g_562);
                }
                if (l_497[g_138])
                    break;
            }
        }
    }
    return (*g_562);
}



static int32_t * func_36(int32_t  p_37)
{ 
    int32_t *l_44 = &g_2;
    int32_t l_116 = 0xD8D86F2FL;
    uint16_t l_166 = 1UL;
    int32_t *l_169 = &g_47;
    uint64_t *l_174 = &g_66;
    const union U3 l_185[7] = {{-6L},{-6L},{-6L},{-6L},{-6L},{-6L},{-6L}};
    struct S1 l_236 = {-1L,5L,0x61BA63EEL};
    int32_t l_254 = 0x6D998AB7L;
    int32_t l_256 = 0xD50EA701L;
    int32_t l_257[6][4] = {{0xE3AF0B7DL,0L,0xE3AF0B7DL,0L},{0xE3AF0B7DL,0L,0xE3AF0B7DL,0L},{0xE3AF0B7DL,0L,0xE3AF0B7DL,0L},{0xE3AF0B7DL,0L,0xE3AF0B7DL,0L},{0xE3AF0B7DL,0L,0xE3AF0B7DL,0L},{0xE3AF0B7DL,0L,0xE3AF0B7DL,0L}};
    int8_t *l_307 = &g_11.f2;
    int16_t *l_320 = &g_135[2];
    uint16_t * const l_351[6] = {&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1};
    const uint8_t l_397 = 249UL;
    uint64_t **l_410 = &g_290;
    uint64_t ** const * const l_411 = &l_410;
    int32_t l_412 = (-1L);
    int i, j;
    for (p_37 = 0; (p_37 <= 21); ++p_37)
    { 
        uint32_t l_64[3];
        uint64_t *l_101 = (void*)0;
        uint64_t **l_100[3][3][2] = {{{&l_101,&l_101},{&l_101,&l_101},{&l_101,&l_101}},{{&l_101,&l_101},{&l_101,&l_101},{&l_101,&l_101}},{{&l_101,&l_101},{&l_101,&l_101},{&l_101,&l_101}}};
        int32_t *l_165[1][6][1] = {{{&g_138},{&g_41},{&g_138},{&g_41},{&g_138},{&g_41}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_64[i] = 3UL;
        for (g_41 = 0; (g_41 == (-19)); --g_41)
        { 
            return l_44;
        }
        for (g_41 = 0; (g_41 >= 3); g_41++)
        { 
            union U3 l_61 = {0L};
            int32_t l_111 = 1L;
            for (g_47 = 0; (g_47 != 2); g_47 = safe_add_func_uint16_t_u_u(g_47, 1))
            { 
                uint8_t l_105 = 0UL;
                uint16_t l_142 = 0xC3AAL;
                int32_t l_145 = 0x29D1050BL;
                int32_t **l_163 = (void*)0;
                int32_t **l_164 = &l_44;
                for (g_50[0] = 0; (g_50[0] != 16); ++g_50[0])
                { 
                    uint64_t *l_65 = &g_66;
                    struct S2 *l_97 = &g_96;
                    int32_t *l_98 = &g_99;
                    uint64_t ***l_102 = &l_100[0][1][1];
                    uint64_t **l_104 = &l_65;
                    uint64_t ***l_103 = &l_104;
                    uint16_t *l_110[1][5][3] = {{{&g_96.f1,&g_96.f1,&g_96.f1},{&g_96.f1,&g_96.f1,&g_96.f1},{&g_96.f1,&g_96.f1,&g_96.f1},{&g_96.f1,&g_96.f1,&g_96.f1},{&g_96.f1,&g_96.f1,&g_96.f1}}};
                    int32_t *l_112 = &l_111;
                    int32_t *l_113 = &l_111;
                    int32_t *l_114 = &g_99;
                    int32_t *l_115[3][1];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_115[i][j] = &l_111;
                    }
                    (*l_98) = (((*l_97) = func_53(&p_37, (g_59 , (g_60 ^= g_11.f0)), l_61, &g_47, ((*l_65) = ((((safe_div_func_int64_t_s_s((l_61.f2 & g_11.f2), l_64[1])) , 0xDBFDL) > 65535UL) < g_50[0])))) , l_61.f2);
                    (*l_103) = ((*l_102) = l_100[1][0][0]);
                    if (l_105)
                        continue;
                    (*l_98) = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(0xF0L, p_37)), (l_111 = (g_59 , (((*l_98) != 1UL) != (*l_44))))));
                    g_117++;
                }
                for (l_61.f3.f1 = 0; (l_61.f3.f1 <= 0); l_61.f3.f1 += 1)
                { 
                    uint16_t *l_122 = &g_96.f1;
                    int32_t **l_133 = &l_44;
                    int16_t *l_134 = &g_135[2];
                    int32_t *l_136 = &g_50[0];
                    int32_t *l_137 = &g_99;
                    int32_t *l_139 = &l_111;
                    int i;
                    (*l_139) = (g_138 |= ((*l_137) &= ((*l_136) = ((((*l_134) = (safe_mul_func_uint16_t_u_u(((*l_122) |= 0x7E04L), ((((((((0L <= l_111) , g_11.f1) , (((safe_mul_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(((*l_44) || ((safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(g_41, (safe_mul_func_int8_t_s_s((((*l_133) = &g_2) != &p_37), g_11.f0)))) || p_37), l_105)) == g_117)), 0x123697E1L)) >= l_61.f0) || l_64[1]), (-7L))) && p_37) & g_60)) & 5L) & p_37) & 4294967295UL) ^ l_116) & p_37)))) >= 65526UL) , g_135[1]))));
                    (*l_137) = (safe_lshift_func_int16_t_s_u(l_142, 15));
                    (*l_136) |= ((((safe_rshift_func_uint16_t_u_u((((-3L) & (l_145 &= p_37)) && g_66), 15)) , ((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_145 = (!p_37)), ((safe_mul_func_int8_t_s_s(((g_96.f1 | p_37) , (safe_lshift_func_int16_t_s_u(((*l_134) = ((safe_lshift_func_int16_t_s_u((p_37 ^ g_96.f2), 4)) , (**l_133))), 13))), p_37)) <= l_111))), g_96.f0)), p_37)), 255UL)), (-1L))) < p_37)) < (*l_137)) && p_37);
                }
                (*l_164) = &g_47;
            }
        }
        return l_165[0][0][0];
    }
    if (l_166)
    { 
        int32_t **l_167 = (void*)0;
        int32_t **l_168[1];
        uint64_t *l_175[6] = {&g_66,&g_66,&g_66,&g_66,&g_66,&g_66};
        int8_t *l_178 = &g_59.f0;
        int i;
        for (i = 0; i < 1; i++)
            l_168[i] = &l_44;
        l_169 = (l_44 = &g_138);
        p_37 |= (safe_div_func_uint16_t_u_u(((void*)0 == &l_169), (safe_add_func_int8_t_s_s(((((*l_178) &= ((((l_174 == (g_96 , l_175[5])) , (safe_lshift_func_uint16_t_u_u(1UL, 4))) & 0x4CF5L) <= 0x356471FAE99D52E2LL)) && g_2) , g_11.f1), g_96.f0))));
    }
    else
    { 
        uint32_t l_179 = 18446744073709551615UL;
        struct S1 l_207[4] = {{0x98L,0L,1UL},{0x98L,0L,1UL},{0x98L,0L,1UL},{0x98L,0L,1UL}};
        struct S0 l_211 = {1UL,0x6CBD5F44L,0x7CL,1UL};
        int32_t l_219 = 0L;
        int8_t *l_235 = &l_207[2].f0;
        int32_t l_251 = 0x8287281CL;
        int32_t l_253 = 0L;
        int32_t l_259 = 0x31088CC2L;
        int32_t l_276[4] = {1L,1L,1L,1L};
        uint32_t **l_324 = &g_323;
        int i;
        (*l_169) ^= ((l_179 < p_37) , l_179);
        for (g_60 = 0; (g_60 <= 0); g_60 += 1)
        { 
            uint64_t *l_182 = &g_66;
            uint64_t **l_183 = &l_182;
            uint16_t *l_201 = &g_96.f1;
            uint16_t *l_204 = &l_166;
            union U3 l_205[2] = {{-1L},{-1L}};
            uint32_t l_206[2][7];
            uint64_t **l_222 = (void*)0;
            int32_t *l_224 = &g_138;
            const int8_t *l_232[6] = {&l_207[2].f0,&l_211.f2,&l_207[2].f0,&l_207[2].f0,&l_211.f2,&l_207[2].f0};
            int32_t l_255 = 0xD8495814L;
            int32_t l_258[5][4];
            int16_t l_301[6][6] = {{1L,0xD314L,1L,1L,0xD314L,1L},{1L,0xD314L,1L,1L,0xD314L,1L},{1L,0xD314L,1L,1L,0xD314L,1L},{1L,0xD314L,1L,1L,0xD314L,1L},{1L,0xD314L,1L,1L,0xD314L,1L},{1L,0xD314L,1L,1L,0xD314L,1L}};
            int16_t *l_319 = &l_205[0].f2;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_206[i][j] = 1UL;
            }
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 4; j++)
                    l_258[i][j] = 0xAFD32140L;
            }
            g_47 ^= (g_50[g_60] = (safe_rshift_func_uint16_t_u_u(g_50[g_60], (g_50[g_60] == (18446744073709551615UL < (((*l_183) = l_182) == &g_66))))));
            if ((safe_unary_minus_func_uint16_t_u((((l_185[4] , p_37) > (((safe_mul_func_uint16_t_u_u(((l_179 & (safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s(((((safe_mod_func_uint64_t_u_u(1UL, (((safe_mul_func_int16_t_s_s(((~0xBC806B18L) < (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((*l_204) = ((*l_201)++)), l_179)), g_138))), g_50[0])) , l_205[0]) , g_50[g_60]))) != 0x6FDFL) , l_206[0][5]) | l_205[0].f0), p_37)), 0xD39A1ACFL))) ^ p_37), 0xBF76L)) | l_205[0].f0) ^ 0x73L)) != l_179))))
            { 
                uint32_t *l_215 = &g_96.f0;
                int32_t l_218 = 0xADC3C1F5L;
                int32_t **l_231 = &l_169;
                int32_t l_252[5][3][3] = {{{0x8A21F489L,0x5AA6BA30L,0x8A21F489L},{(-1L),8L,(-1L)},{0x8A21F489L,0x5AA6BA30L,0x8A21F489L}},{{(-1L),8L,(-1L)},{0x8A21F489L,0x5AA6BA30L,0x8A21F489L},{(-1L),8L,(-1L)}},{{0x8A21F489L,0x5AA6BA30L,0x8A21F489L},{(-1L),8L,(-1L)},{0x8A21F489L,0x5AA6BA30L,0x8A21F489L}},{{(-1L),8L,(-1L)},{0x8A21F489L,0x5AA6BA30L,0x8A21F489L},{(-1L),8L,(-1L)}},{{0x8A21F489L,0x5AA6BA30L,0x8A21F489L},{(-1L),8L,(-1L)},{0x8A21F489L,0x5AA6BA30L,0x8A21F489L}}};
                int16_t l_260[1];
                struct S2 l_264 = {0xAAA0B847L,0xFBBCL,246UL};
                int32_t *l_291 = &g_50[g_60];
                int32_t *l_292 = &g_50[0];
                int32_t *l_293 = (void*)0;
                int32_t *l_294 = (void*)0;
                int32_t *l_295 = &l_258[2][0];
                int32_t *l_296 = &g_41;
                int32_t *l_297 = &g_138;
                int32_t *l_298 = &l_218;
                int32_t *l_299 = &l_116;
                int32_t *l_300[1][5][7] = {{{&g_99,&g_138,&l_252[2][1][1],&g_47,(void*)0,&g_99,&g_99},{&g_138,(void*)0,&l_258[1][0],(void*)0,&g_138,&g_2,(void*)0},{(void*)0,&l_276[1],&l_276[0],(void*)0,&l_252[2][1][1],&l_276[0],&g_50[0]},{&l_252[2][1][1],&g_50[0],&g_47,&g_47,&g_50[0],&l_252[2][1][1],&l_276[1]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_50[0],(void*)0,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_260[i] = 0L;
                if ((l_207[2] , (g_47 = (((~((safe_sub_func_int16_t_s_s((l_211 , ((safe_rshift_func_int16_t_s_u((((~g_59.f1) < (((((*l_215) = g_11.f3) , p_37) ^ (((p_37 > ((safe_rshift_func_uint16_t_u_u(((((((p_37 < (*l_44)) >= g_99) > (-1L)) , l_218) & 0xE1L) >= l_219), g_59.f0)) | 246UL)) >= p_37) > g_99)) | g_117)) , g_99), l_205[0].f2)) && 0x57L)), p_37)) == 0xC9420149L)) & g_59.f0) < g_11.f0))))
                { 
                    int32_t **l_223[1][6][4] = {{{&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44},{&l_44,&l_44,&l_44,&l_44}}};
                    int8_t **l_234[3][3][4] = {{{&g_233,&g_233,(void*)0,&g_233},{(void*)0,&g_233,&g_233,(void*)0},{&g_233,&g_233,&g_233,&g_233}},{{&g_233,&g_233,&g_233,&g_233},{&g_233,&g_233,&g_233,&g_233},{&g_233,&g_233,(void*)0,&g_233}},{{&g_233,&g_233,&g_233,&g_233},{&g_233,&g_233,&g_233,&g_233},{&g_233,&g_233,&g_233,&g_233}}};
                    int i, j, k;
                    l_224 = ((((0x4373CAA1L ^ (p_37 != ((*l_215) = (((safe_mul_func_uint8_t_u_u(l_218, g_138)) && (0x98794C979CE06271LL <= (g_99 | ((l_222 == &l_182) & l_206[1][2])))) || l_218)))) ^ 6UL) > p_37) , &g_99);
                    (*l_169) |= (safe_rshift_func_uint16_t_u_s(g_96.f1, (safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((((void*)0 == l_231) , ((((l_232[2] == (l_235 = g_233)) != g_11.f1) < (l_236 , p_37)) != 1UL)), g_66)), p_37))));
                }
                else
                { 
                    return &g_50[0];
                }
                for (l_179 = 0; (l_179 <= 3); l_179 += 1)
                { 
                    struct S2 l_241[1][4] = {{{0xD1F9F783L,0x6199L,5UL},{0xD1F9F783L,0x6199L,5UL},{0xD1F9F783L,0x6199L,5UL},{0xD1F9F783L,0x6199L,5UL}}};
                    int32_t *l_244 = &g_50[g_60];
                    int32_t *l_245 = &l_116;
                    int32_t *l_246 = &g_47;
                    int32_t *l_247 = &g_50[0];
                    int32_t *l_248 = &g_50[0];
                    int32_t *l_249 = &g_50[g_60];
                    int32_t *l_250[6] = {&g_50[g_60],&g_50[g_60],&g_50[g_60],&g_50[g_60],&g_50[g_60],&g_50[g_60]};
                    struct S2 *l_265 = &l_241[0][0];
                    int8_t *l_277[7] = {&g_11.f2,(void*)0,&g_11.f2,&g_11.f2,(void*)0,&g_11.f2,&g_11.f2};
                    int i, j;
                    (**l_231) = ((((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(3L, 1UL)), (l_241[0][0] , (safe_lshift_func_uint8_t_u_u(g_11.f2, g_50[0]))))) == ((void*)0 == l_44)) == (*g_233)) && 0xD70503560D2B78A1LL);
                    g_261--;
                    (*l_265) = l_264;
                    (*l_245) |= ((safe_sub_func_uint64_t_u_u(p_37, ((void*)0 != &g_66))) <= (g_135[2] && (g_59.f0 |= (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s((((1UL <= (safe_mul_func_int16_t_s_s((g_11.f1 != (*l_169)), g_11.f3))) , g_59.f1) , 0x2EL), g_11.f0)) < (*g_233)), l_276[1])), p_37)))));
                    l_252[2][2][1] &= ((safe_add_func_int8_t_s_s(l_211.f2, ((p_37 & (*l_249)) <= (+(((((safe_div_func_uint16_t_u_u((p_37 <= ((**l_231) = ((*l_224) = (safe_add_func_int64_t_s_s((((*l_215) = (+(&l_222 == g_288))) >= ((*l_245) = (g_50[0] >= 0x8E8656E9L))), g_2))))), l_211.f0)) >= (*g_233)) <= l_211.f3) , &l_182) != (*g_288)))))) & l_253);
                }
                g_302[3][0]--;
                for (l_264.f0 = 0; (l_264.f0 <= 3); l_264.f0 += 1)
                { 
                    int16_t *l_318 = (void*)0;
                    int16_t **l_317[2];
                    int32_t l_321 = 0xE26B5C45L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_317[i] = &l_318;
                }
                (*l_169) &= ((void*)0 == &p_37);
            }
            else
            { 
                return &g_138;
            }
        }
    }
    for (l_116 = (-11); (l_116 <= (-23)); --l_116)
    { 
        int8_t * const *l_334[3];
        int32_t l_344 = (-6L);
        int32_t l_347[4];
        uint16_t *l_393[4][7] = {{&l_166,&l_166,&l_166,&l_166,&l_166,&l_166,&l_166},{&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1},{&g_96.f1,&l_166,&g_96.f1,&l_166,&g_96.f1,&l_166,&g_96.f1},{&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1,&g_96.f1}};
        int64_t l_394 = 0x00051D7CDC10A009LL;
        int32_t *l_400 = (void*)0;
        int32_t *l_401[3][2] = {{&g_99,&g_99},{&g_99,&g_99},{&g_99,&g_99}};
        uint16_t l_402[7] = {0xD440L,0xD440L,0xD440L,0xD440L,0xD440L,0xD440L,0xD440L};
        int i, j;
        for (i = 0; i < 3; i++)
            l_334[i] = &l_307;
        for (i = 0; i < 4; i++)
            l_347[i] = 0L;
        for (g_41 = 9; (g_41 != (-21)); g_41--)
        { 
            int16_t l_329 = 0xBB8AL;
            int8_t **l_333 = (void*)0;
            int8_t ***l_332 = &l_333;
            uint32_t *l_345[5][1];
            int32_t l_346 = 0x25B05D60L;
            uint8_t *l_348 = &g_261;
            const uint64_t *l_357 = &g_66;
            const uint64_t **l_356 = &l_357;
            const uint64_t ***l_355[3][6] = {{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356,&l_356,&l_356}};
            uint16_t l_363 = 65527UL;
            int32_t l_385 = 1L;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_345[i][j] = (void*)0;
            }
            (*l_169) = l_329;
            (*g_288) = (void*)0;
            if (((safe_add_func_uint8_t_u_u((((*l_332) = &g_233) == l_334[1]), (safe_lshift_func_uint8_t_u_u(((*l_348) = (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((l_346 = ((*l_44) ^ (l_344 = ((**g_322) = ((l_329 , ((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((-3L), l_344)), p_37)) <= g_59.f1)) || l_344))))))), l_347[3]))), 3)))) || 0xC23E28ED99B6EB53LL))
            { 
                uint64_t ***l_354 = &g_289;
                int32_t l_360 = 9L;
                struct S2 l_374 = {8UL,0x8578L,1UL};
                int32_t l_384[6];
                uint32_t l_386 = 0UL;
                int i;
                for (i = 0; i < 6; i++)
                    l_384[i] = 0L;
                for (p_37 = 0; (p_37 == 14); p_37 = safe_add_func_uint32_t_u_u(p_37, 1))
                { 
                    int32_t *l_361 = &l_257[4][0];
                    int32_t *l_362 = &g_50[0];
                    (*l_361) &= ((((((*l_169) &= (**g_322)) & (l_351[3] == (void*)0)) != (safe_mod_func_uint8_t_u_u((l_354 == l_355[2][5]), (0x408B198C8AB429A6LL & (safe_add_func_uint64_t_u_u(p_37, g_59.f0)))))) != l_329) && l_360);
                    l_363--;
                }
                for (g_99 = 0; (g_99 >= 0); g_99 -= 1)
                { 
                    struct S2 *l_366 = &g_96;
                    int32_t l_375 = 0L;
                    uint64_t *l_379 = &g_380[6][3];
                    union U3 l_382 = {0xB13BL};
                    int32_t *l_383[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_383[i] = &l_257[1][3];
                    (*l_366) = g_96;
                    (*l_366) = (*l_366);
                    if (g_302[3][0])
                        continue;
                    if (g_96.f1)
                        break;
                    --l_386;
                }
            }
            else
            { 
                if (p_37)
                    break;
            }
            (*l_169) = p_37;
            g_50[0] ^= ((*l_169) = (!(g_59.f1 == (~((safe_sub_func_uint8_t_u_u((((&l_166 != l_393[3][4]) <= ((g_96.f1++) & g_135[1])) || (((l_397 < (safe_rshift_func_int8_t_s_u(p_37, ((((void*)0 != l_174) >= 0x21C0L) & l_394)))) | p_37) & p_37)), p_37)) & p_37)))));
        }
        ++l_402[1];
    }
    g_99 &= (safe_add_func_uint64_t_u_u((*g_290), (+((safe_lshift_func_int16_t_s_u((1UL == ((g_96.f1 &= (&l_174 == l_410)) < ((void*)0 != l_411))), 4)) && ((l_412 , 9UL) ^ (*l_169))))));
    return &g_99;
}



static struct S2  func_53(int32_t * p_54, uint16_t  p_55, union U3  p_56, int32_t * p_57, uint64_t  p_58)
{ 
    uint64_t l_71 = 0x7F141C5AB2A44BF8LL;
    int32_t *l_89 = &g_41;
    int32_t *l_94 = (void*)0;
    int32_t l_95 = 0x387092E0L;
    l_95 |= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(0xFA23986BL, l_71)) > (safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((g_60 &= (((((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((+(g_50[0] ^ (safe_div_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0L, (l_89 != l_89))), (safe_mul_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(0x3020L, g_50[0])) , p_58) | g_50[0]), 0xDEL)))) && (*p_54)), (*l_89))))), (*l_89))) && g_50[0]), (*l_89))) <= 9L) & g_2) & 1UL) , 0xAFL)), 255UL)) != 18446744073709551613UL), g_11.f3)), (*l_89)))), p_56.f0));
    return g_96;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_50[i], "g_50[i]", print_hash_value);

    }
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_135[i], "g_135[i]", print_hash_value);

    }
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_302[i][j], "g_302[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_380[i][j], "g_380[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_381, "g_381", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_422[i][j], "g_422[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_453.f0, "g_453.f0", print_hash_value);
    transparent_crc(g_453.f2, "g_453.f2", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_996[i], "g_996[i]", print_hash_value);

    }
    transparent_crc(g_1038.f0, "g_1038.f0", print_hash_value);
    transparent_crc(g_1038.f1, "g_1038.f1", print_hash_value);
    transparent_crc(g_1038.f2, "g_1038.f2", print_hash_value);
    transparent_crc(g_1038.f3, "g_1038.f3", print_hash_value);
    transparent_crc(g_1157.f0, "g_1157.f0", print_hash_value);
    transparent_crc(g_1157.f1, "g_1157.f1", print_hash_value);
    transparent_crc(g_1157.f2, "g_1157.f2", print_hash_value);
    transparent_crc(g_1157.f3, "g_1157.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1232[i], "g_1232[i]", print_hash_value);

    }
    transparent_crc(g_1450, "g_1450", print_hash_value);
    transparent_crc(g_1696, "g_1696", print_hash_value);
    transparent_crc(g_1878, "g_1878", print_hash_value);
    transparent_crc(g_2027, "g_2027", print_hash_value);
    transparent_crc(g_2067, "g_2067", print_hash_value);
    transparent_crc(g_2189, "g_2189", print_hash_value);
    transparent_crc(g_2240, "g_2240", print_hash_value);
    transparent_crc(g_2304, "g_2304", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
