// SPDX-License-Identifier: MIT
// cctest_csmith_b6ee1d9b.c --- cctest case csmith_b6ee1d9b (csmith seed 3069058459)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2d0bdb51 */
/* @exp_ticks 0x6c56 */

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

// Options:   -s 3069058459 -o /tmp/csmith_gen_gfl6dgpx/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int8_t  f0;
   uint16_t  f1;
   uint16_t  f2;
};

struct S1 {
   uint8_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   struct S0  f3;
   uint32_t  f4;
   int32_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int16_t  f0;
   struct S0  f1;
   int16_t  f2;
};
#pragma pack(pop)

union U3 {
   int32_t  f0;
   int64_t  f1;
   int32_t  f2;
};

union U4 {
   const uint32_t  f0;
   int64_t  f1;
   struct S1  f2;
};


static int32_t g_3[2] = {2L,2L};
static int32_t g_12[1][4] = {{0xBF844BA9L,0xBF844BA9L,0xBF844BA9L,0xBF844BA9L}};
static int64_t g_22 = 0xD4FCE88636EEBCB1LL;
static int8_t g_26 = 0xF4L;
static int8_t g_36 = 0x1AL;
static int8_t *g_35 = &g_36;
static int64_t g_39 = (-1L);
static uint32_t g_40[5][7] = {{18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0xAECF93A2L,18446744073709551615UL},{18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,18446744073709551610UL},{0x6E743FD0L,18446744073709551615UL,0x6E743FD0L,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x6E743FD0L},{18446744073709551610UL,18446744073709551610UL,0x8C0F86F4L,18446744073709551610UL,18446744073709551610UL,0x8C0F86F4L,18446744073709551610UL}};
static uint32_t g_57 = 0UL;
static int32_t *g_60 = &g_12[0][1];
static uint8_t g_75[2] = {6UL,6UL};
static int64_t g_77 = (-1L);
static int64_t *g_76 = &g_77;
static uint16_t g_90[6][4] = {{0x1473L,65535UL,0x1473L,0x1473L},{0x0EB1L,0x1473L,0x1473L,0x0EB1L},{0x71D7L,0x1473L,65535UL,0x1473L},{0x1473L,0x7EEDL,65535UL,65535UL},{0x71D7L,0x71D7L,0x1473L,65535UL},{0x0EB1L,0x7EEDL,0x0EB1L,0x1473L}};
static struct S0 g_96 = {0xBAL,0xF2E6L,0x1A9BL};
static struct S0 *g_95 = &g_96;
static int8_t **g_106[5][7][2] = {{{&g_35,&g_35},{&g_35,&g_35},{&g_35,&g_35},{&g_35,&g_35},{(void*)0,&g_35},{&g_35,&g_35},{&g_35,&g_35}},{{&g_35,&g_35},{&g_35,&g_35},{(void*)0,&g_35},{&g_35,&g_35},{&g_35,&g_35},{&g_35,&g_35},{&g_35,&g_35}},{{(void*)0,&g_35},{&g_35,&g_35},{&g_35,&g_35},{&g_35,&g_35},{&g_35,&g_35},{(void*)0,&g_35},{&g_35,&g_35}},{{&g_35,&g_35},{&g_35,&g_35},{&g_35,&g_35},{(void*)0,&g_35},{&g_35,&g_35},{&g_35,&g_35},{&g_35,&g_35}},{{&g_35,&g_35},{(void*)0,&g_35},{&g_35,&g_35},{&g_35,&g_35},{&g_35,&g_35},{&g_35,&g_35},{(void*)0,&g_35}}};
static int8_t ***g_105 = &g_106[3][0][1];
static int8_t ****g_104 = &g_105;
static uint8_t g_123 = 0xA1L;
static int32_t g_141 = 0x4AE63F1CL;
static uint8_t g_143[2][3][6] = {{{0UL,5UL,5UL,0UL,0x1EL,2UL},{255UL,1UL,0xD5L,0x4AL,1UL,8UL},{0xD5L,254UL,0UL,255UL,1UL,255UL}},{{0x6AL,1UL,0x6AL,247UL,0x1EL,254UL},{2UL,5UL,0x1AL,8UL,255UL,0x1EL},{0x4AL,255UL,247UL,8UL,8UL,247UL}}};
static int32_t g_176 = 0x330629C9L;
static int64_t ***g_181[2] = {(void*)0,(void*)0};
static union U3 g_187[6] = {{-7L},{-7L},{-7L},{-7L},{-7L},{-7L}};
static uint64_t g_197 = 0xB9001CCCAE9527A1LL;
static union U4 g_216[6][6] = {{{0xFD75004CL},{0xFD75004CL},{0x6478E930L},{0xD6368174L},{0xB9BA10F6L},{0x6478E930L}},{{0xD6368174L},{0xB9BA10F6L},{0x6478E930L},{0xB9BA10F6L},{0xD6368174L},{0x6478E930L}},{{0xB9BA10F6L},{0xD6368174L},{0x6478E930L},{0xFD75004CL},{0xFD75004CL},{0x6478E930L}},{{0xFD75004CL},{0xFD75004CL},{0x6478E930L},{0xD6368174L},{0xB9BA10F6L},{0x6478E930L}},{{0xD6368174L},{0xB9BA10F6L},{0x6478E930L},{0xB9BA10F6L},{0xD6368174L},{0x6478E930L}},{{0xB9BA10F6L},{0xD6368174L},{0x6478E930L},{0xFD75004CL},{0xFD75004CL},{0x6478E930L}}};
static union U4 g_218 = {0x4AC5765BL};
static struct S1 g_224 = {1UL,4294967295UL,248UL,{0x88L,0xBD11L,0x0CFAL},0xBE31B953L,0L};
static uint32_t g_239 = 1UL;
static struct S2 g_295 = {-1L,{0xCFL,65529UL,0x23B8L},0x71DFL};
static int8_t *g_306 = &g_36;
static int16_t *g_329 = &g_295.f2;
static int16_t *g_331 = &g_295.f2;
static uint32_t g_380 = 18446744073709551615UL;
static struct S0 **g_431 = (void*)0;
static struct S0 ***g_430[2][1] = {{&g_431},{&g_431}};
static struct S0 ****g_429 = &g_430[0][0];
static int32_t g_457[2] = {0x25E926E4L,0x25E926E4L};
static union U4 *g_472 = &g_216[4][0];
static union U4 **g_471 = &g_472;
static uint8_t g_563[1][2] = {{5UL,5UL}};
static uint16_t g_581 = 0x4B6AL;
static uint16_t g_582 = 0xD5BDL;
static uint16_t g_583 = 0x8D43L;
static uint16_t g_584 = 0x8004L;
static uint16_t g_585 = 65535UL;
static uint64_t g_714 = 0x582774B564BED6B0LL;
static uint16_t **g_732 = (void*)0;
static uint16_t ***g_731 = &g_732;
static struct S2 *g_854 = &g_295;
static struct S2 **g_853 = &g_854;
static int32_t g_915 = 0x61479A96L;
static const uint32_t *g_951 = (void*)0;
static union U4 *g_964 = (void*)0;
static int32_t g_1059 = 0L;
static struct S1 *g_1082[6][5] = {{&g_224,&g_224,&g_224,&g_224,&g_224},{&g_216[4][0].f2,&g_216[4][0].f2,&g_216[4][0].f2,&g_216[4][0].f2,&g_216[4][0].f2},{&g_224,&g_224,&g_224,&g_224,&g_224},{&g_216[4][0].f2,&g_216[4][0].f2,&g_216[4][0].f2,&g_216[4][0].f2,&g_216[4][0].f2},{&g_224,&g_224,&g_224,&g_224,&g_224},{&g_216[4][0].f2,&g_216[4][0].f2,&g_216[4][0].f2,&g_216[4][0].f2,&g_216[4][0].f2}};
static union U4 ***g_1142 = &g_471;
static uint8_t g_1207[2] = {1UL,1UL};
static uint8_t *g_1213 = (void*)0;
static uint8_t **g_1212 = &g_1213;
static struct S0 *****g_1216 = (void*)0;
static const union U4 ****g_1242 = (void*)0;
static const union U4 **** const *g_1241[7] = {&g_1242,&g_1242,&g_1242,&g_1242,&g_1242,&g_1242,&g_1242};
static const union U4 g_1248[1] = {{0x6B545540L}};
static int16_t g_1256 = 0x28BCL;
static int64_t g_1264 = 0x444A896F8A21DF32LL;
static int64_t g_1265 = (-1L);
static int64_t g_1266[5] = {0xF2EE2F35F34DC655LL,0xF2EE2F35F34DC655LL,0xF2EE2F35F34DC655LL,0xF2EE2F35F34DC655LL,0xF2EE2F35F34DC655LL};
static int16_t * const *g_1313 = &g_331;
static int16_t * const **g_1312 = &g_1313;
static struct S1 g_1338 = {1UL,0x618FC1B2L,7UL,{0xA2L,65533UL,1UL},0x6197A8D3L,0x4FF60803L};
static int64_t ** const **g_1517 = (void*)0;
static int64_t ** const ***g_1516 = &g_1517;
static const struct S0 g_1664 = {-7L,3UL,0x98D5L};
static struct S1 ***g_1686 = (void*)0;
static struct S2 ***g_1776 = (void*)0;
static struct S2 ****g_1775 = &g_1776;
static struct S2 *****g_1774[7][1] = {{&g_1775},{&g_1775},{&g_1775},{&g_1775},{&g_1775},{&g_1775},{&g_1775}};
static int8_t g_1791 = 0xE7L;
static int32_t *g_1857 = (void*)0;



static uint8_t  func_1(void);
static struct S1  func_4(int8_t  p_5, struct S1  p_6, int16_t  p_7);
static int32_t  func_16(int8_t  p_17, int32_t * p_18, int32_t * p_19, union U4  p_20);
static int32_t * func_27(uint8_t  p_28, int32_t * p_29);
static struct S1  func_30(int64_t * const  p_31, int64_t * p_32);
static int64_t * const  func_33(int8_t * p_34);
static struct S2  func_41(struct S1  p_42, const uint32_t  p_43, int32_t  p_44, int32_t * p_45);
static struct S1  func_46(struct S2  p_47, uint32_t  p_48);




static uint8_t  func_1(void)
{ 
    uint16_t l_2[6][5] = {{65535UL,0x34D8L,0x34D8L,65535UL,0x34D8L},{65535UL,65535UL,65527UL,65535UL,65535UL},{0x34D8L,65535UL,0x34D8L,0x34D8L,65535UL},{65535UL,0x34D8L,0x34D8L,65535UL,0x34D8L},{65535UL,65535UL,65527UL,65535UL,65535UL},{0x34D8L,65535UL,0x34D8L,0x34D8L,65535UL}};
    struct S1 l_9 = {255UL,0x3BC4AEE5L,0x77L,{1L,1UL,0x9EA4L},0x59FF446CL,0x5FEC46BCL};
    int64_t l_10 = 1L;
    int32_t **l_1856[7];
    int i, j;
    for (i = 0; i < 7; i++)
        l_1856[i] = (void*)0;
    for (g_3[0] = 4; (g_3[0] >= 0); g_3[0] -= 1)
    { 
        int16_t l_8 = (-1L);
        struct S1 *l_1855[4] = {&g_1338,&g_1338,&g_1338,&g_1338};
        int i;
    }
    g_1857 = (g_60 = &g_12[0][2]);
    return g_1338.f0;
}



