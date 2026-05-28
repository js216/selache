// SPDX-License-Identifier: MIT
// cctest_csmith_f9ba3a77.c --- cctest case csmith_f9ba3a77 (csmith seed 4189731447)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3b80eaae */
/* @exp_ticks 0x4819 */

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

// Options:   -s 4189731447 -o /tmp/csmith_gen_odvkv68h/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint16_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   const uint64_t  f3;
   uint8_t  f4;
};

struct S2 {
   int32_t  f0;
};

union U3 {
   struct S0  f0;
   struct S2  f1;
   uint32_t  f2;
};

union U4 {
   const int32_t  f0;
   int32_t  f1;
   int32_t  f2;
};

struct S1 {
   struct S0  f0;
   int32_t  f1;
   int64_t  f2;
};

union U5 {
   struct S1  f0;
   const struct S2  f1;
};

union U6 {
   struct S0  f0;
};


static int32_t g_2 = 3L;
static int32_t g_5 = (-1L);
static union U5 g_34[1][4] = {{{{{65535UL,0x26DE0D61L,1UL,0x7662B0A94FE874D4LL,2UL},0xAFB1CAD2L,1L}},{{{65535UL,0x26DE0D61L,1UL,0x7662B0A94FE874D4LL,2UL},0xAFB1CAD2L,1L}},{{{65535UL,0x26DE0D61L,1UL,0x7662B0A94FE874D4LL,2UL},0xAFB1CAD2L,1L}},{{{65535UL,0x26DE0D61L,1UL,0x7662B0A94FE874D4LL,2UL},0xAFB1CAD2L,1L}}}};
static struct S2 g_40 = {-3L};
static union U3 g_64[4][2] = {{{{65531UL,0xE33AB57CL,0UL,18446744073709551609UL,1UL}},{{65531UL,0xE33AB57CL,0UL,18446744073709551609UL,1UL}}},{{{0xD62FL,0xE2AA969AL,0xE9A1548EL,0x874B34BCD0122BF4LL,2UL}},{{65531UL,0xE33AB57CL,0UL,18446744073709551609UL,1UL}}},{{{65531UL,0xE33AB57CL,0UL,18446744073709551609UL,1UL}},{{0xD62FL,0xE2AA969AL,0xE9A1548EL,0x874B34BCD0122BF4LL,2UL}}},{{{65531UL,0xE33AB57CL,0UL,18446744073709551609UL,1UL}},{{65531UL,0xE33AB57CL,0UL,18446744073709551609UL,1UL}}}};
static uint32_t g_94[5][1][5] = {{{4294967295UL,5UL,4294967295UL,4294967295UL,5UL}},{{5UL,4294967295UL,4294967295UL,5UL,4294967295UL}},{{5UL,5UL,0x8E76B2DCL,5UL,5UL}},{{4294967295UL,5UL,4294967295UL,4294967295UL,5UL}},{{5UL,4294967295UL,4294967295UL,5UL,4294967295UL}}};
static union U6 g_137 = {{0x1D1AL,4294967295UL,4UL,0UL,0x7CL}};
static const union U4 g_153[2][4] = {{{0x10D4F074L},{0x10D4F074L},{0xF0A685D5L},{0x10D4F074L}},{{0x10D4F074L},{0x2BBFFE05L},{0x2BBFFE05L},{0x10D4F074L}}};
static int16_t g_166 = 0xBB9BL;



static uint16_t  func_1(void);
static int8_t  func_14(struct S0  p_15, union U6  p_16, union U6  p_17, int32_t  p_18, const union U4  p_19);
static struct S0  func_20(struct S2  p_21, union U6  p_22, uint32_t  p_23);
static struct S2  func_24(union U3  p_25, int32_t  p_26, uint64_t  p_27, int64_t  p_28, int64_t  p_29);




