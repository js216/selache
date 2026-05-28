// SPDX-License-Identifier: MIT
// cctest_csmith_a29216b6.c --- cctest case csmith_a29216b6 (csmith seed 2727483062)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2744c806 */
/* @exp_ticks 0x74e3 */

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

// Options:   -s 2727483062 -o /tmp/csmith_gen_femdoeuh/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   const int16_t  f3;
};

union U1 {
   uint32_t  f0;
   const int8_t  f1;
   struct S0  f2;
   struct S0  f3;
};

union U2 {
   int64_t  f0;
   uint8_t  f1;
   int32_t  f2;
   int32_t  f3;
};


static int32_t g_4 = (-1L);
static uint32_t g_20 = 1UL;
static int32_t *g_53[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const union U1 g_55 = {0xD584125DL};
static const union U1 g_57 = {18446744073709551615UL};
static union U2 g_90[3][3] = {{{0xB0F81A6866C5D899LL},{0xC26FF5532CF2D060LL},{0xC26FF5532CF2D060LL}},{{0xB0F81A6866C5D899LL},{0xC26FF5532CF2D060LL},{0xC26FF5532CF2D060LL}},{{0xB0F81A6866C5D899LL},{0xC26FF5532CF2D060LL},{0xC26FF5532CF2D060LL}}};
static int32_t **g_119[5][5] = {{&g_53[0],&g_53[1],(void*)0,&g_53[0],(void*)0},{&g_53[0],&g_53[0],&g_53[2],&g_53[4],&g_53[1]},{&g_53[1],&g_53[1],(void*)0,(void*)0,&g_53[1]},{&g_53[1],&g_53[1],&g_53[1],&g_53[1],(void*)0},{&g_53[4],&g_53[1],&g_53[2],&g_53[1],&g_53[4]}};
static int32_t ***g_118 = &g_119[3][1];
static uint16_t g_122 = 65535UL;
static int8_t g_126 = 0L;
static int32_t *g_137 = &g_4;
static int16_t * const g_159 = (void*)0;
static union U1 g_170[1] = {{0xC0330D54L}};
static struct S0 g_171 = {0x69119564L,3UL,1L,-1L};
static int8_t g_174 = 0x04L;
static int16_t g_192 = (-1L);
static uint16_t g_196 = 65535UL;
static int32_t * const *g_231 = (void*)0;
static int32_t * const **g_230 = &g_231;
static const struct S0 g_248[5][2][1] = {{{{0UL,9UL,0xF3555BB4L,0xFFCAL}},{{18446744073709551614UL,2UL,-9L,1L}}},{{{0UL,9UL,0xF3555BB4L,0xFFCAL}},{{18446744073709551614UL,2UL,-9L,1L}}},{{{0UL,9UL,0xF3555BB4L,0xFFCAL}},{{18446744073709551614UL,2UL,-9L,1L}}},{{{0UL,9UL,0xF3555BB4L,0xFFCAL}},{{18446744073709551614UL,2UL,-9L,1L}}},{{{0UL,9UL,0xF3555BB4L,0xFFCAL}},{{18446744073709551614UL,2UL,-9L,1L}}}};
static union U1 g_252[3] = {{0xF4084801L},{0xF4084801L},{0xF4084801L}};
static uint32_t g_271[2] = {0UL,0UL};
static int16_t g_278 = (-6L);
static struct S0 *g_296 = (void*)0;
static uint64_t g_335 = 0UL;
static union U2 g_397 = {0x4311B2FD699BEDC9LL};
static uint8_t *g_465 = &g_397.f1;
static union U1 **g_601 = (void*)0;
static union U2 ** const g_617 = (void*)0;
static int64_t g_634[6] = {0L,0L,0L,0L,0L,0L};
static uint32_t g_654 = 18446744073709551615UL;
static uint64_t g_675[2] = {18446744073709551615UL,18446744073709551615UL};
static uint32_t g_768[4][5][3] = {{{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL}},{{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL}},{{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL}},{{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL},{18446744073709551613UL,0UL,18446744073709551613UL}}};
static uint64_t **g_825 = (void*)0;
static union U1 g_932 = {0x097735F1L};
static union U1 *g_931 = &g_932;
static union U1 g_934 = {18446744073709551608UL};
static union U1 *g_933 = &g_934;
static uint32_t g_976[2][4][5] = {{{0x70412629L,0x35A02935L,0x70412629L,9UL,0xF90004EAL},{0x0D5FE7CFL,0x711DA0FDL,0x70412629L,0xF90004EAL,9UL},{0x0D5FE7CFL,0x35A02935L,4294967293UL,0xF90004EAL,0xF90004EAL},{0x70412629L,0x35A02935L,0x70412629L,9UL,0xF90004EAL}},{{0x0D5FE7CFL,0x711DA0FDL,0x70412629L,0xF90004EAL,9UL},{0x0D5FE7CFL,0x35A02935L,4294967293UL,0xF90004EAL,0xF90004EAL},{0x70412629L,0x35A02935L,0x70412629L,9UL,0xF90004EAL},{0x0D5FE7CFL,0x711DA0FDL,0x70412629L,0xF90004EAL,9UL}}};
static uint8_t g_1023 = 0x98L;
static uint8_t g_1024 = 0x01L;
static uint8_t g_1025 = 0xBBL;
static uint8_t g_1026[1] = {0x66L};
static uint8_t g_1027 = 0UL;
static uint32_t g_1058 = 0x1D885478L;
static int32_t g_1125 = 0x86337405L;
static const uint32_t **g_1157 = (void*)0;
static uint8_t g_1174 = 246UL;
static int16_t * const ***g_1181 = (void*)0;
static uint8_t g_1230[2] = {0x11L,0x11L};
static union U2 **g_1239 = (void*)0;
static uint64_t g_1318 = 0x10411A4140B1F168LL;
static const int8_t g_1347 = (-1L);
static uint32_t *g_1370 = (void*)0;
static uint32_t ** const g_1369 = &g_1370;
static int8_t *g_1406 = &g_174;
static int8_t **g_1405 = &g_1406;
static uint32_t g_1481 = 0x87AEB83AL;
static int16_t *g_1489[4][5] = {{&g_278,&g_278,&g_278,&g_278,&g_278},{&g_278,&g_192,&g_278,&g_192,&g_278},{&g_278,&g_278,&g_278,&g_278,&g_278},{&g_278,&g_192,&g_278,&g_192,&g_278}};
static int16_t **g_1488 = &g_1489[0][2];
static int16_t ***g_1487 = &g_1488;
static int16_t ****g_1486 = &g_1487;
static int16_t ****g_1492 = (void*)0;
static uint16_t *g_1574 = (void*)0;
static uint16_t ** const g_1573[4][1][3] = {{{(void*)0,&g_1574,(void*)0}},{{&g_1574,(void*)0,&g_1574}},{{(void*)0,&g_1574,(void*)0}},{{&g_1574,(void*)0,&g_1574}}};
static int32_t g_1615[3] = {(-1L),(-1L),(-1L)};
static int64_t g_1809 = (-5L);
static union U2 ***g_1833 = (void*)0;
static union U2 ****g_1832 = &g_1833;
static union U2 *****g_1831 = &g_1832;



static uint16_t  func_1(void);
static uint8_t  func_6(int32_t * p_7, const uint16_t  p_8, int32_t * p_9, uint8_t  p_10);
static int16_t  func_11(int32_t * p_12, uint64_t  p_13, int16_t  p_14, int32_t * p_15);
static int32_t * func_16(int32_t * p_17, uint16_t  p_18, int32_t * p_19);
static const union U1 * func_46(int32_t ** p_47, uint32_t  p_48);
static uint16_t  func_60(int32_t * const * p_61, uint16_t  p_62, int32_t ** p_63, uint64_t  p_64, union U1 * const  p_65);
static uint32_t  func_67(int8_t  p_68, uint32_t  p_69, int32_t  p_70, const uint32_t  p_71);
static int32_t * func_86(uint8_t  p_87, union U2  p_88);




static uint16_t  func_1(void)
{ 
    int32_t l_2 = 0xC9FB37B0L;
    int32_t *l_3 = &g_4;
    int8_t l_27 = 0x97L;
    int32_t *l_1124[5][4] = {{&g_1125,&g_1125,&g_1125,&g_1125},{&g_1125,&g_1125,&g_1125,&g_1125},{&g_1125,&g_1125,&g_1125,&g_1125},{&g_1125,&g_1125,&g_1125,&g_1125},{&g_1125,&g_1125,&g_1125,&g_1125}};
    uint64_t l_1126 = 0x9DE493CCAA9533EELL;
    const uint64_t l_1197 = 0xDFA29CE2E3DA8851LL;
    uint16_t l_1250 = 65535UL;
    struct S0 l_1268 = {0x58524A37L,0xF2006AC4L,-2L,-1L};
    uint32_t *l_1307 = &l_1268.f1;
    uint32_t **l_1306 = &l_1307;
    uint8_t *l_1343[2];
    int8_t l_1346 = 1L;
    int16_t l_1400 = 0xF537L;
    union U2 *l_1412 = (void*)0;
    union U2 **l_1411 = &l_1412;
    int16_t l_1438 = 0L;
    int32_t l_1462 = 0x7C9FB14CL;
    uint32_t l_1466[6][4][7] = {{{18446744073709551607UL,18446744073709551615UL,1UL,8UL,0x1B6D7757L,0xBB62273EL,0x3A6EA07DL},{0x543CCADAL,0xC4530935L,0x879E403FL,0x839BB7BAL,8UL,18446744073709551609UL,0x424985B8L},{8UL,0x424985B8L,0x424985B8L,0x424985B8L,2UL,0x8C615D99L,1UL},{8UL,0x92860225L,0x8BD9DCA0L,1UL,0xBB62273EL,0x1FE03453L,0x8C615D99L}},{{18446744073709551615UL,18446744073709551615UL,0x0A03FB10L,18446744073709551607UL,0x9363E465L,0x66F0B45CL,1UL},{0x839BB7BAL,0x92860225L,18446744073709551615UL,18446744073709551609UL,18446744073709551615UL,1UL,0x9363E465L},{8UL,2UL,1UL,0UL,0x58EA95E7L,7UL,18446744073709551615UL},{18446744073709551615UL,0x3F56D312L,18446744073709551607UL,0xA0D574A4L,2UL,0UL,3UL}},{{0x5359C8E5L,0x543CCADAL,0x9363E465L,7UL,18446744073709551612UL,0x60885044L,18446744073709551615UL},{1UL,0x66F0B45CL,0x9363E465L,18446744073709551607UL,0x0A03FB10L,18446744073709551615UL,18446744073709551615UL},{0xAC96A886L,0x8C615D99L,18446744073709551607UL,0x72AB5B7BL,0x0786831AL,0x3A6EA07DL,0x543CCADAL},{1UL,18446744073709551612UL,1UL,0x92860225L,0x92860225L,1UL,18446744073709551612UL}},{{0UL,0x585AAD43L,18446744073709551615UL,0UL,0x1B6D7757L,18446744073709551609UL,1UL},{1UL,0x543CCADAL,0x0A03FB10L,0x1FE03453L,0xA81F555EL,8UL,0UL},{0x1BB17EC6L,0x8BB5436BL,0x8BD9DCA0L,0UL,0x8C615D99L,0x66F0B45CL,1UL},{0xAC96A886L,0UL,0x424985B8L,0x92860225L,1UL,0xAC96A886L,0x72AB5B7BL}},{{8UL,18446744073709551607UL,1UL,0x72AB5B7BL,0x58EA95E7L,0x1FE03453L,18446744073709551612UL},{0x9363E465L,0xBB62273EL,0UL,18446744073709551607UL,1UL,0x879E403FL,0x7107FDF5L},{18446744073709551615UL,0x92860225L,0x8C615D99L,7UL,1UL,8UL,0x9363E465L},{8UL,1UL,0UL,0xA0D574A4L,0x58EA95E7L,0x8BB5436BL,0x839BB7BAL}},{{0x839BB7BAL,18446744073709551609UL,18446744073709551607UL,0UL,1UL,1UL,0UL},{0x5359C8E5L,0x7107FDF5L,0x5359C8E5L,18446744073709551609UL,0x8C615D99L,0x60885044L,18446744073709551615UL},{0x543CCADAL,0x585AAD43L,0UL,18446744073709551607UL,0xA81F555EL,0x58EA95E7L,1UL},{0x1FE03453L,0x8C615D99L,0x58EA95E7L,1UL,0x1B6D7757L,0x60885044L,0x543CCADAL}}};
    int64_t l_1467 = 0x29146A137842B7C6LL;
    union U1 l_1470 = {0x99CC9456L};
    union U2 l_1478 = {0xC56D5D009A12D4F6LL};
    uint8_t l_1516 = 0x09L;
    int16_t l_1560 = 0x885CL;
    int8_t * const *l_1584 = &g_1406;
    const uint8_t l_1625[5] = {0x72L,0x72L,0x72L,0x72L,0x72L};
    uint32_t l_1648 = 0xC30F6A4EL;
    union U2 *l_1693 = &g_90[0][1];
    uint32_t *l_1729 = (void*)0;
    uint32_t **l_1728 = &l_1729;
    uint8_t l_1745[6] = {0x00L,0x00L,255UL,0x00L,0x00L,255UL};
    int32_t l_1775 = 0x51F298E6L;
    const uint64_t l_1791 = 9UL;
    uint8_t l_1834 = 3UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1343[i] = &g_1174;
    (*l_3) ^= l_2;
    l_1126 |= (+func_6(&g_4, (((func_11(func_16(&g_4, (--g_20), &g_4), (safe_lshift_func_int8_t_s_s(l_27, 5)), (*l_3), &g_4) <= g_248[4][0][0].f3) || 4UL) > g_271[1]), l_3, g_170[0].f1));
    for (g_934.f0 = 0; (g_934.f0 <= 1); g_934.f0 += 1)
    { 
        uint8_t l_1127[2];
        int32_t *l_1137 = &g_90[1][0].f2;
        int32_t l_1160 = 0x13EB9976L;
        int32_t l_1163 = 0L;
        int8_t l_1168 = (-1L);
        int32_t l_1172[7];
        union U2 ****l_1177 = (void*)0;
        struct S0 l_1182 = {0x0D83D194L,0x8017B9E2L,0x4B3E46F8L,0L};
        uint32_t **l_1184 = (void*)0;
        union U2 l_1248 = {-6L};
        uint8_t **l_1258 = &g_465;
        int32_t l_1265 = 0x22DF9DE8L;
        int64_t l_1294[5] = {0x734D59085BA6E238LL,0x734D59085BA6E238LL,0x734D59085BA6E238LL,0x734D59085BA6E238LL,0x734D59085BA6E238LL};
        uint32_t **l_1308 = &l_1307;
        const int32_t *l_1364 = &l_1160;
        const int32_t **l_1363 = &l_1364;
        const int32_t ***l_1362[3][6];
        int32_t l_1410 = 0x78AD5221L;
        int8_t l_1433 = 0x4CL;
        int32_t l_1434 = 1L;
        int8_t l_1435 = 0L;
        union U1 l_1450 = {0x00189DF0L};
        int8_t l_1468 = 0x48L;
        int32_t l_1469 = 0x38105A53L;
        uint32_t l_1471 = 0UL;
        int16_t ****l_1493 = &g_1487;
        uint8_t l_1518 = 247UL;
        uint64_t l_1531[4][1] = {{1UL},{18446744073709551615UL},{1UL},{18446744073709551615UL}};
        uint32_t l_1561 = 0xFF12EBBEL;
        uint16_t **l_1578[4] = {&g_1574,&g_1574,&g_1574,&g_1574};
        int32_t *l_1582 = &l_1172[6];
        uint64_t l_1616 = 1UL;
        uint32_t l_1633 = 0x0FB72F84L;
        int16_t l_1649 = 0x0642L;
        uint64_t l_1653 = 0xD37F79948E055951LL;
        int32_t l_1674[5][3] = {{0L,0x184180C4L,0x184180C4L},{1L,0x15F12E29L,0x15F12E29L},{0L,0x184180C4L,0x184180C4L},{1L,0x15F12E29L,0x15F12E29L},{0L,0x184180C4L,0x52FC1F50L}};
        int32_t l_1697 = 0x5014A101L;
        int8_t l_1698 = 0x47L;
        int32_t l_1716 = (-1L);
        const uint32_t *l_1732 = &g_654;
        const uint32_t **l_1731[3];
        int16_t ****l_1743 = &g_1487;
        int32_t l_1778 = 0xFC4D0A63L;
        int32_t *l_1793[4][7] = {{(void*)0,&l_1716,&l_1716,(void*)0,&l_1716,&l_1716,(void*)0},{&l_1160,&l_1160,&l_1160,(void*)0,&l_1674[3][0],(void*)0,&l_1160},{(void*)0,(void*)0,&l_1172[5],(void*)0,(void*)0,&l_1172[5],(void*)0},{&l_1674[3][0],(void*)0,&l_1160,&l_1160,&l_1160,(void*)0,&l_1674[3][0]}};
        int32_t l_1795 = 0x9C8F198FL;
        const int16_t l_1797 = 1L;
        uint8_t l_1810 = 0x93L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1127[i] = 255UL;
        for (i = 0; i < 7; i++)
            l_1172[i] = (-1L);
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
                l_1362[i][j] = &l_1363;
        }
        for (i = 0; i < 3; i++)
            l_1731[i] = &l_1732;
        --l_1127[0];
    }
    return (*l_3);
}