static struct S1  func_4(int8_t  p_5, struct S1  p_6, int16_t  p_7)
{ 
    int32_t *l_11 = &g_12[0][1];
    struct S1 l_15 = {0x7BL,0xDA73A151L,1UL,{-1L,0xA275L,0x7BC7L},0x56237581L,0x5F1871D0L};
    int64_t *l_21 = &g_22;
    int8_t *l_25[1];
    int64_t **l_754[4];
    int64_t **l_755 = (void*)0;
    int64_t **l_756 = &g_76;
    int64_t *l_757[5];
    union U4 l_1218 = {4294967290UL};
    union U4 ** const l_1810 = &g_964;
    struct S1 *l_1839 = &g_224;
    int32_t l_1841[6][7][5] = {{{(-9L),(-10L),0xF7EC7558L,0x8571CB4BL,0L},{(-1L),(-4L),0xF7EC7558L,(-1L),0x66A9CE5EL},{(-1L),1L,0x8EA143C5L,0L,0x0FB5C095L},{(-8L),(-1L),(-7L),0xED7FEFDDL,1L},{3L,0xF7EC7558L,0L,0x7A18F443L,0x8571CB4BL},{0L,3L,1L,0x0F74D457L,0L},{0x5B5CE3CCL,0xF93FF191L,0x8571CB4BL,0x8571CB4BL,0xF93FF191L}},{{0x7F62B7A6L,(-1L),0x17AA21F3L,0x361E69AEL,0x8571CB4BL},{0L,0x361E69AEL,0xA62FD5D1L,0xAC148C7FL,0x3CEF2658L},{(-9L),(-1L),0x7045F7F9L,0xEED1E0CFL,1L},{0L,4L,7L,(-1L),0x66A9CE5EL},{0x7F62B7A6L,(-1L),0L,0L,0L},{0x5B5CE3CCL,0x0F74D457L,(-8L),0xED7FEFDDL,(-1L)},{0L,4L,0x68771881L,1L,(-6L)}},{{3L,0L,1L,1L,0xC2E66663L},{(-8L),(-1L),0x66A9CE5EL,(-6L),0x361E69AEL},{(-1L),(-1L),3L,0xF93FF191L,0xEED1E0CFL},{(-1L),(-1L),0L,0xF93FF191L,0xD8F1C71AL},{(-9L),1L,0xF0342BB2L,(-6L),0x7A18F443L},{0L,0xF7EC7558L,0x92F2DF06L,1L,0x66A9CE5EL},{0L,(-1L),0xA62FD5D1L,1L,(-10L)}},{{3L,0x3CEF2658L,(-9L),0xED7FEFDDL,(-1L)},{(-10L),(-4L),0xEED1E0CFL,0L,0xEED1E0CFL},{0L,0L,1L,(-4L),0x66A9CE5EL},{8L,0xEED1E0CFL,4L,0x22B5E49FL,0x8571CB4BL},{(-1L),0xA62FD5D1L,0xA63EB2F0L,(-6L),9L},{0x7045F7F9L,0xEED1E0CFL,1L,0xED7FEFDDL,0xF7EC7558L},{0xC7E032DAL,0x9B50EA63L,(-1L),0L,0x9E7C2413L}},{{0xF0342BB2L,(-1L),(-4L),0xF0342BB2L,(-1L)},{0xED7FEFDDL,0x7045F7F9L,1L,(-7L),(-8L)},{1L,0xF7EC7558L,0x8D30ED6DL,(-8L),(-1L)},{0x5B5CE3CCL,7L,0x249CCF60L,0x9B50EA63L,0L},{0x9E7C2413L,0x5B5CE3CCL,0L,7L,(-1L)},{0xEE2F3387L,(-1L),9L,0L,(-1L)},{(-6L),0xA62FD5D1L,0x617B07A2L,0x68771881L,0L}},{{(-4L),0x68771881L,0x0FB5C095L,0x8571CB4BL,(-1L)},{0xC7E032DAL,(-9L),0xA62FD5D1L,0x22B5E49FL,(-8L)},{0xF7EC7558L,(-4L),1L,4L,(-1L)},{0xEED1E0CFL,0xF0342BB2L,3L,0x9E7C2413L,0x9E7C2413L},{0xEE2F3387L,7L,0xEE2F3387L,(-8L),0xF7EC7558L},{(-9L),(-4L),(-8L),3L,9L},{3L,0x9E7C2413L,0L,(-1L),0x8571CB4BL}}};
    uint16_t l_1843 = 0UL;
    int32_t **l_1847 = (void*)0;
    int32_t ***l_1846 = &l_1847;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_25[i] = &l_15.f3.f0;
    for (i = 0; i < 4; i++)
        l_754[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_757[i] = &g_77;
    (*l_11) &= g_3[0];
    for (p_6.f0 = 0; (p_6.f0 < 25); ++p_6.f0)
    { 
        return l_15;
    }
    if (func_16((g_26 ^= (((*l_21) ^= (*l_11)) | (safe_add_func_int16_t_s_s((*l_11), g_3[0])))), func_27(((func_30(((*l_756) = func_33(g_35)), l_757[0]) , (*g_60)) , (*l_11)), &g_3[0]), l_11, l_1218))
    { 
        return l_15;
    }
    else
    { 
        uint32_t l_1792 = 0UL;
        struct S2 ***l_1797[7] = {&g_853,&g_853,&g_853,&g_853,&g_853,&g_853,&g_853};
        struct S0 **l_1805 = &g_95;
        struct S1 l_1819 = {0x82L,0x9FF0087AL,0x99L,{0xABL,0x4246L,7UL},0x6903628DL,0xE51044BAL};
        int32_t l_1842 = (-9L);
        struct S0 ** const *l_1849 = &l_1805;
        struct S0 ** const **l_1848 = &l_1849;
        const union U4 l_1854 = {4294967295UL};
        int i;
        for (l_15.f1 = 2; (l_15.f1 == 25); ++l_15.f1)
        { 
            int64_t l_1790 = 1L;
            struct S0 **l_1804 = (void*)0;
            int8_t l_1806 = 0x6FL;
            uint32_t l_1826 = 0x8997957CL;
            const struct S1 l_1827 = {251UL,1UL,255UL,{-1L,3UL,0xD009L},4294967295UL,1L};
            int32_t *l_1840[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1840[i] = &g_457[1];
            for (g_295.f1.f0 = 0; (g_295.f1.f0 == 24); g_295.f1.f0++)
            { 
                int32_t *l_1788 = &g_457[0];
                int32_t *l_1789[4][4] = {{&g_457[0],&g_457[0],&g_141,&g_457[0]},{&g_457[0],&g_176,&g_176,&g_457[0]},{&g_176,&g_457[0],&g_176,&g_176},{&g_457[0],&g_457[0],&g_141,&g_457[0]}};
                uint64_t *l_1803[1];
                uint8_t ***l_1808 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1803[i] = &g_714;
                --l_1792;
                if ((*g_60))
                    continue;
                if ((*g_60))
                { 
                    struct S2 ****l_1798 = &l_1797[1];
                    uint8_t ** const *l_1807 = &g_1212;
                    g_187[0].f0 |= (l_1806 &= ((safe_add_func_int64_t_s_s(((*g_1775) == ((*l_1798) = l_1797[1])), (((((safe_div_func_int16_t_s_s(0xED84L, (safe_add_func_uint64_t_u_u(((void*)0 == l_1803[0]), ((p_6.f3.f0 = (l_1804 != l_1805)) && (*l_11)))))) == p_6.f3.f2) == p_5) == p_5) | 0x586D7ABEL))) , (*g_60)));
                    (*l_11) &= ((l_1807 != l_1808) <= (((p_7 , ((*g_329) |= 0x8B61L)) != 65532UL) && (+0L)));
                    if ((*g_60))
                        continue;
                    (*l_11) |= ((*l_1788) = ((void*)0 != l_1810));
                    g_141 ^= (*g_60);
                }
                else
                { 
                    return p_6;
                }
            }
            g_457[0] = (18446744073709551615UL <= ((*l_21) ^= (((*l_11) || (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_1792, ((0UL > 0L) | ((safe_lshift_func_int8_t_s_u((*g_306), 1)) <= (l_1819 , (*g_329)))))), (*g_35))), 0))) && (*g_306))));
            if (((1L && (4294967293UL != ((safe_mod_func_int64_t_s_s((((p_6.f2 > (safe_mod_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s((*l_11), 0x58B6L)) == 1L) | (g_218.f2.f3.f1 = ((*l_11) == p_5))), l_1826))) , p_6.f1) , (*l_11)), g_295.f1.f2)) == g_1338.f5))) & p_6.f3.f0))
            { 
                struct S1 *l_1828 = (void*)0;
                struct S1 *l_1829[5][2][3] = {{{&l_1819,(void*)0,(void*)0},{&g_224,(void*)0,(void*)0}},{{&l_1819,(void*)0,(void*)0},{&g_224,(void*)0,(void*)0}},{{&l_1819,(void*)0,(void*)0},{&g_224,(void*)0,(void*)0}},{{&l_1819,(void*)0,(void*)0},{&g_224,(void*)0,(void*)0}},{{&l_1819,(void*)0,(void*)0},{&g_224,(void*)0,(void*)0}}};
                int i, j, k;
                l_1819 = l_1827;
            }
            else
            { 
                if ((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u(l_1827.f3.f1, ((***g_1312) = ((--p_6.f3.f2) , p_7)))) <= p_6.f1), 5)) == (*l_11)), (p_6.f0 = p_6.f4))))
                { 
                    struct S1 **l_1838[4][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int i, j;
                    l_1839 = &l_1819;
                }
                else
                { 
                    if (l_1819.f2)
                        break;
                }
            }
            l_1843--;
        }
        (*l_11) = p_5;
        (*l_11) &= (0xA9L | ((void*)0 != l_1846));
        (*l_11) ^= ((***g_1312) != ((((void*)0 == l_1848) > (safe_rshift_func_uint8_t_u_u((((&g_714 != (void*)0) , p_6.f3.f0) != (safe_lshift_func_int8_t_s_u((l_1854 , 1L), p_5))), 3))) ^ p_6.f0));
        (*l_11) = p_6.f5;
    }
    return p_6;
}



