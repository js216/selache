// SPDX-License-Identifier: MIT
// cctest_csmith_8340714b.c --- cctest case csmith_8340714b (csmith seed 2202038603)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfde8d3e0 */
/* @exp_ticks 0x3c3c */

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

// Options:   -s 2202038603 -o /tmp/csmith_gen_lpi30283/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
};

union U1 {
   int32_t  f0;
   const int8_t  f1;
   uint8_t  f2;
};

union U2 {
   int16_t  f0;
   struct S0  f1;
   int32_t  f2;
};

union U3 {
   struct S0  f0;
};


static int32_t g_2[2][1][4] = {{{(-10L),(-10L),(-10L),(-10L)}},{{(-10L),(-10L),(-10L),(-10L)}}};
static struct S0 g_18 = {4L};
static union U3 g_19 = {{0xF34BDAC8L}};
static uint8_t g_20[5][5] = {{0UL,0UL,0UL,0UL,0UL},{0xF2L,0xC9L,0xF2L,0xC9L,0xF2L},{0UL,0UL,0UL,0UL,0UL},{0xF2L,0xC9L,0xF2L,0xC9L,0xF2L},{0UL,0UL,0UL,0UL,0UL}};
static union U3 g_30 = {{0x2B8909FFL}};
static union U3 g_32 = {{-6L}};
static union U1 g_40 = {0L};
static uint16_t g_62 = 1UL;
static union U2 g_69 = {0x3881L};
static int32_t g_70 = 0x11E78C19L;
static uint64_t g_78 = 0x92859F9615ECCFF8LL;
static uint16_t g_126 = 0x6BEBL;
static uint64_t g_196 = 0x9874B10D0903AEC1LL;



static uint8_t  func_1(void);
static int8_t  func_13(uint32_t  p_14, struct S0  p_15, uint64_t  p_16, union U3  p_17);
static uint16_t  func_34(union U1  p_35, uint32_t  p_36, const union U3  p_37, uint32_t  p_38, int16_t  p_39);
static union U2  func_47(const uint32_t  p_48, uint32_t  p_49, struct S0  p_50, const uint32_t  p_51);




