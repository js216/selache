// SPDX-License-Identifier: MIT
// cctest_csmith_eb7f0ca6.c --- cctest case csmith_eb7f0ca6 (csmith seed 3950972070)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd8c90202 */
/* @exp_ticks 0x4ab3 */

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

// Options:   -s 3950972070 -o /tmp/csmith_gen_guzubggj/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint32_t  f0;
   int32_t  f1;
   int32_t  f2;
   uint16_t  f3;
};

union U1 {
   uint64_t  f0;
   int16_t  f1;
   const int32_t  f2;
   struct S0  f3;
};


static union U1 g_9 = {0x289A695768819570LL};
static union U1 *g_8 = &g_9;
static int32_t g_22 = (-1L);
static uint64_t g_23 = 8UL;
static union U1 ***g_49 = (void*)0;
static union U1 ****g_48 = &g_49;
static uint16_t g_50 = 0x232CL;
static uint32_t g_84 = 9UL;
static uint32_t g_90 = 0xE505CE50L;
static int32_t g_92[3] = {(-8L),(-8L),(-8L)};
static int32_t g_103 = (-10L);
static int64_t g_136 = 0xF4735756157937C9LL;
static int32_t **g_182 = (void*)0;
static uint32_t g_213 = 0x9EC09B07L;
static uint16_t g_234 = 0x4AD2L;
static uint64_t * const g_235 = (void*)0;
static uint64_t g_237 = 1UL;
static int64_t g_238 = 0x89D1E22A3397DFDCLL;
static union U1 *****g_256 = (void*)0;
static int8_t g_280 = 0x60L;
static const uint32_t g_349 = 0x3FCDE841L;
static uint16_t g_350 = 0xB276L;
static uint16_t g_363 = 0x802FL;
static uint32_t g_379 = 0x08C59193L;
static uint32_t *g_418[1] = {(void*)0};
static uint32_t **g_417 = &g_418[0];
static int64_t *g_420 = &g_136;
static int64_t **g_419[3][3] = {{&g_420,&g_420,&g_420},{&g_420,&g_420,&g_420},{&g_420,&g_420,&g_420}};
static int32_t g_425 = (-1L);
static int8_t g_502[5][7] = {{0xD3L,0xDBL,0xA2L,0x52L,0x21L,0x52L,0xA2L},{(-1L),(-1L),0x9AL,0L,0xA8L,0x50L,0xA2L},{0x49L,0x03L,0L,(-1L),0xA2L,0L,0L},{0xA8L,0x21L,0xD3L,0x21L,0xA8L,(-1L),0x49L},{(-10L),0x9AL,0xD3L,(-1L),0x21L,0xA8L,0x21L}};
static int8_t *g_501 = &g_502[2][2];
static uint8_t g_519 = 3UL;
static const int64_t g_592 = 0x6E46F5E9CE41EEEALL;
static struct S0 g_609[5] = {{0xF99CA202L,0L,0L,0x4172L},{0xF99CA202L,0L,0L,0x4172L},{0xF99CA202L,0L,0L,0x4172L},{0xF99CA202L,0L,0L,0x4172L},{0xF99CA202L,0L,0L,0x4172L}};
static uint32_t *g_621[6] = {&g_84,&g_84,&g_84,&g_84,&g_84,&g_84};
static uint32_t **g_620[7] = {&g_621[0],&g_621[0],&g_621[0],&g_621[0],&g_621[0],&g_621[0],&g_621[0]};
static int8_t **g_651 = &g_501;
static int8_t **g_660 = &g_501;
static int8_t ***g_659 = &g_660;
static int16_t g_684 = 0x8A0DL;
static int8_t g_702 = 0x01L;
static uint8_t g_716 = 0xD3L;
static int16_t *g_895 = (void*)0;
static uint16_t **g_1007 = (void*)0;
static const union U1 *g_1086 = &g_9;
static const union U1 **g_1085 = &g_1086;
static const union U1 ***g_1084[6][4][5] = {{{(void*)0,&g_1085,(void*)0,&g_1085,(void*)0},{&g_1085,&g_1085,&g_1085,(void*)0,(void*)0},{&g_1085,&g_1085,&g_1085,&g_1085,&g_1085},{&g_1085,&g_1085,&g_1085,&g_1085,(void*)0}},{{&g_1085,&g_1085,(void*)0,&g_1085,&g_1085},{&g_1085,&g_1085,&g_1085,&g_1085,&g_1085},{(void*)0,&g_1085,(void*)0,&g_1085,&g_1085},{(void*)0,(void*)0,&g_1085,&g_1085,&g_1085}},{{&g_1085,(void*)0,&g_1085,(void*)0,&g_1085},{&g_1085,&g_1085,&g_1085,&g_1085,&g_1085},{&g_1085,&g_1085,&g_1085,&g_1085,&g_1085},{&g_1085,&g_1085,&g_1085,&g_1085,&g_1085}},{{&g_1085,&g_1085,&g_1085,&g_1085,&g_1085},{&g_1085,&g_1085,(void*)0,&g_1085,&g_1085},{&g_1085,&g_1085,&g_1085,(void*)0,&g_1085},{(void*)0,(void*)0,(void*)0,&g_1085,&g_1085}},{{(void*)0,(void*)0,&g_1085,&g_1085,&g_1085},{(void*)0,(void*)0,&g_1085,&g_1085,(void*)0},{(void*)0,(void*)0,(void*)0,&g_1085,&g_1085},{&g_1085,&g_1085,(void*)0,(void*)0,(void*)0}},{{&g_1085,&g_1085,&g_1085,(void*)0,(void*)0},{&g_1085,&g_1085,(void*)0,&g_1085,&g_1085},{&g_1085,&g_1085,&g_1085,&g_1085,&g_1085},{&g_1085,&g_1085,&g_1085,&g_1085,&g_1085}}};
static uint8_t g_1105[1] = {250UL};
static int32_t *g_1148 = &g_92[2];
static int32_t **g_1147 = &g_1148;
static int64_t g_1170 = (-5L);
static int64_t ****g_1325 = (void*)0;
static struct S0 g_1508 = {0x3FFF9B53L,0xE68C3279L,-7L,65534UL};
static struct S0 *g_1507 = &g_1508;
static int32_t *g_1694 = &g_425;
static uint16_t *g_1739[7] = {&g_1508.f3,&g_1508.f3,&g_1508.f3,&g_1508.f3,&g_1508.f3,&g_1508.f3,&g_1508.f3};
static uint16_t g_1778 = 65526UL;
static int64_t g_1837 = 0x77DB9D809FDE11A2LL;
static int8_t g_1867 = 0L;
static uint16_t **g_1917 = (void*)0;
static int16_t ** const g_1937 = &g_895;
static int16_t ** const *g_1936[7][1][4] = {{{&g_1937,&g_1937,(void*)0,(void*)0}},{{&g_1937,&g_1937,&g_1937,(void*)0}},{{&g_1937,(void*)0,(void*)0,&g_1937}},{{&g_1937,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_1937,(void*)0,(void*)0}},{{&g_1937,&g_1937,(void*)0,(void*)0}},{{&g_1937,&g_1937,&g_1937,(void*)0}}};
static int16_t ** const **g_1935 = &g_1936[5][0][1];
static int16_t ** const ***g_1934[7][1] = {{&g_1935},{&g_1935},{&g_1935},{&g_1935},{&g_1935},{&g_1935},{&g_1935}};
static uint16_t g_2122 = 65535UL;
static int8_t g_2153[5] = {0x1EL,0x1EL,0x1EL,0x1EL,0x1EL};
static int64_t g_2209 = 0xFA605955084C7025LL;
static uint32_t g_2225 = 0xD9497BF0L;
static int16_t **g_2234 = &g_895;



