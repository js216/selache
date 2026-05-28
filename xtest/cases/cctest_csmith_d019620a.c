// SPDX-License-Identifier: MIT
// cctest_csmith_d019620a.c --- cctest case csmith_d019620a (csmith seed 3491324426)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x23169f55 */
/* @exp_ticks 0x3c68 */

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

// Options:   -s 3491324426 -o /tmp/csmith_gen_r0qww6q2/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
   int32_t  f1;
   const uint32_t  f2;
   int32_t  f3;
   const int8_t  f4;
   int32_t  f5;
};

union U1 {
   int32_t  f0;
   int64_t  f1;
   const int32_t  f2;
};


static int32_t g_2 = (-1L);
static int16_t g_40 = 0L;
static int64_t g_42 = 0xF213ED423CB8E004LL;
static int32_t g_44[1][5] = {{0L,0L,0L,0L,0L}};
static uint32_t g_45 = 0x5DB0FF84L;
static uint32_t g_48 = 0x47A332A5L;
static int32_t g_67 = 0L;
static int64_t g_69[3][2] = {{8L,8L},{8L,8L},{8L,8L}};
static int32_t g_70[3][2] = {{0L,0L},{0L,0L},{0L,0L}};
static int32_t g_71 = (-1L);
static int32_t g_72 = (-4L);
static uint8_t g_73 = 1UL;
static struct S0 g_81 = {-4L,0x3C22C9C8L,1UL,-1L,-1L,0x698822BDL};
static union U1 g_189 = {0xC477D8F5L};



static const int64_t  func_1(void);
static const int32_t  func_11(struct S0  p_12, union U1  p_13, uint32_t  p_14, uint8_t  p_15);
static struct S0  func_16(const uint16_t  p_17);
static int8_t  func_21(uint8_t  p_22, uint32_t  p_23, int32_t  p_24, uint64_t  p_25, uint64_t  p_26);




static const int64_t  func_1(void)
{ 
    const int8_t l_18 = 0xEDL;
    int32_t l_230 = 0x6DAFEFF6L;
    for (g_2 = (-30); (g_2 <= 26); g_2 = safe_add_func_uint8_t_u_u(g_2, 5))
    { 
        uint16_t l_6 = 0x79E6L;
        int32_t l_231[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_231[i][j] = (-1L);
        }
        l_231[0][0] = (~((((--l_6) | (safe_rshift_func_uint16_t_u_u((4294967295UL ^ func_11(func_16(l_18), g_189, g_42, g_81.f0)), 6))) , 0UL) <= l_230));
    }
    return g_42;
}



