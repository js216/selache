// SPDX-License-Identifier: MIT
// cctest_csmith_ad201888.c --- cctest case csmith_ad201888 (csmith seed 2904561800)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd5d219d4 */
/* @exp_ticks 0x4df1 */

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

// Options:   -s 2904561800 -o /home/agent1/fast_data/tmp/csmith_gen_5e3wvkl3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int64_t  f0;
   int64_t  f1;
   int32_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int16_t  f0;
   uint8_t  f1;
   uint64_t  f2;
};
#pragma pack(pop)

union U2 {
   int64_t  f0;
   const int64_t  f1;
   int32_t  f2;
};


static int32_t g_3 = 0xB4B13281L;
static int32_t g_4 = 0x6EC17E5CL;
static struct S0 g_18 = {-9L,0x3EC58F5537C57F39LL,0L};
static union U2 g_24 = {0x17B38E5161E33ECDLL};
static int32_t g_47 = 0x27BC4A6BL;
static uint32_t g_50 = 4294967294UL;
static int8_t g_69 = (-1L);
static int32_t g_70 = 0xEBACA85EL;
static int32_t g_71 = (-8L);
static uint16_t g_72 = 0xBD6BL;
static uint32_t g_113 = 0UL;
static uint16_t g_134[4] = {1UL,1UL,1UL,1UL};
static int8_t g_140 = 0L;
static uint16_t g_141 = 0x92FAL;
static uint32_t g_187 = 0x04ADF116L;
static uint16_t g_188 = 0x3289L;
static struct S1 g_189 = {-1L,2UL,8UL};
static uint32_t g_208 = 0xF26BA33BL;



static struct S1  func_1(void);
static int32_t  func_7(int32_t  p_8, int64_t  p_9, int64_t  p_10, uint16_t  p_11);
static int8_t  func_14(int32_t  p_15, struct S0  p_16, int8_t  p_17);
static int32_t  func_19(union U2  p_20, int32_t  p_21, struct S0  p_22, uint32_t  p_23);




static struct S1  func_1(void)
{ 
    int32_t l_2[2][2];
    int16_t l_166 = (-10L);
    int32_t l_219 = 0x8026D626L;
    struct S1 l_221 = {-10L,0UL,18446744073709551611UL};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_2[i][j] = 0xD65121ACL;
    }
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { 
        int16_t l_13 = 0x3836L;
        int32_t l_173[2];
        uint8_t l_186 = 0xA5L;
        int i;
        for (i = 0; i < 2; i++)
            l_173[i] = 1L;
        for (g_4 = 0; (g_4 <= 1); g_4 += 1)
        { 
            int i, j;
            if (l_2[g_3][g_4])
                break;
        }
    }
    for (g_24.f2 = (-2); (g_24.f2 <= 18); ++g_24.f2)
    { 
        int32_t l_209 = 0x3B49664FL;
        int32_t l_216[5] = {7L,7L,7L,7L,7L};
        int i;
        for (g_71 = 17; (g_71 > (-11)); g_71--)
        { 
            int64_t l_207 = 8L;
            uint16_t l_217 = 0x7645L;
            int32_t l_218 = 7L;
            int32_t l_220[3][2][5] = {{{7L,0L,(-1L),0L,1L},{(-1L),(-10L),0L,0L,(-10L)}},{{(-10L),0L,(-1L),1L,1L},{(-1L),0L,1L,0x8A72973FL,8L}},{{0xBC268F25L,(-10L),(-10L),0xBC268F25L,0x8A72973FL},{(-1L),0L,1L,6L,0x8A72973FL}}};
            int i, j, k;
            for (g_188 = (-12); (g_188 >= 21); g_188 = safe_add_func_uint8_t_u_u(g_188, 9))
            { 
                l_209 = (safe_div_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(18446744073709551615UL, 0xF3E89965A7D26944LL)), (((((((safe_add_func_uint32_t_u_u(3UL, ((l_207 > g_208) >= 0x4CC4E5DE65A91684LL))) || l_207) || g_3) ^ 4294967288UL) , g_189.f2) > l_166) , g_140)));
                if (l_209)
                    continue;
            }
            if (l_2[0][0])
                continue;
            l_220[0][0][2] = (((g_18.f2 , (l_219 = ((safe_lshift_func_uint8_t_u_s(l_207, 1)) , (safe_rshift_func_uint16_t_u_s((l_218 ^= (safe_lshift_func_uint16_t_u_u((l_209 |= l_207), (l_216[0] < l_217)))), l_207))))) <= 0xE363CAE3F3AD76B0LL) <= 3L);
        }
    }
    return l_221;
}



static int32_t  func_7(int32_t  p_8, int64_t  p_9, int64_t  p_10, uint16_t  p_11)
{ 
    uint8_t l_169 = 0x12L;
    for (p_9 = 0; (p_9 <= 13); p_9 = safe_add_func_uint32_t_u_u(p_9, 1))
    { 
        g_24.f2 = p_8;
    }
    return l_169;
}



