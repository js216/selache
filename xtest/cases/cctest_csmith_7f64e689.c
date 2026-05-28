// SPDX-License-Identifier: MIT
// cctest_csmith_7f64e689.c --- cctest case csmith_7f64e689 (csmith seed 2137319049)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf68ab7f1 */
/* @exp_ticks 0x4331 */

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

// Options:   -s 2137319049 -o /tmp/csmith_gen_qflz8e87/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint16_t  f0;
   const int8_t  f1;
};

union U1 {
   const int8_t  f0;
   const uint16_t  f1;
};

union U2 {
   const uint32_t  f0;
   uint32_t  f1;
};

union U3 {
   uint8_t  f0;
};


static uint32_t g_33[1] = {0xAFA01777L};
static uint32_t g_50 = 4294967295UL;
static uint16_t g_51[3] = {5UL,5UL,5UL};
static uint64_t g_53 = 18446744073709551614UL;
static union U3 g_54 = {255UL};
static union U1 g_55[3][3] = {{{0x2BL},{0x2BL},{0x2BL}},{{0x02L},{0x02L},{0x02L}},{{0x2BL},{0x2BL},{0x2BL}}};
static union U2 g_80 = {0x1B5B3A04L};
static int64_t g_85 = (-1L);
static int16_t g_111 = 0xFA76L;
static uint16_t *g_118[6][1][7] = {{{&g_51[1],&g_51[1],(void*)0,&g_51[1],&g_51[1],&g_51[1],(void*)0}},{{&g_51[1],&g_51[1],&g_51[1],&g_51[2],&g_51[0],&g_51[1],(void*)0}},{{&g_51[2],(void*)0,&g_51[2],&g_51[1],(void*)0,&g_51[1],&g_51[1]}},{{&g_51[0],&g_51[1],&g_51[1],&g_51[1],&g_51[0],&g_51[1],&g_51[2]}},{{&g_51[1],&g_51[1],&g_51[1],&g_51[1],&g_51[1],&g_51[0],&g_51[1]}},{{&g_51[2],&g_51[1],(void*)0,&g_51[0],&g_51[0],(void*)0,&g_51[1]}}};
static uint16_t **g_117 = &g_118[2][0][5];
static uint16_t ** const *g_116 = &g_117;
static const uint16_t *g_139 = &g_51[1];
static const uint16_t **g_138 = &g_139;
static const uint16_t *** const g_137 = &g_138;
static const uint16_t *** const *g_136 = &g_137;
static uint16_t ***g_142 = &g_117;
static uint16_t ****g_141[1] = {&g_142};
static int8_t g_159[5] = {0x38L,0x38L,0x38L,0x38L,0x38L};
static uint64_t g_167 = 0x6A622BFDE95A6F79LL;
static int32_t g_175[1] = {0xCDB0A0E1L};
static int32_t *g_174 = &g_175[0];
static uint32_t g_224 = 0x70E42B31L;
static uint32_t *g_229 = &g_50;
static uint32_t **g_228 = &g_229;
static uint8_t g_235[6][1][6] = {{{4UL,0xE9L,255UL,251UL,252UL,252UL}},{{251UL,252UL,252UL,251UL,255UL,0xE9L}},{{4UL,0x13L,0xFEL,0xE9L,0x24L,0x77L}},{{0x24L,255UL,248UL,255UL,0x24L,0x24L}},{{0x77L,0x13L,251UL,1UL,255UL,0xFEL}},{{0xFEL,252UL,0x13L,0x13L,252UL,0xFEL}}};
static int32_t g_237 = (-1L);
static struct S0 g_240[2][1] = {{{0x87BFL,0x98L}},{{0x87BFL,0x98L}}};
static int64_t g_343 = 0x5E9CBFC775A24C56LL;
static const uint16_t ***g_433 = &g_138;
static int32_t **g_449 = &g_174;
static int32_t ***g_448 = &g_449;
static uint64_t **g_473 = (void*)0;
static uint16_t ** const **g_497 = &g_116;
static union U3 *g_500 = &g_54;
static union U3 **g_499[1][4] = {{&g_500,&g_500,&g_500,&g_500}};
static uint8_t g_650 = 0x42L;
static union U1 g_681 = {0xAEL};
static const int32_t *g_684 = &g_175[0];
static union U1 *g_696[4][2][7] = {{{&g_55[1][2],&g_681,&g_55[0][2],(void*)0,(void*)0,&g_55[0][2],(void*)0},{&g_681,&g_681,&g_681,&g_681,(void*)0,&g_55[2][0],&g_681}},{{&g_55[0][2],&g_681,(void*)0,(void*)0,&g_681,&g_681,(void*)0},{&g_681,&g_681,&g_681,&g_55[0][2],&g_681,&g_55[0][2],&g_55[1][2]}},{{&g_681,&g_55[2][0],(void*)0,&g_681,(void*)0,&g_681,&g_55[0][0]},{&g_681,(void*)0,&g_55[2][0],&g_681,(void*)0,&g_55[0][2],&g_55[0][2]}},{{&g_55[0][2],&g_681,&g_681,&g_681,&g_55[0][2],&g_681,&g_55[0][2]},{(void*)0,(void*)0,&g_681,&g_55[0][2],&g_55[0][2],&g_55[2][0],&g_55[0][0]}}};
static union U1 **g_695[1] = {&g_696[2][1][1]};
static uint64_t g_702 = 0xDED29AECBD21FD16LL;
static int32_t *g_737 = &g_237;
static int16_t * const g_773[4][1] = {{&g_111},{&g_111},{&g_111},{&g_111}};
static int16_t * const *g_772[6][5][6] = {{{&g_773[1][0],&g_773[0][0],(void*)0,&g_773[1][0],&g_773[1][0],&g_773[1][0]},{&g_773[1][0],(void*)0,(void*)0,(void*)0,&g_773[1][0],&g_773[1][0]},{&g_773[3][0],&g_773[2][0],&g_773[1][0],&g_773[1][0],&g_773[2][0],&g_773[3][0]},{&g_773[1][0],&g_773[2][0],&g_773[3][0],&g_773[0][0],&g_773[1][0],(void*)0},{(void*)0,(void*)0,&g_773[1][0],&g_773[1][0],&g_773[1][0],(void*)0}},{{(void*)0,&g_773[0][0],&g_773[1][0],&g_773[0][0],&g_773[0][0],&g_773[3][0]},{&g_773[1][0],&g_773[1][0],&g_773[1][0],&g_773[1][0],&g_773[3][0],&g_773[3][0]},{&g_773[3][0],&g_773[0][0],&g_773[1][0],(void*)0,&g_773[3][0],(void*)0},{&g_773[1][0],&g_773[3][0],&g_773[1][0],&g_773[1][0],&g_773[3][0],(void*)0},{&g_773[1][0],&g_773[0][0],&g_773[3][0],&g_773[1][0],&g_773[3][0],&g_773[3][0]}},{{&g_773[1][0],&g_773[1][0],&g_773[1][0],&g_773[1][0],&g_773[0][0],&g_773[1][0]},{&g_773[1][0],&g_773[0][0],(void*)0,&g_773[1][0],&g_773[1][0],&g_773[1][0]},{&g_773[2][0],(void*)0,&g_773[3][0],&g_773[3][0],&g_773[1][0],(void*)0},{&g_773[3][0],&g_773[1][0],&g_773[1][0],&g_773[1][0],&g_773[1][0],&g_773[3][0]},{&g_773[1][0],&g_773[1][0],&g_773[3][0],&g_773[2][0],&g_773[1][0],&g_773[3][0]}},{{&g_773[3][0],(void*)0,&g_773[2][0],&g_773[3][0],&g_773[3][0],&g_773[3][0]},{&g_773[3][0],&g_773[1][0],&g_773[3][0],&g_773[2][0],(void*)0,&g_773[2][0]},{&g_773[1][0],&g_773[1][0],(void*)0,&g_773[1][0],(void*)0,&g_773[2][0]},{&g_773[3][0],(void*)0,&g_773[3][0],&g_773[3][0],&g_773[3][0],&g_773[3][0]},{&g_773[2][0],&g_773[0][0],&g_773[2][0],(void*)0,&g_773[3][0],&g_773[3][0]}},{{&g_773[3][0],(void*)0,&g_773[3][0],&g_773[2][0],(void*)0,&g_773[3][0]},{(void*)0,&g_773[1][0],&g_773[1][0],&g_773[2][0],(void*)0,(void*)0},{&g_773[3][0],&g_773[1][0],&g_773[3][0],(void*)0,&g_773[3][0],&g_773[1][0]},{&g_773[2][0],(void*)0,&g_773[3][0],&g_773[3][0],&g_773[1][0],(void*)0},{&g_773[3][0],&g_773[1][0],&g_773[1][0],&g_773[1][0],&g_773[1][0],&g_773[3][0]}},{{&g_773[1][0],&g_773[1][0],&g_773[3][0],&g_773[2][0],&g_773[1][0],&g_773[3][0]},{&g_773[3][0],(void*)0,&g_773[2][0],&g_773[3][0],&g_773[3][0],&g_773[3][0]},{&g_773[3][0],&g_773[1][0],&g_773[3][0],&g_773[2][0],(void*)0,&g_773[2][0]},{&g_773[1][0],&g_773[1][0],(void*)0,&g_773[1][0],(void*)0,&g_773[2][0]},{&g_773[3][0],(void*)0,&g_773[3][0],&g_773[3][0],&g_773[3][0],&g_773[3][0]}}};
static uint64_t *g_864 = &g_167;
static const int64_t g_882 = 0xE436F3323A438543LL;
static uint16_t g_939 = 65535UL;



