// SPDX-License-Identifier: MIT
// cctest_csmith_18bcc16d.c --- cctest case csmith_18bcc16d (csmith seed 415023469)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6df35a28 */
/* @exp_ticks 0x66a1 */

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

// Options:   -s 415023469 -o /tmp/csmith_gen__z47qfoz/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint8_t  f0;
   int16_t  f1;
   uint64_t  f2;
   const uint16_t  f3;
};

union U1 {
   int16_t  f0;
   int64_t  f1;
   uint32_t  f2;
   const uint32_t  f3;
};

union U2 {
   struct S0  f0;
   uint8_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};

union U3 {
   uint16_t  f0;
   uint8_t  f1;
   const int8_t  f2;
   const uint32_t  f3;
};


static union U2 g_19 = {{0x57L,-1L,0x9CA3191B4956E74ELL,0x0031L}};
static uint16_t g_45 = 0xC17AL;
static union U2 g_53 = {{250UL,0L,0x01401CEA0262B096LL,1UL}};
static union U2 *g_52 = &g_53;
static int8_t g_77 = 0x4AL;
static int16_t g_81 = 0xDF4FL;
static int16_t g_83 = 0x6B47L;
static int32_t g_85 = (-1L);
static int64_t g_87[4][2][5] = {{{0x6EA38556AD515890LL,0xA14F829999451619LL,0x2740D6A5A8E70C49LL,0x2740D6A5A8E70C49LL,0xA14F829999451619LL},{(-1L),0xB3DEF23EAFAF4B05LL,0x2740D6A5A8E70C49LL,1L,0xB3DEF23EAFAF4B05LL}},{{(-1L),0xA14F829999451619LL,(-6L),1L,0xA14F829999451619LL},{0x6EA38556AD515890LL,0xA14F829999451619LL,0x2740D6A5A8E70C49LL,0x2740D6A5A8E70C49LL,0xA14F829999451619LL}},{{(-1L),0xB3DEF23EAFAF4B05LL,0x2740D6A5A8E70C49LL,1L,0xB3DEF23EAFAF4B05LL},{(-1L),0xA14F829999451619LL,(-6L),1L,0xA14F829999451619LL}},{{0x6EA38556AD515890LL,0xA14F829999451619LL,0x2740D6A5A8E70C49LL,0x2740D6A5A8E70C49LL,0xA14F829999451619LL},{(-1L),0xB3DEF23EAFAF4B05LL,0x2740D6A5A8E70C49LL,1L,0xB3DEF23EAFAF4B05LL}}};
static int64_t g_92 = (-10L);
static int32_t g_98 = 0x0A497976L;
static int32_t *g_102[3] = {&g_85,&g_85,&g_85};
static uint32_t g_127 = 6UL;
static int32_t g_167 = 2L;
static union U3 g_187[6] = {{0x76EBL},{0x76EBL},{0x76EBL},{0x76EBL},{0x76EBL},{0x76EBL}};
static int8_t g_197 = 0xADL;
static uint64_t g_224 = 18446744073709551614UL;
static uint32_t g_260[6][3][5] = {{{0xDA1883B8L,2UL,0x0911AC77L,18446744073709551609UL,18446744073709551615UL},{0x1A1DB09FL,0xEC2C39DBL,18446744073709551611UL,0xEC2C39DBL,0x1A1DB09FL},{0UL,2UL,0x3632D980L,0xCE2E4C4DL,0x8C3F4C08L}},{{7UL,18446744073709551609UL,6UL,0x0A9CB60FL,0x0A9CB60FL},{0xCE2E4C4DL,18446744073709551607UL,0xCE2E4C4DL,2UL,0x8C3F4C08L},{1UL,0x0A9CB60FL,18446744073709551609UL,18446744073709551615UL,0x1A1DB09FL}},{{0x8C3F4C08L,18446744073709551615UL,0xC139F92EL,0xC139F92EL,18446744073709551615UL},{6UL,0x470504D8L,18446744073709551609UL,0x1A1DB09FL,0xB1E561ADL},{18446744073709551607UL,18446744073709551615UL,0xCE2E4C4DL,0x0911AC77L,0xE6961723L}},{{0UL,6UL,6UL,0UL,0xEC2C39DBL},{18446744073709551607UL,0xC139F92EL,0x3632D980L,0UL,0x0911AC77L},{6UL,0xF53ABCEAL,18446744073709551611UL,18446744073709551609UL,18446744073709551611UL}},{{0x8C3F4C08L,0x8C3F4C08L,0x0911AC77L,0UL,0x3632D980L},{1UL,18446744073709551615UL,0xEC2C39DBL,0UL,6UL},{0xCE2E4C4DL,0x0911AC77L,0xE6961723L,0x0911AC77L,0xCE2E4C4DL}},{{7UL,18446744073709551615UL,0xB1E561ADL,0x1A1DB09FL,18446744073709551609UL},{0UL,0x8C3F4C08L,18446744073709551615UL,0xC139F92EL,0xC139F92EL},{0x1A1DB09FL,0xF53ABCEAL,0x1A1DB09FL,18446744073709551615UL,18446744073709551609UL}}};
static union U1 g_268 = {2L};
static union U2 g_282 = {{0x3CL,0x1E47L,4UL,0xD145L}};
static const union U2 *g_281 = &g_282;
static int32_t *g_287 = &g_98;
static int16_t *g_298 = &g_282.f0.f1;
static int16_t **g_297 = &g_298;
static int32_t * const *g_345 = &g_102[2];
static int32_t * const **g_344 = &g_345;
static uint64_t g_357 = 0xCE07EB1FF3E3909ELL;
static uint32_t g_376[1] = {3UL};
static uint32_t g_418 = 4294967286UL;
static int32_t **g_480 = &g_102[0];
static int32_t ***g_479 = &g_480;
static union U2 *g_483[3] = {&g_282,&g_282,&g_282};
static union U2 **g_482[3] = {&g_483[2],&g_483[2],&g_483[2]};
static union U2 g_492 = {{255UL,1L,18446744073709551611UL,65527UL}};
static union U2 *g_494 = &g_282;
static int8_t **g_549 = (void*)0;
static int8_t ***g_548[1] = {&g_549};
static int8_t ****g_547 = &g_548[0];
static struct S0 *g_572 = &g_492.f0;
static struct S0 **g_571 = &g_572;
static union U2 g_598 = {{0x6EL,0x2950L,1UL,0xB68EL}};
static uint32_t *g_656 = &g_418;
static uint32_t **g_655 = &g_656;
static int32_t g_788 = 0xE81DB229L;
static int8_t ****g_805 = &g_548[0];
static union U3 *g_917 = &g_187[2];
static union U3 **g_916 = &g_917;
static union U3 ***g_915 = &g_916;
static union U2 ***g_953 = &g_482[0];
static union U2 ****g_952 = &g_953;
static int64_t g_977 = 0xBB8C99E76B701ECELL;
static uint64_t **g_1016 = (void*)0;
static uint64_t ***g_1030 = &g_1016;
static union U1 *g_1050 = (void*)0;
static int8_t g_1191 = 0xF6L;
static uint8_t g_1318 = 0x09L;
static int64_t g_1335 = 1L;
static uint16_t g_1348 = 0UL;
static uint32_t g_1491[3] = {4294967295UL,4294967295UL,4294967295UL};
static int8_t g_1520 = 0xE2L;



static union U1  func_1(void);
static union U2 * func_2(union U2 * p_3, union U2 * p_4, union U2 * const  p_5);
static union U2 * func_6(union U3  p_7);
static union U3  func_8(int32_t  p_9, union U2 * p_10, union U2 * p_11, union U2 * p_12, int32_t  p_13);
static union U1  func_22(union U2 * p_23, union U2  p_24, union U2 * p_25);
static union U2 * func_26(uint8_t  p_27, union U2 * p_28);
static uint8_t  func_33(int32_t  p_34, union U2 ** p_35, union U2  p_36, union U2 * p_37);
static union U2 ** func_38(union U2 * p_39);