static int8_t  func_14(int32_t  p_15, struct S0  p_16, int8_t  p_17)
{ 
    uint32_t l_85[4];
    int32_t l_94 = (-1L);
    int32_t l_99 = 0x1E780F4AL;
    int32_t l_149 = (-1L);
    int32_t l_151 = 0x1A2CE7F3L;
    int32_t l_153 = 1L;
    uint32_t l_154[2][2];
    int i, j;
    for (i = 0; i < 4; i++)
        l_85[i] = 4294967295UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_154[i][j] = 0xC81AE910L;
    }
    if ((l_85[3] &= func_19(g_24, (~(-8L)), p_16, (((safe_sub_func_int32_t_s_s(((18446744073709551606UL | g_18.f2) == p_16.f1), p_16.f0)) , g_18.f2) && 0L))))
    { 
        uint8_t l_93 = 0xCBL;
        int32_t l_95[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_95[i][j] = 0xEB00D6BFL;
        }
        for (g_72 = 0; (g_72 <= 3); g_72 += 1)
        { 
            for (p_17 = 3; (p_17 >= 0); p_17 -= 1)
            { 
                int32_t l_92[4][2] = {{0xC8A6F198L,0xE83BB0DEL},{0xC8A6F198L,0xE83BB0DEL},{0xC8A6F198L,0xE83BB0DEL},{0xC8A6F198L,0xE83BB0DEL}};
                int i, j;
                p_15 = (p_16 , (((l_85[p_17] || ((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s((l_92[2][1] |= 0xF460CB50322C85E5LL), (l_93 = (l_85[p_17] || g_50)))), 65533UL)) < 0x0CD8B2F8L)) < g_18.f0) == p_17));
                l_94 = 0x3D7553AFL;
            }
            for (g_24.f2 = 3; (g_24.f2 >= 0); g_24.f2 -= 1)
            { 
                uint8_t l_98 = 0x94L;
                l_95[0][2] = g_18.f2;
                l_95[0][0] = (safe_add_func_int8_t_s_s(p_16.f1, (l_98 |= p_17)));
            }
        }
        g_71 = (l_99 != (safe_sub_func_uint32_t_u_u(l_85[1], ((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((p_16.f1 < l_95[0][2]), 9)), p_16.f0)) < p_17) >= 0xF70EF1A53783AD51LL) | 3L))));
    }
    else
    { 
        int64_t l_108[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
        int32_t l_112[1][3][1];
        uint32_t l_138 = 4294967294UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_112[i][j][k] = (-1L);
            }
        }
        if (l_99)
        { 
            int32_t l_118[4][2][5] = {{{0xCAF8AA5BL,(-1L),0xD75B2834L,0x76FD32FAL,0x76FD32FAL},{(-8L),0L,(-8L),1L,0x94F6C93EL}},{{0x19E39778L,0xC5736710L,0x76FD32FAL,0xC5736710L,0x19E39778L},{(-8L),0L,0L,(-10L),0L}},{{0xCAF8AA5BL,0xCAF8AA5BL,0x76FD32FAL,0x19E39778L,0x235839F2L},{0L,(-8L),(-8L),0L,0L}},{{0xC5736710L,0x19E39778L,0xD75B2834L,0xD75B2834L,0x19E39778L},{0L,(-8L),1L,0x94F6C93EL,0x94F6C93EL}}};
            int i, j, k;
            for (g_4 = (-12); (g_4 < 20); g_4 = safe_add_func_int64_t_s_s(g_4, 1))
            { 
                int64_t l_109 = 6L;
                int32_t l_110 = 0xFC8C377FL;
                int16_t l_111 = 0x7FF4L;
                g_113++;
            }
            p_15 = (l_108[2] != (((safe_rshift_func_uint8_t_u_u((g_24.f2 & (((((g_72 | 0UL) == 1UL) != g_4) <= 5L) ^ p_17)), l_118[0][0][3])) != 0xD8A0L) > 0xDB55L));
            for (g_70 = 0; (g_70 <= 18); g_70++)
            { 
                int8_t l_127 = 0x21L;
                int32_t l_139 = 0x5361ACFDL;
                p_15 = ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u((p_15 == (l_127 , ((((l_139 = (p_16.f1 ^= ((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((((safe_div_func_int32_t_s_s(((((--g_134[2]) && ((((p_16.f2 != (((~0x6A3B5EBDL) , g_4) ^ 8UL)) != g_69) , p_15) == l_138)) < l_85[3]) , 0xDD118ECCL), 0x7AE02F27L)) & p_16.f0) != 0xDE9004F71531938CLL) > 0x004DB1C9D1C1E51BLL) | 0x873CL), l_118[0][1][2])), l_99)) ^ l_118[0][1][2]))) , p_16.f0) != l_138) , 1UL))), 18446744073709551615UL)), l_85[3])), g_50)) > 0x9D76L);
                g_4 = l_127;
            }
        }
        else
        { 
lbl_160:
            g_141--;
        }
        for (g_4 = 0; (g_4 > (-17)); --g_4)
        { 
            int16_t l_150[2];
            int32_t l_152 = (-1L);
            int i;
            for (i = 0; i < 2; i++)
                l_150[i] = (-7L);
            if (p_17)
                break;
            if ((safe_rshift_func_int16_t_s_u((g_18 , 2L), 9)))
            { 
                int16_t l_148 = 0xF93AL;
                ++l_154[1][0];
            }
            else
            { 
                uint16_t l_157 = 0xD532L;
                ++l_157;
                if (g_3)
                    goto lbl_160;
            }
            for (l_153 = 0; (l_153 <= 3); l_153 += 1)
            { 
                int i;
                l_152 = (1UL != (safe_mul_func_uint8_t_u_u((!(safe_div_func_int64_t_s_s(((l_108[(l_153 + 1)] > ((l_151 && l_153) || 0x5B775008D736B769LL)) <= l_108[(l_153 + 1)]), 0x3B4E33999F76DDF6LL))), g_140)));
            }
        }
    }
    l_153 = g_47;
    return l_154[1][0];
}