static uint8_t  func_6(int32_t * p_7, const uint16_t  p_8, int32_t * p_9, uint8_t  p_10)
{ 
    int32_t * const l_858 = &g_90[1][0].f2;
    int8_t l_861[3];
    uint8_t **l_882 = &g_465;
    int32_t l_896 = 1L;
    uint64_t *l_928 = &g_335;
    int32_t l_940 = 1L;
    int32_t l_941 = 4L;
    int32_t l_944 = 0xC6C45834L;
    int32_t l_947 = 1L;
    int32_t l_948 = (-2L);
    int32_t l_949[6][4][2] = {{{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)}},{{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)}},{{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)}},{{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)}},{{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)}},{{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)},{(-6L),(-6L)}}};
    int32_t l_950 = 0x4C5B123AL;
    int32_t l_952 = (-9L);
    uint8_t l_953 = 254UL;
    union U1 l_960[3] = {{0xE1A5D577L},{0xE1A5D577L},{0xE1A5D577L}};
    uint32_t l_965[3];
    int16_t *l_988 = &g_278;
    int16_t **l_987 = &l_988;
    int16_t ***l_1035[7][6][3] = {{{&l_987,&l_987,(void*)0},{(void*)0,(void*)0,&l_987},{&l_987,&l_987,(void*)0},{(void*)0,(void*)0,&l_987},{&l_987,(void*)0,&l_987},{&l_987,&l_987,&l_987}},{{(void*)0,&l_987,&l_987},{&l_987,&l_987,&l_987},{(void*)0,&l_987,(void*)0},{&l_987,&l_987,&l_987},{&l_987,&l_987,(void*)0},{&l_987,&l_987,&l_987}},{{&l_987,&l_987,(void*)0},{(void*)0,(void*)0,&l_987},{&l_987,&l_987,&l_987},{&l_987,(void*)0,&l_987},{&l_987,&l_987,&l_987},{(void*)0,&l_987,&l_987}},{{&l_987,(void*)0,(void*)0},{&l_987,&l_987,&l_987},{(void*)0,(void*)0,(void*)0},{&l_987,&l_987,&l_987},{&l_987,&l_987,&l_987},{&l_987,&l_987,(void*)0}},{{&l_987,&l_987,(void*)0},{&l_987,&l_987,&l_987},{(void*)0,&l_987,&l_987},{&l_987,&l_987,&l_987},{&l_987,&l_987,&l_987},{(void*)0,(void*)0,&l_987}},{{&l_987,(void*)0,&l_987},{&l_987,&l_987,&l_987},{&l_987,(void*)0,&l_987},{(void*)0,&l_987,(void*)0},{&l_987,&l_987,(void*)0},{&l_987,&l_987,&l_987}},{{&l_987,&l_987,&l_987},{&l_987,&l_987,(void*)0},{&l_987,&l_987,&l_987},{&l_987,&l_987,&l_987},{&l_987,&l_987,&l_987},{&l_987,&l_987,(void*)0}}};
    int32_t l_1072[6] = {0x5D455DA2L,0x5D455DA2L,0x5D455DA2L,0x5D455DA2L,0x5D455DA2L,0x5D455DA2L};
    struct S0 l_1077 = {18446744073709551613UL,0UL,0xCE2F8A85L,1L};
    union U2 *l_1099 = (void*)0;
    union U2 **l_1098[2][5];
    union U2 ***l_1097 = &l_1098[0][4];
    union U2 ****l_1100 = &l_1097;
    uint16_t l_1123 = 0xBF82L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_861[i] = 0xE8L;
    for (i = 0; i < 3; i++)
        l_965[i] = 4294967295UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_1098[i][j] = &l_1099;
    }
    for (g_4 = 2; (g_4 >= 0); g_4 -= 1)
    { 
        int32_t *l_862 = (void*)0;
        int32_t *l_863 = &g_397.f2;
        uint8_t **l_881 = &g_465;
        int32_t l_938 = 9L;
        int32_t l_943 = 0L;
        int32_t l_945 = (-1L);
        int32_t l_946[1][6][7];
        int64_t l_951 = 0x4E6C52293C366499LL;
        union U1 **l_966 = &g_931;
        uint8_t l_1059 = 0UL;
        int64_t l_1062[6] = {8L,(-1L),8L,8L,(-1L),8L};
        struct S0 ** const l_1063[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t *l_1066 = &l_938;
        int32_t *l_1067 = &l_945;
        int32_t *l_1068 = &l_945;
        int32_t *l_1069 = &l_945;
        int32_t *l_1070 = &l_945;
        int32_t *l_1071[7] = {&l_952,&l_952,&l_952,&l_952,&l_952,&l_952,&l_952};
        int32_t l_1073 = 9L;
        uint32_t l_1074 = 1UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 7; k++)
                    l_946[i][j][k] = (-1L);
            }
        }
        if (((((p_7 != l_858) < (safe_rshift_func_int16_t_s_u((((*l_863) &= ((*l_858) &= l_861[1])) , ((safe_rshift_func_uint16_t_u_u((g_654 & (safe_rshift_func_uint16_t_u_s(g_654, (safe_unary_minus_func_int32_t_s(((*l_863) = (safe_sub_func_uint16_t_u_u(p_10, (safe_mod_func_int64_t_s_s(2L, 0x813774B30995C519LL)))))))))), 3)) == (*l_858))), 5))) | 255UL) <= 3UL))
        { 
            uint32_t l_873 = 0xB7303219L;
            int64_t l_876 = 0xB6B1C186511DA690LL;
            const union U2 l_887[1] = {{0x0FB15990F2FA8558LL}};
            int64_t *l_890 = &g_634[0];
            int64_t *l_891 = &g_397.f0;
            int64_t *l_892 = (void*)0;
            int64_t *l_893 = &g_90[1][0].f0;
            int64_t *l_894 = &g_90[1][0].f0;
            int64_t *l_895 = (void*)0;
            struct S0 *l_897 = &g_171;
            int64_t l_903[1][2];
            int32_t l_927 = 0x7B581BEFL;
            int32_t l_929 = (-2L);
            int32_t l_937 = 0xD2BC759BL;
            int32_t l_939 = (-1L);
            int32_t l_942[5][2] = {{0xEB87DEA5L,0xEB87DEA5L},{0xEB87DEA5L,0xEB87DEA5L},{0xEB87DEA5L,0xEB87DEA5L},{0xEB87DEA5L,0xEB87DEA5L},{0xEB87DEA5L,0xEB87DEA5L}};
            int16_t **l_989 = &l_988;
            uint32_t l_1030 = 0xC6D8A9C0L;
            union U2 *l_1056 = (void*)0;
            union U2 **l_1055 = &l_1056;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_903[i][j] = 0xA0B9A60E1E8B9A30LL;
            }
            l_873--;
            l_896 |= (l_876 > (safe_rshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_u(((l_882 = l_881) == &g_465), 13)) >= (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_887[0] , 1UL), (safe_mul_func_uint8_t_u_u((((*l_858) |= ((*l_891) = ((*l_890) = (g_122 & 1L)))) || (*l_858)), 0L)))), 13))) > g_196), p_8)));
            if (((*l_858) |= (*p_9)))
            { 
                struct S0 **l_898 = &g_296;
                union U1 *l_930 = &g_252[1];
                union U1 **l_935 = &l_930;
                int32_t *l_936[5][3];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_936[i][j] = &g_397.f2;
                }
                (*l_898) = l_897;
                if ((*p_9))
                    continue;
                for (g_126 = 4; (g_126 >= 0); g_126 -= 1)
                { 
                    int i, j;
                    (*l_863) = ((safe_rshift_func_uint16_t_u_s(((g_90[g_4][g_4] , ((safe_mod_func_int64_t_s_s((p_10 < l_903[0][1]), p_8)) , (safe_unary_minus_func_uint64_t_u((safe_div_func_uint32_t_u_u(g_675[1], (safe_rshift_func_uint8_t_u_u(((g_171.f3 != (safe_add_func_int64_t_s_s(g_57.f0, 0xD4EC18AB24B4CDEALL))) & 1UL), p_8)))))))) , 0xB8FBL), 0)) , 0xDEC08F09L);
                    l_929 = (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((8UL || (safe_div_func_uint64_t_u_u((!p_10), (+(safe_rshift_func_uint16_t_u_s(((((safe_mul_func_uint16_t_u_u(2UL, p_10)) != g_252[1].f0) ^ (p_8 != ((((safe_div_func_int16_t_s_s((l_927 = (g_196 , g_252[1].f0)), g_57.f0)) , p_10) , (void*)0) == l_928))) && p_8), p_10)))))), p_8)), l_887[0].f0));
                }
                (*l_935) = (g_933 = (g_931 = l_930));
                l_953--;
            }
            else
            { 
                int16_t l_961 = (-4L);
                uint16_t l_964 = 0xFA12L;
                (*l_863) = (((p_10 > l_903[0][0]) <= ((safe_mod_func_int8_t_s_s(((p_8 & (safe_rshift_func_int16_t_s_s((((l_960[0] , ((l_961 != (((safe_mod_func_uint64_t_u_u(l_961, (-1L))) || g_634[2]) < l_964)) >= l_965[2])) && p_8) <= 0x80E80FBBL), 4))) < (*l_863)), p_8)) | 0xB1L)) , (-1L));
            }
            if (((void*)0 != l_966))
            { 
                uint32_t l_971 = 0x47C6E18BL;
                uint16_t *l_975 = &g_196;
                int16_t l_984 = (-3L);
                int16_t *l_985 = &g_278;
                int16_t *l_986 = &g_192;
                if (((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(l_971, (((*l_975) ^= ((safe_unary_minus_func_int64_t_s((safe_lshift_func_int16_t_s_s(0x1365L, 15)))) || 65528UL)) , (g_976[0][3][3] | (safe_mul_func_int16_t_s_s(l_971, (((safe_sub_func_int16_t_s_s(((*l_986) = ((*l_985) = ((safe_rshift_func_int8_t_s_s(((-1L) <= (~((*l_897) , l_984))), 3)) >= 0x66A51DCB2758F658LL))), g_55.f0)) , l_987) != l_989))))))) == l_873), 0xF736L)) || (*l_858)))
                { 
                    return p_8;
                }
                else
                { 
                    return (*l_858);
                }
            }
            else
            { 
                uint16_t l_996 = 0x9725L;
                int16_t l_1005[4];
                int32_t l_1006 = (-10L);
                int8_t *l_1011 = &g_174;
                int32_t l_1012 = 0xDEB8EF95L;
                int i;
                for (i = 0; i < 4; i++)
                    l_1005[i] = 0x7926L;
                for (g_278 = 2; (g_278 >= 0); g_278 -= 1)
                { 
                    int32_t *l_990 = &l_942[1][1];
                    int32_t *l_991 = (void*)0;
                    int32_t l_992 = 1L;
                    int32_t *l_993 = &l_941;
                    int32_t *l_994 = &l_937;
                    int32_t *l_995 = (void*)0;
                    int i, j;
                    if (l_965[g_278])
                        break;
                    if ((*p_7))
                        continue;
                    if ((*g_137))
                        continue;
                    ++l_996;
                }
                if (((!(safe_add_func_uint64_t_u_u(((g_278 | ((!(((*l_1011) &= (safe_mod_func_int16_t_s_s(l_1005[3], (1UL | (((*l_858) = ((l_1006 |= (-4L)) ^ l_996)) | (safe_add_func_uint32_t_u_u((p_10 <= (((safe_mul_func_uint8_t_u_u(l_887[0].f3, 0x1EL)) >= p_10) < p_8)), (*p_7)))))))) & l_1012)) < l_996)) >= 0x17L), (*l_863)))) <= l_1005[3]))
                { 
                    uint64_t l_1016 = 7UL;
                    uint8_t **l_1017 = (void*)0;
                    uint8_t * const l_1022[5][3] = {{&g_1023,&g_1025,&g_1023},{&g_1026[0],&g_1027,&g_1024},{&g_1026[0],&g_1026[0],&g_1027},{&g_1023,&g_1027,&g_1027},{&g_1027,&g_1025,&g_1024}};
                    uint8_t * const *l_1021[6][7] = {{&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1]},{&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1]},{&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1]},{&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1]},{&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1],&l_1022[1][1]},{&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1],&l_1022[0][1]}};
                    uint8_t * const **l_1020 = &l_1021[5][4];
                    int32_t **l_1028 = &g_53[1];
                    int32_t *l_1029[3][1][2] = {{{&l_941,&l_941}},{{&l_941,&l_941}},{{&l_941,&l_941}}};
                    int16_t ***l_1033 = &l_989;
                    int16_t ****l_1034[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1034[i] = &l_1033;
                    (*l_1028) = ((((!g_932.f0) || ((*l_858) = (0L && (safe_mul_func_int16_t_s_s((l_1016 ^ (1UL & 6L)), (l_1017 != ((*l_1020) = ((~(!g_976[0][3][3])) , (void*)0)))))))) ^ 0xC4EEL) , p_7);
                    l_937 = (*l_858);
                    ++l_1030;
                    l_1035[0][2][0] = l_1033;
                    l_1006 = (*g_137);
                }
                else
                { 
                    uint32_t l_1041 = 0x5BEFD362L;
                    uint32_t *l_1042 = &g_170[0].f0;
                    struct S0 l_1046 = {0x8A724A95L,0x19DEEA5EL,-10L,0x9C8CL};
                    union U2 *l_1052 = &g_90[0][2];
                    union U2 **l_1051 = &l_1052;
                    union U2 ***l_1053 = (void*)0;
                    union U2 ***l_1054 = &l_1051;
                    union U2 ***l_1057 = &l_1055;
                    l_942[1][0] |= (*l_863);
                    l_1059 ^= ((*p_7) && (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((g_675[1] > ((*l_858) = ((*l_863) = ((+(((((*l_1042) = l_1041) , ((~((safe_lshift_func_int16_t_s_s((l_1046 , ((**l_966) , ((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((((*l_1054) = l_1051) != ((*l_1057) = l_1055)), g_171.f1)), 1)) > 1L))), (*l_858))) > (*l_863))) | 0x398FC8D09AF7853FLL)) > (*p_7)) && g_1058)) || 0UL)))), 5)), (-7L))));
                }
                (*l_858) |= l_887[0].f3;
            }
        }
        else
        { 
            return g_768[3][4][0];
        }
        (*l_858) |= ((((safe_sub_func_uint64_t_u_u((l_1062[4] <= 0x7EL), (l_1063[2][0] == (void*)0))) & (((p_10 , ((((safe_sub_func_uint8_t_u_u(p_10, 0x0EL)) != (*p_7)) & (*l_863)) , (*p_7))) ^ g_768[3][4][0]) > p_8)) || p_8) , (*g_137));
        ++l_1074;
        p_9 = (l_1077 , func_16(&l_938, g_90[1][0].f1, p_7));
        for (l_1074 = 0; (l_1074 <= 4); l_1074 += 1)
        { 
            int32_t l_1085 = 0xE5BE441DL;
            int i, j;
            if ((*p_7))
                break;
            for (g_335 = 0; (g_335 <= 2); g_335 += 1)
            { 
                uint32_t *l_1082[2];
                uint32_t **l_1081 = &l_1082[1];
                int32_t *l_1086[2];
                int8_t l_1087 = 0xF6L;
                uint32_t *l_1088 = &g_932.f3.f1;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1082[i] = &g_768[3][4][0];
                for (i = 0; i < 2; i++)
                    l_1086[i] = &g_934.f2.f2;
                (*l_1068) |= (!(((((*l_1088) = (!((l_1087 |= (((safe_unary_minus_func_int16_t_s((((*l_1081) = p_9) == &g_768[(g_4 + 1)][(g_4 + 2)][g_335]))) < (safe_sub_func_int8_t_s_s(((((l_1077 , p_10) || 0xCCF488850616BD15LL) != (p_8 != (p_8 & 0x696571051F0DFD3FLL))) | l_1085), g_768[(g_4 + 1)][(g_4 + 2)][g_335]))) <= 0x6BA2FAC93C09986ALL)) , 0xD6EB549BA5E3D57ALL))) ^ 0xFA4DA0E5L) & (*l_858)) && p_8));
            }
        }
    }
    for (l_944 = 4; (l_944 >= 0); l_944 -= 1)
    { 
        int i;
        return l_1072[(l_944 + 1)];
    }
    (*l_858) = (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((g_278 , (&g_192 == (((*l_858) >= (((-3L) <= (safe_mul_func_uint8_t_u_u((*l_858), ((*p_7) < ((((*l_1100) = l_1097) == (void*)0) , (*l_858)))))) <= (*l_858))) , (void*)0))), p_8)), (*l_858))) & 0x2526L) & g_248[4][0][0].f1);
    for (g_934.f0 = 0; (g_934.f0 > 13); g_934.f0++)
    { 
        uint64_t l_1108[3];
        int32_t l_1120 = (-1L);
        int32_t l_1121 = 0x025E3C2FL;
        int32_t *l_1122 = &l_952;
        int i;
        for (i = 0; i < 3; i++)
            l_1108[i] = 0x09B83BC40564AC72LL;
        (*g_137) ^= (-9L);
        (*l_1122) |= ((+(*l_858)) & (l_1121 &= (safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((g_976[0][2][1] , (((((l_1108[1] <= ((!(safe_add_func_uint16_t_u_u((g_90[1][0] , ((safe_div_func_int16_t_s_s((l_1120 = (l_1077 , (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(2L, (safe_mod_func_uint16_t_u_u(g_397.f3, p_10)))), (*l_858))) & g_4) , 0x34E2L))), p_8)) ^ 4294967292UL)), (*l_858)))) & g_4)) || 0x45132510FD2A4EEDLL) <= l_1108[1]) && 0UL) ^ (*p_9))) , (*p_7)), (*p_9))), p_10))));
    }
    return l_1123;
}