static union U1  func_1(void)
{ 
    union U2 *l_18[7][6] = {{&g_19,&g_19,&g_19,&g_19,&g_19,&g_19},{&g_19,&g_19,&g_19,&g_19,&g_19,&g_19},{&g_19,&g_19,&g_19,&g_19,&g_19,&g_19},{&g_19,&g_19,&g_19,&g_19,&g_19,&g_19},{&g_19,&g_19,&g_19,&g_19,&g_19,&g_19},{&g_19,&g_19,&g_19,&g_19,&g_19,&g_19},{&g_19,&g_19,&g_19,&g_19,&g_19,&g_19}};
    union U2 **l_20 = (void*)0;
    union U2 **l_21 = &l_18[1][1];
    union U2 *l_40 = &g_19;
    union U2 ***l_481 = &l_20;
    union U2 l_484 = {{0x38L,0x7676L,18446744073709551615UL,0xB6BCL}};
    union U2 *l_485 = &g_282;
    union U2 **l_490[1];
    union U2 *l_491 = &g_492;
    union U2 l_493 = {{255UL,0x5E0FL,0x70F96B302796A0AFLL,0x5F46L}};
    union U2 *l_514[5][3] = {{&l_484,&l_484,&l_484},{(void*)0,&g_492,(void*)0},{&l_484,&l_484,&l_484},{(void*)0,&g_492,(void*)0},{&l_484,&l_484,&l_484}};
    union U2 *l_515[3][7] = {{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484},{&g_492,&g_492,&l_484,&g_492,&g_492,&l_484,&g_492},{&l_484,&l_484,&l_484,&l_484,&l_484,&l_484,&l_484}};
    union U2 *l_516[4][4];
    union U2 * const l_1181[1][1][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    union U3 ****l_1196[5][6][4] = {{{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,(void*)0,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,(void*)0,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915}},{{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,(void*)0,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,(void*)0,&g_915},{&g_915,&g_915,&g_915,&g_915}},{{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,(void*)0,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,(void*)0,&g_915}},{{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,(void*)0,&g_915},{&g_915,&g_915,&g_915,&g_915}},{{&g_915,&g_915,(void*)0,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,&g_915,&g_915},{&g_915,&g_915,(void*)0,&g_915}}};
    int32_t l_1227 = 0L;
    int32_t l_1251[6];
    uint16_t l_1252 = 0xD5A4L;
    int16_t * const *l_1368 = &g_298;
    uint32_t l_1379 = 18446744073709551615UL;
    int8_t l_1551 = (-1L);
    const uint32_t *l_1558 = &g_1491[1];
    const uint32_t **l_1557 = &l_1558;
    const uint32_t ***l_1556 = &l_1557;
    const uint32_t ****l_1555 = &l_1556;
    union U1 l_1559 = {0L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_490[i] = &l_40;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_516[i][j] = &g_492;
    }
    for (i = 0; i < 6; i++)
        l_1251[i] = (-5L);
    return l_1559;
}



static union U2 * func_2(union U2 * p_3, union U2 * p_4, union U2 * const  p_5)
{ 
    union U2 *l_1182 = (void*)0;
    return l_1182;
}



static union U2 * func_6(union U3  p_7)
{ 
    int32_t *l_595 = &g_85;
    int32_t l_602 = 0xADD8FE94L;
    int32_t l_673 = 0x27648A0EL;
    int8_t l_680 = (-9L);
    int32_t l_683 = 0x8FBAFE1FL;
    int16_t l_684 = (-1L);
    int32_t l_689 = 0x3ADEBBA0L;
    int32_t l_690 = 0xEF5BCB8CL;
    int32_t l_691 = 1L;
    int32_t l_693 = 7L;
    int8_t l_738 = 0x5CL;
    int32_t l_749[6][7][6] = {{{0L,0x05DC5DACL,0x62C0ED7AL,0x0873298AL,(-2L),(-2L)},{1L,0xB7C4F7B5L,0xB7C4F7B5L,1L,(-6L),0x767016DEL},{0x62C0ED7AL,(-9L),0L,0xCA91A775L,(-6L),(-1L)},{0xFDFD7AECL,(-2L),0x59AEBB28L,(-9L),(-6L),0x3C66A19FL},{0xA75572B1L,(-9L),(-9L),1L,(-6L),1L},{0x02AAF03BL,0xB7C4F7B5L,0xCC15B6E2L,0L,(-2L),0xFAA3D2E0L},{0x132C75D6L,0x05DC5DACL,0x02AAF03BL,0x3D59B69AL,5L,0x0873298AL}},{{0x72766B81L,0x83E251D5L,0xA7A2D62BL,(-6L),0L,(-9L)},{0L,0L,0L,0x3B576D0AL,0x62C0ED7AL,(-1L)},{0xE14F97E0L,1L,1L,(-9L),0L,(-2L)},{0x3E10DE84L,0x37B8DA57L,0x767016DEL,0xD7631E84L,1L,5L},{0x2F01EFF6L,0x0FFE7201L,0xDFE008B2L,0xB9480DF6L,0x3C66A19FL,0L},{5L,0xD7631E84L,0x818A0009L,0xFDFD7AECL,0x3C66A19FL,0xFDFD7AECL},{1L,1L,1L,0x3C66A19FL,0x197D22F8L,0xB7C4F7B5L}},{{1L,(-2L),0x59438510L,0L,0L,0x4A34BEE3L},{1L,0xB9480DF6L,1L,0L,0x72766B81L,0x3C66A19FL},{1L,0x05DC5DACL,0x3B576D0AL,0x3C66A19FL,0x59AEBB28L,0xA663FA1CL},{1L,1L,0xE14F97E0L,0xFDFD7AECL,0x36E8F0FCL,0x02AAF03BL},{0xDFE008B2L,0xE14F97E0L,0x197D22F8L,0x69067B43L,(-1L),0L},{0x3C66A19FL,0L,0xFDFD7AECL,0x2F01EFF6L,0x577B8FCDL,(-6L)},{1L,0x02AAF03BL,8L,0xB9480DF6L,0x6D023F95L,0x8BC2A0ACL}},{{0x197D22F8L,0x72766B81L,0x36E8F0FCL,0x577B8FCDL,0xF3273B2DL,(-9L)},{0x59438510L,0xAA869B56L,0xF3273B2DL,0xFAA3D2E0L,(-9L),0x0FFE7201L},{0xB7C4F7B5L,0x3C66A19FL,0x02AAF03BL,(-6L),(-9L),0xCA91A775L},{(-1L),0L,0x767016DEL,0x3D59B69AL,0x3D59B69AL,0x767016DEL},{0x0873298AL,0x0873298AL,0x59AEBB28L,0x0FFE7201L,8L,0x37B8DA57L},{1L,0x3B576D0AL,0L,1L,0xD7631E84L,0x59AEBB28L},{0x8BC2A0ACL,1L,0L,0x132C75D6L,0x0873298AL,0x37B8DA57L}},{{5L,0x132C75D6L,0x59AEBB28L,0xE14F97E0L,0xC624DD10L,0x767016DEL},{0xE14F97E0L,0xC624DD10L,0x767016DEL,0x72766B81L,(-2L),0xCA91A775L},{0x17F78875L,(-9L),0x02AAF03BL,0x767016DEL,0x3E10DE84L,0x0FFE7201L},{0x3E10DE84L,0x62C0ED7AL,0xF3273B2DL,0x8BC2A0ACL,0x132C75D6L,(-9L)},{0x83E251D5L,0L,0x36E8F0FCL,0x197D22F8L,(-6L),0x8BC2A0ACL},{0L,0x6D023F95L,8L,1L,1L,(-6L)},{8L,0xDFE008B2L,0xFDFD7AECL,0x4A34BEE3L,0xA663FA1CL,0L}},{{0x62C0ED7AL,1L,0x197D22F8L,0xC624DD10L,0xFA6FC7D8L,0x02AAF03BL},{(-6L),0xA663FA1CL,0xE14F97E0L,1L,0xE14F97E0L,0xA663FA1CL},{0L,(-9L),0x3B576D0AL,0x45E76EA5L,0L,0x3C66A19FL},{0x818A0009L,(-2L),1L,0x05DC5DACL,1L,0x4A34BEE3L},{0xC624DD10L,(-2L),0x59438510L,0xCA91A775L,0L,0xB7C4F7B5L},{0L,(-9L),1L,1L,0xE14F97E0L,0xFDFD7AECL},{0x59AEBB28L,0xA663FA1CL,0x818A0009L,8L,0xFA6FC7D8L,0x59438510L}}};
    int64_t l_789[6] = {0xBE0656D1A81C9A42LL,0xBE0656D1A81C9A42LL,0xBE0656D1A81C9A42LL,0xBE0656D1A81C9A42LL,0xBE0656D1A81C9A42LL,0xBE0656D1A81C9A42LL};
    uint8_t l_790 = 1UL;
    union U1 l_823 = {-1L};
    uint16_t l_855 = 0xDB2CL;
    int16_t l_858 = 1L;
    union U3 l_859 = {0xDD3EL};
    int8_t **l_888 = (void*)0;
    int8_t l_913[3];
    uint64_t l_943 = 1UL;
    uint64_t *l_980 = &g_357;
    int32_t l_984 = 4L;
    uint32_t l_987 = 1UL;
    int32_t l_1098[5][5] = {{0L,(-4L),0L,3L,(-4L)},{0x9B95E9E5L,0L,0x172DB41AL,0L,0x172DB41AL},{0L,0L,0x9B95E9E5L,0x38CA9059L,3L},{4L,3L,0x172DB41AL,0x172DB41AL,3L},{3L,0L,4L,3L,0x172DB41AL}};
    struct S0 l_1104 = {0UL,-8L,0UL,1UL};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_913[i] = 0x41L;
    if (p_7.f2)
    { 
        int32_t *l_582 = &g_98;
        (*g_480) = l_582;
    }
    else
    { 
        int8_t l_585[2][1][3] = {{{0xF4L,0xF4L,0L}},{{0xF4L,0xF4L,0L}}};
        int32_t *l_601 = (void*)0;
        int8_t *** const l_653 = (void*)0;
        union U2 l_669[6][5] = {{{{0xA6L,-1L,0x546B370B41460EC7LL,0x00A9L}},{{255UL,0x6383L,9UL,0xCFABL}},{{0UL,0xC693L,18446744073709551615UL,1UL}},{{255UL,0x6383L,9UL,0xCFABL}},{{0xA6L,-1L,0x546B370B41460EC7LL,0x00A9L}}},{{{0x05L,0xEFCFL,0xE6491B2B08DC3795LL,1UL}},{{0xA0L,0x41A6L,9UL,65535UL}},{{252UL,-1L,5UL,0x34C3L}},{{1UL,0L,1UL,0x9C1AL}},{{252UL,-1L,5UL,0x34C3L}}},{{{0x07L,-9L,0xBD0DEF51E01A2E8ALL,65528UL}},{{0x07L,-9L,0xBD0DEF51E01A2E8ALL,65528UL}},{{0UL,0xC693L,18446744073709551615UL,1UL}},{{0xA6L,-1L,0x546B370B41460EC7LL,0x00A9L}},{{0UL,0xB393L,4UL,0UL}}},{{{0xA0L,0x41A6L,9UL,65535UL}},{{0x05L,0xEFCFL,0xE6491B2B08DC3795LL,1UL}},{{0x05L,0xEFCFL,0xE6491B2B08DC3795LL,1UL}},{{0xA0L,0x41A6L,9UL,65535UL}},{{252UL,-1L,5UL,0x34C3L}}},{{{255UL,0x6383L,9UL,0xCFABL}},{{0xA6L,-1L,0x546B370B41460EC7LL,0x00A9L}},{{8UL,-6L,0xB4362C5EDA07AC22LL,0xD722L}},{{8UL,-6L,0xB4362C5EDA07AC22LL,0xD722L}},{{0xA6L,-1L,0x546B370B41460EC7LL,0x00A9L}}},{{{252UL,-1L,5UL,0x34C3L}},{{0x05L,0xEFCFL,0xE6491B2B08DC3795LL,1UL}},{{0xA5L,1L,0xBE3431335C19B2F6LL,0UL}},{{0UL,1L,0x9757CEE99F600519LL,65528UL}},{{0UL,1L,0x9757CEE99F600519LL,65528UL}}}};
        int32_t l_685 = 0x543CE08DL;
        int32_t l_687 = 0x22774165L;
        int32_t l_703 = (-1L);
        int32_t l_704[7][7] = {{0xCCDCBC8CL,0x6705810FL,0xCCDCBC8CL,0L,0L,0xCCDCBC8CL,0x6705810FL},{0L,0x6705810FL,0x0D8A6D2DL,0x0D8A6D2DL,0x6705810FL,0L,0x6705810FL},{0xCCDCBC8CL,0L,0L,0xCCDCBC8CL,0x6705810FL,0xCCDCBC8CL,0L},{0x987D6437L,0x987D6437L,0L,0x0D8A6D2DL,0L,0x987D6437L,0x987D6437L},{0x987D6437L,0L,0x0D8A6D2DL,0L,0x987D6437L,0x987D6437L,0L},{0xCCDCBC8CL,0x6705810FL,0xCCDCBC8CL,0L,0L,0xCCDCBC8CL,0x6705810FL},{0L,0x6705810FL,0x0D8A6D2DL,0x0D8A6D2DL,0x6705810FL,0L,0x6705810FL}};
        uint8_t l_706[4] = {1UL,1UL,1UL,1UL};
        int64_t l_747[2];
        int32_t l_785 = 1L;
        int16_t l_786 = 0xE321L;
        int8_t l_787 = 0xA6L;
        uint64_t l_835 = 0x99FD9D4C23B76E83LL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_747[i] = 0xC5A82EB70D13BE53LL;
        for (g_53.f0.f1 = 0; (g_53.f0.f1 != 6); g_53.f0.f1 = safe_add_func_uint64_t_u_u(g_53.f0.f1, 6))
        { 
            int32_t ***l_586 = &g_480;
            uint32_t *l_590 = &g_19.f3;
            int32_t l_591 = 0xD5AAC2DCL;
            union U2 *l_596[6][7][6] = {{{(void*)0,(void*)0,&g_53,&g_19,(void*)0,(void*)0},{&g_53,&g_53,&g_492,&g_19,&g_492,&g_19},{&g_53,&g_492,&g_53,(void*)0,(void*)0,&g_19},{&g_19,&g_19,&g_19,&g_53,&g_19,&g_53},{&g_19,(void*)0,&g_53,(void*)0,&g_53,&g_53},{(void*)0,&g_282,(void*)0,&g_282,&g_282,(void*)0},{&g_492,&g_492,&g_282,&g_19,&g_53,&g_19}},{{&g_53,(void*)0,&g_492,&g_53,&g_53,&g_282},{&g_53,&g_53,&g_492,(void*)0,&g_492,&g_19},{(void*)0,(void*)0,&g_282,&g_282,&g_492,(void*)0},{&g_282,&g_492,(void*)0,&g_53,&g_19,&g_53},{(void*)0,&g_282,&g_53,&g_492,&g_19,&g_53},{&g_19,&g_492,&g_19,&g_19,&g_19,&g_19},{&g_492,(void*)0,&g_53,&g_53,&g_53,&g_282}},{{&g_53,&g_282,(void*)0,&g_19,&g_53,&g_492},{&g_492,&g_492,&g_19,&g_19,&g_53,&g_53},{&g_492,&g_53,&g_492,&g_53,(void*)0,&g_492},{&g_53,&g_492,(void*)0,(void*)0,(void*)0,&g_19},{&g_53,&g_282,&g_53,&g_282,&g_492,(void*)0},{&g_282,&g_19,&g_19,&g_282,&g_19,&g_19},{&g_282,&g_19,&g_492,(void*)0,&g_53,&g_19}},{{(void*)0,(void*)0,&g_282,&g_19,&g_19,&g_19},{&g_492,&g_492,&g_492,&g_492,&g_282,&g_19},{&g_53,&g_492,&g_53,&g_19,&g_19,&g_492},{(void*)0,&g_282,&g_492,&g_19,&g_19,&g_492},{&g_53,&g_282,&g_53,&g_492,&g_19,&g_19},{&g_492,&g_19,&g_492,&g_19,(void*)0,&g_492},{(void*)0,&g_282,&g_282,(void*)0,&g_53,(void*)0}},{{&g_282,&g_19,&g_282,&g_282,&g_53,&g_19},{&g_282,&g_492,&g_19,&g_282,&g_492,(void*)0},{&g_53,&g_19,(void*)0,(void*)0,&g_492,&g_53},{&g_53,&g_282,(void*)0,&g_53,&g_19,&g_492},{&g_492,&g_492,&g_282,&g_19,(void*)0,(void*)0},{&g_492,&g_19,&g_492,&g_19,&g_19,&g_492},{&g_53,&g_282,(void*)0,(void*)0,&g_282,&g_282}},{{&g_492,&g_492,&g_492,&g_19,&g_19,(void*)0},{&g_492,&g_19,&g_492,&g_282,&g_19,(void*)0},{&g_282,&g_282,&g_492,&g_492,&g_492,&g_492},{(void*)0,&g_282,&g_282,(void*)0,(void*)0,(void*)0},{&g_19,&g_53,&g_53,(void*)0,(void*)0,&g_19},{&g_19,&g_282,&g_492,&g_492,(void*)0,&g_19},{(void*)0,&g_53,&g_19,&g_53,(void*)0,&g_53}}};
            union U2 *l_597 = &g_598;
            union U1 l_615 = {0xBCB0L};
            int8_t l_652 = (-1L);
            union U2 l_658[6] = {{{253UL,0x087CL,0x3F3A8E3FDC0E0E50LL,0x3AC4L}},{{253UL,0x087CL,0x3F3A8E3FDC0E0E50LL,0x3AC4L}},{{253UL,0x087CL,0x3F3A8E3FDC0E0E50LL,0x3AC4L}},{{253UL,0x087CL,0x3F3A8E3FDC0E0E50LL,0x3AC4L}},{{253UL,0x087CL,0x3F3A8E3FDC0E0E50LL,0x3AC4L}},{{253UL,0x087CL,0x3F3A8E3FDC0E0E50LL,0x3AC4L}}};
            int16_t *l_670 = &g_492.f0.f1;
            uint8_t l_671 = 246UL;
            int16_t l_672 = (-6L);
            int32_t l_688 = 0x60C0FA19L;
            int32_t l_692 = 0x110D1324L;
            int32_t l_694 = 0x5194C85FL;
            int32_t l_705 = 0x07B390E0L;
            struct S0 *l_724 = (void*)0;
            int32_t l_744 = 0xD4052C2EL;
            int64_t l_745 = 1L;
            int32_t l_746 = (-2L);
            int32_t l_748 = 0L;
            int32_t l_750[3];
            int8_t l_769[1];
            int8_t ****l_802 = &g_548[0];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_750[i] = 0L;
            for (i = 0; i < 1; i++)
                l_769[i] = 0x9FL;
            if (l_585[0][0][2])
                break;
            if (((((g_282.f0.f0 , l_586) == l_586) <= ((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u(((*l_590) = g_376[0]))), ((l_591 ^ (+((l_585[0][0][2] ^ (((((p_7.f1 && 0xA7DD806E89098684LL) ^ 1L) != (*g_298)) > p_7.f1) != 0L)) == p_7.f0))) <= 1UL))) ^ g_45)) || 0xCCF54CD4F6D28CEELL))
            { 
                int32_t *l_599[1];
                union U2 *l_600 = &g_598;
                int i;
                for (i = 0; i < 1; i++)
                    l_599[i] = &g_85;
                for (g_19.f0.f2 = (-30); (g_19.f0.f2 >= 15); ++g_19.f0.f2)
                { 
                    (**l_586) = l_595;
                    l_597 = l_596[5][3][4];
                    if (p_7.f2)
                        break;
                    (**l_586) = l_599[0];
                }
                return l_600;
            }
            else
            { 
                uint32_t l_603[4][3] = {{0xE5FAF835L,0xE5FAF835L,0xE5FAF835L},{1UL,9UL,1UL},{0xE5FAF835L,0xE5FAF835L,0xE5FAF835L},{1UL,9UL,1UL}};
                int32_t l_681 = 0x6902AA37L;
                int32_t l_686[4];
                uint8_t l_695 = 0UL;
                int32_t *l_698 = &l_693;
                int32_t *l_699 = &l_694;
                int32_t *l_700 = &l_673;
                int32_t *l_701 = &l_683;
                int32_t *l_702[2];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_686[i] = (-1L);
                for (i = 0; i < 2; i++)
                    l_702[i] = (void*)0;
                l_601 = (g_167 , ((*g_480) = (**l_586)));
                --l_603[3][0];
                if ((safe_lshift_func_int8_t_s_u(((g_598.f0.f1 > ((safe_add_func_int8_t_s_s((((~g_492.f0.f1) | (safe_sub_func_uint64_t_u_u((safe_div_func_int32_t_s_s((l_615 , (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(0x160CL, (0x31E129E856A16B17LL != (((safe_rshift_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((0x604CC1C4531503FBLL | (safe_rshift_func_uint8_t_u_s(g_268.f0, l_603[3][0]))), 0x1BDCL)), (*l_595))) & p_7.f0) < p_7.f0), g_598.f0.f0)) && (**g_297)) & g_376[0])))), p_7.f1))), 0x578C479AL)), l_603[1][0]))) ^ 1L), p_7.f2)) && (*l_595))) | 0x29388DFF8B0B07FFLL), p_7.f1)))
                { 
                    uint8_t *l_640 = &g_187[3].f1;
                    int32_t l_644[4];
                    uint32_t l_651 = 4294967295UL;
                    int8_t ****l_654 = &g_548[0];
                    uint32_t ***l_657 = &g_655;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_644[i] = 4L;
                    (*l_595) = (safe_sub_func_uint32_t_u_u(((*l_590) = (((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(0UL, ((((*g_298) && (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((*l_640) &= p_7.f2) , ((((+(safe_rshift_func_uint8_t_u_u(l_644[3], (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((5UL == ((*l_640) ^= 255UL)), (p_7.f0 = (g_260[3][2][2] || (*l_595))))), 15)) && 0L) != 0xE1L), l_651))))) != 0x13L) & 1UL) <= (*l_595))), 5)), g_376[0]))) , l_644[3]) , p_7.f1))) < l_652) , g_85) >= 0L), l_651)), (*l_595))) < l_603[3][0]) , p_7.f0)), g_357));
                    (*l_654) = l_653;
                    if (p_7.f2)
                        continue;
                    (*l_657) = g_655;
                }
                else
                { 
                    int32_t *l_674 = &l_673;
                    int32_t *l_675 = &l_602;
                    int32_t *l_676 = &l_602;
                    int32_t *l_677 = &g_85;
                    int32_t *l_678 = &l_591;
                    int32_t *l_679[2];
                    int16_t l_682 = 0xB0B3L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_679[i] = &g_85;
                    (*l_595) = (((l_658[1] , &l_586) == (((safe_div_func_uint32_t_u_u(0UL, (safe_rshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(((*g_298) = ((safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((*g_344) == &l_595), ((-3L) & ((l_669[4][0] , l_670) == (void*)0)))), l_671)) > (*g_656))), l_603[3][0])) < p_7.f2), g_492.f0.f1)))) > l_672) , &l_586)) && (*g_298));
                    l_695--;
                }
                if ((*l_595))
                    break;
                l_706[3]--;
            }
            for (g_197 = 10; (g_197 > 7); g_197--)
            { 
                int8_t l_719 = 0x6DL;
                uint64_t l_721 = 0xBFDAA821B431EB5BLL;
                int32_t l_732 = 4L;
                int32_t l_739[4][5][6] = {{{1L,0L,0x5FD7BA13L,(-1L),(-1L),1L},{(-1L),(-1L),0L,(-1L),1L,(-1L)},{(-1L),1L,(-1L),0L,(-1L),(-1L)},{1L,(-1L),0L,(-4L),(-1L),1L},{0L,1L,(-4L),(-4L),1L,0L}},{{1L,(-1L),(-4L),0L,(-1L),1L},{(-1L),(-1L),0L,(-1L),1L,(-1L)},{(-1L),1L,(-1L),0L,(-1L),(-1L)},{1L,(-1L),0L,(-4L),(-1L),1L},{0L,1L,(-4L),(-4L),1L,0L}},{{1L,(-1L),(-4L),0L,(-1L),1L},{(-1L),(-1L),0L,(-1L),1L,(-1L)},{(-1L),1L,(-1L),0L,(-1L),(-1L)},{1L,(-1L),0L,(-4L),(-1L),1L},{0L,1L,(-4L),(-4L),1L,0L}},{{1L,(-1L),(-4L),0L,(-1L),1L},{(-1L),(-1L),0L,(-1L),1L,(-1L)},{(-1L),1L,(-1L),0L,(-1L),(-1L)},{1L,(-1L),0L,(-4L),(-1L),1L},{0L,1L,(-4L),(-4L),1L,0L}}};
                uint32_t l_740 = 4294967295UL;
                uint16_t l_751 = 0xEEC6L;
                uint16_t l_766 = 0x8909L;
                int32_t l_774 = 0xB70CB7D1L;
                int32_t *l_775 = &l_602;
                int32_t *l_776 = &l_703;
                int32_t *l_777 = &l_750[1];
                int32_t *l_778 = &l_703;
                int32_t *l_779 = &l_744;
                int32_t *l_780 = &l_749[5][3][1];
                int32_t *l_781 = &l_693;
                int32_t *l_782 = &l_746;
                int32_t *l_783 = &l_693;
                int32_t *l_784[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_784[i] = &l_704[0][2];
                for (l_615.f1 = 0; (l_615.f1 <= 0); l_615.f1 += 1)
                { 
                    uint16_t *l_722 = &g_187[3].f0;
                    int64_t *l_723 = &g_87[3][0][4];
                    int32_t l_725 = 1L;
                    uint8_t l_726 = 249UL;
                    int i, j, k;
                    (**l_586) = &l_691;
                    (*l_595) = ((safe_div_func_int8_t_s_s((p_7.f0 < (safe_div_func_int64_t_s_s(((((*g_572) , l_653) == (void*)0) && (((safe_mul_func_uint8_t_u_u(((((*l_723) = (((*l_722) = (safe_div_func_int64_t_s_s(g_376[0], (((l_719 && (((~((g_492.f0.f1 > g_282.f0.f3) || g_85)) > l_721) < l_704[2][6])) , 0x5DL) | p_7.f1)))) ^ g_53.f0.f3)) , (*g_571)) == l_724), 0UL)) == (-1L)) , l_725)), (*l_595)))), l_726)) ^ l_725);
                    return l_596[l_615.f1][(l_615.f1 + 3)][(l_615.f1 + 5)];
                }
                if ((safe_lshift_func_int8_t_s_u((*l_595), 5)))
                { 
                    union U3 *l_730 = &g_187[2];
                    union U3 * const *l_729 = &l_730;
                    union U3 * const **l_731 = &l_729;
                    int32_t *l_733 = &l_591;
                    int32_t *l_734 = &l_692;
                    int32_t *l_735 = &l_687;
                    int32_t *l_736 = &g_98;
                    int32_t *l_737[1];
                    int32_t l_743 = 0x4DBC5E26L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_737[i] = &l_689;
                    (*l_731) = l_729;
                    l_740++;
                    ++l_751;
                    (*l_733) |= ((safe_sub_func_uint32_t_u_u(4294967294UL, (*g_656))) , (0xB1C89D44L || (*l_595)));
                }
                else
                { 
                    union U2 *l_757[2][3][1];
                    int32_t *l_767 = &l_704[5][1];
                    int32_t *l_768[4][3] = {{&l_602,&l_602,&l_602},{&l_688,&l_688,&l_688},{&l_602,&l_602,&l_602},{&l_688,&l_688,&l_688}};
                    int32_t l_770[6][4][2] = {{{0x2AAF912EL,0xCE72F0D6L},{0xCE72F0D6L,0x2AAF912EL},{7L,(-1L)},{7L,0x2AAF912EL}},{{0xCE72F0D6L,0xCE72F0D6L},{0x2AAF912EL,7L},{(-1L),7L},{0x2AAF912EL,0xCE72F0D6L}},{{0xCE72F0D6L,0x2AAF912EL},{7L,(-1L)},{7L,0x2AAF912EL},{0xCE72F0D6L,0xCE72F0D6L}},{{0x2AAF912EL,7L},{(-1L),7L},{0x2AAF912EL,0xCE72F0D6L},{0xCE72F0D6L,0x2AAF912EL}},{{7L,(-1L)},{7L,0x2AAF912EL},{0xCE72F0D6L,0xCE72F0D6L},{0x2AAF912EL,7L}},{{(-1L),7L},{0x2AAF912EL,0xCE72F0D6L},{0xCE72F0D6L,0x2AAF912EL},{7L,(-1L)}}};
                    uint32_t l_771 = 0x2CE34935L;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_757[i][j][k] = &l_669[4][0];
                        }
                    }
                    (*l_595) = (+(((l_757[1][1][0] != (void*)0) | (p_7.f2 || g_81)) >= p_7.f1));
                    (*g_480) = &l_693;
                    (*l_595) = (g_187[2] , ((((safe_mod_func_int64_t_s_s(((g_282.f0.f2 >= (p_7.f2 , (g_19.f0.f0 = (safe_add_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(0x6062B68740ECCF56LL, (safe_rshift_func_int16_t_s_u(p_7.f0, g_357)))) <= l_766), p_7.f1))))) && p_7.f2), 0x342A8BBA4BCF99B4LL)) & p_7.f2) > p_7.f1) < p_7.f2));
                    l_771--;
                }
                if (p_7.f1)
                    continue;
                ++l_790;
                for (l_615.f0 = 2; (l_615.f0 != 2); l_615.f0 = safe_add_func_uint64_t_u_u(l_615.f0, 5))
                { 
                    const int32_t * const l_795 = &l_689;
                    const int32_t *l_797 = &l_693;
                    const int32_t **l_796 = &l_797;
                    int8_t *****l_803 = &g_547;
                    int8_t *****l_804[5][1] = {{&l_802},{&l_802},{&l_802},{&l_802},{&l_802}};
                    uint64_t *l_822 = &g_19.f0.f2;
                    int i, j;
                    (*l_796) = l_795;
                    if ((*l_595))
                        continue;
                    (*l_779) = (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((g_805 = ((*l_803) = l_802)) != &g_548[0]) >= (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(p_7.f1, ((((+(**g_297)) == ((((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((~(((*l_822) = ((((safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((p_7.f0 ^ (((safe_lshift_func_uint16_t_u_u(p_7.f2, 13)) != 0x4051DA0BL) == 0x07B8E2E3B025E495LL)) >= 18446744073709551615UL), 7L)) == g_598.f0.f3), 11)) < p_7.f0) | (-2L)) , p_7.f2)) >= 18446744073709551615UL)) & g_492.f0.f0), 0xB167L)), p_7.f0)) , p_7.f1) & p_7.f0) > 0x0D82F6EBL)) , 0UL) , 0xD28EL))), 7)) , l_823) , p_7.f2)) , g_85), (*g_298))), 3));
                    (*l_777) |= p_7.f1;
                    if (p_7.f2)
                        break;
                }
            }
        }
        for (p_7.f0 = 0; (p_7.f0 != 28); p_7.f0 = safe_add_func_int16_t_s_s(p_7.f0, 4))
        { 
            int32_t **l_826 = (void*)0;
            int32_t **l_827 = (void*)0;
            int32_t *l_828 = (void*)0;
            uint64_t *l_840 = &g_598.f0.f2;
            uint64_t l_852[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
            int i;
            l_828 = (**g_344);
            (*l_595) |= (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(l_835, (safe_sub_func_int8_t_s_s(p_7.f1, p_7.f0)))) | (safe_sub_func_uint64_t_u_u((p_7.f2 <= (((*l_840) = 0xBA94BBBD99383DA4LL) <= ((safe_mul_func_int16_t_s_s(((**g_344) != &l_685), g_268.f3)) <= 0xED8206672FFFB193LL))), p_7.f0))), 5)), (**g_655)));
            for (g_19.f3 = 0; (g_19.f3 <= 47); g_19.f3 = safe_add_func_uint64_t_u_u(g_19.f3, 2))
            { 
                for (g_598.f0.f1 = 0; (g_598.f0.f1 <= 2); g_598.f0.f1 += 1)
                { 
                    (*l_595) = ((void*)0 != &l_747[1]);
                    (*g_480) = (**g_344);
                }
            }
            if ((~(((safe_mul_func_int16_t_s_s((((*g_572) , (safe_rshift_func_uint8_t_u_u(g_268.f3, 2))) >= ((safe_rshift_func_int16_t_s_s((-1L), (l_852[5] & (safe_div_func_int16_t_s_s(l_855, 0xEA13L))))) & ((safe_lshift_func_uint8_t_u_u(1UL, l_858)) && 4294967295UL))), p_7.f0)) | (**g_297)) || p_7.f1)))
            { 
                int32_t *l_860 = (void*)0;
                int64_t *l_861[2];
                int32_t l_862 = 0L;
                int32_t l_863 = 0xE0D5560FL;
                int i;
                for (i = 0; i < 2; i++)
                    l_861[i] = (void*)0;
                (*g_480) = (l_859 , l_860);
                l_863 = (0L <= (l_862 = (-1L)));
            }
            else
            { 
                uint32_t l_868 = 0x9F1C6BE2L;
                for (g_92 = 19; (g_92 > 21); g_92 = safe_add_func_uint32_t_u_u(g_92, 3))
                { 
                    (*l_595) = p_7.f0;
                }
                for (l_859.f0 = 0; (l_859.f0 < 3); l_859.f0++)
                { 
                    (*g_480) = &l_703;
                }
                if (p_7.f1)
                    continue;
                l_868--;
            }
            if (p_7.f2)
                continue;
        }
        for (g_45 = 11; (g_45 < 55); ++g_45)
        { 
            int32_t l_875 = 0xB17098A8L;
            struct S0 l_878 = {7UL,3L,0xE2F3925041B3C70DLL,0x7BBDL};
            if (((*l_595) = ((safe_mul_func_int8_t_s_s((l_875 , 0L), (*l_595))) && 0x7D9450827662229ALL)))
            { 
                int32_t l_879[7][3];
                union U3 **l_880 = (void*)0;
                union U3 **l_881 = (void*)0;
                union U3 *l_883 = &g_187[1];
                union U3 **l_882 = &l_883;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_879[i][j] = 0xF2D0AD97L;
                }
                (*l_882) = ((((*g_298) == (safe_sub_func_uint16_t_u_u((l_878 , (((0x2E5DL <= 0xD61AL) >= (l_879[2][0] > (p_7.f0 == 0UL))) || p_7.f1)), g_268.f3))) || l_879[5][1]) , &p_7);
            }
            else
            { 
                union U2 ***l_885 = &g_482[0];
                union U2 ****l_884 = &l_885;
                (*l_884) = (void*)0;
            }
            if (p_7.f2)
                break;
        }
    }
