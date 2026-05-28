// SPDX-License-Identifier: MIT
// cctest_csmith_8b0f368e.c --- cctest case csmith_8b0f368e (csmith seed 2333030030)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x37eb36b0 */
/* @exp_ticks 0x9d26 */

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

// Options:   -s 2333030030 -o /tmp/csmith_gen_jrgbeuzo/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint64_t  f0;
   const int16_t  f1;
   uint32_t  f2;
   const uint32_t  f3;
   int16_t  f4;
   int8_t  f5;
   const int8_t  f6;
   uint32_t  f7;
};

union U1 {
   uint32_t  f0;
};

union U2 {
   int8_t * f0;
   int16_t  f1;
};

union U3 {
   struct S0  f0;
   uint32_t  f1;
};

union U4 {
   uint8_t  f0;
   int8_t  f1;
   uint64_t  f2;
   int8_t  f3;
};


static uint64_t g_2 = 1UL;
static int8_t g_17 = 0L;
static int8_t *g_22 = &g_17;
static int8_t **g_21[6] = {&g_22,&g_22,&g_22,&g_22,&g_22,&g_22};
static union U2 g_56 = {0};
static int32_t g_59 = (-5L);
static int32_t g_67 = 6L;
static int32_t g_70[4][2] = {{(-9L),(-9L)},{(-9L),(-9L)},{(-9L),(-9L)},{(-9L),(-9L)}};
static int32_t g_71 = 0x9F09F7ADL;
static uint64_t g_73 = 0x4E934167AD2503B3LL;
static struct S0 g_85 = {1UL,0x2DE0L,18446744073709551615UL,0UL,0xCFC8L,0xC0L,-2L,0UL};
static uint8_t g_103 = 248UL;
static int64_t g_110 = (-3L);
static uint16_t g_112 = 0x04A8L;
static uint8_t g_137 = 253UL;
static const int32_t g_172 = 0x1755C12CL;
static int8_t g_187 = 0xA9L;
static int64_t g_188 = 0x9115ADDF4B60E2EDLL;
static uint8_t g_190 = 247UL;
static union U1 g_199 = {18446744073709551615UL};
static int8_t g_277 = 0L;
static uint32_t g_295 = 0x70419DD8L;
static int32_t g_308 = (-3L);
static uint32_t g_309[6] = {0UL,1UL,1UL,0UL,1UL,1UL};
static union U3 g_312[3] = {{{0x99B82E749505C1A4LL,0x16DDL,0UL,3UL,-10L,0xB7L,-4L,18446744073709551606UL}},{{0x99B82E749505C1A4LL,0x16DDL,0UL,3UL,-10L,0xB7L,-4L,18446744073709551606UL}},{{0x99B82E749505C1A4LL,0x16DDL,0UL,3UL,-10L,0xB7L,-4L,18446744073709551606UL}}};
static int32_t *g_325 = (void*)0;
static union U4 g_328[7][3] = {{{252UL},{255UL},{252UL}},{{0UL},{250UL},{8UL}},{{0x67L},{0x67L},{0x4CL}},{{0x70L},{250UL},{250UL}},{{0x4CL},{255UL},{254UL}},{{0x70L},{0x81L},{0x70L}},{{0x67L},{0x4CL},{254UL}}};
static const int32_t g_341 = 0x0FFC98CEL;
static const int32_t *g_342 = (void*)0;
static union U1 *g_364 = &g_199;
static union U1 **g_363[1][5][7] = {{{&g_364,&g_364,(void*)0,&g_364,(void*)0,&g_364,(void*)0},{&g_364,&g_364,&g_364,(void*)0,(void*)0,&g_364,(void*)0},{&g_364,&g_364,&g_364,&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364,&g_364,(void*)0,&g_364},{&g_364,&g_364,(void*)0,&g_364,&g_364,&g_364,(void*)0}}};
static uint32_t g_421 = 0x5BDCAAD3L;
static uint32_t g_422[4][3][1] = {{{9UL},{9UL},{3UL}},{{9UL},{9UL},{3UL}},{{9UL},{9UL},{3UL}},{{9UL},{9UL},{3UL}}};
static uint32_t g_516 = 0xD24DE93AL;
static uint32_t *g_525 = &g_422[1][0][0];
static uint32_t **g_524 = &g_525;
static uint64_t g_531 = 0x3EA9D1F0378D528ELL;
static union U3 g_536 = {{3UL,-4L,0x9E6DFDBEL,1UL,0L,0L,0L,0xBD1B4413L}};
static union U3 *g_535 = &g_536;
static uint8_t g_547 = 247UL;
static int8_t g_574 = 0x4FL;
static int32_t g_575 = 0x1AF0DFCBL;
static int32_t **g_583 = &g_325;
static int32_t ***g_582[5] = {&g_583,&g_583,&g_583,&g_583,&g_583};
static uint32_t *g_626 = &g_422[1][0][0];
static int64_t g_660 = 0x371472A1047E7917LL;
static struct S0 g_679 = {0x6B98F73E61968127LL,-10L,0xBE59E43AL,5UL,0x7F1BL,-7L,3L,18446744073709551611UL};
static uint32_t g_711 = 0x0718DB7BL;
static int32_t g_765[7][6][5] = {{{(-1L),0xB567B907L,0xF1AA55AAL,0xF1AA55AAL,0xB567B907L},{0L,0x95B91095L,(-10L),(-1L),6L},{0x10C1DA2FL,(-9L),0x10C1DA2FL,0xF1AA55AAL,(-8L)},{0x4B7F7EA7L,0x989146FEL,6L,0x989146FEL,0x4B7F7EA7L},{0x10C1DA2FL,(-1L),(-9L),0xB567B907L,(-9L)},{0L,0L,6L,0xF633FD2AL,(-5L)}},{{(-1L),0x10C1DA2FL,0x10C1DA2FL,(-1L),(-9L)},{(-9L),0xF633FD2AL,(-10L),0x1EB54E6EL,0x4B7F7EA7L},{(-9L),0x10C1DA2FL,0xF1AA55AAL,(-8L),(-8L)},{7L,0L,7L,0x1EB54E6EL,6L},{0xB567B907L,(-1L),(-8L),(-1L),0xB567B907L},{7L,0x989146FEL,0L,0xF633FD2AL,0L}},{{(-9L),(-9L),(-8L),0xB567B907L,0xFB685B43L},{(-9L),0x95B91095L,7L,0x989146FEL,0L},{(-1L),0xB567B907L,0xF1AA55AAL,0xF1AA55AAL,0xB567B907L},{0L,0x95B91095L,(-10L),(-1L),6L},{0x10C1DA2FL,(-9L),0x10C1DA2FL,0xF1AA55AAL,(-8L)},{0x4B7F7EA7L,0x989146FEL,6L,0x989146FEL,0x4B7F7EA7L}},{{0x10C1DA2FL,(-1L),(-9L),0xB567B907L,(-9L)},{0L,0L,6L,0xF633FD2AL,(-5L)},{(-1L),0x10C1DA2FL,0x10C1DA2FL,(-1L),(-9L)},{(-9L),0xF633FD2AL,(-10L),0x1EB54E6EL,0x4B7F7EA7L},{(-9L),0x10C1DA2FL,0xF1AA55AAL,(-8L),(-8L)},{7L,0L,7L,0x1EB54E6EL,6L}},{{0xB567B907L,(-1L),(-8L),(-1L),0xB567B907L},{7L,0x989146FEL,0L,0xF633FD2AL,0L},{(-9L),(-9L),(-8L),0xB567B907L,0xFB685B43L},{(-9L),0x95B91095L,7L,0x989146FEL,0L},{(-1L),0xF1AA55AAL,(-8L),(-8L),0xF1AA55AAL},{(-5L),0xF633FD2AL,6L,0L,0L}},{{0xB567B907L,0xFB685B43L,0xB567B907L,(-8L),(-9L)},{(-10L),0x95B91095L,0L,0x95B91095L,(-10L)},{0xB567B907L,0x10C1DA2FL,0xFB685B43L,0xF1AA55AAL,0xFB685B43L},{(-5L),0x697539DCL,0L,0x1EB54E6EL,(-9L)},{0x10C1DA2FL,0xB567B907L,0xB567B907L,0x10C1DA2FL,0xFB685B43L},{7L,0x1EB54E6EL,6L,(-1L),(-10L)}},{{0xFB685B43L,0xB567B907L,(-8L),(-9L),(-9L)},{0x4B7F7EA7L,0x697539DCL,0x4B7F7EA7L,(-1L),0L},{0xF1AA55AAL,0x10C1DA2FL,(-9L),0x10C1DA2FL,0xF1AA55AAL},{0x4B7F7EA7L,0x95B91095L,(-5L),0x1EB54E6EL,(-5L)},{0xFB685B43L,0xFB685B43L,(-9L),0xF1AA55AAL,(-1L)},{7L,0xF633FD2AL,0x4B7F7EA7L,0x95B91095L,(-5L)}}};
static uint64_t g_807 = 1UL;