static int16_t  func_11(int32_t * p_12, uint64_t  p_13, int16_t  p_14, int32_t * p_15)
{ 
    int32_t *l_28 = &g_4;
    int32_t *l_29 = (void*)0;
    int32_t *l_30 = &g_4;
    int32_t l_31 = (-1L);
    int32_t *l_32 = &g_4;
    int32_t *l_33 = &g_4;
    int32_t l_34 = 0x2E6C0B33L;
    int32_t *l_35 = &g_4;
    int32_t *l_36 = &l_31;
    int32_t l_37 = 0xBFCC013CL;
    int32_t l_38 = 0L;
    int32_t *l_39 = &l_37;
    int32_t *l_40 = &l_38;
    int32_t *l_41 = &l_38;
    int32_t *l_42 = &l_37;
    uint64_t l_43[4];
    int32_t **l_49[3][6] = {{&l_30,(void*)0,&l_30,&l_30,(void*)0,&l_30},{&l_30,(void*)0,&l_30,&l_30,(void*)0,&l_30},{&l_30,(void*)0,&l_30,&l_30,(void*)0,&l_30}};
    const union U1 *l_56 = &g_57;
    struct S0 l_72 = {0xCF75BAE5L,0xD571E957L,9L,0L};
    uint32_t *l_77 = &l_72.f1;
    union U1 * const l_683 = &g_170[0];
    uint16_t *l_833 = &g_122;
    int64_t *l_834[5][4][6] = {{{&g_634[1],&g_90[1][0].f0,&g_634[0],&g_397.f0,&g_90[1][0].f0,&g_634[0]},{&g_634[1],&g_634[0],&g_397.f0,(void*)0,&g_634[0],&g_90[1][0].f0},{&g_634[2],(void*)0,&g_634[5],&g_634[1],&g_634[5],&g_90[1][0].f0},{&g_634[0],&g_90[1][0].f0,&g_634[0],&g_90[1][0].f0,&g_634[0],&g_90[1][0].f0}},{{(void*)0,&g_90[1][0].f0,&g_634[5],(void*)0,&g_634[3],&g_90[1][0].f0},{&g_90[1][0].f0,(void*)0,&g_397.f0,&g_90[1][0].f0,&g_634[0],&g_634[0]},{&g_397.f0,(void*)0,&g_634[0],(void*)0,&g_634[0],(void*)0},{&g_634[3],(void*)0,&g_634[3],&g_397.f0,&g_634[3],&g_634[0]}},{{&g_90[1][0].f0,&g_90[1][0].f0,&g_634[1],&g_634[0],&g_397.f0,&g_634[0]},{(void*)0,&g_634[0],(void*)0,&g_634[0],&g_634[1],(void*)0},{&g_397.f0,&g_397.f0,&g_634[0],(void*)0,&g_634[3],(void*)0},{(void*)0,&g_90[1][0].f0,&g_397.f0,&g_397.f0,&g_634[0],&g_634[0]}},{{&g_397.f0,&g_634[0],&g_397.f0,(void*)0,&g_397.f0,(void*)0},{(void*)0,(void*)0,&g_634[0],&g_397.f0,&g_634[5],(void*)0},{&g_397.f0,&g_634[5],(void*)0,&g_397.f0,&g_634[0],&g_634[0]},{&g_90[1][0].f0,&g_634[5],&g_634[1],&g_634[1],&g_634[5],&g_90[1][0].f0}},{{&g_634[0],(void*)0,(void*)0,&g_634[0],&g_397.f0,&g_397.f0},{&g_634[1],&g_634[0],&g_90[1][0].f0,&g_397.f0,&g_634[0],&g_634[0]},{&g_634[1],&g_90[1][0].f0,&g_397.f0,&g_634[0],&g_634[3],&g_397.f0},{&g_634[0],&g_397.f0,&g_397.f0,&g_634[1],&g_634[1],(void*)0}}};
    uint64_t l_852 = 18446744073709551612UL;
    int64_t l_855 = 0x7B510557668A25C2LL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_43[i] = 0xA9C5A74D4B4B26D8LL;
lbl_853:
    ++l_43[3];
    l_56 = func_46(l_49[0][5], (*l_36));
lbl_857:
    (*g_137) = (safe_add_func_uint16_t_u_u(func_60((((((safe_unary_minus_func_int32_t_s((func_67((l_72 , ((safe_rshift_func_uint8_t_u_s((g_55.f1 >= ((++(*l_77)) <= (safe_unary_minus_func_uint32_t_u((g_20 = g_55.f0))))), (8UL > 0L))) && (safe_lshift_func_uint8_t_u_s(1UL, (g_55.f1 | 0xA2DD44351D5E8E05LL))))), (*l_28), (*p_12), p_13) , (*p_15)))) , p_13) == p_14) <= p_14) , (void*)0), p_13, &l_33, g_174, l_683), (-6L)));
    (*l_30) = ((void*)0 == g_825);
    if ((p_13 ^ (1UL | ((safe_mul_func_uint8_t_u_u((*l_39), (((safe_mul_func_uint16_t_u_u(g_271[1], (safe_add_func_uint8_t_u_u(((!(g_634[0] |= ((g_126 ^= (p_13 | ((*l_39) >= ((*l_833) = ((*p_15) || 0x2338CC70L))))) < (*l_28)))) > 0x6EC3L), g_171.f1)))) != (*p_15)) , p_13))) || p_14))))
    { 
        uint8_t l_843 = 250UL;
        (*p_12) ^= ((safe_mul_func_uint8_t_u_u(0x6CL, (g_654 != ((safe_sub_func_uint8_t_u_u(((((g_252[1] , p_13) || g_196) , 0xD1L) > (safe_sub_func_int8_t_s_s(((((((-1L) > (-1L)) || l_843) , 0x81L) ^ g_252[1].f0) != l_843), (*l_36)))), p_13)) == l_843)))) , 0x5A172E79L);
    }
    else
    { 
        int16_t *l_851[4] = {&g_192,&g_192,&g_192,&g_192};
        int16_t **l_850 = &l_851[2];
        int32_t l_854 = 0L;
        int32_t l_856 = (-6L);
        int i;
        if (((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(g_271[1], ((((*l_850) = &g_192) == &p_14) ^ ((g_171.f3 | 0x00L) || g_278)))), 0x84L)), 0x7FB36BF5L)) | l_852))
        { 
            if (l_37)
                goto lbl_853;
            (*l_40) ^= (l_854 > (g_634[2] = l_855));
            return l_856;
        }
        else
        { 
            if (g_55.f1)
                goto lbl_857;
        }
    }
    return p_14;
}



