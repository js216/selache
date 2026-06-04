// SPDX-License-Identifier: MIT
// cctest_csmith_188072b1.c --- cctest case csmith_188072b1 (csmith seed 411071153)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2ae03e55 */
/* @exp_ticks 0xaec */

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

// Options:   -s 411071153 -o /home/agent1/fast_data/tmp/csmith_gen_8ni2afln/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint32_t  f0;
   int64_t  f1;
   const uint64_t  f2;
   const uint32_t  f3;
   int64_t  f4;
   int32_t  f5;
};

struct S1 {
   uint64_t  f0;
   const int32_t  f1;
};

union U2 {
   const struct S0  f0;
   uint32_t  f1;
};


static int32_t g_2 = 1L;
static int64_t g_34[5][1][4] = {{{0x5CBF7935DB5A26CDLL,0xC1094D0E834AB462LL,0x5CBF7935DB5A26CDLL,0x5CBF7935DB5A26CDLL}},{{0xC1094D0E834AB462LL,0xC1094D0E834AB462LL,0xC93E32883E731E7BLL,0xC1094D0E834AB462LL}},{{0xC1094D0E834AB462LL,0x5CBF7935DB5A26CDLL,0x5CBF7935DB5A26CDLL,0xC1094D0E834AB462LL}},{{0x5CBF7935DB5A26CDLL,0xC1094D0E834AB462LL,0x5CBF7935DB5A26CDLL,0x5CBF7935DB5A26CDLL}},{{0xC1094D0E834AB462LL,0xC1094D0E834AB462LL,0xC93E32883E731E7BLL,0xC1094D0E834AB462LL}}};
static uint8_t g_35 = 0x0BL;
static int16_t g_39 = 0x7F20L;
static uint32_t g_64 = 0x6298A20BL;
static uint16_t g_81 = 0x4891L;
static int32_t g_82 = 0xDAA1C1E7L;
static uint32_t g_83[4][4] = {{0UL,0x1E831F07L,4294967292UL,4294967292UL},{1UL,1UL,0UL,4294967292UL},{0xB8C65540L,0x1E831F07L,0xB8C65540L,0UL},{0xB8C65540L,0UL,0UL,0xB8C65540L}};
static int32_t g_95[3] = {0x52762AA9L,0x52762AA9L,0x52762AA9L};
static int16_t g_99[4] = {1L,1L,1L,1L};
static int32_t g_105 = 7L;
static union U2 g_107 = {{18446744073709551615UL,0xA8358C8BF5EF5A3CLL,0x486E1DBD7B545DD4LL,4294967288UL,0xE66B6A1353FB5FCDLL,0xA05CCE5AL}};
static uint8_t g_108 = 0x8DL;
static uint32_t g_114 = 0xE6FC0668L;
static int16_t g_131 = 0xF8D7L;
static uint8_t g_132 = 0x2CL;
static uint16_t g_146 = 1UL;
static int16_t g_147 = 0x2B98L;
static uint32_t g_148[5][1][3] = {{{0UL,0UL,0UL}},{{18446744073709551614UL,18446744073709551614UL,18446744073709551614UL}},{{0UL,0UL,0UL}},{{18446744073709551614UL,18446744073709551614UL,18446744073709551614UL}},{{0UL,0UL,0UL}}};
static uint64_t g_157 = 1UL;
static int64_t g_164 = 0xAEEA3CE1FE0044E9LL;
static uint64_t g_167 = 0x0B1CAC37E68EC69DLL;
static int16_t g_187 = 0xCAC5L;



static uint16_t  func_1(void);
static uint16_t  func_9(uint16_t  p_10, struct S0  p_11, uint16_t  p_12, int64_t  p_13, union U2  p_14);
static uint16_t  func_19(const int32_t  p_20);
static uint32_t  func_28(int16_t  p_29, int32_t  p_30, int8_t  p_31, uint32_t  p_32, int32_t  p_33);