static int32_t  func_1(void);
static union U1 * func_2(uint32_t  p_3, const int16_t  p_4, uint16_t  p_5);
static uint8_t  func_10(uint64_t  p_11);
static uint64_t  func_12(uint32_t  p_13, union U1 * p_14, const union U1 * const  p_15);
static int8_t  func_32(union U1 ** const * p_33, int32_t  p_34, int32_t * p_35, uint16_t  p_36, int64_t  p_37);
static int32_t * func_46(union U1 **** p_47);
static union U1  func_53(int8_t  p_54, int32_t  p_55);
static uint8_t  func_59(uint16_t  p_60, int32_t  p_61);




static int32_t  func_1(void)
{ 
    uint8_t l_16 = 0x5FL;
    union U1 *l_17 = &g_9;
    union U1 **l_18 = &l_17;
    const union U1 * const l_19 = &g_9;
    uint64_t *l_481 = (void*)0;
    uint64_t *l_482 = (void*)0;
    uint64_t *l_483 = (void*)0;
    uint64_t *l_484[5][5][3] = {{{&g_237,&g_237,&g_23},{&g_23,(void*)0,(void*)0},{(void*)0,&g_237,&g_23},{&g_237,&g_237,&g_23},{&g_237,&g_23,(void*)0}},{{&g_23,&g_237,&g_237},{&g_23,&g_23,&g_237},{(void*)0,&g_237,&g_23},{(void*)0,&g_237,&g_23},{&g_23,(void*)0,&g_237}},{{&g_23,(void*)0,&g_23},{&g_237,&g_237,&g_23},{&g_237,&g_237,&g_237},{(void*)0,(void*)0,&g_237},{&g_23,(void*)0,(void*)0}},{{(void*)0,&g_237,&g_23},{&g_237,&g_237,&g_23},{&g_237,&g_23,(void*)0},{&g_23,&g_237,&g_237},{&g_23,&g_23,&g_237}},{{(void*)0,&g_237,&g_23},{(void*)0,&g_237,&g_23},{&g_23,(void*)0,&g_237},{&g_23,(void*)0,&g_23},{&g_237,&g_237,&g_23}}};
    int32_t l_485 = 0xAFE2C6A5L;
    int8_t l_1683 = 5L;
    struct S0 l_1684 = {0xCF30BB63L,0xA5F8EB7EL,0xA874B784L,0x6D70L};
    int32_t l_1805 = 0L;
    int32_t l_1811 = 0x3F01DB0BL;
    int32_t l_1813[2][3][1];
    uint32_t **l_1819 = &g_621[0];
    int32_t *l_1822 = &l_485;
    int32_t *l_1823 = &l_1811;
    int32_t *l_1824 = (void*)0;
    int32_t *l_1825 = (void*)0;
    int32_t *l_1826 = &g_425;
    int32_t *l_1827 = (void*)0;
    int32_t *l_1828 = &g_92[0];
    int32_t *l_1829 = &l_1813[1][1][0];
    int32_t *l_1830 = &g_92[0];
    int32_t *l_1831 = (void*)0;
    int32_t *l_1832 = &g_92[0];
    int32_t *l_1833 = &l_1805;
    int32_t *l_1834 = &g_92[0];
    int32_t *l_1835 = &g_92[0];
    int32_t *l_1836[5][2] = {{&l_1813[1][2][0],(void*)0},{&l_1813[1][2][0],(void*)0},{&l_1813[1][2][0],(void*)0},{&l_1813[1][2][0],(void*)0},{&l_1813[1][2][0],(void*)0}};
    uint32_t l_1838 = 0x1D70B3E3L;
    uint16_t l_1845 = 1UL;
    uint32_t l_1860 = 0xEDA8C8F9L;
    int16_t l_1892 = 0x984CL;
    uint64_t l_1897 = 18446744073709551608UL;
    uint16_t **l_1913[6];
    int8_t l_1927 = 0L;
    int16_t **l_1933 = &g_895;
    int16_t ***l_1932 = &l_1933;
    int16_t ****l_1931[3][3];
    int16_t *****l_1930 = &l_1931[2][2];
    uint64_t l_1940 = 1UL;
    uint32_t l_1987 = 0x6F735079L;
    int8_t *l_2012 = &g_280;
    int8_t l_2027 = 6L;
    uint32_t l_2063 = 0xCA216BC1L;
    int32_t l_2095[4];
    int64_t l_2159 = 8L;
    int8_t l_2221 = 6L;
    uint16_t l_2222 = 0x1E39L;
    uint64_t l_2238 = 0x90F2019943BDF72BLL;
    union U1 ****l_2239 = &g_49;
    int8_t l_2260[5] = {0xC7L,0xC7L,0xC7L,0xC7L,0xC7L};
    int8_t ***l_2277[3];
    int16_t l_2279 = 0x1ECBL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_1813[i][j][k] = 0x88622454L;
        }
    }
    for (i = 0; i < 6; i++)
        l_1913[i] = &g_1739[3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_1931[i][j] = &l_1932;
    }
    for (i = 0; i < 4; i++)
        l_2095[i] = 0x216FC33FL;
    for (i = 0; i < 3; i++)
        l_2277[i] = &g_660;
    return l_2279;
}



