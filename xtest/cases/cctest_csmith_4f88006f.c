// SPDX-License-Identifier: MIT
// cctest_csmith_4f88006f.c --- cctest case csmith_4f88006f (csmith seed 1334313071)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xaf22cfa5 */
/* @exp_ticks 0x3ce6 */

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

// Options:   -s 1334313071 -o /tmp/csmith_gen_lvp5wklj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   uint64_t  f1;
   uint8_t  f2;
};

union U1 {
   const struct S0  f0;
   int32_t  f1;
   int64_t  f2;
   struct S0  f3;
};

union U2 {
   const int16_t  f0;
   uint32_t  f1;
};


static int8_t g_4[3] = {0x2CL,0x2CL,0x2CL};
static union U2 g_23 = {0x74ADL};
static union U1 g_35 = {{0L,0x86C8A81D5F49DCB7LL,0UL}};
static uint32_t g_89 = 1UL;
static uint32_t g_96 = 0x0E83E0D6L;
static int64_t g_130 = 0L;
static int64_t g_132 = 6L;
static int32_t g_133 = 7L;
static int16_t g_148 = (-10L);
static uint32_t g_149 = 18446744073709551612UL;
static uint32_t g_182 = 0xB41D5FB7L;
static struct S0 g_188 = {0xDA51A47E80D5247FLL,0UL,0xEDL};



static struct S0  func_1(void);
static union U1  func_10(uint64_t  p_11);
static int16_t  func_18(union U2  p_19, const uint32_t  p_20, int8_t  p_21, uint32_t  p_22);
static int32_t  func_26(int16_t  p_27, union U1  p_28, struct S0  p_29, union U1  p_30, int8_t  p_31);




static struct S0  func_1(void)
{ 
    uint8_t l_7[2][3] = {{0x25L,0xFBL,0x25L},{0x25L,0xFBL,0x25L}};
    int32_t l_95[1][2];
    int32_t l_134 = 1L;
    uint8_t l_137[2];
    int32_t l_156 = 0L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_95[i][j] = (-10L);
    }
    for (i = 0; i < 2; i++)
        l_137[i] = 247UL;
    l_134 &= ((safe_rshift_func_int16_t_s_s((g_4[0] , (safe_div_func_uint64_t_u_u((l_7[1][1] < 0x96F377CCL), ((safe_rshift_func_int16_t_s_s((g_132 = ((func_10((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((l_95[0][1] = (safe_mul_func_int16_t_s_s(func_18(g_23, l_7[0][2], g_4[0], g_4[0]), 0xE4A2L))) == l_7[1][1]) < 9L), l_7[1][1])), 3))) , g_89) , l_95[0][1])), 1)) ^ g_133)))), 0)) || g_130);
    for (g_96 = 0; (g_96 >= 41); g_96 = safe_add_func_uint16_t_u_u(g_96, 1))
    { 
        uint32_t l_157 = 18446744073709551615UL;
        l_137[1]--;
        l_157 &= (((-1L) == ((+(safe_add_func_uint16_t_u_u(65535UL, (!(safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((g_149++) ^ 0x0EE913E1DE84E00CLL), 1)), (safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(l_7[1][1], l_156)), l_137[1])))))))) < l_7[1][1])) == g_4[0]);
    }
    for (g_130 = 0; (g_130 < 11); g_130++)
    { 
        uint32_t l_160 = 1UL;
        int32_t l_180 = (-4L);
        if (l_160)
        { 
            int64_t l_178 = 2L;
            int16_t l_179 = 0L;
            int32_t l_181[5];
            int i;
            for (i = 0; i < 5; i++)
                l_181[i] = 0x17F2CAB3L;
            for (g_148 = (-19); (g_148 >= 21); g_148 = safe_add_func_int16_t_s_s(g_148, 5))
            { 
                uint16_t l_163 = 65526UL;
                --l_163;
            }
            l_179 = (safe_mod_func_int64_t_s_s((g_23.f0 != ((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((--g_89), g_35.f1)), (((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((l_95[0][1] = g_96), ((0x1CL & l_178) || g_23.f0))), g_132)) <= l_134) <= 0x0C29DF71F774A439LL))) > l_134)), g_96));
            g_182--;
        }
        else
        { 
            uint64_t l_187 = 0xD65AF2B12C03D883LL;
            l_95[0][1] ^= (((safe_add_func_int64_t_s_s((g_132 = l_180), l_187)) != (((1L && (g_4[1] <= l_160)) , l_137[0]) || g_23.f0)) , g_35.f1);
        }
        l_134 = (g_35.f1 = l_180);
    }
    return g_188;
}