static uint16_t  func_1(void)
{ 
    int32_t l_11 = 1L;
    union U3 l_30 = {{0x275CL,0x8B874BDBL,4294967295UL,7UL,255UL}};
    int32_t l_33 = 0x5B676BD7L;
    union U6 l_152 = {{1UL,0x87C1246BL,0x972A186CL,0xB3E61ED58A6F2717LL,5UL}};
    for (g_2 = 28; (g_2 > 3); g_2 = safe_sub_func_uint16_t_u_u(g_2, 1))
    { 
        for (g_5 = 22; (g_5 == (-28)); g_5--)
        { 
            return g_2;
        }
    }
    for (g_2 = (-22); (g_2 >= 24); g_2 = safe_add_func_uint64_t_u_u(g_2, 7))
    { 
        int64_t l_10[4] = {0x37ACED45B0E82CA9LL,0x37ACED45B0E82CA9LL,0x37ACED45B0E82CA9LL,0x37ACED45B0E82CA9LL};
        int i;
        l_11 ^= (l_10[2] = 0L);
    }
    g_166 ^= (safe_mul_func_int8_t_s_s(func_14(func_20(func_24(l_30, ((l_33 &= ((safe_rshift_func_int8_t_s_s(((0UL < 0xD10FBF2BL) , g_5), 0)) < l_30.f0.f3)) , (-3L)), g_2, l_30.f0.f1, g_5), g_137, l_30.f0.f3), l_152, l_152, g_137.f0.f2, g_153[1][0]), l_152.f0.f2));
    return l_30.f0.f4;
}



static int8_t  func_14(struct S0  p_15, union U6  p_16, union U6  p_17, int32_t  p_18, const union U4  p_19)
{ 
    uint32_t l_156[2];
    int32_t l_159[1];
    int32_t l_164 = 1L;
    uint64_t l_165 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 2; i++)
        l_156[i] = 1UL;
    for (i = 0; i < 1; i++)
        l_159[i] = (-1L);
    g_5 = ((safe_add_func_uint8_t_u_u((((--l_156[1]) ^ (l_159[0] = (g_64[0][1] , g_34[0][0].f0.f0.f2))) <= (safe_add_func_uint16_t_u_u(0xB165L, (safe_rshift_func_int16_t_s_u((l_164 == p_19.f1), g_2))))), l_164)) && l_165);
    g_34[0][0].f0.f1 = (-1L);
    return g_153[1][0].f1;
}



static struct S0  func_20(struct S2  p_21, union U6  p_22, uint32_t  p_23)
{ 
    int16_t l_148 = 0x7FD1L;
    int32_t l_149 = 0xAA747B88L;
    int32_t l_150[4];
    int32_t l_151 = (-1L);
    int i;
    for (i = 0; i < 4; i++)
        l_150[i] = 0x39A9149AL;
    p_21 = g_40;
    l_151 |= (safe_mul_func_int8_t_s_s(0x15L, (((g_2 ^= (l_150[1] = (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((~(l_149 = (p_21.f0 && (g_34[0][0].f0.f1 = (l_148 = (safe_rshift_func_int8_t_s_s(((g_5 > (+(g_34[0][0].f0.f0.f0 | 0x69A1B29E641F7FF8LL))) >= g_34[0][0].f0.f0.f1), 1))))))) == g_94[2][0][3]), 2)), p_22.f0.f1)))) == p_22.f0.f0) < p_22.f0.f4)));
    return g_137.f0;
}



