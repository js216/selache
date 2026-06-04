// SPDX-License-Identifier: MIT
// cctest_csmith_cc23bc96.c --- cctest case csmith_cc23bc96 (csmith seed 3424894102)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x13447ee1 */
/* @exp_ticks 0x8ea */

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

// Options:   -s 3424894102 -o /home/agent1/fast_data/tmp/csmith_gen_lvxrzg3e/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   uint32_t  f1;
   int64_t  f2;
   int16_t  f3;
   int32_t  f4;
   uint32_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint32_t  f0;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
};

union U3 {
   int16_t  f0;
   uint8_t  f1;
   const int16_t  f2;
   uint64_t  f3;
};

union U4 {
   struct S1  f0;
   int32_t  f1;
};


static int32_t g_8[4][1][1] = {{{(-8L)}},{{(-8L)}},{{(-8L)}},{{(-8L)}}};
static struct S1 g_32 = {0x266D9918L};
static uint32_t g_47 = 1UL;
static uint32_t g_69 = 0x2BED38BCL;
static uint8_t g_93 = 0xA9L;
static int32_t g_94 = 0L;
static struct S1 g_107 = {18446744073709551607UL};
static struct S0 g_108[2][3] = {{{0x45356EB8L,3UL,0x4AB6F82621F0273BLL,0x2431L,-1L,4294967295UL},{0x45356EB8L,3UL,0x4AB6F82621F0273BLL,0x2431L,-1L,4294967295UL},{7L,0x8C3FF06EL,0xF2C45E82407D1D32LL,0L,-1L,0x2223408EL}},{{0x45356EB8L,3UL,0x4AB6F82621F0273BLL,0x2431L,-1L,4294967295UL},{0x45356EB8L,3UL,0x4AB6F82621F0273BLL,0x2431L,-1L,4294967295UL},{7L,0x8C3FF06EL,0xF2C45E82407D1D32LL,0L,-1L,0x2223408EL}}};
static union U2 g_141[3] = {{0x0290027BL},{0x0290027BL},{0x0290027BL}};
static const int32_t g_196 = 1L;
static uint64_t g_214 = 0xE66C39933C14A6CCLL;
static int32_t g_219 = 0L;
static union U3 g_270 = {0xD5DDL};
static uint64_t g_281 = 8UL;
static uint16_t g_328 = 0x0BC3L;



static uint8_t  func_1(void);
static const struct S1  func_4(union U2  p_5);
static union U2  func_6(int16_t  p_7);
static int32_t  func_9(int32_t  p_10);