static uint8_t  func_1(void);
static int32_t  func_2(uint64_t  p_3, int16_t  p_4, uint16_t  p_5, int32_t  p_6, uint8_t  p_7);
static const union U2  func_8(union U1  p_9);
static union U1  func_10(const union U1  p_11, int32_t  p_12, uint16_t  p_13);
static union U1  func_14(int16_t  p_15, union U1  p_16);
static union U1  func_18(uint8_t  p_19, struct S0  p_20, uint8_t  p_21);
static uint32_t  func_24(union U2  p_25, int32_t  p_26, int8_t  p_27);
static union U2  func_28(uint8_t  p_29, uint64_t  p_30, union U3  p_31, union U1  p_32);




static uint8_t  func_1(void)
{ 
    uint16_t l_17 = 0xC4D1L;
    uint32_t l_36 = 7UL;
    uint32_t *l_49 = &g_50;
    uint64_t *l_52 = &g_53;
    uint8_t l_227 = 0x87L;
    uint32_t l_252 = 1UL;
    int8_t l_809 = 1L;
    int32_t l_816 = (-1L);
    int32_t l_836 = 0L;
    int16_t l_857 = (-2L);
    uint32_t l_858[7][1] = {{0UL},{0xE629C867L},{0xE629C867L},{0UL},{0xE629C867L},{0xE629C867L},{0UL}};
    const int8_t l_894[3] = {0x87L,0x87L,0x87L};
    int16_t l_924 = 0x3429L;
    union U2 l_956 = {4294967295UL};
    int32_t l_967 = 0x05B2F04AL;
    int32_t l_1006 = 0x166F3F21L;
    int32_t l_1009 = (-7L);
    int32_t l_1014 = (-1L);
    int32_t l_1016 = 3L;
    int32_t l_1017 = 0x519FE442L;
    int32_t l_1018 = 0x536D9447L;
    int32_t l_1023 = 8L;
    int32_t l_1024 = 0xB5E13171L;
    int32_t l_1025 = (-7L);
    int32_t l_1026[2][4] = {{0x29D0067DL,0x29D0067DL,(-6L),0x29D0067DL},{0x29D0067DL,0xFAF89946L,0xFAF89946L,0x29D0067DL}};
    int i, j;
    return g_175[0];
}



static int32_t  func_2(uint64_t  p_3, int16_t  p_4, uint16_t  p_5, int32_t  p_6, uint8_t  p_7)
{ 
    int32_t *l_297 = &g_237;
    int32_t l_298 = 0x3D009266L;
    int32_t l_299 = 1L;
    int32_t *l_300 = &g_237;
    int32_t *l_301 = &l_299;
    int32_t *l_302 = (void*)0;
    int32_t l_303 = (-3L);
    int32_t *l_304 = &g_175[0];
    int32_t l_305 = 0x85AC97CBL;
    int32_t *l_306[4][3] = {{&l_299,&g_237,&l_299},{&l_299,&g_237,&l_299},{&l_299,&g_237,&l_299},{&l_299,&g_237,&l_299}};
    int32_t l_307 = (-8L);
    uint64_t l_308 = 0x59EB2A7DBF5C2DFBLL;
    int8_t * const l_311 = &g_159[2];
    int8_t *l_312 = (void*)0;
    uint64_t *l_314 = &l_308;
    uint64_t **l_313 = &l_314;
    int16_t *l_315[4] = {&g_111,&g_111,&g_111,&g_111};
    int16_t l_340[4][7] = {{0xB80DL,0x2E96L,0xB80DL,(-10L),(-3L),(-3L),(-10L)},{0xB80DL,0x2E96L,0xB80DL,(-10L),(-3L),(-3L),(-10L)},{0xB80DL,0x2E96L,0xB80DL,(-10L),(-3L),(-3L),(-10L)},{0xB80DL,0x2E96L,0xB80DL,(-10L),(-3L),(-3L),(-10L)}};
    uint64_t l_396 = 0xBA4886BE56A4DAE9LL;
    int64_t *l_408[4][7][4] = {{{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0}},{{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0}},{{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0}},{{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0},{&g_85,(void*)0,&g_85,(void*)0}}};
    int64_t * const *l_407 = &l_408[2][4][3];
    uint64_t l_409 = 0xF8E56C43B325822FLL;
    union U1 l_480 = {4L};
    struct S0 l_490 = {3UL,9L};
    union U2 *l_506 = &g_80;
    union U3 *l_534 = (void*)0;
    int64_t l_601 = 1L;
    uint16_t l_622 = 0xED18L;
    uint64_t l_677 = 2UL;
    int64_t l_705 = (-7L);
    uint64_t l_724[1][4][1];
    uint64_t l_730[1][1][7] = {{{0x87AB8E049DE3F994LL,18446744073709551612UL,0x87AB8E049DE3F994LL,0x87AB8E049DE3F994LL,18446744073709551612UL,0x87AB8E049DE3F994LL,0x87AB8E049DE3F994LL}}};
    union U3 ***l_771 = &g_499[0][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_724[i][j][k] = 1UL;
        }
    }