static struct S0  func_1(void);
static int64_t  func_6(union U3  p_7, int8_t  p_8);
static int32_t * func_12(const int8_t * p_13, struct S0  p_14, int32_t * p_15);
static struct S0  func_18(int8_t ** p_19, union U3  p_20);
static const int32_t  func_23(const union U3  p_24, int8_t ** p_25, uint8_t  p_26, uint16_t  p_27);
static union U3  func_28(int8_t * p_29, uint32_t  p_30);
static int8_t * func_31(struct S0  p_32, uint32_t  p_33, int8_t  p_34, int8_t ** p_35, union U2  p_36);
static struct S0  func_37(int32_t * p_38, int8_t ** p_39, uint32_t  p_40, int8_t * p_41, struct S0  p_42);




static struct S0  func_1(void)
{ 
    int32_t l_792 = (-9L);
    int32_t ** const * const l_795 = &g_583;
    int32_t l_802 = 0x56519CE6L;
    int32_t l_803 = (-7L);
    int32_t l_804 = 9L;
    uint64_t l_814 = 0x485F663B4E8456B3LL;
    uint32_t *l_819 = &g_516;
    uint8_t l_825 = 0x9BL;
    struct S0 l_828[5] = {{0x872D41921DD13E46LL,0x683FL,0x89BC9F30L,0x21549CCFL,-1L,1L,0x3AL,1UL},{0x872D41921DD13E46LL,0x683FL,0x89BC9F30L,0x21549CCFL,-1L,1L,0x3AL,1UL},{0x872D41921DD13E46LL,0x683FL,0x89BC9F30L,0x21549CCFL,-1L,1L,0x3AL,1UL},{0x872D41921DD13E46LL,0x683FL,0x89BC9F30L,0x21549CCFL,-1L,1L,0x3AL,1UL},{0x872D41921DD13E46LL,0x683FL,0x89BC9F30L,0x21549CCFL,-1L,1L,0x3AL,1UL}};
    int i;
    if (g_2)
    { 
        int64_t l_3[3];
        union U3 l_9 = {{0xA0426A7609FA85F8LL,1L,0UL,4294967289UL,0L,0L,0x48L,0x1023F126L}};
        int32_t l_801[6][7][6] = {{{(-10L),(-10L),0x6AA320B0L,0L,0L,2L},{(-9L),0x362A482EL,(-2L),0x3E5AE701L,6L,0x6AA320B0L},{0x547236EBL,(-9L),(-2L),(-7L),(-10L),2L},{(-10L),(-7L),0x6AA320B0L,4L,0xC5AD45A0L,0xBCBE440EL},{4L,0xC5AD45A0L,0xBCBE440EL,6L,(-2L),(-10L)},{(-7L),0x210872E8L,0L,(-6L),(-6L),0x362A482EL},{(-6L),0xA4E99080L,0x620C91ACL,(-6L),0x96743E31L,(-7L)}},{{0x24E39C0CL,(-10L),1L,(-1L),6L,0xEE61D80AL},{(-10L),1L,0x85D832D3L,0xD20BB775L,(-10L),(-1L)},{(-6L),0x24E39C0CL,(-8L),(-1L),(-1L),0x397CAFDAL},{(-8L),0L,(-7L),(-10L),(-1L),(-2L)},{0x362A482EL,4L,(-5L),0xC2DFF35CL,(-6L),0x3E5AE701L},{0x7E65981CL,(-1L),(-7L),0xA122927EL,0x5B30C376L,0xB347665CL},{1L,(-2L),(-1L),(-7L),(-1L),(-2L)}},{{0xA1FE4FB6L,0xD0FF61E8L,(-9L),3L,(-10L),6L},{0xDD33143FL,0xC2DFF35CL,0x24E39C0CL,0L,(-6L),0xEA115B91L},{0L,0xC2DFF35CL,0x837E2F02L,(-1L),(-10L),(-6L)},{(-1L),0xD0FF61E8L,1L,0x96743E31L,(-1L),0xEB970602L},{0xC2DFF35CL,(-2L),0xC5AD45A0L,0x620C91ACL,0x5B30C376L,0x85D832D3L},{0L,(-1L),0xCABE0716L,(-6L),6L,0xD20BB775L},{0x5D0CBDC1L,0xD20BB775L,0L,4L,0x210872E8L,(-6L)}},{{(-10L),0x362A482EL,(-6L),(-6L),0L,0x210872E8L},{0L,1L,0x3E5AE701L,(-6L),0x0B0CDB58L,0x85D832D3L},{0xA4E99080L,0x837E2F02L,(-6L),0xEA115B91L,0xB347665CL,0x6AA320B0L},{0xDD33143FL,(-6L),0xA122927EL,0L,0xC2DFF35CL,(-7L)},{0x85D832D3L,0L,(-1L),0L,0L,(-10L)},{0x4FF02708L,0xFA352AC8L,1L,6L,0x376D9EE9L,(-6L)},{0xF844DEE9L,0x1B5A5FBDL,(-2L),(-2L),0x1B5A5FBDL,0xF844DEE9L}},{{0L,(-6L),0xDD33143FL,0x2EE39EE3L,(-6L),(-1L)},{0xA122927EL,0L,0xC5AD45A0L,0L,0xBCBE440EL,1L},{0xA122927EL,0xEA115B91L,0L,0x2EE39EE3L,0L,(-7L)},{0L,(-6L),0x5B30C376L,(-2L),0x397CAFDAL,2L},{0xF844DEE9L,(-10L),1L,6L,0x24E39C0CL,0xA4E99080L},{0x4FF02708L,(-6L),0xF31E3325L,0L,(-1L),0x837E2F02L},{0x85D832D3L,(-1L),1L,0L,6L,6L}},{{0xDD33143FL,0xB2790B62L,0xC2DFF35CL,0xEA115B91L,0x837E2F02L,0xF31E3325L},{0xA4E99080L,0L,0x85D832D3L,(-6L),0x6AA320B0L,0L},{0L,0L,0x5D0CBDC1L,(-6L),(-6L),1L},{(-10L),0L,0x362A482EL,4L,(-5L),0xC2DFF35CL},{0x5D0CBDC1L,0x85D832D3L,0xEB970602L,(-6L),0x5B30C376L,(-1L)},{(-1L),(-5L),0x6AA320B0L,0x4FF02708L,0x620C91ACL,0x96743E31L},{0xCABE0716L,0xC2DFF35CL,0x2EE39EE3L,0xC2DFF35CL,0xCABE0716L,(-1L)}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_3[i] = 2L;
        for (g_2 = 0; (g_2 <= 2); g_2 += 1)
        { 
            uint32_t **l_789[1][4][2] = {{{&g_626,&g_626},{&g_626,&g_626},{&g_626,&g_626},{&g_626,&g_626}}};
            int8_t *l_790[7][7] = {{&g_85.f5,&g_187,&g_85.f5,(void*)0,(void*)0,&g_85.f5,&g_187},{&g_328[4][0].f1,&g_312[1].f0.f5,&g_328[4][0].f1,&g_277,&g_187,&g_312[1].f0.f5,&g_312[1].f0.f5},{&g_277,&g_85.f5,(void*)0,&g_85.f5,&g_277,&l_9.f0.f5,&g_536.f0.f5},{&g_312[1].f0.f5,&g_679.f5,&g_312[1].f0.f5,&g_277,&g_679.f5,&g_277,&g_312[1].f0.f5},{&g_536.f0.f5,&g_536.f0.f5,&l_9.f0.f5,(void*)0,&g_187,&g_328[4][0].f1,&g_85.f5},{&g_312[1].f0.f5,&g_277,&g_328[4][0].f3,&g_328[4][0].f3,&g_277,&g_312[1].f0.f5,&g_679.f5},{&g_277,&l_9.f0.f5,&g_85.f5,&g_574,&g_187,&g_277,&g_187}};
            int8_t **l_791[1];
            int32_t l_796 = (-1L);
            int32_t l_806 = (-2L);
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_791[i] = &l_790[1][4];
            l_791[0] = ((((safe_mul_func_int16_t_s_s((func_6(l_9, l_3[g_2]) && (1L ^ (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_3[g_2] , (g_85.f1 ^ ((void*)0 != l_789[0][1][1]))), g_308)), 0x24L)))), 0xECF9L)) , (void*)0) != l_790[1][4]) , (void*)0);
            for (g_421 = 0; (g_421 <= 2); g_421 += 1)
            { 
                int32_t ***l_794 = &g_583;
                int32_t l_805 = 3L;
                int i;
                l_792 |= g_309[(g_2 + 3)];
                for (l_9.f0.f5 = 2; (l_9.f0.f5 >= 0); l_9.f0.f5 -= 1)
                { 
                    int32_t *l_797 = (void*)0;
                    int32_t *l_798 = &g_71;
                    int32_t *l_799 = (void*)0;
                    int32_t *l_800[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_800[i] = &g_59;
                    l_796 = (~((l_794 = l_794) == l_795));
                    --g_807;
                }
            }
            if (l_801[5][6][4])
                break;
        }
    }
    else
    { 
        union U1 **l_822 = &g_364;
        int32_t *l_826[5];
        int32_t l_827[5][2][6] = {{{0L,0x5C3E3672L,0x5C3E3672L,0L,0L,2L},{6L,6L,0x59BCB872L,(-1L),0x2C8A30EEL,0x45062150L}},{{6L,0L,0xF1A006B1L,0x8686723CL,0x2C8A30EEL,0L},{0L,6L,0L,6L,0L,0x8686723CL}},{{0xF1A006B1L,0x5C3E3672L,0L,2L,0L,6L},{0L,0xDAF70A0CL,0L,0x5C3E3672L,(-1L),6L}},{{0x8686723CL,0L,0L,0L,0L,0x8686723CL},{(-1L),(-1L),0L,0x2C8A30EEL,0xF1A006B1L,0L}},{{(-1L),0L,0xF1A006B1L,0x59BCB872L,0L,0x45062150L},{(-1L),2L,0x59BCB872L,0x2C8A30EEL,0x59BCB872L,2L}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_826[i] = &l_802;
        for (g_137 = 0; (g_137 <= 4); g_137 += 1)
        { 
            return g_536.f0;
        }
        l_827[1][1][1] = ((((((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_814, (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(251UL, (l_819 != l_819))) == (safe_mul_func_int16_t_s_s(((((l_822 == &g_364) >= (safe_mod_func_uint16_t_u_u(l_802, g_536.f0.f5))) , 0xEE8FL) > 0xFA39L), g_70[0][0]))), 8L)))), l_825)) >= 7L) , &g_70[3][1]) != l_826[2]) , 0xB2B762EB48C95E3BLL) ^ g_328[4][0].f0);
    }
    return l_828[4];
}



