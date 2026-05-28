// SPDX-License-Identifier: MIT
// cctest_csmith_f72545a0.c --- cctest case csmith_f72545a0 (csmith seed 4146415008)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x894bcd09 */
/* @exp_ticks 0x499f */

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

// Options:   -s 4146415008 -o /tmp/csmith_gen_y0i7xsyb/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   const uint32_t  f1;
   int32_t  f2;
};

struct S1 {
   uint64_t  f0;
};

struct S2 {
   const int16_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   int16_t  f3;
};

union U3 {
   int16_t  f0;
};


static int8_t g_6 = 0x07L;
static int64_t g_7 = (-1L);
static int16_t g_8[2][2] = {{9L,9L},{9L,9L}};
static int16_t g_9[5][2][3] = {{{0x7A12L,(-10L),0x7A12L},{7L,0xE4A9L,0L}},{{0x7335L,0xE4A9L,(-5L)},{2L,(-10L),0xC109L}},{{1L,2L,2L},{2L,(-9L),0x100CL}},{{0x7335L,(-1L),0x100CL},{7L,0x100CL,2L}},{{0x7A12L,(-5L),0xC109L},{0x100CL,0x100CL,(-5L)}}};
static int32_t g_10 = 0x3C67EE39L;
static int64_t g_12 = 0x13D0BB94D0F4F230LL;
static int64_t g_13 = 0xFF839E071A05132DLL;
static uint8_t g_17 = 0UL;
static uint64_t g_20 = 18446744073709551606UL;
static const struct S1 g_34 = {1UL};
static int16_t g_52[3] = {(-9L),(-9L),(-9L)};
static uint8_t g_70[3][5] = {{0xAFL,0xAFL,0xAFL,0xAFL,0xAFL},{0xAFL,0xAFL,0xAFL,0xAFL,0xAFL},{0xAFL,0xAFL,0xAFL,0xAFL,0xAFL}};
static uint8_t g_71[4] = {255UL,255UL,255UL,255UL};
static uint16_t g_112 = 0x43FCL;
static struct S1 g_121 = {0x5E832032B9FEB662LL};
static int64_t g_122 = 0x50B285FA89317E4FLL;
static struct S0 g_138 = {1UL,0UL,0x91DEB0A8L};
static int16_t g_143[2] = {0L,0L};
static uint32_t g_146 = 18446744073709551610UL;
static int32_t g_161[2][5] = {{0xA001A1B5L,6L,0xA001A1B5L,0xC420A7EEL,0xC420A7EEL},{0xA001A1B5L,6L,0xA001A1B5L,0xC420A7EEL,0xC420A7EEL}};



static struct S0  func_1(void);
static int32_t  func_2(uint32_t  p_3, uint32_t  p_4, int32_t  p_5);
static uint8_t  func_23(struct S2  p_24, const int8_t  p_25, struct S1  p_26);
static struct S2  func_27(uint8_t  p_28, int16_t  p_29, uint32_t  p_30, int16_t  p_31, const struct S1  p_32);




