// SPDX-License-Identifier: MIT
// cctest_csmith_c19afb9c.c --- cctest case csmith_c19afb9c (csmith seed 3248159644)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7f95063 */
/* @exp_ticks 0x753 */

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

// Options:   -s 3248159644 -o /home/agent1/fast_data/tmp/csmith_gen_ja0h6tde/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   const uint64_t  f1;
   uint16_t  f2;
   uint64_t  f3;
   uint16_t  f4;
};

struct S1 {
   uint32_t  f0;
   const int32_t  f1;
   int64_t  f2;
   uint16_t  f3;
};

struct S3 {
   int64_t  f0;
};

union U4 {
   uint16_t  f0;
   const uint32_t  f1;
};

union U5 {
   uint8_t  f0;
   int8_t  f1;
};

struct S2 {
   struct S0  f0;
   const int32_t  f1;
   uint32_t  f2;
   uint8_t  f3;
   uint64_t  f4;
};

union U6 {
   struct S2  f0;
};

union U7 {
   const int64_t  f0;
   uint8_t  f1;
   const uint64_t  f2;
   int32_t  f3;
};

union U8 {
   int64_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int32_t  f3;
};

union U9 {
   struct S2  f0;
   const struct S3  f1;
   struct S1  f2;
};


static int64_t g_6 = 1L;
static union U7 g_17 = {0x243B9C309AB83EB6LL};
static uint64_t g_40 = 18446744073709551613UL;
static union U6 g_56 = {{{65532UL,0x24D52A103ABED3A9LL,0x7891L,0xCED7C6C5FB330CFELL,65535UL},0x2FC99F15L,0xC87C03C7L,253UL,0xDA5D7A232894124FLL}};
static struct S3 g_57 = {7L};
static union U4 g_69 = {0x937FL};
static uint32_t g_71 = 0x3D5F64BAL;
static uint64_t g_96 = 0x7BD6D72D1AE7A549LL;
static int8_t g_131 = 0x52L;
static uint32_t g_135 = 0xECA6FCDDL;
static uint64_t g_145 = 1UL;
static uint8_t g_172 = 0xC7L;
static uint8_t g_177[5] = {0xE2L,0xE2L,0xE2L,0xE2L,0xE2L};
static int8_t g_184 = (-1L);
static int16_t g_228 = 0L;
static int16_t g_245 = (-1L);
static uint32_t g_247 = 6UL;
static struct S1 g_250 = {0xD83B648FL,1L,0x005DB3240AD27CE3LL,0UL};



static struct S1  func_1(void);
static int32_t  func_2(struct S0  p_3);
static struct S0  func_4(union U6  p_5);
static union U6  func_7(uint8_t  p_8, int16_t  p_9, union U7  p_10, uint64_t  p_11);




