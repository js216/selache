// SPDX-License-Identifier: MIT
// cctest_csmith_f48d90c2.c --- cctest case csmith_f48d90c2 (csmith seed 4102918338)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x629a60d4 */
/* @exp_ticks 0x6943 */

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

// Options:   -s 4102918338 -o /tmp/csmith_gen_ly04l6hc/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   int8_t  f1;
};

union U1 {
   uint32_t  f0;
   uint8_t  f1;
};

union U2 {
   const int16_t  f0;
   const uint32_t  f1;
};


static int32_t g_2[4][5] = {{(-1L),6L,6L,(-1L),(-7L)},{(-1L),(-1L),1L,1L,(-1L)},{(-7L),6L,1L,0x3AD3B315L,0x3AD3B315L},{6L,(-7L),6L,1L,0x3AD3B315L}};
static int32_t g_6 = 0x7B5C6EFFL;
static int32_t g_7 = (-1L);
static int32_t g_9 = (-9L);
static uint32_t g_11[3] = {4UL,4UL,4UL};
static int32_t g_14 = 0xA88ACC16L;
static uint64_t g_15[2] = {9UL,9UL};
static uint16_t g_19 = 0x9E8BL;
static int32_t g_53 = 0xF33464EBL;
static struct S0 g_54 = {0xAAE11E54L,5L};
static uint16_t g_57 = 0xCBEBL;
static uint16_t *g_56[2] = {&g_57,&g_57};
static int16_t g_69 = 0x1867L;
static uint32_t g_84 = 4294967295UL;
static int16_t g_108 = 0x2E96L;
static uint32_t g_113 = 0xD0622311L;
static int32_t g_118[2] = {1L,1L};
static int16_t g_126 = 0x0924L;
static uint32_t g_133 = 4294967288UL;
static union U1 g_150[6] = {{0UL},{1UL},{1UL},{0UL},{1UL},{1UL}};
static uint32_t g_183[4][3] = {{0UL,0xA7ED1F3AL,0x8FF1440BL},{0x078A46E2L,0xA7ED1F3AL,0x078A46E2L},{0xD9A2E631L,0UL,0x8FF1440BL},{0xD9A2E631L,0xD9A2E631L,0x078A46E2L}};
static union U2 g_201 = {0x0E58L};
static int32_t g_229 = (-2L);
static struct S0 *g_241 = (void*)0;
static struct S0 g_249 = {0x583A62ACL,-1L};
static uint8_t *g_267 = &g_150[1].f1;
static uint8_t *g_269 = &g_150[1].f1;
static int16_t g_299 = 1L;
static int32_t g_350 = (-8L);
static int64_t g_366 = 9L;
static uint32_t g_402 = 0x9095BCCDL;
static uint8_t ****g_438[7][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
static int32_t g_443 = 0x54B2D63DL;
static int16_t **g_506 = (void*)0;
static const int64_t g_524 = 0xEFCA360F20BAAA31LL;
static const int64_t *g_523 = &g_524;
static int32_t *g_530 = (void*)0;
static union U2 g_588 = {0L};
static uint16_t g_623 = 9UL;
static uint32_t g_633 = 0x5ECF91D7L;
static int8_t *g_683 = &g_249.f1;
static int8_t **g_682 = &g_683;
static int32_t g_820 = 0L;
static uint64_t g_845 = 0xAC4927A11567ADD8LL;
static uint64_t g_847 = 3UL;
static union U2 g_856[1] = {{0xB654L}};
static union U2 *g_855 = &g_856[0];
static struct S0 *g_913 = &g_249;
static struct S0 *g_914 = &g_54;
static uint16_t *g_956 = &g_57;
static uint8_t **g_1010 = &g_267;
static uint8_t ***g_1009 = &g_1010;
static uint8_t *** const *g_1008 = &g_1009;
static union U2 g_1114 = {1L};
static int64_t *g_1319 = &g_366;
static int64_t * const *g_1318[3] = {&g_1319,&g_1319,&g_1319};
static int64_t * const **g_1317 = &g_1318[2];
static uint32_t g_1351 = 5UL;
static struct S0 **g_1426 = (void*)0;
static struct S0 *** const g_1425 = &g_1426;
static int32_t *g_1458 = (void*)0;
static int64_t **g_1464 = &g_1319;
static uint8_t *g_1492 = &g_150[1].f1;
static uint8_t ** const g_1491 = &g_1492;
static uint8_t ** const * const g_1490 = &g_1491;
static uint8_t ** const * const *g_1489[1][3] = {{&g_1490,&g_1490,&g_1490}};
static uint8_t ** const * const **g_1488 = &g_1489[0][2];
static int32_t g_1510[7][7] = {{0xD3FC738CL,0xEA3053D4L,0xD3FC738CL,(-3L),0x758EC5D9L,(-3L),0xD3FC738CL},{0xEA16BE3FL,0xEA16BE3FL,0x9DFB602CL,0x85E36F05L,0xEA16BE3FL,(-1L),0x85E36F05L},{4L,(-3L),0L,0xEA3053D4L,0L,(-3L),4L},{0L,0x85E36F05L,0x9BA731BBL,0L,0xEA16BE3FL,0x9BA731BBL,0x9BA731BBL},{0x758EC5D9L,0xEA3053D4L,(-10L),0xEA3053D4L,0x758EC5D9L,0xB9FDF16BL,0x758EC5D9L},{0xEA16BE3FL,0L,0x9BA731BBL,0x85E36F05L,0L,0L,0x85E36F05L},{0L,0xEA3053D4L,0L,(-3L),4L,(-3L),0L}};
static uint8_t * const ***g_1531 = (void*)0;
static uint64_t *g_1625 = &g_845;
static uint64_t **g_1624[4][4][1] = {{{(void*)0},{&g_1625},{(void*)0},{&g_1625}},{{(void*)0},{(void*)0},{&g_1625},{(void*)0}},{{&g_1625},{(void*)0},{&g_1625},{(void*)0}},{{(void*)0},{&g_1625},{(void*)0},{&g_1625}}};
static uint64_t ***g_1623 = &g_1624[1][1][0];
static uint8_t *****g_1676 = &g_438[6][1];
static union U1 g_1703 = {1UL};
static uint16_t **g_1734 = &g_956;
static uint16_t ***g_1733 = &g_1734;
static uint16_t ****g_1732 = &g_1733;
static int64_t ** const *g_1883 = (void*)0;
static int64_t ** const **g_1882 = &g_1883;
static int8_t ***g_1915 = &g_682;
static int8_t ****g_1914 = &g_1915;
static uint16_t g_1967[6][1][4] = {{{65535UL,65535UL,65535UL,65535UL}},{{0x32C2L,0x32C2L,65535UL,65535UL}},{{0UL,65535UL,0UL,65535UL}},{{0UL,65535UL,65535UL,0UL}},{{0x32C2L,65535UL,65535UL,65535UL}},{{65535UL,65535UL,65535UL,65535UL}}};
static int8_t g_2068 = 0x93L;
static uint32_t *g_2083 = &g_113;
static uint32_t **g_2082 = &g_2083;
static uint8_t g_2120 = 0xD7L;
static uint16_t g_2127 = 3UL;
static union U2 * const *g_2202 = &g_855;
static union U2 * const **g_2201[4] = {&g_2202,&g_2202,&g_2202,&g_2202};
static union U2 * const ***g_2200 = &g_2201[3];
static union U2 * const ****g_2199 = &g_2200;
static uint32_t *g_2308 = &g_150[1].f0;
static const union U2 g_2315 = {0xAECBL};
static uint64_t g_2330[5] = {0UL,0UL,0UL,0UL,0UL};
static uint32_t g_2338 = 1UL;
static int8_t *g_2358 = &g_249.f1;
static int8_t **g_2357 = &g_2358;



static uint8_t  func_1(void);
static int32_t  func_22(uint16_t * p_23, const union U2  p_24, uint32_t  p_25, uint16_t * p_26, uint16_t * p_27);
static uint16_t * func_28(uint64_t  p_29);
static int8_t  func_30(uint16_t  p_31);
static int16_t  func_32(union U2  p_33, int32_t * p_34, int32_t * p_35, uint16_t * p_36);
static union U2  func_37(uint32_t  p_38);
static uint16_t  func_41(uint16_t * p_42, uint8_t  p_43);
static uint16_t * func_44(union U1  p_45, int64_t  p_46);




static uint8_t  func_1(void)
{ 
    uint8_t l_5[7] = {248UL,248UL,248UL,248UL,248UL,248UL,248UL};
    int32_t l_12 = 0x0D743CCCL;
    int32_t l_13 = 0xC0136EF6L;
    int8_t l_2254 = 0x8FL;
    uint32_t l_2282 = 18446744073709551609UL;
    int16_t l_2307 = 0x23EFL;
    int8_t l_2334[5][5] = {{1L,1L,1L,1L,1L},{0xF7L,0xF7L,0xF7L,0xF7L,0xF7L},{1L,1L,1L,1L,1L},{0xF7L,0xF7L,0xF7L,0xF7L,0xF7L},{1L,1L,1L,1L,1L}};
    uint32_t l_2352 = 0xC347C6FEL;
    uint64_t **l_2379 = &g_1625;
    int64_t l_2381[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_2381[i] = 0xECA35FFEB3D96B5FLL;
    for (g_2[0][1] = (-11); (g_2[0][1] > (-12)); --g_2[0][1])
    { 
        union U1 l_47 = {0UL};
        uint16_t l_58 = 1UL;
        int32_t *l_955[4];
        int64_t l_2246 = 1L;
        int16_t l_2248 = 0x7F69L;
        int16_t l_2251 = 0x5008L;
        const uint32_t l_2264[5][6] = {{0x9313D931L,0xF4AE4FB5L,0x9313D931L,0xF4AE4FB5L,0x9313D931L,0xF4AE4FB5L},{0x9313D931L,0xF4AE4FB5L,0x9313D931L,0xF4AE4FB5L,0x9313D931L,0xF4AE4FB5L},{0x9313D931L,0xF4AE4FB5L,0x9313D931L,0xF4AE4FB5L,0x9313D931L,0xF4AE4FB5L},{0x9313D931L,0xF4AE4FB5L,0x9313D931L,0xF4AE4FB5L,0x9313D931L,0xF4AE4FB5L},{0x9313D931L,0xF4AE4FB5L,0x9313D931L,0xF4AE4FB5L,0x9313D931L,0xF4AE4FB5L}};
        union U2 **l_2277 = (void*)0;
        union U2 ***l_2276 = &l_2277;
        uint32_t l_2283 = 0x799D52CCL;
        struct S0 *l_2291 = &g_249;
        uint8_t ***l_2326 = &g_1010;
        int8_t **l_2359 = &g_2358;
        int i, j;
        for (i = 0; i < 4; i++)
            l_955[i] = &g_820;
        for (g_6 = 0; (g_6 <= 6); g_6 += 1)
        { 
            uint32_t l_10[4] = {0x4D64EA33L,0x4D64EA33L,0x4D64EA33L,0x4D64EA33L};
            int32_t l_2243 = 0x332E49D2L;
            int32_t l_2249 = 0xBF4C0039L;
            int32_t l_2250 = 1L;
            int32_t l_2252 = 0xDD6C5526L;
            int32_t l_2253 = 0x0ECC8E5CL;
            uint32_t l_2255 = 7UL;
            int16_t l_2265 = 0L;
            int i;
            for (g_7 = 6; (g_7 >= 2); g_7 -= 1)
            { 
                int32_t *l_8[6][6] = {{&g_2[2][2],&g_7,&g_2[2][2],&g_7,&g_2[2][2],&g_7},{(void*)0,&g_7,(void*)0,&g_7,(void*)0,&g_7},{&g_2[2][2],&g_7,&g_2[2][2],&g_7,&g_2[2][2],&g_7},{(void*)0,&g_7,(void*)0,&g_7,(void*)0,&g_7},{&g_2[2][2],&g_7,&g_2[2][2],&g_7,&g_2[2][2],&g_7},{(void*)0,&g_7,(void*)0,&g_7,(void*)0,&g_7}};
                int32_t **l_2247 = &l_8[2][2];
                int i, j;
                l_10[2] &= (g_9 ^= (-5L));
                l_13 &= (l_12 = (g_11[0] = (g_9 &= 4L)));
                for (g_9 = 6; (g_9 >= 0); g_9 -= 1)
                { 
                    uint16_t *l_18[7][3] = {{(void*)0,&g_19,&g_19},{(void*)0,&g_19,(void*)0},{&g_19,(void*)0,&g_19},{&g_19,&g_19,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_19,&g_19},{(void*)0,&g_19,(void*)0}};
                    int32_t l_2244 = 0x6E4C1C17L;
                    int32_t l_2245 = 0x6ACEBDD5L;
                    int i, j;
                    ++g_15[0];
                }
                (*l_2247) = l_955[1];
                g_53 = (g_350 = 0xBF905AFBL);
            }
            --l_2255;
            g_820 ^= ((((-1L) == l_5[g_6]) , ((*g_1625) ^= 1UL)) | (((safe_mul_func_int16_t_s_s(g_1351, (l_2253 != (*g_523)))) <= ((*g_1492) = (safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(l_2264[4][2], l_2265)), l_12)))) != l_2250));
        }
        for (l_13 = (-29); (l_13 >= (-27)); l_13 = safe_add_func_int64_t_s_s(l_13, 6))
        { 
            int32_t *l_2268[7] = {&g_6,&g_2[2][2],&g_2[2][2],&g_6,&g_2[2][2],&g_2[2][2],&g_6};
            union U2 **l_2273[7] = {&g_855,&g_855,&g_855,&g_855,&g_855,&g_855,&g_855};
            union U2 ***l_2272[1];
            uint64_t ** const l_2295 = &g_1625;
            int64_t *l_2302[7][1][3] = {{{&l_2246,&l_2246,&g_366}},{{&g_366,&l_2246,&l_2246}},{{&l_2246,&l_2246,&l_2246}},{{&l_2246,&g_366,&l_2246}},{{&g_366,&l_2246,&l_2246}},{{&l_2246,&l_2246,&l_2246}},{{&l_2246,&g_366,&g_366}}};
            int16_t l_2306[1][2];
            union U2 *l_2316 = (void*)0;
            uint16_t l_2331 = 0x4877L;
            uint8_t ****l_2335 = &l_2326;
            uint32_t l_2351 = 7UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2272[i] = &l_2273[6];
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_2306[i][j] = 3L;
            }
        }
        if ((safe_rshift_func_uint16_t_u_s(l_2334[0][2], (((safe_mul_func_int8_t_s_s((****g_1914), (((g_2357 = (void*)0) != (l_2359 = (**g_1914))) || g_54.f1))) || (safe_add_func_int32_t_s_s(l_13, (func_37((*g_2083)) , l_2307)))) && 0x1FF87B7020862D8ELL))))
        { 
            union U1 *l_2363[3][3] = {{&l_47,&g_150[5],&l_47},{(void*)0,(void*)0,(void*)0},{&l_47,&g_150[5],&l_47}};
            union U1 **l_2362 = &l_2363[0][0];
            union U1 *l_2365 = (void*)0;
            union U1 **l_2364 = &l_2365;
            int32_t l_2372 = 0x24213AC7L;
            int i, j;
            (*l_2364) = ((*l_2362) = &g_150[1]);
            for (l_47.f0 = 19; (l_47.f0 <= 55); ++l_47.f0)
            { 
                int32_t l_2368 = 1L;
                uint64_t l_2369 = 0x8A79E9157D21545ELL;
                l_2369--;
            }
            if (l_2372)
                continue;
            for (g_820 = 0; (g_820 == 15); g_820++)
            { 
                int16_t l_2380 = 6L;
                l_2372 = (((safe_add_func_int16_t_s_s(l_2334[2][2], ((*g_2358) > (((*****g_1488) , (safe_lshift_func_int8_t_s_s((l_2380 = (((0xA906L != (**g_1734)) , l_2379) != (void*)0)), 2))) >= l_2381[0])))) | 0x05L) != g_118[0]);
                if (l_2372)
                    break;
                if (l_2372)
                    break;
            }
            for (g_623 = 0; (g_623 <= 18); g_623 = safe_add_func_int64_t_s_s(g_623, 2))
            { 
                int32_t l_2384 = 0x4AAB06B5L;
                g_6 = (l_2282 || (--(*g_956)));
                l_12 &= ((~l_2384) == g_299);
            }
        }
        else
        { 
            uint32_t l_2390[2];
            int i;
            for (i = 0; i < 2; i++)
                l_2390[i] = 0x8586082BL;
            for (l_2282 = (-15); (l_2282 <= 20); l_2282++)
            { 
                --l_2390[0];
            }
        }
    }
    return l_12;
}