static int32_t  func_19(union U2  p_20, int32_t  p_21, struct S0  p_22, uint32_t  p_23)
{ 
    uint32_t l_30[5][3];
    struct S0 l_38 = {1L,1L,-1L};
    int32_t l_48 = (-1L);
    struct S1 l_61 = {0x8559L,0xE7L,0x0008233887E981C3LL};
    int32_t l_64 = (-4L);
    int32_t l_65 = 0x27642088L;
    int32_t l_66 = 0x5A07F58EL;
    int32_t l_67 = (-1L);
    int32_t l_68[2][3][3] = {{{1L,1L,1L},{1L,1L,1L},{1L,1L,1L}},{{1L,1L,1L},{1L,1L,1L},{1L,1L,1L}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_30[i][j] = 4294967287UL;
    }
    for (p_20.f2 = 0; (p_20.f2 <= 2); p_20.f2 += 1)
    { 
        uint32_t l_31 = 0x9D95921BL;
        uint32_t l_39[4][3][4] = {{{0UL,0xC99CF48BL,6UL,0x6747B1D0L},{18446744073709551613UL,0xF8C0E5C5L,18446744073709551613UL,0x6747B1D0L},{6UL,0xC99CF48BL,0UL,0x7A065BBDL}},{{8UL,0xEE4F120BL,0xC99CF48BL,0xC99CF48BL},{1UL,1UL,0xC99CF48BL,18446744073709551613UL},{8UL,0xBEA8E434L,0UL,0xEE4F120BL}},{{6UL,0UL,18446744073709551613UL,0UL},{18446744073709551613UL,0UL,6UL,0xEE4F120BL},{0UL,0xBEA8E434L,8UL,18446744073709551613UL}},{{0xC99CF48BL,1UL,1UL,0xC99CF48BL},{0xC99CF48BL,0xEE4F120BL,8UL,0x7A065BBDL},{0UL,0xC99CF48BL,6UL,0x6747B1D0L}}};
        int32_t l_49 = (-1L);
        int32_t l_62 = 0x7AF82577L;
        int i, j, k;
        l_31 = l_30[3][0];
        for (p_22.f1 = 2; (p_22.f1 >= 0); p_22.f1 -= 1)
        { 
            int32_t l_63 = 1L;
            int i, j;
            l_39[2][1][2] = ((l_30[(p_20.f2 + 2)][p_22.f1] , (((safe_mod_func_int8_t_s_s(g_3, (l_30[2][1] , (((safe_mod_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(p_20.f2, 2)) < l_30[4][2]) , l_38) , l_31), 0xF554L)) == g_24.f1) ^ l_30[1][0])))) && l_30[(p_20.f2 + 2)][p_22.f1]) <= (-10L))) && p_20.f2);
            if (g_24.f2)
                continue;
            l_48 = ((safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s(((l_63 &= (safe_add_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(((g_50--) && (safe_sub_func_uint64_t_u_u(((((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(0xE879L, 15)), 2)) > (safe_sub_func_int64_t_s_s(((l_61 , 0x35L) < 255UL), p_22.f0))) ^ 1L) >= p_22.f1), p_23))), l_62)) >= 4294967289UL) || 0x8D7774CA6A66835ALL), g_24.f2))) | g_4), g_47)))) ^ g_24.f2);
        }
    }
    g_72--;
    l_66 = ((safe_add_func_uint16_t_u_u((((((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s(l_48, ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((g_24.f2 ^= (p_20.f2 = g_18.f2)) , (p_22.f1 && l_30[1][1])), g_72)), g_18.f2)) == l_61.f1))), l_66)) >= 0xA0A77380A6A08C46LL) < (-1L)) , l_38.f0) ^ l_61.f0), g_3)) | g_69);
    return p_20.f2;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_134[i], "g_134[i]", print_hash_value);

    }
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