static uint8_t  func_1(void)
{ 
    int64_t l_2 = (-10L);
    int32_t l_3 = 0xA72C25FCL;
    struct S1 l_127 = {1UL};
    int32_t l_133 = 0x86320521L;
    int32_t l_167 = 0L;
    uint32_t l_169 = 0x18A23994L;
    int32_t l_170 = (-5L);
    struct S0 l_174 = {0x9BCA0A6BL,1UL,1L,0xD070L,2L,0x8E07C21FL};
    uint32_t l_197 = 18446744073709551612UL;
    int8_t l_217 = 0x35L;
    uint8_t l_282[5] = {0x94L,0x94L,0x94L,0x94L,0x94L};
    union U4 l_287 = {{0UL}};
    uint32_t l_290 = 0x27253172L;
    int i;
    if (l_2)
    { 
        int32_t l_147 = 0xA45322D5L;
        int32_t l_148[4][3][4] = {{{0x5E662131L,2L,0x847B8FC4L,1L},{0xE22E1184L,0x5E662131L,0xA1C6C081L,0xA0325BEDL},{0L,0xB74D902FL,0L,0xA0325BEDL}},{{0xA1C6C081L,0x5E662131L,0xE22E1184L,1L},{0x847B8FC4L,2L,0x5E662131L,0x5E662131L},{6L,6L,0x5E662131L,0L}},{{0x847B8FC4L,0xE7D1A18DL,0xE22E1184L,2L},{0x847B8FC4L,0xB74D902FL,2L,0xB74D902FL},{2L,0xB74D902FL,0x847B8FC4L,0x5E662131L}},{{0xB74D902FL,0xA1C6C081L,0L,2L},{6L,0xA0325BEDL,0xA0325BEDL,6L},{6L,0x5E662131L,0L,0xE7D1A18DL}}};
        int32_t l_149 = 0xB68F5B90L;
        int16_t l_168[1][5][1] = {{{0x61F2L},{6L},{0x61F2L},{6L},{0x61F2L}}};
        struct S0 l_173[3][4] = {{{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL},{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL},{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL},{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL}},{{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL},{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL},{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL},{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL}},{{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL},{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL},{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL},{-1L,4UL,0x30CF97334A1C8477LL,0x9590L,0x6FF864FFL,9UL}}};
        int i, j, k;
        if (l_3)
        { 
            l_127 = func_4(func_6(g_8[3][0][0]));
            for (g_107.f0 = 26; (g_107.f0 >= 17); --g_107.f0)
            { 
                uint32_t l_130 = 3UL;
                g_8[1][0][0] = 0L;
                return l_130;
            }
        }
        else
        { 
            uint8_t l_134 = 0x10L;
            l_133 = ((g_8[2][0][0] >= g_107.f0) ^ (safe_rshift_func_int8_t_s_u(0xE8L, 4)));
            ++l_134;
        }
        if ((safe_sub_func_uint8_t_u_u(253UL, (safe_sub_func_uint8_t_u_u((g_141[2] , (l_149 ^= ((g_93 || (safe_rshift_func_uint16_t_u_s((l_147 = (safe_mod_func_int8_t_s_s((!((g_108[1][0] , g_47) > 0x55L)), g_94))), l_148[0][1][2]))) & 0x44L))), l_148[2][2][3])))))
        { 
            uint32_t l_152[4][5] = {{0x291EF01FL,0UL,0x291EF01FL,0UL,0x291EF01FL},{0x3B8B36CBL,0x3B8B36CBL,0x3B8B36CBL,0x3B8B36CBL,0x3B8B36CBL},{0x291EF01FL,0UL,0x291EF01FL,0UL,0x291EF01FL},{0x3B8B36CBL,0x3B8B36CBL,0x3B8B36CBL,0x3B8B36CBL,0x3B8B36CBL}};
            int i, j;
            g_8[3][0][0] ^= (-1L);
            l_133 |= l_148[0][1][2];
            l_170 = ((((g_108[1][0].f0 ^ (safe_sub_func_uint8_t_u_u((l_152[2][3] ^ (safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((--g_93), (((((l_133 = (l_168[0][4][0] &= (l_167 |= (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((((safe_add_func_uint32_t_u_u(l_152[0][4], ((safe_lshift_func_uint8_t_u_u(0x1FL, g_94)) || l_152[2][0]))) , 1UL) ^ g_108[1][0].f5) >= l_148[0][1][3]) ^ l_148[0][1][2]) < g_69), l_133)), g_47))))) && l_133) < l_152[0][4]) ^ l_147) && 0xA4L))), g_8[3][0][0]))), l_3))) , 0x6CL) <= l_169) & 4294967288UL);
        }
        else
        { 
            int32_t l_182 = 0x44A0E0B1L;
            struct S0 l_186 = {-10L,0x1C24DCEBL,7L,0x2586L,-8L,7UL};
            for (g_69 = (-7); (g_69 >= 23); ++g_69)
            { 
                struct S1 l_175[2] = {{0x40A22E7CL},{0x40A22E7CL}};
                int i;
                l_173[2][2] = g_108[1][0];
                g_108[1][0] = l_174;
                l_175[0] = l_127;
            }
            if (g_8[0][0][0])
            { 
                struct S1 l_176 = {0x01F0A48DL};
                l_176 = g_32;
                g_8[3][0][0] ^= (safe_lshift_func_uint16_t_u_s((((l_176.f0 | ((!g_108[1][0].f5) | ((4L & g_93) ^ g_69))) || l_182) < 0UL), g_108[1][0].f5));
                l_173[2][2].f4 = l_3;
            }
            else
            { 
                uint32_t l_185[1];
                int32_t l_195[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_185[i] = 18446744073709551614UL;
                for (i = 0; i < 1; i++)
                    l_195[i] = 0x02D8EADAL;
                g_108[1][0].f4 = (g_8[3][0][0] |= (safe_rshift_func_uint8_t_u_u(((l_173[2][2].f4 = ((g_108[1][0].f0 != ((g_108[1][0].f5 = l_147) & g_93)) || (0xBEL <= g_108[1][0].f0))) <= 0x1BL), l_185[0])));
                l_186 = g_108[1][0];
                l_197 &= (((((((((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(g_8[3][0][0], (safe_div_func_int64_t_s_s(l_186.f2, ((l_173[2][2].f4 && (safe_rshift_func_int16_t_s_u((0x39L >= (-1L)), 3))) | g_108[1][0].f4))))) && l_185[0]), 4294967295UL)) ^ 0xD12BL) || 65535UL) & 0xB3C9AB74L) & l_195[0]) < l_195[0]) | g_8[3][0][0]) , (-1L)) , g_196);
            }
        }
    }
    else
    { 
        uint32_t l_215 = 0xA31894FCL;
        int32_t l_216 = 0x1D5E8061L;
        uint16_t l_218 = 0xA758L;
        g_8[3][0][0] = (safe_mul_func_int8_t_s_s(((((0x63973B462A51040BLL < (g_219 = (safe_mul_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((g_93 != (safe_div_func_int32_t_s_s((safe_mul_func_uint64_t_u_u((g_214 = g_108[1][0].f1), (l_216 = (l_215 = (l_174.f0 <= 0x68L))))), l_174.f1))) || l_217), g_108[1][0].f4)), 0x5A65L)), l_218)), l_218)) <= l_218) != l_217), g_32.f0)))) ^ l_218) , l_174.f4) , g_69), l_170));
        for (g_47 = (-2); (g_47 >= 33); g_47++)
        { 
            const uint8_t l_226 = 0UL;
            int32_t l_246 = (-1L);
            g_108[1][0].f4 = ((safe_add_func_uint8_t_u_u(0xA8L, ((g_93 = (safe_rshift_func_int8_t_s_u((l_226 || g_108[1][0].f2), ((+((g_214 = (safe_add_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(((g_8[3][0][0] = (l_218 < 0UL)) & 4294967293UL), g_93)) | 0x4E463A38L) ^ l_226), 0xB3L))) | g_141[2].f0)) == g_47)))) >= l_215))) == g_47);
            for (l_170 = (-26); (l_170 > 10); l_170 = safe_add_func_uint16_t_u_u(l_170, 9))
            { 
                uint32_t l_240[5][1][3];
                int32_t l_241 = 0L;
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_240[i][j][k] = 0x83B8C2FFL;
                    }
                }
                l_241 |= ((safe_rshift_func_uint8_t_u_s(l_226, (safe_mul_func_uint8_t_u_u((g_93 = 6UL), 0x90L)))) >= (((((safe_lshift_func_uint8_t_u_s((((2UL <= 0xD5L) > 1L) & 0x37L), 5)) > g_107.f0) ^ l_170) > 0xC0F13302F4F0B716LL) | l_240[2][0][1]));
                if (g_94)
                    continue;
                l_246 = (l_216 = ((0xBEFD1AA81CA9D7ADLL == l_133) ^ ((l_167 = (((safe_mul_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u(1UL, (g_108[1][0].f2 = l_241))) <= g_69) | g_141[2].f0), 1UL)) != (-1L)) || g_141[2].f0)) <= g_108[1][0].f0)));
            }
        }
    }
    for (l_174.f3 = (-21); (l_174.f3 < (-25)); l_174.f3--)
    { 
        uint64_t l_262 = 18446744073709551612UL;
        int32_t l_263[3];
        int i;
        for (i = 0; i < 3; i++)
            l_263[i] = 0xEE16C9F1L;
        if ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_263[0] = (((safe_lshift_func_int16_t_s_s((((l_174.f3 >= (g_108[1][0].f3 = g_108[1][0].f2)) & (((safe_add_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((+(safe_sub_func_uint16_t_u_u(((-1L) == g_108[1][0].f0), l_262))), 0xFCL)) >= g_94), 0x0AAFF5B7L)) ^ g_108[1][0].f0) , (-5L))) & l_262), 12)) >= 0UL) || g_69)), l_174.f0)), l_174.f5)))
        { 
            l_127 = func_4(g_141[2]);
        }
        else
        { 
            l_174.f4 = (safe_div_func_uint8_t_u_u((safe_add_func_int64_t_s_s(g_8[1][0][0], ((g_94 == (safe_mul_func_uint8_t_u_u((g_270 , (safe_mul_func_int16_t_s_s(l_174.f2, l_263[2]))), l_3))) != (-7L)))), l_263[0]));
        }
        g_8[2][0][0] = (safe_lshift_func_int8_t_s_u((l_217 != ((safe_rshift_func_int16_t_s_u((~l_174.f2), (+(((9L && ((safe_add_func_uint16_t_u_u((g_281 = (l_3 != g_69)), g_8[3][0][0])) >= l_282[1])) & (-7L)) & l_2)))) && 0x55L)), 4));
        if ((safe_mul_func_int8_t_s_s((l_262 ^ (l_263[1] >= (safe_sub_func_int64_t_s_s(((l_287 , ((safe_sub_func_int8_t_s_s(g_108[1][0].f1, 4L)) || l_263[0])) && g_108[1][0].f5), l_262)))), (-4L))))
        { 
            uint64_t l_293 = 4UL;
            uint16_t l_300[5][4] = {{2UL,1UL,2UL,2UL},{1UL,1UL,1UL,1UL},{1UL,2UL,2UL,1UL},{2UL,1UL,2UL,2UL},{1UL,1UL,1UL,1UL}};
            int i, j;
            for (l_170 = 1; (l_170 <= 4); l_170 += 1)
            { 
                ++l_290;
            }
            if (l_293)
                continue;
            for (g_93 = 0; (g_93 <= 0); g_93 += 1)
            { 
                l_300[3][2] &= (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_287 , 9L), (5L > ((safe_lshift_func_uint16_t_u_u(l_293, 3)) <= g_8[3][0][0])))), g_108[1][0].f0));
                g_8[3][0][0] = 0L;
            }
        }
        else
        { 
            uint32_t l_327 = 9UL;
            if (g_32.f0)
                break;
            l_167 = (((g_328 = (+(safe_rshift_func_int16_t_s_u((g_108[1][0].f3 = (((safe_rshift_func_int8_t_s_u((0x6B6C70E725F73CB7LL < (~((+(l_133 &= (safe_unary_minus_func_int64_t_s((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((4294967290UL != ((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((0UL | ((((safe_rshift_func_uint16_t_u_s(((g_270.f1 = (safe_sub_func_int64_t_s_s((g_270.f1 & g_270.f1), l_290))) , 1UL), g_108[1][0].f4)) & 0x726698EBL) , g_141[2].f0) < 0xAB0DL)) > 1L), 4UL)), 0xF923L)), 0x06A7L)) & g_196)) || g_107.f0), 0x94FDL)), g_281)), 0xE8L)), 0x269A4FFEL)))))) >= l_263[0]))), 7)) >= g_69) ^ 0x04124FB8L)), l_327)))) , g_69) != g_8[3][0][0]);
            g_108[1][0].f4 = ((((g_141[2] = func_6((((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_u(l_170, 14)))))), (safe_lshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(l_327, (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((-5L), 7)), ((safe_div_func_uint64_t_u_u(6UL, 0x9EAA28D7F8C02F5CLL)) == l_217))))) < g_107.f0), 1)))) <= 0x095E57CEDAFA9926LL) , 0x8151L))) , l_287.f0.f0) == g_108[1][0].f2) > g_107.f0);
        }
    }
    return l_282[0];
}



