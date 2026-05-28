// SPDX-License-Identifier: MIT
// cctest_csmith_d053ba0b.c --- cctest case csmith_d053ba0b (csmith seed 3495148043)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8e7f3263 */
/* @exp_ticks 0x4143 */

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

// Options:   -s 3495148043 -o /tmp/csmith_gen_0o9jg7fk/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   int32_t  f1;
   uint16_t  f2;
   int32_t  f3;
   int64_t  f4;
};

union U1 {
   struct S0  f0;
   int64_t  f1;
};

union U2 {
   uint32_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   int16_t  f3;
};


static int64_t g_15 = 1L;
static union U2 g_30 = {0xE8EF3352L};
static uint32_t g_74[4][5] = {{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{0xB10A2632L,0xB10A2632L,0xB10A2632L,0xB10A2632L,0xB10A2632L},{18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL},{0xB10A2632L,0xB10A2632L,0xB10A2632L,0xB10A2632L,0xB10A2632L}};
static struct S0 g_81 = {0x7D0EC541CD86053CLL,5L,65531UL,7L,-1L};
static struct S0 g_82 = {0x7223651BE0E570C8LL,-1L,0xA713L,0x3D863468L,-1L};
static uint32_t g_99 = 0xB4462018L;
static union U1 g_122 = {{0xAC4AB03F48115F6FLL,0x73433C16L,0UL,0x22D215C8L,2L}};
static int32_t g_124[4][1][4] = {{{0xD375A9F4L,(-7L),0xBEB08D42L,(-7L)}},{{0x8DF92E93L,0xBED5E3EDL,(-9L),0xBEB08D42L}},{{(-7L),0xBED5E3EDL,0xBED5E3EDL,(-7L)}},{{0xBED5E3EDL,(-7L),0x8DF92E93L,0xD375A9F4L}}};
static uint16_t g_135 = 65530UL;
static int8_t g_145 = 0L;
static int64_t g_223 = 1L;
static uint16_t g_224[3] = {65535UL,65535UL,65535UL};
static uint32_t g_225 = 7UL;
static uint8_t g_267[5] = {250UL,250UL,250UL,250UL,250UL};
static uint32_t g_288[1][1][1] = {{{0xD419CB78L}}};



static uint32_t  func_1(void);
static uint64_t  func_7(int32_t  p_8, uint32_t  p_9, uint64_t  p_10, union U2  p_11, struct S0  p_12);
static union U2  func_16(int64_t  p_17);
static struct S0  func_49(uint8_t  p_50, const uint32_t  p_51, union U2  p_52, int8_t  p_53, union U1  p_54);




static uint32_t  func_1(void)
{ 
    uint16_t l_6 = 0x6C3FL;
    union U2 l_31 = {4294967289UL};
    struct S0 l_32 = {18446744073709551615UL,0xDC870AF0L,0xFA9AL,-10L,-1L};
    uint64_t l_164 = 0x6CF425122344D149LL;
    const uint8_t l_234 = 247UL;
    uint32_t l_235[3][4] = {{0xF6C6B0B3L,0xF6C6B0B3L,0xF6C6B0B3L,0xF6C6B0B3L},{0xF6C6B0B3L,0xF6C6B0B3L,0xF6C6B0B3L,0xF6C6B0B3L},{0xF6C6B0B3L,0xF6C6B0B3L,0xF6C6B0B3L,0xF6C6B0B3L}};
    int8_t l_237 = 0x25L;
    int32_t l_246 = 6L;
    int32_t l_247 = 0x993FB84FL;
    int32_t l_261 = 1L;
    int32_t l_262 = 0x6D0E17F5L;
    int16_t l_271 = 0x9FEDL;
    int32_t l_273 = 0xEF351D79L;
    int32_t l_275[4][3][3] = {{{0xEFEE41CEL,0xA8674CC7L,0xA8674CC7L},{0xEE276909L,0xA7AC640EL,1L},{0xEFEE41CEL,8L,0xEFEE41CEL}},{{0x6970CD73L,0xEE276909L,1L},{0L,0L,0xA8674CC7L},{1L,0xEE276909L,0xEE276909L}},{{0xA8674CC7L,8L,0L},{1L,0xA7AC640EL,1L},{0L,0xA8674CC7L,0L}},{{0x6970CD73L,0x6970CD73L,0xEE276909L},{0xEFEE41CEL,0xA8674CC7L,0xA8674CC7L},{0xEE276909L,0xA7AC640EL,1L}}};
    uint32_t l_276 = 4UL;
    int i, j, k;
    if ((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(l_6, l_6)) | (func_7(((safe_mul_func_int8_t_s_s(g_15, (((func_16((1UL >= l_6)) , 1L) , l_6) <= g_30.f0))) == l_6), g_30.f0, g_15, l_31, l_32) | l_164)), g_82.f0)))
    { 
        uint8_t l_165 = 254UL;
        int32_t l_243 = 0x9FDF1829L;
        int16_t l_244 = 0xF461L;
        int32_t l_245 = (-1L);
        int16_t l_252 = 0xFF18L;
        int32_t l_254 = 0x0784F3F3L;
        int32_t l_255 = 0xE02B9B18L;
        int16_t l_256 = 0L;
        int32_t l_258[1][2];
        uint32_t l_263 = 0x66315312L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_258[i][j] = (-8L);
        }
        if (g_122.f0.f1)
        { 
            return l_165;
        }
        else
        { 
            int16_t l_173[4][3][1] = {{{5L},{1L},{1L}},{{5L},{1L},{1L}},{{5L},{1L},{1L}},{{5L},{1L},{1L}}};
            union U2 l_180[2] = {{0x155C3D3CL},{0x155C3D3CL}};
            int32_t l_208 = 0x41C5C58DL;
            int i, j, k;
            l_32.f1 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(((~(safe_rshift_func_int8_t_s_u(l_173[2][0][0], 1))) | 0L), 13)), 9));
            if ((safe_mul_func_int8_t_s_s(((g_82 = func_49(g_135, ((safe_div_func_uint8_t_u_u(g_135, (safe_mul_func_int8_t_s_s(l_32.f2, 0x96L)))) & g_124[0][0][2]), l_180[0], l_165, g_122)) , 0x53L), l_32.f1)))
            { 
                uint32_t l_183[5] = {0xE7448655L,0xE7448655L,0xE7448655L,0xE7448655L,0xE7448655L};
                int i;
                g_82.f3 = (safe_mul_func_uint16_t_u_u(l_183[3], (safe_div_func_int32_t_s_s(((safe_add_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(((((g_145 = ((0x938573CADF08772CLL >= ((g_122.f0.f1 >= l_183[3]) > g_81.f1)) | 246UL)) || l_183[1]) != 0xC49B0C17L) <= l_165), 9L)) | g_124[0][0][2]), g_124[0][0][2])) != 1L), 0x057EADA1L))));
                g_81.f1 = ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((l_208 |= ((0x39L > (safe_rshift_func_int8_t_s_u(g_122.f0.f0, ((safe_lshift_func_int16_t_s_s(((g_30.f1--) < (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((l_31.f3 != (g_81.f0 >= l_183[4])), 252UL)), g_122.f0.f1))), 15)) < g_82.f2)))) == (-3L))) <= 0x2CL), 0UL)), l_165)) < l_31.f3);
            }
            else
            { 
                g_82.f1 &= (safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s(g_15, ((((g_82.f2 , g_122.f0.f1) & (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((l_32.f0 , g_145), l_31.f1)), 2))) >= l_173[2][0][0]) , 2UL))), l_164));
            }
        }
        if ((((g_30.f1 > ((safe_mul_func_int16_t_s_s((g_145 == (safe_rshift_func_int16_t_s_u((((((g_225 = (((g_224[1] = ((safe_sub_func_uint32_t_u_u((g_81.f0 || ((g_223 = l_32.f4) && 0x3EL)), g_122.f0.f1)) || g_122.f0.f3)) | g_122.f0.f0) != 0xA616L)) || g_224[2]) | g_122.f0.f1) & 0x9385EA79L) & 0x6F1BL), 10))), g_124[0][0][2])) <= g_82.f2)) != 0x4F4FL) | l_165))
        { 
            int8_t l_236 = (-8L);
            int32_t l_241 = (-1L);
            int32_t l_242 = 7L;
            int32_t l_259 = (-1L);
            union U1 l_266 = {{18446744073709551609UL,1L,6UL,1L,0xEF8BF8A4469B2086LL}};
            if (((((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((((l_235[1][0] &= (g_82.f1 ^ (((g_82.f1 < g_122.f0.f4) >= l_234) != g_124[2][0][3]))) , 0x4C9F92E4L) | g_124[0][0][2]), 0xC39E361AL)) , g_81.f0), g_145)), 4)) , l_236) <= l_236) <= l_31.f0) != 0L) != l_237))
            { 
                int32_t l_238 = (-10L);
                int32_t l_239 = 0x229BE73AL;
                int32_t l_240[5][5][4] = {{{(-8L),(-3L),(-3L),(-8L)},{0xFF329CA2L,(-3L),0x1923A1A7L,(-3L)},{(-3L),0xBA97E8B9L,0x1923A1A7L,0x1923A1A7L},{0xFF329CA2L,0xFF329CA2L,(-3L),0x1923A1A7L},{(-8L),0xBA97E8B9L,(-8L),(-3L)}},{{(-8L),(-3L),(-3L),(-8L)},{0xFF329CA2L,(-3L),0x1923A1A7L,(-3L)},{(-3L),0xBA97E8B9L,0x1923A1A7L,0x1923A1A7L},{0xFF329CA2L,0xFF329CA2L,(-3L),0x1923A1A7L},{(-8L),0xBA97E8B9L,(-8L),(-3L)}},{{(-8L),(-3L),(-3L),(-8L)},{0xFF329CA2L,(-3L),0x1923A1A7L,(-3L)},{(-3L),0xBA97E8B9L,0x1923A1A7L,0x1923A1A7L},{0xFF329CA2L,0xFF329CA2L,(-3L),0x1923A1A7L},{(-8L),0xBA97E8B9L,(-8L),(-3L)}},{{(-8L),(-3L),(-3L),(-8L)},{0xFF329CA2L,(-3L),0x1923A1A7L,(-3L)},{(-3L),0xBA97E8B9L,0x1923A1A7L,0x1923A1A7L},{0xFF329CA2L,0xFF329CA2L,(-3L),0x1923A1A7L},{(-8L),0xBA97E8B9L,(-8L),(-3L)}},{{(-8L),(-3L),(-3L),(-8L)},{0xFF329CA2L,(-3L),0x1923A1A7L,(-3L)},{(-3L),0xBA97E8B9L,0x1923A1A7L,0x1923A1A7L},{0xFF329CA2L,0xFF329CA2L,(-3L),0x1923A1A7L},{(-8L),0xBA97E8B9L,(-8L),(-3L)}}};
                uint32_t l_248 = 0xE9E399F4L;
                int i, j, k;
                g_124[0][0][2] |= l_31.f1;
                g_122.f0.f3 |= ((l_165 | l_31.f2) && l_238);
                --l_248;
            }
            else
            { 
                struct S0 l_251 = {0UL,0xB9C36536L,65535UL,0L,0x3E802EC767E1A3AALL};
                int32_t l_253 = 0xE14EDE75L;
                int32_t l_257[2];
                int16_t l_260 = 0x0201L;
                int i;
                for (i = 0; i < 2; i++)
                    l_257[i] = 0xC21D2773L;
                l_251 = l_32;
                l_263++;
            }
            g_267[1] |= ((g_122 = l_266) , g_224[0]);
        }
        else
        { 
            int32_t l_268 = (-8L);
            int32_t l_269 = 0L;
            int32_t l_270 = 0x2561A214L;
            int64_t l_272[2];
            int32_t l_274 = 7L;
            int i;
            for (i = 0; i < 2; i++)
                l_272[i] = 1L;
            l_246 = g_145;
            l_276--;
        }
    }
    else
    { 
        union U2 l_279 = {0xF26C4B56L};
        union U2 l_291[5] = {{4UL},{4UL},{4UL},{4UL},{4UL}};
        int i;
        if (((g_30 = l_279) , (((g_30.f0 = g_81.f3) , (0L <= (g_124[0][0][2] < l_247))) != l_279.f2)))
        { 
            int64_t l_284 = 0x3381A5F3E66D6284LL;
            int32_t l_287 = (-1L);
            uint32_t l_292 = 0x0090C67BL;
            struct S0 l_293 = {0x879413A5F7D97141LL,0x3CD1D03BL,65535UL,0x1EFC81CAL,0L};
            l_293 = func_49((g_30.f1--), (safe_mod_func_uint8_t_u_u(l_284, (safe_mul_func_uint8_t_u_u((4294967287UL ^ (g_288[0][0][0] &= l_287)), ((safe_mod_func_uint16_t_u_u(((g_224[1] & g_145) >= l_279.f3), g_81.f2)) == 0x03L))))), l_291[1], l_292, g_122);
            return l_31.f2;
        }
        else
        { 
            l_32.f1 = g_267[1];
            return g_99;
        }
    }
    return g_223;
}