static int32_t  func_16(int8_t  p_17, int32_t * p_18, int32_t * p_19, union U4  p_20)
{ 
    uint32_t l_1221 = 0x992083FDL;
    union U4 **l_1231 = (void*)0;
    union U4 **l_1232 = &g_964;
    uint32_t *l_1233 = &g_40[1][3];
    int32_t l_1234 = (-5L);
    const union U4 *****l_1240 = (void*)0;
    int64_t *l_1249 = &g_39;
    int64_t l_1252[3];
    int32_t l_1292 = 0xA3A9F3DDL;
    int32_t l_1293 = 0x0560BAD0L;
    int32_t l_1294 = 0x7C7E3597L;
    int32_t l_1298 = 0x80934771L;
    int32_t l_1299 = 1L;
    int32_t l_1300 = 0L;
    int32_t l_1301 = 0xC7A74E31L;
    int32_t l_1324 = (-8L);
    int32_t l_1325 = (-1L);
    uint8_t l_1326 = 0UL;
    uint16_t * const *l_1347 = (void*)0;
    uint16_t * const **l_1346[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1347,&l_1347,&l_1347,&l_1347,&l_1347},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    struct S2 l_1348 = {-1L,{1L,0x6816L,5UL},0x7B65L};
    int64_t l_1349 = 0xD0245E721A238DF5LL;
    struct S2 **l_1354 = &g_854;
    uint16_t l_1372 = 0x8809L;
    uint64_t l_1393 = 0x98FC7F64D889EAD1LL;
    int32_t l_1399[3];
    union U3 l_1415 = {-1L};
    uint8_t **l_1422 = &g_1213;
    int16_t l_1461[5] = {0x04D8L,0x04D8L,0x04D8L,0x04D8L,0x04D8L};
    int32_t l_1467 = 0x6207E837L;
    int8_t *****l_1483 = &g_104;
    union U3 *l_1488 = &g_187[0];
    union U3 *l_1489 = &g_187[0];
    int64_t ****l_1492 = &g_181[1];
    int64_t *****l_1491[5][7] = {{(void*)0,&l_1492,&l_1492,&l_1492,(void*)0,&l_1492,&l_1492},{&l_1492,&l_1492,(void*)0,&l_1492,(void*)0,&l_1492,(void*)0},{&l_1492,(void*)0,(void*)0,&l_1492,&l_1492,&l_1492,(void*)0},{(void*)0,&l_1492,&l_1492,(void*)0,&l_1492,&l_1492,(void*)0},{&l_1492,&l_1492,&l_1492,&l_1492,&l_1492,(void*)0,(void*)0}};
    int64_t l_1507 = 1L;
    int64_t ** const ***l_1518 = &g_1517;
    uint32_t l_1545[7] = {6UL,0UL,0UL,6UL,0UL,0UL,6UL};
    struct S0 ****l_1598 = &g_430[1][0];
    const uint64_t l_1631 = 18446744073709551615UL;
    int64_t l_1633 = 0x19D68300BD194B5DLL;
    int16_t **l_1683 = &g_331;
    int16_t ***l_1682[5][2] = {{&l_1683,&l_1683},{(void*)0,(void*)0},{(void*)0,&l_1683},{&l_1683,&l_1683},{&l_1683,&l_1683}};
    struct S1 *l_1684 = (void*)0;
    struct S1 *l_1685 = &g_216[4][0].f2;
    struct S1 ****l_1687 = &g_1686;
    int8_t * const *l_1708 = (void*)0;
    uint64_t l_1765 = 0x123842B78F4A3138LL;
    struct S2 ***l_1773 = (void*)0;
    struct S2 ****l_1772 = &l_1773;
    struct S2 *****l_1771 = &l_1772;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1252[i] = 0xEF440AB871F83F22LL;
    for (i = 0; i < 3; i++)
        l_1399[i] = 0xADC83838L;
    if ((l_1234 |= (safe_add_func_int32_t_s_s((l_1221 , (safe_add_func_int64_t_s_s(((!(safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_1221, (l_1221 | ((((*l_1233) &= (safe_sub_func_uint64_t_u_u((((*l_1232) = (void*)0) == &g_218), (((p_20.f0 & (p_17 | (*g_329))) ^ 0x04L) == 0x5DL)))) , 0xE648087A2C2A006ELL) | p_17)))), l_1221))) >= 1UL), l_1221))), 0xB1AD4E35L))))
    { 
        const union U4 *l_1247 = &g_1248[0];
        const union U4 **l_1246 = &l_1247;
        const union U4 ***l_1245 = &l_1246;
        const union U4 **** const l_1244 = &l_1245;
        const union U4 **** const *l_1243 = &l_1244;
        int64_t *l_1253 = &l_1252[1];
        int16_t *l_1254 = (void*)0;
        int16_t *l_1255 = &g_1256;
        int64_t * const *l_1268 = &l_1249;
        int64_t * const **l_1267 = &l_1268;
        struct S2 l_1269 = {0x7C1CL,{0x9CL,0x5379L,65530UL},0x768BL};
        struct S1 l_1270[7][4] = {{{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL}},{{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL}},{{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL}},{{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL}},{{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL}},{{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL}},{{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL},{1UL,8UL,0xB2L,{-3L,65535UL,3UL},0UL,0x0C1B17BEL}}};
        int32_t l_1295 = 0x25FD8CECL;
        int32_t l_1296 = 0x4231C1ECL;
        int32_t l_1297[6][5][4] = {{{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL}},{{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL}},{{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL}},{{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL}},{{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL}},{{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL},{0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL,0x5E5DF3ADL}}};
        int16_t **l_1315 = &g_329;
        int16_t ***l_1314 = &l_1315;
        uint16_t ***l_1344 = &g_732;
        int32_t l_1373 = 5L;
        struct S0 ***l_1403 = &g_431;
        struct S1 *l_1431 = &g_224;
        uint64_t l_1460 = 0x35BB01FB2C987D4DLL;
        int i, j, k;
        if ((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((((safe_unary_minus_func_uint64_t_u(18446744073709551615UL)) && ((**g_853) , (l_1240 == (l_1243 = g_1241[4])))) > ((*l_1255) = (l_1249 != (((((**g_853) , (((safe_mul_func_int8_t_s_s(0L, 250UL)) , l_1252[0]) < l_1252[0])) >= 0x960547FE89E1AAF2LL) & 65535UL) , l_1253)))), l_1221)), 0x51L)))
        { 
            return (*p_18);
        }
        else
        { 
            uint32_t l_1257 = 18446744073709551610UL;
            int32_t l_1290[3][3] = {{0xA85A51B3L,0xA85A51B3L,0xA85A51B3L},{0x1DF949F9L,6L,0x1DF949F9L},{0xA85A51B3L,0xA85A51B3L,0xA85A51B3L}};
            int32_t l_1323[6];
            int32_t **l_1329 = &g_60;
            uint16_t ****l_1345[7][1] = {{&l_1344},{&l_1344},{&l_1344},{&l_1344},{&l_1344},{&l_1344},{&l_1344}};
            union U3 l_1374 = {0x1F1A1FEAL};
            int16_t l_1375 = 0x25C6L;
            uint16_t l_1385[2][7][5] = {{{0UL,0UL,0UL,0UL,0UL},{0x0C13L,0x0C13L,0x0C13L,0x0C13L,0x0C13L},{0UL,0UL,0UL,0UL,0UL},{0x0C13L,0x0C13L,0x0C13L,0x0C13L,0x0C13L},{0UL,0UL,0UL,0UL,0UL},{0x0C13L,0x0C13L,0x0C13L,0x0C13L,0x0C13L},{0UL,0UL,0UL,0UL,0UL}},{{0x0C13L,0x0C13L,0x0C13L,0x0C13L,0x0C13L},{0UL,0UL,0UL,0UL,0UL},{0x0C13L,0x0C13L,0x0C13L,0x0C13L,0x0C13L},{0UL,0UL,0UL,0UL,0UL},{0x0C13L,0x0C13L,0x0C13L,0x0C13L,0x0C13L},{0UL,0UL,0UL,0UL,0UL},{0x0C13L,0x0C13L,0x0C13L,0x0C13L,0x0C13L}}};
            int32_t l_1388 = 8L;
            int32_t l_1418[4][5][4] = {{{0x547E9CB2L,0x547E9CB2L,0xF81283C1L,0xCDD40848L},{0x547E9CB2L,0x4A727BEBL,8L,0xCDD40848L},{0x4A727BEBL,0x547E9CB2L,8L,8L},{0x547E9CB2L,0x547E9CB2L,0xF81283C1L,0xCDD40848L},{0x547E9CB2L,0x4A727BEBL,8L,0xCDD40848L}},{{0x4A727BEBL,0x547E9CB2L,8L,8L},{0x547E9CB2L,0x547E9CB2L,0xF81283C1L,0xCDD40848L},{0x547E9CB2L,0x4A727BEBL,8L,0xCDD40848L},{0x4A727BEBL,0x547E9CB2L,8L,8L},{0x547E9CB2L,0x547E9CB2L,0xF81283C1L,0xCDD40848L}},{{0x547E9CB2L,0x4A727BEBL,8L,0xCDD40848L},{0x4A727BEBL,0x547E9CB2L,8L,8L},{0x547E9CB2L,0x547E9CB2L,0xF81283C1L,0xCDD40848L},{0x547E9CB2L,0x4A727BEBL,8L,0xCDD40848L},{0x4A727BEBL,0x547E9CB2L,8L,8L}},{{0x547E9CB2L,0x547E9CB2L,0xF81283C1L,0xCDD40848L},{0x547E9CB2L,0x4A727BEBL,8L,0xCDD40848L},{0x4A727BEBL,0x547E9CB2L,8L,8L},{0x547E9CB2L,0x547E9CB2L,0xF81283C1L,0xCDD40848L},{0x547E9CB2L,0x4A727BEBL,8L,0xCDD40848L}}};
            uint8_t **l_1423 = &g_1213;
            const int16_t l_1430[2] = {0L,0L};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1323[i] = 0x3E8F5C97L;
            (*p_19) = l_1257;
            for (g_218.f2.f2 = 0; (g_218.f2.f2 <= 1); g_218.f2.f2 += 1)
            { 
                int64_t * const l_1263[3][2] = {{&g_1265,&g_1264},{&g_1265,&g_1265},{&g_1264,&g_1265}};
                int64_t * const *l_1262 = &l_1263[2][0];
                int64_t * const **l_1261 = &l_1262;
                int64_t * const ***l_1260 = &l_1261;
                int32_t l_1291[3];
                uint32_t l_1302[6] = {18446744073709551615UL,0xA626902AL,0xA626902AL,18446744073709551615UL,0xA626902AL,0xA626902AL};
                uint32_t *l_1316 = &g_224.f1;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1291[i] = 0x88F3ECCDL;
                (*p_19) = l_1234;
                if ((safe_mul_func_uint16_t_u_u(0x44BEL, (0xA0L < (((*l_1260) = (void*)0) == l_1267)))))
                { 
                    (*g_95) = (*g_95);
                }
                else
                { 
                    struct S1 *l_1271 = (void*)0;
                    struct S1 *l_1272 = &g_216[4][0].f2;
                    int32_t *l_1273 = (void*)0;
                    int32_t *l_1274 = &g_12[0][1];
                    int32_t *l_1275 = &l_1234;
                    int32_t *l_1276 = &g_187[0].f0;
                    int32_t *l_1277 = (void*)0;
                    int32_t *l_1278 = &g_176;
                    int32_t *l_1279 = (void*)0;
                    int32_t *l_1280 = &g_457[0];
                    int32_t *l_1281 = &g_141;
                    int32_t *l_1282 = &g_457[1];
                    int32_t *l_1283 = (void*)0;
                    int32_t *l_1284 = &l_1234;
                    int32_t *l_1285 = &g_457[1];
                    int32_t *l_1286 = &g_12[0][0];
                    int32_t *l_1287 = &g_457[0];
                    int32_t *l_1288 = &g_12[0][0];
                    int32_t *l_1289[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1289[i] = (void*)0;
                    (*l_1272) = ((p_20 , l_1269) , l_1270[5][2]);
                    l_1302[1]--;
                    if (l_1257)
                        continue;
                }
                (*g_853) = (void*)0;
                l_1295 = (((l_1297[4][2][0] |= ((*l_1249) &= 0L)) , (g_187[5] , ((safe_mod_func_int16_t_s_s((*g_331), (*g_331))) , (-1L)))) || (((*l_1316) = ((!(((((*g_35) |= (safe_sub_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((l_1292 > ((l_1290[0][2] ^ g_1059) || (*g_329))) & (*p_19)) == g_1266[3]), 0x436EC0EDE9777859LL)), 0x62L))) != 0x5DL) , g_1312) == l_1314)) ^ g_714)) != 0x3DBFB209L));
                for (g_224.f3.f0 = 0; (g_224.f3.f0 <= 1); g_224.f3.f0 += 1)
                { 
                    int32_t *l_1317 = &l_1294;
                    int32_t *l_1318 = &l_1300;
                    int32_t *l_1319 = &l_1299;
                    int32_t *l_1320 = (void*)0;
                    int32_t *l_1321 = &l_1296;
                    int32_t *l_1322[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1322[i] = &l_1290[0][2];
                    ++l_1326;
                    (*l_1319) = (*g_60);
                    return (*p_19);
                }
            }
            (*l_1329) = &g_3[0];
            (*p_19) = (safe_mul_func_int8_t_s_s(1L, (p_20.f2.f2 = (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((func_46((l_1269.f1 , l_1348), (**l_1329)) , l_1270[5][2].f2), l_1349)) && l_1349) ^ (-2L)), l_1349)), p_17)))));
            if ((((l_1297[3][2][0] | (l_1294 |= (safe_add_func_int64_t_s_s((((safe_sub_func_int8_t_s_s((l_1354 == (((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((l_1221 >= (safe_rshift_func_int8_t_s_s(((*g_35) = (safe_mod_func_uint16_t_u_u((g_295.f1.f2 = (safe_unary_minus_func_uint16_t_u(p_17))), (l_1295 = ((**g_1313) & ((safe_div_func_uint64_t_u_u(l_1234, (safe_mod_func_int32_t_s_s((0xA60DL == p_20.f0), (*p_19))))) || p_17)))))), 7))), l_1372)) < l_1270[5][2].f1), l_1373)), 4)), 8L)) >= l_1269.f1.f1) , (void*)0)), p_17)) , l_1374) , 0L), l_1221)))) == l_1375) > l_1269.f1.f1))
            { 
                int32_t l_1378 = (-2L);
                uint8_t l_1382[2][6] = {{251UL,251UL,251UL,251UL,251UL,251UL},{251UL,251UL,251UL,251UL,251UL,251UL}};
                int32_t l_1389 = 1L;
                int32_t l_1390 = 8L;
                int32_t l_1391 = (-7L);
                int32_t l_1392 = 0xCC4B45D4L;
                uint16_t l_1400 = 0x45C9L;
                uint32_t l_1419[7][6] = {{0xA44BB937L,0x70D4122AL,0x000DEC88L,0xDFFDD282L,0xDFFDD282L,0x000DEC88L},{0xDFFDD282L,0xDFFDD282L,0x000DEC88L,0x70D4122AL,0xA44BB937L,0xA44BB937L},{0xDFFDD282L,0x70D4122AL,0x70D4122AL,0xDFFDD282L,0xA44BB937L,0x000DEC88L},{0xA44BB937L,0xDFFDD282L,0x70D4122AL,0x70D4122AL,0xDFFDD282L,0xA44BB937L},{0xA44BB937L,0x70D4122AL,0x000DEC88L,0xDFFDD282L,0xDFFDD282L,0x000DEC88L},{0xDFFDD282L,0xDFFDD282L,0x000DEC88L,0x70D4122AL,0xA44BB937L,0xA44BB937L},{0xDFFDD282L,0x70D4122AL,0x70D4122AL,0xDFFDD282L,0xA44BB937L,0x000DEC88L}};
                uint64_t *l_1421 = &g_714;
                uint8_t ***l_1424[7][6] = {{&g_1212,&l_1422,&l_1422,&g_1212,&l_1422,&l_1422},{&g_1212,&l_1422,&l_1422,&g_1212,&l_1422,&l_1422},{&g_1212,&l_1422,&l_1422,&g_1212,&l_1422,&l_1422},{&g_1212,&l_1422,&l_1422,&g_1212,&l_1422,&l_1422},{&g_1212,&l_1422,&l_1422,&g_1212,&l_1422,&l_1422},{&g_1212,&l_1422,&l_1422,&g_1212,&l_1422,&l_1422},{&g_1212,&l_1422,&l_1422,&g_1212,&l_1422,&l_1422}};
                int i, j;
lbl_1404:
                for (l_1301 = 0; (l_1301 <= (-29)); l_1301 = safe_sub_func_uint64_t_u_u(l_1301, 1))
                { 
                    const uint16_t l_1379 = 65535UL;
                    int32_t *l_1383 = &l_1298;
                    int32_t *l_1384[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1384[i] = &l_1290[0][2];
                    (*p_19) &= ((((0xE18EL & ((0x1EBA6712L || (l_1378 < p_17)) >= l_1379)) >= (safe_mod_func_uint16_t_u_u((((l_1292 = l_1270[5][2].f0) ^ 0xC771A622L) == l_1382[0][5]), 0x67A0L))) ^ l_1378) >= (**l_1329));
                    l_1385[0][2][3]--;
                    ++l_1393;
                    if ((*g_60))
                        continue;
                    (*l_1383) &= (-2L);
                }
                for (l_1299 = 18; (l_1299 < (-8)); l_1299 = safe_sub_func_uint64_t_u_u(l_1299, 8))
                { 
                    int32_t *l_1398[3][7][1] = {{{&l_1297[1][3][0]},{&g_176},{&g_176},{&l_1297[1][3][0]},{&l_1388},{&l_1297[1][3][0]},{&g_176}},{{&g_176},{&l_1297[1][3][0]},{&l_1388},{&l_1297[1][3][0]},{&g_176},{&g_176},{&l_1297[1][3][0]}},{{&l_1388},{&l_1297[1][3][0]},{&g_176},{&g_176},{&l_1297[1][3][0]},{&l_1388},{&l_1297[1][3][0]}}};
                    int i, j, k;
                    --l_1400;
                    (*g_429) = l_1403;
                    if (l_1374.f2)
                        goto lbl_1404;
                }
                g_457[0] &= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u((l_1399[1] = ((safe_sub_func_int16_t_s_s((*g_331), ((l_1415 , g_224.f3.f1) && l_1378))) > ((l_1418[0][3][3] == ((((g_915 , 0xE245C0ACL) & l_1391) , 0xBD06EEC4L) , 0L)) > 4UL))), 0xF0C0L)) , l_1382[0][5]), l_1419[6][2])), p_20.f0));
                if (((*p_19) = ((((((0x76ED3B78D114063DLL && p_17) <= p_20.f0) , ((safe_unary_minus_func_uint64_t_u((l_1421 == &g_714))) || ((l_1422 == (l_1423 = l_1423)) | (*g_329)))) ^ 0x4348A6E9L) | l_1400) || (*g_60))))
                { 
                    return (*g_60);
                }
                else
                { 
                    uint8_t *l_1427 = &g_143[1][1][3];
                    (*p_19) &= ((safe_lshift_func_uint16_t_u_s(((((*l_1423) = l_1427) == (void*)0) > ((safe_div_func_int16_t_s_s(((&g_105 == (g_187[0] , &g_105)) && (*g_60)), (l_1270[5][2] , l_1430[0]))) <= p_20.f0)), 15)) , (*p_18));
                    l_1431 = &g_224;
                }
                l_1234 = (safe_sub_func_int16_t_s_s((p_20.f0 || (**l_1329)), 2UL));
            }
            else
            { 
                for (g_218.f2.f5 = (-13); (g_218.f2.f5 <= 8); g_218.f2.f5 = safe_add_func_int32_t_s_s(g_218.f2.f5, 2))
                { 
                    return (*p_18);
                }
            }
        }
        g_176 |= ((*p_19) = ((l_1415.f2 | ((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((((*g_853) != (*l_1354)) , l_1270[5][2].f4), (~(((safe_div_func_uint8_t_u_u((~((safe_add_func_uint16_t_u_u(p_20.f0, ((0x18L == ((*g_35) |= (safe_mul_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((g_90[1][0]--), (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((l_1460 = 1UL), p_20.f0)), p_17)))), l_1297[4][2][0])) >= p_20.f0), p_17)) || l_1269.f1.f0), l_1270[5][2].f0)))) , l_1461[0]))) , p_20.f0)), p_20.f0)) & 0UL) < p_20.f0)))) != 0UL), p_20.f0)) , l_1298)) , l_1348.f1.f0));
        for (g_218.f2.f2 = 0; (g_218.f2.f2 < 37); g_218.f2.f2++)
        { 
            return (*g_60);
        }
    }
    else
    { 
        return (*g_60);
    }
    for (g_1338.f1 = 0; (g_1338.f1 <= 0); g_1338.f1 += 1)
    { 
        int8_t l_1464[1];
        int32_t *l_1465 = &l_1399[0];
        int32_t *l_1466[4] = {&l_1292,&l_1292,&l_1292,&l_1292};
        uint32_t l_1468 = 4294967289UL;
        int64_t *****l_1493 = &l_1492;
        uint32_t l_1529 = 0UL;
        struct S0 l_1543 = {-1L,0xF446L,0x0905L};
        uint8_t l_1595 = 0xA6L;
        uint64_t l_1622[4][5] = {{0x962FE870FECD574DLL,0x5CEC837909DD4410LL,0x962FE870FECD574DLL,0x5CEC837909DD4410LL,0x962FE870FECD574DLL},{0x6B09F1DAA43C9E13LL,0x6B09F1DAA43C9E13LL,18446744073709551615UL,18446744073709551615UL,0x6B09F1DAA43C9E13LL},{0x029D6DAF6CB69297LL,0x5CEC837909DD4410LL,0x029D6DAF6CB69297LL,0x5CEC837909DD4410LL,0x029D6DAF6CB69297LL},{0x6B09F1DAA43C9E13LL,18446744073709551615UL,18446744073709551615UL,0x6B09F1DAA43C9E13LL,0x6B09F1DAA43C9E13LL}};
        int32_t l_1626 = 6L;
        const struct S0 *l_1663 = &g_1664;
        int16_t *l_1679 = &l_1348.f2;
        int16_t ** const l_1678 = &l_1679;
        int16_t ** const *l_1677 = &l_1678;
        int16_t ** const **l_1676 = &l_1677;
        int16_t ** const *l_1681 = &l_1678;
        int16_t ** const **l_1680 = &l_1681;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1464[i] = 0xFEL;
        l_1468--;
        for (g_218.f2.f0 = 0; (g_218.f2.f0 <= 4); g_218.f2.f0 += 1)
        { 
            uint64_t *l_1484 = &g_714;
            union U3 *l_1485[4] = {&g_187[0],&g_187[0],&g_187[0],&g_187[0]};
            int32_t l_1490[3];
            int64_t l_1508[2][4][4] = {{{0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL},{0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL},{0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL},{0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL}},{{0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL},{0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL},{0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL},{0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL,0x84852469E4211FBELL}}};
            struct S2 l_1540 = {-4L,{0xBCL,65535UL,0UL},0x5706L};
            const union U4 ****l_1544 = (void*)0;
            struct S2 * const *l_1546[2][3];
            struct S2 * const **l_1547 = &l_1546[1][0];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1490[i] = 0L;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1546[i][j] = &g_854;
            }
            if (((*p_18) , (0xC4FA47B5L | (l_1349 ^ (((safe_rshift_func_int16_t_s_s((((safe_div_func_uint64_t_u_u(((*l_1484) |= (safe_div_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((((l_1415 , (safe_div_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u(((void*)0 == l_1483), (&g_104 != &g_104))) && (**g_1313)) | p_17) > p_20.f0), 0x43EDL))) > (*g_60)) | g_1256) & p_20.f0), p_20.f0)) , 0x73L), p_17))), l_1300)) & p_20.f0) | p_17), 9)) > l_1348.f1.f0) | p_20.f0)))))
            { 
                int i, j;
                (*g_95) = l_1348.f1;
                for (l_1348.f2 = 4; (l_1348.f2 >= 1); l_1348.f2 -= 1)
                { 
                    union U3 **l_1486 = (void*)0;
                    union U3 **l_1487[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1487[i][j] = (void*)0;
                    }
                    l_1489 = (l_1488 = l_1485[2]);
                    return l_1490[2];
                }
                l_1493 = l_1491[4][3];
            }
            else
            { 
                int64_t l_1494[7];
                int32_t l_1495 = 0x71835898L;
                int32_t l_1496 = 0xCE90D6C6L;
                int32_t l_1497 = (-8L);
                int64_t l_1498[5][5][4] = {{{(-2L),0L,(-1L),(-2L)},{0xC3F5DA6713D425F4LL,0x364B2C54982726F6LL,0xB6EB443322179F2CLL,(-1L)},{0xF5545F239D6C60B9LL,0x5437BCC3E2443B88LL,0x4618FC057CC8C0B3LL,0xBD3B7D64D78363A4LL},{(-9L),0x6C7B713337093063LL,0L,0x6F891241DB8ACAE5LL},{0x0750C5A15006C38CLL,(-1L),0xCBA2A2A1F68CA1BFLL,(-1L)}},{{0xB383AA879072C4FBLL,0xF5545F239D6C60B9LL,(-1L),0xC504C18E7C68704FLL},{0L,0L,0xB6EB443322179F2CLL,0xF5545F239D6C60B9LL},{5L,0L,0xFBA127179C9B68FFLL,0xFBA127179C9B68FFLL},{0x01D1C92BB0A8DBB2LL,5L,(-2L),(-9L)},{0xB6EB443322179F2CLL,0L,0x3F7F0315DF6D9BF5LL,0x0750C5A15006C38CLL}},{{0L,0xCBA2A2A1F68CA1BFLL,0x0FBE715AA8870375LL,0x3F7F0315DF6D9BF5LL},{(-1L),0xCBA2A2A1F68CA1BFLL,(-1L),0x0750C5A15006C38CLL},{0xCBA2A2A1F68CA1BFLL,0L,0x8986E4D81B8DE322LL,(-9L)},{1L,5L,0xBBE1E1946DCED51CLL,1L},{0L,0x03878D49CE664485LL,0xBD3B7D64D78363A4LL,8L}},{{0xFBA127179C9B68FFLL,0xBBE1E1946DCED51CLL,0x0FBE715AA8870375LL,0xFBA127179C9B68FFLL},{1L,8L,1L,0x95E56D49C8BA2932LL},{0x0750C5A15006C38CLL,0xC3F5DA6713D425F4LL,(-1L),(-9L)},{5L,(-1L),0x95E56D49C8BA2932LL,1L},{0L,0x6C7B713337093063LL,0L,0x95E56D49C8BA2932LL}},{{0xFBA127179C9B68FFLL,0xCBA2A2A1F68CA1BFLL,(-2L),0xB6EB443322179F2CLL},{0L,0xBBE1E1946DCED51CLL,0x8986E4D81B8DE322LL,0xCBA2A2A1F68CA1BFLL},{0x0FBE715AA8870375LL,0xC3F5DA6713D425F4LL,0x8986E4D81B8DE322LL,1L},{0L,(-1L),(-2L),(-6L)},{0xFBA127179C9B68FFLL,0L,0L,8L}}};
                int32_t l_1499 = 0L;
                int32_t l_1500 = (-1L);
                int32_t l_1501 = 9L;
                int32_t l_1502 = 0x6798B797L;
                int32_t l_1503 = 0L;
                int32_t l_1504 = 0x29627F21L;
                int32_t l_1505[5];
                int8_t l_1506[4][2] = {{(-5L),0xDCL},{0xDCL,(-5L)},{0xDCL,0xDCL},{(-5L),0xDCL}};
                uint8_t l_1509 = 255UL;
                int64_t ***l_1512 = (void*)0;
                int32_t **l_1513 = &l_1465;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_1494[i] = (-8L);
                for (i = 0; i < 5; i++)
                    l_1505[i] = 0L;
                l_1509--;
                (*l_1492) = l_1512;
                (*l_1513) = p_18;
            }
            l_1490[1] = (*p_18);
            for (g_239 = 0; (g_239 <= 4); g_239 += 1)
            { 
                return l_1490[2];
            }
            if (((*p_19) = (safe_rshift_func_uint16_t_u_u(0x2FF9L, 5))))
            { 
                if ((*p_19))
                    break;
                return (*p_19);
            }
            else
            { 
                uint8_t l_1519 = 255UL;
                int32_t l_1525[6][1][2] = {{{0x1974E4BDL,(-1L)}},{{0x1974E4BDL,0x1974E4BDL}},{{(-1L),0x1974E4BDL}},{{0x1974E4BDL,(-1L)}},{{0x1974E4BDL,0x1974E4BDL}},{{(-1L),0x1974E4BDL}}};
                int i, j, k;
                (*p_19) = (l_1493 == (l_1518 = g_1516));
                --l_1519;
                for (l_1292 = 1; (l_1292 <= 4); l_1292 += 1)
                { 
                    uint32_t l_1522 = 0xB39E70A1L;
                    (*p_19) ^= ((((void*)0 == &g_104) < p_20.f0) ^ l_1522);
                    if (l_1508[0][2][1])
                        break;
                }
                for (l_1298 = 0; (l_1298 <= 0); l_1298 += 1)
                { 
                    int32_t **l_1523 = &l_1465;
                    struct S1 **l_1524 = &g_1082[0][2];
                    int32_t l_1526 = 0xC43C0F6CL;
                    int8_t l_1527 = 1L;
                    int32_t l_1528[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1528[i] = 0x75F3C3A3L;
                    (*l_1523) = p_19;
                    if ((*p_19))
                        continue;
                    (*l_1524) = &g_1338;
                    ++l_1529;
                    l_1545[0] &= (safe_div_func_int64_t_s_s((((safe_mod_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((0x93F4252AL == (p_20.f0 , (safe_lshift_func_uint8_t_u_u(p_17, (l_1540 , (safe_mul_func_int16_t_s_s(((**g_1313) |= ((l_1543 , (g_187[(l_1298 + 5)] , l_1544)) != (void*)0)), (**l_1523)))))))), l_1519)) <= g_295.f1.f2), 4294967290UL)) == 0x1766AE312D2C1408LL) != p_17), g_224.f3.f0));
                }
                for (l_1348.f2 = 0; l_1348.f2 < 4; l_1348.f2 += 1)
                {
                    l_1485[l_1348.f2] = &g_187[0];
                }
            }
            (*l_1547) = l_1546[1][0];
        }
        for (g_295.f2 = 3; (g_295.f2 >= 0); g_295.f2 -= 1)
        { 
            int64_t l_1551 = 0x88C7696171CEE10CLL;
            uint32_t l_1560 = 4294967295UL;
            uint64_t *l_1565 = &g_197;
            int8_t l_1566 = 0xA2L;
            int64_t **l_1568 = &g_76;
            const struct S2 l_1572 = {0xDEACL,{5L,0xF14BL,65531UL},-9L};
            struct S0 *****l_1599 = &l_1598;
            uint32_t l_1600 = 0x39E0F6F4L;
            struct S0 l_1602[4] = {{0xC2L,1UL,0x50FCL},{0xC2L,1UL,0x50FCL},{0xC2L,1UL,0x50FCL},{0xC2L,1UL,0x50FCL}};
            int64_t *l_1630 = &g_187[0].f1;
            const int8_t l_1632 = 0x29L;
            int32_t l_1634 = 0x85C87CC2L;
            int32_t l_1635 = (-6L);
            int32_t l_1636 = 0L;
            const union U4 **l_1641 = (void*)0;
            int i;
        }
        (*p_19) = (((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((p_20.f0 & (~(l_1348.f1.f2 && l_1399[1]))) , l_1415.f2), (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((((*l_1680) = ((*l_1676) = (void*)0)) != (p_20.f0 , l_1682[0][0])) && (*l_1465)), p_20.f0)), 0x4C35L)))), p_17)) > l_1461[2]) || l_1507) , (*g_60)) , (*g_60));
    }
    (*l_1685) = func_46(l_1348, p_20.f0);
    (*l_1687) = g_1686;
    for (p_20.f2.f5 = 0; (p_20.f2.f5 <= 14); p_20.f2.f5 = safe_add_func_uint8_t_u_u(p_20.f2.f5, 3))
    { 
        uint32_t l_1690 = 0x7786C90DL;
        int8_t ****l_1691[4];
        uint32_t l_1696 = 0xD9091FB3L;
        uint32_t *l_1703 = &g_1338.f1;
        int32_t *l_1704 = &g_457[0];
        struct S1 ****l_1719 = &g_1686;
        int32_t l_1750 = 1L;
        int32_t l_1751 = 0x4A92CEAFL;
        int32_t l_1752 = 0L;
        int32_t l_1753 = 0xC23D5BC9L;
        int32_t l_1755 = 0xFD54C6A6L;
        int32_t l_1757[3][2][5] = {{{1L,0xDF033317L,0xD7510B42L,0xDF033317L,1L},{1L,0xDF033317L,0xD7510B42L,0xDF033317L,1L}},{{1L,0xDF033317L,0xD7510B42L,0xDF033317L,1L},{1L,0xDF033317L,0xD7510B42L,0xDF033317L,1L}},{{1L,0xDF033317L,0xD7510B42L,0xDF033317L,1L},{1L,0xDF033317L,0xD7510B42L,0xDF033317L,1L}}};
        uint32_t l_1759 = 0xA1C9CE52L;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1691[i] = &g_105;
        (*p_19) |= ((l_1293 = l_1690) | (((void*)0 == &p_18) > (((*l_1483) = l_1691[1]) == l_1691[1])));
        if (((((-4L) | (p_20.f0 == ((*l_1704) = (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((**l_1683) ^= ((l_1696 || (((safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((*p_19) = (*p_19)), ((*l_1703) ^= ((safe_sub_func_int32_t_s_s((0L || (((-1L) | 0UL) ^ (*g_35))), l_1348.f2)) ^ (-1L))))), p_20.f0)) , l_1399[0]) | 0x1102L)) == l_1298)), g_1338.f3.f1)), p_20.f0))))) | l_1252[0]) || 0L))
        { 
            return (*g_60);
        }
        else
        { 
            int8_t **l_1707 = &g_35;
            int8_t * const **l_1709 = &l_1708;
            int32_t l_1712[5];
            struct S1 *****l_1720 = &l_1687;
            struct S1 ****l_1722[1][3];
            struct S1 *****l_1721 = &l_1722[0][0];
            struct S1 ****l_1724 = &g_1686;
            struct S1 *****l_1723 = &l_1724;
            const struct S0 *l_1740 = &g_295.f1;
            int32_t l_1754[5][6][2] = {{{0x5C703D8AL,0x0E157A7FL},{(-1L),0x19590B49L},{1L,0x19590B49L},{(-1L),0x0E157A7FL},{0x5C703D8AL,0xD831E690L},{1L,0xCA9E79B1L}},{{1L,0xD831E690L},{0x5C703D8AL,0x0E157A7FL},{(-1L),0x19590B49L},{1L,0x19590B49L},{(-1L),0x0E157A7FL},{0x5C703D8AL,0xD831E690L}},{{1L,0xCA9E79B1L},{1L,0xD831E690L},{0x5C703D8AL,0x0E157A7FL},{(-1L),0x19590B49L},{1L,0x19590B49L},{(-1L),0x0E157A7FL}},{{0x5C703D8AL,0xD831E690L},{1L,0xCA9E79B1L},{1L,0xD831E690L},{0x5C703D8AL,0x0E157A7FL},{(-1L),0x19590B49L},{1L,0x19590B49L}},{{(-1L),0x0E157A7FL},{0x5C703D8AL,0xD831E690L},{1L,0xCA9E79B1L},{1L,0xD831E690L},{0x5C703D8AL,0x0E157A7FL},{(-1L),0x19590B49L}}};
            int64_t l_1758 = 0xF078DF589E795BB4LL;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1712[i] = 0x1D88807BL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1722[i][j] = &g_1686;
            }
            (*l_1704) |= (safe_mod_func_uint16_t_u_u(((l_1707 == ((*l_1709) = l_1708)) < 1UL), (((**l_1707) ^= (safe_mul_func_uint8_t_u_u(255UL, (l_1712[3] = 1UL)))) | ((g_75[0] | p_17) , l_1399[0]))));
            (*l_1704) &= ((0xB8L == l_1712[2]) | (&g_105 == &g_105));
            if (((*l_1704) == ((**l_1683) ^= (((((safe_rshift_func_int8_t_s_u((p_17 | (safe_sub_func_int64_t_s_s((*l_1704), (safe_lshift_func_int8_t_s_s((l_1507 != ((((*l_1720) = l_1719) == ((*l_1723) = ((*l_1721) = l_1719))) < (l_1712[3] <= (*p_19)))), 1))))), 6)) >= 0xA866D039L) | 0x26647DD46B075938LL) , &l_1707) == (**l_1483)))))
            { 
                struct S2 *****l_1725 = (void*)0;
                const struct S2 *l_1730 = &g_295;
                const struct S2 **l_1729 = &l_1730;
                const struct S2 ***l_1728 = &l_1729;
                const struct S2 ****l_1727 = &l_1728;
                const struct S2 *****l_1726 = &l_1727;
                int32_t l_1733 = 0x529268B4L;
                const struct S0 **l_1741 = &l_1740;
                int32_t *l_1742 = &g_457[0];
                int32_t *l_1743 = &g_12[0][2];
                int32_t *l_1744 = (void*)0;
                int32_t *l_1745 = &g_12[0][1];
                int32_t *l_1746 = &g_12[0][0];
                int32_t *l_1747 = &g_457[0];
                int32_t *l_1748 = (void*)0;
                int32_t *l_1749[4];
                int64_t l_1756 = (-6L);
                int i;
                for (i = 0; i < 4; i++)
                    l_1749[i] = &l_1294;
                (*l_1726) = (void*)0;
                for (l_1349 = 0; (l_1349 == 6); l_1349 = safe_add_func_uint64_t_u_u(l_1349, 2))
                { 
                    uint32_t l_1736 = 0x748D039CL;
                    (*l_1704) ^= l_1733;
                    (*p_19) = (*p_18);
                    (*l_1704) = ((safe_mul_func_int16_t_s_s(((p_20.f0 == ((p_17 , (-5L)) | (l_1736 > 18446744073709551615UL))) | (safe_lshift_func_uint16_t_u_s(1UL, (+0xB4L)))), p_20.f0)) >= l_1292);
                }
                (*l_1741) = l_1740;
                l_1759++;
                for (g_224.f3.f0 = 0; (g_224.f3.f0 <= 1); g_224.f3.f0 += 1)
                { 
                    int32_t **l_1762 = &l_1746;
                    (*l_1762) = p_18;
                    (*l_1743) = ((((safe_add_func_int8_t_s_s(l_1765, ((*l_1704) < (safe_lshift_func_int16_t_s_u(((~(p_17 != p_20.f0)) | ((g_1774[1][0] = l_1771) == &g_1775)), ((void*)0 == &g_854)))))) < (*l_1704)) && l_1754[2][1][0]) == (**l_1762));
                    (*l_1762) = &g_457[0];
                    if ((*g_60))
                        break;
                }
            }
            else
            { 
                int8_t l_1779 = 0x93L;
                (*l_1704) |= (safe_lshift_func_uint8_t_u_s(l_1779, 7));
                for (l_1752 = 23; (l_1752 >= 9); l_1752 = safe_sub_func_uint8_t_u_u(l_1752, 5))
                { 
                    int32_t *l_1782 = &g_12[0][1];
                    int32_t **l_1783 = &g_60;
                    (*l_1783) = l_1782;
                    (*l_1783) = p_18;
                    return (*p_18);
                }
                (*l_1704) = 0x5E4070A9L;
                return (*p_18);
            }
            (*l_1704) &= (*g_60);
        }
    }
    return (*p_18);
}