static union U1 * func_2(uint32_t  p_3, const int16_t  p_4, uint16_t  p_5)
{ 
    int8_t *l_499 = &g_280;
    int8_t **l_500[6];
    int32_t l_503 = 0x14153483L;
    int64_t l_504 = (-9L);
    uint16_t *l_505 = (void*)0;
    uint16_t *l_506 = &g_350;
    int32_t l_520[6];
    uint32_t *l_529 = &g_84;
    uint32_t ** const l_528[1][4][1] = {{{&l_529},{&l_529},{&l_529},{&l_529}}};
    struct S0 l_557 = {0x29BAFC21L,-2L,0L,0x234DL};
    union U1 *l_584 = &g_9;
    int32_t l_587[3];
    uint32_t l_622[7] = {0xB8233A34L,0xB8233A34L,0xB8233A34L,0xB8233A34L,0xB8233A34L,0xB8233A34L,0xB8233A34L};
    const int8_t *l_658 = (void*)0;
    const int8_t **l_657[3][7] = {{(void*)0,&l_658,&l_658,(void*)0,&l_658,&l_658,(void*)0},{&l_658,&l_658,&l_658,&l_658,&l_658,&l_658,&l_658},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    const int8_t ***l_656 = &l_657[2][3];
    int64_t **l_711 = &g_420;
    int8_t l_726 = 0L;
    int32_t l_751 = (-9L);
    int32_t l_822 = 0L;
    int32_t l_825 = 0x5B5D467AL;
    int32_t l_826 = 1L;
    int32_t l_827 = 1L;
    int32_t l_828 = 0xF940BBBDL;
    int32_t l_831 = 0xBC70CDB3L;
    int32_t l_832[6][1][3] = {{{0x7015E183L,0xCE11357AL,5L}},{{0x7015E183L,0x7015E183L,0xCE11357AL}},{{0L,0xCE11357AL,0xCE11357AL}},{{0xCE11357AL,1L,5L}},{{0L,1L,0L}},{{0x7015E183L,0xCE11357AL,5L}}};
    uint8_t l_849 = 0x2CL;
    union U1 * const *l_864[3][3][3] = {{{(void*)0,(void*)0,(void*)0},{&g_8,&g_8,&g_8},{(void*)0,(void*)0,(void*)0}},{{&g_8,&g_8,&g_8},{(void*)0,(void*)0,(void*)0},{&g_8,&g_8,&g_8}},{{(void*)0,(void*)0,(void*)0},{&g_8,&g_8,&g_8},{(void*)0,(void*)0,(void*)0}}};
    union U1 * const **l_863 = &l_864[0][0][0];
    union U1 * const *** const l_862 = &l_863;
    int32_t l_866[6];
    uint32_t l_867 = 0x6C78E9BBL;
    uint32_t l_883 = 0x040A089BL;
    int32_t l_919 = 0xFEC03F83L;
    int16_t l_931 = 2L;
    int32_t *l_1011 = &l_826;
    uint32_t l_1037 = 0xE440955EL;
    uint16_t l_1048 = 0x79EDL;
    uint32_t l_1071 = 3UL;
    int32_t l_1103 = (-9L);
    union U1 ****l_1145 = &g_49;
    uint64_t l_1151[5] = {0x5BDE5F28F983C264LL,0x5BDE5F28F983C264LL,0x5BDE5F28F983C264LL,0x5BDE5F28F983C264LL,0x5BDE5F28F983C264LL};
    int32_t * const *l_1184 = (void*)0;
    int32_t * const **l_1183 = &l_1184;
    int16_t **l_1196 = (void*)0;
    int16_t ***l_1197 = &l_1196;
    int32_t l_1198 = 0xA79BE5E0L;
    const int32_t *l_1262 = &l_832[1][0][0];
    const int32_t **l_1261 = &l_1262;
    uint8_t l_1301[7] = {249UL,249UL,249UL,249UL,249UL,249UL,249UL};
    union U1 *l_1405 = (void*)0;
    uint32_t **l_1452 = &g_418[0];
    uint64_t l_1458 = 0xB131DD8746A7D50ALL;
    int32_t l_1520 = 0L;
    int32_t l_1526 = 0L;
    uint8_t l_1537 = 255UL;
    uint64_t l_1651 = 0xBDA9911BA9A99AF9LL;
    int32_t l_1669 = 0xDE984499L;
    uint16_t l_1671 = 65535UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_500[i] = &l_499;
    for (i = 0; i < 6; i++)
        l_520[i] = 0x8F30104FL;
    for (i = 0; i < 3; i++)
        l_587[i] = 1L;
    for (i = 0; i < 6; i++)
        l_866[i] = 0x2ED080BBL;
    return l_584;
}



static uint8_t  func_10(uint64_t  p_11)
{ 
    uint64_t l_459 = 0x80A275DAFDDA69ACLL;
    struct S0 l_466 = {18446744073709551615UL,1L,0x6CAB4AA6L,9UL};
    for (g_234 = 0; (g_234 > 8); g_234++)
    { 
        union U1 ****l_458 = (void*)0;
        int32_t l_460 = 0L;
        int32_t l_474 = 0x16D29E58L;
        union U1 ** const l_480[3] = {&g_8,&g_8,&g_8};
        union U1 ** const *l_479[5][4] = {{&l_480[1],&l_480[1],&l_480[1],&l_480[1]},{&l_480[1],&l_480[1],&l_480[1],&l_480[1]},{&l_480[1],&l_480[1],&l_480[1],&l_480[1]},{&l_480[1],&l_480[1],&l_480[1],&l_480[1]},{&l_480[1],&l_480[1],&l_480[1],&l_480[1]}};
        union U1 ** const **l_478 = &l_479[4][0];
        int i, j;
        for (g_9.f3.f2 = 11; (g_9.f3.f2 <= 0); g_9.f3.f2 = safe_sub_func_int64_t_s_s(g_9.f3.f2, 9))
        { 
            int32_t *l_448 = &g_425;
            uint32_t *l_450 = &g_84;
            uint32_t **l_449 = &l_450;
            union U1 * const *l_477 = (void*)0;
            union U1 * const **l_476 = &l_477;
            union U1 * const ** const *l_475 = &l_476;
            (*l_448) = p_11;
            l_460 = (((((*l_449) = &g_84) == (void*)0) , (+(safe_sub_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((p_11 || (*l_448)), (safe_sub_func_uint64_t_u_u((p_11 == (l_458 != l_458)), l_459)))) != g_379), 0L)))) <= p_11);
            (*l_448) |= g_234;
            (*l_448) ^= (((safe_sub_func_int16_t_s_s((!(safe_mul_func_uint16_t_u_u(((((l_466 , (g_213 & (p_11 == (((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((l_460 |= (((safe_sub_func_uint16_t_u_u(0UL, p_11)) , (safe_sub_func_uint16_t_u_u(0xC708L, 0x00F0L))) == g_349)))), p_11)) , g_213) | p_11)))) && 0UL) != l_466.f3) , p_11), l_474))), g_350)) , l_475) != l_478);
        }
    }
    return p_11;
}



