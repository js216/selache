// SPDX-License-Identifier: MIT
// cctest_csmith_bb416c22.c --- cctest case csmith_bb416c22 (csmith seed 3141626914)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x1e6f7c44 */
/* @exp_ticks 0x5ab9 */

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

// Options:   -s 3141626914 -o /tmp/csmith_gen_mgyp2_g1/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   int32_t  f1;
   const uint16_t  f2;
   const uint32_t  f3;
   const int64_t  f4;
   uint64_t  f5;
};

union U1 {
   struct S0  f0;
   int64_t  f1;
   struct S0  f2;
   uint32_t  f3;
};


static int32_t g_8 = (-1L);
static uint8_t g_26 = 0x7CL;
static uint32_t g_54 = 0x6E024B17L;
static struct S0 g_58[2][2][5] = {{{{0x3EL,0x7628F8C8L,0x420CL,0x5725C8E5L,1L,18446744073709551607UL},{0xBCL,0x1B595946L,65535UL,0x8CABD046L,0x7E6FF2F0833481FFLL,18446744073709551615UL},{0xBCL,0x1B595946L,65535UL,0x8CABD046L,0x7E6FF2F0833481FFLL,18446744073709551615UL},{0x3EL,0x7628F8C8L,0x420CL,0x5725C8E5L,1L,18446744073709551607UL},{0x3EL,0x7628F8C8L,0x420CL,0x5725C8E5L,1L,18446744073709551607UL}},{{1UL,0x65AED0E3L,0x927BL,0x2311C7DCL,0xEB77D2D86EA79F15LL,0xE9DC621C653C2AD4LL},{0UL,-4L,0x7962L,4UL,0x03C2894B961AC8BELL,18446744073709551615UL},{1UL,0x65AED0E3L,0x927BL,0x2311C7DCL,0xEB77D2D86EA79F15LL,0xE9DC621C653C2AD4LL},{0UL,-4L,0x7962L,4UL,0x03C2894B961AC8BELL,18446744073709551615UL},{1UL,0x65AED0E3L,0x927BL,0x2311C7DCL,0xEB77D2D86EA79F15LL,0xE9DC621C653C2AD4LL}}},{{{0x3EL,0x7628F8C8L,0x420CL,0x5725C8E5L,1L,18446744073709551607UL},{0x3EL,0x7628F8C8L,0x420CL,0x5725C8E5L,1L,18446744073709551607UL},{0xBCL,0x1B595946L,65535UL,0x8CABD046L,0x7E6FF2F0833481FFLL,18446744073709551615UL},{0xBCL,0x1B595946L,65535UL,0x8CABD046L,0x7E6FF2F0833481FFLL,18446744073709551615UL},{0x3EL,0x7628F8C8L,0x420CL,0x5725C8E5L,1L,18446744073709551607UL}},{{8UL,0xC8B7CF17L,0xC459L,0x779DD1F3L,-1L,0xCEBEE4CBE064EC4FLL},{0UL,-4L,0x7962L,4UL,0x03C2894B961AC8BELL,18446744073709551615UL},{8UL,0xC8B7CF17L,0xC459L,0x779DD1F3L,-1L,0xCEBEE4CBE064EC4FLL},{0UL,-4L,0x7962L,4UL,0x03C2894B961AC8BELL,18446744073709551615UL},{8UL,0xC8B7CF17L,0xC459L,0x779DD1F3L,-1L,0xCEBEE4CBE064EC4FLL}}}};
static union U1 g_61 = {{0xCFL,-6L,65535UL,1UL,-1L,18446744073709551615UL}};
static int32_t g_89[1] = {0xBCE84173L};
static uint32_t g_106[5][2] = {{4294967288UL,0x009BDDABL},{4294967288UL,0x009BDDABL},{4294967288UL,0x009BDDABL},{4294967288UL,0x009BDDABL},{4294967288UL,0x009BDDABL}};
static int8_t g_115[5][3] = {{6L,6L,0xF7L},{6L,6L,0xF7L},{6L,6L,0xF7L},{6L,6L,0xF7L},{6L,6L,0xF7L}};
static int16_t g_161 = 0xE46CL;
static int32_t g_167 = 0L;



static union U1  func_1(void);
static union U1  func_5(const int8_t  p_6, int32_t  p_7);
static uint8_t  func_11(const uint8_t  p_12, int8_t  p_13, int64_t  p_14);
static int32_t  func_16(uint16_t  p_17, const int8_t  p_18, int8_t  p_19);