static int32_t  func_22(uint16_t * p_23, const union U2  p_24, uint32_t  p_25, uint16_t * p_26, uint16_t * p_27)
{ 
    union U1 l_1731 = {0xB18C65D8L};
    int32_t l_1735 = 1L;
    int32_t l_1736 = 0L;
    uint32_t *l_1739 = &g_633;
    int16_t l_1780 = 0xCD3DL;
    uint64_t l_1793 = 18446744073709551613UL;
    int32_t l_1816[6] = {0L,0L,(-8L),0L,0L,(-8L)};
    int32_t l_1832 = 1L;
    const struct S0 l_1854 = {0UL,0xC2L};
    int32_t *l_1889 = &g_53;
    int64_t *l_1924[6][4][4] = {{{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366}},{{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366}},{{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366}},{{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366}},{{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366}},{{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366},{&g_366,&g_366,&g_366,&g_366}}};
    uint32_t l_1941 = 0x16C990E9L;
    int8_t l_1978 = (-1L);
    uint32_t l_1984 = 0x88C51978L;
    int8_t **l_1989 = &g_683;
    int16_t l_1998[2];
    uint16_t *****l_1999 = &g_1732;
    int16_t l_2000 = (-5L);
    int8_t *l_2001 = &l_1978;
    int16_t l_2002 = 0xAC3AL;
    uint64_t l_2003 = 4UL;
    int32_t *l_2004 = &g_229;
    uint16_t l_2005 = 6UL;
    int32_t **l_2008 = &g_1458;
    uint32_t l_2011[3][7][7] = {{{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L},{0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L},{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L},{0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L},{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L},{0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L},{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L}},{{0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L},{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L},{0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L},{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L},{0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L},{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L},{0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L}},{{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L},{0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L},{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L},{0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L},{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L},{0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L,0xDCC5B953L,0x53126DC4L},{0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L,0xAC844274L}}};
    int32_t l_2020[7] = {1L,1L,6L,1L,1L,6L,1L};
    int32_t l_2021 = 0x5B07EAF2L;
    uint64_t *l_2022 = &g_15[0];
    int32_t l_2023 = 0xFA5E6A08L;
    struct S0 l_2024 = {0xA1CD19DEL,0L};
    int16_t *l_2025 = &g_69;
    uint16_t ** const *l_2030 = &g_1734;
    uint16_t ** const **l_2029 = &l_2030;
    uint16_t ** const ***l_2028 = &l_2029;
    int8_t ***** const l_2051[5][1][1] = {{{(void*)0}},{{&g_1914}},{{(void*)0}},{{&g_1914}},{{(void*)0}}};
    uint32_t **l_2094 = &g_2083;
    uint8_t ****l_2168 = &g_1009;
    int64_t ***l_2189[6] = {&g_1464,&g_1464,&g_1464,&g_1464,&g_1464,&g_1464};
    int64_t ***l_2195 = (void*)0;
    uint8_t l_2214 = 255UL;
    int32_t *l_2236 = (void*)0;
    int32_t *l_2237 = &g_443;
    int32_t *l_2238 = &l_2020[6];
    int32_t *l_2239[3];
    uint8_t l_2240 = 0xBCL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1998[i] = 0xDB3BL;
    for (i = 0; i < 3; i++)
        l_2239[i] = &l_2023;
    if ((+((safe_sub_func_uint32_t_u_u(((*l_1739) = ((((((l_1731 , g_1732) != (l_1731 , (void*)0)) | ((l_1736 = (l_1735 ^= l_1731.f1)) , (((safe_add_func_int32_t_s_s((g_201.f0 && (p_24.f0 > p_25)), 5UL)) ^ l_1731.f0) <= (-1L)))) | l_1731.f0) , (void*)0) != (void*)0)), g_2[0][1])) > p_25)))
    { 
        int8_t **l_1746 = &g_683;
        int32_t l_1758 = 0x5FEA3202L;
        int8_t ***l_1787 = &l_1746;
        int32_t l_1817[6][5][2] = {{{0x29BCDDEFL,0L},{1L,0L},{0x29BCDDEFL,0L},{1L,0L},{0x29BCDDEFL,0L}},{{1L,0L},{0x29BCDDEFL,0L},{1L,0L},{0x29BCDDEFL,0L},{1L,0L}},{{0x29BCDDEFL,0L},{1L,0L},{0x29BCDDEFL,0L},{1L,0L},{0x29BCDDEFL,0L}},{{1L,0L},{0x29BCDDEFL,0L},{1L,0L},{0x29BCDDEFL,0L},{1L,0L}},{{0x29BCDDEFL,0L},{1L,0L},{0x29BCDDEFL,0L},{1L,0L},{0x29BCDDEFL,0L}},{{1L,0L},{0x29BCDDEFL,0L},{1L,0L},{0x29BCDDEFL,0L},{1L,0L}}};
        uint64_t l_1818 = 1UL;
        int64_t ***l_1886 = &g_1464;
        int64_t ****l_1885 = &l_1886;
        struct S0 *****l_1887 = (void*)0;
        int32_t **l_1891 = (void*)0;
        int64_t l_1892 = (-1L);
        int8_t ****l_1919 = &l_1787;
        uint16_t l_1922 = 0x175BL;
        uint16_t ****l_1944 = &g_1733;
        int i, j, k;
        for (g_54.f1 = (-12); (g_54.f1 >= 8); ++g_54.f1)
        { 
            return l_1736;
        }
        for (g_249.f1 = 23; (g_249.f1 < (-5)); --g_249.f1)
        { 
            uint64_t l_1761 = 0x2668AD82EA6E8B78LL;
            union U2 **l_1770 = &g_855;
            union U2 ***l_1769 = &l_1770;
            int32_t l_1796[2];
            uint32_t l_1839 = 0x5819776BL;
            int64_t ** const ***l_1884 = &g_1882;
            int8_t *l_1888 = &g_54.f1;
            int32_t **l_1890 = &g_530;
            int i;
            for (i = 0; i < 2; i++)
                l_1796[i] = 0xB111AC43L;
            for (g_299 = 2; (g_299 >= 0); g_299 -= 1)
            { 
                int i, j;
                if (g_183[g_299][g_299])
                    break;
                for (g_108 = 0; (g_108 > (-19)); g_108 = safe_sub_func_int16_t_s_s(g_108, 1))
                { 
                    int8_t ***l_1747 = &g_682;
                    (*l_1747) = l_1746;
                }
            }
            if (((safe_add_func_int64_t_s_s(((***g_1317) |= ((safe_div_func_int64_t_s_s((~((safe_lshift_func_int8_t_s_s((-4L), 4)) || (safe_rshift_func_uint16_t_u_s(65527UL, 6)))), (*g_1625))) & ((((*l_1739) = (safe_unary_minus_func_uint16_t_u((((*p_26) > 0xE9D5L) <= l_1758)))) & (safe_lshift_func_uint8_t_u_u(0xACL, 6))) & 0x6E57886FAD68F2AELL))), 0x96356316D1D8F68ALL)) | l_1758))
            { 
                int32_t *l_1794 = &l_1735;
                int32_t *l_1795 = &g_53;
                int32_t *l_1797 = &l_1796[1];
                int32_t *l_1798 = &g_229;
                int32_t *l_1799 = &g_229;
                int32_t *l_1800 = &g_229;
                int32_t *l_1801 = (void*)0;
                int32_t *l_1802 = &g_118[1];
                int32_t *l_1803 = &g_350;
                int32_t *l_1804 = &g_118[0];
                int32_t *l_1805 = &g_820;
                int32_t *l_1806 = &g_229;
                int32_t *l_1807 = &g_820;
                int32_t *l_1808 = &g_118[1];
                int32_t *l_1809 = &g_53;
                int32_t *l_1810 = &g_53;
                int32_t *l_1811 = &g_820;
                int32_t *l_1812 = &g_820;
                int32_t *l_1813 = &g_229;
                int32_t *l_1814 = &l_1796[0];
                int32_t *l_1815[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                l_1761--;
                if (l_1731.f1)
                    continue;
                for (l_1731.f1 = (-28); (l_1731.f1 > 17); ++l_1731.f1)
                { 
                    int32_t *l_1768 = &l_1758;
                    union U2 ****l_1771 = &l_1769;
                    int8_t ***l_1786 = &l_1746;
                    int8_t ****l_1785[2];
                    int8_t *l_1791 = &g_54.f1;
                    int8_t *l_1792 = &g_249.f1;
                    int8_t ** const l_1790[5] = {&l_1791,&l_1791,&l_1791,&l_1791,&l_1791};
                    int8_t ** const *l_1789 = &l_1790[1];
                    int8_t ** const **l_1788 = &l_1789;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1785[i] = &l_1786;
                    (*l_1768) &= (safe_mul_func_uint8_t_u_u(0x9BL, p_24.f0));
                    if (p_24.f0)
                        continue;
                    (*l_1771) = l_1769;
                    (*l_1768) = ((safe_add_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(l_1780, ((l_1731 , (1UL || ((((!g_183[0][1]) >= (-3L)) > (~(safe_mod_func_uint8_t_u_u(((((l_1787 = &l_1746) != ((*l_1788) = &g_682)) >= 0xB87AL) , p_25), l_1735)))) > 0xA4E6L))) || l_1793))) >= 1UL), 0xD247766CL)), p_25)), p_24.f0)) ^ 0L);
                }
                l_1818++;
                for (l_1736 = 2; (l_1736 >= 0); l_1736 -= 1)
                { 
                    int16_t l_1831[7][4] = {{0x0981L,0x890BL,0x890BL,0x0981L},{0L,0x890BL,0L,0x890BL},{0x890BL,0x339FL,0L,0L},{0L,0L,0x890BL,0L},{0x0981L,0x339FL,0x0981L,0x890BL},{0x0981L,0x890BL,0x890BL,0x0981L},{0L,0x890BL,0L,0x890BL}};
                    int i, j;
                    l_1832 ^= ((safe_add_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(((4UL && ((*l_1806) &= 0L)) ^ ((safe_add_func_int16_t_s_s((((p_25 && 0x9583B06C1DCB19B4LL) , (safe_div_func_uint32_t_u_u(g_1703.f0, 0x7E3519EEL))) > l_1758), p_25)) <= 0x59L)), (-1L))) | 6UL) != 3L), 1UL)) , l_1831[5][1]);
                }
            }
            else
            { 
                int8_t l_1838 = 0x6EL;
                int32_t l_1845 = 3L;
                for (g_113 = 0; (g_113 <= 5); g_113 += 1)
                { 
                    int32_t **l_1833 = (void*)0;
                    int32_t **l_1834 = &g_530;
                    int32_t *l_1835 = (void*)0;
                    int32_t *l_1836 = &l_1817[0][1][1];
                    int32_t *l_1837[2][7][5] = {{{&g_820,&g_2[0][1],&l_1817[5][2][0],&g_820,&g_53},{&l_1758,&g_2[0][1],(void*)0,&g_2[0][1],&l_1758},{&g_9,&l_1817[5][2][0],&g_2[0][4],&l_1735,(void*)0},{&g_118[0],&l_1816[5],(void*)0,&g_229,&g_350},{&g_118[1],&g_7,&g_2[0][1],&l_1817[5][2][0],(void*)0},{&l_1796[1],&g_229,&g_820,&l_1832,&l_1758},{(void*)0,&l_1758,(void*)0,(void*)0,&g_53}},{{&g_229,&g_2[0][4],(void*)0,(void*)0,&g_2[0][4]},{&l_1832,&g_9,&g_820,&g_7,&g_229},{&g_7,&g_443,&g_2[0][1],&g_53,&g_2[0][1]},{&g_2[0][4],&g_2[0][1],(void*)0,&g_118[0],&g_9},{&g_7,&l_1832,&g_2[0][4],&g_9,&g_2[0][1]},{&l_1832,&l_1816[5],(void*)0,(void*)0,&l_1736},{&g_229,&g_350,&l_1817[5][2][0],(void*)0,&l_1817[5][2][0]}}};
                    uint16_t *****l_1842 = &g_1732;
                    int i, j, k;
                    (*l_1834) = &l_1816[g_113];
                    l_1839--;
                    (*l_1836) = ((**l_1834) = (-2L));
                    (*l_1842) = &g_1733;
                    (**l_1834) |= 0xBE39B562L;
                }
                g_1458 = &g_53;
                for (l_1780 = 2; (l_1780 >= 0); l_1780 -= 1)
                { 
                    int32_t *l_1843 = &l_1758;
                    int32_t *l_1844 = (void*)0;
                    int32_t *l_1846 = &l_1845;
                    int32_t *l_1847 = &l_1832;
                    int32_t *l_1848 = (void*)0;
                    int32_t *l_1849 = (void*)0;
                    int32_t *l_1850 = &g_820;
                    uint8_t l_1851 = 1UL;
                    l_1843 = (void*)0;
                    if (p_25)
                        break;
                    --l_1851;
                    (*g_914) = l_1854;
                    if (l_1817[5][2][0])
                        continue;
                }
            }
            (*l_1890) = ((safe_mul_func_int8_t_s_s(((*l_1888) |= ((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((l_1796[0] > (safe_mul_func_int8_t_s_s(((+1UL) != ((-4L) || (safe_sub_func_uint8_t_u_u(((*g_269) = ((safe_div_func_int16_t_s_s(((((((*l_1739) = l_1761) && (safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((**g_1734) = (g_150[3] , ((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(l_1818, (((*l_1884) = g_1882) != l_1885))) != 0x56822FC4L), 0xB610L)), p_25)) == p_24.f0) , l_1780), p_25)) , l_1816[3]))), 6)), p_25)) > 0xA807390FL), p_24.f0))) , l_1887) == l_1887) ^ l_1796[0]), (*p_23))) <= p_25)), 252UL)))), p_24.f0))) || l_1735), g_623)), (-1L))) == l_1817[5][2][0])), p_25)) , l_1889);
        }
        l_1889 = &g_350;
        if (l_1892)
        { 
            uint64_t l_1893 = 0UL;
            int32_t l_1923 = 0x384936DAL;
            union U1 *l_1954 = &l_1731;
            int32_t l_1965[4] = {(-4L),(-4L),(-4L),(-4L)};
            int i;
            l_1893++;
            for (g_1703.f0 = (-24); (g_1703.f0 == 19); ++g_1703.f0)
            { 
                int8_t *l_1903 = &g_54.f1;
                int32_t l_1909 = 0xC399A007L;
                int32_t l_1963 = 1L;
                int32_t l_1964 = 0L;
                int32_t l_1966 = 0x28794D38L;
                if ((safe_sub_func_uint16_t_u_u(((*l_1889) != (!((((((l_1817[5][3][1] = ((*l_1903) = l_1893)) , (((*g_1319) | p_24.f0) != p_24.f0)) & ((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(0x64L, (!(0xF6L >= p_24.f0)))) ^ (-1L)), (**g_1464))) >= (*g_1492))) >= 1UL) || l_1909) >= l_1909))), l_1893)))
                { 
                    int8_t *****l_1916 = (void*)0;
                    int8_t *****l_1917 = (void*)0;
                    int8_t *****l_1918[2][6][4] = {{{&g_1914,&g_1914,&g_1914,&g_1914},{&g_1914,&g_1914,&g_1914,&g_1914},{&g_1914,&g_1914,&g_1914,&g_1914},{&g_1914,&g_1914,&g_1914,&g_1914},{&g_1914,&g_1914,&g_1914,&g_1914},{&g_1914,&g_1914,&g_1914,&g_1914}},{{&g_1914,&g_1914,&g_1914,&g_1914},{&g_1914,&g_1914,&g_1914,&g_1914},{&g_1914,&g_1914,&g_1914,&g_1914},{&g_1914,&g_1914,&g_1914,&g_1914},{&g_1914,&g_1914,&g_1914,&g_1914},{&g_1914,&g_1914,&g_1914,&g_1914}}};
                    int32_t *l_1925 = &g_820;
                    int32_t *l_1926 = &g_53;
                    int32_t *l_1927 = &l_1816[5];
                    int32_t *l_1928 = &g_820;
                    int32_t *l_1929 = &g_229;
                    int32_t *l_1930 = &l_1758;
                    int32_t *l_1931 = &l_1923;
                    int32_t *l_1932 = &g_820;
                    int32_t *l_1933 = &g_443;
                    int32_t *l_1934 = &l_1816[5];
                    int32_t *l_1935 = &l_1736;
                    int32_t *l_1936 = &l_1816[5];
                    int32_t *l_1937 = (void*)0;
                    int32_t *l_1938 = &l_1736;
                    int32_t *l_1939 = &g_820;
                    int32_t *l_1940[7][2][1] = {{{&l_1909},{&g_118[0]}},{{&l_1909},{&g_118[0]}},{{&l_1909},{&g_118[0]}},{{&l_1909},{&g_118[0]}},{{&l_1909},{&g_118[0]}},{{&l_1909},{&g_118[0]}},{{&l_1909},{&g_118[0]}}};
                    int i, j, k;
                    l_1923 = (safe_mul_func_int8_t_s_s(p_25, (((safe_sub_func_uint64_t_u_u((&l_1787 != (l_1919 = g_1914)), 0xA8072CD6A18C25B3LL)) , l_1893) >= ((-1L) > (safe_div_func_uint8_t_u_u(((l_1909 == l_1922) < p_24.f0), 0x10L))))));
                    (*l_1889) = (l_1924[2][3][3] == (void*)0);
                    l_1941--;
                    (*g_913) = (*g_913);
                    (*l_1930) = ((void*)0 == l_1944);
                }
                else
                { 
                    int32_t l_1953 = 9L;
                    int32_t *l_1955 = &l_1817[5][2][0];
                    int32_t *l_1956 = &l_1736;
                    int32_t *l_1957 = &g_350;
                    int32_t *l_1958 = &g_53;
                    int32_t *l_1959 = (void*)0;
                    int32_t *l_1960 = (void*)0;
                    int32_t *l_1961 = &g_350;
                    int32_t *l_1962[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1962[i] = &g_118[1];
                    g_820 |= (safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(p_24.f0, (((*g_1425) == ((65528UL ^ (((safe_add_func_int16_t_s_s((p_25 && l_1953), (p_24 , ((void*)0 != (*g_1732))))) || 7UL) & 65535UL)) , (*g_1425))) , (*l_1889)))) ^ p_24.f0), (*g_1625))), 4));
                    l_1954 = &g_150[1];
                    g_1967[2][0][3]--;
                    return p_24.f0;
                }
            }
        }
        else
        { 
            struct S0 *l_1970 = &g_249;
            struct S0 **l_1971[2];
            int32_t *l_1973 = &g_820;
            int32_t *l_1974[1];
            uint16_t l_1975 = 65535UL;
            int i;
            for (i = 0; i < 2; i++)
                l_1971[i] = (void*)0;
            for (i = 0; i < 1; i++)
                l_1974[i] = &g_820;
            (*l_1889) |= ((void*)0 == &g_1733);
            g_913 = l_1970;
            if (g_229)
                goto lbl_1979;
            for (g_1351 = 0; (g_1351 <= 5); g_1351 += 1)
            { 
                int32_t l_1972 = 0x57293746L;
                l_1972 ^= ((*g_1425) == (*g_1425));
            }
            ++l_1975;
        }
    }
    else
    { 
lbl_1979:
        (*l_1889) &= l_1978;
        (*l_2004) = (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_1984, 14)), ((safe_mod_func_uint8_t_u_u(p_24.f0, (safe_sub_func_int64_t_s_s((l_1989 == l_1989), (((*l_2001) = ((++(*l_1739)) , (~(safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((*l_1889) = ((*g_1625) = ((!((l_1998[1] ^ (l_1999 != (void*)0)) <= 0x21L)) ^ p_25))), l_2000)), (*p_27)))))) <= l_2002))))) , l_2003))) , (*g_1623)) != (void*)0);
        --l_2005;
        (*l_2008) = &g_9;
        if (((0xF9L <= (safe_mod_func_uint16_t_u_u(l_2011[1][5][4], 0x1785L))) == ((~((*l_2025) = (+(2L < ((((((((safe_div_func_int32_t_s_s((((((((*g_1319) >= (((*p_23)++) < ((0xA9L > (((*p_26) = ((*p_27) == l_2020[5])) == l_2021)) >= g_53))) <= 3L) , &l_1793) == l_2022) <= p_25) == (*g_269)), (*g_1458))) != l_2023) && p_24.f0) , l_2024) , (-7L)) >= p_25) != 0x9EL) != (*l_2004)))))) && (****g_1732))))
        { 
            int32_t *l_2026 = &l_2020[0];
            int32_t **l_2027[1][5] = {{&g_530,&g_530,&g_530,&g_530,&g_530}};
            int i, j;
            (*l_2004) ^= p_25;
            l_1889 = ((*l_2008) = l_2026);
        }
        else
        { 
            uint16_t *****l_2031 = &g_1732;
            int32_t l_2032[4];
            int32_t **l_2033 = (void*)0;
            int32_t **l_2034 = &g_530;
            int i;
            for (i = 0; i < 4; i++)
                l_2032[i] = 0x1AEE3890L;
            (*l_2004) = 0x1BFFBD78L;
            (*l_1889) = (((**l_2008) || p_25) == (0xB1AAB187L <= ((((l_2028 != l_2031) >= l_2032[1]) ^ p_25) >= (*g_1625))));
            (*l_2034) = ((*l_2008) = (*l_2008));
        }
    }
    for (l_1978 = 0; (l_1978 != 8); l_1978 = safe_add_func_uint64_t_u_u(l_1978, 8))
    { 
        int32_t l_2039 = 0x49366366L;
        uint64_t *l_2050 = &g_845;
        int32_t **l_2053 = &g_1458;
        struct S0 **l_2054 = (void*)0;
        int32_t l_2081[3][5][7] = {{{(-1L),0x8A8EE967L,0x78F7D526L,0xA9AF3BDFL,1L,(-9L),0x1E7D482FL},{0xB7ACC7C2L,(-7L),1L,5L,0x56D2A3A0L,0xA2ED1B96L,0x56D2A3A0L},{0x23DFC5E0L,1L,1L,0x23DFC5E0L,(-1L),0x1A5061D0L,0L},{5L,1L,(-7L),0xB7ACC7C2L,0x18C49C8EL,0x48586A2CL,0x53B9CEA7L},{0xA9AF3BDFL,0x78F7D526L,0x8A8EE967L,(-1L),1L,0xAE96833CL,0L}},{{0x53B9CEA7L,(-5L),0xF8AE773EL,0xF8AE773EL,(-5L),0x53B9CEA7L,0x56D2A3A0L},{1L,0xA9AF3BDFL,(-9L),0x78F7D526L,1L,0x706F1D63L,0x1E7D482FL},{0x784945AAL,0L,8L,0x9310180CL,5L,0xCEAB0970L,0xD304C51BL},{0x8CE6810AL,0xA9AF3BDFL,(-1L),0x746ED728L,0x746ED728L,(-1L),0xA9AF3BDFL},{0x18C49C8EL,(-5L),0xDE22DCACL,0xCEAB0970L,8L,5L,0x48586A2CL}},{{1L,0x78F7D526L,0x1E7D482FL,0xAE96833CL,0x1A5061D0L,1L,1L},{0xDE22DCACL,1L,0x48586A2CL,0xCEAB0970L,8L,8L,0xCEAB0970L},{1L,1L,1L,0x746ED728L,0x1E7D482FL,0x8CE6810AL,0x23DFC5E0L},{0xF4DF6EDAL,(-7L),0x56D2A3A0L,0x9310180CL,0xA2ED1B96L,(-5L),0xE1D7A7F8L},{1L,0x8A8EE967L,1L,0x78F7D526L,(-4L),0x8CE6810AL,0x8CE6810AL}}};
        uint32_t **l_2093 = &g_2083;
        int8_t l_2104[6][7] = {{0x4BL,(-8L),0x4BL,0x4BL,(-8L),0x4BL,0x4BL},{(-8L),(-8L),0xFFL,(-8L),(-8L),0xFFL,(-8L)},{(-8L),0x4BL,0x4BL,(-8L),0x4BL,0x4BL,(-8L)},{0x4BL,(-8L),0x4BL,0x4BL,(-8L),0x4BL,0x4BL},{(-8L),(-8L),0xFFL,(-8L),(-8L),0xFFL,(-8L)},{(-8L),0x4BL,0x4BL,(-8L),0x4BL,0x4BL,(-8L)}};
        int8_t **l_2125[5][7];
        union U2 * const *l_2153 = &g_855;
        union U2 * const **l_2152 = &l_2153;
        union U2 * const ***l_2151 = &l_2152;
        uint8_t **** const l_2165 = &g_1009;
        int16_t l_2171 = (-1L);
        int8_t l_2209 = 0x62L;
        uint32_t l_2210 = 0x536A95FAL;
        int32_t *l_2213[7][1][7] = {{{&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1]}},{{&l_1736,&l_1736,&l_1736,&l_1736,&l_1736,&l_1736,&l_1736}},{{&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1]}},{{&l_1736,&l_1736,&l_1736,&l_1736,&l_1736,&l_1736,&l_1736}},{{&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1]}},{{&l_1736,&l_1736,&l_1736,&l_1736,&l_1736,&l_1736,&l_1736}},{{&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1],&g_118[1]}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 7; j++)
                l_2125[i][j] = (void*)0;
        }
        if (((-1L) && (safe_add_func_int8_t_s_s((l_2039 == ((*g_1319) & 0x8FF29878DA08F760LL)), (safe_rshift_func_int8_t_s_s((p_24 , (l_1731 , (*l_2004))), l_2039))))))
        { 
            uint64_t l_2046[3];
            const int64_t l_2052 = 0L;
            int16_t *l_2056[3];
            int32_t *l_2072[7][5][4] = {{{&l_1736,&g_2[0][1],(void*)0,&g_2[0][1]},{&l_1736,&g_2[1][0],(void*)0,&l_1736},{(void*)0,(void*)0,&g_2[0][1],&g_53},{(void*)0,&l_1736,&g_350,&g_350},{(void*)0,(void*)0,&g_2[0][1],(void*)0}},{{(void*)0,&g_350,(void*)0,(void*)0},{&l_1736,(void*)0,(void*)0,(void*)0},{&l_1736,(void*)0,&l_1736,(void*)0},{(void*)0,&g_350,&g_9,(void*)0},{(void*)0,(void*)0,&l_1736,&g_350}},{{&g_53,&l_1736,&l_1736,&g_53},{(void*)0,(void*)0,&g_9,&l_1736},{(void*)0,&g_2[1][0],&l_1736,&g_2[0][1]},{&l_1736,&g_2[0][1],(void*)0,&g_2[0][1]},{&l_1736,&g_2[1][0],(void*)0,&l_1736}},{{(void*)0,(void*)0,&g_2[0][1],&g_53},{(void*)0,&l_1736,&g_350,&g_350},{(void*)0,(void*)0,&g_2[0][1],(void*)0},{(void*)0,&g_350,(void*)0,(void*)0},{&l_1736,(void*)0,(void*)0,(void*)0}},{{&l_1736,(void*)0,&l_1736,(void*)0},{(void*)0,&g_350,&g_9,(void*)0},{(void*)0,(void*)0,&l_1736,&g_350},{&g_53,&l_1736,&l_1736,&g_53},{(void*)0,(void*)0,&g_9,&l_1736}},{{(void*)0,&g_2[1][0],&l_1736,&g_2[0][1]},{&l_1736,&g_2[0][1],(void*)0,&g_2[0][1]},{&l_1736,&g_2[1][0],(void*)0,&l_1736},{(void*)0,(void*)0,&g_2[0][1],&g_53},{(void*)0,&l_1736,&g_350,&g_350}},{{(void*)0,(void*)0,&g_2[0][1],(void*)0},{(void*)0,&g_350,(void*)0,(void*)0},{&l_1736,(void*)0,(void*)0,(void*)0},{&l_1736,(void*)0,&l_1736,(void*)0},{(void*)0,&g_350,&g_9,(void*)0}}};
            int8_t **l_2080[1][1];
            int32_t l_2103 = 0L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2046[i] = 0x0D530D667E2C229ELL;
            for (i = 0; i < 3; i++)
                l_2056[i] = &l_2002;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2080[i][j] = &g_683;
            }
            if (((1UL > (safe_sub_func_uint8_t_u_u(3UL, 5UL))) > (safe_rshift_func_int16_t_s_u((g_249.f0 ^ l_2046[2]), (((safe_mul_func_uint8_t_u_u(((((~(((((((*l_1889) , l_2050) != &l_2003) , (void*)0) == l_2051[0][0][0]) < 0x8E6E4058FE28A4BFLL) <= 0x213B2CB73D3235EBLL)) || 0x0D43L) >= l_2052) <= p_25), l_2039)) > (*l_2004)) , (*p_27))))))
            { 
                int16_t *l_2055[7];
                struct S0 l_2066 = {0x6D01C7EDL,-6L};
                int i;
                for (i = 0; i < 7; i++)
                    l_2055[i] = &l_1780;
                l_2053 = &g_1458;
                l_2054 = l_2054;
                (*l_1889) |= ((l_2055[4] = p_26) != (l_2056[2] = p_26));
                for (g_249.f1 = (-23); (g_249.f1 != (-6)); g_249.f1 = safe_add_func_uint32_t_u_u(g_249.f1, 1))
                { 
                    int16_t l_2065 = 6L;
                    struct S0 ***l_2070 = &l_2054;
                    struct S0 ****l_2069[5] = {&l_2070,&l_2070,&l_2070,&l_2070,&l_2070};
                    struct S0 ***l_2071[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2071[i] = &l_2054;
                    l_2071[1] = ((safe_add_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u(p_24.f0, (p_25 | ((safe_sub_func_int8_t_s_s((p_25 >= l_2065), 0x8BL)) , (l_2066 , (!(p_24.f0 >= 0x8DL))))))) < g_2068) | 0x83FCDF1CL), l_2052)) , (void*)0);
                    return p_25;
                }
                (*l_2053) = l_2072[1][1][2];
            }
            else
            { 
                int32_t l_2075 = (-1L);
                uint32_t ***l_2095 = (void*)0;
                uint32_t ***l_2096 = (void*)0;
                uint32_t ***l_2097 = &g_2082;
                uint32_t ***l_2098 = &l_2094;
                int8_t ** const l_2126 = &l_2001;
                struct S0 * const *l_2143 = &g_913;
                for (l_2003 = 0; (l_2003 >= 29); l_2003 = safe_add_func_int8_t_s_s(l_2003, 1))
                { 
                    uint8_t l_2076 = 0xB3L;
                    int8_t **l_2079 = &g_683;
                    uint32_t ***l_2084 = &g_2082;
                    ++l_2076;
                    (*l_2004) |= (l_2081[1][3][1] |= (((**g_1914) = l_2079) != (g_150[1] , l_2080[0][0])));
                    if (l_2075)
                        break;
                    (*l_2084) = g_2082;
                }
                (*l_1889) = (safe_sub_func_int32_t_s_s((((((safe_mul_func_uint8_t_u_u((((0L && (safe_lshift_func_uint8_t_u_s(((safe_div_func_uint32_t_u_u((((((p_24.f0 , l_2093) != ((*l_2098) = ((*l_2097) = l_2094))) , p_24.f0) < p_25) , ((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_2103, l_2075)), (*g_1625))) > g_118[1])), p_24.f0)) || 0xDE415D20L), p_24.f0))) & p_25) , p_25), l_2075)) == l_2075) > l_2104[4][4]) , g_183[0][0]) < p_25), l_2075));
                (*l_2004) = (!(*l_1889));
                g_820 ^= (safe_div_func_uint16_t_u_u(((**g_1734) = (((((safe_add_func_uint64_t_u_u((((*l_2025) = (p_24.f0 , (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((*p_26), ((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((**g_1464) & (g_2120 || ((*l_2004) = (safe_mul_func_uint16_t_u_u((*p_26), ((safe_lshift_func_uint16_t_u_s(((*p_23) &= (l_2125[0][6] != l_2126)), 6)) , 1L)))))), g_2127)), 6L)) , g_350))), 0UL)), (-4L))))) , 0x761C198B61C35518LL), p_24.f0)) ^ l_2075) != 0xD3L) | 4294967291UL) == p_25)), 9L));
                (*l_1889) &= ((((((l_2075 , ((!l_2075) && (((((safe_sub_func_uint64_t_u_u(p_24.f0, (safe_mod_func_int8_t_s_s(p_24.f0, ((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(0x84E5C3B8L, (safe_mod_func_uint16_t_u_u((p_24 , ((*g_956)++)), (safe_mul_func_uint16_t_u_u(((8L || 65535UL) || l_2075), p_25)))))), p_24.f0)) | (*g_269)))))) , (void*)0) == l_2143) > 0x3229L) == 0x0DA69023L))) == 0xE878L) , p_24.f0) == p_24.f0) <= 0x99E72858D1B63CD0LL) >= p_24.f0);
            }
            if (p_25)
                break;
            if (p_24.f0)
            { 
                int16_t l_2146 = 0xF2B8L;
                for (g_1703.f0 = 0; (g_1703.f0 >= 54); ++g_1703.f0)
                { 
                    uint32_t l_2147 = 0UL;
                    int32_t **l_2150[5] = {&l_2072[1][1][2],&l_2072[1][1][2],&l_2072[1][1][2],&l_2072[1][1][2],&l_2072[1][1][2]};
                    int i;
                    (*l_2004) &= 0L;
                    l_2147++;
                    g_530 = (l_1889 = ((*l_2008) = (*l_2008)));
                }
                for (l_2024.f0 = 0; (l_2024.f0 <= 2); l_2024.f0 += 1)
                { 
                    int i, j;
                    return g_183[l_2024.f0][l_2024.f0];
                }
                return (*l_2004);
            }
            else
            { 
                union U2 **l_2155 = &g_855;
                for (g_84 = 0; (g_84 <= 3); g_84 += 1)
                { 
                    union U2 * const ****l_2154 = &l_2151;
                    int i, j;
                    (*l_2154) = l_2151;
                    if (g_1510[(g_84 + 1)][(g_84 + 2)])
                        continue;
                    (*l_2008) = &g_6;
                }
                (*l_2155) = (void*)0;
            }
        }
        else
        { 
            int32_t *l_2156 = &l_2021;
            int32_t *l_2157[1];
            uint64_t l_2158 = 18446744073709551615UL;
            uint8_t ****l_2166 = (void*)0;
            uint8_t *****l_2167[3][4] = {{&l_2166,&l_2166,&l_2166,&l_2166},{&g_438[3][0],&l_2166,&g_438[4][2],&l_2166},{&l_2166,&l_2166,&g_438[4][2],&g_438[4][2]}};
            union U2 l_2182 = {0x2475L};
            int64_t **l_2192 = &l_1924[5][3][0];
            int64_t ***l_2191 = &l_2192;
            int16_t l_2207 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_2157[i] = &l_2081[1][3][1];
            l_2158++;
            (*l_2156) = ((*g_682) != (***g_1914));
            if ((((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((l_2104[4][4] , l_2165) != (l_2168 = l_2166)), ((safe_sub_func_uint32_t_u_u((g_1967[4][0][2] & ((l_2171 ^= p_25) ^ 8UL)), (((safe_mod_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((2UL ^ p_24.f0) <= 0UL), 0x234B93B5L)) >= (*p_26)), p_25)) & 4294967290UL), p_24.f0)) || p_25) , p_25))) , (*l_2156)))), (***g_1733))) > 7L) & 4294967295UL))
            { 
                int64_t ****l_2190 = &l_2189[3];
                union U2 ***l_2198 = (void*)0;
                union U2 *** const *l_2197 = &l_2198;
                union U2 *** const ** const l_2196 = &l_2197;
                int32_t l_2203 = 0xA2A4311EL;
                (*l_2156) |= (((*g_1625) = (safe_mul_func_uint16_t_u_u(((*****l_2028)--), (l_2182 , ((*l_2004) ^ ((safe_mul_func_int16_t_s_s(0x401CL, (((((**g_1464) = p_25) < ((l_2191 = ((*l_2190) = l_2189[3])) == (((*g_2083) |= (safe_mul_func_uint16_t_u_u((4294967295UL != l_2104[4][4]), p_25))) , l_2195))) , l_2196) == g_2199))) != 0xB51EC200L)))))) | l_2203);
            }
            else
            { 
                int32_t l_2204[3];
                int32_t l_2205 = 1L;
                int32_t l_2206[5];
                int64_t l_2208 = 9L;
                int i;
                for (i = 0; i < 3; i++)
                    l_2204[i] = 0x3E25D2C1L;
                for (i = 0; i < 5; i++)
                    l_2206[i] = 0x8F26BD6BL;
                for (p_25 = 0; (p_25 <= 1); p_25 += 1)
                { 
                    int i;
                    return g_118[p_25];
                }
                l_2210++;
            }
        }
        (*l_2008) = (*l_2008);
        l_2214--;
        for (g_633 = 0; (g_633 != 60); g_633++)
        { 
            if (p_25)
                break;
            if (p_24.f0)
                continue;
        }
    }
    g_118[0] |= (safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((safe_add_func_int32_t_s_s((((*l_1739) = ((safe_mod_func_int8_t_s_s((((void*)0 != &l_1984) > (g_126 = ((*l_2025) |= p_25))), (safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(g_11[1], (!(g_820 |= (safe_mod_func_int64_t_s_s(((*l_2004) | (*l_2004)), (safe_rshift_func_int8_t_s_s(((*l_1889) = (p_25 & 0x7610B5C7B12393DFLL)), p_24.f0)))))))), 0xAC41177734166DA9LL)))) | 0L)) , p_24.f0), 0x7A2E34EFL)) , 0xEAB2L) ^ g_299), p_24.f0)), (*p_26)));
    --l_2240;
    (*l_2008) = (void*)0;
    return p_25;
}