static const struct S1  func_4(union U2  p_5)
{ 
    struct S1 l_110[5][4][5] = {{{{18446744073709551610UL},{0xB61F0D97L},{18446744073709551610UL},{18446744073709551615UL},{0x38469119L}},{{0xD11DC8AEL},{1UL},{0x2AA92F95L},{0x55E833F8L},{0xB24C0330L}},{{0xB61F0D97L},{0x38469119L},{18446744073709551615UL},{18446744073709551615UL},{0xC51A8619L}},{{0UL},{0xBD5CD434L},{0x2AA92F95L},{0xB24C0330L},{0xFF31343AL}}},{{{1UL},{1UL},{18446744073709551610UL},{18446744073709551610UL},{1UL}},{{18446744073709551611UL},{0x64559AEFL},{0x55E833F8L},{0xD11DC8AEL},{0x8884C508L}},{{0xFC8F34B3L},{1UL},{18446744073709551615UL},{0xB61F0D97L},{0xF6D29B2AL}},{{0x2AA92F95L},{0x11D43F70L},{0xF0B9C9A9L},{0UL},{18446744073709551615UL}}},{{{0xFC8F34B3L},{0xF6126C60L},{18446744073709551615UL},{1UL},{18446744073709551612UL}},{{18446744073709551611UL},{0x4DE7F712L},{0x4DE7F712L},{18446744073709551611UL},{0x55E833F8L}},{{1UL},{18446744073709551615UL},{0xF6126C60L},{0xFC8F34B3L},{1UL}},{{0UL},{0xF0B9C9A9L},{0x11D43F70L},{0x2AA92F95L},{18446744073709551613UL}}},{{{0xB61F0D97L},{18446744073709551615UL},{1UL},{0xFC8F34B3L},{0x9D044D41L}},{{0xD11DC8AEL},{0x55E833F8L},{0x64559AEFL},{18446744073709551611UL},{0x64559AEFL}},{{18446744073709551610UL},{18446744073709551610UL},{1UL},{1UL},{18446744073709551615UL}},{{0xB24C0330L},{0x2AA92F95L},{0xBD5CD434L},{0UL},{18446744073709551611UL}}},{{{18446744073709551615UL},{18446744073709551615UL},{0x38469119L},{0xB61F0D97L},{0xD279C397L}},{{0x55E833F8L},{0x2AA92F95L},{1UL},{0xD11DC8AEL},{0x11D43F70L}},{{18446744073709551615UL},{18446744073709551610UL},{0xB61F0D97L},{18446744073709551610UL},{18446744073709551615UL}},{{0x37B03C32L},{0x55E833F8L},{9UL},{0xB24C0330L},{0UL}}}};
    int32_t l_121 = 0x69E6F5A3L;
    const int32_t l_126 = 0x512B8E93L;
    int i, j, k;
    for (g_93 = 0; (g_93 == 52); g_93 = safe_add_func_uint64_t_u_u(g_93, 3))
    { 
        struct S1 l_106 = {0x6A2B0204L};
        struct S0 l_109[5] = {{0x46C4C103L,0x77F6B348L,1L,0xBF6FL,-1L,0x12924758L},{0x46C4C103L,0x77F6B348L,1L,0xBF6FL,-1L,0x12924758L},{0x46C4C103L,0x77F6B348L,1L,0xBF6FL,-1L,0x12924758L},{0x46C4C103L,0x77F6B348L,1L,0xBF6FL,-1L,0x12924758L},{0x46C4C103L,0x77F6B348L,1L,0xBF6FL,-1L,0x12924758L}};
        int i;
        for (g_69 = (-11); (g_69 <= 49); g_69 = safe_add_func_int64_t_s_s(g_69, 4))
        { 
            g_107 = (g_32 = (p_5.f0 , l_106));
        }
        l_109[4] = g_108[1][0];
    }
    for (g_94 = 1; (g_94 >= 0); g_94 -= 1)
    { 
        struct S1 l_111 = {0UL};
        struct S1 l_112 = {0UL};
        l_112 = (l_111 = (g_107 = l_110[0][1][0]));
        for (g_69 = 0; (g_69 <= 1); g_69 += 1)
        { 
            union U4 l_117 = {{0UL}};
            int16_t l_118 = (-7L);
            l_118 = (safe_add_func_int32_t_s_s(p_5.f0, (safe_div_func_int8_t_s_s((g_108[1][0].f1 || (l_117 , ((((g_8[3][0][0] > l_117.f0.f0) != p_5.f0) || p_5.f0) | g_108[1][0].f4))), 0x15L))));
            if (l_112.f0)
                break;
            for (g_47 = 0; (g_47 <= 1); g_47 += 1)
            { 
                g_8[1][0][0] = p_5.f0;
            }
        }
    }
    g_108[1][0].f4 = (((((((g_108[1][0].f5 |= ((l_110[0][1][0].f0 >= g_108[1][0].f1) != (safe_sub_func_uint64_t_u_u((l_121 , ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(1UL, p_5.f0)), g_69)) < l_126)), g_8[3][0][0])))) <= l_126) | 0x6BFF233EL) , l_121) || l_121) , l_126) | l_126);
    return l_110[3][2][4];
}