static int32_t * func_16(int32_t * p_17, uint16_t  p_18, int32_t * p_19)
{ 
    int32_t *l_24 = (void*)0;
    int32_t **l_23 = &l_24;
    (*l_23) = p_17;
    return &g_4;
}



static const union U1 * func_46(int32_t ** p_47, uint32_t  p_48)
{ 
    int32_t **l_50 = (void*)0;
    int32_t *l_52[7] = {&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4};
    int32_t **l_51[5][6][4] = {{{&l_52[3],&l_52[5],&l_52[0],&l_52[6]},{(void*)0,&l_52[1],&l_52[6],&l_52[1]},{&l_52[0],&l_52[3],&l_52[0],&l_52[2]},{&l_52[1],(void*)0,(void*)0,&l_52[5]},{&l_52[2],&l_52[1],&l_52[5],(void*)0},{&l_52[1],&l_52[0],&l_52[0],&l_52[1]}},{{&l_52[1],&l_52[2],&l_52[2],&l_52[3]},{&l_52[0],&l_52[0],&l_52[1],&l_52[5]},{&l_52[5],&l_52[1],&l_52[1],&l_52[5]},{&l_52[3],&l_52[0],(void*)0,&l_52[3]},{&l_52[1],&l_52[2],&l_52[4],&l_52[1]},{&l_52[2],&l_52[0],&l_52[5],(void*)0}},{{(void*)0,&l_52[1],&l_52[5],&l_52[5]},{&l_52[0],(void*)0,&l_52[2],&l_52[2]},{&l_52[5],&l_52[3],&l_52[1],&l_52[1]},{&l_52[1],&l_52[1],&l_52[6],&l_52[6]},{&l_52[1],&l_52[5],&l_52[1],&l_52[1]},{&l_52[1],&l_52[1],&l_52[3],&l_52[1]}},{{&l_52[1],&l_52[1],&l_52[1],(void*)0},{&l_52[2],(void*)0,&l_52[3],(void*)0},{&l_52[1],&l_52[1],&l_52[2],&l_52[1]},{&l_52[1],&l_52[1],&l_52[3],&l_52[1]},{&l_52[2],&l_52[1],&l_52[1],&l_52[6]},{&l_52[1],&l_52[2],&l_52[3],&l_52[1]}},{{&l_52[1],&l_52[5],&l_52[1],&l_52[1]},{&l_52[1],&l_52[5],&l_52[6],(void*)0},{&l_52[1],&l_52[3],&l_52[1],(void*)0},{&l_52[5],&l_52[1],(void*)0,&l_52[6]},{&l_52[4],&l_52[1],&l_52[1],&l_52[3]},{&l_52[5],&l_52[1],&l_52[4],&l_52[4]}}};
    const union U1 *l_54 = &g_55;
    int i, j, k;
    g_53[1] = &g_4;
    return l_54;
}



