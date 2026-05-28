// SPDX-License-Identifier: MIT
// cctest_csmith_a2de49f9.c --- cctest case csmith_a2de49f9 (csmith seed 2732476921)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2466d076 */
/* @exp_ticks 0x51e3 */

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

// Options:   -s 2732476921 -o /tmp/csmith_gen_2e771_1f/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S1 {
   uint8_t  f0;
   uint32_t  f1;
   const uint64_t  f2;
   uint8_t  f3;
   int32_t  f4;
};

union U2 {
   struct S1  f0;
   int8_t  f1;
   uint32_t  f2;
};

struct S0 {
   uint16_t  f0;
   const uint64_t  f1;
   const uint32_t  f2;
   uint32_t  f3;
};

union U3 {
   struct S0  f0;
};

union U4 {
   const int32_t  f0;
   int16_t  f1;
   uint32_t  f2;
};

union U5 {
   uint64_t  f0;
   int16_t  f1;
};

union U6 {
   const uint64_t  f0;
   const struct S0  f1;
   int32_t  f2;
};


static uint8_t g_2[3][3] = {{0x12L,0x12L,0x12L},{0x7AL,0x7AL,0x7AL},{0x12L,0x12L,0x12L}};
static int32_t g_3 = 0x8CF4C59CL;
static uint16_t g_21 = 0x54D8L;
static union U4 g_37 = {0x83F7CD3EL};
static int64_t g_49 = 0x4FC6A3F0BDE8AFF6LL;
static union U6 g_70 = {0x6FF37E3B5251BB39LL};
static union U5 g_93 = {0UL};
static int16_t g_94 = 0xEB69L;
static uint64_t g_100 = 5UL;
static int16_t g_105[5] = {1L,1L,1L,1L,1L};
static uint32_t g_108 = 0x3C455447L;
static uint32_t g_138[2] = {0xBB384EBAL,0xBB384EBAL};
static union U4 g_139[3] = {{0L},{0L},{0L}};
static union U3 g_140 = {{65530UL,0UL,0xAA37561DL,0xE7F17000L}};
static uint8_t g_152 = 6UL;
static int64_t g_159 = 1L;
static uint8_t g_160 = 248UL;
static uint32_t g_168 = 0xFDF6FDFCL;
static int32_t g_187 = 0x4AD39086L;
static int64_t g_189 = 0xB640E48530E6B9A3LL;
static const union U2 g_213[4][4] = {{{{250UL,0xC33512AAL,0UL,0UL,0x0B734962L}},{{0xCEL,0xC483EC63L,0UL,0xC7L,-3L}},{{250UL,0xC33512AAL,0UL,0UL,0x0B734962L}},{{0xCEL,0xC483EC63L,0UL,0xC7L,-3L}}},{{{250UL,0xC33512AAL,0UL,0UL,0x0B734962L}},{{0xCEL,0xC483EC63L,0UL,0xC7L,-3L}},{{250UL,0xC33512AAL,0UL,0UL,0x0B734962L}},{{0xCEL,0xC483EC63L,0UL,0xC7L,-3L}}},{{{250UL,0xC33512AAL,0UL,0UL,0x0B734962L}},{{0xCEL,0xC483EC63L,0UL,0xC7L,-3L}},{{250UL,0xC33512AAL,0UL,0UL,0x0B734962L}},{{0xCEL,0xC483EC63L,0UL,0xC7L,-3L}}},{{{250UL,0xC33512AAL,0UL,0UL,0x0B734962L}},{{0xCEL,0xC483EC63L,0UL,0xC7L,-3L}},{{250UL,0xC33512AAL,0UL,0UL,0x0B734962L}},{{0xCEL,0xC483EC63L,0UL,0xC7L,-3L}}}};



static uint8_t  func_1(void);
static int16_t  func_8(uint32_t  p_9, union U4  p_10, int32_t  p_11);
static int64_t  func_12(uint32_t  p_13);
static uint64_t  func_27(uint32_t  p_28, uint16_t  p_29);




static uint8_t  func_1(void)
{ 
    int32_t l_16 = (-1L);
    int32_t l_169 = (-1L);
    struct S1 l_200 = {0UL,1UL,0xED449BA733CD5DE6LL,0xA0L,-5L};
    int32_t l_206 = 0xF446B025L;
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    { 
        uint64_t l_153 = 9UL;
        const int16_t l_158 = 0x76EBL;
        int64_t l_167 = 0x9ED2A1A5AB319EDELL;
        uint8_t l_188 = 0xA3L;
        int32_t l_215 = 1L;
    }
    return g_160;
}