static uint16_t * func_28(uint64_t  p_29)
{ 
    int32_t *l_1640 = &g_350;
    int32_t *l_1641 = &g_118[1];
    int32_t *l_1642 = &g_820;
    int32_t *l_1643 = &g_53;
    int32_t *l_1644 = &g_53;
    int32_t *l_1645 = &g_118[1];
    int32_t *l_1646 = &g_118[1];
    int32_t *l_1647 = &g_118[1];
    int32_t l_1648 = 0x1919093CL;
    int32_t *l_1649 = &g_820;
    int32_t *l_1650[6][3] = {{&g_118[1],&g_118[1],&g_118[1]},{(void*)0,&g_350,(void*)0},{&g_118[1],&g_118[1],&g_118[1]},{(void*)0,&g_350,(void*)0},{&g_118[1],&g_118[1],&g_118[1]},{(void*)0,&g_350,(void*)0}};
    int32_t l_1651 = 0L;
    int64_t l_1652 = 6L;
    uint64_t l_1653 = 0x260822142FE7BCAELL;
    union U2 *l_1705[7][3][6] = {{{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588},{&g_588,&g_856[0],(void*)0,&g_588,&g_588,(void*)0},{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588}},{{&g_588,&g_856[0],(void*)0,&g_588,&g_588,(void*)0},{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588},{&g_588,&g_856[0],(void*)0,&g_588,&g_588,(void*)0}},{{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588},{&g_588,&g_856[0],(void*)0,&g_588,&g_588,(void*)0},{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588}},{{&g_588,&g_856[0],(void*)0,&g_588,&g_588,(void*)0},{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588},{&g_588,&g_856[0],(void*)0,&g_588,&g_588,(void*)0}},{{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588},{&g_588,&g_856[0],(void*)0,&g_588,&g_588,(void*)0},{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588}},{{&g_588,&g_856[0],(void*)0,&g_588,&g_588,(void*)0},{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588},{&g_588,&g_856[0],(void*)0,&g_588,&g_588,(void*)0}},{{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588},{&g_588,&g_856[0],(void*)0,&g_588,&g_588,(void*)0},{&g_588,&g_588,(void*)0,&g_856[0],&g_588,&g_588}}};
    union U1 l_1722 = {7UL};
    const struct S0 l_1723 = {0x3F3821BBL,8L};
    int32_t l_1724 = 0x1727A6A2L;
    uint16_t *l_1725 = &g_623;
    int i, j, k;
    for (g_847 = 0; g_847 < 7; g_847 += 1)
    {
        for (g_69 = 0; g_69 < 7; g_69 += 1)
        {
            g_1510[g_847][g_69] = 0x1DD21DB0L;
        }
    }
    --l_1653;
    for (g_633 = 0; (g_633 > 27); g_633++)
    { 
        uint8_t l_1659 = 0x75L;
        uint8_t **l_1674 = &g_269;
        union U1 l_1701[7] = {{0UL},{0UL},{4294967295UL},{0UL},{0UL},{4294967295UL},{0UL}};
        int32_t *l_1704[7] = {&g_6,(void*)0,(void*)0,&g_6,(void*)0,(void*)0,&g_6};
        union U2 **l_1706 = (void*)0;
        union U2 **l_1707 = &g_855;
        int16_t l_1714 = (-1L);
        int i;
        if (p_29)
        { 
            int32_t l_1658 = 0x21580104L;
            struct S0 l_1675[4] = {{0xECFD9A73L,-10L},{0xECFD9A73L,-10L},{0xECFD9A73L,-10L},{0xECFD9A73L,-10L}};
            int32_t l_1679[7] = {(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L)};
            int32_t l_1680[4][1][2] = {{{(-3L),(-1L)}},{{(-3L),(-3L)}},{{(-1L),(-3L)}},{{(-3L),(-1L)}}};
            int i, j, k;
            l_1659--;
            for (g_847 = (-4); (g_847 > 33); g_847 = safe_add_func_int8_t_s_s(g_847, 1))
            { 
                int8_t l_1668 = 0x5BL;
                uint8_t **l_1673[6][7] = {{&g_267,(void*)0,&g_269,&g_1492,&g_269,(void*)0,&g_267},{&g_269,&g_269,&g_269,&g_269,(void*)0,&g_269,(void*)0},{&g_1492,(void*)0,(void*)0,&g_1492,&g_1492,&g_267,&g_269},{&g_267,(void*)0,&g_269,&g_269,&g_267,&g_1492,(void*)0},{&g_269,&g_269,&g_267,(void*)0,&g_267,&g_269,&g_269},{&g_269,(void*)0,&g_269,(void*)0,&g_267,&g_269,(void*)0}};
                int16_t *l_1677 = (void*)0;
                int16_t *l_1678[1];
                int32_t *l_1688[4][1][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1678[i] = &g_299;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_1688[i][j][k] = &l_1679[4];
                    }
                }
                if (((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_1668, (l_1680[2][0][0] = ((*g_269) ^= (((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((l_1673[1][6] == ((**g_1008) = l_1674)) , (((*g_956) = 0x7B48L) ^ (l_1679[2] = ((l_1675[2] , &g_1489[0][1]) != g_1676)))), p_29)), p_29)) >= (*l_1649)) || l_1668))))), 1UL)) && 5L) >= 0xAD9D59AEL) | 6L))
                { 
                    uint8_t l_1687 = 248UL;
                    if (l_1668)
                        break;
                    (*l_1643) = (0xCD0C7DC23B9B3F91LL && ((safe_sub_func_uint64_t_u_u(l_1675[2].f0, ((65529UL <= (safe_sub_func_uint8_t_u_u(l_1659, (safe_mul_func_int16_t_s_s(((*g_1319) < p_29), p_29))))) , l_1687))) >= g_113));
                    return &g_623;
                }
                else
                { 
                    int32_t **l_1689 = &l_1641;
                    (*l_1646) = 0x3358958DL;
                    (*l_1689) = l_1688[0][0][0];
                    (*l_1689) = l_1688[0][0][0];
                }
            }
        }
        else
        { 
            struct S0 l_1699 = {0x059CBBFFL,2L};
            for (l_1659 = 3; (l_1659 != 58); l_1659++)
            { 
                uint32_t l_1698 = 0x49D97E78L;
                const uint64_t l_1700 = 0xFD43036642B2050FLL;
                union U1 *l_1702[5][2][7] = {{{&l_1701[0],(void*)0,(void*)0,&g_150[1],&l_1701[0],&l_1701[0],(void*)0},{&l_1701[0],&l_1701[0],&l_1701[0],(void*)0,&l_1701[0],&l_1701[0],&l_1701[0]}},{{(void*)0,&l_1701[0],&l_1701[0],&g_150[1],(void*)0,(void*)0,&l_1701[0]},{(void*)0,&l_1701[0],&l_1701[0],&l_1701[0],&l_1701[0],(void*)0,(void*)0}},{{&l_1701[0],&l_1701[0],&l_1701[0],(void*)0,&g_150[0],(void*)0,(void*)0},{&g_150[1],&g_150[0],&l_1701[0],&g_150[0],&g_150[1],(void*)0,&l_1701[0]}},{{&l_1701[6],&l_1701[0],(void*)0,&l_1701[0],&g_150[1],&l_1701[0],&g_150[1]},{&g_150[1],&l_1701[0],&l_1701[0],&g_150[1],&g_150[0],&l_1701[0],&l_1701[6]}},{{&l_1701[6],&l_1701[0],&g_150[0],&g_150[1],&l_1701[0],&l_1701[0],&g_150[1]},{&g_150[1],&l_1701[0],&g_150[1],&l_1701[0],(void*)0,&l_1701[0],&l_1701[6]}}};
                int i, j, k;
                for (g_249.f1 = 22; (g_249.f1 == (-23)); g_249.f1 = safe_sub_func_int16_t_s_s(g_249.f1, 2))
                { 
                    (*l_1643) |= (((*g_956) = (0x1F3DL | (p_29 ^ ((safe_rshift_func_uint16_t_u_u(((void*)0 == (**g_1317)), ((safe_div_func_int32_t_s_s(9L, g_845)) , (9UL & p_29)))) & g_1351)))) | 0x6E0DL);
                    (*l_1647) = l_1698;
                }
                (*g_914) = l_1699;
                if (l_1700)
                    break;
                g_1458 = ((g_1703 = (g_150[4] = l_1701[0])) , l_1704[1]);
            }
        }
        (*l_1707) = l_1705[5][2][2];
        (*l_1643) ^= ((-1L) | ((safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u(p_29, ((((((p_29 & (safe_add_func_uint8_t_u_u(((*g_1492) = 248UL), g_2[0][1]))) || l_1714) != (safe_div_func_uint64_t_u_u((*l_1646), p_29))) > (*l_1645)) | (*g_1625)) || p_29))), 0x3226C51E87692896LL)) , 0xFC1D08F58B83E88BLL));
    }
    (*l_1640) |= (safe_div_func_int16_t_s_s((p_29 | p_29), (safe_mul_func_int8_t_s_s((+65528UL), 0x7DL))));
    if (((l_1722 , l_1723) , (l_1724 && ((void*)0 != l_1705[5][2][2]))))
    { 
        return l_1725;
    }
    else
    { 
        return &g_623;
    }
}