static uint8_t  func_1(void)
{ 
    uint64_t l_10 = 7UL;
    int32_t l_25 = 0x4BE18A16L;
    union U3 l_31 = {{0x77C83BE7L}};
    uint32_t l_61 = 0xE7D42A80L;
    struct S0 l_63 = {0xA7991AD4L};
    const union U3 l_71 = {{0xC8B43F62L}};
    for (g_2[1][0][1] = 0; (g_2[1][0][1] >= 17); g_2[1][0][1]++)
    { 
        uint32_t l_23[5][4][2] = {{{8UL,7UL},{0x4C6F4446L,0x4486CAE8L},{0x3FB18BA7L,0x33D2AFDDL},{0x0D790F95L,0x3FB18BA7L}},{{0xFDEABFD0L,18446744073709551611UL},{0xFDEABFD0L,0x3FB18BA7L},{0x0D790F95L,0xCC321A07L},{8UL,0x0D790F95L}},{{0xFDEABFD0L,0x33D2AFDDL},{7UL,18446744073709551611UL},{18446744073709551611UL,0xF3352FB2L},{0x48308FAAL,0xF3352FB2L}},{{18446744073709551611UL,18446744073709551611UL},{7UL,0x33D2AFDDL},{0xFDEABFD0L,0x0D790F95L},{8UL,0xCC321A07L}},{{0xF3352FB2L,8UL},{0x4486CAE8L,0x3FB18BA7L},{0x4486CAE8L,8UL},{0xF3352FB2L,0xCC321A07L}}};
        int8_t l_24 = 0xAFL;
        struct S0 l_28[3] = {{0xA4182467L},{0xA4182467L},{0xA4182467L}};
        union U3 l_29 = {{-1L}};
        int32_t l_33 = 0xAF0AB59AL;
        int i, j, k;
        l_25 ^= (g_18.f0 = (safe_div_func_int8_t_s_s((~((safe_rshift_func_uint8_t_u_u(l_10, (safe_lshift_func_int8_t_s_u((g_2[1][0][1] , func_13(g_2[0][0][0], g_18, g_2[0][0][1], g_19)), l_10)))) >= l_23[3][2][1])), l_24)));
        if (g_20[4][3])
            continue;
        l_33 |= (safe_mul_func_uint16_t_u_u(func_13(func_13(((((func_13(g_20[3][2], l_28[2], g_19.f0.f0, (g_30 = l_29)) < 9UL) , g_19) , l_24) > l_25), l_28[2], g_2[0][0][1], l_31), l_28[0], l_31.f0.f0, g_32), l_24));
    }
    if (((((func_34(g_40, (safe_div_func_int32_t_s_s(l_25, (safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((func_47(((safe_mul_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((((l_31.f0.f0 ^= ((!(safe_add_func_int64_t_s_s(0x48EC3DF54D9846C2LL, (251UL == g_18.f0)))) < g_18.f0)) != g_2[1][0][1]) ^ l_61) || g_40.f2), l_61)), g_2[1][0][1])) && (-8L)) && g_18.f0) , g_62), g_19.f0.f0)) != l_61), l_25, l_63, l_61) , 0xA9L), 251UL)), g_70)))), l_71, g_20[0][0], g_62) , 0xD5E8C49BL) , l_63.f0) < l_63.f0) != (-5L)))
    { 
        uint16_t l_172[4][5][1];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_172[i][j][k] = 0x67B8L;
            }
        }
        l_172[1][3][0]--;
    }
    else
    { 
        int16_t l_175 = 9L;
        int32_t l_186 = 0x58DB16B2L;
        l_175 ^= g_40.f0;
        for (l_25 = 20; (l_25 < 13); l_25--)
        { 
            uint16_t l_184 = 65534UL;
            int32_t l_185 = 0x46D3381AL;
            if (((l_186 ^= (g_20[0][0] <= ((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((((l_31.f0.f0 | (safe_mul_func_uint16_t_u_u(l_184, (g_62 = (l_184 && l_25))))) > 1L) == g_40.f2), l_185)), g_32.f0.f0)) < l_175))) == l_175))
            { 
                g_32.f0 = g_18;
            }
            else
            { 
                uint64_t l_187 = 18446744073709551611UL;
                int8_t l_194 = 9L;
                if (l_187)
                    break;
                g_2[1][0][1] = (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u((2L || l_194), (~((g_30 , g_40.f0) < 0xEB613B60L)))) || g_69.f0), 4)) > g_19.f0.f0), 10));
                if (g_196)
                    continue;
            }
        }
    }
    g_30.f0 = g_19.f0;
    return l_61;
}



static int8_t  func_13(uint32_t  p_14, struct S0  p_15, uint64_t  p_16, union U3  p_17)
{ 
    uint16_t l_21 = 5UL;
    int32_t l_22 = 0x34CCBB24L;
    for (p_14 = 0; p_14 < 5; p_14 += 1)
    {
        for (g_19.f0.f0 = 0; g_19.f0.f0 < 5; g_19.f0.f0 += 1)
        {
            g_20[p_14][g_19.f0.f0] = 1UL;
        }
    }
    l_22 |= (g_19.f0.f0 < ((((((1UL < p_14) == 7UL) ^ l_21) > 0x98B9L) > 3L) <= l_21));
    return l_21;
}