static uint64_t  func_12(uint32_t  p_13, union U1 * p_14, const union U1 * const  p_15)
{ 
    int32_t *l_20 = (void*)0;
    int32_t *l_21 = &g_22;
    union U1 * const l_30 = (void*)0;
    union U1 * const *l_29[2][5][4] = {{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}},{{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30}}};
    union U1 * const **l_28 = &l_29[1][3][3];
    union U1 *l_41 = &g_9;
    union U1 *l_42 = &g_9;
    union U1 *l_43[7][7][2] = {{{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{(void*)0,&g_9},{&g_9,(void*)0},{&g_9,&g_9}},{{&g_9,(void*)0},{&g_9,&g_9},{(void*)0,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9}},{{&g_9,(void*)0},{&g_9,&g_9},{(void*)0,&g_9},{&g_9,&g_9},{(void*)0,&g_9},{&g_9,(void*)0},{&g_9,&g_9}},{{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{(void*)0,&g_9},{&g_9,(void*)0},{&g_9,&g_9}},{{&g_9,(void*)0},{&g_9,&g_9},{(void*)0,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9}},{{&g_9,(void*)0},{&g_9,&g_9},{(void*)0,&g_9},{&g_9,&g_9},{(void*)0,&g_9},{&g_9,(void*)0},{&g_9,&g_9}},{{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{(void*)0,&g_9},{&g_9,(void*)0},{&g_9,&g_9}}};
    union U1 ** const l_40[6] = {&l_41,&l_41,&l_42,&l_41,&l_41,&l_42};
    union U1 ** const *l_39 = &l_40[0];
    union U1 ** const **l_38 = &l_39;
    union U1 ** const *l_45[7];
    union U1 ** const **l_44 = &l_45[1];
    int16_t *l_423 = &g_9.f1;
    int32_t *l_424 = &g_425;
    int32_t *l_426 = (void*)0;
    int32_t l_427 = 0x9CAE8350L;
    int32_t *l_428 = &l_427;
    int32_t *l_429 = &g_92[2];
    int32_t *l_430 = (void*)0;
    int32_t *l_431 = &g_22;
    int32_t *l_432 = &g_22;
    int32_t *l_433 = &g_425;
    int32_t l_434[4][3] = {{0x627E1318L,0x627E1318L,0xEFF45BC2L},{0x28902A10L,0x28902A10L,0x36BF669DL},{0x627E1318L,0x627E1318L,0xEFF45BC2L},{0x28902A10L,0x28902A10L,0x36BF669DL}};
    int32_t *l_435 = &g_22;
    int32_t *l_436 = &g_22;
    int32_t *l_437 = &g_22;
    int32_t *l_438[4][7] = {{(void*)0,(void*)0,&g_92[0],(void*)0,&l_427,(void*)0,&g_92[0]},{&g_22,&g_22,&g_22,&l_427,(void*)0,&g_22,(void*)0},{(void*)0,(void*)0,&g_22,&g_22,(void*)0,(void*)0,&l_427},{&g_92[2],&g_22,&g_92[0],&l_427,(void*)0,&g_92[2],(void*)0}};
    int64_t l_439 = 1L;
    int16_t l_440 = 4L;
    uint16_t l_441 = 0xD473L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_45[i] = &l_40[0];
    g_23++;
    (*l_424) ^= ((*l_21) ^ (0xF050L > ((*l_423) = (safe_sub_func_uint64_t_u_u((((*l_28) = &p_14) != &g_8), (!func_32(((*l_44) = ((*l_38) = (void*)0)), g_9.f0, func_46(g_48), p_13, p_13)))))));
    (*l_424) = 0L;
    ++l_441;
    return (*l_433);
}



static int8_t  func_32(union U1 ** const * p_33, int32_t  p_34, int32_t * p_35, uint16_t  p_36, int64_t  p_37)
{ 
    uint8_t l_138 = 0xBFL;
    int32_t l_148 = 0L;
    int32_t l_150 = 0x7201BE58L;
    int32_t l_151 = 0xF85C49E2L;
    int16_t l_154[1];
    struct S0 l_159 = {0xBB6E06CCL,5L,5L,0x1B8EL};
    int64_t l_195[5][6][3] = {{{0x0B9176789782C05ELL,0L,0L},{(-2L),(-5L),1L},{0x0B9176789782C05ELL,1L,0L},{8L,(-5L),0xE5C071142A211DE2LL},{0x0B9176789782C05ELL,0L,0L},{(-2L),(-5L),1L}},{{0x0B9176789782C05ELL,1L,0L},{8L,(-5L),0xE5C071142A211DE2LL},{0x0B9176789782C05ELL,0L,0L},{(-2L),(-5L),1L},{0x0B9176789782C05ELL,1L,0L},{8L,(-5L),0xE5C071142A211DE2LL}},{{0x0B9176789782C05ELL,0L,0L},{(-2L),(-5L),1L},{0x0B9176789782C05ELL,1L,0L},{8L,(-5L),0xE5C071142A211DE2LL},{0x0B9176789782C05ELL,0L,0L},{(-2L),(-5L),1L}},{{0x0B9176789782C05ELL,1L,0L},{8L,(-5L),0xE5C071142A211DE2LL},{0x0B9176789782C05ELL,0L,0L},{(-2L),(-5L),1L},{0x0B9176789782C05ELL,1L,0L},{8L,(-5L),0xE5C071142A211DE2LL}},{{0x0B9176789782C05ELL,0L,0L},{(-2L),(-5L),1L},{0x0B9176789782C05ELL,1L,0L},{8L,(-5L),0xE5C071142A211DE2LL},{0x0B9176789782C05ELL,0L,0L},{(-2L),(-5L),1L}}};
    int16_t l_197 = 0x4AC5L;
    int32_t l_198 = 1L;
    int32_t l_201 = 0x16B469B1L;
    int32_t l_202 = 0xF3559A3BL;
    int32_t l_203 = (-10L);
    int32_t l_206[2];
    int32_t *l_239[4] = {&l_151,&l_151,&l_151,&l_151};
    uint64_t *l_278 = &g_23;
    int64_t l_331 = 0L;
    union U1 ****l_335 = &g_49;
    uint8_t l_399 = 0x21L;
    int64_t *l_400[7] = {&l_195[4][0][0],(void*)0,&l_195[4][0][0],&l_195[4][0][0],(void*)0,&l_195[4][0][0],&l_195[4][0][0]};
    int32_t l_413 = (-1L);
    uint64_t l_414 = 0UL;
    int64_t **l_422 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_154[i] = 0xEA09L;
    for (i = 0; i < 2; i++)
        l_206[i] = 0xEE4B11BBL;
    for (g_9.f1 = 0; (g_9.f1 > (-3)); g_9.f1 = safe_sub_func_uint16_t_u_u(g_9.f1, 5))
    { 
        int64_t *l_135[4];
        uint8_t l_137 = 8UL;
        int32_t *l_139 = &g_92[2];
        uint32_t *l_146 = (void*)0;
        uint32_t *l_147[3];
        int32_t l_149[1];
        uint8_t *l_165 = &l_138;
        const struct S0 l_250 = {7UL,0xBB542E95L,0x1BED84E9L,3UL};
        union U1 ****l_281 = &g_49;
        int8_t l_311[4] = {4L,4L,4L,4L};
        int i;
        for (i = 0; i < 4; i++)
            l_135[i] = &g_136;
        for (i = 0; i < 3; i++)
            l_147[i] = &g_90;
        for (i = 0; i < 1; i++)
            l_149[i] = 4L;
        (*l_139) = (((func_53(g_23, ((*l_139) = ((g_136 ^= (l_137 = 0xBD185158CC5C9A55LL)) | l_138))) , (p_37 , ((safe_rshift_func_uint8_t_u_u(p_36, 2)) , (l_148 = (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((++g_90) <= l_154[0]) & (*l_139)), 0)), p_37)))))) != p_36) ^ 0xB425L);
        l_151 ^= (safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((p_34 = g_9.f1) == (g_90 = ((((*l_165) |= (((p_37 , l_159) , (safe_rshift_func_uint16_t_u_u(((((safe_sub_func_int8_t_s_s(0x3DL, g_136)) >= (g_92[0] , (~((((l_159 , g_103) , &g_92[0]) != (void*)0) & 0xD455L)))) , (*l_139)) , p_37), l_159.f0))) , 253UL)) != g_90) , p_36))), g_84)) || 0xAF396E7CL), (*l_139)));
        for (l_150 = 0; (l_150 == (-30)); l_150 = safe_sub_func_int32_t_s_s(l_150, 2))
        { 
            uint8_t l_177 = 0xA5L;
            int32_t **l_183 = &l_139;
            int32_t l_194[5] = {0xC18CBA62L,0xC18CBA62L,0xC18CBA62L,0xC18CBA62L,0xC18CBA62L};
            uint32_t l_224 = 0x1FC371ACL;
            uint64_t *l_236 = &g_237;
            int16_t *l_271 = &l_154[0];
            int8_t *l_279 = &g_280;
            int64_t *l_310 = &l_195[3][2][0];
            int i;
        }
        for (l_137 = 0; (l_137 > 7); ++l_137)
        { 
            union U1 **** const *l_330 = (void*)0;
            int32_t l_332[5] = {0x3915692EL,0x3915692EL,0x3915692EL,0x3915692EL,0x3915692EL};
            int32_t l_333[7] = {0x906698C8L,0x906698C8L,0x906698C8L,0x906698C8L,0x906698C8L,0x906698C8L,0x906698C8L};
            uint16_t *l_334 = &l_159.f3;
            int8_t *l_336 = &l_311[2];
            int16_t l_337[6][6][2] = {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}};
            int32_t **l_380 = &l_239[3];
            int i, j, k;
        }
    }
    if ((+(0xB4D3F151L != (safe_rshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((((void*)0 == &p_37) >= ((!(((g_238 = (safe_lshift_func_uint8_t_u_u(8UL, (safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(p_37, g_379)), ((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u(g_136, p_37)) , 0x6C4D17B3A5BA182FLL) || l_399), 12)) || 0x9A83L))) > p_34), g_90))))) != p_36) != p_34)) >= 0x009594C67C49C3C8LL)), g_379)) , g_234), 4)))))
    { 
        uint32_t l_401 = 0x95398D7DL;
        return l_401;
    }
    else
    { 
        uint32_t *l_402 = &g_213;
        uint64_t l_403 = 3UL;
        uint64_t l_404 = 0UL;
        int32_t **l_405 = &l_239[0];
        int32_t l_406 = 0xEE532E65L;
        int32_t l_407 = (-7L);
        int64_t l_408 = (-8L);
        int32_t l_409 = 0x59F22A46L;
        int32_t l_410 = 0L;
        int32_t l_411[2];
        int32_t l_412 = 0x3F651F1FL;
        int64_t ***l_421[5];
        int i;
        for (i = 0; i < 2; i++)
            l_411[i] = 0xF2B106C3L;
        for (i = 0; i < 5; i++)
            l_421[i] = &g_419[2][2];
        l_404 |= ((-1L) > ((p_37 < g_234) | (((*l_402) = g_280) <= ((l_403 = 0xFCL) ^ (p_37 == 0xFA248BC0D39F2BADLL)))));
        (*l_405) = l_402;
        --l_414;
        g_419[2][2] = ((((g_417 == (void*)0) < ((l_422 = g_419[2][2]) != ((*g_8) , &l_400[6]))) == 2L) , &l_400[6]);
    }
    return g_280;
}