static uint64_t  func_7(int32_t  p_8, uint32_t  p_9, uint64_t  p_10, union U2  p_11, struct S0  p_12)
{ 
    int64_t l_38 = 0x46C64E719BA7C338LL;
    int16_t l_39[2];
    int32_t l_46 = 0xDA978833L;
    union U1 l_55 = {{1UL,0x4DFC4B74L,65526UL,0xC3DF54D9L,0x46C248BDD0C5DF97LL}};
    int i;
    for (i = 0; i < 2; i++)
        l_39[i] = (-8L);
    if ((((safe_mul_func_uint8_t_u_u((((+p_11.f1) != (safe_mul_func_uint8_t_u_u(l_38, p_11.f2))) >= p_11.f2), l_39[0])) , g_30.f0) , 0xF5F9BA4AL))
    { 
        uint8_t l_43 = 0xB5L;
        for (p_12.f3 = 1; (p_12.f3 >= 0); p_12.f3 -= 1)
        { 
            int i;
        }
    }
    else
    { 
        uint32_t l_120[5] = {0x77C3F9E4L,0x77C3F9E4L,0x77C3F9E4L,0x77C3F9E4L,0x77C3F9E4L};
        int64_t l_121[2][5][2] = {{{0L,0xF04045D3C7E7FF35LL},{0x16D73FB01E7103E2LL,0x16D73FB01E7103E2LL},{0x16D73FB01E7103E2LL,0xF04045D3C7E7FF35LL},{0L,0xAE64750ADD41A25ELL},{0xF04045D3C7E7FF35LL,0xAE64750ADD41A25ELL}},{{0L,0xF04045D3C7E7FF35LL},{0x16D73FB01E7103E2LL,0x16D73FB01E7103E2LL},{0x16D73FB01E7103E2LL,0L},{0x06941ECE23272C11LL,0x16D73FB01E7103E2LL},{0L,0x16D73FB01E7103E2LL}}};
        struct S0 l_127 = {0x6953674B777FD193LL,0xD6DE25C1L,8UL,0xB794862DL,2L};
        uint32_t l_144 = 0x4FFF49AFL;
        int64_t l_163[4];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_163[i] = 0x8945F2B69564F80CLL;
        for (p_11.f0 = 3; (p_11.f0 > 33); p_11.f0 = safe_add_func_int16_t_s_s(p_11.f0, 3))
        { 
            for (g_81.f0 = 0; (g_81.f0 <= 52); ++g_81.f0)
            { 
                return g_15;
            }
        }
        if (g_82.f2)
        { 
            int8_t l_118[3];
            int32_t l_123 = 1L;
            int i;
            for (i = 0; i < 3; i++)
                l_118[i] = 0xD0L;
            for (p_11.f3 = 0; (p_11.f3 < 6); ++p_11.f3)
            { 
                uint32_t l_119 = 0x88D44B5EL;
                l_55.f0.f1 &= (safe_sub_func_int8_t_s_s(l_39[1], g_81.f2));
                g_99 ^= g_82.f1;
                g_124[2][0][0] = ((safe_sub_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u(p_12.f4, (((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_82.f3, (((l_55.f0.f3 = (((func_49(p_11.f3, ((safe_mul_func_uint16_t_u_u(((((g_82.f1 = (safe_mul_func_uint16_t_u_u((l_120[4] = ((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((l_118[2] = g_82.f3) > (-1L)), p_12.f1)) | l_119), 0xDE8EL)), 2)) > 0xE47ACEDFL)), (-5L)))) ^ 0xD78BCCA9L) ^ l_119) != l_121[1][4][0]), p_11.f1)) , 5UL), g_30, p_12.f0, g_122) , 0x562ECAC6L) & l_55.f0.f1) >= g_122.f0.f4)) , 0xB73AA951L) <= l_123))), p_11.f3)) > p_9) >= g_81.f4))) >= 0xA45BL) == g_124[0][0][2]) & p_11.f3), g_122.f0.f4)) && g_81.f0);
            }
            for (g_30.f1 = 0; (g_30.f1 >= 38); g_30.f1 = safe_add_func_uint8_t_u_u(g_30.f1, 9))
            { 
                g_81.f3 = g_81.f0;
            }
        }
        else
        { 
            uint32_t l_130 = 1UL;
            int32_t l_136 = 0L;
            int32_t l_146 = 0x9B2269D5L;
            union U1 l_152 = {{18446744073709551611UL,1L,65535UL,0xBC6382AFL,-1L}};
            l_127 = p_12;
            g_122.f0.f1 &= ((l_136 = (safe_rshift_func_uint8_t_u_s((((l_130 = (g_30.f3 = (p_11.f3 = (-7L)))) < p_12.f2) >= p_12.f1), (safe_lshift_func_int16_t_s_s((g_135 ^= (safe_sub_func_int32_t_s_s((p_12.f0 == g_99), 0UL))), 14))))) && l_121[1][4][0]);
            for (l_136 = 1; (l_136 >= 0); l_136 -= 1)
            { 
                int32_t l_147 = 0x2E5D3D61L;
                int i;
                l_46 ^= ((((safe_unary_minus_func_int64_t_s((((((l_146 &= ((g_81 = p_12) , (g_145 = (safe_rshift_func_uint16_t_u_s((((safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((((g_122 = g_122) , ((g_30.f0 = ((l_39[l_136] != ((-1L) > 0UL)) , l_130)) | g_124[3][0][2])) , l_39[l_136]) , 0x9FL) ^ 0x99L), l_55.f0.f0)), g_81.f4)) != l_144) < 0xDCL), 4))))) <= p_8) <= l_39[l_136]) , p_12.f2) > l_147))) || l_127.f4) > 0x56L) & 0xFEL);
                p_12.f3 = (l_39[l_136] && (l_39[l_136] = ((g_15 < (g_81.f0 = ((--p_12.f2) != (safe_add_func_int64_t_s_s((l_152 , (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((safe_div_func_int32_t_s_s(0x7F478804L, l_127.f2)) != l_163[2]), 0x083BL)), l_130)), 2)), l_120[4]))), p_8))))) ^ p_11.f3)));
                return l_39[l_136];
            }
        }
    }
    return p_12.f3;
}