static int32_t * func_27(uint8_t  p_28, int32_t * p_29)
{ 
    struct S2 l_760[6][7][4] = {{{{0x6916L,{-1L,0UL,0x7F98L},0x3813L},{0xFD5AL,{2L,65535UL,1UL},-4L},{0xA8E8L,{-1L,4UL,0xF6DAL},-1L},{0x5EB3L,{0x61L,0x90CCL,0UL},-4L}},{{1L,{0x19L,0x3D6DL,0x55A0L},-8L},{0xEC9CL,{0xFBL,0x4CE4L,1UL},0L},{0xEE2AL,{-1L,65532UL,0xBA04L},0x0682L},{0x5EB3L,{0x61L,0x90CCL,0UL},-4L}},{{4L,{0x76L,0x164CL,0x3B72L},-3L},{0xFD5AL,{2L,65535UL,1UL},-4L},{-6L,{0x1CL,3UL,65530UL},-9L},{-1L,{0L,8UL,1UL},0x6754L}},{{0xD835L,{-1L,65535UL,3UL},-1L},{1L,{0xA7L,0x2EA2L,65532UL},0xE3A7L},{0xE498L,{0xACL,65535UL,65528UL},-2L},{0xEC9CL,{0xFBL,0x4CE4L,1UL},0L}},{{1L,{0xB4L,1UL,0x363BL},-1L},{-6L,{-2L,0x0361L,1UL},0x9FA1L},{0xC6BBL,{0x13L,0xEC1BL,0UL},0xBC1EL},{0x5E54L,{-1L,0xEE02L,0x698EL},0xD0E5L}},{{0x7F95L,{1L,0x9750L,0x894CL},0xBFF8L},{-1L,{0x78L,65533UL,0xC507L},0xF900L},{1L,{0xB4L,1UL,0x363BL},-1L},{-1L,{0x57L,0x7FC6L,0x666AL},-1L}},{{1L,{0x19L,0x3D6DL,0x55A0L},-8L},{6L,{0x51L,0xB075L,0xE7F0L},-10L},{0x8B6BL,{6L,0xD933L,0xD430L},1L},{0x6B43L,{1L,65535UL,0x8863L},0L}}},{{{-1L,{0L,8UL,1UL},0x6754L},{0x6916L,{-1L,0UL,0x7F98L},0x3813L},{0L,{0xCDL,4UL,0x1548L},0x36A9L},{1L,{0x05L,0x1FE5L,0xA1D2L},2L}},{{-1L,{0x7CL,65528UL,0x62E2L},0x941DL},{0xEC9CL,{0xFBL,0x4CE4L,1UL},0L},{0L,{5L,5UL,0x2350L},2L},{1L,{0xB4L,1UL,0x363BL},-1L}},{{-2L,{2L,0x8A98L,65530UL},0L},{0xBB18L,{1L,65528UL,65532UL},0x8D66L},{1L,{8L,0UL,65528UL},-4L},{-6L,{-2L,0x0361L,1UL},0x9FA1L}},{{-6L,{-2L,0x0361L,1UL},0x9FA1L},{0x8932L,{-1L,1UL,3UL},0xE7D4L},{1L,{1L,65533UL,0xD363L},-7L},{-2L,{9L,0xCE4AL,6UL},0L}},{{0L,{5L,5UL,0x2350L},2L},{1L,{0x4CL,0x6B5BL,65535UL},0xD506L},{-2L,{9L,0xCE4AL,6UL},0L},{1L,{0x4CL,0x6B5BL,65535UL},0xD506L}},{{0x91FBL,{6L,0xBACBL,0UL},0xB69CL},{0xD835L,{-1L,65535UL,3UL},-1L},{-8L,{0xB2L,65535UL,0x8750L},0xC3ADL},{-1L,{0x78L,65533UL,0xC507L},0xF900L}},{{0xB7AEL,{0xE5L,1UL,0UL},-1L},{-4L,{0x75L,0xBDD4L,65535UL},4L},{-2L,{2L,0x8A98L,65530UL},0L},{0x7FF7L,{0xD3L,65527UL,8UL},0x790DL}}},{{{0xB717L,{0x56L,0x0C44L,0x29D4L},0x0E4BL},{-1L,{0x57L,0x7FC6L,0x666AL},-1L},{0xCAA0L,{0xF7L,0xA14AL,65534UL},0xB706L},{0x9ADCL,{0xF1L,0x0546L,65532UL},0x38B2L}},{{0xB717L,{0x56L,0x0C44L,0x29D4L},0x0E4BL},{-1L,{7L,0x1D8AL,0x352BL},0x8366L},{-2L,{2L,0x8A98L,65530UL},0L},{0x3C7EL,{-5L,65530UL,1UL},0xB878L}},{{0xB7AEL,{0xE5L,1UL,0UL},-1L},{0x9ADCL,{0xF1L,0x0546L,65532UL},0x38B2L},{-8L,{0xB2L,65535UL,0x8750L},0xC3ADL},{0xCAA0L,{0xF7L,0xA14AL,65534UL},0xB706L}},{{0x91FBL,{6L,0xBACBL,0UL},0xB69CL},{0xB7AEL,{0xE5L,1UL,0UL},-1L},{-2L,{9L,0xCE4AL,6UL},0L},{0xFD5AL,{2L,65535UL,1UL},-4L}},{{0L,{5L,5UL,0x2350L},2L},{0xEE2AL,{-1L,65532UL,0xBA04L},0x0682L},{1L,{1L,65533UL,0xD363L},-7L},{-1L,{0x7CL,65528UL,0x62E2L},0x941DL}},{{-6L,{-2L,0x0361L,1UL},0x9FA1L},{1L,{0x39L,65535UL,0UL},0x5099L},{1L,{8L,0UL,65528UL},-4L},{0L,{0xCDL,4UL,0x1548L},0x36A9L}},{{-2L,{2L,0x8A98L,65530UL},0L},{1L,{8L,0UL,65528UL},-4L},{0L,{5L,5UL,0x2350L},2L},{0x4AF5L,{-1L,1UL,0x90A4L},0x72B9L}}},{{{-1L,{0x7CL,65528UL,0x62E2L},0x941DL},{0x8B6BL,{6L,0xD933L,0xD430L},1L},{0L,{0xCDL,4UL,0x1548L},0x36A9L},{0x5EB3L,{0x61L,0x90CCL,0UL},-4L}},{{-1L,{0L,8UL,1UL},0x6754L},{0xF558L,{0x99L,1UL,0xB70CL},0x00D6L},{0x8B6BL,{6L,0xD933L,0xD430L},1L},{0x8932L,{-1L,1UL,3UL},0xE7D4L}},{{1L,{0x19L,0x3D6DL,0x55A0L},-8L},{0x9D20L,{8L,2UL,65529UL},0x8FDBL},{1L,{0xB4L,1UL,0x363BL},-1L},{-2L,{2L,0x8A98L,65530UL},0L}},{{0x7F95L,{1L,0x9750L,0x894CL},0xBFF8L},{0x4AF5L,{-1L,1UL,0x90A4L},0x72B9L},{0xC6BBL,{0x13L,0xEC1BL,0UL},0xBC1EL},{0xC6BBL,{0x13L,0xEC1BL,0UL},0xBC1EL}},{{1L,{0xB4L,1UL,0x363BL},-1L},{1L,{0xB4L,1UL,0x363BL},-1L},{0xE498L,{0xACL,65535UL,65528UL},-2L},{0x9D20L,{8L,2UL,65529UL},0x8FDBL}},{{0xD835L,{-1L,65535UL,3UL},-1L},{0xB717L,{0x56L,0x0C44L,0x29D4L},0x0E4BL},{-6L,{0x1CL,3UL,65530UL},-9L},{1L,{0xA7L,0x2EA2L,65532UL},0xE3A7L}},{{0x5EB3L,{0x61L,0x90CCL,0UL},-4L},{0x7FF7L,{0xD3L,65527UL,8UL},0x790DL},{0x8932L,{-1L,1UL,3UL},0xE7D4L},{-6L,{0x1CL,3UL,65530UL},-9L}}},{{{0xC6BBL,{0x13L,0xEC1BL,0UL},0xBC1EL},{0x7FF7L,{0xD3L,65527UL,8UL},0x790DL},{0x5E54L,{-1L,0xEE02L,0x698EL},0xD0E5L},{1L,{0xA7L,0x2EA2L,65532UL},0xE3A7L}},{{0x7FF7L,{0xD3L,65527UL,8UL},0x790DL},{0xB717L,{0x56L,0x0C44L,0x29D4L},0x0E4BL},{-1L,{0x7CL,65528UL,0x62E2L},0x941DL},{0x9D20L,{8L,2UL,65529UL},0x8FDBL}},{{0xF558L,{0x99L,1UL,0xB70CL},0x00D6L},{1L,{0xB4L,1UL,0x363BL},-1L},{-6L,{-2L,0x0361L,1UL},0x9FA1L},{0xC6BBL,{0x13L,0xEC1BL,0UL},0xBC1EL}},{{0xEC9CL,{0xFBL,0x4CE4L,1UL},0L},{0x4AF5L,{-1L,1UL,0x90A4L},0x72B9L},{0xB717L,{0x56L,0x0C44L,0x29D4L},0x0E4BL},{-2L,{2L,0x8A98L,65530UL},0L}},{{0xB44CL,{0x7CL,0xB297L,0x8FBAL},0xA58EL},{0x9D20L,{8L,2UL,65529UL},0x8FDBL},{0xEE2AL,{-1L,65532UL,0xBA04L},0x0682L},{0x8932L,{-1L,1UL,3UL},0xE7D4L}},{{0x9ADCL,{0xF1L,0x0546L,65532UL},0x38B2L},{0xF558L,{0x99L,1UL,0xB70CL},0x00D6L},{1L,{0x19L,0x3D6DL,0x55A0L},-8L},{0x5EB3L,{0x61L,0x90CCL,0UL},-4L}},{{0xA8E8L,{-1L,4UL,0xF6DAL},-1L},{0x8B6BL,{6L,0xD933L,0xD430L},1L},{1L,{0x4CL,0x6B5BL,65535UL},0xD506L},{0x4AF5L,{-1L,1UL,0x90A4L},0x72B9L}}},{{{-4L,{0x75L,0xBDD4L,65535UL},4L},{1L,{8L,0UL,65528UL},-4L},{4L,{0x76L,0x164CL,0x3B72L},-3L},{0L,{0xCDL,4UL,0x1548L},0x36A9L}},{{-2L,{9L,0xCE4AL,6UL},0L},{1L,{0x39L,65535UL,0UL},0x5099L},{6L,{0x51L,0xB075L,0xE7F0L},-10L},{-1L,{0x7CL,65528UL,0x62E2L},0x941DL}},{{0xCAA0L,{0xF7L,0xA14AL,65534UL},0xB706L},{0xEE2AL,{-1L,65532UL,0xBA04L},0x0682L},{0xF558L,{0x99L,1UL,0xB70CL},0x00D6L},{0xFD5AL,{2L,65535UL,1UL},-4L}},{{0xBB18L,{1L,65528UL,65532UL},0x8D66L},{0xB7AEL,{0xE5L,1UL,0UL},-1L},{0xBB18L,{1L,65528UL,65532UL},0x8D66L},{0xCAA0L,{0xF7L,0xA14AL,65534UL},0xB706L}},{{1L,{0x39L,65535UL,0UL},0x5099L},{0x9ADCL,{0xF1L,0x0546L,65532UL},0x38B2L},{0x9D20L,{8L,2UL,65529UL},0x8FDBL},{0x3C7EL,{-5L,65530UL,1UL},0xB878L}},{{-6L,{0x1CL,3UL,65530UL},-9L},{-1L,{7L,0x1D8AL,0x352BL},0x8366L},{0L,{-10L,65535UL,1UL},0x8EB4L},{0x9ADCL,{0xF1L,0x0546L,65532UL},0x38B2L}},{{0x5E54L,{-1L,0xEE02L,0x698EL},0xD0E5L},{-1L,{0x57L,0x7FC6L,0x666AL},-1L},{0L,{-10L,65535UL,1UL},0x8EB4L},{0x7FF7L,{0xD3L,65527UL,8UL},0x790DL}}}};
    const union U3 l_781 = {7L};
    const int32_t l_782 = 8L;
    uint32_t *l_783 = &g_239;
    uint16_t l_784 = 1UL;
    int32_t *l_785 = &g_457[1];
    int32_t *l_786 = (void*)0;
    int32_t *l_787 = &g_187[0].f0;
    int64_t **l_810 = &g_76;
    int64_t ***l_809 = &l_810;
    union U3 l_823 = {0x998DB279L};
    const uint8_t * const l_833 = &g_563[0][1];
    const uint8_t * const *l_832 = &l_833;
    struct S2 * const *l_855 = &g_854;
    union U4 ***l_895 = (void*)0;
    union U4 ****l_894[6];
    int32_t l_902[1][3];
    int32_t l_924 = 0x0C95126EL;
    int64_t l_926[5] = {4L,4L,4L,4L,4L};
    int16_t l_927 = 0x3C88L;
    int64_t l_929 = 0xD9285ACCFD3BA915LL;
    uint16_t l_933 = 0xDA89L;
    int16_t l_936[7][1] = {{0L},{0x7DC5L},{0L},{0L},{0x7DC5L},{0L},{0L}};
    uint16_t l_956 = 0x89F9L;
    struct S0 ** const *l_1003 = &g_431;
    struct S0 ** const **l_1002 = &l_1003;
    int16_t **l_1015 = (void*)0;
    int8_t *l_1090 = &g_224.f3.f0;
    int32_t l_1108 = 0L;
    struct S1 l_1115 = {255UL,3UL,253UL,{0x6CL,0xB640L,6UL},4294967295UL,0L};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_894[i] = &l_895;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_902[i][j] = 0xBF082C04L;
    }
    if (((l_760[4][1][0] , g_187[1]) , ((*l_787) = (safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((((p_28 < ((l_760[4][1][0].f1.f2 >= (l_760[4][1][0].f1 , ((safe_rshift_func_uint16_t_u_s((((*l_785) = (((safe_add_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(((*l_783) = (safe_div_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(0x73L, 2)) | ((safe_add_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u(((((((l_781 , 1UL) < l_760[4][1][0].f1.f0) || 1L) | p_28) != (-3L)) ^ 65526UL), 1UL)) <= l_782), (-10L))) >= 0L)) == 0xAEE8426EF215258FLL), l_781.f2))), g_714)) , g_3[0]) , (*g_331)), l_784)) < l_781.f2) ^ l_781.f2)) & p_28), l_760[4][1][0].f0)) <= g_3[0]))) | p_28)) >= (*g_329)) | 0L), l_782)) == p_28), (*p_29))), p_28)))))
    { 
        union U4 l_794 = {0x65AAE91FL};
        int64_t **l_808 = &g_76;
        int64_t ***l_807 = &l_808;
        uint16_t *l_811 = &g_96.f2;
        union U3 *l_822[1][4][5] = {{{&g_187[0],&g_187[0],&g_187[0],&g_187[0],&g_187[0]},{&g_187[0],&g_187[0],&g_187[0],&g_187[0],&g_187[0]},{&g_187[0],&g_187[0],&g_187[5],&g_187[0],&g_187[0]},{&g_187[0],&g_187[0],&g_187[0],&g_187[0],&g_187[0]}}};
        uint64_t *l_826[7][7] = {{&g_714,&g_714,(void*)0,&g_714,&g_714,&g_714,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_714,&g_197,&g_714,&g_714,&g_714,&g_197,&g_714},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_714,&g_197,(void*)0,&g_197,&g_714,&g_197,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_714,&g_714,&g_714,&g_197,&g_714,&g_714,&g_714}};
        uint32_t *l_827 = &g_380;
        uint8_t *l_829 = &g_143[1][1][3];
        uint8_t **l_828 = &l_829;
        uint8_t ***l_830 = (void*)0;
        uint8_t ***l_831 = &l_828;
        struct S0 *l_842 = &g_224.f3;
        struct S2 l_852 = {0xB707L,{0x88L,65535UL,0xE8D0L},6L};
        int32_t l_871 = 0x403F07D2L;
        int8_t ****l_873 = &g_105;
        int32_t l_901 = 1L;
        int32_t l_903 = 0x1330E6ACL;
        int32_t l_905 = (-2L);
        int32_t l_908 = (-4L);
        int32_t l_911 = 1L;
        int32_t l_914[3];
        int16_t l_930 = 0x6F29L;
        int64_t l_937 = (-3L);
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_914[i] = (-3L);
lbl_885:
        (*l_785) |= (safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((l_794 , (-5L)), 6)), (((l_794.f0 ^ ((4294967294UL || (safe_mul_func_uint8_t_u_u(1UL, (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_28, (((((*l_811) = (safe_mul_func_uint16_t_u_u((l_807 != l_809), (*g_331)))) < 1UL) <= g_187[0].f0) , p_28))), 0x470EL)), 0xF8L)), (-1L)))))) , g_143[1][1][3])) , 7UL) || p_28))), (*g_329)));
        if ((safe_sub_func_uint16_t_u_u(((*l_785) = ((safe_add_func_int32_t_s_s(l_794.f0, (++(*l_783)))) , l_794.f0)), (safe_mul_func_uint16_t_u_u((((*l_831) = (func_46(l_760[0][5][3], ((*l_827) = (0UL < ((g_197 &= (safe_div_func_uint64_t_u_u((((l_823 = g_187[3]) , (safe_mod_func_uint32_t_u_u((0UL && p_28), 0x0A747DFEL))) & 1L), l_794.f0))) != 0L)))) , l_828)) == l_832), p_28)))))
        { 
            union U3 l_843 = {0xB447F249L};
            int32_t **l_844 = &g_60;
            for (g_224.f0 = 0; (g_224.f0 != 18); g_224.f0 = safe_add_func_uint16_t_u_u(g_224.f0, 9))
            { 
                struct S0 l_838[7][2] = {{{0x1AL,9UL,1UL},{0x19L,0x5658L,0UL}},{{0x19L,0x5658L,0UL},{0x1AL,9UL,1UL}},{{0x19L,0x5658L,0UL},{0x19L,0x5658L,0UL}},{{0x1AL,9UL,1UL},{0x19L,0x5658L,0UL}},{{0x19L,0x5658L,0UL},{0x1AL,9UL,1UL}},{{0x19L,0x5658L,0UL},{0x19L,0x5658L,0UL}},{{0x1AL,9UL,1UL},{0x19L,0x5658L,0UL}}};
                int i, j;
                for (g_218.f2.f1 = (-10); (g_218.f2.f1 <= 19); ++g_218.f2.f1)
                { 
                    struct S0 l_839 = {-4L,0x1DD7L,0x4483L};
                    struct S2 *l_840 = &l_760[3][2][0];
                    struct S0 **l_841[5][7][6] = {{{&g_95,(void*)0,(void*)0,&g_95,&g_95,&g_95},{&g_95,&g_95,(void*)0,(void*)0,&g_95,&g_95},{(void*)0,&g_95,&g_95,&g_95,&g_95,(void*)0},{(void*)0,(void*)0,&g_95,(void*)0,(void*)0,&g_95},{(void*)0,(void*)0,(void*)0,&g_95,&g_95,&g_95},{(void*)0,&g_95,&g_95,(void*)0,&g_95,&g_95},{&g_95,&g_95,(void*)0,&g_95,&g_95,&g_95}},{{&g_95,&g_95,&g_95,&g_95,&g_95,(void*)0},{(void*)0,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,(void*)0,&g_95,&g_95,&g_95},{(void*)0,(void*)0,(void*)0,&g_95,(void*)0,(void*)0},{&g_95,(void*)0,(void*)0,&g_95,&g_95,&g_95},{&g_95,&g_95,(void*)0,(void*)0,&g_95,&g_95},{(void*)0,&g_95,&g_95,&g_95,&g_95,(void*)0}},{{(void*)0,(void*)0,&g_95,(void*)0,(void*)0,&g_95},{(void*)0,(void*)0,(void*)0,&g_95,&g_95,&g_95},{(void*)0,&g_95,&g_95,(void*)0,&g_95,&g_95},{&g_95,&g_95,(void*)0,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,(void*)0},{(void*)0,&g_95,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,(void*)0,&g_95,&g_95,&g_95}},{{(void*)0,(void*)0,&g_95,(void*)0,&g_95,&g_95},{&g_95,&g_95,&g_95,(void*)0,&g_95,(void*)0},{&g_95,(void*)0,&g_95,&g_95,(void*)0,&g_95},{&g_95,(void*)0,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,&g_95,(void*)0},{&g_95,&g_95,&g_95,&g_95,(void*)0,(void*)0},{&g_95,&g_95,&g_95,&g_95,&g_95,(void*)0}},{{&g_95,(void*)0,&g_95,(void*)0,&g_95,(void*)0},{&g_95,&g_95,&g_95,(void*)0,&g_95,&g_95},{&g_95,(void*)0,&g_95,&g_95,&g_95,&g_95},{&g_95,&g_95,&g_95,&g_95,(void*)0,(void*)0},{&g_95,&g_95,&g_95,(void*)0,&g_95,&g_95},{&g_95,&g_95,&g_95,(void*)0,&g_95,(void*)0},{&g_95,(void*)0,&g_95,&g_95,(void*)0,&g_95}}};
                    int i, j, k;
                    l_839 = (l_838[6][0] = l_760[4][1][0].f1);
                    (*l_840) = g_295;
                    l_842 = (void*)0;
                    (*g_471) = ((l_823 = l_843) , &l_794);
                }
                (*l_787) &= ((*l_785) |= (*p_29));
                return &g_457[0];
            }
            (*l_844) = p_29;
        }
        else
        { 
            int32_t *l_851 = (void*)0;
            int32_t l_900 = 1L;
            int32_t l_906 = (-9L);
            int32_t l_909 = 1L;
            int32_t l_910 = 0xFC6251CCL;
            int32_t l_916 = 4L;
            int32_t l_917 = 1L;
            int32_t l_918 = 0L;
            int32_t l_920[7][1];
            int16_t l_925[1][7][5] = {{{0xD39DL,0xE673L,0xE673L,0xD39DL,0xE673L},{0xD39DL,0xD39DL,0xE6E1L,0xD39DL,0xD39DL},{0xE673L,0xD39DL,0xE673L,0xE673L,0xD39DL},{0xD39DL,0xE673L,0xE673L,0xD39DL,0xE673L},{0xD39DL,0xD39DL,0xE6E1L,0xD39DL,0xD39DL},{0xE673L,0xD39DL,0xE673L,0xE673L,0xD39DL},{0xD39DL,0xE673L,0xE673L,0xD39DL,0xE673L}}};
            struct S2 l_948 = {0xFF27L,{0xE1L,0x63B2L,0x21BDL},0xDAD9L};
            struct S1 *l_955[6][3][4] = {{{&g_224,&g_224,&g_224,&g_224},{&g_224,&g_224,(void*)0,(void*)0},{&g_224,&g_224,&g_224,&g_224}},{{&g_224,&g_224,&g_224,&g_224},{&g_224,&g_224,&g_224,&g_224},{&g_224,&g_224,(void*)0,(void*)0}},{{&g_224,&g_224,&g_224,&g_224},{&g_224,&g_224,&g_224,&g_224},{(void*)0,&g_224,&g_224,&g_224}},{{&g_224,(void*)0,&g_224,&g_224},{&g_224,&g_224,&g_224,&g_224},{&g_224,(void*)0,(void*)0,&g_224}},{{&g_224,&g_224,&g_224,&g_224},{&g_224,&g_224,&g_224,&g_224},{&g_224,&g_224,&g_224,(void*)0}},{{(void*)0,&g_224,&g_224,&g_224},{&g_224,&g_224,&g_224,&g_224},{(void*)0,&g_224,&g_224,&g_224}}};
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_920[i][j] = 0x907C97A8L;
            }
            if ((safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((*l_787), p_28)) && ((*l_783) = (safe_sub_func_uint32_t_u_u(g_224.f3.f1, ((**g_471) , (((l_852 , g_853) != l_855) == g_3[0])))))), (*g_329))))
            { 
                return p_29;
            }
            else
            { 
                int8_t *****l_872 = &g_104;
                int32_t l_884 = (-10L);
                uint32_t l_891 = 0xDC27D476L;
                int32_t l_907 = (-6L);
                int32_t l_912 = 0L;
                int32_t l_913[1];
                int32_t l_919[2][4][5] = {{{0L,0x15E6DFB1L,0L,0x15E6DFB1L,0L},{(-6L),0x3973D243L,0x3973D243L,(-6L),(-6L)},{0xF922C7D3L,0x15E6DFB1L,0xF922C7D3L,0x15E6DFB1L,0xF922C7D3L},{(-6L),(-6L),0x3973D243L,0x3973D243L,(-6L)}},{{0L,0x15E6DFB1L,0L,0x15E6DFB1L,0L},{(-6L),0x3973D243L,0x3973D243L,(-6L),(-6L)},{0xF922C7D3L,0x15E6DFB1L,0xF922C7D3L,0x15E6DFB1L,0xF922C7D3L},{(-6L),(-6L),0x3973D243L,0x3973D243L,(-6L)}}};
                uint32_t l_921 = 1UL;
                int32_t l_928 = 0x727C243CL;
                int32_t l_932 = 0L;
                int64_t l_938 = (-1L);
                struct S1 * const l_954 = &g_224;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_913[i] = 0x4EF92CA1L;
                l_871 = ((safe_mod_func_int16_t_s_s((p_28 | (safe_mod_func_uint8_t_u_u(p_28, (safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(((*l_811) = (safe_lshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u(((*g_331) < (~(safe_div_func_int64_t_s_s(p_28, p_28)))), g_39)) >= (0x92941DBB733C8AEBLL ^ p_28)), 5))), p_28)) && g_295.f0), g_3[0]))))), 0x5BAFL)) >= (*g_331));
                for (g_224.f5 = 0; g_224.f5 < 2; g_224.f5 += 1)
                {
                    g_181[g_224.f5] = &l_810;
                }
                if (((((*l_872) = &g_105) == (p_28 , l_873)) <= (safe_mod_func_uint16_t_u_u(((void*)0 != &g_187[4]), ((safe_div_func_int8_t_s_s(((((**l_828) = (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_884, ((**g_471) , g_582))), (*g_35))) >= 0x6AL), p_28))) & g_457[0]) , p_28), (*l_787))) && p_28)))))
                { 
                    int32_t **l_886 = &l_851;
                    union U4 *****l_896 = &l_894[5];
                    if (l_781.f2)
                        goto lbl_885;
                    (*l_785) = (((*l_886) = p_29) != (void*)0);
                    (*l_896) = ((((safe_lshift_func_int16_t_s_u(0xBF10L, ((((safe_add_func_uint16_t_u_u(l_891, ((g_295.f1.f0 , ((safe_div_func_int8_t_s_s(((((l_884 > ((*l_787) < g_75[0])) != ((*g_306) = l_871)) || p_28) && (**l_886)), p_28)) , (*l_873))) != (void*)0))) , g_582) , 0x1CC3L) & 0x6C5FL))) <= p_28) , p_28) , l_894[5]);
                }
                else
                { 
                    int32_t *l_897 = &l_871;
                    int32_t *l_898 = &g_141;
                    int32_t *l_899[4][2];
                    int32_t l_904 = (-5L);
                    int8_t l_931 = 1L;
                    uint64_t l_939 = 0x95975CA86D2C676BLL;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_899[i][j] = &g_141;
                    }
                    l_921--;
                    ++l_933;
                    l_939++;
                    (*l_898) = (safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((l_930 > (l_948 , ((p_28 , g_96.f1) < ((safe_add_func_int32_t_s_s(((g_224.f0 && ((g_951 = &g_57) == &g_239)) , 1L), l_914[1])) | g_57)))) , p_28), (*p_29))), 4294967293UL)) && 0xBC58L), l_938));
                    (*l_898) |= ((safe_add_func_uint8_t_u_u(p_28, (0x048BL < g_224.f3.f1))) != 9UL);
                }
                l_955[1][0][0] = l_954;
                (*l_785) = l_956;
            }
        }
    }
    else
    { 
        const int32_t * const l_961[3][5] = {{&g_176,&l_823.f0,&l_924,&l_823.f0,&g_176},{&g_176,&l_823.f0,&l_924,&l_823.f0,&g_176},{&g_176,&l_823.f0,&l_924,&l_823.f0,&g_176}};
        int32_t l_970 = (-1L);
        int32_t l_985[6];
        struct S0 l_987 = {-1L,0x06BEL,0x3781L};
        struct S2 l_1001 = {-10L,{-6L,65535UL,1UL},0x61EDL};
        struct S0 ***l_1006[4];
        int32_t **l_1083 = &l_786;
        const struct S1 *l_1128 = &g_224;
        const struct S1 **l_1127 = &l_1128;
        uint16_t ***l_1165[7][6] = {{&g_732,&g_732,&g_732,&g_732,&g_732,&g_732},{&g_732,&g_732,&g_732,&g_732,&g_732,&g_732},{&g_732,&g_732,&g_732,&g_732,&g_732,&g_732},{&g_732,&g_732,&g_732,&g_732,&g_732,&g_732},{&g_732,&g_732,&g_732,&g_732,&g_732,&g_732},{&g_732,&g_732,&g_732,&g_732,&g_732,&g_732},{&g_732,&g_732,&g_732,&g_732,&g_732,&g_732}};
        int i, j;
        for (i = 0; i < 6; i++)
            l_985[i] = 0xE3483E85L;
        for (i = 0; i < 4; i++)
            l_1006[i] = (void*)0;
    }
    return p_29;
}