static union U1  func_1(void)
{ 
    uint32_t l_2[5] = {0x7C8748AFL,0x7C8748AFL,0x7C8748AFL,0x7C8748AFL,0x7C8748AFL};
    int32_t l_173[1];
    int i;
    for (i = 0; i < 1; i++)
        l_173[i] = 0x7165453FL;
    l_173[0] = (l_2[4] ^ ((safe_rshift_func_uint16_t_u_u((((((func_5((((((g_8 && 4294967293UL) & g_8) , l_2[1]) || (-1L)) , 0xA9L), g_8) , g_115[1][2]) > 1UL) || g_89[0]) || g_61.f0.f5) <= g_89[0]), 13)) <= 0L));
    return g_61;
}



static union U1  func_5(const int8_t  p_6, int32_t  p_7)
{ 
    uint32_t l_15 = 0x462CCD20L;
    int32_t l_121 = 0x1E9822E9L;
    int32_t l_131 = 0x4B534227L;
    int32_t l_132 = 6L;
    int32_t l_136 = 0xEEB18F66L;
    int32_t l_140 = 0x7F404867L;
    int32_t l_141 = 1L;
    uint32_t l_142 = 0xCE0EB5F6L;
    uint16_t l_168 = 65530UL;
    union U1 l_172 = {{0x40L,1L,65535UL,0UL,0L,18446744073709551610UL}};
    return l_172;
}



static uint8_t  func_11(const uint8_t  p_12, int8_t  p_13, int64_t  p_14)
{ 
    union U1 l_20 = {{0x3FL,0x540EE1D4L,65535UL,0x2E712C51L,1L,18446744073709551615UL}};
    int32_t l_25[5];
    int8_t l_31 = 2L;
    int32_t l_98 = (-10L);
    int16_t l_104 = (-4L);
    int32_t l_114 = 1L;
    int i;
    for (i = 0; i < 5; i++)
        l_25[i] = (-1L);
    if (func_16(p_14, (l_20 , (l_20.f0.f1 |= g_8)), (safe_mod_func_int64_t_s_s(((l_25[4] = ((((safe_div_func_uint64_t_u_u(((++g_26) & (((((safe_add_func_uint8_t_u_u(255UL, 255UL)) || g_8) > 0x8BD2E84CBF776240LL) <= l_25[4]) > l_31)), p_12)) ^ g_8) & g_8) && p_12)) != 0xC7E7C0CE695EF2B5LL), 0xE21E525036FFE617LL))))
    { 
        int32_t l_63 = 0x1927A6A8L;
        l_63 = ((((g_54 < (g_58[0][1][3] , ((safe_rshift_func_uint8_t_u_u(((g_61 , (~(g_61 , 18446744073709551607UL))) | 0x4E9E2562L), 1)) , l_31))) < l_63) == 1UL) ^ 0x3DL);
    }
    else
    { 
        struct S0 l_64 = {0x5BL,7L,0UL,1UL,0xD06223119449F9ADLL,0x046E41CA980D5298LL};
        if (((l_64 , p_13) && ((safe_add_func_uint64_t_u_u(0xEBE1D701D6BCCD07LL, ((safe_sub_func_int16_t_s_s(((1L & 0xBCL) , g_61.f0.f2), g_58[0][1][3].f3)) || 0x1BL))) == g_58[0][1][3].f3)))
        { 
            int32_t l_69 = 0x7D68548FL;
            int8_t l_88 = 0xC7L;
            g_8 = ((l_69 || 0xAFAE61C728F08AB4LL) < ((g_58[0][1][3].f5 = ((!((l_69 | p_13) || 0x8C1B86B2L)) && g_58[0][1][3].f5)) ^ 0x80A0586BC1F71C78LL));
            g_89[0] &= (safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u((((l_88 = (((safe_mul_func_int16_t_s_s((g_61 , (!(p_14 > (!g_61.f0.f2)))), (safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(l_69, g_61.f0.f4)), 0x4E37E41BL)))) , g_58[0][1][3].f1) , 0x4B9299A07EF0612DLL)) <= p_13) < l_20.f0.f4))) , g_61.f0.f4) == 0xB1B4L), 65526UL)), g_61.f0.f5)) & g_26), l_64.f0)) && g_8), 0x7073B47AL));
            return g_61.f0.f3;
        }
        else
        { 
            g_61.f0.f1 = 0xA1BC1FB2L;
        }
    }
    for (l_20.f0.f5 = 0; (l_20.f0.f5 == 2); ++l_20.f0.f5)
    { 
        int16_t l_92 = 0xDF8BL;
        int32_t l_97 = 3L;
        int32_t l_99 = 0x9FC7FA6FL;
        int32_t l_100 = 0xF9FC003BL;
        int32_t l_102[4][5][4] = {{{0x62EA743EL,(-2L),1L,7L},{0xE1BD5518L,0x62EA743EL,0x0DB93F61L,(-2L)},{(-1L),0x06B426EBL,(-1L),(-2L)},{0x0DB93F61L,0x62EA743EL,0xE1BD5518L,7L},{1L,(-2L),0x62EA743EL,0x62EA743EL}},{{0xD7DB42F0L,0xD7DB42F0L,0x62EA743EL,(-1L)},{1L,0xC2203A28L,0xE1BD5518L,(-2L)},{0x0DB93F61L,0xE1BD5518L,(-1L),0xE1BD5518L},{(-1L),0xE1BD5518L,0x0DB93F61L,(-2L)},{0xE1BD5518L,0xC2203A28L,1L,(-1L)}},{{0x62EA743EL,0xD7DB42F0L,0xD7DB42F0L,0x62EA743EL},{0x62EA743EL,(-2L),1L,7L},{0xE1BD5518L,0x62EA743EL,0x0DB93F61L,(-2L)},{(-1L),0x06B426EBL,(-1L),(-2L)},{0x0DB93F61L,0x62EA743EL,0xE1BD5518L,7L}},{{1L,(-2L),0x62EA743EL,0x62EA743EL},{0xD7DB42F0L,0xD7DB42F0L,0x62EA743EL,(-1L)},{1L,0xC2203A28L,0xE1BD5518L,(-2L)},{0x0DB93F61L,0xE1BD5518L,(-1L),0xE1BD5518L},{(-1L),0xE1BD5518L,0x0DB93F61L,(-2L)}}};
        int32_t l_103 = 0x571DCDCBL;
        int i, j, k;
    }
    for (l_20.f2.f0 = 0; (l_20.f2.f0 > 23); l_20.f2.f0++)
    { 
        uint64_t l_118 = 0x9DED147D6BF538CCLL;
        l_118++;
    }
    return l_98;
}