lbl_351:
    ++l_308;
    if ((((((p_7 , 0L) != 0xC7E7E5BDE789B663LL) , l_311) == (l_312 = l_312)) != (g_111 = (((*l_313) = &p_3) == &g_53))))
    { 
        int32_t l_321 = 1L;
        int8_t l_332 = 1L;
        union U3 l_336 = {0xC6L};
        int64_t *l_342 = &g_343;
        int32_t l_356 = (-1L);
        int32_t l_358 = 1L;
        int32_t l_359 = 0L;
        int32_t l_360 = 0x27324F62L;
        int32_t l_361 = 6L;
        uint16_t * const *l_372[6] = {&g_118[2][0][5],&g_118[2][0][5],(void*)0,&g_118[2][0][5],&g_118[2][0][5],(void*)0};
        uint16_t * const **l_371 = &l_372[0];
        uint16_t * const ***l_370 = &l_371;
        int i;
        for (g_85 = (-1); (g_85 <= (-23)); g_85--)
        { 
            uint32_t l_346 = 0xEF0DABAFL;
            uint32_t **l_352 = &g_229;
            int32_t l_357[6];
            int64_t *l_374 = &g_85;
            uint16_t ***l_395 = &g_117;
            int i;
            for (i = 0; i < 6; i++)
                l_357[i] = 0xDF2DC09EL;
            if (((safe_lshift_func_uint8_t_u_s((!((l_321 >= l_321) | ((g_240[0][0] , ((safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((((((-7L) < (0xA7L <= ((safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(l_332, 5)), (g_235[3][0][5] && l_321))) && (*g_229)), 15)) , p_4))) <= 255UL) , (void*)0) != (void*)0), p_5)) & 0x7D9A33A0L), g_175[0])) || g_235[4][0][2])) , p_4))), 4)) >= p_4))
            { 
                int32_t l_333[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_333[i] = (-1L);
                return l_333[2];
            }
            else
            { 
                int64_t **l_341 = (void*)0;
                int32_t l_344 = 0xD8614077L;
                int32_t l_345[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_345[i] = (-2L);
                (*l_297) &= ((*l_301) ^= (safe_lshift_func_uint8_t_u_u(((5L | ((l_336 , p_3) && (safe_mul_func_int8_t_s_s((+p_6), (l_340[3][1] == 4294967287UL))))) < ((l_342 = l_314) == l_314)), 6)));
                l_346++;
                for (l_346 = 22; (l_346 > 37); l_346 = safe_add_func_int8_t_s_s(l_346, 5))
                { 
                    uint32_t ***l_353 = &g_228;
                    uint32_t l_362 = 0xDA19FEDBL;
                    if (p_6)
                        goto lbl_351;
                    (*l_353) = l_352;
                    l_356 |= ((((0x1723920C041A955DLL || g_224) > 0UL) <= l_345[0]) > ((safe_lshift_func_int16_t_s_u((l_345[0] && (*l_300)), 5)) , (((((void*)0 == &g_175[0]) < 0x0AAEA3A5L) >= p_6) || g_167)));
                    ++l_362;
                    if (g_85)
                        goto lbl_351;
                }
            }
            for (g_54.f0 = 0; (g_54.f0 <= 0); g_54.f0 += 1)
            { 
                uint32_t *l_365 = &g_224;
                uint16_t * const ****l_373[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int32_t l_388 = 0L;
                int i, j;
                p_6 ^= ((((((*l_365)--) , g_55[0][2]) , ((safe_mul_func_int16_t_s_s(((4L != ((p_7 || ((((*l_301) = 0x3AE3C2AEL) , (l_370 = l_370)) != (void*)0)) || g_80.f1)) || p_5), g_54.f0)) || p_4)) , g_80.f0) ^ g_85);
                if ((((void*)0 != l_374) ^ (~g_167)))
                { 
                    int i, j;
                    l_306[(g_54.f0 + 1)][(g_54.f0 + 1)] = (g_55[0][1] , l_365);
                }
                else
                { 
                    return p_7;
                }
                if (p_6)
                    break;
                for (l_305 = 0; (l_305 <= 0); l_305 += 1)
                { 
                    int32_t l_381 = (-1L);
                    (*l_304) = ((~l_357[1]) || l_358);
                    (*l_300) &= ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_381, (((safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s(l_388, (safe_rshift_func_int16_t_s_u((p_4 = (~(safe_sub_func_int32_t_s_s((safe_unary_minus_func_int64_t_s((g_235[1][0][5] , (l_357[5] = 0x2043E40C70856A39LL)))), ((void*)0 == &p_5))))), 8)))), ((**l_352) ^= (((*g_136) == l_395) < l_388)))), p_5)) , (-1L)) && p_3))), p_5)) == p_5);
                }
            }
        }
    }
    else
    { 
        --l_396;
    }
    if ((safe_div_func_int64_t_s_s((((g_167 , (5UL && (((safe_mul_func_uint16_t_u_u(p_6, (safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_407 != &l_408[0][1][3]), (((g_111 = 0xAAD6L) , l_300) == l_304))), (*l_304))))) , 0UL) ^ 0xE2C3L))) , g_224) && 18446744073709551615UL), l_409)))
    { 
        uint16_t l_410[2];
        int16_t *l_438[1][4];
        int32_t l_440 = 0x345C4B84L;
        uint32_t *l_441[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_460 = 0x40954607L;
        uint16_t l_461 = 0UL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_410[i] = 0x9362L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_438[i][j] = &l_340[3][1];
        }
        for (g_50 = 0; (g_50 <= 0); g_50 += 1)
        { 
            uint64_t l_429 = 0xACE25433034EC305LL;
            int32_t l_430[6][7] = {{0x24B61C2BL,0x24B61C2BL,0x0B45DA27L,0x24B61C2BL,0x24B61C2BL,0x0B45DA27L,0x24B61C2BL},{0xE7B18CDEL,0L,0L,0xE7B18CDEL,0L,0L,0xE7B18CDEL},{0x0A92F456L,0x24B61C2BL,0x0A92F456L,0x0A92F456L,0x24B61C2BL,0x0A92F456L,0x0A92F456L},{0xE7B18CDEL,0xE7B18CDEL,0x1888E1F6L,0xE7B18CDEL,0xE7B18CDEL,0x1888E1F6L,0xE7B18CDEL},{0x24B61C2BL,0x0A92F456L,0x0A92F456L,0x24B61C2BL,0x0A92F456L,0x0A92F456L,0x24B61C2BL},{0L,0xE7B18CDEL,0L,0L,0xE7B18CDEL,0L,0L}};
            const int16_t *l_437 = (void*)0;
            const int16_t **l_436 = &l_437;
            int16_t **l_439[5];
            int32_t l_450 = (-10L);
            uint32_t l_454 = 0UL;
            union U3 *l_459 = &g_54;
            int i, j;
            for (i = 0; i < 5; i++)
                l_439[i] = &l_438[0][2];
            if (l_410[0])
                break;
            if (p_7)
                goto lbl_351;
            for (g_80.f1 = 0; (g_80.f1 <= 3); g_80.f1 += 1)
            { 
                int32_t l_427 = 0x26635AE4L;
                const uint16_t ***l_431 = &g_138;
                for (l_303 = 0; (l_303 >= 0); l_303 -= 1)
                { 
                    int32_t *l_428[5][7][3] = {{{&l_307,&l_307,(void*)0},{&l_307,&l_307,(void*)0},{&l_307,&l_307,&l_307},{&l_307,&l_307,(void*)0},{&l_307,&l_307,(void*)0},{&l_307,&l_307,&l_307},{&l_307,&l_307,(void*)0}},{{&l_307,&l_307,(void*)0},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307}},{{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307}},{{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307}},{{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307},{&l_307,&l_307,&l_307}}};
                    const uint16_t ****l_432[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i, j, k;
                    (*l_297) &= (0xCEL && (safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((((l_429 = (8UL == ((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(g_235[(l_303 + 1)][l_303][(g_80.f1 + 2)], (safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(g_235[(g_50 + 4)][l_303][(g_80.f1 + 2)], (p_4 >= (safe_lshift_func_uint8_t_u_u(p_5, 4))))) >= l_427), 0xEFL)))) <= 0xB5L), p_5)) == 0x94DCDECD84E8CED9LL))) , l_427) ^ l_430[0][0]), p_3)), g_55[0][2].f0)));
                    g_433 = l_431;
                    return p_7;
                }
            }
            l_430[0][0] |= (l_440 ^= ((p_6 & (((*l_436) = &g_111) != (l_438[0][1] = l_438[0][2]))) <= g_80.f1));
            for (l_409 = 0; (l_409 <= 0); l_409 += 1)
            { 
                int8_t l_451 = (-7L);
                l_430[0][0] ^= ((g_55[0][2] , (void*)0) != (p_4 , l_441[3]));
                for (l_308 = 0; (l_308 <= 0); l_308 += 1)
                { 
                    int32_t * const *l_447 = &l_306[0][0];
                    int32_t * const **l_446 = &l_447;
                    int32_t l_452 = 1L;
                    int32_t l_453[5];
                    union U3 *l_458 = &g_54;
                    union U3 **l_457[2];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_453[i] = (-1L);
                    for (i = 0; i < 2; i++)
                        l_457[i] = &l_458;
                    (*l_297) |= (((((l_441[0] != (void*)0) != g_235[(l_308 + 3)][l_409][(l_409 + 2)]) , (safe_mod_func_int16_t_s_s(((void*)0 != &g_235[4][0][2]), (safe_add_func_uint8_t_u_u((((l_446 != g_448) & 1L) | (*g_229)), 2L))))) <= l_450) , l_451);
                    (*g_449) = (void*)0;
                    ++l_454;
                    l_459 = (void*)0;
                    ++l_461;
                }
            }
        }
    }
    else
    { 
        int64_t l_464 = (-9L);
        int32_t l_465 = 0x6AF2D2B8L;
        int32_t l_466[2];
        uint8_t l_467 = 0xE6L;
        int8_t *l_485 = (void*)0;
        int8_t **l_486 = &l_312;
        uint8_t *l_487 = &g_235[4][0][2];
        union U1 l_491[6][3][5] = {{{{0xF6L},{0x2DL},{0L},{0xF6L},{0L}},{{0xF6L},{0xF6L},{0L},{0L},{0x52L}},{{0L},{0x52L},{0L},{0L},{0x52L}}},{{{0x52L},{0x2DL},{0L},{0x52L},{0L}},{{0L},{0x52L},{0L},{0x52L},{0L}},{{0L},{0xF6L},{0x2DL},{0L},{0xF6L}}},{{{0L},{0x2DL},{0x2DL},{0L},{0L}},{{0x52L},{0L},{0L},{0xF6L},{0xF6L}},{{0L},{0L},{0L},{0L},{0L}}},{{{0xF6L},{0x2DL},{0L},{0xF6L},{0L}},{{0xF6L},{0xF6L},{0L},{0L},{0x52L}},{{0L},{0x52L},{0L},{0L},{0x52L}}},{{{0x52L},{0x2DL},{0L},{0x52L},{0L}},{{0L},{0x52L},{0L},{0x52L},{0L}},{{0L},{0xF6L},{0x2DL},{0L},{0xF6L}}},{{{0L},{0x2DL},{0x2DL},{0L},{0L}},{{0x52L},{0L},{0L},{0xF6L},{0xF6L}},{{0L},{0L},{0L},{0L},{0L}}}};
        int32_t **l_502[3];
        uint32_t l_503 = 5UL;
        const union U3 *l_505 = &g_54;
        const union U3 **l_504 = &l_505;
        uint8_t *l_514 = &g_54.f0;
        uint32_t l_536[6][5][5] = {{{0x1A84A191L,1UL,0xECCE271CL,0xD5E21475L,8UL},{0xECCE271CL,18446744073709551615UL,0x5711508EL,0x1A84A191L,9UL},{0x1A84A191L,18446744073709551614UL,0x8D17BA57L,18446744073709551612UL,0xA79502D2L},{0x97454380L,0x0E094F55L,0xBFFC7F14L,0UL,18446744073709551612UL},{0xFC7F736DL,0UL,0UL,1UL,8UL}},{{0x8D17BA57L,0xD9003B1EL,0xA7B23D42L,0UL,0x97454380L},{0xECCE271CL,18446744073709551607UL,0xD97A231EL,18446744073709551615UL,0x97454380L},{18446744073709551608UL,1UL,18446744073709551607UL,18446744073709551615UL,8UL},{4UL,18446744073709551615UL,0xD28923FCL,0x8D17BA57L,0x324D81D2L},{0x329D218CL,4UL,4UL,0x329D218CL,0xBFFC7F14L}},{{18446744073709551615UL,8UL,0x324D81D2L,0x33DC338EL,4UL},{0xD5E21475L,0x0E094F55L,18446744073709551615UL,18446744073709551612UL,1UL},{1UL,0UL,0xA79502D2L,0x33DC338EL,1UL},{0x768666F7L,1UL,0UL,0x329D218CL,18446744073709551615UL},{0xD9003B1EL,0xD97A231EL,1UL,0x8D17BA57L,3UL}},{{0x1E31CB51L,0x324D81D2L,3UL,18446744073709551615UL,0xA79502D2L},{0xA79502D2L,1UL,0x5711508EL,18446744073709551615UL,0UL},{1UL,0x329D218CL,0x5711508EL,0UL,0x367CE884L},{8UL,0x367CE884L,3UL,1UL,0x1A84A191L},{1UL,3UL,1UL,1UL,1UL}},{{0UL,0UL,0UL,0x324D81D2L,1UL},{0x97454380L,18446744073709551614UL,0xA79502D2L,0x0E094F55L,0xE9603CDFL},{0xA8C38351L,0x34F8EBA3L,18446744073709551615UL,1UL,18446744073709551608UL},{18446744073709551612UL,18446744073709551614UL,0x324D81D2L,0UL,0xA8C38351L},{1UL,0UL,4UL,0xA8C38351L,6UL}},{{0x5711508EL,3UL,0xD28923FCL,1UL,0x768666F7L},{0x5D95338EL,0x367CE884L,18446744073709551607UL,18446744073709551615UL,0xECCE271CL},{18446744073709551614UL,0x329D218CL,0xD97A231EL,0xF798AB47L,1UL},{18446744073709551614UL,1UL,0xA7B23D42L,8UL,0UL},{0x5D95338EL,0x324D81D2L,0UL,0xA79502D2L,0xF798AB47L}}};
        int8_t l_600 = 4L;
        uint16_t l_602 = 1UL;
        int16_t * const l_615[4] = {&g_111,&g_111,&g_111,&g_111};
        union U1 *l_680[1];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_466[i] = 0x7F39E332L;
        for (i = 0; i < 3; i++)
            l_502[i] = &g_174;
        for (i = 0; i < 1; i++)
            l_680[i] = &g_681;
        ++l_467;
        (*l_300) = ((0UL != ((g_235[1][0][0] ^ (safe_rshift_func_uint16_t_u_s((~p_4), (((((g_473 == &l_314) | (safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(g_237, 7)) , ((l_480 , 255UL) != l_467)) , (*l_297)), (*g_229))), (-8L)))) > 0xEC6BD980E95B9818LL) && g_235[4][0][2]) < g_51[2])))) >= (*g_229))) ^ 0xAFL);
        if ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((p_3 & p_7) , l_485) == ((*l_486) = l_485)), (((*l_487) = (*l_300)) || (safe_lshift_func_uint8_t_u_u((l_490 , (l_491[3][1][1] , g_55[0][2].f0)), p_4))))), p_3)))
        { 
            union U2 *l_492 = &g_80;
            union U2 **l_493 = &l_492;
            uint16_t ** const **l_496[4][5][2] = {{{(void*)0,&g_116},{(void*)0,(void*)0},{(void*)0,&g_116},{(void*)0,&g_116},{&g_116,&g_116}},{{(void*)0,&g_116},{(void*)0,(void*)0},{(void*)0,&g_116},{(void*)0,&g_116},{&g_116,&g_116}},{{(void*)0,&g_116},{(void*)0,(void*)0},{(void*)0,&g_116},{(void*)0,&g_116},{&g_116,&g_116}},{{(void*)0,&g_116},{(void*)0,(void*)0},{(void*)0,&g_116},{(void*)0,&g_116},{&g_116,&g_116}}};
            uint16_t *****l_498 = &g_141[0];
            union U3 ***l_501 = &g_499[0][0];
            int i, j, k;
            (*l_493) = l_492;
            (*l_493) = ((safe_add_func_uint32_t_u_u(((g_497 = l_496[1][3][0]) != ((*l_498) = &g_142)), ((((*l_501) = g_499[0][1]) != (((((*g_500) , ((*g_448) = l_502[2])) != (void*)0) != ((((*l_311) |= g_55[0][2].f0) & l_503) <= g_51[1])) , l_504)) < 0xBB0D358DL))) , l_506);
            p_6 = p_3;
            (*g_449) = (((void*)0 != &p_7) , &p_6);
        }
        else
        { 
            return p_3;
        }
        if ((((!((g_111 , ((*l_311) = (((safe_lshift_func_uint8_t_u_s(((((((((*l_514) = (p_6 , (safe_mod_func_int8_t_s_s(((*l_304) && p_5), ((*l_487)--))))) > 3UL) <= 4294967295UL) && (((~(safe_add_func_int16_t_s_s(p_4, (*l_300)))) | p_6) != (-5L))) >= (*l_304)) , (***g_448)) && (*g_229)), 4)) ^ g_167) && (*l_300)))) | g_80.f1)) != g_240[1][0].f0) ^ (**g_228)))
        { 
            uint32_t l_522 = 0xD9265F9BL;
            union U2 l_525 = {4UL};
            int8_t l_526[7] = {0L,0L,0L,0L,0L,0L,0L};
            int i;
            l_526[2] &= (safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((g_159[4] &= (g_55[0][2] , p_4)), 1)) <= (l_522 ^ (((**g_228) && (safe_div_func_int32_t_s_s((***g_448), (**g_228)))) ^ (l_525 , p_7)))) >= g_240[1][0].f1), 5UL));
            (**g_448) = (*g_449);
        }
        else
        { 
            uint16_t l_556 = 65535UL;
            union U3 l_557[4][2] = {{{2UL},{0x83L}},{{2UL},{2UL}},{{0x83L},{2UL}},{{2UL},{0x83L}}};
            union U2 ** const l_568 = &l_506;
            int32_t l_573 = 0xC7728C5DL;
            int32_t l_579[2];
            uint8_t *l_590 = &g_235[1][0][4];
            int16_t l_647 = (-1L);
            uint16_t * const ***l_663 = (void*)0;
            uint16_t * const ****l_662 = &l_663;
            int64_t *l_676 = &g_343;
            int i, j;
            for (i = 0; i < 2; i++)
                l_579[i] = 0xC2C26A49L;
            if ((g_174 != (void*)0))
            { 
                int64_t l_533[1];
                union U3 *l_535 = &g_54;
                int i;
                for (i = 0; i < 1; i++)
                    l_533[i] = 0x7F938E9425D5BFFFLL;
                if ((((1UL ^ ((p_3 >= (0xB6L >= (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(g_235[4][0][2], l_533[0])), ((**g_448) != &p_6))))) == (-8L))) , 1L) && g_159[3]))
                { 
                    l_535 = l_534;
                }
                else
                { 
                    if (p_3)
                        goto lbl_351;
                    return l_536[1][1][4];
                }
                for (p_3 = (-29); (p_3 >= 15); ++p_3)
                { 
                    int16_t l_553 = (-1L);
                    uint32_t *l_555 = (void*)0;
                    uint32_t **l_554 = &l_555;
                    p_6 = ((~((*l_297) &= (((safe_mod_func_int32_t_s_s(((((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((g_80.f1 | ((safe_mul_func_uint16_t_u_u((((~(safe_rshift_func_uint16_t_u_s(((&g_33[0] == ((*l_554) = (func_18(p_4, g_240[1][0], (safe_rshift_func_int16_t_s_s((l_553 = g_80.f0), 12))) , &g_33[0]))) || g_240[1][0].f1), 6))) , g_240[1][0].f0) & g_167), l_556)) | g_240[1][0].f1)), p_5)) , p_7) || 3L), 4294967288UL)) ^ 1L) , l_557[1][1]) , l_533[0]), 2L)) , l_557[1][1].f0) && l_533[0]))) > p_5);
                }
                return l_533[0];
            }
            else
            { 
                int32_t l_575 = (-1L);
                for (p_7 = 21; (p_7 < 17); p_7--)
                { 
                    union U2 **l_567[1];
                    union U2 ***l_566 = &l_567[0];
                    uint16_t l_574[2][6][1];
                    int32_t l_583 = (-9L);
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_567[i] = &l_506;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 6; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_574[i][j][k] = 0x543AL;
                        }
                    }
                    l_575 = (safe_mul_func_uint16_t_u_u((((p_5 ^ (safe_sub_func_int8_t_s_s(p_4, g_80.f1))) == (safe_div_func_uint8_t_u_u(((((*l_566) = &l_506) == l_568) >= (((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(p_3, 4)), 249UL)) , 0x74L) ^ p_6)), l_573))) > p_7), l_574[1][4][0]));
                }
                (**g_449) = p_5;
                l_579[0] &= (*g_174);
            }
            (***g_448) &= (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((l_590 != &p_7), (safe_rshift_func_int16_t_s_s((~(((void*)0 == &g_228) >= p_5)), (safe_div_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s(((*l_311) &= ((&l_311 != &l_485) ^ 0xAD74E89623E7BD9BLL)), g_235[2][0][0])) > g_55[0][2].f0) && p_4), p_7)))))), g_240[1][0].f1)), g_240[1][0].f1));
            if ((*l_301))
            { 
                int16_t l_598 = 1L;
                int32_t l_599[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
                struct S0 l_609 = {0x847DL,0xE6L};
                uint16_t ***l_613 = (void*)0;
                int8_t l_621 = (-5L);
                uint16_t *l_666 = &l_602;
                union U1 *l_678 = &l_491[3][1][1];
                int32_t *l_682[3][2] = {{&l_579[0],&l_579[0]},{&l_579[0],&l_579[0]},{&l_579[0],&l_579[0]}};
                int i, j;
lbl_645:
                l_602--;
                if ((p_6 , 3L))
                { 
                    uint16_t l_612 = 0UL;
                    uint16_t ***l_614 = &g_117;
                    int32_t l_616 = 0L;
                    int32_t l_617 = (-1L);
                    int32_t l_618 = 0x7AB1A51EL;
                    int32_t l_619[2];
                    int8_t l_620 = 0x1EL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_619[i] = 2L;
                    (*l_304) &= ((g_237 , ((((((***g_448) ^= (((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((l_609 , ((((safe_mul_func_int16_t_s_s((l_612 == ((l_614 = l_613) != (((*l_297) |= (l_490 , (((*g_500) = (*l_505)) , l_557[1][1].f0))) , (void*)0))), l_599[4])) <= p_4) , &p_4) == l_615[3])) , p_3), p_7)), l_573)) == 0UL) || 65535UL)) | l_599[3]) & p_7) & p_5) < 0x25568DCDD709E06FLL)) == p_5);
                    l_622++;
                }
                else
                { 
                    uint16_t l_625 = 0UL;
                    uint32_t *l_641 = &g_33[0];
                    uint32_t **l_640 = &l_641;
                    int8_t *l_644 = &l_600;
                    int32_t l_646 = 0x76C65502L;
                    int32_t l_648 = (-1L);
                    int32_t l_649[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_649[i] = (-8L);
                    --l_625;
                    (*l_304) |= ((***g_448) = ((l_556 , (safe_add_func_uint32_t_u_u(l_599[4], (!((((((safe_mod_func_int16_t_s_s((((p_6 == ((p_5 ^= 8UL) == (safe_mul_func_uint16_t_u_u((+(((safe_add_func_uint32_t_u_u((((((*l_640) = &l_536[1][3][2]) == (void*)0) || ((safe_div_func_int8_t_s_s(((*l_644) ^= (g_159[0] &= ((p_7 && l_557[1][1].f0) >= 0xB3F396E55328DF5CLL))), l_557[1][1].f0)) || (*l_301))) && p_4), p_4)) ^ (*l_301)) == g_240[1][0].f0)), p_3)))) >= (*g_229)) > (**g_228)), p_7)) <= l_598) , p_5) , p_4) | p_6) & l_579[0]))))) | 18446744073709551615UL));
                    if (l_308)
                        goto lbl_645;
                    ++g_650;
                }
                if (((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((~(*l_301)), (1L ^ ((void*)0 == l_662)))), (safe_lshift_func_uint16_t_u_u(((*l_666) &= l_556), 4)))), ((!((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((p_5 = p_3), (((((((safe_div_func_uint16_t_u_u(((void*)0 == l_676), l_557[1][1].f0)) , l_647) , l_677) , p_6) < l_579[0]) <= (-1L)) <= g_33[0]))) <= l_557[1][1].f0), (*l_304))), g_51[1])) < (-5L))) && l_599[3]))), 1)) <= 1UL))
                { 
                    union U1 **l_679 = &l_678;
                    const int32_t *l_683 = (void*)0;
                    l_680[0] = ((*l_679) = l_678);
                    (**g_448) = l_682[1][1];
                    (*g_449) = (**g_448);
                    g_684 = l_683;
                }
                else
                { 
                    uint8_t l_691 = 0x6FL;
                    (*l_304) = p_6;
                    g_684 = (l_682[1][1] = ((**g_448) = &p_6));
                    (*l_297) |= (safe_mod_func_int8_t_s_s(p_4, (*l_301)));
                    (**g_449) ^= ((safe_add_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u((&l_467 != (void*)0), l_691)) < (+(safe_mod_func_uint8_t_u_u(((void*)0 != g_695[0]), g_167)))) >= ((*l_301) |= (0x1E6EL != p_4))), g_111)) , 0xF4ED0ADFL);
                }
                (*g_449) = (*g_449);
            }
            else
            { 
                int32_t l_699 = (-1L);
                (*l_568) = &g_80;
                for (l_298 = 11; (l_298 > (-21)); l_298 = safe_sub_func_uint16_t_u_u(l_298, 1))
                { 
                    int16_t l_700[3];
                    int32_t l_701 = 0x4FEB08FDL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_700[i] = (-6L);
                    --g_702;
                    return l_705;
                }
                if (((safe_unary_minus_func_uint8_t_u(1UL)) && 0x45L))
                { 
                    int32_t l_709[3];
                    uint16_t *l_710 = &l_556;
                    uint16_t l_713 = 0xD1A0L;
                    int32_t l_723 = 0x9AE24239L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_709[i] = 0xB61C2CD9L;
                    (*l_304) = ((safe_add_func_uint32_t_u_u(0x6535AFA1L, (l_699 < ((*l_710) = l_709[1])))) & ((safe_mod_func_int16_t_s_s(l_713, (safe_lshift_func_uint8_t_u_s((((**l_313) = (p_5 >= (safe_mod_func_int16_t_s_s((g_111 |= ((safe_div_func_uint16_t_u_u((*l_300), (l_723 = ((+(safe_lshift_func_uint16_t_u_u(((((0x58L & l_699) & 18446744073709551609UL) < 0UL) == p_7), 4))) & 1UL)))) < l_579[0])), l_699)))) >= 0UL), g_80.f1)))) || p_4));
                    if (l_490.f1)
                        goto lbl_727;
lbl_727:
                    l_724[0][0][0]--;
                    p_6 ^= (p_4 == ((safe_rshift_func_int8_t_s_s(l_709[1], 3)) && l_699));
                }
                else
                { 
                    (*l_297) = (l_730[0][0][6] = p_7);
                    (*l_300) |= p_4;
                    (*g_174) = (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_7, 6)), (++(*l_590))));
                }
                (*g_449) = g_737;
            }
            for (g_54.f0 = 15; (g_54.f0 != 6); g_54.f0 = safe_sub_func_int16_t_s_s(g_54.f0, 9))
            { 
                uint32_t l_759 = 0xC5DC7050L;
                int64_t * const l_761 = &g_85;
                uint32_t l_762 = 0UL;
                union U3 l_768 = {1UL};
                struct S0 l_770 = {0x65A3L,0x66L};
                for (p_5 = 0; (p_5 <= 1); p_5 += 1)
                { 
                    union U3 l_744 = {247UL};
                    int32_t l_756 = 0xA90ACD29L;
                    int64_t *l_760 = &g_343;
                    int32_t l_763 = (-1L);
                    (*g_737) ^= 0x04410154L;
                    l_763 = (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((l_744 , (l_556 || (p_7 == (safe_rshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((~(safe_lshift_func_uint8_t_u_u((l_756 ^= p_5), (+0x43E0L)))), p_4)) & ((safe_unary_minus_func_uint16_t_u(((1UL >= 0xC29FC7257DC69299LL) | l_579[0]))) & 1L)), l_759)), (-3L))) , l_760) != l_761), g_159[2]))))), l_762)), p_5));
                    return p_3;
                }
                (*l_301) &= ((*g_737) &= (safe_lshift_func_int16_t_s_u((((((safe_rshift_func_uint8_t_u_s(((**g_228) || 0L), 6)) & ((l_768 , ((~(p_3 < (p_7 <= ((l_770 , g_240[0][0]) , g_159[4])))) , p_3)) <= 4294967295UL)) & 0xC7CAL) != (-1L)) >= g_224), p_6)));
            }
            (*g_737) = (&l_504 != l_771);
        }
    }
    return (*g_737);
}