static struct S1  func_30(int64_t * const  p_31, int64_t * p_32)
{ 
    const int32_t *l_758 = &g_12[0][2];
    const int32_t **l_759 = &l_758;
    (*l_759) = l_758;
    return g_224;
}



static int64_t * const  func_33(int8_t * p_34)
{ 
    uint32_t l_37 = 0x27BE6278L;
    int64_t *l_72 = &g_39;
    struct S2 l_78[6][3] = {{{0x21ADL,{0L,0x6093L,4UL},0x996AL},{0x21ADL,{0L,0x6093L,4UL},0x996AL},{0x21ADL,{0L,0x6093L,4UL},0x996AL}},{{9L,{6L,0x4804L,0xAE35L},1L},{9L,{6L,0x4804L,0xAE35L},1L},{9L,{6L,0x4804L,0xAE35L},1L}},{{0x21ADL,{0L,0x6093L,4UL},0x996AL},{0x21ADL,{0L,0x6093L,4UL},0x996AL},{0x21ADL,{0L,0x6093L,4UL},0x996AL}},{{9L,{6L,0x4804L,0xAE35L},1L},{9L,{6L,0x4804L,0xAE35L},1L},{9L,{6L,0x4804L,0xAE35L},1L}},{{0x21ADL,{0L,0x6093L,4UL},0x996AL},{0x21ADL,{0L,0x6093L,4UL},0x996AL},{0x21ADL,{0L,0x6093L,4UL},0x996AL}},{{9L,{6L,0x4804L,0xAE35L},1L},{9L,{6L,0x4804L,0xAE35L},1L},{9L,{6L,0x4804L,0xAE35L},1L}}};
    int16_t *l_649[6][6][7] = {{{&g_295.f0,&l_78[2][0].f0,&l_78[2][0].f2,(void*)0,&g_295.f0,(void*)0,&g_295.f0},{&g_295.f0,&g_295.f0,&l_78[2][0].f0,(void*)0,&l_78[2][0].f0,&l_78[2][0].f0,&g_295.f0},{(void*)0,&g_295.f0,(void*)0,(void*)0,&l_78[2][0].f2,&l_78[2][0].f0,&g_295.f2},{&l_78[2][0].f2,&g_295.f0,&l_78[2][0].f2,&g_295.f0,&l_78[2][0].f0,&l_78[2][0].f2,&l_78[2][0].f0},{&g_295.f0,&l_78[2][0].f0,(void*)0,&l_78[2][0].f0,&l_78[2][0].f2,&l_78[2][0].f0,&l_78[2][0].f0},{&l_78[2][0].f0,(void*)0,&l_78[2][0].f0,(void*)0,&l_78[2][0].f0,&l_78[2][0].f0,&g_295.f2}},{{&l_78[2][0].f2,(void*)0,(void*)0,&g_295.f2,&l_78[2][0].f0,(void*)0,(void*)0},{&l_78[2][0].f2,&l_78[2][0].f0,&l_78[2][0].f2,&g_295.f2,(void*)0,&g_295.f0,(void*)0},{&l_78[2][0].f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&l_78[2][0].f2},{&l_78[2][0].f0,&g_295.f0,&l_78[2][0].f0,&l_78[2][0].f2,&g_295.f2,(void*)0,&l_78[2][0].f0},{&g_295.f0,&l_78[2][0].f2,&g_295.f2,(void*)0,&g_295.f2,(void*)0,(void*)0},{&l_78[2][0].f2,&l_78[2][0].f0,&l_78[2][0].f0,(void*)0,&l_78[2][0].f0,(void*)0,&l_78[2][0].f0}},{{&l_78[2][0].f2,&l_78[2][0].f2,&g_295.f2,(void*)0,&l_78[2][0].f2,(void*)0,&g_295.f2},{&l_78[2][0].f0,&g_295.f2,&g_295.f2,&g_295.f0,&l_78[2][0].f2,&l_78[2][0].f0,&l_78[2][0].f0},{&g_295.f0,&l_78[2][0].f0,(void*)0,(void*)0,&l_78[2][0].f2,&g_295.f2,&l_78[2][0].f2},{&l_78[2][0].f0,&g_295.f2,&l_78[2][0].f2,&l_78[2][0].f0,&l_78[2][0].f0,&g_295.f0,&g_295.f0},{(void*)0,(void*)0,&l_78[2][0].f0,&g_295.f0,(void*)0,&l_78[2][0].f2,(void*)0},{&l_78[2][0].f0,&l_78[2][0].f2,&l_78[2][0].f0,&g_295.f0,&g_295.f2,&l_78[2][0].f0,&g_295.f0}},{{(void*)0,&g_295.f2,&l_78[2][0].f2,&l_78[2][0].f2,&g_295.f2,(void*)0,&l_78[2][0].f2},{&g_295.f2,&g_295.f0,&l_78[2][0].f0,&l_78[2][0].f2,(void*)0,&l_78[2][0].f0,&l_78[2][0].f0},{(void*)0,&g_295.f0,&g_295.f2,&l_78[2][0].f0,(void*)0,(void*)0,&g_295.f2},{&l_78[2][0].f0,&g_295.f0,&l_78[2][0].f0,&g_295.f0,&l_78[2][0].f2,&g_295.f0,&l_78[2][0].f0},{(void*)0,&g_295.f2,&g_295.f0,(void*)0,&g_295.f0,(void*)0,&l_78[2][0].f2},{(void*)0,&l_78[2][0].f2,&l_78[2][0].f0,&l_78[2][0].f0,&g_295.f0,&l_78[2][0].f2,&l_78[2][0].f2}},{{&g_295.f0,(void*)0,&l_78[2][0].f2,(void*)0,&g_295.f2,&g_295.f2,(void*)0},{&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f0,&l_78[2][0].f0,&g_295.f0,&l_78[2][0].f0},{&l_78[2][0].f0,&l_78[2][0].f0,&l_78[2][0].f2,&l_78[2][0].f0,&g_295.f2,&g_295.f2,&l_78[2][0].f0},{&l_78[2][0].f2,&g_295.f2,&l_78[2][0].f2,&l_78[2][0].f2,&l_78[2][0].f0,&g_295.f0,&l_78[2][0].f0},{(void*)0,&l_78[2][0].f2,&l_78[2][0].f0,&l_78[2][0].f2,(void*)0,&g_295.f2,(void*)0},{(void*)0,&l_78[2][0].f0,&l_78[2][0].f0,&g_295.f0,&l_78[2][0].f0,&l_78[2][0].f2,&l_78[2][0].f2}},{{(void*)0,&g_295.f2,&l_78[2][0].f0,&g_295.f0,&g_295.f2,(void*)0,(void*)0},{(void*)0,&g_295.f0,(void*)0,&l_78[2][0].f0,(void*)0,&g_295.f0,(void*)0},{(void*)0,&g_295.f0,(void*)0,(void*)0,&l_78[2][0].f2,(void*)0,&l_78[2][0].f0},{&l_78[2][0].f2,&l_78[2][0].f2,&g_295.f0,&g_295.f0,&l_78[2][0].f0,&l_78[2][0].f0,&l_78[2][0].f0},{&l_78[2][0].f0,&l_78[2][0].f2,(void*)0,(void*)0,&g_295.f0,(void*)0,(void*)0},{&g_295.f2,&g_295.f0,(void*)0,(void*)0,&l_78[2][0].f0,&l_78[2][0].f0,(void*)0}}};
    int64_t l_653 = 0x7D5F09C12B4C8294LL;
    int32_t l_668 = 0x6F3641B0L;
    int32_t l_669 = 0x1D5682F7L;
    int32_t l_670 = (-1L);
    int32_t l_671 = 0L;
    int32_t l_710 = (-1L);
    int32_t l_711[5];
    uint64_t l_720 = 5UL;
    int64_t * const l_752 = &l_653;
    int64_t * const l_753 = &g_77;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_711[i] = 0xF3CD90CBL;
    if (l_37)
    { 
        int64_t * const l_38[7] = {&g_39,&g_39,&g_39,&g_39,&g_39,&g_39,&g_39};
        int i;
        return l_38[5];
    }
    else
    { 
        uint32_t l_73[3];
        int16_t * const l_650[2][5][7] = {{{&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2},{&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2},{&g_295.f2,(void*)0,(void*)0,&g_295.f2,(void*)0,(void*)0,&g_295.f2},{(void*)0,&g_295.f2,(void*)0,(void*)0,&g_295.f2,(void*)0,(void*)0},{&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2}},{{&g_295.f2,(void*)0,(void*)0,&g_295.f2,(void*)0,(void*)0,&g_295.f2},{(void*)0,&g_295.f2,(void*)0,(void*)0,&g_295.f2,(void*)0,(void*)0},{&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2,&g_295.f2},{&g_295.f2,(void*)0,(void*)0,&g_295.f2,(void*)0,(void*)0,&g_295.f2},{(void*)0,&g_295.f2,(void*)0,(void*)0,&g_295.f2,(void*)0,(void*)0}}};
        int32_t l_664 = 0xCE802528L;
        int32_t l_703[6][2] = {{(-1L),(-1L)},{9L,(-1L)},{(-1L),9L},{(-1L),(-1L)},{9L,(-1L)},{(-1L),9L}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_73[i] = 18446744073709551611UL;
        for (g_39 = 4; (g_39 >= 0); g_39 -= 1)
        { 
            uint16_t l_52[4];
            int64_t *l_71 = &g_39;
            int64_t **l_70 = &l_71;
            uint8_t *l_74 = &g_75[1];
            int32_t *l_636 = &g_176;
            union U4 **l_639 = &g_472;
            int32_t l_667 = 4L;
            int16_t l_672 = 0x75B0L;
            uint64_t l_673 = 0x461C9941DC390E6ALL;
            int32_t l_708 = 1L;
            int32_t l_709 = 0xDF52A771L;
            int32_t l_712 = 0x3A8525AAL;
            int32_t l_713[7][1] = {{1L},{1L},{0x5110A53FL},{1L},{1L},{0x5110A53FL},{1L}};
            const int16_t *l_744 = &g_295.f0;
            const int16_t **l_743 = &l_744;
            int i, j;
            for (i = 0; i < 4; i++)
                l_52[i] = 65530UL;
            (*l_636) = ((func_41(func_46(((safe_rshift_func_uint8_t_u_s(((~(((l_52[2] , (safe_lshift_func_int16_t_s_u((g_57 = (safe_sub_func_uint64_t_u_u(1UL, 0x680AE02F11925CFBLL))), ((safe_sub_func_uint8_t_u_u(((g_76 = ((((void*)0 != g_60) < ((safe_lshift_func_uint8_t_u_s(((*l_74) = (l_37 | (((((safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((((*l_70) = ((*g_60) , (void*)0)) == l_72) ^ (-1L)), g_40[1][1])), l_52[2])), l_73[1])))) > (*g_35)) ^ l_37) | 1L) <= l_37))), 1)) < 0x70L)) , &g_39)) == (void*)0), (*g_35))) < l_73[1])))) > g_36) , 0x88C07A8BL)) ^ l_73[1]), 0)) , l_78[2][0]), g_12[0][1]), l_37, l_73[1], &g_3[0]) , (*g_35)) < 0x4CL);
        }
    }
    return l_753;
}