static union U1  func_10(uint64_t  p_11)
{ 
    const int8_t l_99 = 0L;
    int32_t l_114 = 0xECE75099L;
    int32_t l_115[4][4][1] = {{{0x4A2D252AL},{8L},{0x4A2D252AL},{0x79380A50L}},{{0x79380A50L},{0x4A2D252AL},{8L},{0x4A2D252AL}},{{0x79380A50L},{0x79380A50L},{0x4A2D252AL},{8L}},{{0x4A2D252AL},{0x79380A50L},{0x79380A50L},{0x4A2D252AL}}};
    uint32_t l_122[5];
    union U1 l_123[2] = {{{0x9CB40E94E8F9E78BLL,18446744073709551613UL,0x88L}},{{0x9CB40E94E8F9E78BLL,18446744073709551613UL,0x88L}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_122[i] = 18446744073709551615UL;
    --g_96;
lbl_129:
    l_115[0][3][0] = ((l_99 == g_4[2]) & (safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((l_114 = (safe_rshift_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_s(((g_4[0] != (((((0x9F9BF173L == 0x28DBD829L) >= g_4[0]) | l_99) < (-1L)) & g_89)) , g_4[0]), 2)) || g_96) == g_96) < 0xD1A69E2847586045LL) || g_4[0]), 7))), 0xB9L)), g_89)) || p_11) >= l_99) >= g_4[0]), g_23.f0)), p_11)), p_11)));
    for (g_35.f2 = 0; (g_35.f2 <= 2); g_35.f2 += 1)
    { 
        union U1 l_124 = {{0x396DDFF55CBB879DLL,0x52B013A5848C3673LL,0xC9L}};
        int i;
        for (g_96 = 0; (g_96 <= 2); g_96 += 1)
        { 
            for (g_89 = 0; g_89 < 4; g_89 += 1)
            {
                for (g_23.f1 = 0; g_23.f1 < 4; g_23.f1 += 1)
                {
                    for (l_114 = 0; l_114 < 1; l_114 += 1)
                    {
                        l_115[g_89][g_23.f1][l_114] = (-1L);
                    }
                }
            }
        }
        if ((0xC0B5BC34L <= (g_4[g_35.f2] >= g_4[g_35.f2])))
        { 
            if (((g_4[g_35.f2] && (l_115[0][3][0] = (safe_div_func_uint64_t_u_u((p_11 = ((g_35.f2 <= p_11) != (safe_div_func_int32_t_s_s(p_11, g_4[0])))), l_115[0][3][0])))) <= l_122[4]))
            { 
                if (p_11)
                    break;
            }
            else
            { 
                return l_123[0];
            }
            for (g_89 = 0; (g_89 <= 2); g_89 += 1)
            { 
                int i;
                l_123[0].f1 = g_4[g_35.f2];
                return l_124;
            }
        }
        else
        { 
            const union U2 l_125 = {0xC4F9L};
            int32_t l_128[1][1][2];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_128[i][j][k] = 8L;
                }
            }
            if ((g_4[1] > (l_125 , (l_124.f1 = ((((l_128[0][0][1] |= ((g_89 , (((safe_sub_func_uint32_t_u_u(p_11, l_125.f0)) || p_11) || g_4[g_35.f2])) || p_11)) != (-5L)) <= 18446744073709551615UL) > l_125.f0)))))
            { 
                if (l_99)
                    goto lbl_129;
                l_128[0][0][1] = (p_11 & 0xE2L);
            }
            else
            { 
                uint32_t l_131 = 18446744073709551608UL;
                g_130 &= 0xC6856C27L;
                if (l_124.f1)
                    continue;
                l_131 = 0x759A07A5L;
            }
        }
    }
    return l_123[0];
}



static int16_t  func_18(union U2  p_19, const uint32_t  p_20, int8_t  p_21, uint32_t  p_22)
{ 
    uint64_t l_92[5][3][1] = {{{0x4AE622E340D7ECFCLL},{8UL},{0x4AE622E340D7ECFCLL}},{{8UL},{0x4AE622E340D7ECFCLL},{8UL}},{{0x4AE622E340D7ECFCLL},{8UL},{0x4AE622E340D7ECFCLL}},{{8UL},{0x4AE622E340D7ECFCLL},{8UL}},{{0x4AE622E340D7ECFCLL},{8UL},{0x4AE622E340D7ECFCLL}}};
    int i, j, k;
    for (p_19.f1 = 0; (p_19.f1 <= 2); p_19.f1 += 1)
    { 
        uint32_t l_34[3];
        struct S0 l_36 = {0x95E19F8C51723279LL,0UL,0xFAL};
        int32_t l_90 = 0x5B56AF65L;
        int32_t l_91 = 0x8C34F7C3L;
        int i;
        for (i = 0; i < 3; i++)
            l_34[i] = 18446744073709551615UL;
        for (p_21 = 0; (p_21 <= 2); p_21 += 1)
        { 
            union U1 l_37 = {{0x7E29AC92D14B4322LL,0x7C650BA430906344LL,9UL}};
            int i;
            g_89 = (safe_add_func_int32_t_s_s(((g_35.f1 = func_26((l_34[0] = (safe_div_func_int16_t_s_s(0xAE65L, g_4[p_21]))), g_35, (g_23 , l_36), l_37, g_23.f0)) || 4294967295UL), g_23.f0));
            return g_23.f0;
        }
        l_92[1][1][0]--;
    }
    return g_35.f0.f1;
}



static int32_t  func_26(int16_t  p_27, union U1  p_28, struct S0  p_29, union U1  p_30, int8_t  p_31)
{ 
    struct S0 l_38 = {0xBBBFEFA2E5769E8ALL,18446744073709551611UL,0UL};
    int32_t l_59 = 0xFAEFF9B1L;
    int32_t l_88[2][3] = {{0L,0L,0L},{(-9L),(-9L),(-9L)}};
    int i, j;
    g_35.f3 = l_38;
    for (p_29.f1 = 0; (p_29.f1 <= 2); p_29.f1 += 1)
    { 
        int32_t l_47 = (-1L);
        int32_t l_56 = 0xC8D67996L;
        int i;
    }
    l_88[0][1] = ((safe_sub_func_int64_t_s_s(l_38.f1, ((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(1UL, (safe_lshift_func_int8_t_s_s((((~(l_59 |= (g_4[0] = (safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s(p_30.f0.f0, (p_30.f0.f1 >= 4L))), l_38.f1))))) != g_35.f3.f0) ^ p_30.f0.f0), l_38.f1)))), 18446744073709551615UL)), l_38.f1)) < l_38.f1))) > 4UL);
    return p_30.f0.f2;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);

    }
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    transparent_crc(g_188.f2, "g_188.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