static struct S1  func_1(void)
{ 
    uint8_t l_14 = 255UL;
    int32_t l_175 = 0xE6F90CD5L;
    int32_t l_176[2];
    int32_t l_193[1][4][1] = {{{0xCA1D526EL},{0xEF9A41DAL},{0xCA1D526EL},{0xEF9A41DAL}}};
    struct S3 l_196 = {8L};
    const uint64_t l_210 = 0x0D83C71B25C6D075LL;
    union U4 l_226 = {0xF005L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_176[i] = 0x7CBC0A3BL;
    if (func_2(func_4((g_6 , func_7(((((safe_add_func_uint8_t_u_u(((l_14 && l_14) <= (safe_lshift_func_int16_t_s_s((0L == 0x85L), g_6))), (-2L))) >= g_6) <= g_6) && g_6), l_14, g_17, l_14)))))
    { 
        --g_177[1];
    }
    else
    { 
        uint8_t l_182 = 0x40L;
        const union U7 l_183 = {-1L};
        const int8_t l_191 = 4L;
        int32_t l_192[1];
        const int16_t l_243 = 1L;
        uint32_t l_244 = 0x5B6F9CE4L;
        int i;
        for (i = 0; i < 1; i++)
            l_192[i] = 1L;
        if (((safe_sub_func_int32_t_s_s(((l_182 , l_183) , (g_184 ^ ((l_176[1] = (((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((l_191 != 0xDA18CC62L) || 0xD863500523DCADDELL), 0UL)), l_182)), g_184)) >= g_69.f0) >= l_192[0]) || l_193[0][3][0]) >= g_56.f0.f1)) ^ g_6))), g_71)) && 0xE10F472FL))
        { 
            uint32_t l_199 = 6UL;
            int32_t l_213 = (-8L);
            for (g_56.f0.f0.f3 = 4; (g_56.f0.f0.f3 >= 21); g_56.f0.f0.f3 = safe_add_func_int64_t_s_s(g_56.f0.f0.f3, 1))
            { 
                int64_t l_209 = 0x259846D02991E075LL;
                int32_t l_211 = 0xB1D02B38L;
                int32_t l_212 = 0x3BE05C0EL;
                l_196 = g_57;
                if (l_176[1])
                    break;
                l_213 = (((((l_211 |= (((safe_mod_func_int16_t_s_s(l_199, (18446744073709551611UL || ((safe_add_func_int32_t_s_s((+(safe_mul_func_int8_t_s_s(((l_192[0] &= ((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_17.f1 = 0UL), ((g_145 ^= ((((l_209 = 0L) ^ l_199) & 0x7FB89E63L) & l_210)) , l_199))), l_199)) < 0xDEEFCC7DE1C9599CLL)) <= g_69.f0), g_71))), l_199)) ^ 0xEC599252L)))) ^ 0UL) || 0x89L)) && 5L) , l_196.f0) >= g_184) > l_212);
            }
            for (g_96 = 0; (g_96 <= 59); g_96++)
            { 
                if (g_56.f0.f0.f4)
                    break;
                l_213 = (l_183.f0 <= (-1L));
            }
        }
        else
        { 
            uint64_t l_221[4][1];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_221[i][j] = 18446744073709551615UL;
            }
            if ((!g_172))
            { 
                uint32_t l_227 = 0xD3EF12D6L;
                g_228 = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(0L, (((g_17.f3 ^= (((l_221[2][0] == (safe_sub_func_uint16_t_u_u((0x941DL <= (safe_lshift_func_int8_t_s_u((l_226 , l_183.f0), 7))), 0x7A4DL))) > l_221[2][0]) && 1UL)) == l_227) <= l_193[0][3][0]))), 1));
            }
            else
            { 
                int8_t l_241 = 0x98L;
                int32_t l_242 = 0xB9D1BABBL;
                int32_t l_246 = (-1L);
                l_192[0] = (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((((l_244 &= ((safe_div_func_uint8_t_u_u((g_57 , (l_175 |= (safe_div_func_uint8_t_u_u(((-1L) ^ (g_17.f1 = ((0xF4AEB97DL == (((safe_add_func_uint64_t_u_u((((safe_sub_func_int8_t_s_s(((((l_241 = ((g_6 <= g_69.f0) != l_221[3][0])) | g_56.f0.f0.f3) > l_242) | g_69.f0), l_242)) ^ g_228) != g_17.f1), l_176[1])) ^ g_6) , l_193[0][3][0])) == 0L))), l_243)))), g_56.f0.f3)) <= 0x06BD755E538C6520LL)) & l_14) | g_56.f0.f0.f3), g_56.f0.f0.f3)), 4));
                ++g_247;
            }
        }
    }
    return g_250;
}