static int64_t  func_6(union U3  p_7, int8_t  p_8)
{ 
    int32_t *l_607 = &g_575;
    int32_t l_784 = 0L;
    for (p_7.f0.f4 = (-2); (p_7.f0.f4 == (-15)); --p_7.f0.f4)
    { 
        const int8_t *l_16[2][3][1];
        int32_t l_767 = 0x2E439B2BL;
        uint8_t *l_783 = &g_137;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_16[i][j][k] = &g_17;
            }
        }
    }
    return g_85.f6;
}



static int32_t * func_12(const int8_t * p_13, struct S0  p_14, int32_t * p_15)
{ 
    int64_t l_610[1][1][4] = {{{0x25DE87172074A438LL,0x25DE87172074A438LL,0x25DE87172074A438LL,0x25DE87172074A438LL}}};
    int32_t l_657 = 0xD8547802L;
    int32_t l_659[7] = {5L,5L,5L,5L,5L,5L,5L};
    int32_t l_672 = 0xFC4B0FC0L;
    struct S0 *l_678 = &g_679;
    int32_t *l_735 = &g_67;
    int32_t *l_736[4][5][1] = {{{&l_659[6]},{&g_71},{&l_672},{&g_308},{&g_59}},{{&g_308},{&l_672},{&g_71},{&l_659[6]},{&g_71}},{{&l_659[6]},{&g_71},{&l_672},{&g_308},{&g_59}},{{&g_308},{&l_672},{&g_71},{&l_659[6]},{&g_71}}};
    int32_t l_737 = 0xBCA201D7L;
    uint8_t l_738 = 252UL;
    uint8_t *l_749 = &g_190;
    uint8_t **l_748 = &l_749;
    uint32_t *l_758 = &g_679.f2;
    uint32_t **l_757 = &l_758;
    uint64_t *l_759 = &g_328[4][0].f2;
    uint64_t *l_760 = &g_328[4][0].f2;
    uint64_t *l_761 = (void*)0;
    uint64_t *l_762 = &g_531;
    uint64_t *l_763 = &g_328[4][0].f2;
    uint64_t *l_764 = (void*)0;
    int32_t *l_766 = &l_659[5];
    int i, j, k;
    for (g_85.f4 = 0; (g_85.f4 <= 2); g_85.f4 += 1)
    { 
        uint8_t *l_613 = &g_137;
        int32_t l_619 = 0xE476F07BL;
        int16_t *l_620 = &g_536.f0.f4;
        int32_t *l_621 = &g_70[3][1];
        int32_t l_662 = 0x83A7A221L;
        int32_t l_663 = (-5L);
        int32_t l_665 = (-1L);
        int32_t l_666 = 0L;
        int32_t l_667[6][1] = {{0x7F9B9FBFL},{0x726FF2E9L},{0x726FF2E9L},{0x7F9B9FBFL},{0x726FF2E9L},{0x726FF2E9L}};
        int32_t l_668 = (-1L);
        uint8_t l_693 = 0xEBL;
        uint64_t l_697 = 18446744073709551615UL;
        int32_t l_705 = (-1L);
        int16_t l_709 = (-6L);
        int i, j;
        if ((*p_15))
            break;
        if (((safe_div_func_int8_t_s_s(l_610[0][0][3], l_610[0][0][3])) <= (safe_mod_func_uint32_t_u_u(((((*l_613) = 6UL) <= (safe_rshift_func_uint16_t_u_s(0x42E4L, 11))) ^ ((**g_524) = l_610[0][0][3])), (((*l_621) = ((0x57FAL ^ (!((((*l_620) = ((safe_add_func_int64_t_s_s(p_14.f3, 0x52BB03DB8F9C0AE2LL)) ^ l_619)) >= p_14.f6) || 65533UL))) || p_14.f0)) , (*g_342))))))
        { 
            (*p_15) = (*g_342);
        }
        else
        { 
            uint64_t l_629 = 0xB963060CD6494AE4LL;
            int32_t l_661[4][7][1] = {{{(-1L)},{7L},{(-1L)},{7L},{(-1L)},{7L},{(-1L)}},{{7L},{(-1L)},{7L},{(-1L)},{7L},{(-1L)},{7L}},{{(-1L)},{7L},{(-1L)},{7L},{(-1L)},{7L},{(-1L)}},{{7L},{(-1L)},{7L},{(-1L)},{7L},{(-1L)},{7L}}};
            int8_t l_670 = (-9L);
            int64_t l_671 = 0L;
            uint16_t l_673[6][1] = {{0x3C2CL},{0x3C2CL},{0x2709L},{0x3C2CL},{0x3C2CL},{0x2709L}};
            int8_t l_692 = 0x32L;
            int32_t l_696[4][7] = {{(-8L),0xF8C5E6A3L,0xFCE706B6L,0xF8C5E6A3L,(-8L),(-8L),0xF8C5E6A3L},{1L,1L,1L,0xE5A9F17FL,0xE5A9F17FL,1L,1L},{0xF8C5E6A3L,0xD9987D1DL,0xFCE706B6L,0xFCE706B6L,0xD9987D1DL,0xF8C5E6A3L,0xD9987D1DL},{1L,0xE5A9F17FL,0xE5A9F17FL,1L,1L,1L,0xE5A9F17FL}};
            int32_t l_707 = (-6L);
            int32_t l_710 = 0L;
            uint32_t **l_734 = (void*)0;
            int i, j, k;
            for (g_110 = 2; (g_110 >= 0); g_110 -= 1)
            { 
                uint8_t l_639[7] = {249UL,249UL,249UL,249UL,249UL,249UL,249UL};
                int32_t l_658 = 0xE5C9B4B8L;
                int32_t l_664 = 5L;
                int32_t l_669[7][6][1] = {{{(-3L)},{0x9636021EL},{0xC1B79115L},{0L},{0x1A24DBE5L},{0L}},{{0xC1B79115L},{0x9636021EL},{(-3L)},{0xF2B9AD66L},{(-3L)},{0x9636021EL}},{{0xC1B79115L},{0L},{0x1A24DBE5L},{0L},{0xC1B79115L},{0x9636021EL}},{{(-3L)},{0xF2B9AD66L},{(-3L)},{0x9636021EL},{0xC1B79115L},{0xF2B9AD66L}},{{0xC1B79115L},{0xF2B9AD66L},{0x99BFFA12L},{(-1L)},{0x1A24DBE5L},{0x9636021EL}},{{0x1A24DBE5L},{(-1L)},{0x99BFFA12L},{0xF2B9AD66L},{0xC1B79115L},{0xF2B9AD66L}},{{0x99BFFA12L},{(-1L)},{0x1A24DBE5L},{0x9636021EL},{0x1A24DBE5L},{(-1L)}}};
                int32_t l_704 = 0L;
                int32_t l_708[6][2] = {{4L,0xFAF3D919L},{0xFAF3D919L,4L},{0xFAF3D919L,0xFAF3D919L},{4L,0xFAF3D919L},{0xFAF3D919L,4L},{0xFAF3D919L,0xFAF3D919L}};
                int i, j, k;
                for (p_14.f4 = 0; (p_14.f4 <= 2); p_14.f4 += 1)
                { 
                    uint8_t *l_640 = &g_547;
                    uint32_t l_641 = 0x07D8D0ADL;
                    int32_t *l_642 = &g_67;
                    (*p_15) &= (safe_mul_func_uint8_t_u_u(g_309[1], (safe_lshift_func_int16_t_s_u((((*g_524) = p_15) == (g_626 = p_15)), 12))));
                    l_619 = (((l_629 = (--(*l_613))) > ((((*l_620) = ((((*g_525) = ((!(safe_mul_func_uint16_t_u_u(((*p_13) | (0xC374L <= (p_15 == p_15))), (0x8FL > (safe_sub_func_uint8_t_u_u(((((l_639[3] || ((*l_640) = (0x2DL ^ (*p_13)))) == 0x59L) | 0UL) , g_17), l_639[3])))))) & 4294967294UL)) & l_641) > p_14.f0)) > l_641) && 65532UL)) < g_85.f4);
                    (*l_642) = (((*g_364) = (*g_364)) , ((*p_15) = ((void*)0 != (*g_524))));
                    if ((*p_15))
                        break;
                }
                if ((((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_610[0][0][3], 0x4EL)), (p_14.f5 = (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((((&g_22 != (void*)0) >= (safe_add_func_int32_t_s_s((-1L), ((safe_lshift_func_uint16_t_u_u(l_629, (p_14.f6 != g_309[3]))) || l_629)))) >= (*p_13)), p_14.f0)), g_190))))) || l_619) & g_547))
                { 
                    int32_t *l_655 = &g_308;
                    int32_t *l_656[6] = {&g_59,&g_71,&g_59,&g_59,&g_71,&g_59};
                    struct S0 *l_677 = (void*)0;
                    struct S0 **l_676[5] = {&l_677,&l_677,&l_677,&l_677,&l_677};
                    int i;
                    l_673[0][0]--;
                    l_678 = &g_85;
                }
                else
                { 
                    int32_t *l_680 = &l_664;
                    int32_t *l_681 = &g_59;
                    int32_t *l_682 = (void*)0;
                    int32_t *l_683 = (void*)0;
                    int32_t *l_684 = &g_575;
                    int32_t *l_685 = (void*)0;
                    int32_t *l_686 = &g_59;
                    int32_t *l_687 = &l_663;
                    int32_t *l_688 = (void*)0;
                    int32_t *l_689 = (void*)0;
                    int32_t l_690[1][7] = {{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)}};
                    int32_t *l_691[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_691[i] = &l_665;
                    --l_693;
                    l_697++;
                    if ((*p_15))
                        break;
                    if ((*g_342))
                        break;
                    (*l_681) &= l_668;
                }
                for (g_71 = 2; (g_71 >= 0); g_71 -= 1)
                { 
                    int32_t *l_700[1][6] = {{&l_659[6],&l_659[6],&l_659[6],&l_659[6],&l_659[6],&l_659[6]}};
                    uint32_t l_701 = 0xC234D509L;
                    int8_t l_706 = 0x14L;
                    int i, j;
                    l_701--;
                    g_711++;
                }
                l_657 = (safe_lshift_func_uint8_t_u_s((~((safe_mul_func_int8_t_s_s((*p_13), (safe_add_func_int16_t_s_s(((safe_mul_func_uint64_t_u_u(0xA657929E3BAD7A3DLL, (((g_328[(g_85.f4 + 2)][g_110] , (*g_524)) != ((~(safe_mod_func_uint8_t_u_u((--(*l_613)), l_709))) , (*g_524))) <= (safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((void*)0 != l_734), 0x3AL)) , 0x9D8FL), (-1L))), 5UL))))) || (*p_13)), p_14.f7)))) != g_110)), (*p_13)));
            }
        }
        (*g_583) = (*g_583);
    }
    --l_738;
    (*p_15) ^= (p_14.f5 > (g_765[0][3][3] &= ((~(safe_lshift_func_int16_t_s_u((((**l_748) = (safe_rshift_func_uint8_t_u_u(((g_103 ^= 0x5DL) == (safe_rshift_func_uint8_t_u_u(((void*)0 != l_748), 3))), 2))) || (((g_73 &= ((*l_762) ^= (safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((((!(safe_sub_func_int16_t_s_s((((*l_757) = l_736[0][2][0]) != p_15), (((6L & 0L) != (*p_13)) , 0x0A10L)))) > (*l_735)) && (*l_735)), p_14.f4)) , 0xD2E5C363L), p_14.f6)))) & g_679.f3) || (-1L))), p_14.f3))) ^ g_422[2][2][0])));
    return p_15;
}