static int16_t  func_8(uint32_t  p_9, union U4  p_10, int32_t  p_11)
{ 
    const int64_t l_149 = 0x2C222D14440822F1LL;
    int32_t l_150 = 0x557B4538L;
    int32_t l_151[4];
    int i;
    for (i = 0; i < 4; i++)
        l_151[i] = 0xA3F8350FL;
    l_151[2] = (g_140 , (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((l_150 = ((p_10.f1 , 0xA8L) && (safe_sub_func_uint16_t_u_u((l_149 ^ g_140.f0.f1), g_2[0][0])))), g_21)), p_9)), 0x4110E0C7L)));
    return g_70.f0;
}



static int64_t  func_12(uint32_t  p_13)
{ 
    int8_t l_17 = (-1L);
    int32_t l_18 = 8L;
    int16_t l_19 = 0xA12AL;
    int32_t l_20[5][2] = {{(-8L),0xBDA99DA9L},{0xF4F9A023L,(-8L)},{0L,0L},{0L,(-8L)},{0xF4F9A023L,0xBDA99DA9L}};
    union U2 l_68 = {{1UL,0x391DE2FCL,0x3FAAB93B57206030LL,249UL,0x3D3B28C3L}};
    int i, j;
    --g_21;
    if ((safe_add_func_int32_t_s_s(0xFAD0D727L, (~func_27(g_2[1][2], p_13)))))
    { 
        uint32_t l_69 = 1UL;
        union U3 l_75 = {{7UL,0x8C85C7EEBEAAF72ALL,0xDD754719L,0xE38F9461L}};
        int32_t l_82 = (-1L);
        int32_t l_83 = 0xBBFB6FEBL;
        l_20[0][1] |= ((0xA3BBE75688AFC007LL > (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((l_68 , 0xC202EAB385FAE11BLL) > ((l_18 & l_69) > 0xF1DFL)), (-1L))), l_69))) || 5UL);
        l_83 = (g_70 , ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_75 , (safe_sub_func_int64_t_s_s(l_75.f0.f0, (safe_add_func_uint16_t_u_u((l_82 = (safe_mul_func_uint16_t_u_u((((-1L) < g_49) & p_13), (-1L)))), l_68.f0.f1))))), p_13)), g_37.f1)) >= p_13));
    }
    else
    { 
        union U5 l_92 = {0x6624E94FA9F1E568LL};
        int32_t l_104 = 2L;
        for (l_68.f0.f3 = 0; (l_68.f0.f3 == 7); l_68.f0.f3 = safe_add_func_uint8_t_u_u(l_68.f0.f3, 1))
        { 
            uint32_t l_95 = 1UL;
            int32_t l_101 = 0L;
            int8_t l_102 = (-1L);
            int32_t l_103 = 0x27459160L;
            int32_t l_106 = (-1L);
            int32_t l_107 = 1L;
            for (g_37.f1 = 0; (g_37.f1 <= 1); g_37.f1 += 1)
            { 
                int i, j;
                g_94 = (safe_add_func_int8_t_s_s((l_20[(g_37.f1 + 2)][g_37.f1] = (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(4294967295UL, (0x98E375BC53ECDF3DLL > ((-7L) & ((g_93 = l_92) , 0x57B26330L))))), l_20[(g_37.f1 + 2)][g_37.f1]))), 0x61L));
                g_100 = ((l_95 = 0xF7FA13A89CE68EBBLL) != (((safe_add_func_int8_t_s_s((safe_mod_func_int64_t_s_s(((l_20[(g_37.f1 + 3)][g_37.f1] ^ l_20[g_37.f1][g_37.f1]) || (l_92.f0 || 0L)), g_94)), l_20[0][0])) , p_13) || l_20[g_37.f1][g_37.f1]));
                if (p_13)
                    break;
            }
            if (p_13)
                continue;
            --g_108;
        }
        for (l_68.f0.f4 = 4; (l_68.f0.f4 >= 0); l_68.f0.f4 -= 1)
        { 
            for (p_13 = 1; (p_13 <= 4); p_13 += 1)
            { 
                int16_t l_111 = 0x3963L;
                int32_t l_112[5][3] = {{0L,0L,(-9L)},{(-9L),0L,(-9L)},{(-9L),0L,(-9L)},{(-9L),0L,(-9L)},{(-9L),0L,(-9L)}};
                int i, j;
                l_112[3][2] ^= l_111;
            }
        }
        for (g_108 = (-5); (g_108 != 20); ++g_108)
        { 
            union U5 l_115 = {18446744073709551608UL};
            int32_t l_120 = 0xE78A8B9AL;
            l_120 = ((l_115 , (safe_add_func_int32_t_s_s(((l_104 , (safe_add_func_int8_t_s_s((-2L), 0x60L))) | l_104), 3L))) == 4294967294UL);
            l_120 = ((4L | (safe_sub_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(p_13, (safe_div_func_uint64_t_u_u(g_3, (safe_unary_minus_func_int64_t_s((((safe_sub_func_int64_t_s_s((g_93.f0 >= 0x23CF8C3DL), g_105[3])) < p_13) == 4294967295UL))))))) & l_120) && g_93.f0), g_93.f0))) || 0xB8E47B4319BF676FLL);
            l_20[4][0] ^= (((4294967293UL <= (((~p_13) > 0x3DD4AC9C96BA6EEDLL) != ((safe_mul_func_uint8_t_u_u((((p_13 & 0xBDFC586CL) , g_93.f0) , 1UL), l_104)) >= 0x3E5EL))) < g_108) | 5UL);
        }
    }
    g_138[0] = ((safe_rshift_func_uint8_t_u_s(((l_20[4][0] &= (l_68.f0.f2 < 0x78B87F18L)) < (safe_mod_func_uint32_t_u_u((((!(0x999CB80B1A2B5784LL | (l_18 = ((g_70.f0 != 0xBAL) ^ l_68.f0.f2)))) != g_21) != g_94), p_13))), l_17)) ^ g_21);
    return g_2[2][2];
}