static struct S0  func_1(void)
{ 
    int16_t l_11 = 0x3F60L;
    int32_t l_14 = 0x9A130DFDL;
    int32_t l_15[2];
    int64_t l_16 = 0xA814B11F3813BF58LL;
    union U3 l_33 = {-9L};
    struct S1 l_74 = {0xAF4455642E063A29LL};
    uint8_t l_135 = 0xA5L;
    uint16_t l_142 = 3UL;
    uint8_t l_162[4];
    int i;
    for (i = 0; i < 2; i++)
        l_15[i] = 0x4CA77904L;
    for (i = 0; i < 4; i++)
        l_162[i] = 0x79L;
    if (func_2((g_20 = ((g_17--) , 0UL)), l_16, (safe_mul_func_uint8_t_u_u(func_23(func_27(l_15[0], (l_33 , 0x5BF8L), g_9[0][0][0], l_16, g_34), l_33.f0, l_74), 0x65L))))
    { 
        int16_t l_114 = 0x27A2L;
        int32_t l_119 = 2L;
        int32_t l_120[3][4][3];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 3; k++)
                    l_120[i][j][k] = 0xE60EB54AL;
            }
        }
        for (l_74.f0 = 0; (l_74.f0 <= 2); l_74.f0 += 1)
        { 
            struct S1 l_124 = {0x0FF389711EE9290BLL};
            l_114 |= ((0xBDDF9043A1FAE61DLL || (0L & ((g_112 = (0x14D0L || (g_9[0][0][0] || g_8[0][0]))) & g_17))) == 0x813BB0F311A8DCBCLL);
            for (g_112 = 0; (g_112 <= 2); g_112 += 1)
            { 
                int i, j;
                l_120[0][2][2] = (l_119 = (g_70[l_74.f0][l_74.f0] < (safe_rshift_func_int8_t_s_s((((l_15[1] |= g_112) > g_9[1][1][2]) , (safe_rshift_func_int8_t_s_s(g_12, 2))), 5))));
                g_121 = l_74;
            }
            if (l_33.f0)
                continue;
            for (g_13 = 1; (g_13 >= 0); g_13 -= 1)
            { 
                struct S1 l_123 = {0UL};
                g_122 = g_52[1];
                l_123 = g_34;
                l_124 = l_124;
            }
        }
        if ((((safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s(((((safe_lshift_func_uint8_t_u_s((l_135 = (safe_mul_func_uint16_t_u_u((l_74.f0 && (g_6 = l_74.f0)), l_120[2][0][2]))), 1)) != (g_121.f0 = (g_8[0][0] >= 0x35580C9BFB87D1E3LL))) < 18446744073709551615UL) <= 0UL), l_120[0][2][2])), g_9[4][1][0])) > g_112) , g_9[3][0][0]))
        { 
            int8_t l_144 = (-1L);
            for (g_20 = 0; (g_20 < 21); g_20++)
            { 
                g_121 = g_34;
                return g_138;
            }
            for (l_14 = 0; (l_14 < 26); ++l_14)
            { 
                uint64_t l_141 = 0UL;
                int32_t l_145 = (-1L);
                if (l_141)
                    break;
                l_142 = l_141;
                ++g_146;
            }
        }
        else
        { 
            g_138.f2 = (safe_add_func_int8_t_s_s(((0x79L || (safe_mod_func_uint32_t_u_u(l_120[0][1][1], 0xE7EF8C87L))) ^ 1UL), l_120[0][2][2]));
        }
        if (l_119)
        { 
            uint64_t l_153 = 18446744073709551615UL;
            l_153 = g_70[2][0];
        }
        else
        { 
            int32_t l_154 = 0x5DBB92B3L;
            l_154 = 1L;
            if (l_114)
                goto lbl_155;
lbl_155:
            l_74 = l_74;
            return g_138;
        }
    }
    else
    { 
        int32_t l_160 = 0x84D6A5DCL;
        l_14 &= (g_121 , (((safe_mul_func_int8_t_s_s(0xE9L, (((safe_rshift_func_int16_t_s_s((((g_143[1] = 0xECF3L) == ((0xBFL | g_146) <= 0xD0L)) > l_160), g_112)) >= 0x41FC7E89L) <= 8L))) , 0x1EAA7743L) >= 0x06ED31E0L));
        g_121 = l_74;
    }
    ++l_162[3];
    g_121 = g_34;
    return g_138;
}



static int32_t  func_2(uint32_t  p_3, uint32_t  p_4, int32_t  p_5)
{ 
    uint32_t l_113[5][1][3] = {{{0xEEF7B85BL,0xEEF7B85BL,0xEEF7B85BL}},{{0x256DA865L,0x256DA865L,0x256DA865L}},{{0xEEF7B85BL,0xEEF7B85BL,0xEEF7B85BL}},{{0x256DA865L,0x256DA865L,0x256DA865L}},{{0xEEF7B85BL,0xEEF7B85BL,0xEEF7B85BL}}};
    int i, j, k;
    g_112 &= 0x63631664L;
    return l_113[3][0][1];
}