static int8_t  func_30(uint16_t  p_31)
{ 
    int32_t l_980 = 0x0F29A1F0L;
    const uint8_t *l_981 = &g_150[1].f1;
    uint64_t *l_987 = &g_15[0];
    int32_t *l_988 = (void*)0;
    int32_t l_989[2];
    union U2 l_1013 = {0xBF6DL};
    uint32_t l_1016[4] = {0x2AC35C87L,0x2AC35C87L,0x2AC35C87L,0x2AC35C87L};
    uint16_t ** const *l_1018 = (void*)0;
    struct S0 **l_1034 = &g_913;
    struct S0 ***l_1033[5] = {&l_1034,&l_1034,&l_1034,&l_1034,&l_1034};
    int64_t l_1080 = (-7L);
    union U2 *l_1113 = &g_1114;
    uint32_t l_1122 = 0x5B02E7A9L;
    uint8_t l_1137 = 248UL;
    uint64_t **l_1212 = &l_987;
    uint64_t ***l_1211 = &l_1212;
    uint64_t ****l_1213 = &l_1211;
    int16_t l_1241 = 1L;
    uint8_t ***l_1277 = &g_1010;
    int32_t l_1290 = 0L;
    int64_t l_1374 = 3L;
    int8_t *l_1388 = &g_249.f1;
    int32_t l_1407 = 0x3D13B0EAL;
    uint8_t l_1442 = 0xC7L;
    int64_t **l_1461[1];
    uint8_t ** const * const **l_1487[4];
    int16_t **l_1509 = (void*)0;
    int16_t l_1566 = 0xFBFCL;
    const int8_t l_1593[5][1] = {{1L},{1L},{1L},{1L},{1L}};
    union U1 l_1617 = {0xF664E0EAL};
    int32_t *l_1634 = (void*)0;
    uint32_t l_1635 = 0x962E10EAL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_989[i] = 0x29BACAA0L;
    for (i = 0; i < 1; i++)
        l_1461[i] = &g_1319;
    for (i = 0; i < 4; i++)
        l_1487[i] = (void*)0;
    if ((((safe_div_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_980, (((*g_683) = (p_31 | (l_981 == l_981))) && p_31))), (((!(p_31 >= ((((l_989[1] = (((safe_sub_func_int64_t_s_s(((((safe_add_func_uint8_t_u_u((((*l_987) |= (l_980 > l_980)) ^ l_980), 0UL)) || 0x2746L) | p_31) <= l_980), 0L)) <= l_980) != 0x8DL)) | p_31) , 0x0710L) || l_980))) != 0L) , (*g_267)))), p_31)) && (-2L)) <= 0xE1D39453L))
    { 
        uint8_t ***l_1006 = (void*)0;
        uint8_t ****l_1005 = &l_1006;
        uint8_t *****l_1007 = &g_438[5][0];
        const int32_t l_1014 = 0L;
        int32_t l_1015 = (-5L);
        int32_t *l_1017[7][3] = {{&g_2[3][4],&g_53,&g_2[3][4]},{(void*)0,(void*)0,&g_443},{&g_229,&g_53,&g_229},{(void*)0,&g_443,&g_443},{&g_2[3][4],&g_53,&g_2[3][4]},{(void*)0,(void*)0,&g_443},{&g_229,&g_53,&g_229}};
        uint16_t ** const **l_1019 = &l_1018;
        int i, j;
        g_118[1] = (safe_mod_func_int64_t_s_s((((~(((safe_lshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s(p_31, (l_1015 = (safe_rshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s((*g_523), ((void*)0 != &g_855))), (((((safe_mul_func_int16_t_s_s((((*l_1007) = l_1005) == g_1008), ((safe_mod_func_int16_t_s_s(((((l_1013 , 0xC3FE19F0982B95D4LL) , (void*)0) == (void*)0) <= p_31), p_31)) , l_1014))) , 252UL) > (****g_1008)) < l_1014) < l_1014))) && (*g_523)), (**g_682)))))) > 1UL), 6)) , p_31) || p_31)) , l_1016[1]) , 0x0303C3958545F89ALL), g_54.f0));
        g_443 = 0L;
        (*l_1019) = l_1018;
    }
    else
    { 
        int32_t l_1020[3];
        uint8_t l_1042 = 252UL;
        uint64_t *l_1117 = &g_15[0];
        uint32_t l_1164 = 4294967287UL;
        int32_t l_1168 = 0L;
        uint16_t ** const l_1190 = &g_56[1];
        int i;
        for (i = 0; i < 3; i++)
            l_1020[i] = 0x3914CE8BL;
lbl_1127:
        l_1020[0] = (p_31 , 0x91AD56C1L);
        if (p_31)
        { 
            int32_t *l_1021 = &g_118[1];
            union U2 *l_1022[3];
            union U2 **l_1023 = (void*)0;
            int32_t l_1056 = 0x3A986A6EL;
            struct S0 l_1057 = {18446744073709551610UL,0x26L};
            int32_t l_1093 = 0x9D16C38EL;
            int32_t l_1096 = 0L;
            int32_t l_1097 = 0x03C07768L;
            int16_t l_1101 = 0x8C53L;
            int32_t l_1102 = 3L;
            int32_t l_1105 = 9L;
            int32_t l_1106 = 0x0A8C3429L;
            int32_t l_1107 = 5L;
            int32_t l_1108 = 0xC98669A5L;
            int32_t *l_1123 = &l_1097;
            int i;
            for (i = 0; i < 3; i++)
                l_1022[i] = &g_856[0];
            (*l_1021) = p_31;
            g_855 = l_1022[1];
            for (g_54.f1 = 0; (g_54.f1 <= 1); g_54.f1 += 1)
            { 
                struct S0 ***l_1035 = &l_1034;
                int8_t *l_1061 = &g_249.f1;
                int16_t *l_1070 = (void*)0;
                int16_t *l_1071 = &g_126;
                uint16_t *l_1079 = &g_623;
                int32_t l_1094 = 1L;
                int32_t l_1095 = 1L;
                int32_t l_1098 = (-7L);
                int32_t l_1099 = 1L;
                int32_t l_1100 = 1L;
                int32_t l_1103 = 0x259E20F1L;
                int32_t l_1104[2];
                uint8_t l_1109 = 255UL;
                union U2 *l_1112[6];
                int i;
                for (i = 0; i < 2; i++)
                    l_1104[i] = (-9L);
                for (i = 0; i < 6; i++)
                    l_1112[i] = &g_588;
                g_118[g_54.f1] = (((&l_1022[0] != (g_118[g_54.f1] , &l_1022[0])) < (safe_unary_minus_func_uint8_t_u(((++(*g_267)) > (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(p_31, (l_1033[4] != l_1035))) <= (safe_sub_func_uint64_t_u_u(((*l_987) ^= (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(1UL, (*g_956))), 6))), 0x5024AAE7895879FCLL))), 0xEC4282DBL)), l_1042)))))) | (*l_1021));
                for (g_402 = 0; (g_402 <= 2); g_402 += 1)
                { 
                    int i;
                    g_350 ^= ((+((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u(((g_11[g_402] < (((((g_11[g_402] , g_11[(g_54.f1 + 1)]) || l_1056) >= (g_11[g_402] & ((l_1057 , l_987) == (void*)0))) >= (*g_523)) < p_31)) || 0xB5616AD1L), 0x5C00L)) <= p_31) && g_856[0].f0) , g_118[g_54.f1]), l_1042)) < 0x6AB48E48L) || g_524), 246UL)), 0xA1A27DC9L)), g_2[0][1])) && 0xE5B7438066ACB374LL)) & g_7);
                    (*l_1021) = p_31;
                    if (g_118[g_54.f1])
                        continue;
                }
                l_1020[1] |= g_118[g_54.f1];
                if ((func_37((safe_div_func_int16_t_s_s((l_1020[0] = (!((l_1061 == ((((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((*l_1021) ^ 0L), ((*g_956)++))), (safe_div_func_uint16_t_u_u(((((((((((*l_1071) = p_31) > (((safe_rshift_func_uint16_t_u_u(((((((((*l_1079) = (safe_rshift_func_int8_t_s_u(((g_299 = (+(safe_add_func_int8_t_s_s((-1L), (*g_683))))) < 0x856CL), 4))) <= l_1080) , 0xE20D8DC1L) ^ g_183[0][0]) , (*l_1021)) , g_118[g_54.f1]) >= 0UL), (*l_1021))) , g_118[g_54.f1]) ^ 249UL)) || p_31) && p_31) || 0xD36022677551AB57LL) && (*g_683)) != 0x08L) && 0xB62D93D9E2E8F8AFLL) , 65535UL), 1UL)))) ^ 0x2CFCDE31L) < p_31) , (void*)0)) > (*l_1021)))), 65529UL))) , 9L))
                { 
                    int32_t **l_1081 = (void*)0;
                    int32_t **l_1082 = &g_530;
                    (*l_1082) = &l_989[1];
                }
                else
                { 
                    int32_t *l_1083 = &g_229;
                    int32_t *l_1084 = &g_118[1];
                    int32_t *l_1085 = &g_229;
                    int32_t *l_1086 = &l_980;
                    int32_t *l_1087 = (void*)0;
                    int32_t *l_1088 = (void*)0;
                    int32_t *l_1089 = (void*)0;
                    int32_t *l_1090 = &g_350;
                    int32_t *l_1091 = (void*)0;
                    int32_t *l_1092[5] = {&g_443,&g_443,&g_443,&g_443,&g_443};
                    int i;
                    l_1109--;
                    l_1113 = l_1112[2];
                    if ((*l_1021))
                        break;
                }
            }
            (*l_1123) &= ((safe_lshift_func_int16_t_s_s((((void*)0 == &l_1034) > ((g_150[4] , l_1117) == (void*)0)), p_31)) != (safe_add_func_int32_t_s_s((((((safe_div_func_int16_t_s_s(l_1020[0], p_31)) < (*l_1021)) == l_1122) <= p_31) && p_31), p_31)));
        }
        else
        { 
            int16_t l_1126 = (-1L);
            int32_t *l_1144 = &g_820;
            struct S0 l_1160 = {0xA76F4AD9L,0x52L};
            int32_t l_1189 = 0x9CBF079AL;
            int8_t *l_1209 = &g_54.f1;
            uint16_t *l_1210 = &g_623;
            for (g_845 = 0; (g_845 <= 3); g_845 += 1)
            { 
                int32_t **l_1124 = (void*)0;
                int32_t **l_1125 = &l_988;
                struct S0 *** const l_1155 = &l_1034;
                (*l_1125) = &l_1020[0];
                (**l_1125) = (((*l_987) = l_1126) | (*l_988));
                if (l_1122)
                    goto lbl_1127;
                for (g_229 = 0; (g_229 <= 2); g_229 += 1)
                { 
                    int64_t *l_1163 = &g_366;
                    int i, j;
                    if (l_1042)
                        goto lbl_1127;
                    (**l_1125) = (((~(safe_lshift_func_int8_t_s_s(((func_37((((safe_sub_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((((g_183[(g_229 + 1)][g_229] , ((safe_mod_func_int16_t_s_s(l_1137, (safe_lshift_func_int8_t_s_u(l_1126, 5)))) < (safe_div_func_uint8_t_u_u(p_31, (safe_add_func_uint64_t_u_u(((4L && (-1L)) && g_183[(g_229 + 1)][g_229]), 0x7DFCA573304E2E78LL)))))) , (*g_956)) >= g_133), 0x2FDFA87DL)) , (*g_267)), (***g_1009))) <= (*l_988)) , p_31)) , (void*)0) == (void*)0), 4))) ^ 7UL) >= p_31);
                    (*l_1125) = l_1144;
                    (*l_1144) = ((*l_988) <= (l_1020[0] |= (safe_rshift_func_uint8_t_u_s(p_31, (safe_add_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((((void*)0 == l_1155) >= ((*l_1163) |= (safe_mul_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u(((*l_987) = ((l_1160 , ((safe_mul_func_int8_t_s_s((*l_988), (&g_2[0][1] == &g_443))) <= g_183[(g_229 + 1)][g_229])) > g_623)), g_84)) , g_249.f0) , 0UL), (*l_988))))), 5)), 15)), l_1164)) >= p_31), g_183[(g_229 + 1)][g_229]))))));
                }
            }