static int32_t  func_16(uint16_t  p_17, const int8_t  p_18, int8_t  p_19)
{ 
    uint16_t l_32 = 0xA3D3L;
    int32_t l_37[5][4] = {{0x0B53CF54L,2L,2L,0x0B53CF54L},{2L,0x0B53CF54L,2L,2L},{0x0B53CF54L,0x0B53CF54L,0x3B020B2DL,0x0B53CF54L},{0x0B53CF54L,2L,2L,0x0B53CF54L},{2L,0x0B53CF54L,2L,2L}};
    int i, j;
    --l_32;
    if (((((((safe_add_func_int32_t_s_s((0xDE6AL | (l_37[4][2] = 4UL)), ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((p_19 <= ((0L >= g_8) | 0x0D3D7FBAL)), 4)), p_18)) & 1UL))) || p_17) == 0xF3D0097E410F7135LL) && p_18) && 0x09L) , 0x1DEC7435L))
    { 
        uint32_t l_42 = 0x5AD92EDCL;
        --l_42;
    }
    else
    { 
        int64_t l_55 = 0x56B0C4F586FD7422LL;
        int32_t l_56 = 1L;
        int32_t l_57[4][1][2];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_57[i][j][k] = 0x320CD53BL;
            }
        }
        l_57[3][0][0] = (safe_lshift_func_uint8_t_u_s(((((l_56 = ((safe_add_func_int64_t_s_s(g_26, 1UL)) | ((safe_unary_minus_func_uint16_t_u((0x8B32L >= (((l_37[4][2] = (g_54 = (safe_sub_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(((g_26 , l_37[0][0]) > g_8), g_26)) , 18446744073709551606UL) , 0xF5L), g_26)))) ^ g_26) ^ g_8)))) , l_55))) || l_55) <= l_32) || p_19), 1));
        return l_57[2][0][1];
    }
    l_37[4][1] = 0x7FF73186L;
    return g_54;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_58[i][j][k].f0, "g_58[i][j][k].f0", print_hash_value);
                transparent_crc(g_58[i][j][k].f1, "g_58[i][j][k].f1", print_hash_value);
                transparent_crc(g_58[i][j][k].f2, "g_58[i][j][k].f2", print_hash_value);
                transparent_crc(g_58[i][j][k].f3, "g_58[i][j][k].f3", print_hash_value);
                transparent_crc(g_58[i][j][k].f4, "g_58[i][j][k].f4", print_hash_value);
                transparent_crc(g_58[i][j][k].f5, "g_58[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(g_61.f0.f0, "g_61.f0.f0", print_hash_value);
    transparent_crc(g_61.f0.f1, "g_61.f0.f1", print_hash_value);
    transparent_crc(g_61.f0.f2, "g_61.f0.f2", print_hash_value);
    transparent_crc(g_61.f0.f3, "g_61.f0.f3", print_hash_value);
    transparent_crc(g_61.f0.f4, "g_61.f0.f4", print_hash_value);
    transparent_crc(g_61.f0.f5, "g_61.f0.f5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_89[i], "g_89[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_106[i][j], "g_106[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_115[i][j], "g_115[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