static struct S0  func_18(int8_t ** p_19, union U3  p_20)
{ 
    int32_t *l_43 = (void*)0;
    int32_t l_48 = (-7L);
    uint64_t l_60[6][1][7] = {{{0x6189EFA4ED9E6264LL,0xDFF61739BB5F37D7LL,18446744073709551610UL,0xA06037BAD6E3F992LL,0xA06037BAD6E3F992LL,18446744073709551610UL,0xDFF61739BB5F37D7LL}},{{7UL,0x3A0C94A7464C6607LL,18446744073709551606UL,0x05A9EE2B40743585LL,0x05A9EE2B40743585LL,18446744073709551606UL,0x3A0C94A7464C6607LL}},{{0x6189EFA4ED9E6264LL,0xDFF61739BB5F37D7LL,18446744073709551610UL,0xA06037BAD6E3F992LL,0xA06037BAD6E3F992LL,18446744073709551610UL,0xDFF61739BB5F37D7LL}},{{7UL,0x3A0C94A7464C6607LL,18446744073709551606UL,0x05A9EE2B40743585LL,0x05A9EE2B40743585LL,18446744073709551606UL,0x3A0C94A7464C6607LL}},{{0x6189EFA4ED9E6264LL,0xDFF61739BB5F37D7LL,18446744073709551610UL,0xA06037BAD6E3F992LL,0xA06037BAD6E3F992LL,18446744073709551610UL,0xDFF61739BB5F37D7LL}},{{7UL,0x3A0C94A7464C6607LL,18446744073709551606UL,0x05A9EE2B40743585LL,0x05A9EE2B40743585LL,18446744073709551606UL,0x3A0C94A7464C6607LL}}};
    struct S0 l_61[2][6][4] = {{{{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L}},{{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0x51C8BDC662BFFD65LL,0xCA02L,5UL,0xEDAE8E35L,1L,-1L,0x39L,0x579B7B7AL},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL}},{{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL}},{{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L}},{{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0x51C8BDC662BFFD65LL,0xCA02L,5UL,0xEDAE8E35L,1L,-1L,0x39L,0x579B7B7AL},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL}},{{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL}}},{{{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L}},{{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0x51C8BDC662BFFD65LL,0xCA02L,5UL,0xEDAE8E35L,1L,-1L,0x39L,0x579B7B7AL},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL}},{{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL}},{{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L}},{{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0x51C8BDC662BFFD65LL,0xCA02L,5UL,0xEDAE8E35L,1L,-1L,0x39L,0x579B7B7AL},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL}},{{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xD15778C4B1E4F373LL,0x6A37L,18446744073709551614UL,4294967295UL,-7L,0xB4L,0L,0x53E45BD2L},{0xB11FE8BE9C2C51C8LL,2L,18446744073709551612UL,0xBDD559FEL,0L,0x82L,0x88L,18446744073709551615UL}}}};
    union U2 l_86 = {0};
    int8_t **l_314 = &g_22;
    int32_t *l_338 = &g_67;
    const int32_t *l_340 = &g_341;
    const int32_t **l_339[3][1];
    int32_t *l_343 = &g_308;
    union U1 *l_361 = &g_199;
    union U1 **l_360 = &l_361;
    int16_t * const l_365[4][4] = {{&g_312[1].f0.f4,&g_312[1].f0.f4,&l_61[0][3][1].f4,&l_61[0][3][1].f4},{&g_312[1].f0.f4,&g_312[1].f0.f4,&l_61[0][3][1].f4,&l_61[0][3][1].f4},{&g_312[1].f0.f4,&g_312[1].f0.f4,&l_61[0][3][1].f4,&l_61[0][3][1].f4},{&g_312[1].f0.f4,&g_312[1].f0.f4,&l_61[0][3][1].f4,&l_61[0][3][1].f4}};
    uint8_t * const l_474 = (void*)0;
    int32_t l_530 = 0L;
    uint32_t l_592 = 1UL;
    union U3 **l_593 = &g_535;
    uint16_t l_595 = 4UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_339[i][j] = &l_340;
    }
    (*l_338) = func_23(func_28(func_31(func_37(l_43, p_19, ((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((g_2 >= ((l_48 != ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((~(g_59 = (9L == (safe_mul_func_int16_t_s_s((((g_56 , (safe_add_func_int16_t_s_s(p_20.f0.f6, p_20.f0.f7))) | g_2) & 4UL), p_20.f0.f4))))), l_60[2][0][4])), g_2)) >= p_20.f0.f2)) , g_2)), (**p_19))), g_17)) ^ g_2), (*p_19), l_61[0][3][1]), p_20.f0.f6, (*g_22), &g_22, l_86), p_20.f0.f0), l_314, g_85.f1, p_20.f0.f0);
    if (((*l_343) ^= ((g_342 = &g_59) != ((*l_338) , &g_71))))
    { 
        int8_t *l_346 = &g_277;
        int32_t l_352 = 0L;
        union U4 l_362 = {255UL};
        int32_t *l_395 = &g_71;
        uint32_t * const *l_418 = (void*)0;
        uint32_t *l_424 = &g_295;
        uint32_t **l_423 = &l_424;
        union U1 l_449 = {0x325FCC7EL};
        struct S0 l_458 = {6UL,6L,0x59076EA8L,0x8AE09A5AL,-1L,0x89L,0L,0x9905270DL};
        union U2 l_498 = {0};
        int32_t *l_526 = &l_48;
        int32_t *l_527 = &g_308;
        int32_t *l_528 = &g_71;
        int32_t *l_529[6] = {(void*)0,(void*)0,&l_48,(void*)0,(void*)0,&l_48};
        int i;
        for (g_199.f0 = 5; (g_199.f0 > 17); g_199.f0 = safe_add_func_int16_t_s_s(g_199.f0, 7))
        { 
            int8_t **l_347 = &l_346;
            int32_t l_353 = 0x8C2A39CCL;
            int32_t **l_355 = &g_325;
            int32_t ***l_354 = &l_355;
            uint16_t *l_356[5];
            int32_t *l_357[7][5][5] = {{{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48}},{{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353}},{{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48}},{{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353}},{{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48}},{{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353}},{{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48},{&l_353,&l_353,&l_353,&l_353,&l_353},{&l_48,&l_48,&l_48,&l_48,&l_48}}};
            union U2 l_404 = {0};
            uint32_t * const l_420[5][2][3] = {{{&g_422[1][0][0],&g_422[1][0][0],&g_422[1][0][0]},{&g_421,&g_421,&g_421}},{{&g_422[1][0][0],&g_422[1][0][0],&g_422[1][0][0]},{&g_421,&g_421,&g_421}},{{&g_422[1][0][0],&g_422[1][0][0],&g_422[1][0][0]},{&g_421,&g_421,&g_421}},{{&g_422[1][0][0],&g_422[1][0][0],&g_422[1][0][0]},{&g_421,&g_421,&g_421}},{{&g_422[1][0][0],&g_422[1][0][0],&g_422[1][0][0]},{&g_421,&g_421,&g_421}}};
            uint32_t * const *l_419 = &l_420[1][0][0];
            uint32_t l_441 = 4294967291UL;
            int32_t l_455[6] = {0xA9F7F6E3L,0xA9F7F6E3L,0xA9F7F6E3L,0xA9F7F6E3L,0xA9F7F6E3L,0xA9F7F6E3L};
            int32_t l_460 = (-5L);
            uint8_t *l_475 = &g_103;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_356[i] = (void*)0;
        }
        ++g_531;
    }
    else
    { 
        union U3 **l_534 = (void*)0;
        int32_t l_540 = (-1L);
        int32_t l_546[4];
        int i;
        for (i = 0; i < 4; i++)
            l_546[i] = 0L;
lbl_559:
        g_535 = &g_312[1];
        for (g_85.f5 = 8; (g_85.f5 >= (-18)); --g_85.f5)
        { 
            uint64_t l_541 = 0x9A3E13CB002531C2LL;
            int32_t *l_544 = &l_530;
            int32_t *l_545[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_59,&g_59,&g_59,&g_59,&g_59},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            const union U1 l_550 = {0x0BE2BBF9L};
            uint32_t l_558 = 1UL;
            int i, j;
            for (l_530 = 0; l_530 < 6; l_530 += 1)
            {
                g_309[l_530] = 0x533F1D31L;
            }
            if (p_20.f0.f5)
            { 
                (*l_338) ^= 0xB10B5C2AL;
            }
            else
            { 
                int32_t *l_539[7][2][5] = {{{(void*)0,&g_308,&g_308,&g_67,(void*)0},{&l_530,&g_59,(void*)0,&g_59,&l_530}},{{(void*)0,&l_48,&g_71,&g_67,&g_67},{&l_530,&l_530,&g_67,(void*)0,&g_59}},{{&g_71,&g_71,&g_67,&l_48,&g_67},{(void*)0,(void*)0,&g_67,&g_67,&l_530}},{{&g_67,&l_530,&l_530,&g_308,(void*)0},{(void*)0,(void*)0,&g_59,&g_67,&g_59}},{{&g_71,&l_530,&l_530,&g_71,(void*)0},{&l_530,(void*)0,&l_530,&l_530,&g_308}},{{&l_530,&g_71,(void*)0,&g_71,&l_530},{(void*)0,&l_530,&l_530,&l_530,&l_530}},{{(void*)0,&l_48,&g_59,&g_71,(void*)0},{(void*)0,&g_59,(void*)0,&g_67,&l_530}}};
                int i, j, k;
                l_541++;
                return g_312[1].f0;
            }
            (*l_338) = (*g_342);
            g_547--;
            (*l_544) |= ((((l_550 , (g_536.f0.f5 >= (!l_546[3]))) & (safe_mul_func_int16_t_s_s(((0x1C57L & ((*l_338) = ((((*g_22) = (((((0xC7A86EC372F684E1LL & (g_110 = ((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((*l_343), (*g_22))), 0x6E98B0A65D40BDB5LL)) != (**p_19)))) > (**g_524)) , 0x79L) >= 0xFCL) > 7UL)) ^ l_546[0]) || l_546[1]))) != 6L), l_558))) ^ 0x12L) > p_20.f0.f1);
        }
        if (g_199.f0)
            goto lbl_559;
        for (g_536.f1 = (-16); (g_536.f1 >= 12); g_536.f1 = safe_add_func_int8_t_s_s(g_536.f1, 3))
        { 
            union U4 l_562[1][6] = {{{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}}};
            union U4 *l_563 = &l_562[0][5];
            uint32_t *l_573 = &g_295;
            int i, j;
            (*l_343) = (((*l_338) = (-7L)) ^ ((((((*l_563) = l_562[0][5]) , 0x0EL) > ((*g_364) , (safe_mod_func_int8_t_s_s((((+(((g_85.f3 < (safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(((*l_573) = (++(**g_524))), p_20.f0.f0)) <= (g_312[1].f0.f4 &= (g_574 , p_20.f0.f2))), g_575))) , p_20.f0.f5) || p_20.f0.f1)) & l_540) == (**p_19)), 0xB3L)))) != (*g_22)) && l_562[0][5].f3));
        }
    }
    for (g_85.f7 = (-11); (g_85.f7 < 14); ++g_85.f7)
    { 
        int32_t **l_581 = &l_343;
        int32_t ***l_580 = &l_581;
        union U3 **l_591 = &g_535;
        uint64_t *l_594[6] = {&l_60[2][0][4],&g_2,&l_60[2][0][4],&l_60[2][0][4],&g_2,&l_60[2][0][4]};
        uint16_t *l_596 = &g_112;
        int8_t *l_603 = &g_312[1].f0.f5;
        int8_t ****l_604 = (void*)0;
        int8_t ***l_606 = &g_21[5];
        int8_t ****l_605 = &l_606;
        int i;
        (*l_343) = ((safe_rshift_func_uint16_t_u_s((l_580 != g_582[4]), 12)) & (l_365[3][3] == l_365[0][0]));
        l_595 = ((**l_581) , (((safe_sub_func_int32_t_s_s((((**p_19) & (safe_sub_func_int32_t_s_s((+(g_531 = ((l_591 == (func_28((*p_19), ((l_592 |= (-1L)) > (**p_19))) , l_593)) ^ 0xDF4CL))), (**g_524)))) < 250UL), 0UL)) == 0L) || p_20.f0.f4));
        (***l_580) = (g_103 | ((*l_596) &= g_70[1][1]));
        (**l_581) = ((safe_sub_func_int8_t_s_s(((*l_603) = (safe_div_func_int64_t_s_s((((((((((-8L) & 0x1EADE0AAL) > (l_86 , 4UL)) != (((**p_19) = (safe_add_func_uint8_t_u_u((g_422[3][1][0] < (g_112 = (p_20.f0.f3 || ((((void*)0 == (*l_580)) != p_20.f0.f3) & (**l_581))))), (**p_19)))) , (**g_524))) , &g_328[0][1]) == (void*)0) , p_20.f0.f3) || g_137) > (**l_581)), g_312[1].f0.f1))), p_20.f0.f2)) ^ p_20.f0.f3);
        (*l_605) = &l_314;
    }
    return l_61[0][3][1];
}