static uint16_t  func_34(union U1  p_35, uint32_t  p_36, const union U3  p_37, uint32_t  p_38, int16_t  p_39)
{ 
    int64_t l_72 = (-1L);
    int32_t l_77 = (-8L);
    uint16_t l_82 = 65530UL;
    int32_t l_111 = 0x718C4EF5L;
    int32_t l_112 = 0x2E131A92L;
    int32_t l_113 = 4L;
    int32_t l_114[4][2][5] = {{{0L,0L,0x7A3E983FL,0L,0L},{(-1L),0xC3FE914DL,(-1L),0xE5926A32L,0L}},{{0L,0x3D11B6B2L,0x3D11B6B2L,0L,0x3D11B6B2L},{0L,0xC3FE914DL,0x209ED79FL,0xC3FE914DL,0L}},{{0x3D11B6B2L,0L,0x3D11B6B2L,0x3D11B6B2L,0L},{0L,0xE5926A32L,(-1L),0xC3FE914DL,(-1L)}},{{0L,0L,0x7A3E983FL,0L,0L},{(-1L),0xC3FE914DL,(-1L),0xE5926A32L,0L}}};
    union U3 l_122[3][3][2] = {{{{{0x9AC4AB03L}},{{-9L}}},{{{0x9AC4AB03L}},{{0x9AC4AB03L}}},{{{-9L}},{{0x9AC4AB03L}}}},{{{{0x9AC4AB03L}},{{-9L}}},{{{0x9AC4AB03L}},{{0x9AC4AB03L}}},{{{-9L}},{{0x9AC4AB03L}}}},{{{{0x9AC4AB03L}},{{-9L}}},{{{0x9AC4AB03L}},{{0x9AC4AB03L}}},{{{-9L}},{{0x9AC4AB03L}}}}};
    int32_t l_167 = (-7L);
    int32_t l_168 = (-9L);
    uint16_t l_169 = 0x3F72L;
    int i, j, k;
    g_19.f0.f0 = l_72;
    for (g_40.f0 = 4; (g_40.f0 >= 0); g_40.f0 -= 1)
    { 
        int16_t l_81[4][4] = {{0x81B9L,(-2L),0x81B9L,8L},{1L,0x521BL,8L,8L},{(-2L),(-2L),0x3605L,0x521BL},{0x521BL,1L,0x3605L,1L}};
        int16_t l_89 = 0xE0E5L;
        int32_t l_90 = 0L;
        int32_t l_91 = 0xA0B0D0EDL;
        int32_t l_92 = (-1L);
        uint8_t l_93 = 6UL;
        int32_t l_99 = 0x09213F04L;
        int32_t l_100 = 0xB6CEA374L;
        int32_t l_101 = 0x064C2CD3L;
        uint16_t l_123 = 0x374BL;
        uint64_t l_136 = 0x32F7DB775658741FLL;
        struct S0 l_145 = {-9L};
        union U2 l_166[4] = {{0xB9FCL},{0xB9FCL},{0xB9FCL},{0xB9FCL}};
        int i, j;
        g_18.f0 = ((safe_mul_func_int16_t_s_s((l_72 , l_72), (safe_mul_func_uint16_t_u_u((((g_78 = (l_77 &= (-1L))) >= (((((safe_mod_func_int16_t_s_s(1L, 0xB004L)) <= l_81[1][3]) || l_82) != g_30.f0.f0) >= p_36)) == g_18.f0), 0L)))) | p_35.f1);
        for (g_62 = 0; (g_62 <= 4); g_62 += 1)
        { 
            int16_t l_84 = 0x3F58L;
            for (g_69.f2 = 4; (g_69.f2 >= 0); g_69.f2 -= 1)
            { 
                struct S0 l_83 = {-7L};
                g_32.f0 = (l_83 = p_37.f0);
                l_83 = g_19.f0;
            }
            if (((l_84 == (g_19.f0.f0 && (safe_sub_func_uint32_t_u_u((g_2[1][0][1] | (safe_add_func_int16_t_s_s(0x4D7DL, l_89))), g_2[1][0][1])))) > p_35.f1))
            { 
                --l_93;
            }
            else
            { 
                uint32_t l_96[2][4][3] = {{{4294967295UL,4294967295UL,0x9CFB06A0L},{4294967288UL,4294967288UL,0x5FD10891L},{4294967295UL,4294967295UL,0x9CFB06A0L},{4294967288UL,4294967288UL,0x5FD10891L}},{{4294967295UL,4294967295UL,0x9CFB06A0L},{4294967288UL,4294967288UL,0x5FD10891L},{4294967295UL,4294967295UL,0x9CFB06A0L},{4294967288UL,4294967288UL,0x5FD10891L}}};
                int i, j, k;
                --l_96[0][3][2];
                return l_90;
            }
        }
        if ((l_81[3][3] , 0x7C9710A7L))
        { 
            uint16_t l_102 = 0xA9F0L;
            int32_t l_105 = 0x057498DDL;
            int32_t l_106 = 0x7BAE7F84L;
            int32_t l_107 = 0x29D79668L;
            int32_t l_108 = (-7L);
            int32_t l_109 = 0L;
            int32_t l_110 = 1L;
            int32_t l_115[1][5] = {{0L,0L,0L,0L,0L}};
            uint32_t l_116[4][2][3] = {{{3UL,0x74F060B1L,3UL},{0UL,0UL,0x2FB1C122L}},{{0xEC91527EL,0xEC91527EL,0UL},{0x16D73FB0L,0UL,0UL}},{{0UL,0x74F060B1L,0xE7103E2EL},{0x16D73FB0L,0x94D18AF3L,0x16D73FB0L}},{{0xEC91527EL,0UL,0xE7103E2EL},{0UL,0UL,0UL}}};
            int i, j, k;
            ++l_102;
            --l_116[2][0][2];
            if ((safe_div_func_uint32_t_u_u(g_30.f0.f0, (p_38 = 0x24672FDCL))))
            { 
                if (l_112)
                    break;
            }
            else
            { 
                struct S0 l_121 = {0xC4518D71L};
                g_18 = l_121;
                l_99 |= ((l_100 = (l_122[0][1][0] , (g_2[1][0][0] == p_35.f2))) >= 0x215C821CL);
                --l_123;
            }
        }
        else
        { 
            union U2 l_133 = {0xD5DEL};
            if (g_2[1][0][0])
                break;
            g_2[1][0][3] = ((g_126 ^= 0x93L) > (((l_114[1][1][0] || (safe_mod_func_int32_t_s_s(((((!0xC1L) < p_35.f0) , p_37.f0.f0) >= g_40.f2), 2L))) >= 0L) != g_78));
            p_35.f0 = ((((safe_rshift_func_uint8_t_u_u(l_91, 7)) != (!((l_133 , 4294967295UL) , (((safe_div_func_uint8_t_u_u(g_69.f0, l_133.f0)) | 4L) , p_38)))) , p_37.f0.f0) || l_136);
        }
        for (l_93 = 0; (l_93 <= 4); l_93 += 1)
        { 
            uint8_t l_144 = 249UL;
            if ((((p_39 |= g_30.f0.f0) >= ((safe_add_func_uint32_t_u_u((0xBE0B6653L < ((safe_div_func_uint32_t_u_u(((2L | (~((((l_91 & p_35.f1) ^ g_40.f1) , l_144) < l_89))) , l_113), 4L)) < g_40.f0)), 6UL)) < l_111)) ^ g_30.f0.f0))
            { 
                l_114[2][0][4] = g_2[0][0][3];
                g_32.f0 = l_145;
                return g_2[0][0][0];
            }
            else
            { 
                int64_t l_154 = 0x3EFAFE794198D20ELL;
                int32_t l_155 = 0xA5768AD1L;
                l_155 ^= (((g_2[1][0][1] >= (((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((p_35 , g_19) , p_39) < 0x269D596BL), g_32.f0.f0)), p_39)), l_72)), g_69.f0)) , p_35) , 65535UL)) <= l_154) || 0x45F6L);
                g_19.f0.f0 ^= (p_35.f0 = ((l_166[3] = func_47((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s(((safe_div_func_uint16_t_u_u((l_92 = ((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_35.f2, (((l_155 |= g_40.f0) && ((g_40.f1 | ((((((0x9564F80CL < 0x26375353L) == p_36) || p_35.f1) || p_35.f2) <= l_114[2][0][4]) >= 0xC4A37C750F7EA906LL)) ^ g_20[2][1])) ^ 0x7E1CL))), p_35.f2)) == 0x44D1492C190A5E15LL)), l_77)) & l_111), l_123)), g_78)), p_39, p_37.f0, l_154)) , p_38));
            }
        }
    }
    l_169--;
    return g_30.f0.f0;
}



static union U2  func_47(const uint32_t  p_48, uint32_t  p_49, struct S0  p_50, const uint32_t  p_51)
{ 
    int32_t l_64 = 0L;
    int32_t l_65[2][4] = {{(-10L),(-3L),(-10L),(-10L)},{(-3L),(-3L),0L,(-3L)}};
    uint32_t l_66[2][3] = {{0x33F8A1C3L,0x33F8A1C3L,0x33F8A1C3L},{0xC5EFF0D5L,0xC5EFF0D5L,0xC5EFF0D5L}};
    int i, j;
    --l_66[0][2];
    return g_69;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_19.f0.f0, "g_19.f0.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_30.f0.f0, "g_30.f0.f0", print_hash_value);
    transparent_crc(g_32.f0.f0, "g_32.f0.f0", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_40.f1, "g_40.f1", print_hash_value);
    transparent_crc(g_40.f2, "g_40.f2", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