static int32_t  func_2(struct S0  p_3)
{ 
    union U7 l_60 = {-1L};
    int64_t l_66 = (-1L);
    uint8_t l_67 = 251UL;
    int32_t l_68 = 0L;
    int32_t l_70 = (-7L);
    union U9 l_122 = {{{1UL,18446744073709551608UL,1UL,18446744073709551615UL,65532UL},0x4F1F8345L,1UL,0x9BL,0xB028D9ABBA40B5A9LL}};
    int8_t l_123[1][2];
    union U4 l_127 = {0x0379L};
    union U5 l_164[5] = {{0x48L},{0x48L},{0x48L},{0x48L},{0x48L}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_123[i][j] = (-1L);
    }
    if ((((l_68 |= (((!(((l_60 , (l_67 = (safe_mod_func_uint16_t_u_u(((((+5L) < g_56.f0.f2) , (((safe_mod_func_uint32_t_u_u(l_66, g_56.f0.f0.f3)) == g_56.f0.f2) < l_60.f0)) < 4294967295UL), 0x549BL)))) , l_60.f3) >= p_3.f4)) || p_3.f3) || (-6L))) || l_67) | l_60.f1))
    { 
        int32_t l_95 = 1L;
        int32_t l_97 = 7L;
        int32_t l_98 = (-1L);
        if ((g_69 , 0x86667EE9L))
        { 
            const uint32_t l_74 = 0x7FC81C9DL;
            int16_t l_79 = 1L;
            int32_t l_94 = 0x24D46519L;
            struct S3 l_100 = {0x9387CB90AFEB5AB8LL};
            --g_71;
            g_17.f3 |= (l_74 < (g_56.f0.f0.f2 || (p_3.f4 > ((((safe_mod_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(0x2248L, 2)) , g_56.f0.f2), g_56.f0.f3)) == g_6) , l_79) ^ 0xF5L))));
            if ((l_97 = (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(((l_95 = (l_94 = ((((safe_mod_func_int16_t_s_s(p_3.f2, (safe_add_func_uint16_t_u_u(0x7763L, ((safe_unary_minus_func_int32_t_s((p_3.f0 | (+g_69.f0)))) && g_57.f0))))) & 0x5DL) <= g_6) , l_74))) >= g_71), 1UL)), 2)), g_96)), g_56.f0.f0.f2))))
            { 
                l_98 ^= l_97;
            }
            else
            { 
                struct S3 l_99[2] = {{1L},{1L}};
                int i;
                l_100 = l_99[1];
            }
        }
        else
        { 
            uint8_t l_109 = 0x74L;
            l_68 = (((((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_3.f3, (l_60.f3 ^= ((safe_div_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(l_109, (safe_sub_func_int16_t_s_s((1L > (p_3.f4 >= 0x27L)), l_70)))) >= 0x8E5C9749L), 0x87L)) ^ p_3.f2)))), 1L)) <= 0x339393F5L) != g_56.f0.f3) == (-4L)) != g_56.f0.f0.f0);
            return l_109;
        }
        g_57 = ((g_69 , 4294967295UL) , ((l_68 = (((safe_add_func_uint64_t_u_u((((safe_sub_func_int16_t_s_s(g_71, (((((safe_rshift_func_uint8_t_u_s(255UL, l_97)) ^ l_97) > g_69.f0) == l_98) >= p_3.f2))) , g_56.f0.f2) && 0UL), 0x18E90175C14C0543LL)) ^ l_97) , p_3.f0)) , g_57));
    }
    else
    { 
        struct S1 l_128 = {0UL,0x9A845578L,9L,7UL};
        int32_t l_129 = 2L;
        int32_t l_168 = 0xA149CD5CL;
        if (((((l_60.f1 != (((p_3.f0 | (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_3.f3, (l_122 , p_3.f1))), p_3.f2))) != 0x00EC888E0995485ALL) <= g_56.f0.f0.f1)) || l_60.f3) , 0x5BL) || p_3.f4))
        { 
            const uint32_t l_126 = 0UL;
            int32_t l_130 = 0x7032A699L;
            for (g_6 = 0; (g_6 <= 0); g_6 += 1)
            { 
                g_17.f3 = (p_3.f2 | (g_131 = (safe_mul_func_int16_t_s_s(((l_126 && (l_127 , (l_129 = (l_128 , g_56.f0.f2)))) ^ p_3.f2), l_130))));
            }
            for (l_122.f2.f3 = (-16); (l_122.f2.f3 != 19); l_122.f2.f3 = safe_add_func_int8_t_s_s(l_122.f2.f3, 7))
            { 
                int8_t l_134 = 1L;
                --g_135;
                return g_40;
            }
        }
        else
        { 
            uint64_t l_165[2];
            int32_t l_166[3];
            uint64_t l_167 = 0x7623E6EA00FD19F2LL;
            int i;
            for (i = 0; i < 2; i++)
                l_165[i] = 0x05488EF96A3AA068LL;
            for (i = 0; i < 3; i++)
                l_166[i] = 0L;
            for (l_122.f0.f0.f2 = 0; (l_122.f0.f0.f2 <= 0); l_122.f0.f0.f2 += 1)
            { 
                l_60.f3 &= g_56.f0.f0.f1;
            }
            for (l_60.f1 = 0; (l_60.f1 == 28); ++l_60.f1)
            { 
                int64_t l_143 = 0x79008C5D1B8DA620LL;
                int32_t l_144 = 0x335C488BL;
                l_143 |= (safe_rshift_func_uint16_t_u_u((+p_3.f2), 7));
                ++g_145;
            }
            if ((g_71 >= (l_60 , ((safe_rshift_func_int16_t_s_s((((~((safe_mod_func_int64_t_s_s((safe_div_func_int8_t_s_s((l_168 &= (((safe_unary_minus_func_uint16_t_u((g_56.f0.f0.f2 = 1UL))) > (safe_mul_func_int8_t_s_s((l_167 = (safe_sub_func_int16_t_s_s(((l_129 &= (((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((l_164[3] , l_122.f0.f0.f4) && g_71), 0xAF2DL)), 5)) , l_165[0]) == g_17.f3)) & l_60.f1), l_166[0]))), g_57.f0))) ^ (-2L))), 0x5DL)), g_17.f1)) , p_3.f0)) | l_122.f0.f0.f1) || g_56.f0.f3), l_128.f2)) ^ p_3.f4))))
            { 
                return p_3.f4;
            }
            else
            { 
                l_168 ^= p_3.f1;
            }
        }
    }
    for (l_66 = 0; (l_66 >= 25); l_66++)
    { 
        int16_t l_171 = 0L;
        g_172--;
    }
    return l_164[3].f1;
}