lbl_1192:
            for (g_402 = (-14); (g_402 > 24); g_402 = safe_add_func_int16_t_s_s(g_402, 2))
            { 
                const struct S0 *l_1172 = &g_54;
                const struct S0 **l_1171 = &l_1172;
                const struct S0 *** const l_1170 = &l_1171;
                if ((g_11[0] < p_31))
                { 
                    uint64_t l_1167 = 0x958128DA29F047E1LL;
                    (*l_1144) = p_31;
                    (*l_1144) &= (p_31 , ((l_1167 ^= p_31) || (0x88405FC093E03AE4LL > l_1168)));
                    return p_31;
                }
                else
                { 
                    struct S0 *** const l_1169 = (void*)0;
                    int32_t l_1182 = 0x3A9AC8F6L;
                    uint16_t **l_1187[3];
                    uint16_t ***l_1188 = &l_1187[0];
                    int32_t *l_1191[6];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1187[i] = &g_56[1];
                    for (i = 0; i < 6; i++)
                        l_1191[i] = &l_1020[0];
                    if (p_31)
                        goto lbl_1127;
                    g_350 = (&g_366 != (void*)0);
                    if (g_54.f0)
                        goto lbl_1192;
                    (*l_1144) = ((l_1169 == l_1170) && (((safe_lshift_func_uint16_t_u_s((((0x5D7EF4A5L | p_31) == (!(safe_add_func_uint32_t_u_u(4294967290UL, (((safe_rshift_func_uint8_t_u_s((l_1182 != ((((safe_rshift_func_int16_t_s_u((0x6D2C8DBBE07DF27ALL > g_7), p_31)) == p_31) == 0x18L) < (-10L))), (*l_1144))) & 0UL) != (*g_523)))))) < (-4L)), 15)) < (*g_269)) != p_31));
                    g_443 |= ((p_31 ^ p_31) && (safe_mul_func_uint8_t_u_u(((((*l_1188) = l_1187[0]) == (l_1189 , l_1190)) <= ((*l_1144) || (&g_366 != &g_524))), (**g_682))));
                }
                (*l_1034) = &g_249;
                if (g_84)
                    continue;
                if (l_1020[0])
                    break;
            }
            for (l_1189 = 6; (l_1189 >= (-8)); l_1189--)
            { 
                for (g_108 = 0; g_108 < 7; g_108 += 1)
                {
                    for (g_53 = 0; g_53 < 3; g_53 += 1)
                    {
                        g_438[g_108][g_53] = &g_1009;
                    }
                }
            }
            l_980 ^= (safe_mul_func_uint16_t_u_u((p_31 & (0x48L <= 0x90L)), ((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((**l_1190) = p_31), (247UL < ((safe_rshift_func_uint16_t_u_u(((*l_1210) = ((safe_unary_minus_func_uint64_t_u(p_31)) > (safe_add_func_int64_t_s_s((+(safe_rshift_func_int8_t_s_s((((*l_1209) ^= (**g_682)) & (*g_683)), (*g_683)))), (*g_523))))), p_31)) || p_31)))), (*l_1144))) ^ (-2L))));
            for (g_53 = 2; (g_53 >= 0); g_53 -= 1)
            { 
                int i;
                return l_1020[g_53];
            }
        }
    }
    if ((((*l_1213) = l_1211) == (void*)0))
    { 
        int16_t l_1224 = (-4L);
        union U1 *l_1226 = &g_150[5];
        union U1 **l_1225 = &l_1226;
        union U2 l_1231[4][5] = {{{7L},{1L},{7L},{1L},{7L}},{{0x5DC7L},{0x5DC7L},{0xF00EL},{0xF00EL},{0x5DC7L}},{{-1L},{1L},{-1L},{1L},{-1L}},{{0x5DC7L},{0xF00EL},{0xF00EL},{0x5DC7L},{0x5DC7L}}};
        int32_t l_1303 = 1L;
        int32_t l_1310[7] = {0xED46BA1FL,0xED46BA1FL,0xED46BA1FL,0xED46BA1FL,0xED46BA1FL,0xED46BA1FL,0xED46BA1FL};
        uint8_t l_1349 = 255UL;
        int8_t *l_1459 = &g_54.f1;
        struct S0 l_1467 = {0xF46501E0L,9L};
        uint8_t *****l_1486 = &g_438[6][2];
        uint16_t *l_1548 = &g_57;
        uint64_t l_1567 = 0x7189EB51DC76D470LL;
        int64_t **l_1580 = &g_1319;
        int i, j;
        if ((((**g_1010) = (((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(g_133, (safe_sub_func_int32_t_s_s((1UL == ((safe_mul_func_int16_t_s_s(((g_11[0] != (safe_mod_func_uint16_t_u_u(((*g_956) &= l_1224), 1L))) <= ((((*l_1225) = &g_150[3]) == (void*)0) >= p_31)), 0x7C03L)) , 0x4047DCFEL)), p_31)))) && 0x0277AF9CL), p_31)) , 0x6D01B949L) != g_6)) ^ p_31))
        { 
            uint32_t *l_1232 = &g_84;
            uint32_t *l_1233 = (void*)0;
            uint32_t *l_1234 = &g_150[1].f0;
            uint32_t *l_1235 = &g_402;
            int32_t l_1238 = 1L;
            struct S0 l_1268 = {0x5D571392L,0x4EL};
            uint8_t ***l_1275[1];
            struct S0 ****l_1291 = &l_1033[4];
            int32_t *l_1300 = (void*)0;
            int32_t *l_1301 = (void*)0;
            int32_t *l_1302[1][7] = {{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53}};
            int8_t ***l_1307 = (void*)0;
            int8_t ****l_1306 = &l_1307;
            uint64_t l_1309 = 0xB6B316FDD19A01BBLL;
            int8_t l_1312 = (-2L);
            uint64_t l_1313[7] = {5UL,5UL,5UL,5UL,5UL,5UL,5UL};
            int32_t **l_1316 = &g_530;
            int64_t * const ***l_1320 = &g_1317;
            uint64_t * const *l_1329 = &l_987;
            uint64_t * const **l_1328 = &l_1329;
            uint64_t * const *** const l_1327 = &l_1328;
            uint32_t l_1330 = 1UL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_1275[i] = &g_1010;
            if ((safe_rshift_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(p_31, (l_1231[2][3] , p_31))) >= ((**l_1034) , ((*l_1235) &= ((*l_1232) = (g_183[1][0] = g_524))))) , 0xC8B0L), (safe_mul_func_uint16_t_u_u((*g_956), l_1238)))))
            { 
                const uint16_t * const l_1240 = &g_623;
                int32_t l_1245 = 0xEB855D4CL;
                union U1 **l_1266 = &l_1226;
                (*l_1225) = (*l_1225);
                for (g_366 = 0; (g_366 <= 2); g_366 += 1)
                { 
                    const uint32_t l_1239[6] = {0x38BD575EL,0x38BD575EL,0x38BD575EL,0x38BD575EL,0x38BD575EL,0x38BD575EL};
                    int32_t l_1244 = 1L;
                    uint32_t *l_1248 = &g_113;
                    int16_t *l_1267 = (void*)0;
                    int i;
                    l_1241 |= (l_1239[2] && ((void*)0 == l_1240));
                    l_1245 = (l_1238 & ((l_1244 &= (l_1239[2] , (safe_mul_func_int16_t_s_s(0x2095L, 3L)))) < p_31));
                    (**l_1034) = (((safe_mul_func_int16_t_s_s(((++(*l_1248)) , l_1231[2][3].f0), (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((g_126 = ((safe_unary_minus_func_uint32_t_u((p_31 , (safe_add_func_int32_t_s_s(p_31, p_31))))) > (safe_add_func_uint64_t_u_u(((void*)0 == l_1266), l_1245)))), p_31)) <= 255UL), p_31)), (*g_956))), 2)), l_1238)))) , l_1238) , l_1268);
                    l_1244 |= 0x2E980210L;
                }
                for (g_623 = (-25); (g_623 == 44); ++g_623)
                { 
                    uint8_t ****l_1276 = &l_1275[0];
                    int32_t *l_1278[2];
                    uint16_t **l_1289 = &g_56[1];
                    struct S0 *****l_1292 = &l_1291;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1278[i] = &l_1245;
                    l_980 |= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((**g_682), 5)), ((((****g_1008) ^= (((*l_1276) = l_1275[0]) == (p_31 , l_1277))) != 0x0FL) == g_126)));
                    if (g_623)
                        goto lbl_1311;
                    g_118[1] = ((void*)0 != l_1277);
                    (*l_1292) = ((((g_229 = (g_150[1] , 0x23C27E40L)) <= (((safe_rshift_func_uint16_t_u_u((((((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(p_31, l_1245)), (safe_div_func_int64_t_s_s(0L, (safe_sub_func_uint64_t_u_u((((*l_1289) = func_44((**l_1225), (*g_523))) == (void*)0), g_133)))))) || g_847) ^ l_1245) ^ 0xC645F4CBE6E5B065LL) , p_31), l_1290)) , (void*)0) != (void*)0)) <= g_150[1].f1) , l_1291);
                }
            }
            else
            { 
                return l_1268.f0;
            }
            if ((l_1310[3] ^= (safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((+((void*)0 == l_1233)), (safe_rshift_func_uint8_t_u_s((l_1309 ^= ((l_1303 |= (-1L)) > ((safe_rshift_func_int16_t_s_u(((*g_683) & (((*l_1306) = (void*)0) != &g_682)), ((~((((void*)0 == g_506) || 18446744073709551615UL) < l_1231[2][3].f0)) , p_31))) == 0xF7L))), 7)))) & (*g_956)), p_31))))
            { 
lbl_1311:
                for (g_847 = 0; (g_847 <= 1); g_847 += 1)
                { 
                    int i;
                    if (g_118[g_847])
                        break;
                    return g_118[g_847];
                }
                l_1313[1]++;
                (*l_1316) = &g_820;
                return (**g_682);
            }
            else
            { 
                (*l_1316) = &g_53;
            }
            if ((((*l_1320) = g_1317) != (void*)0))
            { 
                const uint8_t l_1326 = 0xF2L;
                int32_t l_1335 = (-6L);
                for (g_54.f1 = (-28); (g_54.f1 <= 26); g_54.f1 = safe_add_func_uint8_t_u_u(g_54.f1, 7))
                { 
                    int32_t *l_1323 = (void*)0;
                    struct S0 l_1331 = {0x94894538L,0L};
                    (*l_1316) = l_1323;
                    (*l_1316) = (*l_1316);
                    l_989[0] = (((**g_682) &= ((l_1310[3] <= (safe_lshift_func_uint16_t_u_u((((***g_1317) && l_1326) <= ((void*)0 == l_1327)), 0))) ^ l_1330)) == ((l_1331 , p_31) == p_31));
                    return (*g_683);
                }
                (*g_530) = (safe_unary_minus_func_int8_t_s((l_1335 = (safe_div_func_int16_t_s_s(((void*)0 != &l_1231[2][3]), p_31)))));
            }
            else
            { 
                int8_t l_1347 = (-8L);
                int32_t l_1348[7][3][6] = {{{0L,8L,(-2L),4L,(-1L),(-5L)},{0L,6L,0x57CD4101L,(-1L),0x57CD4101L,6L},{0L,(-5L),(-1L),4L,(-2L),8L}},{{0L,(-1L),0L,(-1L),(-1L),0L},{(-1L),(-1L),4L,0L,(-2L),(-1L)},{6L,(-5L),4L,4L,0x57CD4101L,4L}},{{4L,6L,4L,8L,(-1L),(-1L)},{5L,8L,4L,3L,0L,0L},{3L,0L,0L,3L,4L,8L}},{{5L,(-1L),(-1L),8L,4L,6L},{4L,4L,0x57CD4101L,4L,4L,(-5L)},{6L,(-1L),(-2L),0L,4L,(-1L)}},{{(-1L),0L,(-1L),(-1L),0L,(-1L)},{0L,8L,(-2L),4L,(-1L),(-5L)},{0L,6L,0x57CD4101L,(-1L),0x57CD4101L,6L}},{{0L,(-5L),(-1L),4L,(-2L),8L},{0L,(-1L),0L,(-1L),(-1L),0L},{(-1L),(-1L),4L,0L,(-2L),(-1L)}},{{6L,(-5L),4L,4L,0x57CD4101L,4L},{4L,6L,4L,8L,(-1L),(-1L)},{5L,8L,4L,3L,0L,0L}}};
                int i, j, k;
                for (g_229 = (-13); (g_229 >= (-14)); --g_229)
                { 
                    int16_t l_1346 = 0xE5F5L;
                    int32_t l_1350[3][5] = {{(-6L),(-1L),0x4EFDC8EDL,0x4EFDC8EDL,(-1L)},{0L,0xDD9B01B8L,0x4EFDC8EDL,7L,7L},{0xDD9B01B8L,0L,0xDD9B01B8L,0x4EFDC8EDL,7L}};
                    int i, j;
                    l_1349 = (l_1348[6][2][0] = (g_443 &= ((safe_add_func_uint32_t_u_u(g_299, (((**l_1316) = (((safe_lshift_func_uint8_t_u_u((g_820 > (safe_unary_minus_func_int64_t_s((((g_249.f0 == p_31) & ((safe_mod_func_int16_t_s_s((p_31 , p_31), (safe_unary_minus_func_uint16_t_u(l_1231[2][3].f0)))) > p_31)) | l_1346)))), 5)) , p_31) <= g_11[0])) >= l_1347))) == p_31)));
                    g_1351++;
                }
            }
            (*g_913) = (****l_1291);
        }
        else
        { 
            int32_t *l_1365 = &l_1303;
            int32_t l_1373 = 0xB024D340L;
            int32_t l_1375[7][3] = {{0x0FAEE1E0L,2L,0x0FAEE1E0L},{(-1L),0xCA1FA679L,0xCA1FA679L},{0x2388F429L,2L,0x2388F429L},{(-1L),(-1L),0xCA1FA679L},{0x0FAEE1E0L,2L,0x0FAEE1E0L},{(-1L),0xCA1FA679L,0xCA1FA679L},{0x2388F429L,2L,0x2388F429L}};
            int32_t l_1376 = 0x7CE526DBL;
            uint16_t l_1377 = 1UL;
            int16_t l_1411 = 0L;
            uint8_t ***l_1436 = (void*)0;
            int32_t *l_1474 = &l_989[1];
            int i, j;
            if (((((1L != 6UL) != ((safe_mod_func_uint8_t_u_u(((*g_913) , (l_1231[2][3].f0 <= (safe_mod_func_int64_t_s_s(p_31, (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((*l_1365) = (safe_lshift_func_int8_t_s_s(((*g_683) = (+p_31)), (0xC8L || 0xBBL)))), p_31)), g_299)))))), p_31)) ^ p_31)) && g_229) < 0UL))
            { 
                int64_t l_1366[3];
                int32_t l_1367[2][3];
                int32_t *l_1368 = &l_989[1];
                int32_t *l_1369 = &g_53;
                int32_t *l_1370 = &g_229;
                int32_t *l_1371 = &l_1367[0][1];
                int32_t *l_1372[6][4] = {{&g_443,&l_1367[1][0],&g_443,&l_1367[1][0]},{&g_7,(void*)0,&g_443,&g_443},{&l_1367[1][0],(void*)0,(void*)0,&l_1367[1][0]},{(void*)0,&l_1367[1][0],&g_7,&g_443},{(void*)0,&g_7,(void*)0,&g_443},{(void*)0,&g_443,&g_443,&g_443}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1366[i] = 0x09227EB7522E54C6LL;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1367[i][j] = 0xEB2C43FCL;
                }
                ++l_1377;
            }
            else
            { 
                int16_t l_1402 = 0x38E0L;
                int32_t l_1408 = 1L;
                int32_t l_1409[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1409[i] = 0xE14D7868L;
                if (((*l_1365) = (((safe_lshift_func_uint16_t_u_u(0xEF41L, 4)) ^ (safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((l_1310[0] = ((safe_sub_func_int32_t_s_s(0xE59C3063L, (l_981 != (l_1388 = l_1388)))) & 0x90DFL)), (*l_1365))) || ((g_820 , 9L) < (-8L))), 0L))) , p_31)))
                { 
                    int32_t l_1389 = 2L;
                    return l_1389;
                }
                else
                { 
                    int32_t *l_1390 = &l_1376;
                    int32_t *l_1392 = &g_229;
                    int32_t *l_1393 = &l_1375[2][2];
                    int32_t *l_1394 = &l_1310[6];
                    int32_t *l_1395 = &g_443;
                    int32_t *l_1396 = &g_118[1];
                    int32_t *l_1397 = &g_118[1];
                    int32_t *l_1398 = (void*)0;
                    int32_t *l_1399 = &g_53;
                    int32_t *l_1400 = &l_1303;
                    int32_t *l_1401 = &g_443;
                    int32_t *l_1403 = &l_989[1];
                    int32_t *l_1404 = (void*)0;
                    int32_t *l_1405 = &l_1375[4][1];
                    int32_t *l_1406[4];
                    int64_t l_1410 = (-1L);
                    uint32_t l_1412 = 0x85821E05L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1406[i] = &g_820;
                    (*l_1390) |= (*l_1365);
                    if (l_980)
                        goto lbl_1391;
lbl_1391:
                    (*l_1390) = (0xA3L >= l_1310[5]);
                    --l_1412;
                }
                for (g_57 = 0; (g_57 < 5); ++g_57)
                { 
                    uint8_t l_1429[3];
                    const uint8_t **l_1438 = &l_981;
                    const uint8_t ***l_1437[2];
                    int32_t l_1441 = 0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1429[i] = 0x2BL;
                    for (i = 0; i < 2; i++)
                        l_1437[i] = &l_1438;
                    (*l_1365) = (safe_unary_minus_func_uint64_t_u(g_9));
                    (*l_1365) = ((+(p_31 & (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((p_31 , (safe_mod_func_uint64_t_u_u(((void*)0 != g_1425), ((safe_rshift_func_uint8_t_u_s((++l_1429[1]), ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((l_1436 == l_1437[0]) | (safe_lshift_func_int16_t_s_u(((**l_1034) , g_299), p_31))), l_1441)), p_31)) != l_1408))) || l_1429[1])))) , (*g_683)), (*g_683))), (*g_683))))) == (-4L));
                }
                l_1442++;
            }