static const int32_t  func_11(struct S0  p_12, union U1  p_13, uint32_t  p_14, uint8_t  p_15)
{ 
    int32_t l_192[1];
    int32_t l_193 = 0xCA5C7507L;
    int64_t l_202 = 0x98BDAB2CB753E4B6LL;
    int i;
    for (i = 0; i < 1; i++)
        l_192[i] = 1L;
lbl_220:
    l_193 &= (g_189.f0 = (safe_lshift_func_uint16_t_u_u(l_192[0], 8)));
    for (p_14 = 0; (p_14 != 45); p_14 = safe_add_func_int16_t_s_s(p_14, 5))
    { 
        int16_t l_203 = (-7L);
        uint32_t l_206[1];
        int32_t l_218 = 0L;
        uint16_t l_229 = 0x9CE4L;
        int i;
        for (i = 0; i < 1; i++)
            l_206[i] = 2UL;
        if ((safe_div_func_uint64_t_u_u(((g_81.f2 >= (safe_rshift_func_uint8_t_u_u(p_12.f2, (g_73 = 255UL)))) >= (l_203 |= ((safe_add_func_uint16_t_u_u((((4294967295UL & (-1L)) , g_71) , l_202), 1L)) >= l_193))), p_12.f1)))
        { 
            uint64_t l_207 = 0x6279D215A4DA50BCLL;
            for (g_81.f1 = (-21); (g_81.f1 <= (-4)); g_81.f1++)
            { 
                l_206[0] = (g_72 = (p_13.f0 = p_12.f3));
            }
            for (g_189.f1 = 0; (g_189.f1 <= 0); g_189.f1 += 1)
            { 
                int i, j;
                return g_44[g_189.f1][(g_189.f1 + 4)];
            }
            l_193 = l_207;
        }
        else
        { 
            int64_t l_216[5][3] = {{0x6C10DF51878783DALL,0x0BCDD2221DAE3C54LL,0xBBE3BBB778705FF0LL},{0L,0xD3AA2E64E466CC9BLL,0x7E4DA9278B1CBCA9LL},{0x6C10DF51878783DALL,0x6C10DF51878783DALL,0x7E4DA9278B1CBCA9LL},{0xD3AA2E64E466CC9BLL,0L,0xBBE3BBB778705FF0LL},{0x0BCDD2221DAE3C54LL,0x6C10DF51878783DALL,0x0BCDD2221DAE3C54LL}};
            int i, j;
            for (g_73 = (-22); (g_73 <= 17); g_73++)
            { 
                int16_t l_217 = 0L;
                uint64_t l_219 = 0xD287EBBFD0F9B15ELL;
                g_72 = ((g_44[0][4] > p_12.f5) | (p_12.f0 = (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((l_218 = (((l_216[3][0] , l_217) ^ g_81.f4) && 0x132CC53BE719ACE8LL)), l_219)) < g_72), 5UL)), l_206[0])) ^ 65535UL) & 0xBBL)));
                if (g_81.f2)
                    goto lbl_220;
            }
        }
        l_218 ^= (((g_42 || (safe_mul_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(g_69[2][1], g_189.f0)) & 7L), l_229)) , 0xDA2B58F65C06C30ALL) && p_14), p_12.f4)) , g_48) , (-1L)), 0x86L))) == g_69[1][1]) ^ 0xE7F7A6C36F7E9452LL);
    }
    return p_12.f5;
}



static struct S0  func_16(const uint16_t  p_17)
{ 
    const union U1 l_37 = {1L};
    int32_t l_38 = 0x8E10A3BDL;
    int32_t l_39 = (-1L);
    int32_t l_41 = 8L;
    int32_t l_43[2];
    int i;
    for (i = 0; i < 2; i++)
        l_43[i] = 0L;
    l_43[0] = (safe_lshift_func_int8_t_s_s(func_21((((l_41 |= (g_48 ^= ((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((l_38 = (((((((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((l_39 ^= (safe_rshift_func_uint16_t_u_u((l_37 , (g_45--)), (g_44[0][4] & 3L)))), p_17)), g_42)) , 0x62C80F3BL) , g_44[0][3]) > (-3L)) < p_17) && 1UL) > 0xC996L)), 65528UL)), 0xB0402AD9L)) >= g_44[0][1]))) | p_17) & g_44[0][3]), p_17, p_17, g_40, g_44[0][1]), p_17));
    return g_81;
}