static const union U2  func_8(union U1  p_9)
{ 
    int8_t l_286 = 0x6BL;
    int16_t *l_287[4][4] = {{&g_111,&g_111,&g_111,&g_111},{&g_111,&g_111,&g_111,&g_111},{&g_111,&g_111,&g_111,&g_111},{&g_111,&g_111,&g_111,&g_111}};
    int16_t *l_288 = &g_111;
    struct S0 l_291 = {0x43CFL,0xB3L};
    uint32_t l_294 = 4294967294UL;
    int32_t *l_295[6][1];
    const union U2 l_296 = {0xBCAD0B6BL};
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_295[i][j] = &g_237;
    }
    g_175[0] = l_286;
    g_237 ^= ((l_287[1][3] == l_288) >= ((((l_291 , l_291.f1) & ((safe_rshift_func_int16_t_s_s((g_175[0] > (l_291.f0 | l_294)), g_159[0])) < 0x29A9D7D5A0AE6265LL)) | 0x3B29E0AFL) && (**g_228)));
    return l_296;
}



static union U1  func_10(const union U1  p_11, int32_t  p_12, uint16_t  p_13)
{ 
    union U3 *l_253 = &g_54;
    union U2 l_258 = {0x9FC25823L};
    int32_t **l_259 = &g_174;
    int32_t **l_261 = &g_174;
    int32_t ***l_260 = &l_261;
    uint8_t *l_266 = (void*)0;
    uint8_t *l_267 = (void*)0;
    uint8_t *l_268 = &g_235[2][0][5];
    uint64_t l_269 = 0x36BC6E75ED7DA01ELL;
    uint16_t *l_274 = (void*)0;
    int16_t *l_279[3][6][5] = {{{&g_111,&g_111,&g_111,(void*)0,(void*)0},{(void*)0,(void*)0,&g_111,&g_111,&g_111},{&g_111,&g_111,&g_111,(void*)0,(void*)0},{&g_111,(void*)0,&g_111,&g_111,&g_111},{&g_111,&g_111,&g_111,(void*)0,(void*)0},{(void*)0,(void*)0,&g_111,&g_111,&g_111}},{{&g_111,&g_111,&g_111,(void*)0,(void*)0},{&g_111,(void*)0,&g_111,&g_111,&g_111},{&g_111,&g_111,&g_111,(void*)0,(void*)0},{(void*)0,(void*)0,&g_111,&g_111,&g_111},{&g_111,&g_111,&g_111,(void*)0,(void*)0},{&g_111,(void*)0,&g_111,&g_111,&g_111}},{{&g_111,&g_111,&g_111,(void*)0,(void*)0},{(void*)0,(void*)0,&g_111,&g_111,&g_111},{&g_111,&g_111,&g_111,(void*)0,(void*)0},{&g_111,(void*)0,&g_111,&g_111,&g_111},{&g_111,&g_111,&g_111,(void*)0,(void*)0},{(void*)0,(void*)0,&g_111,&g_111,&g_111}}};
    int32_t l_280[3][2];
    uint16_t * const *l_283 = &g_118[0][0][1];
    uint16_t * const **l_282[7] = {&l_283,&l_283,&l_283,&l_283,&l_283,&l_283,&l_283};
    uint16_t * const ***l_281 = &l_282[2];
    int64_t *l_284 = &g_85;
    union U1 l_285[2][6][1] = {{{{0xCCL}},{{1L}},{{0xCCL}},{{1L}},{{0xCCL}},{{1L}}},{{{0xCCL}},{{1L}},{{0xCCL}},{{1L}},{{0xCCL}},{{1L}}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_280[i][j] = 1L;
    }
    l_253 = l_253;
    l_269 = (((safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s((((((((*l_253) = (*l_253)) , l_258) , l_259) != ((*l_260) = l_259)) & g_159[1]) , g_53), (((safe_add_func_uint8_t_u_u(((*l_268) &= (safe_lshift_func_int8_t_s_s((g_51[1] == 246UL), 4))), p_11.f0)) < g_111) || g_111))) | 0x69ADE63D16F92007LL), g_237)) != p_13) > p_12);
    (**l_260) = &p_12;
    (**l_259) = (((*l_268) |= ((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_274 == (void*)0), (((*l_284) &= (safe_add_func_uint8_t_u_u(((((safe_sub_func_int64_t_s_s(g_237, (((**l_259) ^ (l_280[0][1] = 1L)) ^ (l_281 == (void*)0)))) == p_13) & g_224) == p_13), g_167))) != 1UL))), p_11.f0)) > 0x0D820224L)) & (**l_261));
    (**l_260) = (*l_259);
    return l_285[1][0][0];
}