static const int32_t  func_23(const union U3  p_24, int8_t ** p_25, uint8_t  p_26, uint16_t  p_27)
{ 
    int32_t *l_316 = &g_67;
    int32_t **l_315[6][5] = {{&l_316,&l_316,(void*)0,&l_316,&l_316},{&l_316,(void*)0,&l_316,(void*)0,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316,&l_316}};
    int32_t *l_317[5][7] = {{&g_59,&g_67,&g_308,&g_308,&g_67,&g_59,&g_59},{&g_71,&g_59,&g_71,(void*)0,&g_71,&g_59,&g_71},{&g_59,&g_308,&g_59,&g_67,&g_67,&g_59,&g_308},{&g_59,&g_59,&g_71,&g_59,&g_59,&g_59,&g_71},{&g_67,&g_67,&g_59,&g_308,&g_59,&g_59,&g_308}};
    int64_t *l_333 = &g_110;
    int64_t l_336 = (-4L);
    int i, j;
    l_317[4][6] = (void*)0;
    for (g_199.f0 = 8; (g_199.f0 >= 19); g_199.f0++)
    { 
        int16_t l_337 = (-3L);
        for (p_26 = (-27); (p_26 >= 12); p_26 = safe_add_func_int32_t_s_s(p_26, 5))
        { 
            uint8_t l_322 = 251UL;
            uint64_t *l_334 = &g_328[4][0].f2;
            uint16_t *l_335 = &g_112;
            --l_322;
            g_325 = &g_59;
            l_337 = (safe_mul_func_uint16_t_u_u(g_295, ((((g_328[4][0] , (((((safe_mul_func_uint8_t_u_u(((((*l_333) = ((((l_333 == (void*)0) ^ ((*l_334) = g_312[1].f0.f2)) ^ (l_336 = ((g_312[1].f0.f2 >= (((*l_335) = p_24.f0.f4) != 0x799DL)) < p_27))) || (*g_325))) && g_85.f5) && 4L), (**p_25))) ^ p_24.f0.f7) , 1L) <= 0UL) > g_172)) , (**p_25)) && p_24.f0.f5) >= l_322)));
        }
        if (l_337)
            break;
        if (l_337)
            break;
    }
    return p_24.f0.f2;
}