static int8_t  func_21(uint8_t  p_22, uint32_t  p_23, int32_t  p_24, uint64_t  p_25, uint64_t  p_26)
{ 
    uint8_t l_51 = 8UL;
    const struct S0 l_52[2][4] = {{{-4L,0xFD71021FL,18446744073709551613UL,0L,0x4FL,0x128B293CL},{-4L,0xFD71021FL,18446744073709551613UL,0L,0x4FL,0x128B293CL},{-4L,0xFD71021FL,18446744073709551613UL,0L,0x4FL,0x128B293CL},{-4L,0xFD71021FL,18446744073709551613UL,0L,0x4FL,0x128B293CL}},{{-4L,0xFD71021FL,18446744073709551613UL,0L,0x4FL,0x128B293CL},{-4L,0xFD71021FL,18446744073709551613UL,0L,0x4FL,0x128B293CL},{-4L,0xFD71021FL,18446744073709551613UL,0L,0x4FL,0x128B293CL},{-4L,0xFD71021FL,18446744073709551613UL,0L,0x4FL,0x128B293CL}}};
    int32_t l_62 = 0xAF205A4AL;
    int32_t l_66 = (-10L);
    int64_t l_108 = 0x53B50BCEF8620699LL;
    int16_t l_109 = 0L;
    union U1 l_137[3][1][2] = {{{{0x2B59225FL},{0x2B59225FL}}},{{{0x2B59225FL},{0x2B59225FL}}},{{{0x2B59225FL},{0x2B59225FL}}}};
    int i, j, k;
    if ((safe_mod_func_int8_t_s_s(l_51, (l_52[0][1] , g_42))))
    { 
        int8_t l_56 = 0x7CL;
        int32_t l_80[1];
        uint32_t l_110 = 4294967295UL;
        const int32_t l_117 = 0L;
        int i;
        for (i = 0; i < 1; i++)
            l_80[i] = (-1L);
        for (g_45 = 0; (g_45 < 45); g_45++)
        { 
            const uint32_t l_65[3][2] = {{0x84295AD7L,0x84295AD7L},{0x84295AD7L,0x84295AD7L},{0x84295AD7L,0x84295AD7L}};
            int32_t l_68 = 0xB75CAB9BL;
            int i, j;
            l_66 &= (((+(l_56 = g_44[0][0])) , ((safe_mul_func_int8_t_s_s(g_48, (((+((safe_add_func_uint32_t_u_u(((l_62 &= g_40) , ((((((safe_div_func_int16_t_s_s(p_25, 0x2468L)) < l_52[0][1].f5) & p_23) && g_48) <= g_48) < 0xC6149AF40839CA31LL)), l_52[0][1].f5)) <= g_44[0][3])) >= 255UL) , g_44[0][0]))) < l_65[1][0])) != g_45);
            --g_73;
            for (g_67 = 0; (g_67 != (-14)); --g_67)
            { 
                return p_26;
            }
        }
        if ((safe_mod_func_int32_t_s_s((l_80[0] = 3L), (g_81 , ((safe_lshift_func_int8_t_s_u((((safe_div_func_uint64_t_u_u(g_45, l_56)) , l_52[0][1].f0) <= l_56), l_56)) & g_70[0][1])))))
        { 
            for (p_25 = 12; (p_25 == 19); p_25 = safe_add_func_uint16_t_u_u(p_25, 3))
            { 
                int32_t l_88 = 0L;
                l_88 = (l_80[0] = p_24);
                if (g_81.f4)
                    break;
            }
        }
        else
        { 
            struct S0 l_93 = {0x11L,0xBA6500C2L,0x79274D83L,8L,-1L,8L};
            uint64_t l_96 = 0xC50B10B9BD427A37LL;
            l_96 &= (1L & (safe_div_func_uint16_t_u_u((l_80[0] ^= (safe_mod_func_int64_t_s_s(l_66, (l_93.f5 = (l_93 , (safe_lshift_func_uint16_t_u_u((g_42 < 0x4C770407C5320B35LL), 3))))))), p_23)));
            for (l_51 = 0; (l_51 > 48); l_51 = safe_add_func_uint16_t_u_u(l_51, 9))
            { 
                uint64_t l_101[2][4][5] = {{{0xC62CF0DA5B006640LL,9UL,0xDE9EF314FBCE5547LL,9UL,0xC62CF0DA5B006640LL},{0x4A66755D88D3DE18LL,0x8A2850EDC4196DCFLL,0UL,0x831F773013A2A43FLL,0x8A2850EDC4196DCFLL},{0xC62CF0DA5B006640LL,0UL,0UL,0xC62CF0DA5B006640LL,0x831F773013A2A43FLL},{9UL,0xC62CF0DA5B006640LL,0xDE9EF314FBCE5547LL,0x8A2850EDC4196DCFLL,0x8A2850EDC4196DCFLL}},{{0x4A66755D88D3DE18LL,0xC62CF0DA5B006640LL,0x4A66755D88D3DE18LL,0x831F773013A2A43FLL,0xC62CF0DA5B006640LL},{0x8A2850EDC4196DCFLL,0UL,0x831F773013A2A43FLL,0x8A2850EDC4196DCFLL,0x831F773013A2A43FLL},{0x8A2850EDC4196DCFLL,0x8A2850EDC4196DCFLL,0xDE9EF314FBCE5547LL,0xC62CF0DA5B006640LL,9UL},{0x4A66755D88D3DE18LL,9UL,0x831F773013A2A43FLL,0x831F773013A2A43FLL,9UL}}};
                int32_t l_102[4][1][1] = {{{0L}},{{0L}},{{0L}},{{0L}}};
                int i, j, k;
                l_93.f5 = 8L;
                l_102[2][0][0] = ((((((g_70[1][1] == p_24) <= (p_24 != (l_80[0] = l_101[0][1][4]))) ^ 0x014BL) >= p_25) >= p_22) & 5UL);
                g_72 = ((safe_mod_func_int8_t_s_s((((((0x3E2A50B6L || (l_109 ^= ((g_44[0][4] | (((!(safe_rshift_func_int16_t_s_s(0xC05FL, g_81.f1))) != (-9L)) && g_70[1][1])) <= l_108))) > g_81.f5) | l_110) == 0x757DL) == 1UL), 0x16L)) | g_70[1][1]);
            }
            for (p_24 = (-26); (p_24 <= (-13)); ++p_24)
            { 
                l_80[0] ^= 1L;
            }
        }
        l_62 = ((l_52[0][1].f3 | l_56) , ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((l_117 < (g_40 = (safe_sub_func_uint32_t_u_u((!(safe_mul_func_uint16_t_u_u(8UL, l_117))), g_70[1][1])))), 0x61AB63E3L)) , p_26), l_52[0][1].f3)) != l_52[0][1].f1));
    }
    else
    { 
        int8_t l_127 = (-1L);
        uint64_t l_134 = 18446744073709551607UL;
        g_67 = (((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_127, (safe_div_func_uint32_t_u_u(((g_69[2][0] != (g_81.f2 > 65535UL)) , p_26), 0x84452C2EL)))), l_127)) ^ g_81.f0) > 0xC3ECL);
        l_134 = ((safe_mul_func_uint16_t_u_u(g_71, (g_40 = (((p_23 == (safe_mul_func_uint8_t_u_u((p_23 , 0x3DL), 0x7FL))) != 0xC2FEL) || l_127)))) | 0x2B2265A2DF7CCAC8LL);
    }
    if (g_81.f5)
    { 
        uint32_t l_140 = 18446744073709551615UL;
        int32_t l_179[3][5] = {{0x5433B4ECL,0x5433B4ECL,0x5433B4ECL,0x5433B4ECL,0x5433B4ECL},{0x30CE8C50L,(-9L),0x30CE8C50L,(-9L),0x30CE8C50L},{0x5433B4ECL,0x5433B4ECL,0x5433B4ECL,0x5433B4ECL,0x5433B4ECL}};
        int i, j;
        if ((((g_81 , ((safe_sub_func_uint8_t_u_u(((g_71 , l_137[0][0][1]) , g_70[0][0]), 4L)) >= g_40)) , 0x63L) , p_22))
        { 
            for (p_24 = 0; (p_24 <= (-15)); p_24--)
            { 
                const int16_t l_159 = (-1L);
                const int32_t l_160[3] = {1L,1L,1L};
                int i;
                l_140 = g_69[2][0];
                l_137[0][0][1].f0 &= (safe_sub_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u(((safe_mul_func_uint16_t_u_u((((safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((l_52[0][1].f5 && (((1UL | (((((((p_23--) <= p_26) < (p_25 == g_45)) , 0xE2C827C01AD3E3C3LL) , g_40) , 0x39211FA3L) != 0xD98B40E0L)) != l_159) && 9UL)), p_22)), g_44[0][4])) && g_81.f4) > 0x68L), g_81.f4)) && l_160[1]))) & 0x2158B1AF397C00CBLL), (-1L))))) >= g_81.f1), g_81.f2)), l_160[2])) == (-1L)) == p_24), g_69[1][1]));
                if (l_62)
                    break;
            }
            for (l_62 = 26; (l_62 <= (-14)); l_62 = safe_sub_func_int32_t_s_s(l_62, 9))
            { 
                int64_t l_163[1];
                int32_t l_164 = 0L;
                int i;
                for (i = 0; i < 1; i++)
                    l_163[i] = 0x4AC5FBAF3FA6EFE3LL;
                l_163[0] = p_24;
                l_164 = p_23;
            }
        }
        else
        { 
            g_81.f5 = ((safe_div_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(g_81.f3, 0x28L)) < ((safe_div_func_uint8_t_u_u((p_22 = ((safe_lshift_func_int8_t_s_s((p_26 & l_140), g_69[1][1])) & p_26)), 0x0FL)) ^ 0x9366L)), p_24)) <= p_25);
            for (p_22 = 0; (p_22 <= 1); p_22 += 1)
            { 
                return g_70[1][1];
            }
        }
        for (p_22 = 0; (p_22 >= 6); p_22 = safe_add_func_uint32_t_u_u(p_22, 6))
        { 
            int64_t l_178 = (-6L);
            l_179[2][1] = ((g_40 = (((!(l_140 | (safe_lshift_func_int8_t_s_u(0x17L, 3)))) & p_26) >= 0xEEL)) & l_178);
            if (l_178)
                continue;
            l_179[2][1] |= 0x48CAB240L;
        }
    }
    else
    { 
        uint32_t l_182[4][4][3] = {{{0x0E9A89EFL,0xD8C58851L,0x0E9A89EFL},{0x4D58820EL,0UL,4294967295UL},{4294967288UL,0x879A0F3CL,4294967289UL},{4294967291UL,4294967290UL,1UL}},{{1UL,1UL,4294967295UL},{4294967291UL,0x4D58820EL,4294967290UL},{4294967288UL,4294967295UL,0x599F55FBL},{0x4D58820EL,1UL,1UL}},{{0x0E9A89EFL,4294967288UL,0x599F55FBL},{4294967295UL,0xA3500CD5L,4294967290UL},{4294967289UL,0x3445193BL,4294967295UL},{1UL,0UL,1UL}},{{4294967295UL,0x3445193BL,4294967289UL},{4294967290UL,0xA3500CD5L,4294967295UL},{0x599F55FBL,4294967288UL,0x0E9A89EFL},{1UL,1UL,0x4D58820EL}}};
        int i, j, k;
        l_62 &= (((g_69[1][0] & ((safe_mul_func_uint8_t_u_u(((p_23 |= ((((((l_182[2][0][0] , (((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(0x1CE538C8CD2030A4LL, 0x5ADC8AFE7F47FA05LL)), 2)), g_44[0][3])) == 0x5884F1EBL) >= 4294967287UL)) < g_72) || g_81.f5) , p_26) ^ 1UL) , g_40)) <= g_71), l_108)) , g_81.f2)) || l_137[0][0][1].f2) >= l_182[3][1][2]);
    }
    l_66 = (-9L);
    return p_23;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_44[i][j], "g_44[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_69[i][j], "g_69[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_70[i][j], "g_70[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
    transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
    transparent_crc(g_81.f3, "g_81.f3", print_hash_value);
    transparent_crc(g_81.f4, "g_81.f4", print_hash_value);
    transparent_crc(g_81.f5, "g_81.f5", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