static struct S2  func_41(struct S1  p_42, const uint32_t  p_43, int32_t  p_44, int32_t * p_45)
{ 
    const int64_t l_260 = 0xB68C0CF1EBDD371ALL;
    int8_t *l_263 = (void*)0;
    int8_t *l_305 = &g_36;
    struct S2 l_321 = {0x59A6L,{1L,1UL,0x6407L},0x8866L};
    const union U4 *l_323 = &g_216[4][0];
    const union U4 **l_322 = &l_323;
    int64_t **l_328 = &g_76;
    int64_t l_357 = 1L;
    struct S0 **l_374[6][1];
    struct S0 ***l_373[7][4] = {{&l_374[5][0],&l_374[5][0],&l_374[1][0],(void*)0},{&l_374[2][0],&l_374[0][0],&l_374[2][0],&l_374[1][0]},{&l_374[4][0],&l_374[0][0],&l_374[4][0],(void*)0},{&l_374[0][0],&l_374[5][0],&l_374[5][0],&l_374[1][0]},{&l_374[1][0],&l_374[1][0],&l_374[2][0],&l_374[5][0]},{&l_374[4][0],&l_374[2][0],&l_374[2][0],&l_374[4][0]},{&l_374[1][0],(void*)0,&l_374[5][0],&l_374[4][0]}};
    struct S0 ****l_372 = &l_373[4][0];
    int32_t l_378[4];
    uint32_t l_436 = 0xE8AE1D0EL;
    int16_t l_443 = 1L;
    uint32_t l_444 = 3UL;
    int8_t l_461 = 0x43L;
    uint64_t l_519 = 18446744073709551615UL;
    int32_t **l_593 = &g_60;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_374[i][j] = &g_95;
    }
    for (i = 0; i < 4; i++)
        l_378[i] = 0xB6859870L;
    for (g_224.f0 = 0; (g_224.f0 < 22); ++g_224.f0)
    { 
        uint64_t l_269[1];
        union U4 *l_274 = &g_216[4][0];
        uint32_t *l_283 = &g_216[4][0].f2.f4;
        uint32_t *l_284 = (void*)0;
        uint32_t *l_285 = &g_239;
        int8_t ** const *l_291 = &g_106[0][2][0];
        int8_t ** const **l_290[1][6] = {{&l_291,&l_291,&l_291,&l_291,&l_291,&l_291}};
        uint16_t *l_292 = &g_96.f2;
        int8_t *l_304 = &g_295.f1.f0;
        struct S0 *l_367 = (void*)0;
        struct S2 l_383 = {0xC4E3L,{0x0DL,1UL,65532UL},0x869CL};
        int32_t l_417 = (-8L);
        int32_t l_459[5];
        uint16_t l_483 = 0x4F49L;
        int16_t l_521 = 0x2D24L;
        int8_t l_547[1][6][3];
        uint64_t l_590 = 0UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_269[i] = 1UL;
        for (i = 0; i < 5; i++)
            l_459[i] = 0x10E2130EL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 3; k++)
                    l_547[i][j][k] = (-7L);
            }
        }
        l_269[0] = ((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_42.f2, 2)), l_260)) ^ ((safe_add_func_int8_t_s_s(((void*)0 == l_263), ((((0x962A275FL && (safe_add_func_int16_t_s_s((+l_260), (safe_add_func_uint32_t_u_u(0x7D501D72L, l_260))))) >= (*g_76)) != (*g_60)) , l_260))) >= l_260));
    }
    (*l_593) = p_45;
    for (g_585 = 0; (g_585 == 20); g_585 = safe_add_func_int8_t_s_s(g_585, 1))
    { 
        uint8_t l_602 = 0x95L;
        uint8_t *l_617[1][1][4];
        const union U4 *l_633 = (void*)0;
        uint32_t l_634 = 0x163AFB67L;
        uint32_t *l_635[5][1][5] = {{{&g_224.f1,&g_218.f2.f1,&g_218.f2.f1,&g_224.f1,&g_224.f1}},{{&g_239,&g_57,&g_239,&g_57,&g_239}},{{&g_224.f1,&g_224.f1,&g_218.f2.f1,&g_218.f2.f1,&g_224.f1}},{{&g_57,&g_57,&g_57,&g_57,&g_57}},{{&g_224.f1,&g_218.f2.f1,&g_218.f2.f1,&g_224.f1,&g_224.f1}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_617[i][j][k] = (void*)0;
            }
        }
        (*l_593) = &g_457[0];
        for (p_42.f4 = 0; (p_42.f4 <= 3); p_42.f4 += 1)
        { 
            int8_t **l_605 = &l_305;
            union U3 *l_607 = &g_187[0];
            union U3 **l_606 = &l_607;
            int i;
            (*l_606) = ((l_378[p_42.f4] ^ ((l_378[p_42.f4] & 0x25550BE23558AB41LL) & (safe_add_func_uint16_t_u_u(l_378[p_42.f4], (((*g_105) = ((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(p_42.f5, ((*g_329) = (l_602 == ((((safe_lshift_func_uint16_t_u_u((((*p_45) , p_42.f1) , 0UL), 11)) & l_602) < (*g_60)) , l_378[p_42.f4]))))), (*g_306))) , l_605)) == (void*)0))))) , &g_187[0]);
            l_378[p_42.f4] &= (**l_593);
        }
        l_378[2] &= ((**l_593) != ((g_218.f2.f4 = (((*g_472) , (safe_add_func_int32_t_s_s(((-10L) != (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((p_42.f2 = l_602) == (safe_lshift_func_int16_t_s_s(p_42.f4, 13))), ((*g_331) = (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_224.f3.f2, (safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s((((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(((l_633 == (void*)0) || (*g_76)))), l_602)) || l_602) < 255UL), 7UL)), p_43)) != 1UL), g_12[0][2])))), p_44))))), l_602)))), 0x2EL))), (*p_45)))) | l_634)) > p_42.f3.f1));
        (*l_593) = &g_457[0];
    }
    return l_321;
}