lbl_990:
    (*l_595) = (safe_mod_func_uint32_t_u_u(((void*)0 == l_888), p_7.f1));
    if ((*l_595))
    { 
        int8_t * const l_897 = &l_680;
        int32_t l_902 = 0x09FA2C1DL;
        union U2 l_907 = {{1UL,-1L,0x3B605E05F48883ABLL,0xDAC7L}};
        int32_t ***l_919 = &g_480;
        struct S0 * const *l_924[4];
        struct S0 **l_926[6];
        int32_t l_938 = 0L;
        int32_t l_940 = 9L;
        int32_t l_941 = 7L;
        int32_t l_942 = 6L;
        int32_t l_986 = 0x32C3AB6EL;
        int i;
        for (i = 0; i < 4; i++)
            l_924[i] = &g_572;
        for (i = 0; i < 6; i++)
            l_926[i] = &g_572;
        (*l_595) ^= (safe_mod_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s(((safe_mod_func_int16_t_s_s((0UL | (safe_div_func_int64_t_s_s((((void*)0 != l_897) & (((safe_lshift_func_uint16_t_u_s(((*g_656) && (&g_345 != &g_345)), (safe_mod_func_uint8_t_u_u(l_902, g_45)))) != p_7.f0) > g_224)), 0x3356E13887BB2320LL))), (**g_297))) > 0x7AL), g_598.f0.f2)) == l_902) <= p_7.f2), 1L));
        for (g_19.f1 = 1; (g_19.f1 <= 5); g_19.f1 += 1)
        { 
            uint16_t l_903 = 0x1CC7L;
            union U3 *l_910 = &l_859;
            union U3 **l_909 = &l_910;
            union U3 *** const l_908 = &l_909;
            uint64_t *l_914[6] = {&g_53.f0.f2,&g_357,&g_357,&g_357,(void*)0,(void*)0};
            union U2 *l_918 = &g_19;
            int32_t l_939 = 0x38B8E6D9L;
            int32_t *l_946 = &l_749[2][0][2];
            int32_t *l_947[6][6][2] = {{{&l_749[5][5][0],&g_85},{(void*)0,&l_689},{&l_940,(void*)0},{(void*)0,&l_693},{(void*)0,(void*)0},{&l_940,&l_689}},{{(void*)0,&g_85},{&l_749[5][5][0],(void*)0},{&l_693,(void*)0},{(void*)0,&l_602},{&l_749[5][5][0],&l_689},{&l_602,&l_689}},{{&l_749[5][5][0],&l_602},{(void*)0,(void*)0},{&l_693,(void*)0},{&l_749[5][5][0],&g_85},{(void*)0,&l_689},{&l_940,(void*)0}},{{(void*)0,&l_693},{(void*)0,(void*)0},{&l_940,&l_689},{(void*)0,&g_85},{&l_749[5][5][0],(void*)0},{&l_693,(void*)0}},{{(void*)0,&l_602},{&l_749[5][5][0],&l_689},{&l_602,&l_689},{&l_749[5][5][0],&l_602},{(void*)0,(void*)0},{&l_693,(void*)0}},{{&l_749[5][5][0],&g_85},{(void*)0,&l_689},{&l_940,(void*)0},{(void*)0,&l_693},{(void*)0,(void*)0},{&l_940,&l_689}}};
            uint32_t l_948 = 0UL;
            uint64_t l_951[6][4] = {{18446744073709551615UL,5UL,18446744073709551615UL,5UL},{18446744073709551615UL,5UL,18446744073709551615UL,5UL},{18446744073709551615UL,5UL,18446744073709551615UL,5UL},{18446744073709551615UL,5UL,18446744073709551615UL,5UL},{18446744073709551615UL,5UL,18446744073709551615UL,5UL},{18446744073709551615UL,5UL,18446744073709551615UL,5UL}};
            int i, j, k;
            l_903--;
        }
        for (g_19.f2 = 5; (g_19.f2 <= 60); g_19.f2 = safe_add_func_uint16_t_u_u(g_19.f2, 7))
        { 
            const uint16_t l_967 = 0xF858L;
            const int16_t l_972 = (-10L);
            uint8_t *l_973 = &g_598.f1;
            uint8_t *l_974 = (void*)0;
            uint8_t *l_975 = (void*)0;
            uint8_t *l_976 = &g_492.f0.f0;
            uint64_t *l_979 = &g_224;
            uint64_t **l_978[1];
            int32_t *l_981 = &l_693;
            int32_t l_982 = 0x0A45B8E3L;
            int32_t *l_983[1];
            int32_t l_985 = (-7L);
            int i;
            for (i = 0; i < 1; i++)
                l_978[i] = &l_979;
            for (i = 0; i < 1; i++)
                l_983[i] = &l_942;
            for (g_598.f0.f1 = 0; (g_598.f0.f1 >= 0); g_598.f0.f1 -= 1)
            { 
                int i;
                (*l_595) = (p_7.f0 <= 0x52L);
            }
            (*l_981) &= ((((**g_655) == (safe_div_func_uint64_t_u_u(0x5A3D0EE696D5A28ALL, (safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((l_980 = ((((*l_595) <= (safe_mul_func_int8_t_s_s(((*l_595) != l_967), ((((((*l_976) &= (((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((0x28L > (p_7.f0 == (*l_595))), l_967)), l_972)) < p_7.f2) , 0xE1L)) == g_977) <= (-1L)) ^ (*g_656)) > p_7.f2)))) , p_7.f0) , (void*)0)) == &g_224), g_357)), 6))))) ^ p_7.f0) & l_967);
            --l_987;
        }
    }
    else
    { 
        int8_t ****l_991 = &g_548[0];
        int8_t *****l_992[2];
        int32_t * const l_999 = &l_689;
        int32_t l_1019 = 1L;
        int32_t l_1020 = 0x87C3C093L;
        uint32_t l_1042[1][3][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_992[i] = &g_805;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1042[i][j][k] = 18446744073709551613UL;
            }
        }
        if (g_492.f0.f0)
            goto lbl_990;
        (*g_480) = &l_690;
        if (((p_7.f2 == (*l_595)) > ((g_547 = l_991) != (void*)0)))
        { 
            struct S0 l_1002 = {0xF8L,3L,0x97549F2490FC1777LL,0xFE4FL};
            int32_t l_1003 = 0xE4D35DCBL;
            uint64_t l_1021 = 18446744073709551609UL;
            uint64_t ***l_1028 = &g_1016;
            int32_t l_1037[6] = {3L,3L,3L,3L,3L,3L};
            int i;
            for (g_268.f1 = 0; (g_268.f1 == 5); ++g_268.f1)
            { 
                const union U3 *l_1010 = &g_187[0];
                const union U3 **l_1009 = &l_1010;
                int32_t l_1012[2];
                int32_t l_1018 = 5L;
                uint64_t ** const *l_1031 = &g_1016;
                int8_t l_1036 = 0L;
                int32_t *l_1038 = &l_1037[4];
                int32_t *l_1039 = (void*)0;
                int32_t *l_1040 = &l_689;
                int32_t *l_1041[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_1012[i] = 0xD8BD5E6EL;
                for (i = 0; i < 1; i++)
                    l_1041[i] = &l_749[0][1][5];
                if (((((*l_595) <= (safe_sub_func_uint32_t_u_u(p_7.f2, (p_7.f0 != ((p_7.f2 <= 1L) >= (246UL != 1UL)))))) < 0L) < 4UL))
                { 
                    union U3 *l_997 = &g_187[3];
                    union U2 *l_998 = &g_282;
                    (*l_595) &= p_7.f0;
                    (**g_915) = l_997;
                    return l_998;
                }
                else
                { 
                    int32_t **l_1000[7] = {&l_595,&l_595,&l_595,&l_595,&l_595,&l_595,&l_595};
                    int32_t **l_1001 = &g_102[2];
                    int32_t l_1013[7] = {0x858EFE88L,0L,0x858EFE88L,0x858EFE88L,0L,0x858EFE88L,0x858EFE88L};
                    uint32_t *l_1014 = (void*)0;
                    uint32_t *l_1015 = &g_260[1][0][2];
                    int64_t *l_1017 = &g_87[3][0][4];
                    uint64_t ****l_1029[5][3] = {{&l_1028,&l_1028,&l_1028},{&l_1028,&l_1028,&l_1028},{&l_1028,&l_1028,&l_1028},{&l_1028,&l_1028,&l_1028},{&l_1028,&l_1028,&l_1028}};
                    int i, j;
                    (*l_1001) = (p_7 , l_999);
                    l_602 = (((l_1003 = (l_1002 , ((*l_595) = l_1002.f0))) >= l_1002.f1) >= (safe_add_func_uint16_t_u_u(((l_1018 &= ((safe_lshift_func_uint16_t_u_u((g_260[3][2][2] , (safe_unary_minus_func_int64_t_s((((*l_1017) |= ((((((l_1009 != (*g_915)) <= ((((*l_1015) |= (((l_1013[1] |= (((*l_999) |= (~(g_92 = l_1012[1]))) ^ 4L)) && l_1002.f3) <= 248UL)) , &l_980) != g_1016)) < l_1012[1]) <= g_53.f0.f2) & p_7.f0) , 0xD25E123B70104B1FLL)) && g_87[2][1][1])))), 5)) <= p_7.f0)) && (**g_655)), 0x0BBAL)));
                    ++l_1021;
                    (*l_595) ^= (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((g_1030 = l_1028) != l_1031), 13)), (safe_mul_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(p_7.f0, p_7.f1)) && l_1002.f2), ((((((*l_999) < (g_224 , l_1036)) <= p_7.f1) , (*l_999)) > p_7.f0) , p_7.f0)))));
                    if (p_7.f0)
                        continue;
                }
                l_1042[0][0][0]--;
            }
        }
        else
        { 
            int32_t * const l_1045 = &l_749[1][3][5];
            int32_t **l_1046[2];
            int32_t **l_1047 = &g_102[1];
            int i;
            for (i = 0; i < 2; i++)
                l_1046[i] = &l_595;
            (*l_1047) = l_1045;
        }
    }
    (*g_480) = &l_693;
    for (g_197 = 0; (g_197 <= 2); g_197 += 1)
    { 
        union U1 *l_1048 = (void*)0;
        union U1 **l_1049[6];
        uint64_t **l_1053 = &l_980;
        int64_t l_1069 = 0x16278E5175941960LL;
        int32_t l_1088[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        const union U3 *l_1107 = (void*)0;
        const union U3 **l_1106 = &l_1107;
        const union U3 ***l_1105 = &l_1106;
        uint16_t l_1117 = 0x9E68L;
        int32_t l_1125[2];
        union U2 *l_1130[6] = {&g_19,&g_282,&g_282,&g_19,&g_282,&g_282};
        int i;
        for (i = 0; i < 6; i++)
            l_1049[i] = &l_1048;
        for (i = 0; i < 2; i++)
            l_1125[i] = 0xCAB062ACL;
        g_1050 = l_1048;
        for (g_268.f2 = 0; (g_268.f2 <= 0); g_268.f2 += 1)
        { 
            uint8_t *l_1070 = &l_859.f1;
            uint64_t *l_1071 = &g_492.f0.f2;
            uint64_t *l_1072 = &g_224;
            int32_t l_1073[5][7] = {{0x902D640BL,7L,0x902D640BL,7L,0x902D640BL,7L,0x902D640BL},{0x461BEAFCL,0x461BEAFCL,0x461BEAFCL,0x461BEAFCL,0x461BEAFCL,0x461BEAFCL,0x461BEAFCL},{0x902D640BL,7L,0x902D640BL,7L,0x902D640BL,7L,0x902D640BL},{0x461BEAFCL,0x461BEAFCL,0x461BEAFCL,0x461BEAFCL,0x461BEAFCL,0x461BEAFCL,0x461BEAFCL},{0x902D640BL,7L,0x902D640BL,7L,0x902D640BL,7L,0x902D640BL}};
            uint8_t *l_1074 = &g_598.f0.f0;
            int32_t l_1093 = 0x5D921A88L;
            int32_t l_1126 = 0x8F8A2292L;
            union U3 ****l_1176 = &g_915;
            int i, j;
            if (((safe_lshift_func_int16_t_s_u((l_1053 == (void*)0), 12)) ^ (safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((*l_595), ((safe_add_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((*l_1074) = ((safe_unary_minus_func_int32_t_s(((*g_656) & (l_1073[0][0] = (((((((*l_1072) = ((+((g_87[3][0][4] > (((*l_1071) |= (+(safe_rshift_func_uint8_t_u_u(((*l_1070) ^= l_1069), 6)))) ^ g_268.f0)) == l_1069)) && 0xFA2D5CC5B62A5AA3LL)) < l_1073[0][0]) <= 0x442666DBL) && p_7.f2) & 0L) , (*g_656)))))) <= 0L)), g_376[0])), p_7.f2)) > g_977), g_53.f0.f3)) , (*l_595)))), (**g_297)))))
            { 
                uint16_t l_1075 = 0UL;
                int32_t l_1087 = 0xDFC5F803L;
                int32_t l_1090 = 0x0B0A885DL;
                int16_t l_1091 = 0x134CL;
                int32_t l_1092 = 0xAEC9BE29L;
                int32_t l_1094 = 0x264C9810L;
                int32_t l_1095 = 0x3B57EF58L;
                int32_t l_1096 = 0x01A85E2AL;
                int32_t l_1097[6][7][3] = {{{0xB4F870C1L,0x0C2B6703L,0x0C2B6703L},{0xE6E23C7CL,0x0C2B6703L,(-1L)},{0xA06BFBB2L,0xB4F870C1L,(-10L)},{1L,1L,0xE6E23C7CL},{0x0C2B6703L,(-1L),(-10L)},{0xA06BFBB2L,1L,0xA06BFBB2L},{0xA06BFBB2L,0x0C2B6703L,1L}},{{0x0C2B6703L,0xA06BFBB2L,0xA06BFBB2L},{1L,0xA06BFBB2L,(-10L)},{(-1L),0x0C2B6703L,0xE6E23C7CL},{1L,1L,0xE6E23C7CL},{0x0C2B6703L,(-1L),(-10L)},{0xA06BFBB2L,1L,0xA06BFBB2L},{0xA06BFBB2L,0x0C2B6703L,1L}},{{0x0C2B6703L,0xA06BFBB2L,0xA06BFBB2L},{1L,0xA06BFBB2L,(-10L)},{(-1L),0x0C2B6703L,0xE6E23C7CL},{1L,1L,0xE6E23C7CL},{0x0C2B6703L,(-1L),(-10L)},{0xA06BFBB2L,1L,0xA06BFBB2L},{0xA06BFBB2L,0x0C2B6703L,1L}},{{0x0C2B6703L,0xA06BFBB2L,0xA06BFBB2L},{1L,0xA06BFBB2L,(-10L)},{(-1L),0x0C2B6703L,0xE6E23C7CL},{1L,1L,0xE6E23C7CL},{0x0C2B6703L,(-1L),(-10L)},{0xA06BFBB2L,1L,0xA06BFBB2L},{0xA06BFBB2L,0x0C2B6703L,1L}},{{0x0C2B6703L,0xA06BFBB2L,0xA06BFBB2L},{1L,0xA06BFBB2L,(-10L)},{(-1L),0x0C2B6703L,0xE6E23C7CL},{1L,1L,0xE6E23C7CL},{0x0C2B6703L,(-1L),(-10L)},{0xA06BFBB2L,1L,0xA06BFBB2L},{0xA06BFBB2L,0x0C2B6703L,1L}},{{0x0C2B6703L,0xA06BFBB2L,0xA06BFBB2L},{1L,0xA06BFBB2L,(-10L)},{(-1L),0x0C2B6703L,0xE6E23C7CL},{1L,1L,0xE6E23C7CL},{0x0C2B6703L,(-1L),(-10L)},{0xA06BFBB2L,1L,0xA06BFBB2L},{0xA06BFBB2L,0x0C2B6703L,1L}}};
                union U3 ***l_1102 = &g_916;
                int16_t l_1124 = 0xB572L;
                union U1 l_1150[1][2] = {{{1L},{1L}}};
                int32_t **l_1151 = &g_102[1];
                int32_t **l_1153 = &l_595;
                union U2 l_1158 = {{254UL,0x34E5L,18446744073709551615UL,1UL}};
                int16_t l_1179 = 0x3010L;
                int i, j, k;
                if ((l_1075 || 0x3552FAB43761EBC0LL))
                { 
                    int32_t *l_1076 = &l_690;
                    int32_t l_1077 = 1L;
                    int32_t *l_1078 = &l_689;
                    int32_t *l_1079 = &l_690;
                    int32_t *l_1080 = &l_602;
                    int32_t *l_1081 = (void*)0;
                    int32_t *l_1082 = &l_689;
                    int32_t *l_1083 = (void*)0;
                    int32_t *l_1084 = &l_1073[0][3];
                    int32_t *l_1085 = &l_749[0][2][5];
                    int32_t *l_1086[4];
                    int32_t l_1089 = 0x95513A39L;
                    uint32_t l_1099 = 4294967289UL;
                    union U3 ****l_1103 = &g_915;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1086[i] = &l_984;
                    ++l_1099;
                    (*l_1079) ^= (0UL && l_1073[0][0]);
                    (*l_1079) ^= ((l_1088[2] = l_1096) , 0xC7BDBDA7L);
                    (*l_1103) = l_1102;
                }
                else
                { 
                    int32_t *l_1109 = &l_1094;
                    int32_t *l_1110 = &l_1096;
                    int32_t *l_1111 = (void*)0;
                    int32_t *l_1112 = &l_1097[2][3][1];
                    int32_t *l_1113 = &g_98;
                    int32_t *l_1114 = &g_85;
                    int32_t *l_1115 = &l_1095;
                    int32_t *l_1116[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1116[i] = &l_984;
                    (*l_595) |= 0L;
                    (*g_480) = &l_673;
                    (*l_1109) ^= (((l_1073[0][0] <= ((l_1104 , l_1105) != (((*l_595) = 0xFC8FC3C2L) , (void*)0))) && 0xD73CL) >= (+(0xD9E3BA286410D1E9LL <= l_1088[4])));
                    --l_1117;
                    (*l_1109) = (p_7 , (*l_595));
                }
                for (l_855 = 0; (l_855 <= 2); l_855 += 1)
                { 
                    int32_t *l_1120 = &l_683;
                    int32_t *l_1121 = &g_98;
                    int32_t *l_1122 = &g_98;
                    int32_t *l_1123[4][4][7] = {{{&l_984,&l_1092,&l_1087,&g_788,&g_788,&l_1087,&l_1092},{&l_1087,&l_673,&l_1087,&l_1097[0][3][0],(void*)0,&g_788,&l_1087},{&l_1097[1][6][2],&l_1090,&l_749[5][3][1],&l_1088[4],&l_1094,&l_1088[0],&l_749[3][3][0]},{&l_1087,&l_1088[4],&l_1087,&l_1097[0][3][0],&l_749[5][3][1],&l_749[5][3][1],&l_1097[0][3][0]}},{{&l_1094,&l_749[3][3][0],&l_1094,&g_788,&l_749[5][3][1],&l_984,&l_1087},{&l_1090,&l_1088[0],&l_1095,&l_749[3][3][0],&l_1094,&l_673,&l_1097[5][0][2]},{&l_749[3][3][0],&l_1095,&l_1088[0],&l_1090,(void*)0,&l_984,&l_984},{&g_788,&l_1094,&l_749[3][3][0],&l_1094,&g_788,&l_749[5][3][1],&l_984}},{{&l_1097[0][3][0],&l_1087,&l_1088[4],&l_1087,&l_984,&l_1088[0],&l_1097[5][0][2]},{&l_1088[4],&l_749[5][3][1],&l_1090,&l_1097[1][6][2],&l_1097[5][0][2],&g_788,&l_1087},{&l_1097[0][3][0],&l_1087,&l_1097[5][0][2],&l_1097[5][0][2],&l_1097[5][0][2],&l_749[3][3][0],&l_1088[0]},{&l_1088[4],&l_749[3][3][0],&g_788,&l_1092,(void*)0,&l_1088[0],&g_788}},{{&g_788,&l_673,&l_1097[1][6][2],&g_788,&l_1097[5][0][2],&l_1095,&l_749[5][3][1]},{&l_984,&l_749[5][3][1],&g_788,&l_1094,&l_749[3][3][0],&l_1094,&g_788},{(void*)0,(void*)0,&l_1097[5][0][2],&l_1094,&l_984,&l_1087,&l_1087},{&l_749[3][3][0],&l_984,&l_984,&g_788,&g_788,&l_749[5][3][1],&l_673}}};
                    uint32_t l_1127 = 0x3EEB0E53L;
                    int i, j, k;
                    (*l_595) &= g_260[(g_197 + 3)][(g_268.f2 + 2)][l_855];
                    ++l_1127;
                    return l_1130[3];
                }
                for (g_77 = 2; (g_77 >= 0); g_77 -= 1)
                { 
                    int32_t ***l_1152[4] = {&l_1151,&l_1151,&l_1151,&l_1151};
                    uint16_t *l_1154 = &l_859.f0;
                    int32_t *l_1155 = &l_1098[4][0];
                    struct S0 l_1175 = {0x1EL,0xECB5L,18446744073709551615UL,65535UL};
                    int i, j, k;
                    (*l_595) = (18446744073709551610UL && ((~(safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_260[(g_268.f2 + 4)][g_268.f2][g_197], l_1117)), (safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((p_7.f2 , (safe_mod_func_uint32_t_u_u((((*l_1155) ^= ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_7.f0, (safe_rshift_func_uint16_t_u_u(((*l_1154) = (safe_rshift_func_uint8_t_u_u(((*l_1074) = (((((l_1153 = (l_1150[0][0] , l_1151)) != &l_595) | l_1088[4]) , l_1088[1]) , 0x86L)), g_167))), 3)))), 0)) ^ 1UL)) , 0x5998C972L), p_7.f2))), p_7.f2)) , p_7.f1), g_127))))) , 0x207CCD70D06EC078LL));
                    (*l_595) = (((-3L) && (l_1073[0][0] ^= p_7.f1)) > ((safe_sub_func_uint8_t_u_u(p_7.f2, 0x3AL)) < (l_1158 , (g_127 > p_7.f1))));
                    l_1073[3][6] = (safe_add_func_uint8_t_u_u(g_598.f0.f2, (safe_rshift_func_int8_t_s_s(((((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((l_1088[4] = ((((*g_298) ^= ((safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((p_7.f1 || (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((((&l_1102 != (l_1175 , l_1176)) , ((safe_lshift_func_uint8_t_u_u(p_7.f2, g_53.f0.f2)) , (void*)0)) == &g_480) | 0xD1BDF71EDFBD10E0LL), p_7.f1)), (*l_595)))) , 7L), p_7.f0)), l_1179)) || p_7.f2)) || 0UL) && g_357)) && p_7.f1), 65529UL)), 7)) , (void*)0) == (void*)0) <= 0xA53D8B12L), l_1117))));
                    (*l_595) |= p_7.f1;
                }
            }
            else
            { 
                union U2 *l_1180 = &g_492;
                return l_1180;
            }
        }
    }
    return (***g_952);
}