static union U3  func_28(int8_t * p_29, uint32_t  p_30)
{ 
    int16_t l_283 = 1L;
    uint16_t *l_289 = &g_112;
    uint16_t * const *l_288 = &l_289;
    union U1 l_290 = {0xDD2467ACL};
    int16_t l_291[2][3][5] = {{{0x9955L,0xD468L,0x9955L,0xD468L,0x9955L},{0x80D6L,0x80D6L,9L,9L,0x80D6L},{0xEAA9L,0xD468L,0xEAA9L,0xD468L,0xEAA9L}},{{0x80D6L,9L,9L,0x80D6L,0x80D6L},{0x9955L,0xD468L,0x9955L,0xD468L,0x9955L},{0x80D6L,0x80D6L,9L,9L,0x80D6L}}};
    uint32_t *l_292 = (void*)0;
    uint32_t *l_293 = (void*)0;
    uint32_t *l_294 = &g_295;
    int32_t l_296 = 1L;
    uint64_t *l_297 = (void*)0;
    uint64_t *l_298[5];
    int32_t l_299[5] = {0xBE43E4FFL,0xBE43E4FFL,0xBE43E4FFL,0xBE43E4FFL,0xBE43E4FFL};
    int32_t l_300[3][4] = {{6L,6L,0x31985A4FL,6L},{6L,0x209037D4L,0x209037D4L,6L},{0x209037D4L,6L,0x209037D4L,0x209037D4L}};
    int32_t *l_301 = &g_67;
    union U3 l_313 = {{18446744073709551615UL,0xB2B4L,0x886C2678L,4294967295UL,-1L,-1L,1L,0xECF46E8AL}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_298[i] = &g_73;
    (*l_301) &= (safe_rshift_func_uint8_t_u_u((((((safe_mul_func_int8_t_s_s(l_283, (l_283 && (l_300[0][0] = (l_283 != (safe_lshift_func_int16_t_s_u(((l_299[0] = ((l_283 != (l_296 = ((((*l_294) |= ((((void*)0 != l_288) , (l_290 , l_291[0][2][1])) > 0UL)) && 0x2B754566L) , l_290.f0))) >= l_291[1][0][2])) , l_291[1][2][1]), g_85.f0))))))) & l_290.f0) >= p_30) >= p_30) == l_291[1][2][3]), 0));
    for (g_59 = 0; (g_59 < 29); ++g_59)
    { 
        int8_t l_304 = (-1L);
        int32_t l_305[3];
        int32_t *l_306 = (void*)0;
        int32_t *l_307[1];
        int i;
        for (i = 0; i < 3; i++)
            l_305[i] = (-6L);
        for (i = 0; i < 1; i++)
            l_307[i] = &l_296;
        if (g_112)
            break;
        ++g_309[3];
        return g_312[1];
    }
    return l_313;
}



static int8_t * func_31(struct S0  p_32, uint32_t  p_33, int8_t  p_34, int8_t ** p_35, union U2  p_36)
{ 
    const int8_t *l_96[2][1];
    const int8_t **l_95 = &l_96[0][0];
    uint32_t l_101 = 0x6C05CDAFL;
    int32_t l_118[3][7] = {{0x53D0E522L,0xB6AC9542L,(-1L),0xB6AC9542L,0x53D0E522L,0x53D0E522L,0xB6AC9542L},{0x9E96FC21L,0x56846699L,0x9E96FC21L,0xB6AC9542L,0xB6AC9542L,0x9E96FC21L,0x56846699L},{0xB6AC9542L,0x56846699L,(-1L),(-1L),0x56846699L,0xB6AC9542L,0x56846699L}};
    int32_t *l_125[6][6][3] = {{{&g_67,&l_118[2][0],&g_71},{&g_59,&g_67,&g_67},{&g_67,&g_67,&g_71},{(void*)0,&l_118[0][6],&g_71},{(void*)0,&g_71,&g_67},{&g_71,&g_59,&g_71}},{{&g_71,&g_71,&g_59},{&l_118[2][0],&l_118[0][6],&l_118[2][5]},{&l_118[2][0],&g_67,&g_71},{&g_71,&g_67,&l_118[0][6]},{&g_71,&l_118[2][0],&g_71},{(void*)0,&g_67,&l_118[2][5]}},{{(void*)0,&g_67,&g_59},{&g_67,&l_118[2][0],&g_71},{&g_59,&g_67,&g_67},{&g_67,&g_67,&g_71},{(void*)0,&l_118[0][6],&g_71},{(void*)0,&g_71,&g_67}},{{&g_71,&g_59,&g_71},{&g_71,&g_71,&g_59},{&l_118[2][0],&l_118[0][6],&l_118[2][5]},{&l_118[2][0],&g_67,&g_71},{&g_71,&g_67,&l_118[0][6]},{&g_71,&l_118[2][0],&g_71}},{{(void*)0,&g_67,&l_118[2][5]},{(void*)0,&g_67,&g_59},{&g_67,&l_118[2][0],&g_71},{&g_59,&g_67,&g_67},{&g_67,&g_67,&g_71},{(void*)0,&l_118[0][6],&g_71}},{{(void*)0,&g_71,&g_67},{&g_71,&g_59,&g_71},{&g_71,&g_71,&g_59},{&l_118[2][0],&l_118[0][6],&l_118[2][5]},{&l_118[2][0],&g_67,&g_71},{&g_71,&g_67,&l_118[0][6]}}};
    int32_t **l_124 = &l_125[2][0][2];
    uint8_t *l_134 = (void*)0;
    uint64_t *l_153 = &g_2;
    uint8_t l_173 = 255UL;
    int8_t *l_174 = (void*)0;
    int32_t l_254 = 0x6C5116D4L;
    union U1 *l_274[4] = {&g_199,&g_199,&g_199,&g_199};
    uint32_t *l_275 = (void*)0;
    uint32_t *l_276[4][7] = {{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101},{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101},{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101},{&l_101,&l_101,&l_101,&l_101,&l_101,&l_101,&l_101}};
    uint64_t l_278[3][3][7] = {{{0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL}},{{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL}},{{0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL},{18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL},{0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL,0xBFF306726C21DDFALL}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_96[i][j] = (void*)0;
    }
    for (g_17 = (-11); (g_17 < 8); ++g_17)
    { 
        uint64_t l_108 = 4UL;
        int32_t l_123 = 0x982E8761L;
        union U4 l_152[3] = {{1UL},{1UL},{1UL}};
        int8_t **l_170[4][4] = {{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22},{&g_22,&g_22,&g_22,&g_22}};
        int32_t l_178 = 0x03852427L;
        union U1 *l_198 = &g_199;
        uint8_t l_225[4][5] = {{0UL,0UL,0x85L,0UL,0UL},{0xE3L,0UL,0xE3L,0xE3L,0UL},{0UL,0xE3L,0xE3L,0UL,0xE3L},{0UL,0UL,0x85L,0UL,0UL}};
        int64_t l_256 = 0xAADC728AAC3256DELL;
        int i, j;
        for (g_73 = 0; (g_73 <= 5); g_73 += 1)
        { 
            uint8_t *l_102 = &g_103;
            int64_t *l_109 = &g_110;
            uint16_t *l_111 = &g_112;
            int32_t l_113 = 1L;
            int32_t *l_114 = (void*)0;
            int32_t *l_115 = (void*)0;
            int32_t *l_116 = &g_71;
            int32_t l_189 = 0L;
            union U1 *l_217[3];
            int i;
            for (i = 0; i < 3; i++)
                l_217[i] = &g_199;
            if (((*l_116) = ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((p_36.f1 = (safe_rshift_func_uint8_t_u_s(((((g_85.f2 > ((g_21[g_73] = (void*)0) == l_95)) ^ (safe_add_func_uint8_t_u_u(((*l_102) = (safe_rshift_func_int16_t_s_u(l_101, 14))), (((safe_mul_func_uint16_t_u_u(0xD660L, ((*l_111) = (((*l_109) &= ((g_2 , ((safe_mul_func_int8_t_s_s((g_85.f1 && l_108), l_101)) , &g_71)) != (void*)0)) , l_101)))) & l_113) > (**p_35))))) >= 0x08L) >= l_113), (**p_35)))) , p_32.f4), 0xB6L)), 2)) >= l_101)))
            { 
                int32_t l_117 = 8L;
                uint64_t *l_147 = &l_108;
                (*l_116) &= g_85.f3;
                l_117 |= (*l_116);
                l_118[2][2] |= (-5L);
                if (g_67)
                { 
                    int32_t ***l_126 = &l_124;
                    uint64_t *l_135 = &l_108;
                    l_123 = ((*g_22) > (((((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(0x112DL, g_85.f0)) == p_32.f1), (-10L))) & g_85.f1) < p_32.f2) == 1L) > l_108));
                    (*l_126) = l_124;
                    (*l_116) = (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((g_85.f4 = (safe_unary_minus_func_int8_t_s((**p_35)))), (p_32.f3 , ((safe_sub_func_uint64_t_u_u((((p_32.f7 == 0x6490L) != ((p_33 , ((*l_135) = ((p_32.f3 & ((l_134 = &g_103) != (void*)0)) && g_110))) == g_70[0][0])) <= p_32.f3), g_17)) || 0x88613543L)))), g_85.f2));
                    l_123 = 9L;
                }
                else
                { 
                    int32_t l_136 = 7L;
                    ++g_137;
                    if (g_137)
                        continue;
                }
                if ((((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((((safe_unary_minus_func_uint16_t_u(p_32.f5)) | (safe_mul_func_uint16_t_u_u(((*l_111) = (((p_32.f3 ^ (++(*l_147))) <= l_123) , (safe_mul_func_int16_t_s_s(g_85.f4, p_32.f5)))), p_32.f5))) >= 0UL) , l_152[0]) , (*l_116)), g_85.f4)) | 18446744073709551612UL), p_32.f2)) | (*g_22)) >= p_32.f1))
                { 
                    int16_t l_156[2][3] = {{(-6L),(-6L),(-6L)},{0xCF37L,0xCF37L,0xCF37L}};
                    const union U3 l_164[5] = {{{18446744073709551610UL,0xDD1AL,1UL,0x75F29634L,0xBAEAL,-3L,0L,1UL}},{{18446744073709551610UL,0xDD1AL,1UL,0x75F29634L,0xBAEAL,-3L,0L,1UL}},{{18446744073709551610UL,0xDD1AL,1UL,0x75F29634L,0xBAEAL,-3L,0L,1UL}},{{18446744073709551610UL,0xDD1AL,1UL,0x75F29634L,0xBAEAL,-3L,0L,1UL}},{{18446744073709551610UL,0xDD1AL,1UL,0x75F29634L,0xBAEAL,-3L,0L,1UL}}};
                    const int8_t ** const l_171[6] = {&l_96[0][0],&l_96[0][0],&l_96[0][0],&l_96[0][0],&l_96[0][0],&l_96[0][0]};
                    int i, j;
                    (*l_116) = ((l_153 == &g_73) != (0x1A4FFB4BL >= (((safe_mod_func_uint64_t_u_u(((void*)0 == l_147), ((l_156[1][1] , (&g_110 != (void*)0)) && p_36.f1))) > p_32.f4) , l_156[1][1])));
                    if (p_32.f3)
                        continue;
                    l_173 &= (((safe_mul_func_int16_t_s_s((l_152[0].f0 | (safe_lshift_func_int16_t_s_s((g_73 || (safe_mod_func_int32_t_s_s(1L, (((((!(l_164[2] , (g_137 = (safe_mod_func_uint8_t_u_u((+((*l_147) = 18446744073709551613UL)), (safe_sub_func_int32_t_s_s(((((*l_102) ^= (((l_170[3][0] == ((((*l_109) = p_33) || p_32.f5) , l_171[4])) == g_172) || g_85.f7)) && 0x6AL) & g_2), 4294967295UL))))))) < p_32.f5) ^ (-1L)) && p_32.f4) , 4294967294UL)))), g_85.f4))), p_32.f0)) == (**p_35)) != g_71);
                }
                else
                { 
                    return l_174;
                }
            }
            else
            { 
                int16_t l_177 = (-2L);
                int32_t l_179 = 0x2863D54AL;
                int32_t l_180 = 0xD40DFC3AL;
                int32_t l_186[5][7][3] = {{{0L,1L,5L},{(-3L),0xEC956AC2L,0L},{0xAA2D425EL,1L,1L},{0x1754CC00L,0xEC956AC2L,(-4L)},{(-1L),1L,0x4DEB0707L},{1L,0xEC956AC2L,0xD1929A79L},{0L,1L,5L}},{{(-3L),0xEC956AC2L,0L},{0xAA2D425EL,1L,1L},{0x1754CC00L,0xEC956AC2L,(-4L)},{(-1L),1L,0x4DEB0707L},{1L,0xEC956AC2L,0xD1929A79L},{0L,1L,5L},{(-3L),0xEC956AC2L,0L}},{{0xAA2D425EL,1L,1L},{0x1754CC00L,0xEC956AC2L,(-4L)},{(-1L),1L,0x4DEB0707L},{1L,0xEC956AC2L,0xD1929A79L},{0L,1L,5L},{(-3L),0xEC956AC2L,0L},{0xAA2D425EL,1L,1L}},{{0x1754CC00L,0xEC956AC2L,(-4L)},{(-1L),1L,0x4DEB0707L},{1L,0xEC956AC2L,0xD1929A79L},{0L,1L,5L},{(-3L),0xEC956AC2L,0L},{0xAA2D425EL,1L,1L},{0x1754CC00L,0xEC956AC2L,(-4L)}},{{(-1L),1L,0x1ADF4364L},{0xD1929A79L,(-4L),0x56502228L},{0x4DEB0707L,0x9B034DBDL,0x86086E3DL},{(-4L),(-4L),0x39E31765L},{1L,0x9B034DBDL,0x9B034DBDL},{0L,(-4L),1L},{5L,0x9B034DBDL,0x1ADF4364L}}};
                int16_t *l_195 = (void*)0;
                int16_t *l_196 = &l_177;
                uint16_t **l_197 = &l_111;
                int32_t ***l_232 = &l_124;
                int32_t l_240[3];
                int32_t l_255[7][1] = {{0x78AEA7E0L},{0x2D32F513L},{0x78AEA7E0L},{0x78AEA7E0L},{0x2D32F513L},{0x78AEA7E0L},{0x78AEA7E0L}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_240[i] = 0x3B0A8462L;
                for (g_103 = (-10); (g_103 > 51); g_103 = safe_add_func_int64_t_s_s(g_103, 1))
                { 
                    uint32_t l_181 = 0xCDFA724BL;
                    uint64_t *l_184 = &l_108;
                    int32_t l_185 = 0xD696A671L;
                    (*l_124) = &g_59;
                    ++l_181;
                    g_59 |= (g_70[0][1] & ((*l_184) = l_180));
                    (*l_116) &= p_32.f7;
                    --g_190;
                }
                if (((safe_div_func_uint16_t_u_u((g_110 ^ (g_188 && ((*l_196) = ((&g_67 != &g_67) ^ g_85.f4)))), l_179)) <= (((*l_197) = ((*l_116) , &g_112)) != &g_112)))
                { 
                    union U1 **l_200 = &l_198;
                    const int32_t l_203 = (-1L);
                    uint64_t *l_218 = &l_108;
                    union U1 **l_226 = &l_217[1];
                    (*l_200) = l_198;
                    (*l_116) ^= (safe_rshift_func_uint16_t_u_s((g_199 , 0xAC1DL), l_203));
                    (*l_226) = (((*l_102) |= (safe_mod_func_int64_t_s_s(l_178, (p_36.f1 || ((**l_197) = (safe_mod_func_int8_t_s_s((*g_22), (safe_add_func_int16_t_s_s(((*l_196) = ((((!(((safe_add_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((((*l_200) = l_217[2]) == (void*)0), ((--(*l_218)) ^ (safe_mod_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(l_186[2][3][2], g_137)) == p_36.f1) & p_32.f5), 0x0BL))))) || 255UL), (-2L))) <= l_186[3][3][2]), 255UL)) <= l_225[1][1]) & 0x9AD0L)) , 255UL) && 0x3BL) ^ g_71)), l_203))))))))) , l_198);
                }
                else
                { 
                    (*l_116) &= (~((*l_102) |= (((safe_mod_func_uint32_t_u_u(((((safe_add_func_uint8_t_u_u((l_186[2][5][1] | (p_34 = (0x8ADFL | g_112))), ((void*)0 == l_232))) , g_70[0][0]) > p_32.f5) ^ g_85.f4), 0xE4DCE94AL)) == l_108) <= p_32.f4)));
                    (**l_232) = &g_67;
                }
                if (p_32.f5)
                    continue;
                (*l_116) = (((p_32.f5 ^= (p_32.f0 , ((((*l_109) = (((l_152[0].f3 >= g_59) > (safe_div_func_int16_t_s_s((((*g_22) != (!((l_123 = (((((safe_mul_func_int8_t_s_s(((l_240[0] > ((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((((((((((!((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((**p_35), 2)), g_73)), g_70[1][0])), 15)) , (-4L))) & 8L) < l_254) ^ l_152[0].f1) & g_190) >= p_32.f4) & 3UL) | l_255[6][0]) | g_172) >= 0xA4B74A62L), p_32.f3)), l_256)) <= 4L)) <= g_85.f5), g_85.f5)) == p_34) && l_225[1][1]) >= 18446744073709551615UL) & (*l_116))) >= 0xB92BA8E1L))) < p_32.f7), p_32.f0))) >= 1L)) | g_85.f2) > p_33))) != g_67) | 0x4DL);
            }
        }
        for (g_85.f4 = (-10); (g_85.f4 >= (-18)); --g_85.f4)
        { 
            uint16_t l_259 = 65530UL;
            --l_259;
        }
        if (g_85.f7)
            continue;
    }
    g_71 ^= ((safe_add_func_uint16_t_u_u(((g_70[2][1] <= (g_277 = ((safe_add_func_uint8_t_u_u(p_32.f2, (safe_lshift_func_int8_t_s_u(((**p_35) = (safe_div_func_int8_t_s_s(0xD1L, (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((g_112 = 0x4627L), g_172)), ((g_199 , l_274[2]) != l_274[2])))))), 4)))) ^ p_32.f4))) | g_85.f2), p_32.f2)) <= l_278[1][0][2]);
    return (*p_35);
}