static struct S0  func_4(union U6  p_5)
{ 
    struct S3 l_58 = {0x919EE48480AD74ECLL};
    l_58 = g_57;
    return g_56.f0.f0;
}



static union U6  func_7(uint8_t  p_8, int16_t  p_9, union U7  p_10, uint64_t  p_11)
{ 
    int64_t l_45 = (-1L);
    uint32_t l_46 = 0x342871EBL;
    int32_t l_53 = 0L;
    const int64_t l_54 = 0x1526695BD66052DBLL;
    int32_t l_55[1];
    int i;
    for (i = 0; i < 1; i++)
        l_55[i] = 0x160806AFL;
    for (g_17.f3 = 0; (g_17.f3 != 27); g_17.f3++)
    { 
        int16_t l_35[5] = {0xBDCFL,0xBDCFL,0xBDCFL,0xBDCFL,0xBDCFL};
        union U6 l_39 = {{{4UL,18446744073709551615UL,0x333BL,0xFBA323A35E06C083LL,1UL},0x7EAC691CL,0xC8ECDCC2L,4UL,0xF1A504A86D6A6C34LL}};
        int i;
        for (g_6 = (-24); (g_6 != 6); g_6 = safe_add_func_int8_t_s_s(g_6, 3))
        { 
            struct S1 l_24[2] = {{0xFE10EF7DL,0x94484F75L,0L,65529UL},{0xFE10EF7DL,0x94484F75L,0L,65529UL}};
            int32_t l_25[4];
            int i;
            for (i = 0; i < 4; i++)
                l_25[i] = 0x384F3AC1L;
            l_25[0] ^= (((p_10.f3 || (safe_rshift_func_int16_t_s_s(g_6, ((l_24[1] , 0xBD47CDD5L) <= g_6)))) && 1L) , 0L);
        }
        for (p_8 = 0; (p_8 != 6); ++p_8)
        { 
            for (p_10.f1 = (-6); (p_10.f1 > 47); p_10.f1++)
            { 
                const union U8 l_30 = {1L};
                int32_t l_38 = 0x02AC6AA0L;
                l_38 = (l_30 , (g_17.f1 > (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(l_35[3], (safe_sub_func_int32_t_s_s(g_17.f3, p_9)))), 0xA1BBDB81L))));
            }
            return l_39;
        }
        g_40 = (p_10.f3 &= l_39.f0.f0.f1);
    }
    l_55[0] = (((((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(((l_46++) <= 0x10AAL), 0xECA2A428L)), (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((g_17 , (((l_53 = l_45) & g_17.f3) | 0x53CCL)), 65529UL)), p_8)))) == 3L) == l_54) , 0L) <= 0x9FC65F31FD024CA9LL);
    return g_56;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_17.f1, "g_17.f1", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_56.f0.f0.f0, "g_56.f0.f0.f0", print_hash_value);
    transparent_crc(g_56.f0.f0.f1, "g_56.f0.f0.f1", print_hash_value);
    transparent_crc(g_56.f0.f0.f2, "g_56.f0.f0.f2", print_hash_value);
    transparent_crc(g_56.f0.f0.f3, "g_56.f0.f0.f3", print_hash_value);
    transparent_crc(g_56.f0.f0.f4, "g_56.f0.f0.f4", print_hash_value);
    transparent_crc(g_56.f0.f1, "g_56.f0.f1", print_hash_value);
    transparent_crc(g_56.f0.f2, "g_56.f0.f2", print_hash_value);
    transparent_crc(g_56.f0.f3, "g_56.f0.f3", print_hash_value);
    transparent_crc(g_56.f0.f4, "g_56.f0.f4", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_177[i], "g_177[i]", print_hash_value);

    }
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_250.f0, "g_250.f0", print_hash_value);
    transparent_crc(g_250.f1, "g_250.f1", print_hash_value);
    transparent_crc(g_250.f2, "g_250.f2", print_hash_value);
    transparent_crc(g_250.f3, "g_250.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