static int32_t * func_46(union U1 **** p_47)
{ 
    int32_t l_56 = (-10L);
    int16_t l_68[2][7][4] = {{{1L,0xDF60L,0xDF60L,1L},{(-10L),1L,0x97EEL,0x257DL},{0x879AL,0x470EL,5L,0xDF60L},{0x97EEL,(-1L),1L,0xDF60L},{2L,0x470EL,0x0538L,0x257DL},{0x52C2L,1L,0xE40EL,1L},{(-5L),0xDF60L,(-5L),(-10L)}},{{0x5D0CL,0x97EEL,0xD232L,0x879AL},{1L,5L,0x879AL,0x97EEL},{0x0538L,1L,0x879AL,2L},{1L,0x0538L,0xD232L,0x52C2L},{0x5D0CL,0xE40EL,(-5L),(-5L)},{(-5L),(-5L),0xE40EL,0x5D0CL},{0x52C2L,0xD232L,0x0538L,1L}}};
    int32_t *l_109[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_110 = 1L;
    struct S0 l_125 = {0x7FA3ACC1L,0xBF76208AL,0L,0x730CL};
    uint64_t l_126 = 0UL;
    int8_t *l_127 = &l_110;
    uint64_t l_128 = 0xA73A985D356E4D92LL;
    int16_t *l_129 = (void*)0;
    int16_t *l_130 = &l_68[0][3][0];
    uint8_t l_131 = 0UL;
    int i, j, k;
    l_110 &= ((0x39L & (g_50--)) <= (3UL || ((func_53(l_56, (safe_add_func_int16_t_s_s(((g_22 , func_59((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((255UL < (safe_add_func_int8_t_s_s(((((&g_8 == (void*)0) >= l_68[1][1][2]) & l_68[0][4][0]) || l_56), (-5L)))) & l_68[1][1][2]), l_68[1][1][1])), 2)), g_22)) <= g_22), 0xC5FAL))) , 0x8605L) > g_9.f1)));
    if (((((*l_130) = (((safe_add_func_int8_t_s_s((+g_22), 0xAEL)) > ((g_103 < ((+((*l_127) = (((((safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((g_103 & (((safe_sub_func_uint16_t_u_u(g_23, (safe_lshift_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u((g_23 > (l_125 , 0L)), 3L)) | 253UL) & g_23) <= 6L), l_126)))) != 0x9A0F2D96163BBE5BLL) , g_9.f1)), g_23)), g_22)) == (-10L)) < g_9.f1) , g_103) <= g_92[0]))) == l_128)) , 7UL)) != 255UL)) < l_131) && (-1L)))
    { 
        return &g_92[0];
    }
    else
    { 
        int32_t **l_132[2];
        int i;
        for (i = 0; i < 2; i++)
            l_132[i] = &l_109[6];
        l_109[2] = &g_103;
    }
    return &g_22;
}



