// SPDX-License-Identifier: MIT
// cctest_csmith_9bb970b9.c --- cctest case csmith_9bb970b9 (csmith seed 2612621497)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3781f355 */
/* @exp_ticks 0x3420 */

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

// Options:   -s 2612621497 -o /tmp/csmith_gen_7yg6dpne/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int8_t  f0;
   int32_t  f1;
   uint64_t  f2;
   int8_t  f3;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const int16_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

union U4 {
   uint8_t  f0;
};

union U5 {
   uint8_t  f0;
};


static uint32_t g_5[2] = {0UL,0UL};
static int16_t g_41 = 0xF642L;
static union U5 g_57 = {0xDEL};
static uint16_t g_77 = 65535UL;
static uint16_t g_95[2] = {65535UL,65535UL};
static int64_t g_100 = 1L;
static uint64_t g_101 = 0xAF170B72F399B0BCLL;
static int32_t g_106 = 0x9F6D150EL;
static int32_t g_115 = 0xC401F3C7L;
static struct S2 g_121 = {-1L,0xBEA84625L};



static struct S2  func_1(void);
static uint8_t  func_3(uint8_t  p_4);
static int32_t  func_9(union U5  p_10, struct S0  p_11, union U4  p_12);
static union U5  func_13(uint32_t  p_14, struct S0  p_15, int32_t  p_16, uint16_t  p_17);




static struct S2  func_1(void)
{ 
    const int64_t l_114 = (-1L);
    int32_t l_120 = 0x6B27BD0FL;
    g_115 ^= ((safe_unary_minus_func_uint8_t_u(func_3(g_5[0]))) || l_114);
    l_120 &= (safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s(0L, (l_114 || 1L))), (l_114 < g_57.f0)));
    return g_121;
}



static uint8_t  func_3(uint8_t  p_4)
{ 
    int32_t l_6[3];
    int32_t l_7 = 0xDB8E9646L;
    struct S0 l_19 = {-6L,0x9F4F9A02L,0x703ACB6D64BDA99DLL,0x97L};
    int32_t l_22[4][3][4] = {{{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L},{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L},{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L}},{{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L},{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L},{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L}},{{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L},{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L},{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L}},{{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L},{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L},{0x2B752BF3L,0x2B752BF3L,0x2B752BF3L,0x2B752BF3L}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_6[i] = 0xCC895931L;
    l_7 = l_6[0];
    for (l_7 = 1; (l_7 >= 0); l_7 -= 1)
    { 
        int64_t l_8 = 0x7289FFF12F3CCD24LL;
        union U5 l_58 = {0xFAL};
        union U4 l_59[2] = {{0x74L},{0x74L}};
        int32_t l_112 = 0x997210B6L;
        uint8_t l_113[2];
        int i;
        for (i = 0; i < 2; i++)
            l_113[i] = 3UL;
        l_8 = 0xF5B1B6FDL;
        if (func_9((l_58 = func_13((!g_5[l_7]), l_19, (l_22[0][1][3] = (safe_lshift_func_uint16_t_u_s(g_5[l_7], 2))), (((p_4 | p_4) & p_4) < p_4))), l_19, l_59[0]))
        { 
            int16_t l_99 = 0x73DBL;
            g_101--;
            l_112 = ((safe_mul_func_int16_t_s_s(((g_106 = (p_4 == 0UL)) > (!(((safe_lshift_func_int8_t_s_u(g_95[1], (safe_mod_func_uint8_t_u_u(g_100, 248UL)))) , g_5[1]) && p_4))), l_6[0])) <= 4294967291UL);
        }
        else
        { 
            g_106 = 0xEDCFEE1CL;
        }
        for (g_100 = 0; (g_100 <= 1); g_100 += 1)
        { 
            if (g_41)
                break;
            if (g_5[0])
                continue;
            if (l_113[0])
                continue;
        }
    }
    return g_5[0];
}



static int32_t  func_9(union U5  p_10, struct S0  p_11, union U4  p_12)
{ 
    const int32_t l_71 = (-10L);
    int32_t l_72 = 0xB10513B6L;
    uint16_t l_98 = 0x7DDAL;
lbl_87:
    p_11.f1 = (safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((((0L > g_5[1]) , (safe_unary_minus_func_int16_t_s(g_41))) | (safe_mul_func_int16_t_s_s((l_72 = (safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((((l_71 | 0x4B8798E3L) , g_57.f0) | p_11.f2), 13)) , l_71), 0xB7L))), l_71))), 0x685F082010857B26LL)), p_10.f0));
    for (p_10.f0 = (-18); (p_10.f0 >= 28); p_10.f0 = safe_add_func_uint32_t_u_u(p_10.f0, 9))
    { 
        int64_t l_82[1];
        int32_t l_83 = 0xF167E626L;
        int32_t l_94 = 4L;
        int32_t l_96 = 0x992D143BL;
        int i;
        for (i = 0; i < 1; i++)
            l_82[i] = (-1L);
        if (g_57.f0)
        { 
            int32_t l_80[2];
            int32_t l_86 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_80[i] = 0xAF4644DEL;
            for (p_11.f3 = 0; (p_11.f3 == (-19)); p_11.f3--)
            { 
                g_77 = g_41;
            }
            p_11.f1 = ((((safe_lshift_func_int16_t_s_s(((g_57.f0 &= (l_80[0] = p_11.f2)) == ((l_83 = (+l_82[0])) | (safe_rshift_func_uint8_t_u_s((g_41 >= (g_77 , l_86)), 5)))), 13)) < g_41) == g_5[1]) <= l_86);
        }
        else
        { 
            uint16_t l_88 = 65535UL;
            uint16_t l_93 = 65535UL;
            if (g_41)
                goto lbl_87;
            l_83 &= l_88;
            for (g_41 = 15; (g_41 > 17); g_41 = safe_add_func_uint64_t_u_u(g_41, 8))
            { 
                l_96 = (g_95[0] = ((l_83 = g_77) < (safe_lshift_func_int8_t_s_s(l_93, (((p_10.f0 || (((l_94 = (p_11.f2 ^ l_82[0])) >= g_41) == 0xB5L)) != p_11.f2) == p_11.f1)))));
            }
        }
        p_11.f1 |= l_71;
        for (l_94 = 1; (l_94 >= 0); l_94 -= 1)
        { 
            int64_t l_97 = 0x512995B858EE3BABLL;
            l_97 = p_11.f1;
        }
    }
    return l_98;
}