static union U3  func_8(int32_t  p_9, union U2 * p_10, union U2 * p_11, union U2 * p_12, int32_t  p_13)
{ 
    union U2 * const l_538 = &g_492;
    int8_t *l_546 = &g_77;
    int8_t **l_545[3][7][3] = {{{&l_546,&l_546,&l_546},{(void*)0,&l_546,&l_546},{&l_546,&l_546,&l_546},{&l_546,&l_546,&l_546},{&l_546,&l_546,(void*)0},{&l_546,&l_546,&l_546},{(void*)0,&l_546,&l_546}},{{&l_546,&l_546,&l_546},{(void*)0,(void*)0,&l_546},{&l_546,(void*)0,&l_546},{&l_546,(void*)0,&l_546},{&l_546,&l_546,(void*)0},{&l_546,&l_546,&l_546},{(void*)0,&l_546,&l_546}},{{&l_546,&l_546,&l_546},{(void*)0,&l_546,&l_546},{&l_546,&l_546,&l_546},{&l_546,&l_546,&l_546},{&l_546,&l_546,(void*)0},{&l_546,&l_546,&l_546},{(void*)0,&l_546,&l_546}}};
    int8_t ***l_544[3][5][4] = {{{&l_545[0][4][0],(void*)0,&l_545[1][0][0],&l_545[0][4][0]},{&l_545[0][3][0],&l_545[2][5][0],&l_545[0][3][0],&l_545[1][0][0]},{&l_545[1][0][0],&l_545[2][5][0],&l_545[1][5][2],&l_545[0][4][0]},{&l_545[2][5][0],(void*)0,(void*)0,&l_545[2][5][0]},{&l_545[0][3][0],&l_545[0][4][0],(void*)0,&l_545[1][0][0]}},{{&l_545[2][5][0],&l_545[1][0][0],&l_545[1][5][2],&l_545[1][0][0]},{&l_545[1][0][0],(void*)0,&l_545[0][3][0],&l_545[1][0][0]},{&l_545[0][3][0],&l_545[1][0][0],&l_545[1][0][0],&l_545[1][0][0]},{&l_545[0][4][0],&l_545[0][4][0],&l_545[1][5][2],&l_545[2][5][0]},{&l_545[0][4][0],(void*)0,&l_545[1][0][0],&l_545[0][4][0]}},{{&l_545[0][3][0],&l_545[2][5][0],&l_545[0][3][0],&l_545[1][0][0]},{&l_545[1][0][0],&l_545[2][5][0],&l_545[1][5][2],&l_545[0][4][0]},{&l_545[2][5][0],(void*)0,(void*)0,&l_545[2][5][0]},{&l_545[0][3][0],&l_545[0][4][0],(void*)0,&l_545[1][0][0]},{&l_545[2][5][0],&l_545[1][0][0],&l_545[1][5][2],&l_545[1][0][0]}}};
    int8_t *** const *l_543[6][2] = {{&l_544[0][3][2],&l_544[0][3][2]},{&l_544[0][3][2],&l_544[0][3][2]},{&l_544[0][3][2],&l_544[0][3][2]},{&l_544[0][3][2],&l_544[0][3][2]},{&l_544[0][3][2],&l_544[0][3][2]},{&l_544[0][3][2],&l_544[0][3][2]}};
    union U3 l_550 = {0x275EL};
    uint32_t *l_552 = &g_418;
    uint32_t **l_551[3];
    uint32_t ***l_553 = &l_551[2];
    uint8_t *l_563 = &g_282.f0.f0;
    uint8_t *l_564 = &g_19.f1;
    union U3 *l_568 = &l_550;
    union U3 **l_567 = &l_568;
    struct S0 *l_569[4][2] = {{&g_492.f0,&g_53.f0},{&g_492.f0,&g_53.f0},{&g_492.f0,&g_53.f0},{&g_492.f0,&g_53.f0}};
    struct S0 **l_570 = &l_569[1][1];
    int32_t *l_573 = &g_98;
    int32_t l_575 = 9L;
    int32_t l_576[1];
    int32_t *l_577 = &l_576[0];
    int32_t *l_578[4][5];
    uint32_t l_579 = 0UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_551[i] = &l_552;
    for (i = 0; i < 1; i++)
        l_576[i] = 1L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_578[i][j] = &l_576[0];
    }
    for (g_268.f2 = 0; (g_268.f2 != 54); g_268.f2 = safe_add_func_int64_t_s_s(g_268.f2, 9))
    { 
        struct S0 *l_519 = (void*)0;
        struct S0 **l_520 = (void*)0;
        struct S0 **l_521 = &l_519;
        struct S0 *l_523 = &g_282.f0;
        struct S0 **l_522 = &l_523;
        int32_t l_528 = 1L;
        int8_t ** const *l_531 = (void*)0;
        (*l_522) = ((*l_521) = l_519);
        p_13 = (safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(0UL, (l_528 ^ ((safe_mod_func_uint16_t_u_u((((((void*)0 == l_531) | (safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((void*)0 != l_538) | (safe_div_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(g_87[1][1][0], 18446744073709551615UL)), 0xB47FL))), 3)), 65535UL)) ^ 0UL), g_492.f0.f0))) , l_543[3][1]) != g_547), g_87[3][0][4])) && p_13)))), p_9));
        return l_550;
    }
    if (g_268.f2)
        goto lbl_554;