static struct S2  func_24(union U3  p_25, int32_t  p_26, uint64_t  p_27, int64_t  p_28, int64_t  p_29)
{ 
    int16_t l_35 = 0x2457L;
    struct S2 l_39 = {0xAE11CD4EL};
    union U5 l_82 = {{{0x2353L,0x37858094L,3UL,18446744073709551606UL,0x56L},0xE7BB48DFL,0xF9BE492C623687E8LL}};
    uint64_t l_121[1];
    int i;
    for (i = 0; i < 1; i++)
        l_121[i] = 0xC81858A7F69D754ELL;
    if ((g_34[0][0] , l_35))
    { 
        int16_t l_36 = 0xE767L;
        struct S0 l_53 = {0UL,0xD6E19CCDL,0x9D3EAFCAL,0UL,0x63L};
        union U6 l_65 = {{3UL,0xA13E652FL,0x6110BDBEL,0x998387B67A03D6E0LL,0xFCL}};
        uint64_t l_70 = 0x3A9463023C0783B0LL;
        uint64_t l_81 = 9UL;
        union U4 l_89 = {-1L};
        struct S2 l_93 = {-1L};
        union U5 l_109[3] = {{{{2UL,4294967295UL,0xBA0674BDL,0x5D9B7F14100A9D47LL,0x23L},0x4D7B1BA9L,-1L}},{{{2UL,4294967295UL,0xBA0674BDL,0x5D9B7F14100A9D47LL,0x23L},0x4D7B1BA9L,-1L}},{{{2UL,4294967295UL,0xBA0674BDL,0x5D9B7F14100A9D47LL,0x23L},0x4D7B1BA9L,-1L}}};
        int i;
        if ((l_36 >= (l_36 & (l_35 <= (safe_mod_func_int64_t_s_s(p_25.f0.f4, 0x576953C535718A84LL))))))
        { 
            int32_t l_54 = (-4L);
            g_40 = l_39;
            if ((safe_mod_func_uint8_t_u_u(l_36, (safe_mod_func_int8_t_s_s(0x44L, (safe_mod_func_int64_t_s_s(((((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s(g_34[0][0].f0.f2, ((l_53 , p_29) , 4294967295UL))) & p_25.f0.f0), p_28)), p_28)) == 0x7B6068BE3E2CA52CLL) , 0xAAL) <= 0xDFL), p_27)))))))
            { 
                int64_t l_55 = (-1L);
                uint64_t l_56[2][5];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_56[i][j] = 0xCA56B74084DAEA48LL;
                }
                g_2 ^= (((g_34[0][0].f0.f0.f2 |= ((l_55 = l_54) | 0L)) & l_56[0][3]) & ((safe_rshift_func_uint16_t_u_u(((g_40.f0 || l_54) <= g_5), 2)) , l_35));
            }
            else
            { 
                int8_t l_61 = 0x05L;
                int16_t l_66[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_66[i] = 0L;
                p_26 ^= g_34[0][0].f0.f0.f3;
                l_66[1] |= ((safe_mod_func_int8_t_s_s((((g_34[0][0].f0.f2 |= (p_25.f0.f3 | (255UL >= l_61))) && ((safe_mul_func_uint16_t_u_u((((g_64[0][1] , l_65) , l_54) == p_25.f0.f0), l_61)) <= 0x47L)) , l_53.f4), 0x89L)) == l_61);
            }
        }
        else
        { 
            struct S2 l_69 = {0x324EF461L};
            for (g_40.f0 = 0; (g_40.f0 == (-15)); g_40.f0 = safe_sub_func_int8_t_s_s(g_40.f0, 1))
            { 
                g_64[0][1].f1 = l_69;
                l_70--;
                p_26 = (safe_lshift_func_int8_t_s_u(((((((safe_rshift_func_uint8_t_u_s((p_25.f0.f4 |= (safe_lshift_func_int16_t_s_s(g_34[0][0].f0.f0.f3, 0))), 4)) && ((safe_add_func_int32_t_s_s(1L, ((-7L) >= (p_25.f0.f3 >= 0xDEF15EDAL)))) == l_81)) == p_26) , (-3L)) || g_34[0][0].f0.f0.f2) <= 0xC033C152L), p_28));
            }
        }
        if ((l_82 , ((p_26 = ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((l_89 , (((l_82.f0.f1 = l_65.f0.f4) >= (p_29 && p_25.f0.f2)) >= l_39.f0)), p_25.f0.f1)), g_2)), 2)) ^ p_29)) != l_65.f0.f0)))
        { 
            int32_t l_105 = (-2L);
            int16_t l_106 = (-1L);
            for (p_25.f0.f2 = (-24); (p_25.f0.f2 <= 30); p_25.f0.f2 = safe_add_func_uint8_t_u_u(p_25.f0.f2, 1))
            { 
                struct S2 l_92 = {0xEAD26C8BL};
                l_93 = l_92;
                g_94[2][0][3]--;
            }
            l_106 = ((safe_mul_func_int16_t_s_s((l_89.f2 = p_28), (safe_add_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(g_34[0][0].f0.f0.f3, (safe_rshift_func_uint16_t_u_s((p_25.f0.f0 , 0x7068L), 2)))) != 0x91L), l_105)))) ^ (-1L));
        }
        else
        { 
            uint32_t l_115[5][3] = {{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}};
            int i, j;
            for (l_53.f4 = 26; (l_53.f4 != 38); l_53.f4 = safe_add_func_uint32_t_u_u(l_53.f4, 1))
            { 
                int16_t l_110 = 0x32A9L;
                p_26 &= p_28;
                l_110 = (l_109[1] , 3L);
            }
            for (l_70 = 0; (l_70 >= 22); l_70++)
            { 
                int32_t l_118 = 0L;
                g_2 = (((l_82.f0.f1 ^= (safe_add_func_uint8_t_u_u(l_115[3][0], (safe_mul_func_uint16_t_u_u(((p_29 , (g_34[0][0] , (g_34[0][0] , 0x07ABL))) , g_94[4][0][0]), p_26))))) || l_82.f0.f0.f3) > 0L);
                p_26 &= l_118;
            }
        }
    }
    else
    { 
        uint64_t l_134 = 0x85A4DA777F1D446CLL;
        for (g_5 = 0; (g_5 <= 0); g_5 += 1)
        { 
            for (p_27 = 0; (p_27 <= 0); p_27 += 1)
            { 
                p_26 ^= (safe_lshift_func_int16_t_s_u(l_121[0], 9));
            }
            for (l_82.f0.f0.f2 = 0; (l_82.f0.f0.f2 <= 0); l_82.f0.f0.f2 += 1)
            { 
                int32_t l_126 = 0xAC9A06BDL;
                g_34[0][0].f0.f1 = (safe_lshift_func_int16_t_s_u(g_64[0][1].f0.f2, 1));
                p_26 &= ((safe_rshift_func_uint8_t_u_s((l_126 != (p_25.f0 , (((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((safe_div_func_int64_t_s_s(p_25.f0.f1, 0x44B56EB578CF1776LL)), g_94[4][0][3])) , p_28) & g_34[0][0].f0.f1), 3)))) < g_34[0][0].f0.f0.f4) ^ g_34[0][0].f0.f0.f4))), 6)) , l_82.f0.f0.f2);
            }
        }
        l_134--;
    }
    return l_39;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_34[i][j].f0.f0.f0, "g_34[i][j].f0.f0.f0", print_hash_value);
            transparent_crc(g_34[i][j].f0.f0.f1, "g_34[i][j].f0.f0.f1", print_hash_value);
            transparent_crc(g_34[i][j].f0.f0.f2, "g_34[i][j].f0.f0.f2", print_hash_value);
            transparent_crc(g_34[i][j].f0.f0.f3, "g_34[i][j].f0.f0.f3", print_hash_value);
            transparent_crc(g_34[i][j].f0.f0.f4, "g_34[i][j].f0.f0.f4", print_hash_value);
            transparent_crc(g_34[i][j].f0.f1, "g_34[i][j].f0.f1", print_hash_value);
            transparent_crc(g_34[i][j].f0.f2, "g_34[i][j].f0.f2", print_hash_value);

        }
    }
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_94[i][j][k], "g_94[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_137.f0.f0, "g_137.f0.f0", print_hash_value);
    transparent_crc(g_137.f0.f1, "g_137.f0.f1", print_hash_value);
    transparent_crc(g_137.f0.f2, "g_137.f0.f2", print_hash_value);
    transparent_crc(g_137.f0.f3, "g_137.f0.f3", print_hash_value);
    transparent_crc(g_137.f0.f4, "g_137.f0.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_153[i][j].f0, "g_153[i][j].f0", print_hash_value);
            transparent_crc(g_153[i][j].f1, "g_153[i][j].f1", print_hash_value);
            transparent_crc(g_153[i][j].f2, "g_153[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_166, "g_166", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