lbl_1473:
            g_53 &= (safe_rshift_func_uint8_t_u_u((+(l_1231[1][0] , ((safe_add_func_int16_t_s_s((&g_11[0] == (void*)0), g_249.f0)) <= p_31))), 3));
            for (g_54.f1 = 22; (g_54.f1 >= (-14)); g_54.f1 = safe_sub_func_uint16_t_u_u(g_54.f1, 4))
            { 
                const uint32_t l_1472 = 0x28938D02L;
                for (g_366 = 28; (g_366 > (-19)); g_366 = safe_sub_func_uint64_t_u_u(g_366, 8))
                { 
                    int32_t *l_1454 = &g_118[1];
                    int32_t **l_1455 = (void*)0;
                    int32_t **l_1456 = &g_530;
                    int32_t **l_1457[5][3] = {{&l_1454,&l_1454,&l_1454},{&l_1454,&l_988,(void*)0},{&l_988,&l_1454,&l_988},{&l_988,&l_1454,&l_1454},{&l_1454,&l_988,&l_988}};
                    int8_t **l_1460 = &l_1388;
                    int64_t **l_1463 = &g_1319;
                    int64_t ***l_1462[3][5][2] = {{{&l_1461[0],&l_1463},{&l_1461[0],&l_1463},{&l_1461[0],&l_1463},{&l_1461[0],&l_1461[0]},{&l_1463,&l_1461[0]}},{{&l_1463,&l_1461[0]},{&l_1463,&l_1461[0]},{&l_1461[0],&l_1463},{&l_1461[0],&l_1463},{&l_1461[0],&l_1463}},{{&l_1461[0],&l_1461[0]},{&l_1463,&l_1461[0]},{&l_1463,&l_1461[0]},{&l_1463,&l_1461[0]},{&l_1461[0],&l_1463}}};
                    int i, j, k;
                    (*l_1456) = l_1454;
                    g_1458 = ((*l_1456) = (void*)0);
                    (*l_1454) &= ((((((((p_31 && (((*g_682) = (void*)0) != ((*l_1460) = l_1459))) , l_1461[0]) != (g_1464 = &g_1319)) || (safe_mod_func_int64_t_s_s((l_1303 = (l_1467 , (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0xAA895777L, 0x59C751BDL)), p_31)))), (**g_1464)))) , 4UL) , 1L) != l_1472) ^ p_31);
                    (**l_1034) = (*g_914);
                    if (l_1013.f0)
                        goto lbl_1473;
                }
            }
            (*l_1474) ^= (*l_1365);
        }
        for (g_14 = (-5); (g_14 != 23); ++g_14)
        { 
            uint32_t l_1481 = 0x5E6C3105L;
            int16_t *l_1493 = (void*)0;
            int16_t *l_1494 = &g_108;
            int32_t *l_1495 = &g_118[1];
            int8_t **l_1513 = &l_1388;
            uint16_t **l_1546 = &g_56[1];
            uint16_t ***l_1545[6][3] = {{(void*)0,&l_1546,&l_1546},{(void*)0,(void*)0,&l_1546},{&l_1546,&l_1546,&l_1546},{&l_1546,&l_1546,&l_1546},{&l_1546,&l_1546,&l_1546},{(void*)0,&l_1546,&l_1546}};
            int32_t l_1564[2];
            union U2 **l_1618 = &g_855;
            int32_t *l_1626[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_1627 = 5UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1564[i] = (-1L);
            if (((*l_1495) = (((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0x3452L, l_1481)), ((*g_267) != (safe_mod_func_uint32_t_u_u((((l_1303 = ((*l_1494) = (safe_rshift_func_uint8_t_u_u(((l_1486 = (void*)0) == (g_1488 = l_1487[1])), p_31)))) < ((p_31 , 0xD55B6CC5AF7E48A7LL) != p_31)) | p_31), g_229))))) < 1UL) ^ 4294967292UL)))
            { 
                union U1 l_1498 = {4UL};
                int8_t **l_1514 = &l_1459;
                int32_t l_1539[6][2] = {{0xD73DAA61L,0xD73DAA61L},{0xD73DAA61L,0xD73DAA61L},{0xD73DAA61L,0xD73DAA61L},{0xD73DAA61L,0xD73DAA61L},{0xD73DAA61L,0xD73DAA61L},{0xD73DAA61L,0xD73DAA61L}};
                int i, j;
                if (p_31)
                    break;
                if ((safe_mul_func_int16_t_s_s((((g_150[2] , l_1498) , ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(0UL, (safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((*l_987) = (((*l_1495) = ((1L ^ p_31) & (((&l_1494 == l_1509) , p_31) & g_1510[5][0]))) != l_1498.f1)), g_623)), p_31)), p_31)))), 2)) || p_31)) < 5UL), l_1310[3])))
                { 
                    int32_t **l_1511 = &g_1458;
                    int64_t ***l_1512 = &l_1461[0];
                    uint8_t ****l_1530 = &l_1277;
                    uint8_t * const ****l_1532 = &g_1531;
                    uint32_t *l_1540[3][6] = {{&g_150[1].f0,&g_150[1].f0,&g_150[1].f0,&g_150[1].f0,&g_150[1].f0,&g_150[1].f0},{&g_150[1].f0,&g_150[1].f0,&g_150[1].f0,&g_150[1].f0,&g_150[1].f0,&g_150[1].f0},{&g_150[1].f0,&g_150[1].f0,&g_150[1].f0,&g_150[1].f0,&g_150[1].f0,&g_150[1].f0}};
                    uint16_t *l_1547 = (void*)0;
                    int i, j;
                    (*l_1511) = (void*)0;
                    (*l_1495) |= (((*l_1512) = &g_1319) != (((l_1513 != l_1514) && (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s(((**l_1513) = ((safe_rshift_func_int8_t_s_s((+((**g_1491) = l_1498.f1)), (safe_sub_func_int16_t_s_s((l_1530 != ((*l_1532) = g_1531)), ((*l_1494) = ((-1L) && p_31)))))) || g_229)), l_1231[2][3].f0)) != 0xB6L), 13)) || p_31), p_31)), 0x3E8FL)), p_31))) , (*g_1317)));
                    l_1310[3] = (safe_add_func_uint16_t_u_u(l_1498.f0, (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((l_1539[3][1] ^= l_1498.f0) , (((g_402--) > (l_1498 , ((((***l_1277) = ((((safe_sub_func_int32_t_s_s(((void*)0 != l_1545[3][2]), (((((*l_1546) = &g_57) != (l_1548 = l_1547)) & 0x87L) == 3UL))) && p_31) , l_1310[5]) && 0x3CF83A89L)) ^ 0UL) , p_31))) == 8L)), p_31)), 6))));
                    l_988 = &l_1539[2][1];
                }
                else
                { 
                    int32_t l_1549 = (-1L);
                    int32_t *l_1550 = &l_989[1];
                    int32_t *l_1551 = &g_229;
                    int32_t *l_1552 = &l_1303;
                    int32_t *l_1553 = &g_350;
                    int32_t *l_1554 = &l_1310[3];
                    int32_t *l_1555 = &l_989[1];
                    int32_t *l_1556 = &l_989[1];
                    int32_t *l_1557 = (void*)0;
                    int32_t *l_1558 = &l_989[1];
                    int32_t *l_1559 = &l_1539[0][1];
                    int32_t *l_1560 = &g_118[1];
                    int32_t *l_1561 = (void*)0;
                    int32_t *l_1562 = &l_1310[6];
                    int32_t l_1563 = 0xB3970F8FL;
                    int32_t *l_1565[2][1][7] = {{{&g_2[0][1],&g_2[0][1],&g_53,&g_2[0][1],&g_2[0][1],&g_53,&g_2[0][1]}},{{&l_1539[4][1],&l_1549,&l_1549,&l_1539[4][1],&l_1549,&l_1549,&l_1539[4][1]}}};
                    uint32_t *l_1592 = &g_183[2][0];
                    const int16_t *l_1602[5][4] = {{&l_1013.f0,&l_1013.f0,&l_1013.f0,&l_1013.f0},{&l_1013.f0,&l_1013.f0,&l_1013.f0,&l_1013.f0},{&l_1013.f0,&l_1013.f0,&l_1013.f0,&l_1013.f0},{&l_1013.f0,&l_1013.f0,&l_1013.f0,&l_1013.f0},{&l_1013.f0,&l_1013.f0,&l_1013.f0,&l_1013.f0}};
                    int i, j, k;
                    if (p_31)
                        break;
                    l_1567--;
                    l_1539[3][1] = ((*l_1495) ^= p_31);
                    (*l_1550) = (((*l_1552) != (safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((*l_1559), 12)) == (((--(****g_1008)) , l_1514) == l_1513)), (safe_div_func_int64_t_s_s(((*g_1319) &= (-7L)), (((((*g_956) & ((((safe_div_func_int8_t_s_s(((**l_1514) = p_31), 1UL)) , l_1580) == (void*)0) == p_31)) & l_1539[3][1]) >= p_31) , p_31)))))) != (-4L));
                    (*l_1558) ^= ((safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(g_633, (safe_mul_func_uint16_t_u_u((&g_299 == ((safe_mul_func_uint8_t_u_u(((*g_855) , (safe_rshift_func_int16_t_s_u(((((*l_1592) ^= (~6UL)) || l_1593[2][0]) == ((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((--(**l_1546)), ((safe_mod_func_int32_t_s_s((l_1310[2] > l_1303), (*l_1495))) == (*l_1495)))), (*l_1495))) ^ 0xA0L)), p_31))), (*l_1554))) , l_1602[4][3])), 0xE718L)))), 0UL)) | l_1310[3]);
                }
                for (l_980 = 0; (l_980 != (-21)); l_980--)
                { 
                    return p_31;
                }
            }
            else
            { 
                uint64_t l_1619 = 0xB5CE521FC874F563LL;
                int32_t **l_1622 = &g_530;
                if (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s(l_1310[3], ((((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*l_1113) , (0xE4BE4214L >= ((((&g_855 != (l_1618 = ((g_150[1] = l_1617) , &l_1113))) , (*g_855)) , p_31) > 0xBCADL))), 0x17D3EFA9L)), p_31)), l_1619)) , (void*)0) == (void*)0) , l_1442))) >= 0xCCL) ^ p_31) || 7UL), p_31)), 6)) == l_1619))
                { 
                    if (l_1310[1])
                        break;
                    g_1458 = &g_2[2][1];
                }
                else
                { 
                    uint32_t l_1620 = 1UL;
                    int32_t **l_1621 = &g_530;
                    l_1620 = 0x42FB5636L;
                    if (p_31)
                        continue;
                    (*l_1621) = &g_6;
                }
                (*l_1622) = &l_1310[4];
            }
            g_820 = ((*l_1495) = (((void*)0 == g_1623) == (l_1231[2][3].f0 <= ((l_1303 , (*g_1317)) == (*g_1317)))));
            --l_1627;
        }
    }
    else
    { 
        struct S0 *** const **l_1630 = (void*)0;
        struct S0 *** const **l_1631 = (void*)0;
        struct S0 *** const *l_1633 = &l_1033[4];
        struct S0 *** const **l_1632 = &l_1633;
        (*l_1632) = &g_1425;
    }
    --l_1635;
    for (g_133 = 0; (g_133 >= 20); g_133 = safe_add_func_uint8_t_u_u(g_133, 1))
    { 
        return p_31;
    }
    return p_31;
}