static union U2  func_6(int16_t  p_7)
{ 
    int16_t l_11[5] = {0L,0L,0L,0L,0L};
    struct S1 l_33 = {0x8FFD0204L};
    int32_t l_38[2][5] = {{0x7FFFF975L,0x7FFFF975L,0x7FFFF975L,0xE12CDFD7L,0xE12CDFD7L},{0x00312349L,0xE12CDFD7L,0x00312349L,0x00312349L,0xE12CDFD7L}};
    union U3 l_46 = {0x75BBL};
    struct S0 l_98 = {6L,0xE48EC7F2L,8L,0x1DCCL,0x45740F15L,1UL};
    union U2 l_101[4][4][1] = {{{{-4L}},{{0x8AE3155DL}},{{-7L}},{{-7L}}},{{{0x8AE3155DL}},{{-4L}},{{0xC656C0C5L}},{{-4L}}},{{{0x8AE3155DL}},{{-7L}},{{-7L}},{{0x8AE3155DL}}},{{{-4L}},{{0xC656C0C5L}},{{-4L}},{{0x8AE3155DL}}}};
    int i, j, k;
    if (func_9(l_11[1]))
    { 
        uint16_t l_24[3][4][4] = {{{0x1589L,0x9961L,1UL,1UL},{0x1589L,0x1589L,65532UL,0UL},{0x8F9CL,1UL,0x1589L,7UL},{0x9961L,65530UL,0xAEDFL,0x1589L}},{{0x7F28L,65530UL,0x7F28L,7UL},{65530UL,1UL,0x4B26L,0UL},{0UL,0x1589L,0x9961L,1UL},{0UL,0x9961L,0x9961L,0UL}},{{0UL,7UL,0x4B26L,0x7F28L},{65530UL,0x8810L,0x7F28L,65532UL},{0x7F28L,65532UL,0xAEDFL,65532UL},{0x9961L,0x8810L,0x1589L,0x7F28L}}};
        int i, j, k;
        l_24[0][0][2]++;
    }
    else
    { 
        int64_t l_48 = (-1L);
        int32_t l_49 = 0xFF79C94DL;
        for (p_7 = 29; (p_7 >= 5); p_7 = safe_sub_func_int32_t_s_s(p_7, 5))
        { 
            uint8_t l_50[4][5] = {{0xF6L,0xF6L,0x7EL,0xCBL,0x7EL},{0xF6L,0xF6L,0x7EL,0xCBL,0x7EL},{0xF6L,0xF6L,0x7EL,0xCBL,0x7EL},{0xF6L,0xF6L,0x7EL,0xCBL,0x7EL}};
            int32_t l_51 = 8L;
            int i, j;
            if (p_7)
            { 
                uint32_t l_29 = 0UL;
                --l_29;
                l_33 = g_32;
                l_38[0][0] &= (safe_sub_func_uint32_t_u_u(p_7, (safe_sub_func_uint8_t_u_u(p_7, ((0xDFL || g_8[3][0][0]) && l_29)))));
            }
            else
            { 
                int32_t l_52[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_52[i] = 1L;
                l_51 = (safe_mul_func_uint16_t_u_u((((l_49 |= ((+4L) | ((safe_add_func_uint64_t_u_u(((g_8[0][0][0] ^ (g_47 = (safe_lshift_func_int8_t_s_s(((l_46 , (g_32.f0 || g_8[3][0][0])) || g_32.f0), g_32.f0)))) < g_8[3][0][0]), l_48)) && 0xE3A1L))) & p_7) != 255UL), l_50[1][1]));
                if (l_52[0])
                    continue;
                l_52[0] = ((l_38[1][2] = l_48) <= ((g_47 >= ((g_47 , 0L) < 65532UL)) ^ l_52[1]));
            }
        }
        l_49 = 0xE44E384CL;
    }
    if (((safe_mul_func_uint8_t_u_u(((((+(safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_s(g_32.f0, (p_7 != (safe_mul_func_int8_t_s_s(l_46.f1, 0x15L)))))))) , 1L) && (-1L)) , 1UL), p_7)) && 0x5AE7BE98L))
    { 
        int8_t l_61 = (-1L);
        int32_t l_62[4][3][2] = {{{3L,(-8L)},{3L,0xC26FF553L},{0x0C43CAE2L,0xC26FF553L}},{{3L,(-8L)},{3L,0xC26FF553L},{0x0C43CAE2L,0xC26FF553L}},{{3L,(-8L)},{3L,0xC26FF553L},{0x0C43CAE2L,0xC26FF553L}},{{3L,(-8L)},{3L,0xC26FF553L},{0x0C43CAE2L,0xC26FF553L}}};
        uint16_t l_63 = 0xBC07L;
        int i, j, k;
        l_63++;
    }
    else
    { 
        uint16_t l_68[4] = {0x04C6L,0x04C6L,0x04C6L,0x04C6L};
        int32_t l_72 = 0x61D8FC8FL;
        struct S0 l_99 = {0xF7AE5966L,0x8FC2E2BEL,0x8C9B47AF96686465LL,-1L,0x8F6A068BL,0x653E959BL};
        int i;
        l_38[1][3] = (safe_mod_func_uint8_t_u_u((((g_69 = (l_68[0] ^= p_7)) == (safe_rshift_func_int8_t_s_u((((l_72 & (((safe_sub_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(g_47, 7)), (((g_47 < 0xFE20FE05L) != g_47) , p_7))) == 0xDC0916D66C253094LL) > p_7), l_72)) , p_7) , g_32.f0)) >= 4294967289UL) < g_8[2][0][0]), g_32.f0))) == g_47), p_7));
        for (g_47 = (-6); (g_47 < 51); g_47 = safe_add_func_uint8_t_u_u(g_47, 4))
        { 
            uint16_t l_92[2];
            struct S0 l_100 = {-10L,0x981A8B47L,0L,0L,0L,3UL};
            int i;
            for (i = 0; i < 2; i++)
                l_92[i] = 0xD6B0L;
            if ((safe_lshift_func_uint8_t_u_u((g_47 ^ l_38[0][0]), 0)))
            { 
                struct S0 l_89[5] = {{0xB1FF20F6L,18446744073709551615UL,1L,1L,0xBCDCAF52L,0x1FEAE78DL},{0xB1FF20F6L,18446744073709551615UL,1L,1L,0xBCDCAF52L,0x1FEAE78DL},{0xB1FF20F6L,18446744073709551615UL,1L,1L,0xBCDCAF52L,0x1FEAE78DL},{0xB1FF20F6L,18446744073709551615UL,1L,1L,0xBCDCAF52L,0x1FEAE78DL},{0xB1FF20F6L,18446744073709551615UL,1L,1L,0xBCDCAF52L,0x1FEAE78DL}};
                int i;
                g_94 |= ((!(safe_sub_func_uint32_t_u_u(g_8[3][0][0], ((((safe_unary_minus_func_int16_t_s((g_8[2][0][0] != (g_93 = (safe_mod_func_int8_t_s_s((l_89[1] , (safe_rshift_func_int16_t_s_u(l_92[0], l_38[0][0]))), 1L)))))) || l_68[1]) == 18446744073709551609UL) > 7UL)))) ^ 0x9EL);
            }
            else
            { 
                int32_t l_97 = 0xA18D89BDL;
                g_8[1][0][0] = ((((p_7 = (l_72 = (p_7 , p_7))) | ((l_11[1] == (0xAAL >= l_68[0])) && l_97)) > l_46.f1) != g_93);
                if (l_92[0])
                    continue;
            }
            l_100 = (l_99 = l_98);
            if (p_7)
                continue;
        }
    }
    return l_101[0][2][0];
}