static uint16_t  func_60(int32_t * const * p_61, uint16_t  p_62, int32_t ** p_63, uint64_t  p_64, union U1 * const  p_65)
{ 
    int32_t *l_684 = &g_397.f2;
    uint8_t l_704 = 0x9EL;
    struct S0 *l_706 = &g_171;
    union U2 l_710 = {0xEBAACE1746E6793DLL};
    int8_t *l_778 = &g_126;
    int32_t l_784[7][4] = {{(-3L),(-3L),0x56F24B2BL,0x56F24B2BL},{(-3L),(-3L),0x56F24B2BL,0x56F24B2BL},{(-3L),(-3L),0x56F24B2BL,0x56F24B2BL},{(-3L),(-3L),0x56F24B2BL,0x56F24B2BL},{(-3L),(-3L),0x56F24B2BL,0x56F24B2BL},{(-3L),(-3L),0x56F24B2BL,0x56F24B2BL},{(-3L),(-3L),0x56F24B2BL,0x56F24B2BL}};
    int16_t l_816 = 3L;
    uint8_t l_817 = 0x61L;
    int i, j;
    for (g_126 = 0; (g_126 <= 1); g_126 += 1)
    { 
        struct S0 l_693 = {18446744073709551615UL,1UL,0x9B096546L,0x3F9BL};
        union U2 l_715 = {0x6AE6FCCF66730E47LL};
        int64_t *l_716 = &g_634[0];
        uint64_t *l_717 = &g_675[0];
        uint8_t *l_718 = &l_704;
        int16_t l_726 = 0xF24BL;
        int32_t l_747 = 0x466310BEL;
        int32_t l_748 = 0xED3C673BL;
        int64_t l_749 = (-10L);
        int32_t l_750 = 0L;
        int64_t *l_791[1][7] = {{&g_634[1],&g_634[1],&g_634[1],&g_634[1],&g_634[1],&g_634[1],&g_634[1]}};
        uint32_t l_822 = 8UL;
        int i, j;
        (*p_63) = l_684;
        for (g_278 = 1; (g_278 >= 0); g_278 -= 1)
        { 
            uint16_t *l_688 = &g_196;
            const int32_t l_705 = 8L;
            struct S0 **l_707 = &l_706;
        }
        if ((((*l_717) = (safe_rshift_func_int8_t_s_s((l_710 , ((((*g_230) != &l_684) && (safe_rshift_func_int8_t_s_u((!0x48F7EFC9L), 5))) && ((l_710 , ((p_62 , (~(((*l_716) = (((l_715 , (void*)0) == (void*)0) >= (*l_684))) | p_64))) >= g_171.f0)) | p_64))), 7))) < p_64))
        { 
            uint8_t **l_719 = &g_465;
            (*p_63) = ((((l_718 == ((*l_719) = &l_704)) | (~6L)) , (--(*l_717))) , (*p_63));
        }
        else
        { 
            (*p_63) = (void*)0;
        }
    }
    return g_675[0];
}