static union U1  func_14(int16_t  p_15, union U1  p_16)
{ 
    uint32_t *l_241 = &g_50;
    int32_t l_242 = 0x6BE4A546L;
    int32_t l_248 = (-5L);
    int32_t *l_249 = &g_175[0];
    union U1 l_251 = {0x88L};
    (*l_249) ^= (((((*g_228) = l_241) == &g_50) == g_240[1][0].f0) < (((l_242 < (((1UL | ((p_16.f0 || (l_248 = (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((!0xDBL) == g_33[0]), l_242)), l_242)))) > p_16.f0)) == 0x78FCL) != p_16.f0)) == l_242) > l_242));
    (*l_249) |= (+0xE2CA5F56C5408E81LL);
    return l_251;
}



static union U1  func_18(uint8_t  p_19, struct S0  p_20, uint8_t  p_21)
{ 
    for (g_50 = 0; (g_50 <= 4); g_50 += 1)
    { 
        g_174 = &g_237;
    }
    return g_55[2][1];
}



static uint32_t  func_24(union U2  p_25, int32_t  p_26, int8_t  p_27)
{ 
    struct S0 l_232 = {9UL,6L};
    uint8_t *l_233 = &g_54.f0;
    uint8_t *l_234 = &g_235[4][0][2];
    uint32_t **l_236 = (void*)0;
    int32_t l_238 = 4L;
    int32_t *l_239[1][7] = {{&g_175[0],(void*)0,(void*)0,&g_175[0],(void*)0,(void*)0,&g_175[0]}};
    int i, j;
    g_175[0] = ((((g_159[4] , g_228) == (void*)0) | p_26) & (safe_mul_func_uint16_t_u_u((g_237 &= (((*l_234) &= (l_232 , ((*l_233) &= l_232.f0))) >= (((p_25.f0 , l_236) == (void*)0) != 0x06L))), l_238)));
    return p_27;
}