static int16_t  func_32(union U2  p_33, int32_t * p_34, int32_t * p_35, uint16_t * p_36)
{ 
    int64_t l_957 = (-1L);
    int64_t *l_965 = &g_366;
    int64_t **l_964 = &l_965;
    int8_t ***l_970 = &g_682;
    int64_t *l_971 = &g_366;
    uint32_t *l_972 = (void*)0;
    uint32_t *l_973 = &g_11[0];
    (*p_34) = l_957;
    (*p_34) ^= (safe_lshift_func_int8_t_s_s((l_957 <= l_957), ((safe_sub_func_int32_t_s_s(l_957, ((safe_sub_func_uint8_t_u_u(((((g_299 , ((*l_964) = &l_957)) == (func_37(((*l_973) &= (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((*l_971) = (&g_683 != ((*l_970) = &g_683))) == 0x153BB06E4451C431LL), 0x7BL)) <= g_249.f1), 3)))) , &g_366)) | g_84) & 65535UL), p_33.f0)) , p_33.f0))) > 2UL)));
    return p_33.f0;
}



static union U2  func_37(uint32_t  p_38)
{ 
    int64_t l_83 = 0x4927B92311C7DC5ELL;
    int32_t l_109 = 1L;
    struct S0 l_142 = {0x1B8B0164L,-4L};
    uint16_t *l_165 = (void*)0;
    int32_t l_169 = 0x3AE84E38L;
    int32_t l_171 = 0x0CACEDF7L;
    int32_t l_179 = 0L;
    int32_t l_216[2];
    uint8_t l_217 = 251UL;
    union U2 l_220 = {0x0EF3L};
    uint8_t ** const l_279 = &g_267;
    uint8_t ** const *l_278 = &l_279;
    int8_t l_300 = 0x86L;
    int32_t l_301[5][4][4] = {{{0x7FCC6718L,0xC74CE602L,(-1L),1L},{2L,0xFC7BBDCEL,(-1L),0x7FCC6718L},{0x7FCC6718L,3L,0L,1L},{0x75CA05FDL,0x9E31F1BBL,(-9L),(-6L)}},{{(-9L),(-6L),0x11670AD5L,3L},{1L,2L,0x7216A071L,0x7216A071L},{0x9CDC397BL,0x9CDC397BL,(-6L),0x9E31F1BBL},{0L,2L,0x5E84BC4EL,0x11670AD5L}},{{0x9E31F1BBL,1L,0xF7F89DB1L,0x5E84BC4EL},{(-6L),1L,0xFC7BBDCEL,0x11670AD5L},{1L,2L,2L,0x9E31F1BBL},{0x4BC582DDL,0x9CDC397BL,1L,0x7216A071L}},{{0xF7F89DB1L,2L,1L,3L},{1L,(-6L),0x75CA05FDL,2L},{0xE83EE810L,0xB5F8E1F5L,0x5828B9E6L,1L},{(-6L),0x5828B9E6L,1L,5L}},{{2L,0L,0x9E31F1BBL,(-6L)},{2L,2L,1L,0x9CDC397BL},{(-6L),(-6L),0x5828B9E6L,0xFC7BBDCEL},{0xE83EE810L,0xF7F89DB1L,1L,(-1L)}}};
    uint64_t l_303 = 0x81CB12F658D928CALL;
    struct S0 **l_348 = &g_241;
    int8_t l_363 = 0xE2L;
    uint32_t l_367 = 0x80EB1B32L;
    uint32_t l_476 = 0xD8CCA9A7L;
    int32_t *l_483 = &l_171;
    uint8_t **l_542 = &g_267;
    uint8_t ***l_541 = &l_542;
    union U2 *l_587 = &g_588;
    int32_t *l_629 = &l_109;
    int16_t l_679 = 0x6E96L;
    int16_t l_752 = 0L;
    struct S0 *l_788 = &g_249;
    int64_t l_821 = (-1L);
    union U1 l_848 = {3UL};
    uint8_t ***l_866 = (void*)0;
    uint64_t *l_938 = (void*)0;
    uint64_t **l_937 = &l_938;
    int64_t *l_947 = (void*)0;
    int64_t **l_946 = &l_947;
    int64_t *** const l_945 = &l_946;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_216[i] = 0x32EDF728L;
    for (g_54.f0 = (-27); (g_54.f0 <= 20); g_54.f0 = safe_add_func_uint16_t_u_u(g_54.f0, 5))
    { 
        uint32_t l_114[7];
        int32_t l_153[1][5][7] = {{{0x829FC7FAL,0L,0x829FC7FAL,5L,5L,0x829FC7FAL,0L},{0x07D60D11L,0L,0xF0C6F357L,0xF0C6F357L,0L,0x07D60D11L,0L},{0x829FC7FAL,5L,5L,0x829FC7FAL,0L,0x829FC7FAL,5L},{1L,1L,0x07D60D11L,0xF0C6F357L,0x07D60D11L,1L,1L},{0x9E253320L,5L,(-1L),5L,0x9E253320L,0x9E253320L,5L}}};
        uint16_t *l_164 = (void*)0;
        int8_t l_215[6][2] = {{3L,0xD4L},{0xD4L,3L},{0xD4L,0xD4L},{3L,0xD4L},{0xD4L,3L},{0xD4L,0xD4L}};
        uint16_t l_230 = 0xA9E8L;
        union U1 l_231 = {1UL};
        struct S0 *l_259 = &l_142;
        int32_t l_264 = 0x3A04C8BEL;
        uint8_t *l_270 = &g_150[1].f1;
        int16_t *l_272 = &g_108;
        int32_t *l_287 = &l_216[1];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_114[i] = 4294967295UL;
        for (g_69 = 0; (g_69 > (-13)); g_69--)
        { 
            uint32_t l_78 = 18446744073709551610UL;
            int32_t l_115 = (-1L);
            int16_t *l_125[1][7][2];
            int32_t l_156 = 0x715EE1BDL;
            uint16_t *l_163[2];
            int32_t l_170 = 0xF8F730D7L;
            int32_t l_173 = (-1L);
            int32_t l_175 = (-10L);
            int32_t l_176[7];
            union U1 l_186[2][2] = {{{4294967291UL},{4294967291UL}},{{4294967291UL},{4294967291UL}}};
            struct S0 *l_189 = &g_54;
            int32_t *l_214 = &g_118[0];
            int16_t l_258 = (-1L);
            union U1 *l_266 = &l_186[0][1];
            uint8_t **l_268[3];
            int16_t **l_271[3][6] = {{&l_125[0][1][1],(void*)0,&l_125[0][1][1],(void*)0,&l_125[0][1][1],(void*)0},{&l_125[0][1][1],(void*)0,&l_125[0][1][1],(void*)0,&l_125[0][1][1],(void*)0},{&l_125[0][1][1],(void*)0,&l_125[0][1][1],(void*)0,&l_125[0][1][1],(void*)0}};
            int32_t *l_273 = &l_176[2];
            uint16_t l_284 = 65527UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_125[i][j][k] = &g_126;
                }
            }
            for (i = 0; i < 2; i++)
                l_163[i] = (void*)0;
            for (i = 0; i < 7; i++)
                l_176[i] = (-4L);
            for (i = 0; i < 3; i++)
                l_268[i] = &g_267;
        }
        (*l_287) = 0x412A56E4L;
    }
    for (g_54.f0 = 0; (g_54.f0 == 23); g_54.f0 = safe_add_func_uint8_t_u_u(g_54.f0, 7))
    { 
        int32_t *l_290 = (void*)0;
        int32_t *l_291 = &l_109;
        int32_t *l_292 = &g_118[0];
        int32_t *l_293 = (void*)0;
        int32_t *l_294 = &l_216[1];
        int32_t *l_295 = &g_118[1];
        int32_t *l_296 = &g_229;
        int32_t *l_297 = &l_171;
        int32_t *l_298[2][2][1];
        int64_t l_302 = 1L;
        union U2 l_306 = {1L};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_298[i][j][k] = &l_216[1];
            }
        }
        --l_303;
        return l_306;
    }
    return (*g_855);
}