lbl_554:
    (*l_553) = l_551[2];
    (*l_570) = ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((((g_268.f1 = (((*l_564) = ((*l_563) = g_492.f0.f0)) ^ (((((g_45 , g_53.f0.f3) && ((&g_45 == (void*)0) && (safe_mod_func_int64_t_s_s((&l_550 != ((*l_567) = &l_550)), 18446744073709551610UL)))) && (-1L)) || p_9) | g_53.f0.f2))) != g_92) < p_13), p_13)), 3)), 8)), l_550.f2)) , l_569[3][1]);
    if (g_268.f2)
        goto lbl_574;
lbl_574:
    (*l_573) = (g_571 != (l_570 = &g_572));
    l_579++;
    return g_187[5];
}



static union U1  func_22(union U2 * p_23, union U2  p_24, union U2 * p_25)
{ 
    int32_t *l_496 = (void*)0;
    int32_t *l_497 = &g_98;
    int32_t *l_498 = &g_85;
    union U3 *l_510 = &g_187[3];
    uint32_t *l_511 = (void*)0;
    int8_t l_512[7][1][2];
    union U1 l_513 = {0L};
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_512[i][j][k] = 0xC2L;
        }
    }
    (*l_497) = (!((**g_344) == l_496));
    (*l_498) |= (*l_497);
    (*l_497) = (((~g_187[3].f0) && p_24.f0.f0) , (safe_mul_func_int16_t_s_s(((**g_297) = ((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(p_24.f0.f2, 7)), ((safe_mul_func_int16_t_s_s((((&g_187[4] == l_510) == ((*l_498) = 0x2E02544FL)) , (**g_297)), 0UL)) | p_24.f0.f1))) & 0L)), p_24.f0.f3)));
    (*l_498) = l_512[5][0][1];
    return l_513;
}



