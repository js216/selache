// SPDX-License-Identifier: MIT
// cctest_csmith_fb050d55.c --- cctest case csmith_fb050d55 (csmith seed 4211412309)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8f5c7d98 */
/* @exp_ticks 0x3a95 */

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

// Options:   -s 4211412309 -o /tmp/csmith_gen_xq8mvpou/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   int16_t  f1;
   int32_t  f2;
   int32_t  f3;
};

union U1 {
   uint32_t  f0;
   int16_t  f1;
   int32_t  f2;
   int8_t  f3;
};


static uint64_t g_19 = 0UL;
static struct S0 g_23 = {0x5257L,0xE81DL,-6L,0x9CBC21B0L};
static int8_t g_32 = 0x6CL;
static int32_t g_40[4][2][2] = {{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}},{{1L,1L},{1L,1L}}};
static int16_t g_48[2][5] = {{5L,0xC733L,0L,0xC733L,5L},{5L,0xC733L,0L,0xC733L,5L}};
static int16_t g_84 = 3L;
static uint8_t g_113[1] = {0xECL};
static int32_t g_115 = (-6L);
static int64_t g_154 = 0x705B545B5AAB8F2BLL;
static int32_t g_179 = 0xEE219370L;
static int16_t g_192[5] = {0L,0L,0L,0L,0L};



static int8_t  func_1(void);
static struct S0  func_7(uint32_t  p_8, int32_t  p_9, int16_t  p_10, union U1  p_11, uint16_t  p_12);
static uint16_t  func_13(union U1  p_14, int32_t  p_15, struct S0  p_16);
static int32_t  func_24(int32_t  p_25, uint16_t  p_26, union U1  p_27, uint8_t  p_28);




static int8_t  func_1(void)
{ 
    uint32_t l_2 = 0x425A80E3L;
    union U1 l_22 = {0UL};
    int32_t l_187[1];
    int32_t l_188 = (-3L);
    int i;
    for (i = 0; i < 1; i++)
        l_187[i] = 0xB1452D19L;
    g_40[3][1][1] = (l_2 >= (l_22.f2 = (safe_sub_func_int16_t_s_s((((((((safe_mod_func_int64_t_s_s((func_7((func_13(((safe_mod_func_int32_t_s_s(g_19, (g_19 ^ ((safe_add_func_uint8_t_u_u(1UL, (-7L))) <= g_19)))) , l_22), l_22.f1, g_23) && 0x025FL), g_23.f2, l_22.f2, l_22, g_48[1][2]) , 0L), 0x0929077F640A0A01LL)) & g_19) , l_22.f2) | 0xB152E22B5A8EEEFALL) ^ l_22.f1) | l_22.f1) <= (-1L)), g_154))));
    g_115 |= (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((g_32 &= l_22.f1) == (safe_mul_func_uint8_t_u_u((((l_188 |= (l_187[0] |= l_22.f0)) , (0x5BL != 0x49L)) && (-1L)), 0x61L))), 0xB44B8A7EL)), l_22.f1));
    for (g_32 = 0; (g_32 != 4); g_32++)
    { 
        const uint64_t l_191 = 0UL;
        g_192[0] = l_191;
    }
    return l_2;
}