static union U1  func_53(int8_t  p_54, int32_t  p_55)
{ 
    int32_t *l_101[1][4];
    int16_t l_102 = 0x8C03L;
    int64_t l_104 = 2L;
    uint32_t l_105 = 0xE2A38A8CL;
    union U1 l_108 = {0x277048F12A9C28C3LL};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_101[i][j] = &g_92[2];
    }
    l_105++;
    return l_108;
}



static uint8_t  func_59(uint16_t  p_60, int32_t  p_61)
{ 
    int32_t l_69 = 1L;
    int32_t *l_70 = &l_69;
    union U1 **l_79 = &g_8;
    union U1 ** const *l_78 = &l_79;
    union U1 ** const **l_77 = &l_78;
    union U1 ** const ***l_80 = &l_77;
    uint32_t *l_83 = &g_84;
    uint32_t *l_89[4][3] = {{&g_90,&g_90,(void*)0},{&g_90,&g_90,(void*)0},{&g_90,&g_90,(void*)0},{&g_90,&g_90,(void*)0}};
    int32_t *l_91 = &g_92[0];
    int32_t *l_99 = &g_92[0];
    int i, j;
    (*l_70) = l_69;
    (*l_91) &= ((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((((safe_add_func_int16_t_s_s(((((*l_80) = l_77) != ((((((safe_mul_func_uint16_t_u_u(((--(*l_83)) , (safe_lshift_func_uint16_t_u_s((0xB0L & 9L), 8))), (g_9.f1 > (g_90 &= (*l_70))))) == g_23) | g_9.f1) | g_9.f2) >= p_61) , &l_78)) != p_61), 0xD26FL)) || p_61) && 18446744073709551615UL) != g_9.f0) < 4UL) , (*l_70)), g_9.f0)), g_23)) > g_23);
    for (g_84 = 0; (g_84 <= 25); g_84 = safe_add_func_uint8_t_u_u(g_84, 7))
    { 
        int32_t *l_95[3][7];
        uint16_t l_96 = 0x4798L;
        int32_t **l_100 = &l_70;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 7; j++)
                l_95[i][j] = (void*)0;
        }
        l_96--;
        if (p_61)
            break;
        (*l_100) = l_99;
        (*l_99) &= p_61;
    }
    return g_84;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_92[i], "g_92[i]", print_hash_value);

    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_502[i][j], "g_502[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_609[i].f0, "g_609[i].f0", print_hash_value);
        transparent_crc(g_609[i].f1, "g_609[i].f1", print_hash_value);
        transparent_crc(g_609[i].f2, "g_609[i].f2", print_hash_value);
        transparent_crc(g_609[i].f3, "g_609[i].f3", print_hash_value);

    }
    transparent_crc(g_684, "g_684", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1105[i], "g_1105[i]", print_hash_value);

    }
    transparent_crc(g_1170, "g_1170", print_hash_value);
    transparent_crc(g_1508.f0, "g_1508.f0", print_hash_value);
    transparent_crc(g_1508.f1, "g_1508.f1", print_hash_value);
    transparent_crc(g_1508.f2, "g_1508.f2", print_hash_value);
    transparent_crc(g_1508.f3, "g_1508.f3", print_hash_value);
    transparent_crc(g_1778, "g_1778", print_hash_value);
    transparent_crc(g_1837, "g_1837", print_hash_value);
    transparent_crc(g_1867, "g_1867", print_hash_value);
    transparent_crc(g_2122, "g_2122", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2153[i], "g_2153[i]", print_hash_value);

    }
    transparent_crc(g_2209, "g_2209", print_hash_value);
    transparent_crc(g_2225, "g_2225", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