static union U2 * func_26(uint8_t  p_27, union U2 * p_28)
{ 
    int32_t *l_487[3];
    int16_t l_488[4] = {1L,1L,1L,1L};
    union U2 *l_489 = &g_53;
    int i;
    for (i = 0; i < 3; i++)
        l_487[i] = &g_85;
    l_488[1] = 0xE5993532L;
    l_487[2] = ((*g_480) = (*g_480));
    return l_489;
}



static uint8_t  func_33(int32_t  p_34, union U2 ** p_35, union U2  p_36, union U2 * p_37)
{ 
    int64_t l_486 = 0x637E490DEB2BAB7ELL;
    return l_486;
}



static union U2 ** func_38(union U2 * p_39)
{ 
    uint32_t l_43 = 1UL;
    uint16_t *l_44 = &g_45;
    union U2 *l_51 = &g_19;
    union U2 **l_50[1][3];
    int32_t *l_114[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint32_t l_131 = 0xD36CA66AL;
    int64_t l_140 = 0L;
    int32_t *l_169 = &g_98;
    struct S0 l_182 = {0UL,0x97E8L,0xFD2184012F00CAAALL,3UL};
    const int32_t l_205 = 1L;
    uint8_t l_208 = 0x4AL;
    int16_t *l_213 = &g_19.f0.f1;
    int16_t *l_214 = &g_81;
    uint32_t l_215 = 18446744073709551610UL;
    int16_t l_216 = 3L;
    int32_t l_259[3];
    int32_t **l_286[4];
    uint64_t *l_324 = &g_224;
    uint64_t **l_323[5][4] = {{&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324}};
    uint16_t l_326 = 1UL;
    int32_t l_398[2];
    uint64_t l_399 = 0x84CA713AE3CD8226LL;
    int8_t l_402 = (-9L);
    uint64_t l_450[1];
    int8_t l_465[5][3][1] = {{{0xD6L},{1L},{0xD6L}},{{0L},{0L},{0xD6L}},{{1L},{0xD6L},{0L}},{{0L},{0xD6L},{1L}},{{0xD6L},{0L},{0L}}};
    int32_t ***l_478 = &l_286[2];
    int32_t ****l_477[7];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_50[i][j] = &l_51;
    }
    for (i = 0; i < 3; i++)
        l_259[i] = 0x8243B38CL;
    for (i = 0; i < 4; i++)
        l_286[i] = &l_114[0][0];
    for (i = 0; i < 2; i++)
        l_398[i] = 1L;
    for (i = 0; i < 1; i++)
        l_450[i] = 0UL;
    for (i = 0; i < 7; i++)
        l_477[i] = &l_478;
    if ((safe_mul_func_uint16_t_u_u(((*l_44) = l_43), ((((safe_sub_func_uint64_t_u_u((((((0x9CBDL > ((safe_lshift_func_int16_t_s_s(((g_52 = &g_19) == (void*)0), (((65535UL <= l_43) > 0x4AD4463028EC7DFFLL) && 0xE2L))) == g_53.f0.f1)) <= 0x4C92L) > g_53.f0.f3) , l_43) == l_43), l_43)) , 4UL) , l_43) != 0x7DL))))
    { 
        uint32_t l_75 = 0x202D2A5DL;
        int32_t l_78 = (-1L);
        for (g_19.f2 = (-16); (g_19.f2 >= 11); g_19.f2++)
        { 
            union U2 *l_65 = &g_19;
            int8_t *l_76 = &g_77;
            int32_t l_79 = 0xD45AA775L;
            int16_t *l_80 = &g_81;
            int16_t *l_82 = &g_83;
            int32_t *l_84[7][7] = {{&l_79,&l_79,&l_79,&l_79,&l_79,&l_79,&l_79},{&l_79,(void*)0,(void*)0,&l_79,(void*)0,(void*)0,&l_79},{(void*)0,&l_79,(void*)0,(void*)0,&l_79,(void*)0,(void*)0},{&l_79,&l_79,&l_79,&l_79,&l_79,&l_79,&l_79},{&l_79,(void*)0,(void*)0,&l_79,(void*)0,(void*)0,&l_79},{(void*)0,&l_79,(void*)0,(void*)0,&l_79,(void*)0,(void*)0},{&l_79,&l_79,&l_79,&l_79,&l_79,&l_79,&l_79}};
            int i, j;
            g_85 = (!(safe_mul_func_uint16_t_u_u(g_53.f0.f0, (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(9L, (((*l_82) ^= ((0xABD35EB13E27C213LL & (g_53.f0.f3 < ((g_52 = l_65) == (((*l_80) ^= (safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((~((l_78 = ((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(l_75, ((*l_76) = 8L))), l_43)) & g_45)) | l_79)), l_43)), 0xA701L))) , (void*)0)))) || 4UL)) & 0x8F8CL))), l_75)), l_79)))));
        }
    }
    else
    { 
        int64_t *l_86 = &g_87[3][0][4];
        union U2 l_90 = {{0x04L,0x0369L,18446744073709551607UL,0x0F82L}};
        int64_t *l_91 = &g_92;
        int32_t *l_97 = &g_98;
        const int32_t l_111 = 0xA0FD8B34L;
        int32_t l_130 = 1L;
    }
    if (((safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((((g_53.f0.f2 > ((*l_214) |= ((void*)0 != &g_52))) , (((*l_214) ^= 4L) | 0x1017L)) <= (((((*l_169) = (*l_169)) != (g_187[3] , l_215)) ^ l_216) ^ g_187[3].f0)), 255UL)) || 4294967295UL), g_187[3].f1)) || 0xD8L))
    { 
        uint32_t *l_221[1][4][3] = {{{&l_43,&l_43,&l_43},{&l_43,&l_43,&l_43},{&l_43,&l_43,&l_43},{&l_43,&l_43,&l_43}}};
        int32_t l_222 = (-6L);
        int32_t l_223 = (-2L);
        int32_t **l_234[4][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t ***l_233 = &l_234[0][0];
        int32_t ***l_235 = (void*)0;
        int32_t **l_237[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t ***l_236 = &l_237[1];
        uint8_t *l_240 = &g_53.f0.f0;
        uint64_t *l_262 = &l_182.f2;
        uint64_t **l_261 = &l_262;
        uint64_t ***l_263 = &l_261;
        uint16_t *l_273 = &g_187[3].f0;
        int8_t *l_275 = &g_197;
        int8_t **l_274 = &l_275;
        uint32_t l_278 = 0x062365FEL;
        const union U2 *l_279 = &g_53;
        const union U2 **l_280[6];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_280[i] = &l_279;
lbl_264:
        l_223 &= ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((g_224++), ((l_182 , (safe_mod_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s((&l_114[1][1] == ((*l_236) = ((*l_233) = &g_102[0]))), (((safe_mul_func_int16_t_s_s(((g_19.f0.f0 = ((*l_240) = (*l_169))) < ((safe_add_func_uint64_t_u_u(g_83, (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_div_func_int64_t_s_s(((((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((++(*l_44)), (safe_mod_func_uint8_t_u_u((*l_169), (safe_mul_func_int8_t_s_s((l_259[2] > g_83), 255UL)))))), (*l_169))) , (void*)0) == (void*)0) >= (*l_169)) || g_98) || g_187[3].f0), (*l_169))), 0xA4L)), g_127)))) > g_81)), g_83)) < g_260[3][2][2]) || g_85))) ^ g_187[3].f2), g_260[3][2][2])) <= g_187[3].f1) != g_197), (*l_169)))) == (-1L)))), g_81)) < g_77);
        (*l_263) = l_261;
        if (l_223)
            goto lbl_264;
        g_281 = ((~(safe_add_func_int16_t_s_s((((((g_268 , ((*l_169) <= (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((-4L) != ((*l_273) = ((*l_44) &= g_197))), 9)), ((((*l_274) = &g_77) != &g_77) , ((safe_add_func_uint32_t_u_u(g_85, g_260[0][0][0])) , l_278)))))) & 1UL) == g_87[0][0][4]) < g_87[3][0][4]) ^ (*l_169)), g_85))) , l_279);
    }
    else
    { 
        uint32_t l_283 = 0x15469824L;
        l_283--;
    }
    g_287 = (g_102[1] = l_114[2][1]);
    for (g_19.f0.f0 = 0; (g_19.f0.f0 == 50); g_19.f0.f0 = safe_add_func_uint8_t_u_u(g_19.f0.f0, 3))
    { 
        uint32_t l_290 = 18446744073709551610UL;
        int32_t l_299[7][2][5] = {{{9L,(-1L),0xCE6065E5L,(-4L),0x654FE5E0L},{0x541F4F6CL,0x650B3E28L,0xCE6065E5L,0x691744EEL,0x8AFE7A2BL}},{{0xAAF9D9B2L,1L,0xCE6065E5L,0x654FE5E0L,0x691744EEL},{(-8L),0x6D6FC5D2L,0xCE6065E5L,(-1L),(-1L)}},{{0xCE6065E5L,1L,0xCE6065E5L,0x8AFE7A2BL,(-4L)},{9L,(-1L),0xCE6065E5L,(-4L),0x654FE5E0L}},{{0x541F4F6CL,0x650B3E28L,0xCE6065E5L,0x691744EEL,0x8AFE7A2BL},{0xAAF9D9B2L,1L,0xCE6065E5L,0x654FE5E0L,0x691744EEL}},{{(-8L),0x6D6FC5D2L,0xCE6065E5L,(-1L),(-1L)},{0xCE6065E5L,1L,0xCE6065E5L,0x8AFE7A2BL,(-4L)}},{{9L,(-1L),0xCE6065E5L,(-4L),0x654FE5E0L},{0x541F4F6CL,0x650B3E28L,0xCE6065E5L,0x691744EEL,0x8AFE7A2BL}},{{0L,0x358F03E5L,0xDAA21049L,0xAAF9D9B2L,9L},{0L,0L,0xDAA21049L,0xCE6065E5L,0xCE6065E5L}}};
        uint64_t *l_321 = &l_182.f2;
        uint64_t **l_320 = &l_321;
        union U3 *l_342[6];
        int32_t ***l_397[6][6] = {{&l_286[2],(void*)0,&l_286[2],&l_286[2],&l_286[2],&l_286[2]},{&l_286[2],&l_286[2],&l_286[2],(void*)0,(void*)0,(void*)0},{(void*)0,&l_286[2],(void*)0,&l_286[2],&l_286[2],&l_286[2]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_286[2],(void*)0},{(void*)0,(void*)0,&l_286[2],(void*)0,(void*)0,&l_286[2]},{(void*)0,(void*)0,&l_286[2],&l_286[2],(void*)0,(void*)0}};
        union U2 **l_448 = &g_52;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_342[i] = (void*)0;
    }
    g_479 = &l_286[1];
    return &g_52;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19.f0.f0, "g_19.f0.f0", print_hash_value);
    transparent_crc(g_19.f0.f1, "g_19.f0.f1", print_hash_value);
    transparent_crc(g_19.f0.f2, "g_19.f0.f2", print_hash_value);
    transparent_crc(g_19.f0.f3, "g_19.f0.f3", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_53.f0.f0, "g_53.f0.f0", print_hash_value);
    transparent_crc(g_53.f0.f1, "g_53.f0.f1", print_hash_value);
    transparent_crc(g_53.f0.f2, "g_53.f0.f2", print_hash_value);
    transparent_crc(g_53.f0.f3, "g_53.f0.f3", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_87[i][j][k], "g_87[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_187[i].f0, "g_187[i].f0", print_hash_value);
        transparent_crc(g_187[i].f1, "g_187[i].f1", print_hash_value);
        transparent_crc(g_187[i].f2, "g_187[i].f2", print_hash_value);

    }
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_260[i][j][k], "g_260[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_268.f0, "g_268.f0", print_hash_value);
    transparent_crc(g_282.f0.f0, "g_282.f0.f0", print_hash_value);
    transparent_crc(g_282.f0.f1, "g_282.f0.f1", print_hash_value);
    transparent_crc(g_282.f0.f2, "g_282.f0.f2", print_hash_value);
    transparent_crc(g_282.f0.f3, "g_282.f0.f3", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_376[i], "g_376[i]", print_hash_value);

    }
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_492.f0.f0, "g_492.f0.f0", print_hash_value);
    transparent_crc(g_492.f0.f1, "g_492.f0.f1", print_hash_value);
    transparent_crc(g_492.f0.f2, "g_492.f0.f2", print_hash_value);
    transparent_crc(g_492.f0.f3, "g_492.f0.f3", print_hash_value);
    transparent_crc(g_598.f0.f0, "g_598.f0.f0", print_hash_value);
    transparent_crc(g_598.f0.f1, "g_598.f0.f1", print_hash_value);
    transparent_crc(g_598.f0.f2, "g_598.f0.f2", print_hash_value);
    transparent_crc(g_598.f0.f3, "g_598.f0.f3", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_977, "g_977", print_hash_value);
    transparent_crc(g_1191, "g_1191", print_hash_value);
    transparent_crc(g_1318, "g_1318", print_hash_value);
    transparent_crc(g_1335, "g_1335", print_hash_value);
    transparent_crc(g_1348, "g_1348", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1491[i], "g_1491[i]", print_hash_value);

    }
    transparent_crc(g_1520, "g_1520", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