static struct S1  func_46(struct S2  p_47, uint32_t  p_48)
{ 
    int8_t **l_80 = &g_35;
    int8_t ***l_79 = &l_80;
    int32_t l_81[3][4] = {{(-6L),(-6L),1L,(-6L)},{(-6L),0xF5864DC9L,0xF5864DC9L,(-6L)},{0xF5864DC9L,(-6L),0xF5864DC9L,0xF5864DC9L}};
    struct S0 *l_175 = &g_96;
    struct S1 l_182 = {0x46L,0UL,1UL,{1L,65535UL,0x0B95L},0x17ECD978L,0x7607B9B3L};
    int32_t *l_245 = &g_187[0].f0;
    uint16_t l_251 = 0x8373L;
    int i, j;
    (*l_79) = &g_35;
    l_81[0][0] |= p_47.f0;
    for (p_47.f1.f2 = (-19); (p_47.f1.f2 <= 12); ++p_47.f1.f2)
    { 
        int32_t *l_84 = &l_81[0][0];
        int32_t *l_85 = (void*)0;
        int32_t *l_86 = (void*)0;
        int32_t *l_87 = &l_81[0][0];
        int32_t *l_88 = (void*)0;
        int32_t *l_89[6] = {&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0],&l_81[0][0]};
        uint32_t l_140 = 4UL;
        struct S2 l_150 = {0x683EL,{-3L,0xBB63L,0x6723L},0xAF67L};
        int32_t l_177[1][3][1];
        struct S1 l_212 = {1UL,0x2B7E6810L,0xC3L,{7L,1UL,0x2649L},0x11A307C1L,0x147B0E61L};
        union U4 *l_217[7][2] = {{&g_216[2][4],&g_218},{&g_216[3][5],&g_218},{&g_218,&g_216[3][5]},{&g_218,&g_216[2][4]},{&g_218,&g_216[3][5]},{&g_218,&g_218},{&g_216[3][5],&g_218}};
        int64_t l_250 = 0x9C656FD3FCBE23C9LL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_177[i][j][k] = 0x1CD7A3E1L;
            }
        }
        g_90[0][0]--;
        if (p_47.f1.f0)
            break;
        for (p_47.f2 = 0; (p_47.f2 <= 17); p_47.f2++)
        { 
            struct S0 **l_97 = (void*)0;
            struct S0 **l_98 = &g_95;
            int32_t l_99 = 0xA8C21786L;
            uint8_t l_131 = 0xFAL;
            struct S2 l_148 = {0x83CBL,{0L,8UL,65531UL},0x123BL};
            int32_t l_163 = 0x8EFF228AL;
            int16_t l_178 = 0L;
            int32_t l_196 = 0x6039B183L;
            union U4 *l_215 = &g_216[4][0];
            (*l_98) = g_95;
        }
        for (p_47.f1.f1 = (-19); (p_47.f1.f1 <= 43); p_47.f1.f1 = safe_add_func_uint16_t_u_u(p_47.f1.f1, 4))
        { 
            struct S1 l_249 = {0xFEL,3UL,0xB2L,{0xEBL,65535UL,0x218AL},4294967295UL,0x9175DF6FL};
            return l_249;
        }
        l_251++;
    }
    return g_224;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_12[i][j], "g_12[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_40[i][j], "g_40[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_75[i], "g_75[i]", print_hash_value);

    }
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_90[i][j], "g_90[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_143[i][j][k], "g_143[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_187[i].f0, "g_187[i].f0", print_hash_value);
        transparent_crc(g_187[i].f2, "g_187[i].f2", print_hash_value);

    }
    transparent_crc(g_197, "g_197", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_216[i][j].f0, "g_216[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_224.f0, "g_224.f0", print_hash_value);
    transparent_crc(g_224.f1, "g_224.f1", print_hash_value);
    transparent_crc(g_224.f2, "g_224.f2", print_hash_value);
    transparent_crc(g_224.f3.f0, "g_224.f3.f0", print_hash_value);
    transparent_crc(g_224.f3.f1, "g_224.f3.f1", print_hash_value);
    transparent_crc(g_224.f3.f2, "g_224.f3.f2", print_hash_value);
    transparent_crc(g_224.f4, "g_224.f4", print_hash_value);
    transparent_crc(g_224.f5, "g_224.f5", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_295.f0, "g_295.f0", print_hash_value);
    transparent_crc(g_295.f1.f0, "g_295.f1.f0", print_hash_value);
    transparent_crc(g_295.f1.f1, "g_295.f1.f1", print_hash_value);
    transparent_crc(g_295.f1.f2, "g_295.f1.f2", print_hash_value);
    transparent_crc(g_295.f2, "g_295.f2", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_457[i], "g_457[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_563[i][j], "g_563[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1207[i], "g_1207[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1248[i].f0, "g_1248[i].f0", print_hash_value);

    }
    transparent_crc(g_1256, "g_1256", print_hash_value);
    transparent_crc(g_1264, "g_1264", print_hash_value);
    transparent_crc(g_1265, "g_1265", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1266[i], "g_1266[i]", print_hash_value);

    }
    transparent_crc(g_1338.f0, "g_1338.f0", print_hash_value);
    transparent_crc(g_1338.f1, "g_1338.f1", print_hash_value);
    transparent_crc(g_1338.f2, "g_1338.f2", print_hash_value);
    transparent_crc(g_1338.f3.f0, "g_1338.f3.f0", print_hash_value);
    transparent_crc(g_1338.f3.f1, "g_1338.f3.f1", print_hash_value);
    transparent_crc(g_1338.f3.f2, "g_1338.f3.f2", print_hash_value);
    transparent_crc(g_1338.f4, "g_1338.f4", print_hash_value);
    transparent_crc(g_1338.f5, "g_1338.f5", print_hash_value);
    transparent_crc(g_1664.f0, "g_1664.f0", print_hash_value);
    transparent_crc(g_1664.f1, "g_1664.f1", print_hash_value);
    transparent_crc(g_1664.f2, "g_1664.f2", print_hash_value);
    transparent_crc(g_1791, "g_1791", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