static union U2  func_28(uint8_t  p_29, uint64_t  p_30, union U3  p_31, union U1  p_32)
{ 
    int64_t l_64 = 1L;
    uint32_t *l_71 = &g_50;
    union U3 l_76 = {0xE0L};
    int16_t l_77 = 0xBF64L;
    uint16_t *l_78 = &g_51[1];
    int32_t l_79 = (-7L);
    int32_t *l_126[2];
    int i;
    for (i = 0; i < 2; i++)
        l_126[i] = &l_79;
    if ((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u((0xD230L <= (safe_sub_func_int16_t_s_s(g_50, ((*l_78) = (((p_30 , (safe_sub_func_int16_t_s_s((((l_64 >= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(((void*)0 == l_71), (safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((l_76 , l_77), l_77)), 1)))), g_33[0])), p_31.f0))) & 0x1BD0L) <= l_64), l_64))) || p_32.f0) || 0xFDE0027488F57543LL))))), l_77)) <= p_32.f0), 7)))
    { 
        l_79 ^= ((0x74ABL && g_50) & 5UL);
        return g_80;
    }
    else
    { 
        int32_t *l_81 = &l_79;
        struct S0 l_102 = {0x4030L,0x45L};
        uint16_t **l_109 = &l_78;
        int32_t l_122[4] = {(-1L),(-1L),(-1L),(-1L)};
        const uint32_t l_205[4][6] = {{0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L},{0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L},{0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L},{0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L,0x8E8C8139L}};
        int i, j;
        (*l_81) = g_51[1];
        if ((*l_81))
        { 
            uint64_t *l_84 = &g_53;
            uint16_t *l_89 = &g_51[2];
            uint16_t **l_88 = &l_89;
            int32_t l_110 = (-1L);
            const uint16_t *** const **l_140 = &g_136;
            uint16_t *****l_143 = &g_141[0];
            uint32_t **l_153[1];
            uint16_t l_184 = 0x822CL;
            int16_t l_212 = 0x6412L;
            union U2 l_225[5] = {{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL}};
            int i;
            for (i = 0; i < 1; i++)
                l_153[i] = &l_71;
            g_85 &= (((safe_div_func_uint64_t_u_u(((*l_84) ^= (0x7957L ^ (*l_81))), g_51[2])) , l_78) != (void*)0);
lbl_127:
            if ((g_111 = (safe_mul_func_uint16_t_u_u(((l_78 != ((*l_88) = &g_51[2])) >= (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_64, (((safe_mod_func_uint64_t_u_u((g_53--), ((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((l_102 , (safe_div_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s(p_29, (safe_sub_func_int32_t_s_s((((g_80.f1 == (g_85 , (*l_81))) , (void*)0) == l_109), l_77)))) & l_110), 0xD3A61860F42E901CLL))), 3)), 0xD34DB645L)) ^ p_31.f0))) < (*l_81)) | 0L))), g_33[0]))), 0x980DL))))
            { 
                uint16_t ** const *l_114 = (void*)0;
                for (g_111 = 21; (g_111 >= 14); g_111 = safe_sub_func_int16_t_s_s(g_111, 2))
                { 
                    uint16_t ** const **l_115[4][6][6] = {{{(void*)0,&l_114,&l_114,&l_114,(void*)0,&l_114},{&l_114,&l_114,&l_114,(void*)0,(void*)0,(void*)0},{&l_114,&l_114,(void*)0,&l_114,(void*)0,&l_114},{(void*)0,&l_114,&l_114,(void*)0,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114,(void*)0},{&l_114,&l_114,(void*)0,&l_114,&l_114,&l_114}},{{(void*)0,&l_114,(void*)0,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,(void*)0,&l_114,&l_114},{&l_114,&l_114,&l_114,(void*)0,(void*)0,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114,(void*)0},{(void*)0,&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,(void*)0,&l_114,&l_114,&l_114,(void*)0}},{{&l_114,&l_114,&l_114,(void*)0,&l_114,&l_114},{(void*)0,&l_114,&l_114,&l_114,(void*)0,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,(void*)0,&l_114,&l_114,&l_114},{&l_114,(void*)0,(void*)0,&l_114,&l_114,(void*)0},{&l_114,&l_114,&l_114,&l_114,&l_114,&l_114}},{{&l_114,&l_114,&l_114,&l_114,(void*)0,&l_114},{&l_114,&l_114,(void*)0,&l_114,&l_114,&l_114},{(void*)0,&l_114,&l_114,(void*)0,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114,(void*)0},{&l_114,&l_114,(void*)0,&l_114,&l_114,&l_114},{(void*)0,&l_114,(void*)0,&l_114,&l_114,&l_114}}};
                    int i, j, k;
                    g_116 = l_114;
                }
                if (p_31.f0)
                    goto lbl_127;
                for (l_79 = (-12); (l_79 >= 24); ++l_79)
                { 
                    int32_t *l_121 = (void*)0;
                    int32_t *l_123 = &l_122[0];
                    l_122[1] &= l_77;
                    (*l_123) = l_110;
                    (*l_123) = p_32.f0;
                }
            }
            else
            { 
                int32_t *l_124 = &l_79;
                int32_t **l_125[1][3][1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_125[i][j][k] = (void*)0;
                    }
                }
                l_126[0] = l_124;
            }
            for (l_110 = (-18); (l_110 > 4); l_110 = safe_add_func_int64_t_s_s(l_110, 4))
            { 
                return g_80;
            }
            if ((safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_53 , g_51[1]), ((((*l_140) = g_136) == ((*l_143) = g_141[0])) & ((g_51[0] , (safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((+((g_50 |= (safe_rshift_func_uint16_t_u_s((((l_71 = l_126[0]) != (((void*)0 != l_126[0]) , (void*)0)) , 0x669EL), 2))) , g_54.f0)) > (***g_137)), g_80.f1)) <= g_33[0]), (-1L))) < (*l_81)), g_51[1]))) , g_54.f0)))), p_29)), 1L)))
            { 
                const uint16_t *l_154[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_157[3];
                int64_t *l_158 = &g_85;
                uint64_t **l_168[5][1];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_157[i] = (-1L);
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_168[i][j] = (void*)0;
                }
                g_159[4] = (((*l_158) = (0x5C24L & (((l_110 , (((void*)0 == l_154[3]) <= (*l_81))) && (safe_mod_func_uint32_t_u_u((l_157[1] = g_80.f0), 0x88A0B6D6L))) || g_33[0]))) ^ 0x7B4F3EC9324971EDLL);
                g_167 |= ((65535UL < (safe_mul_func_int16_t_s_s(g_54.f0, p_32.f0))) , ((((****l_140) = (void*)0) == (*l_109)) != ((g_33[0] >= (~((safe_sub_func_uint32_t_u_u(((((*l_84) = ((&g_85 != &g_85) >= 0xB0L)) >= g_159[4]) && p_32.f0), 0x5F90F013L)) || 4294967295UL))) >= p_31.f0)));
                l_168[1][0] = l_168[4][0];
                for (l_77 = 18; (l_77 == (-21)); l_77 = safe_sub_func_int8_t_s_s(l_77, 7))
                { 
                    union U2 l_171 = {4294967295UL};
                    return l_171;
                }
            }
            else
            { 
                int64_t l_182 = 0x93F6A8FE63917519LL;
                int32_t l_183 = (-1L);
                int64_t *l_208 = &l_64;
                uint16_t ****l_209[5] = {&g_142,&g_142,&g_142,&g_142,&g_142};
                int8_t *l_223 = (void*)0;
                int i;
                if ((l_110 = p_29))
                { 
                    const uint16_t ***l_173 = &g_138;
                    const uint16_t ****l_172 = &l_173;
                    (*l_172) = (**l_140);
                    return g_80;
                }
                else
                { 
                    uint32_t l_180 = 0UL;
                    int32_t **l_181 = &l_81;
                    g_174 = &l_122[1];
                    if (g_54.f0)
                        goto lbl_127;
                    (*g_174) = 0x84FA51A1L;
                    (*g_174) ^= (safe_mul_func_int8_t_s_s((p_29 >= 0x7BDDL), (safe_div_func_uint32_t_u_u((g_159[0] > (0x97937101L <= (l_180 >= g_85))), (l_110 | 0UL)))));
                    (*l_181) = (void*)0;
                }
                if (l_76.f0)
                    goto lbl_210;
                --l_184;
                (*g_174) = (safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((((*l_71) = ((void*)0 != &g_50)) < (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_29, (safe_mod_func_int32_t_s_s(((l_183 = (((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((((l_205[1][4] ^ (-7L)) <= (safe_add_func_int64_t_s_s(p_29, ((*l_208) = ((p_32.f0 <= p_29) <= 18446744073709551615UL))))) , g_33[0]) | p_31.f0), 7)) == p_31.f0), g_33[0])) == p_32.f0) == p_31.f0)) , 0xD27B0B2CL), (*g_174))))), 0xD4D8L))) >= 0xA8543E80L), l_182)) || (-2L)) & 5L), p_32.f0)) , l_110), p_29)) ^ p_32.f0), 7));