static uint16_t  func_41(uint16_t * p_42, uint8_t  p_43)
{ 
    int32_t l_61[5][2] = {{0xD947E9E5L,0xD947E9E5L},{0xD947E9E5L,0xD947E9E5L},{0xD947E9E5L,0xD947E9E5L},{0xD947E9E5L,0xD947E9E5L},{0xD947E9E5L,0xD947E9E5L}};
    int16_t *l_68[3];
    int32_t l_70 = 0x1EF36A5FL;
    int32_t *l_71 = &l_61[2][0];
    int i, j;
    for (i = 0; i < 3; i++)
        l_68[i] = &g_69;
    (*l_71) = ((safe_lshift_func_int16_t_s_s(0x0DD0L, 1)) | (l_61[2][0] , ((safe_mod_func_uint16_t_u_u(l_61[2][0], ((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((((l_70 ^= ((l_61[3][1] == p_43) && 0x9DL)) , l_61[2][0]) <= l_61[2][0]) < l_61[3][0]), 0)), l_61[2][0])) || p_43))) != (-1L))));
    return (*p_42);
}



static uint16_t * func_44(union U1  p_45, int64_t  p_46)
{ 
    struct S0 *l_55 = &g_54;
    (*l_55) = g_54;
    return g_56[1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);

    }
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);

    }
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1, "g_54.f1", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_118[i], "g_118[i]", print_hash_value);

    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_150[i].f1, "g_150[i].f1", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_183[i][j], "g_183[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_201.f0, "g_201.f0", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_249.f0, "g_249.f0", print_hash_value);
    transparent_crc(g_249.f1, "g_249.f1", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_588.f0, "g_588.f0", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_847, "g_847", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_856[i].f0, "g_856[i].f0", print_hash_value);

    }
    transparent_crc(g_1114.f0, "g_1114.f0", print_hash_value);
    transparent_crc(g_1351, "g_1351", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1510[i][j], "g_1510[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1703.f0, "g_1703.f0", print_hash_value);
    transparent_crc(g_1703.f1, "g_1703.f1", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1967[i][j][k], "g_1967[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2068, "g_2068", print_hash_value);
    transparent_crc(g_2120, "g_2120", print_hash_value);
    transparent_crc(g_2127, "g_2127", print_hash_value);
    transparent_crc(g_2315.f0, "g_2315.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2330[i], "g_2330[i]", print_hash_value);

    }
    transparent_crc(g_2338, "g_2338", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