static uint16_t  func_1(void)
{ 
    int32_t l_110 = (-9L);
    uint8_t l_129[4][2] = {{0x3BL,0x3BL},{0x3BL,0x3BL},{0x3BL,0x3BL},{0x3BL,0x3BL}};
    union U2 l_186 = {{18446744073709551608UL,1L,18446744073709551615UL,7UL,0xB04089B8EC4C58FCLL,0xBA664A59L}};
    int32_t l_188[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_188[i] = 0xA4DF932BL;
    for (g_2 = (-24); (g_2 >= (-12)); ++g_2)
    { 
        const uint64_t l_21 = 5UL;
        struct S0 l_106 = {0xA79BCA12L,0x892B40E8EEE9D000LL,8UL,0xBD0F6480L,-2L,0x3F1ECA23L};
        int32_t l_130 = 0x3291AC2CL;
        if (((safe_add_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s(1L, 2)) , ((-1L) != func_9((g_105 |= (safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(func_19(l_21), g_34[3][0][0])), g_82))), l_106, g_2, g_2, g_107))), 0xC6D73AEC32A7D5B9LL)) , 0xB801CBC8L))
        { 
            uint32_t l_111 = 4294967289UL;
            int32_t l_125 = (-1L);
            uint64_t l_127 = 18446744073709551614UL;
            struct S1 l_155 = {18446744073709551612UL,0xB7620F8FL};
            if (l_110)
            { 
                ++l_111;
            }
            else
            { 
                g_114--;
            }
            for (g_81 = 0; (g_81 <= 3); g_81 += 1)
            { 
                int32_t l_126 = (-7L);
                int32_t l_128 = (-3L);
                int i, j;
                l_129[3][1] = ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_128 = (((l_126 |= ((safe_lshift_func_int16_t_s_s(0x6CB9L, g_83[g_81][g_81])) >= (safe_sub_func_uint16_t_u_u((l_125 = l_106.f5), (g_2 ^ g_64))))) & l_111) , l_127)), l_110)), g_83[g_81][g_81])) , g_107.f0.f3);
                if (g_107.f0.f1)
                    continue;
                return g_35;
            }
            if ((g_81 && g_99[3]))
            { 
                uint64_t l_145[1][2][3] = {{{0x80C45E7516BF4F60LL,0xE3EF0F463998E518LL,0x80C45E7516BF4F60LL},{0x80C45E7516BF4F60LL,0xE3EF0F463998E518LL,0x80C45E7516BF4F60LL}}};
                int i, j, k;
                l_130 |= 0x3B0CC831L;
                ++g_132;
                g_146 = (safe_sub_func_int32_t_s_s(1L, ((((safe_mul_func_int16_t_s_s((-1L), ((((l_130 = (safe_sub_func_uint8_t_u_u(g_107.f0.f2, (safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_145[0][0][2] < 0x2CL), 0x9FL)), l_145[0][1][2]))))) < g_114) , g_114) == l_129[2][1]))) , l_145[0][0][2]) != g_107.f0.f5) > l_145[0][0][2])));
            }
            else
            { 
                uint32_t l_156 = 4294967287UL;
                --g_148[4][0][1];
                g_157 = (((safe_div_func_uint16_t_u_u(((0x0149B903A6F6BFB3LL <= l_110) != (safe_mul_func_uint8_t_u_u(((((4L ^ ((l_155 , g_35) < g_82)) , l_106.f4) | g_82) || 255UL), 0x27L))), g_64)) || g_99[3]) || l_156);
                g_167 = (safe_mod_func_uint16_t_u_u(g_114, (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(g_164, 0x027CE1FAL)), (safe_rshift_func_int8_t_s_u(0x56L, l_125))))));
            }
        }
        else
        { 
            int32_t l_168 = 0xFB5A3837L;
            l_130 = ((((l_168 >= 0L) && ((g_147 = ((safe_mul_func_int8_t_s_s(g_146, (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((safe_add_func_int16_t_s_s((~(g_167 |= ((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((l_186 , 65532UL), g_107.f0.f5)) == 0L), 2)), l_186.f0.f1)), g_95[1])) & g_147))), l_106.f3)) < 0xA376BEBF0B67F160LL) != g_95[1]), 0x8BL)) < g_2), 3)))) < l_106.f0)) || l_168)) <= 0xE1L) > 4294967295UL);
            g_187 = 1L;
        }
        return l_188[2];
    }
    return l_188[2];
}



static uint16_t  func_9(uint16_t  p_10, struct S0  p_11, uint16_t  p_12, int64_t  p_13, union U2  p_14)
{ 
    uint32_t l_109 = 7UL;
    g_108 &= (-2L);
    return l_109;
}



static uint16_t  func_19(const int32_t  p_20)
{ 
    int64_t l_27 = 0xFC80AE7B1B0CADFBLL;
    int32_t l_94 = 7L;
    struct S1 l_98 = {0xB27750E480CDBF83LL,6L};
    union U2 l_102 = {{0UL,0L,18446744073709551612UL,4UL,1L,0x9FB00B42L}};
    g_95[1] = (safe_div_func_uint32_t_u_u(0UL, ((l_94 = (((safe_add_func_int16_t_s_s((((!(l_27 > p_20)) , func_28((l_27 && l_27), p_20, p_20, p_20, l_27)) , l_27), g_82)) , p_20) , 0x97E3L)) , g_39)));
    g_99[3] &= (((l_94 ^= ((((((safe_mul_func_int16_t_s_s((((l_98 , (((((-6L) || l_27) >= l_27) & g_34[0][0][1]) > l_98.f0)) != 0xCE7A6402L) | l_27), g_2)) != p_20) , (-9L)) >= l_27) > 65532UL) & p_20)) > 0xF0D848C1L) | l_98.f1);
    l_94 = (safe_mul_func_int8_t_s_s((((l_102 , g_82) >= ((p_20 != (18446744073709551608UL && 0UL)) || l_98.f1)) , 0x3BL), g_64));
    return g_81;
}