static struct S0  func_7(uint32_t  p_8, int32_t  p_9, int16_t  p_10, union U1  p_11, uint16_t  p_12)
{ 
    uint16_t l_55[1];
    uint8_t l_116 = 0UL;
    int32_t l_132 = (-1L);
    int32_t l_138 = 0x7D1579E7L;
    int32_t l_143 = 8L;
    int32_t l_145 = 0xA54D7137L;
    int32_t l_146 = 1L;
    int32_t l_147 = 0xEA80ACB1L;
    int32_t l_148 = 0x84EB6509L;
    int32_t l_156 = (-1L);
    int32_t l_157[3][5] = {{0xF1B771C4L,0x6462671FL,0x5B4CBD72L,0x07B9CB31L,0x5B4CBD72L},{0x5B4CBD72L,0x5B4CBD72L,0L,0x07B9CB31L,0xC1B0FF88L},{0x6462671FL,0xF1B771C4L,0xF1B771C4L,0x6462671FL,0xC1B0FF88L}};
    struct S0 l_163 = {9L,0xD496L,0x5D4AF878L,0xDF7A928BL};
    int i, j;
    for (i = 0; i < 1; i++)
        l_55[i] = 1UL;
lbl_169:
    for (p_9 = 17; (p_9 < (-20)); --p_9)
    { 
        uint32_t l_51 = 18446744073709551611UL;
        l_51 = p_11.f1;
    }
    for (p_11.f1 = 1; (p_11.f1 >= 0); p_11.f1 -= 1)
    { 
        struct S0 l_60 = {1L,1L,6L,0x528CFE7AL};
        for (p_9 = 1; (p_9 >= 0); p_9 -= 1)
        { 
            int32_t l_59 = 0x326E24E1L;
            int i, j;
            l_59 = (safe_sub_func_int32_t_s_s(g_48[p_9][(p_9 + 1)], ((safe_unary_minus_func_int8_t_s((((l_55[0] = 2UL) , (0x83C6DDDD895A5D72LL || (safe_mul_func_int8_t_s_s(((+p_11.f3) > 0xD49D5494L), 0x67L)))) , p_11.f1))) , p_10)));
            for (l_59 = 1; (l_59 >= 0); l_59 -= 1)
            { 
                return l_60;
            }
        }
        l_60.f3 = (((p_8 = (safe_add_func_int64_t_s_s(g_48[1][2], (((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(p_12, ((safe_lshift_func_uint16_t_u_s(l_60.f1, 0)) > (safe_add_func_int8_t_s_s((g_32 = (safe_add_func_uint32_t_u_u((((((g_23.f0 == p_11.f3) && p_8) , p_10) & l_60.f0) > g_23.f3), p_9))), 0x13L))))), p_9)) <= 5UL) > p_8), 8)) == l_55[0]) , p_11.f3)))) || (-6L)) <= (-1L));
        for (l_60.f0 = 1; (l_60.f0 >= 0); l_60.f0 -= 1)
        { 
            uint32_t l_75[3][5][1] = {{{0x2B3A2D95L},{0x2B3A2D95L},{1UL},{0x4CD53591L},{1UL}},{{0x2B3A2D95L},{0x2B3A2D95L},{1UL},{0x4CD53591L},{1UL}},{{0x2B3A2D95L},{0x2B3A2D95L},{1UL},{0x4CD53591L},{1UL}}};
            int32_t l_81[5] = {1L,1L,1L,1L,1L};
            struct S0 l_91 = {-1L,0L,0x748FAD17L,0L};
            struct S0 l_112 = {-8L,0x28F0L,1L,9L};
            int i, j, k;
            if (p_12)
            { 
                g_23.f3 = 0L;
                l_75[2][4][0]++;
                l_81[4] = (safe_lshift_func_uint8_t_u_s((!1L), 6));
            }
            else
            { 
                return g_23;
            }
            g_23.f3 = (safe_div_func_int64_t_s_s((p_8 != (p_12++)), (l_60.f3 &= ((safe_rshift_func_int16_t_s_u((p_10 = (g_48[l_60.f0][(l_60.f0 + 3)] |= ((0x6152693CL || 0x31CF78B7L) & (safe_div_func_uint32_t_u_u(g_32, 4294967295UL))))), 13)) | p_8))));
            for (g_23.f1 = 1; (g_23.f1 >= 0); g_23.f1 -= 1)
            { 
                int8_t l_92 = 2L;
                const int64_t l_114[2] = {(-1L),(-1L)};
                int i, j, k;
                l_91 = l_91;
                g_40[(g_23.f1 + 2)][l_60.f0][l_60.f0] = (l_92 , p_11.f3);
                l_60.f3 |= (safe_sub_func_uint32_t_u_u((l_91.f2 &= ((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((((g_115 = (safe_mod_func_int32_t_s_s(((safe_div_func_int16_t_s_s((~(safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_19, (g_48[1][3] == ((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((g_113[0] = (l_112 , ((0x790AL && 1L) != 0xDCB97209L))), 4)) <= l_60.f1) || g_113[0]), l_114[0])) , g_19)))), 12))), p_8)) > (-7L)), g_23.f2))) <= p_11.f3) ^ l_112.f2), 6)) | l_60.f2), p_8)) | l_116)), l_114[0]));
            }
        }
    }
    for (g_32 = (-18); (g_32 == 9); g_32++)
    { 
        const uint32_t l_128 = 0UL;
        int32_t l_130 = 0x3B512B1EL;
        int32_t l_131 = 0x9564AF7EL;
        int32_t l_133 = 0xBE5EA244L;
        int32_t l_134 = 0xCB6AF072L;
        int32_t l_137 = 0xFE76C900L;
        int32_t l_142 = 0x75BFFDC4L;
        int32_t l_149 = 9L;
        int32_t l_150 = (-1L);
        int32_t l_153[3][2] = {{0L,0L},{0L,0L},{0L,0L}};
        int8_t l_155 = (-7L);
        uint32_t l_176 = 0x65100A8EL;
        struct S0 l_180 = {0x48CFL,0L,0x3EA59E92L,9L};
        int i, j;
        if ((6UL & (~(((safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(g_40[3][1][1], ((safe_mul_func_int16_t_s_s(l_55[0], (((safe_rshift_func_int16_t_s_s((g_23.f0 = g_32), l_116)) < g_40[3][1][1]) ^ g_40[1][1][1]))) , l_128))), g_23.f3)) , g_113[0]) || l_55[0]))))
        { 
            int32_t l_129 = 0xE95938E4L;
            int32_t l_135 = 0x51B32B03L;
            int32_t l_136 = 0xDE262883L;
            int32_t l_139 = 0x0FC580C8L;
            int32_t l_140 = (-1L);
            int32_t l_141 = 0xF6879DC8L;
            int32_t l_144 = 0L;
            int32_t l_151 = 0xACE2E08AL;
            int32_t l_152[5];
            int32_t l_158 = 0xFE067558L;
            int32_t l_159 = (-4L);
            uint8_t l_160 = 0xCCL;
            uint8_t l_166 = 1UL;
            int i;
            for (i = 0; i < 5; i++)
                l_152[i] = 4L;
            l_160++;
            if (g_113[0])
            { 
                return l_163;
            }
            else
            { 
                int32_t l_164 = 0xA0F4BA2FL;
                int32_t l_165 = (-10L);
                g_23.f2 ^= p_12;
                l_166++;
            }
        }
        else
        { 
            uint32_t l_170[2][2][3] = {{{0x3FC95AA9L,0xF56AD3AFL,0x3FC95AA9L},{0x3FC95AA9L,0xF56AD3AFL,0x3FC95AA9L}},{{0x3FC95AA9L,0xF56AD3AFL,0x3FC95AA9L},{0x3FC95AA9L,0xF56AD3AFL,0x3FC95AA9L}}};
            int32_t l_171 = (-1L);
            int i, j, k;
            if (l_163.f0)
                goto lbl_169;
            g_115 = (l_171 ^= l_170[0][0][0]);
            if ((0x6D9CL | (g_179 = ((safe_mul_func_int8_t_s_s(((((((safe_rshift_func_int8_t_s_u(((l_170[0][0][0] , ((l_138 = l_176) && (safe_rshift_func_int8_t_s_u(l_176, g_23.f1)))) < g_23.f1), 4)) < g_48[0][0]) || l_132) | l_170[1][1][0]) <= l_171) ^ l_163.f0), l_128)) < g_23.f1))))
            { 
                g_23 = l_180;
            }
            else
            { 
                g_23 = g_23;
            }
        }
        if (l_55[0])
            break;
    }
    return l_163;
}