static int32_t  func_9(int32_t  p_10)
{ 
    int16_t l_22 = 0x3CEFL;
    int32_t l_23 = (-1L);
    l_23 |= (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(g_8[3][0][0], (safe_add_func_int64_t_s_s(((g_8[3][0][0] <= (safe_lshift_func_uint8_t_u_s(0x42L, (((safe_sub_func_uint64_t_u_u((0x3876A47CDEDFC3E8LL <= 0x6FC2E607D19FA553LL), 0x2F92E6C0B333EE67LL)) < g_8[1][0][0]) , 0x83L)))) && l_22), l_22)))) < l_22), l_22));
    return l_23;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_8[i][j][k], "g_8[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_108[i][j].f0, "g_108[i][j].f0", print_hash_value);
            transparent_crc(g_108[i][j].f1, "g_108[i][j].f1", print_hash_value);
            transparent_crc(g_108[i][j].f2, "g_108[i][j].f2", print_hash_value);
            transparent_crc(g_108[i][j].f3, "g_108[i][j].f3", print_hash_value);
            transparent_crc(g_108[i][j].f4, "g_108[i][j].f4", print_hash_value);
            transparent_crc(g_108[i][j].f5, "g_108[i][j].f5", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_141[i].f0, "g_141[i].f0", print_hash_value);

    }
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_270.f1, "g_270.f1", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