lbl_210:
                (*l_143) = l_209[1];
                g_224 &= (+(((l_212 | (((safe_rshift_func_int16_t_s_s((g_111 = (safe_div_func_uint64_t_u_u(((((((safe_mul_func_int8_t_s_s((l_183 = (0xB327L || (safe_mul_func_uint8_t_u_u((((void*)0 != &l_183) && 0L), (((((*g_139) <= 1UL) & 0L) ^ p_29) | 1UL))))), (-1L))) > 0x3BDEL) < p_29) , 0L) == g_85) != p_31.f0), l_182))), g_175[0])) > g_33[0]) == 0UL)) ^ 0x6E06L) != 1UL));
            }
            return l_225[3];
        }
        else
        { 
            union U2 l_226 = {1UL};
            return l_226;
        }
    }
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);

    }
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_51[i], "g_51[i]", print_hash_value);

    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_55[i][j].f0, "g_55[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_80.f1, "g_80.f1", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_159[i], "g_159[i]", print_hash_value);

    }
    transparent_crc(g_167, "g_167", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_175[i], "g_175[i]", print_hash_value);

    }
    transparent_crc(g_224, "g_224", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_235[i][j][k], "g_235[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_237, "g_237", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_240[i][j].f0, "g_240[i][j].f0", print_hash_value);
            transparent_crc(g_240[i][j].f1, "g_240[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_681.f0, "g_681.f0", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_882, "g_882", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