static uint16_t  func_13(union U1  p_14, int32_t  p_15, struct S0  p_16)
{ 
    int32_t l_31 = 0L;
    g_40[2][1][1] |= func_24((p_15 = p_14.f3), (l_31 > ((((g_32 &= g_23.f0) || (safe_add_func_int16_t_s_s(((((((safe_add_func_int16_t_s_s(((~g_23.f3) | l_31), p_16.f1)) && 0L) != l_31) | 0xE26E16511C25C539LL) < g_23.f2) && 9UL), l_31))) , (-1L)) < g_23.f2)), p_14, l_31);
    return l_31;
}



static int32_t  func_24(int32_t  p_25, uint16_t  p_26, union U1  p_27, uint8_t  p_28)
{ 
    int32_t l_38[4][2] = {{0x4BA4FDAFL,0x4BA4FDAFL},{0x4BA4FDAFL,0x4BA4FDAFL},{0x4BA4FDAFL,0x4BA4FDAFL},{0x4BA4FDAFL,0x4BA4FDAFL}};
    int32_t l_39 = (-6L);
    int32_t l_41 = 0x26845D48L;
    int32_t l_42 = 4L;
    int32_t l_43[4];
    int64_t l_44 = 1L;
    uint64_t l_45[5];
    int i, j;
    for (i = 0; i < 4; i++)
        l_43[i] = 0x2F747EABL;
    for (i = 0; i < 5; i++)
        l_45[i] = 1UL;
    --l_45[2];
    return g_23.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_23.f1, "g_23.f1", print_hash_value);
    transparent_crc(g_23.f2, "g_23.f2", print_hash_value);
    transparent_crc(g_23.f3, "g_23.f3", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_40[i][j][k], "g_40[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_48[i][j], "g_48[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_113[i], "g_113[i]", print_hash_value);

    }
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_192[i], "g_192[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