static union U5  func_13(uint32_t  p_14, struct S0  p_15, int32_t  p_16, uint16_t  p_17)
{ 
    int64_t l_50 = 0xDA8F9E1C21029358LL;
    int32_t l_53 = 7L;
    int32_t l_54 = (-1L);
    int32_t l_55[4] = {0xD5916FF7L,0xD5916FF7L,0xD5916FF7L,0xD5916FF7L};
    int32_t l_56[2];
    int i;
    for (i = 0; i < 2; i++)
        l_56[i] = 0xB89D53C4L;
    for (p_15.f2 = 0; (p_15.f2 <= 1); p_15.f2 += 1)
    { 
        int32_t l_27[2][2][5] = {{{4L,4L,4L,4L,4L},{7L,7L,7L,7L,7L}},{{4L,4L,4L,4L,4L},{7L,7L,7L,7L,7L}}};
        int i, j, k;
        l_27[1][0][4] |= (g_5[p_15.f2] < ((2UL | ((safe_sub_func_uint32_t_u_u(0x67C8FA1BL, p_14)) == g_5[0])) != p_16));
    }
    l_56[1] = ((((((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s((((!(((safe_add_func_int8_t_s_s(((((l_55[1] = (safe_div_func_int16_t_s_s(0xC50DL, (((safe_sub_func_int8_t_s_s((p_15.f3 = (p_17 ^ ((++p_15.f2) >= ((((l_54 = (((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(l_50, (l_53 = (safe_div_func_int32_t_s_s(g_5[1], 8UL))))), 0)) == 0xFC007DFDCBC3393ALL), p_15.f1)) == g_41) , 1UL)) | g_5[0]) == 0xB93B572060300339LL) && l_50)))), 0L)) == l_50) & (-5L))))) ^ g_5[1]) >= (-1L)) > 0x3CL), p_14)) & 0UL) == l_50)) == p_15.f1) && l_53), 0xD90DC6CEL)), 0x412D46FEDEA8F443LL)) <= l_50), g_5[0])) & p_16) ^ l_50) <= 0x72A6DD7547197E38LL) >= g_41) && 0x3FBDL);
    l_56[1] = (g_41 & p_15.f2);
    return g_57;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