static uint64_t  func_27(uint32_t  p_28, uint16_t  p_29)
{ 
    uint64_t l_36 = 0xAAA4F69A75015E0CLL;
    uint8_t l_50[4][2][2];
    int32_t l_51 = 0x9D89C1C5L;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_50[i][j][k] = 1UL;
        }
    }
    l_51 = (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint8_t_u_u((l_36 , ((g_37 , (((safe_unary_minus_func_int32_t_s(g_37.f1)) > ((safe_mul_func_int8_t_s_s((g_49 |= (safe_mod_func_int64_t_s_s(((safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(p_29, 14)), g_3)), g_37.f2)) >= g_2[1][2]), p_28))), l_36)) >= p_29)) ^ l_36)) <= 1UL)), l_36)) <= l_50[2][0][1]) < g_2[2][0]), 7)), 1L));
    l_51 = (safe_mul_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((p_28 , (safe_div_func_int8_t_s_s(g_3, p_29))) != (safe_lshift_func_int8_t_s_s(((l_50[2][1][0] || p_29) != p_29), 2))), g_3)), 0xCE519C81L)) == g_37.f1), l_50[2][0][1])) , p_28), g_21));
    return l_51;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f1, "g_37.f1", print_hash_value);
    transparent_crc(g_37.f2, "g_37.f2", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_93.f1, "g_93.f1", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_138[i], "g_138[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_139[i].f0, "g_139[i].f0", print_hash_value);
        transparent_crc(g_139[i].f1, "g_139[i].f1", print_hash_value);
        transparent_crc(g_139[i].f2, "g_139[i].f2", print_hash_value);

    }
    transparent_crc(g_140.f0.f0, "g_140.f0.f0", print_hash_value);
    transparent_crc(g_140.f0.f1, "g_140.f0.f1", print_hash_value);
    transparent_crc(g_140.f0.f2, "g_140.f0.f2", print_hash_value);
    transparent_crc(g_140.f0.f3, "g_140.f0.f3", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_213[i][j].f0.f0, "g_213[i][j].f0.f0", print_hash_value);
            transparent_crc(g_213[i][j].f0.f1, "g_213[i][j].f0.f1", print_hash_value);
            transparent_crc(g_213[i][j].f0.f2, "g_213[i][j].f0.f2", print_hash_value);
            transparent_crc(g_213[i][j].f0.f3, "g_213[i][j].f0.f3", print_hash_value);
            transparent_crc(g_213[i][j].f0.f4, "g_213[i][j].f0.f4", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