static uint32_t  func_67(int8_t  p_68, uint32_t  p_69, int32_t  p_70, const uint32_t  p_71)
{ 
    int32_t *l_85[7][7] = {{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}};
    int64_t l_89[2][3] = {{1L,1L,1L},{0x8526697289F16C48LL,0x8526697289F16C48LL,0x8526697289F16C48LL}};
    union U1 **l_449[1];
    union U1 ***l_448 = &l_449[0];
    int32_t *l_456 = &g_397.f2;
    int16_t l_486 = 0xA711L;
    uint64_t *l_520 = &g_335;
    uint8_t l_538 = 2UL;
    uint32_t l_567 = 0x4CDA80C4L;
    const struct S0 *l_625 = &g_171;
    const int32_t *l_628 = &g_4;
    const int32_t **l_627 = &l_628;
    const int32_t ***l_626 = &l_627;
    int i, j;
    for (i = 0; i < 1; i++)
        l_449[i] = (void*)0;
    p_70 = p_68;
    g_53[0] = (void*)0;
    return g_171.f2;
}



static int32_t * func_86(uint8_t  p_87, union U2  p_88)
{ 
    int32_t l_93 = 0L;
    const int32_t *l_98[2];
    const int32_t **l_97 = &l_98[1];
    int32_t **l_100[4] = {&g_53[1],&g_53[1],&g_53[1],&g_53[1]};
    int32_t ***l_99 = &l_100[3];
    uint8_t *l_120[4][4][5] = {{{(void*)0,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,(void*)0},{&g_90[1][0].f1,(void*)0,(void*)0,&g_90[1][0].f1,&g_90[1][0].f1},{&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,(void*)0},{&g_90[1][0].f1,(void*)0,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1}},{{&g_90[1][0].f1,(void*)0,&g_90[1][0].f1,(void*)0,&g_90[1][0].f1},{&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1},{&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1},{&g_90[1][0].f1,&g_90[1][0].f1,(void*)0,&g_90[1][0].f1,(void*)0}},{{&g_90[1][0].f1,&g_90[1][0].f1,(void*)0,&g_90[1][0].f1,&g_90[1][0].f1},{&g_90[1][0].f1,&g_90[1][0].f1,(void*)0,(void*)0,(void*)0},{&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,(void*)0},{&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,(void*)0,&g_90[1][0].f1}},{{(void*)0,&g_90[1][0].f1,&g_90[1][0].f1,(void*)0,&g_90[1][0].f1},{&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1},{&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1,&g_90[1][0].f1},{(void*)0,&g_90[1][0].f1,(void*)0,&g_90[1][0].f1,(void*)0}}};
    int16_t *l_121[2];
    int64_t *l_123[6];
    int32_t l_124[5][1] = {{0x5201FEAEL},{0xEF1A95A0L},{0x5201FEAEL},{0xEF1A95A0L},{0x5201FEAEL}};
    int8_t *l_125 = &g_126;
    int32_t l_127[1];
    int32_t *l_135 = &l_127[0];
    int32_t *l_136[1];
    struct S0 l_150 = {0UL,2UL,0x8DE757AFL,0xBD10L};
    struct S0 *l_161 = &l_150;
    int32_t l_163 = 0x1D43F700L;
    int32_t *l_204 = &l_124[1][0];
    uint8_t l_239[7] = {0xD8L,0xD8L,0xD8L,0xD8L,0xD8L,0xD8L,0xD8L};
    int32_t l_264 = 0L;
    union U2 *l_298 = &g_90[2][2];
    union U2 **l_297 = &l_298;
    uint16_t *l_303 = &g_196;
    int32_t *l_310 = &l_124[2][0];
    int32_t *l_311 = &l_127[0];
    uint32_t l_318 = 0xDEE2A0FCL;
    int32_t l_347 = (-1L);
    int64_t l_353 = 0L;
    uint32_t l_371 = 18446744073709551609UL;
    const union U1 l_427 = {1UL};
    int32_t *l_429 = &l_347;
    int32_t *l_430[1][6][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int32_t *l_431 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_98[i] = &g_90[1][0].f2;
    for (i = 0; i < 2; i++)
        l_121[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_123[i] = &g_90[1][0].f0;
    for (i = 0; i < 1; i++)
        l_127[i] = (-6L);
    for (i = 0; i < 1; i++)
        l_136[i] = &l_124[2][0];
    if ((safe_rshift_func_int16_t_s_s((l_93 | ((l_127[0] = (~(safe_lshift_func_int8_t_s_u(((l_97 == ((*l_99) = (void*)0)) ^ (safe_lshift_func_int8_t_s_s(((*l_125) = (safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((l_124[2][0] = (safe_div_func_uint8_t_u_u(((+(safe_mod_func_int32_t_s_s(p_87, ((g_122 = ((((0x03EC6B4E22DD2E1BLL <= 1L) || (((p_88.f1 |= (safe_div_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_87, 0x07904212L)), 2)) < 0UL) , g_118) == (void*)0), 0xF590L))) && p_88.f1) && g_90[1][0].f0)) <= 0x9391L) , p_87)) , (**l_97))))) || p_88.f1), g_57.f1))), 0xD11FF246F767204CLL)), p_87))), g_55.f1))), 7)))) > p_87)), 13)))
    { 
        int32_t *l_131[2];
        int32_t *l_133[5][4][2] = {{{&l_127[0],&l_124[2][0]},{&l_127[0],&l_127[0]},{&l_127[0],&l_127[0]},{&l_127[0],&l_124[2][0]}},{{&l_124[2][0],&l_124[2][0]},{&l_127[0],&l_124[2][0]},{&l_124[2][0],&l_124[2][0]},{&l_127[0],&l_127[0]}},{{&l_127[0],&l_127[0]},{&l_127[0],&l_124[2][0]},{&l_127[0],&l_127[0]},{&l_127[0],&l_127[0]}},{{&l_127[0],&l_124[2][0]},{&l_124[2][0],&l_124[2][0]},{&l_127[0],&l_124[2][0]},{&l_124[2][0],&l_124[2][0]}},{{&l_127[0],&l_127[0]},{&l_127[0],&l_127[0]},{&l_127[0],&l_124[2][0]},{&l_127[0],&l_127[0]}}};
        int32_t *l_134 = &l_124[2][0];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_131[i] = &l_127[0];
        for (p_88.f1 = 0; (p_88.f1 < 49); p_88.f1 = safe_add_func_uint64_t_u_u(p_88.f1, 4))
        { 
            int32_t *l_130[7] = {&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0]};
            int32_t *l_132 = &l_127[0];
            int i;
            return g_137;
        }
        l_134 = l_133[3][1][0];
    }
    else
    { 
        uint64_t l_138 = 1UL;
lbl_143:
        --l_138;
        for (g_20 = 0; (g_20 != 48); g_20 = safe_add_func_uint16_t_u_u(g_20, 8))
        { 
            int32_t *l_144 = &l_124[1][0];
            if (g_20)
                goto lbl_143;
            l_144 = l_144;
        }
    }
    for (g_122 = 0; (g_122 >= 43); g_122++)
    { 
        uint8_t l_147 = 1UL;
        const int32_t *l_158 = (void*)0;
        int32_t l_160 = 1L;
        struct S0 **l_162 = &l_161;
        uint64_t l_168 = 0xDA6E296BD5CD4344LL;
        union U1 *l_169[7] = {&g_170[0],&g_170[0],&g_170[0],&g_170[0],&g_170[0],&g_170[0],&g_170[0]};
        int32_t **l_172[4] = {&g_53[3],&g_53[3],&g_53[3],&g_53[3]};
        int8_t * const l_173[3][2][4] = {{{&g_174,&g_174,&g_174,&g_174},{&g_174,&g_174,&g_174,&g_174}},{{&g_174,&g_174,&g_174,&g_174},{&g_174,&g_174,&g_174,&g_174}},{{&g_174,&g_174,&g_174,&g_174},{&g_174,&g_174,&g_174,&g_174}}};
        int32_t l_279 = (-1L);
        uint64_t l_280 = 18446744073709551614UL;
        uint64_t l_286 = 0xED7381C1FD8AE5C0LL;
        int i, j, k;
        l_160 = (l_147 == (safe_sub_func_uint32_t_u_u(p_88.f1, (l_150 , (safe_sub_func_int64_t_s_s((g_90[1][0].f1 , ((((safe_mod_func_int8_t_s_s(p_87, (safe_lshift_func_int8_t_s_s(((*l_125) &= (~(((l_158 == (void*)0) , g_159) != (void*)0))), 7)))) & p_87) , p_88.f1) <= 0xEBL)), 0x8E435D7CC8F446CBLL))))));
        (*l_162) = l_161;
        if ((0xB9C9A99DL != ((((l_163 | ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(((*l_125) ^= g_4), 5)) & (((*l_135) &= ((l_168 , l_169[0]) == (g_171 , func_46(((*l_99) = ((*g_118) = l_172[3])), p_87)))) ^ g_122)), p_87)) < g_57.f0)) , l_120[1][2][0]) == l_173[2][1][3]) <= g_90[1][0].f0)))
        { 
            struct S0 l_190[7] = {{0x90F2ED5BL,0x90560A05L,-10L,1L},{0x90F2ED5BL,0x90560A05L,-10L,1L},{0x90F2ED5BL,0x90560A05L,-10L,1L},{0x90F2ED5BL,0x90560A05L,-10L,1L},{0x90F2ED5BL,0x90560A05L,-10L,1L},{0x90F2ED5BL,0x90560A05L,-10L,1L},{0x90F2ED5BL,0x90560A05L,-10L,1L}};
            int32_t *l_201 = &l_127[0];
            int32_t ***l_229[6][4] = {{&l_172[2],&l_172[2],&l_172[2],&l_172[2]},{&l_172[2],&l_172[2],&l_172[2],&l_172[2]},{&l_172[2],&l_172[2],&l_172[2],&l_172[2]},{&l_172[2],&l_172[2],&l_172[2],&l_172[2]},{&l_172[2],&l_172[2],&l_172[2],&l_172[2]},{&l_172[2],&l_172[2],&l_172[2],&l_172[2]}};
            union U1 *l_251 = &g_252[1];
            int32_t *l_277 = (void*)0;
            int32_t *l_284[3][7][7] = {{{&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0]},{&l_160,&l_279,&l_160,&l_127[0],&l_127[0],&l_160,&l_279},{&l_127[0],&l_279,&l_127[0],&l_127[0],&l_279,&l_127[0],&l_279},{&l_160,&l_127[0],&l_127[0],&l_160,&l_279,&l_160,&l_127[0]},{&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0]},{&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0],&l_127[0]},{&l_160,&l_279,&l_160,&l_127[0],&l_127[0],&l_160,&l_279}},{{&l_127[0],&l_279,&l_127[0],&l_127[0],&l_279,&l_127[0],&l_279},{&l_160,&l_127[0],&l_127[0],&l_160,&l_127[0],&l_127[0],&l_160},{&l_127[0],&l_127[0],&l_160,&l_279,&l_160,&l_127[0],&l_127[0]},{&l_127[0],&l_160,&l_279,&l_160,&l_127[0],&l_127[0],&l_160},{&l_127[0],&l_127[0],&l_127[0],&l_160,&l_160,&l_127[0],&l_127[0]},{&l_160,&l_127[0],&l_279,&l_279,&l_127[0],&l_160,&l_127[0]},{&l_127[0],&l_160,&l_160,&l_127[0],&l_127[0],&l_127[0],&l_160}},{{&l_127[0],&l_127[0],&l_160,&l_279,&l_160,&l_127[0],&l_127[0]},{&l_127[0],&l_160,&l_279,&l_160,&l_127[0],&l_127[0],&l_160},{&l_127[0],&l_127[0],&l_127[0],&l_160,&l_160,&l_127[0],&l_127[0]},{&l_160,&l_127[0],&l_279,&l_279,&l_127[0],&l_160,&l_127[0]},{&l_127[0],&l_160,&l_160,&l_127[0],&l_127[0],&l_127[0],&l_160},{&l_127[0],&l_127[0],&l_160,&l_279,&l_160,&l_127[0],&l_127[0]},{&l_127[0],&l_160,&l_279,&l_160,&l_127[0],&l_127[0],&l_160}}};
            int i, j, k;
            for (l_168 = 0; (l_168 > 25); l_168 = safe_add_func_int64_t_s_s(l_168, 8))
            { 
                uint32_t l_179[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                int16_t *l_191 = &g_192;
                int8_t l_193 = (-2L);
                int32_t *l_205 = &g_90[1][0].f2;
                int32_t *l_206[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_206[i] = &g_4;
            }
            if (((safe_mod_func_int32_t_s_s(((*l_201) = ((l_229[1][1] != (g_230 = g_230)) > (safe_div_func_int8_t_s_s((+((((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((246UL ^ (0xA1C847789590A6FFLL >= ((void*)0 == l_201))), p_88.f1)), (*l_201))) >= p_87) == 0x42621B0013EDC32ELL) & p_88.f1)), g_4)))), p_88.f1)) < l_239[2]))
            { 
                union U1 *l_249 = (void*)0;
                int32_t *l_253 = &l_127[0];
                int32_t l_260 = 8L;
                int32_t l_267 = 0xCA12ED9CL;
                int32_t l_268 = 0x6A3583BDL;
                int32_t l_270[4];
                int32_t *l_276 = &l_127[0];
                int i;
                for (i = 0; i < 4; i++)
                    l_270[i] = 0x6B44700EL;
                for (g_4 = 0; (g_4 < 11); ++g_4)
                { 
                    union U1 **l_250[2];
                    int32_t l_254 = 0x7DC5E76BL;
                    int32_t l_255 = 0xF249C78AL;
                    int32_t l_256 = 0xE7CB5A7BL;
                    int32_t l_257 = 0x42A48A9BL;
                    int8_t l_258 = 0xE6L;
                    int32_t l_259 = (-10L);
                    int32_t l_261 = 0x3086A746L;
                    int32_t l_262 = 0x2C0D5E5FL;
                    int32_t l_263 = 1L;
                    int32_t l_265 = 1L;
                    int32_t l_266[5][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
                    int64_t l_269 = (-1L);
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_250[i] = &l_169[0];
                    (*l_204) ^= (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((((p_87 , p_88.f1) , (*g_230)) != (((l_251 = (g_248[4][0][0] , (((((4294967295UL < ((*l_201) = 0xB89C8545L)) || 0x8EL) , (void*)0) == (void*)0) , l_249))) != l_169[4]) , (void*)0)) & 4UL), 1)), 13)) ^ 0x248A85C4E4F83ABELL), 1L));
                    (*l_97) = l_253;
                    g_271[1]--;
                    (*l_253) = (safe_rshift_func_uint16_t_u_u(0UL, g_171.f2));
                    p_88.f2 = (&l_254 != (l_277 = l_276));
                }
                --l_280;
            }
            else
            { 
                int32_t *l_283[3];
                int32_t *l_285 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_283[i] = &l_160;
                return l_285;
            }
            (*l_135) = ((*g_137) |= p_88.f1);
        }
        else
        { 
            int16_t l_293 = 0x5FCBL;
            int32_t *l_295 = (void*)0;
            if ((**l_97))
                break;
            l_286--;
            for (l_150.f2 = 0; (l_150.f2 <= (-8)); l_150.f2 = safe_sub_func_int64_t_s_s(l_150.f2, 7))
            { 
                int32_t *l_291[1];
                uint16_t *l_294 = &g_196;
                int i;
                for (i = 0; i < 1; i++)
                    l_291[i] = &g_4;
                (*l_135) = 0xCE59C2AAL;
                l_291[0] = func_16(l_291[0], ((*l_294) = ((!0xB97FL) , l_293)), func_16(l_291[0], l_293, l_295));
            }
            (*l_162) = (g_296 = &l_150);
        }
    }
    (*l_297) = &g_90[2][0];
    if ((safe_rshift_func_uint8_t_u_s((l_123[1] == (((*l_311) |= ((safe_div_func_uint16_t_u_u(((*l_303)++), (safe_rshift_func_int8_t_s_s((((void*)0 != l_303) & (0x4774B793L && g_20)), (safe_lshift_func_int16_t_s_u(((p_88.f1 , func_16(l_310, g_4, l_311)) == l_135), p_87)))))) != 1L)) , l_123[4])), 7)))
    { 
        uint32_t *l_317[3][2][5] = {{{&g_271[1],&g_271[0],&l_150.f1,&l_150.f1,&g_271[0]},{&g_271[0],&g_20,&l_150.f1,&g_170[0].f2.f1,&g_170[0].f2.f1}},{{&g_20,&g_271[0],&g_20,&l_150.f1,&g_170[0].f2.f1},{&g_271[0],&g_271[1],&g_170[0].f2.f1,&g_271[1],&g_271[0]}},{{&g_20,&g_271[1],&g_271[0],&g_271[0],&g_271[0]},{&g_271[0],&g_271[0],&g_170[0].f2.f1,&g_271[0],&g_171.f1}}};
        int32_t l_319 = 0xAC0D675FL;
        int32_t l_327 = 0x5D7DF1F5L;
        uint64_t *l_332 = (void*)0;
        uint64_t *l_333 = (void*)0;
        uint64_t *l_334 = &g_335;
        int32_t l_336 = 2L;
        int32_t l_337 = 0x5749F27DL;
        int32_t l_338 = (-10L);
        int32_t l_339 = 0L;
        int32_t l_340 = 0x580D7281L;
        int32_t l_341 = (-1L);
        int32_t l_342 = 0xC00B7FC9L;
        int32_t l_343 = 1L;
        int32_t l_344[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t l_345 = 0L;
        int32_t l_346[5][5] = {{(-7L),(-7L),(-7L),(-7L),(-7L)},{0x1AA943ECL,0x1AA943ECL,0x1AA943ECL,0x1AA943ECL,0x1AA943ECL},{(-7L),(-7L),(-7L),(-7L),(-7L)},{0x1AA943ECL,0x1AA943ECL,0x1AA943ECL,0x1AA943ECL,0x1AA943ECL},{(-7L),(-7L),(-7L),(-7L),(-7L)}};
        uint64_t l_348 = 0UL;
        int i, j, k;
        for (g_278 = 0; (g_278 >= 16); ++g_278)
        { 
            int32_t *l_316 = &g_4;
            for (g_122 = 27; (g_122 > 24); g_122 = safe_sub_func_uint16_t_u_u(g_122, 3))
            { 
                (*l_204) = p_88.f1;
                (*l_97) = l_316;
            }
        }
        (*l_204) = ((l_318 = p_87) , ((*l_161) , l_319));
        (*l_204) = (safe_sub_func_int8_t_s_s(((!(*l_310)) > (safe_rshift_func_int8_t_s_s(g_171.f0, (((safe_add_func_int8_t_s_s((l_327 = p_88.f1), (safe_lshift_func_int16_t_s_u(0xFFE4L, ((*g_137) & ((((*l_334) = 0x62B610DE107908DALL) > g_55.f1) < g_170[0].f0)))))) , 0xE6D2L) <= l_319)))), l_319));
        ++l_348;
    }
    else
    { 
        int32_t *l_351 = &l_124[2][0];
        int32_t l_352 = 0x60C5FCF6L;
        int8_t l_354 = 0x43L;
        int32_t l_355 = 0L;
        int32_t l_356 = (-1L);
        int32_t l_357 = 0x906D5BABL;
        int32_t l_358 = 0x193AE4F5L;
        int32_t l_359 = 0x2308A672L;
        int32_t l_360 = 0L;
        int32_t l_361 = 7L;
        int32_t l_362 = 0x2AC947B2L;
        int32_t l_363 = 0xD0089398L;
        int32_t l_364 = 0xBE034C74L;
        int32_t l_365 = (-1L);
        int64_t l_366 = (-6L);
        int32_t l_367 = 0x33675849L;
        int32_t l_368[7] = {0xC5F9D001L,0xC5F9D001L,0xC5F9D001L,0xC5F9D001L,0xC5F9D001L,0xC5F9D001L,0xC5F9D001L};
        int16_t l_369[2][5] = {{0x5E93L,0L,0x5E93L,0x5E93L,0L},{0L,0x5E93L,0x5E93L,0L,0x5E93L}};
        int32_t l_370 = 6L;
        uint64_t *l_390 = (void*)0;
        uint16_t *l_391 = &g_122;
        union U2 *l_396 = &g_397;
        uint8_t l_408[5];
        uint64_t *l_409 = &g_335;
        int i, j;
        for (i = 0; i < 5; i++)
            l_408[i] = 0x95L;
        (*l_97) = l_351;
        --l_371;
        (*g_137) = (safe_mul_func_uint8_t_u_u((((0x6EL ^ 0xE9L) , (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((*l_303) = g_171.f1), ((*l_391) ^= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(0x3973L, 12)), (((*l_351) &= ((g_55 , 0x57C8L) , (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(0x81L, g_171.f1)), 0xD1AEL)))) >= 0L))), 4294967291UL)) < p_87)))) && g_196), g_248[4][0][0].f0))) , g_248[4][0][0].f1), p_88.f1));
        (*l_204) = (((safe_add_func_int16_t_s_s(((++(*l_391)) > g_57.f0), 0xFB3EL)) < g_252[1].f1) || ((((*l_396) = ((*l_298) = p_88)) , (((*l_391) = (safe_lshift_func_int16_t_s_u((((*l_409) = ((safe_div_func_uint64_t_u_u(0x529A5CB5E54B3024LL, (safe_mul_func_int8_t_s_s(((*l_125) = 0x8DL), (safe_add_func_int8_t_s_s(((g_174 = ((l_408[0] ^= (g_252[1].f1 , 18446744073709551610UL)) , 8L)) || 0UL), g_55.f0)))))) <= g_171.f1)) && g_248[4][0][0].f2), p_88.f1))) ^ 0L)) >= p_87));
        l_351 = &l_368[1];
    }
    for (g_122 = 0; (g_122 <= 0); g_122 += 1)
    { 
        uint64_t *l_426 = &g_335;
        int i;
        (*g_137) = (safe_rshift_func_int8_t_s_s(l_127[g_122], 2));
        if (l_127[g_122])
            continue;
        if (p_88.f1)
            continue;
        (*l_310) |= p_88.f1;
        for (p_87 = 0; (p_87 <= 0); p_87 += 1)
        { 
            uint64_t *l_423 = &g_335;
            uint64_t **l_424 = (void*)0;
            uint64_t **l_425[6] = {&l_423,&l_423,&l_423,&l_423,&l_423,&l_423};
            uint32_t l_428 = 0xD43D10CDL;
            int i, j;
            l_124[(p_87 + 1)][p_87] = (safe_rshift_func_uint8_t_u_s((0xD1D20C5E9B8A3B8FLL | (((safe_rshift_func_int8_t_s_u(l_124[(p_87 + 1)][p_87], (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((p_87 , (~((*g_137) = (safe_rshift_func_int8_t_s_s((((*l_135) = 0L) & ((((l_426 = l_423) != (l_427 , l_123[4])) ^ 0x1EADB607CCF16073LL) , (-5L))), l_428))))) >= p_87), p_88.f1)), 0x1FL)))) > p_88.f1) == 0L)), 6));
            if (l_428)
                continue;
        }
    }
    return l_431;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_55.f0, "g_55.f0", print_hash_value);
    transparent_crc(g_55.f1, "g_55.f1", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_90[i][j].f1, "g_90[i][j].f1", print_hash_value);
            transparent_crc(g_90[i][j].f2, "g_90[i][j].f2", print_hash_value);
            transparent_crc(g_90[i][j].f3, "g_90[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_170[i].f0, "g_170[i].f0", print_hash_value);
        transparent_crc(g_170[i].f1, "g_170[i].f1", print_hash_value);

    }
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_171.f1, "g_171.f1", print_hash_value);
    transparent_crc(g_171.f2, "g_171.f2", print_hash_value);
    transparent_crc(g_171.f3, "g_171.f3", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_248[i][j][k].f0, "g_248[i][j][k].f0", print_hash_value);
                transparent_crc(g_248[i][j][k].f1, "g_248[i][j][k].f1", print_hash_value);
                transparent_crc(g_248[i][j][k].f2, "g_248[i][j][k].f2", print_hash_value);
                transparent_crc(g_248[i][j][k].f3, "g_248[i][j][k].f3", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_252[i].f0, "g_252[i].f0", print_hash_value);
        transparent_crc(g_252[i].f1, "g_252[i].f1", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_271[i], "g_271[i]", print_hash_value);

    }
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_397.f1, "g_397.f1", print_hash_value);
    transparent_crc(g_397.f2, "g_397.f2", print_hash_value);
    transparent_crc(g_397.f3, "g_397.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_634[i], "g_634[i]", print_hash_value);

    }
    transparent_crc(g_654, "g_654", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_675[i], "g_675[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_768[i][j][k], "g_768[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_932.f0, "g_932.f0", print_hash_value);
    transparent_crc(g_932.f1, "g_932.f1", print_hash_value);
    transparent_crc(g_934.f0, "g_934.f0", print_hash_value);
    transparent_crc(g_934.f1, "g_934.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_976[i][j][k], "g_976[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1023, "g_1023", print_hash_value);
    transparent_crc(g_1024, "g_1024", print_hash_value);
    transparent_crc(g_1025, "g_1025", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1026[i], "g_1026[i]", print_hash_value);

    }
    transparent_crc(g_1027, "g_1027", print_hash_value);
    transparent_crc(g_1058, "g_1058", print_hash_value);
    transparent_crc(g_1125, "g_1125", print_hash_value);
    transparent_crc(g_1174, "g_1174", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1230[i], "g_1230[i]", print_hash_value);

    }
    transparent_crc(g_1318, "g_1318", print_hash_value);
    transparent_crc(g_1347, "g_1347", print_hash_value);
    transparent_crc(g_1481, "g_1481", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1615[i], "g_1615[i]", print_hash_value);

    }
    transparent_crc(g_1809, "g_1809", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