static uint8_t  func_23(struct S2  p_24, const int8_t  p_25, struct S1  p_26)
{ 
    int64_t l_79 = 0x777BDFF1065C771CLL;
    uint32_t l_90[2][2][4] = {{{0xA6CE2C69L,0xA6CE2C69L,0xA6CE2C69L,0xA6CE2C69L},{0xA6CE2C69L,0xA6CE2C69L,0xA6CE2C69L,0xA6CE2C69L}},{{0xA6CE2C69L,0xA6CE2C69L,0xA6CE2C69L,0xA6CE2C69L},{0xA6CE2C69L,0xA6CE2C69L,0xA6CE2C69L,0xA6CE2C69L}}};
    const uint32_t l_91 = 1UL;
    int32_t l_92 = 0x4F77C9A8L;
    int32_t l_93 = 0x62BD54EFL;
    int i, j, k;
    l_93 = (!(safe_div_func_int64_t_s_s((l_92 = (g_8[0][0] && ((((~l_79) & (safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((((((safe_lshift_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((g_52[0] != (0UL ^ 0x2DC9L)), l_90[1][0][1])), p_24.f1)) == g_9[0][0][0]) ^ p_24.f2), 13)) ^ p_24.f1) && p_24.f1) < l_91) ^ g_9[0][0][0]), p_25)) == p_25), g_70[1][3]))) , p_24.f3) ^ g_8[1][1]))), g_52[1])));
    if ((((+l_79) && (safe_lshift_func_uint8_t_u_u(g_8[0][0], 3))) ^ (safe_rshift_func_uint8_t_u_u((p_24 , (safe_sub_func_int8_t_s_s(g_71[2], l_79))), g_34.f0))))
    { 
        uint16_t l_111[4][3];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
                l_111[i][j] = 1UL;
        }
        l_111[1][0] = ((-1L) & (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(1UL, (safe_sub_func_int16_t_s_s(0xB072L, (safe_sub_func_int64_t_s_s(((l_93 = (safe_mul_func_uint16_t_u_u(g_8[0][0], p_24.f3))) & p_24.f0), p_24.f1)))))), 1)));
    }
    else
    { 
        l_92 = g_70[2][1];
    }
    return g_52[0];
}



static struct S2  func_27(uint8_t  p_28, int16_t  p_29, uint32_t  p_30, int16_t  p_31, const struct S1  p_32)
{ 
    uint8_t l_35 = 0x01L;
    uint16_t l_49 = 8UL;
    int32_t l_50 = 0x6A8E7E64L;
    int32_t l_51 = 0x1C2AA0BDL;
    int16_t l_56 = 0L;
    uint8_t l_72 = 0xD5L;
    struct S2 l_73 = {0L,0x5D263D1F0774A768LL,0x41A018BFL,0x1E45L};
    g_52[1] = ((l_35 | ((((l_35 | (((safe_add_func_int16_t_s_s((l_51 = (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((g_7 = ((!(((safe_add_func_int16_t_s_s((p_29 |= ((g_34 , (safe_sub_func_int8_t_s_s((l_50 = (safe_sub_func_uint32_t_u_u((((((0xD5762CC6L && 0xCA67B110L) && p_30) , l_35) || g_6) & l_49), p_31))), (-1L)))) != g_8[1][0])), g_9[0][0][0])) || g_6) || 1UL)) < l_35)) & l_35), g_12)) ^ g_34.f0), p_28))), g_9[0][1][1])) | g_9[1][0][0]) <= p_32.f0)) >= l_49) < l_49) ^ 0x8B24CEC8L)) >= g_9[0][0][0]);
    l_50 = (((((g_9[0][0][0] &= (((safe_unary_minus_func_uint32_t_u(((safe_div_func_int64_t_s_s(0xF29ADBE56F6324B7LL, l_56)) | l_56))) && (safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(((!6L) , p_31), 10)), l_35))) , g_13)) == 1L) <= (-1L)) && p_28) <= g_12);
    l_72 |= (+((safe_add_func_uint32_t_u_u(l_49, (g_71[2] = (g_70[1][3] = (((safe_mul_func_uint8_t_u_u(((!g_52[1]) , ((safe_add_func_int32_t_s_s(((l_50 == (l_35 & 0UL)) && g_6), p_29)) & 0UL)), 6L)) >= p_30) || 248UL))))) && 0x1225765C99C2354CLL));
    return l_73;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_70[i][j], "g_70[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_71[i], "g_71[i]", print_hash_value);

    }
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_138.f1, "g_138.f1", print_hash_value);
    transparent_crc(g_138.f2, "g_138.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_161[i][j], "g_161[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