static union U2  func_16(int64_t  p_17)
{ 
    int8_t l_22 = 1L;
    int8_t l_25 = 6L;
    int64_t l_28 = (-1L);
    int32_t l_29 = 0x44469448L;
    l_29 &= ((safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s(l_22, (l_28 = (safe_rshift_func_uint8_t_u_u((l_25 | (safe_lshift_func_uint16_t_u_u((l_22 , 1UL), g_15))), l_22))))), l_25)) > 0xA0783518L);
    return g_30;
}



static struct S0  func_49(uint8_t  p_50, const uint32_t  p_51, union U2  p_52, int8_t  p_53, union U1  p_54)
{ 
    struct S0 l_58 = {0xC41E7D42A80B09DELL,0x4E562A08L,0UL,0xB62B766AL,0x6F69A7C888BC06FELL};
    for (g_30.f1 = 0; (g_30.f1 < 30); g_30.f1 = safe_add_func_int32_t_s_s(g_30.f1, 7))
    { 
        int32_t l_59 = 8L;
        int32_t l_79[4][4] = {{0x1E285A49L,0xE81B9928L,0xE81B9928L,0x1E285A49L},{0xEA925521L,0xE81B9928L,0xCD9968C9L,0xE81B9928L},{0xE81B9928L,0x9B40DC36L,0xCD9968C9L,0xCD9968C9L},{0xEA925521L,0xEA925521L,0xE81B9928L,0xCD9968C9L}};
        int i, j;
        if ((p_54.f0.f3 >= 6UL))
        { 
            return l_58;
        }
        else
        { 
            l_59 |= 0x4BF7A6C6L;
        }
    }
    return p_54.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_74[i][j], "g_74[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
    transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
    transparent_crc(g_81.f3, "g_81.f3", print_hash_value);
    transparent_crc(g_81.f4, "g_81.f4", print_hash_value);
    transparent_crc(g_82.f0, "g_82.f0", print_hash_value);
    transparent_crc(g_82.f1, "g_82.f1", print_hash_value);
    transparent_crc(g_82.f2, "g_82.f2", print_hash_value);
    transparent_crc(g_82.f3, "g_82.f3", print_hash_value);
    transparent_crc(g_82.f4, "g_82.f4", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_122.f0.f0, "g_122.f0.f0", print_hash_value);
    transparent_crc(g_122.f0.f1, "g_122.f0.f1", print_hash_value);
    transparent_crc(g_122.f0.f2, "g_122.f0.f2", print_hash_value);
    transparent_crc(g_122.f0.f3, "g_122.f0.f3", print_hash_value);
    transparent_crc(g_122.f0.f4, "g_122.f0.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_124[i][j][k], "g_124[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_224[i], "g_224[i]", print_hash_value);

    }
    transparent_crc(g_225, "g_225", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_267[i], "g_267[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_288[i][j][k], "g_288[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