static uint32_t  func_28(int16_t  p_29, int32_t  p_30, int8_t  p_31, uint32_t  p_32, int32_t  p_33)
{ 
    uint64_t l_47 = 18446744073709551608UL;
    int32_t l_66 = 1L;
    int16_t l_86 = 9L;
    struct S0 l_91 = {0x20CCB086L,0xECCAC47384F12CA1LL,0xA55E9D0F7BDB4A0CLL,0x649A3464L,1L,0x50E27E8FL};
    uint16_t l_92 = 0x5B29L;
    int32_t l_93 = (-5L);
    for (p_30 = 0; (p_30 >= 0); p_30 -= 1)
    { 
        uint16_t l_38 = 0x384BL;
        uint64_t l_48[4] = {1UL,1UL,1UL,1UL};
        int i;
        if ((g_35 = p_31))
        { 
            p_33 = (p_30 > (0x631CD1AC8C6DCFF2LL != (p_32 | (safe_mod_func_uint32_t_u_u(g_34[2][0][1], l_38)))));
        }
        else
        { 
            p_33 |= (g_39 = p_31);
        }
        for (g_35 = 0; (g_35 <= 0); g_35 += 1)
        { 
            uint32_t l_53 = 0xF5D9AEB8L;
            int32_t l_54[4][5] = {{0xF7E48FFCL,0xF7E48FFCL,9L,0xF7E48FFCL,0xF7E48FFCL},{0xCFCCFF5FL,0xF7E48FFCL,0xCFCCFF5FL,0xCFCCFF5FL,0xF7E48FFCL},{0xF7E48FFCL,0xCFCCFF5FL,0xCFCCFF5FL,0xF7E48FFCL,0xCFCCFF5FL},{0xF7E48FFCL,0xF7E48FFCL,9L,0xF7E48FFCL,0xF7E48FFCL}};
            int32_t l_63 = 0L;
            int i, j;
            for (g_39 = 0; (g_39 >= 0); g_39 -= 1)
            { 
                int i, j, k;
                return g_34[(p_30 + 4)][p_30][(p_30 + 3)];
            }
            for (p_29 = 0; (p_29 >= 0); p_29 -= 1)
            { 
                uint16_t l_46 = 1UL;
                uint16_t l_65[3][4] = {{65529UL,1UL,65529UL,65529UL},{1UL,1UL,7UL,1UL},{1UL,65529UL,65529UL,1UL}};
                int i, j;
                p_33 &= ((p_31 != ((safe_div_func_int8_t_s_s((((((0x5584E2BBL <= ((safe_add_func_int64_t_s_s((safe_add_func_uint16_t_u_u(((0xE511AFD208DD2DC0LL <= (6UL < g_35)) == g_35), l_46)), g_34[0][0][3])) || 1L)) < l_47) , l_46) >= g_35) == g_35), l_48[0])) || 1UL)) , g_34[4][0][2]);
                l_66 = ((safe_div_func_int8_t_s_s(((g_39 & ((l_54[0][0] = (safe_lshift_func_int8_t_s_u(l_53, 7))) ^ ((((g_64 = (safe_sub_func_int32_t_s_s((l_63 = (!(((safe_unary_minus_func_uint64_t_u((((safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(p_29, 7)) <= (p_30 >= l_47)) && p_29), 0xA64BL)) ^ 7L) || g_34[2][0][0]))) , 0xA66B3E62993103D5LL) , 0x4B502D48012CFB79LL))), p_32))) > l_65[2][0]) || 0x2E769E88CDAF70C7LL) != 9UL))) , 5L), p_33)) < 0xEDA73889CFDD8C90LL);
                g_83[3][1] = ((safe_div_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((((safe_div_func_uint8_t_u_u(p_32, (safe_sub_func_uint8_t_u_u((((((safe_mul_func_uint8_t_u_u((((l_66 ^= (safe_add_func_uint16_t_u_u(((l_54[3][4] || l_65[0][0]) && ((g_81 = ((safe_add_func_uint64_t_u_u(p_33, g_34[2][0][1])) > p_32)) | g_34[0][0][2])), l_65[2][0]))) ^ 0x09A6D6C5L) & g_82), g_34[0][0][0])) | l_65[2][0]) == p_32) < l_47) != g_64), l_48[0])))) && p_30) || 0UL), p_33)) | l_65[2][3]), 18446744073709551610UL)) , (-2L));
            }
        }
    }
    l_93 &= ((safe_mul_func_int8_t_s_s((l_86 | g_35), (safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((4294967289UL || ((l_66 = ((((((l_91 , g_82) || 0xD0L) > 0xF9L) == p_30) > l_91.f0) <= 0x78B2L)) | p_33)) > g_83[1][0]), p_31)) <= p_32), l_92)))) >= 0xA74A0370FD57B232LL);
    return p_30;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_34[i][j][k], "g_34[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_83[i][j], "g_83[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_99[i], "g_99[i]", print_hash_value);

    }
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107.f0.f0, "g_107.f0.f0", print_hash_value);
    transparent_crc(g_107.f0.f1, "g_107.f0.f1", print_hash_value);
    transparent_crc(g_107.f0.f2, "g_107.f0.f2", print_hash_value);
    transparent_crc(g_107.f0.f3, "g_107.f0.f3", print_hash_value);
    transparent_crc(g_107.f0.f4, "g_107.f0.f4", print_hash_value);
    transparent_crc(g_107.f0.f5, "g_107.f0.f5", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_148[i][j][k], "g_148[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