static struct S0  func_37(int32_t * p_38, int8_t ** p_39, uint32_t  p_40, int8_t * p_41, struct S0  p_42)
{ 
    int64_t l_69 = 1L;
    int32_t l_72[5];
    int i;
    for (i = 0; i < 5; i++)
        l_72[i] = 0x5FD73FCFL;
    for (p_42.f4 = 0; (p_42.f4 <= (-21)); --p_42.f4)
    { 
        int8_t l_64 = 0x7FL;
        int32_t *l_65 = &g_59;
        int32_t *l_66[3];
        int32_t l_68 = 0xC1CA3632L;
        int16_t l_84 = 0xFE41L;
        int i;
        for (i = 0; i < 3; i++)
            l_66[i] = &g_59;
        g_73++;
        for (l_68 = 0; (l_68 <= 2); l_68 += 1)
        { 
            int i;
            (*l_65) = g_70[1][0];
            g_59 &= (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_72[4], 4)), l_72[0])), 0)), 2));
        }
        if (l_84)
            continue;
        if (g_17)
            break;
    }
    return g_85;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_70[i][j], "g_70[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_85.f5, "g_85.f5", print_hash_value);
    transparent_crc(g_85.f6, "g_85.f6", print_hash_value);
    transparent_crc(g_85.f7, "g_85.f7", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_199.f0, "g_199.f0", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_309[i], "g_309[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_312[i].f0.f0, "g_312[i].f0.f0", print_hash_value);
        transparent_crc(g_312[i].f0.f1, "g_312[i].f0.f1", print_hash_value);
        transparent_crc(g_312[i].f0.f2, "g_312[i].f0.f2", print_hash_value);
        transparent_crc(g_312[i].f0.f3, "g_312[i].f0.f3", print_hash_value);
        transparent_crc(g_312[i].f0.f4, "g_312[i].f0.f4", print_hash_value);
        transparent_crc(g_312[i].f0.f5, "g_312[i].f0.f5", print_hash_value);
        transparent_crc(g_312[i].f0.f6, "g_312[i].f0.f6", print_hash_value);
        transparent_crc(g_312[i].f0.f7, "g_312[i].f0.f7", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_328[i][j].f0, "g_328[i][j].f0", print_hash_value);
            transparent_crc(g_328[i][j].f1, "g_328[i][j].f1", print_hash_value);
            transparent_crc(g_328[i][j].f3, "g_328[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_422[i][j][k], "g_422[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_536.f0.f0, "g_536.f0.f0", print_hash_value);
    transparent_crc(g_536.f0.f1, "g_536.f0.f1", print_hash_value);
    transparent_crc(g_536.f0.f2, "g_536.f0.f2", print_hash_value);
    transparent_crc(g_536.f0.f3, "g_536.f0.f3", print_hash_value);
    transparent_crc(g_536.f0.f4, "g_536.f0.f4", print_hash_value);
    transparent_crc(g_536.f0.f5, "g_536.f0.f5", print_hash_value);
    transparent_crc(g_536.f0.f6, "g_536.f0.f6", print_hash_value);
    transparent_crc(g_536.f0.f7, "g_536.f0.f7", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_679.f0, "g_679.f0", print_hash_value);
    transparent_crc(g_679.f1, "g_679.f1", print_hash_value);
    transparent_crc(g_679.f2, "g_679.f2", print_hash_value);
    transparent_crc(g_679.f3, "g_679.f3", print_hash_value);
    transparent_crc(g_679.f4, "g_679.f4", print_hash_value);
    transparent_crc(g_679.f5, "g_679.f5", print_hash_value);
    transparent_crc(g_679.f6, "g_679.f6", print_hash_value);
    transparent_crc(g_679.f7, "g_679.f7", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_765[i][j][k], "g_765[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_807, "g_807", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
