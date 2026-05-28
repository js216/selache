// SPDX-License-Identifier: MIT
// cctest_csmith_cf1028d3.c --- cctest case csmith_cf1028d3 (csmith seed 3473942739)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfa8a02a1 */
/* @exp_ticks 0x6e53 */

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

// Options:   -s 3473942739 -o /tmp/csmith_gen_7xsacfao/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint64_t  f0;
   int8_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   uint64_t  f4;
};

union U1 {
   int16_t  f0;
   const int16_t  f1;
   struct S0  f2;
   int64_t  f3;
};


static uint32_t g_7[5] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
static const union U1 g_27 = {0x2C23L};
static uint8_t g_60 = 0x30L;
static uint64_t g_61 = 2UL;
static int32_t g_68 = 0xDEB0CCCFL;
static int32_t g_71 = 0xBDD5E18BL;
static int32_t g_73 = 0xCD06DB25L;
static uint8_t g_74[4][2][3] = {{{1UL,252UL,252UL},{1UL,252UL,252UL}},{{1UL,252UL,252UL},{1UL,252UL,252UL}},{{1UL,252UL,252UL},{1UL,252UL,252UL}},{{1UL,252UL,252UL},{1UL,252UL,252UL}}};
static uint8_t g_111[5][4][4] = {{{0xD5L,3UL,3UL,0x93L},{1UL,0xFBL,1UL,1UL},{1UL,1UL,3UL,0x67L},{0xD5L,1UL,0xEEL,1UL}},{{3UL,3UL,0UL,0xFBL},{3UL,1UL,1UL,0xFBL},{0xEEL,3UL,0xEEL,0x67L},{0xEEL,0x67L,1UL,0x93L}},{{3UL,0x67L,0UL,0x67L},{1UL,3UL,0UL,0xFBL},{3UL,1UL,1UL,0xFBL},{0xEEL,3UL,0xEEL,0x67L}},{{0xEEL,0x67L,1UL,0x93L},{3UL,0x67L,0UL,0x67L},{1UL,3UL,0UL,0xFBL},{3UL,1UL,1UL,0xFBL}},{{0xEEL,3UL,0xEEL,0x67L},{0xEEL,0x67L,1UL,0x93L},{3UL,0x67L,0UL,0x67L},{1UL,3UL,0UL,0xFBL}}};
static int16_t g_141 = 3L;
static uint32_t g_164 = 18446744073709551607UL;
static int8_t g_175 = 0x4DL;
static uint64_t g_176 = 18446744073709551615UL;
static uint32_t g_179[1][4][2] = {{{0x3779D110L,0x3779D110L},{0x3779D110L,0x3779D110L},{0x3779D110L,0x3779D110L},{0x3779D110L,0x3779D110L}}};
static uint32_t g_190[5][4] = {{0xA14F8910L,0xA14F8910L,0xA14F8910L,0xA14F8910L},{0xA14F8910L,0xA14F8910L,0xA14F8910L,0xA14F8910L},{0xA14F8910L,0xA14F8910L,0xA14F8910L,0xA14F8910L},{0xA14F8910L,0xA14F8910L,0xA14F8910L,0xA14F8910L},{0xA14F8910L,0xA14F8910L,0xA14F8910L,0xA14F8910L}};
static int32_t g_210 = 0x160125FCL;
static int32_t g_227 = 0x471DAA68L;
static int16_t g_233 = 0x6DE8L;
static uint16_t g_235[2][3][1] = {{{0UL},{0x57FAL},{0UL}},{{0x57FAL},{0UL},{0x57FAL}}};
static int32_t g_238 = 0xB8F5414DL;
static int16_t g_264 = (-1L);
static int8_t g_280 = (-1L);
static uint32_t g_281[1][3] = {{0x5C6D6AA7L,0x5C6D6AA7L,0x5C6D6AA7L}};
static struct S0 g_284 = {0x1F63CB30F97F4C81LL,0x45L,18446744073709551607UL,0xD85002B8L,0UL};
static uint8_t g_360 = 255UL;
static int16_t g_587 = 0xF1BDL;
static int8_t g_590 = 0x08L;
static int32_t g_592 = 0L;
static uint64_t g_594 = 0UL;



static union U1  func_1(void);
static uint32_t  func_2(uint32_t  p_3, struct S0  p_4, int32_t  p_5);
static struct S0  func_8(uint32_t  p_9);
static const int16_t  func_13(uint32_t  p_14, int16_t  p_15, const union U1  p_16, int8_t  p_17);




static union U1  func_1(void)
{ 
    uint64_t l_6[2][5];
    int32_t l_517 = 0L;
    int32_t l_518 = 0x9F789974L;
    int32_t l_580 = 0x0CFC7B5CL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_6[i][j] = 18446744073709551613UL;
    }
    l_518 ^= (((0x161AB6ECL & (l_517 &= func_2(l_6[1][1], (g_7[2] , func_8(l_6[0][0])), g_284.f1))) < 3UL) > (-2L));
    if ((safe_add_func_uint64_t_u_u(g_175, (((l_517 , (!0L)) && ((safe_sub_func_uint64_t_u_u(g_233, g_111[2][2][3])) == l_518)) > g_73))))
    { 
        uint32_t l_550 = 0xD9EC9867L;
        for (g_141 = 5; (g_141 != (-17)); g_141--)
        { 
            int32_t l_530[5];
            uint64_t l_531 = 0x6FA96651671C1355LL;
            const uint32_t l_551 = 0x325D2A53L;
            int i;
            for (i = 0; i < 5; i++)
                l_530[i] = 0x265FA908L;
            g_73 = (safe_lshift_func_int8_t_s_s((l_517 = (safe_add_func_uint8_t_u_u(((l_531 = l_530[4]) & g_73), (safe_rshift_func_uint16_t_u_s((((safe_add_func_uint32_t_u_u(4294967295UL, g_235[1][2][0])) && 1L) <= 0xDB7B933FL), g_141))))), g_281[0][0]));
            l_517 &= 0x9E8B4BC9L;
            for (g_60 = 0; (g_60 <= 0); g_60 += 1)
            { 
                int i, j;
                if (g_281[g_60][(g_60 + 2)])
                    break;
                l_517 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((((l_550 = (safe_lshift_func_int16_t_s_u(l_530[4], (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(g_164, 12)) == (safe_sub_func_int64_t_s_s(0xDACEA11E0E5F4FDCLL, (safe_add_func_int32_t_s_s(g_238, 0xD91D15DDL))))), 0x8CL))))) , g_281[g_60][(g_60 + 2)]) <= l_551), l_518)), 11));
            }
        }
        g_68 = (-1L);
    }
    else
    { 
        int8_t l_558[5][2][5];
        int32_t l_559 = 0x341416C7L;
        union U1 l_560 = {0xE457L};
        int32_t l_563 = 0x53AD06E9L;
        uint8_t l_571 = 7UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 5; k++)
                    l_558[i][j][k] = 0x6AL;
            }
        }
        l_517 = ((((((safe_mul_func_int16_t_s_s(((((((safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u((l_6[1][1] > ((l_558[0][1][4] ^= g_238) , g_27.f0)), (l_518 && g_111[2][0][2]))), (-4L))) == g_27.f1) > 0x9AL) <= 0xF30EE275CC0B0201LL) || 0UL) ^ g_235[1][2][0]), g_227)) >= g_284.f0) | 0x110EF3F9F7FD08CFLL) >= g_73) , l_517) != l_559);
        l_559 &= (0x75L & (l_560 , ((l_518 = ((safe_add_func_uint16_t_u_u(((--g_190[2][3]) >= ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(0x9A080B7CL, (+((((l_558[0][1][0] > l_571) >= 0x13BCL) == 0xE5AED78EL) | 5UL)))) , 0x5CL), 6)) , g_71)), 0xC3E6L)) > 0x9529CCDEL)) && 0xED4BL)));
    }
    for (l_517 = 0; (l_517 >= 0); l_517 -= 1)
    { 
        int16_t l_588[1];
        int32_t l_591[4] = {1L,1L,1L,1L};
        int i;
        for (i = 0; i < 1; i++)
            l_588[i] = (-1L);
        for (g_233 = 0; (g_233 <= 3); g_233 += 1)
        { 
            int32_t l_574 = 0x0E0E2D47L;
            int32_t l_575 = 0x2862F6E0L;
            int i, j;
            l_575 |= (safe_mod_func_int32_t_s_s((-8L), ((l_574 = g_190[l_517][g_233]) , g_280)));
            for (g_60 = 0; (g_60 <= 3); g_60 += 1)
            { 
                int i, j, k;
                l_580 = (safe_lshift_func_int16_t_s_s(((g_176 = (safe_add_func_uint16_t_u_u(g_179[l_517][g_60][l_517], ((g_179[l_517][g_60][(l_517 + 1)] <= ((g_111[1][1][0] ^ ((l_518 = 0L) | g_264)) >= g_210)) >= g_111[1][0][3])))) & 0xFB3AB085AE07008CLL), g_71));
            }
            l_580 = (((((safe_div_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(252UL, g_74[0][1][2])) > 0x1A67240FL), g_111[0][1][2])) || l_6[1][1]) && 9L) > g_235[1][2][0]) ^ g_235[1][2][0]);
            for (g_68 = 0; (g_68 <= 3); g_68 += 1)
            { 
                uint32_t l_585 = 0x239F68AAL;
                uint32_t l_586 = 0UL;
                int32_t l_589 = 9L;
                int32_t l_593 = 0L;
                l_586 = (l_6[1][1] > (g_281[0][0] , (l_585 && (l_585 || 0L))));
                g_210 = g_190[l_517][g_233];
                g_594++;
            }
        }
        for (g_594 = 0; (g_594 <= 0); g_594 += 1)
        { 
            if (l_591[2])
                break;
            if (g_141)
                continue;
            for (g_227 = 0; (g_227 <= 0); g_227 += 1)
            { 
                int i, j, k;
                l_580 = ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(((0x4323C9F6L ^ 0x76D12FDDL) > 0x91L), g_179[g_227][(g_594 + 3)][(l_517 + 1)])), 0)) , g_281[0][0]);
            }
        }
    }
    return g_27;
}



static uint32_t  func_2(uint32_t  p_3, struct S0  p_4, int32_t  p_5)
{ 
    uint8_t l_425 = 246UL;
    const int32_t l_430 = 6L;
    int32_t l_431 = 0xB90E2D62L;
    int32_t l_503[2][3][5] = {{{(-2L),0xD4AAA910L,(-2L),(-2L),0xD4AAA910L},{0L,3L,(-1L),0L,(-1L)},{0xD4AAA910L,0xD4AAA910L,0x05B0FB90L,0xD4AAA910L,0xD4AAA910L}},{{(-1L),0L,(-1L),3L,0L},{0xD4AAA910L,(-2L),(-2L),0xD4AAA910L,(-2L)},{0L,0L,(-1L),0L,0L}}};
    int i, j, k;
lbl_445:
    l_431 &= ((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(g_190[4][1], (safe_div_func_uint16_t_u_u(2UL, ((safe_unary_minus_func_uint8_t_u((l_425++))) || ((((safe_sub_func_uint16_t_u_u(g_7[1], (l_425 != l_425))) || l_425) & l_425) & p_5)))))) == g_284.f0), 0xC3F4L)), g_280)), l_430)), p_4.f2)) > l_430) | 0xC8D8CE0DL), 6)) ^ p_3);
    for (g_227 = 17; (g_227 >= 11); g_227 = safe_sub_func_uint64_t_u_u(g_227, 6))
    { 
        union U1 l_442[3] = {{-6L},{-6L},{-6L}};
        int32_t l_446 = 0xEFD554F6L;
        int32_t l_469[4];
        int i;
        for (i = 0; i < 4; i++)
            l_469[i] = 0x677B1BF4L;
        if (((safe_lshift_func_uint16_t_u_u(0x0E0EL, (safe_sub_func_uint64_t_u_u((safe_add_func_int64_t_s_s((((safe_mul_func_int16_t_s_s(((l_442[1] , g_281[0][0]) || (safe_rshift_func_uint8_t_u_s(8UL, p_4.f4))), g_284.f2)) > l_442[1].f1) > p_5), 0xDF14C78DA438EB25LL)), p_4.f3)))) <= g_141))
        { 
            uint64_t l_447 = 0x1C33622DF80AF4C9LL;
            uint16_t l_468 = 0x9C42L;
            for (g_284.f3 = 0; (g_284.f3 <= 1); g_284.f3 += 1)
            { 
                if (g_280)
                    goto lbl_445;
                l_447++;
            }
            p_5 = (g_238 = ((l_447 > ((safe_rshift_func_uint16_t_u_s(((l_469[1] = (safe_mul_func_uint8_t_u_u((g_284.f0 | (safe_mod_func_uint16_t_u_u((((((safe_add_func_uint8_t_u_u((l_446 = ((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((((l_442[1].f1 >= (l_446 != g_233)) >= 0x0AL) & 0x0390750AB3EE35A2LL), l_430)) ^ p_4.f4), p_4.f1)), p_4.f1)) > 65529UL), l_468)) == p_4.f3), 65534UL)) , l_425)), p_4.f0)) , p_5) != 65535UL) || g_74[0][1][2]) | g_190[2][3]), 0x87CDL))), 0xB1L))) && g_74[0][1][2]), 8)) , p_4.f0)) , 0L));
        }
        else
        { 
            int64_t l_470[2][3];
            uint32_t l_504 = 0x02C6D1CEL;
            int32_t l_516 = 0x9A6A6CC4L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                    l_470[i][j] = 0xD7FBE571EEE5C792LL;
            }
            if ((((((0UL || ((l_470[1][1] = 0x2FDA9B0EB8E42268LL) < g_111[4][0][0])) == (safe_rshift_func_int8_t_s_u(g_284.f3, g_68))) , l_425) <= p_4.f4) >= g_281[0][0]))
            { 
                p_5 = (g_280 > (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_360, g_179[0][0][1])), (l_430 > p_4.f3))));
            }
            else
            { 
                int32_t l_488 = 0xDB953C48L;
                int32_t l_489[1][4] = {{8L,8L,8L,8L}};
                int i, j;
                l_489[0][3] = ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(((l_488 = ((safe_div_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((l_430 && 0x76D2L) <= p_4.f2), (safe_unary_minus_func_int64_t_s((-4L))))), l_470[1][1])) == 1UL)) > p_3), 3)) && l_446), 0x1C810D3DL)), l_469[1])) | 0x7CCE11EB25D7F5C1LL);
                l_431 = ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(g_27.f0, ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((p_4.f3 != (((safe_unary_minus_func_uint64_t_u((0xDBL || ((((safe_rshift_func_uint16_t_u_u(g_74[1][1][0], g_235[1][2][0])) < 0x6AL) & g_264) || p_4.f3)))) , p_3) && l_470[1][1])) , g_227), l_470[1][1])), 13)) == l_442[1].f1))), p_4.f1)) < g_73), 10)) != l_442[1].f1);
                l_504++;
            }
            for (g_284.f3 = 0; (g_284.f3 == 2); g_284.f3++)
            { 
                uint8_t l_515 = 0x89L;
                g_210 = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_4.f3, (l_431 || (l_516 &= (p_4.f1 <= ((safe_mod_func_int8_t_s_s((((((l_442[0] , g_284.f0) | g_264) | l_515) == l_504) > 0x25L), l_470[1][1])) & 0x7468L)))))), 0xBFL));
            }
        }
    }
    return p_5;
}



static struct S0  func_8(uint32_t  p_9)
{ 
    int8_t l_10 = (-4L);
    int32_t l_24 = (-1L);
    int32_t l_390 = 0L;
    union U1 l_407[3][5][1] = {{{{-1L}},{{0L}},{{0x54D0L}},{{0L}},{{-1L}}},{{{3L}},{{-1L}},{{0L}},{{0x54D0L}},{{0L}}},{{{-1L}},{{3L}},{{-1L}},{{0L}},{{0x54D0L}}}};
    int32_t l_408 = (-9L);
    int32_t l_409 = 0x5E127975L;
    int i, j, k;
    l_390 = ((l_10 = g_7[0]) , (safe_lshift_func_int16_t_s_u(func_13(((((safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(l_10, (safe_rshift_func_uint8_t_u_s((l_24 = 0x93L), 6)))) != ((safe_sub_func_int16_t_s_s((g_7[2] & p_9), l_10)) & l_10)), p_9)) , (-1L)) & l_10) & l_10), g_7[2], g_27, g_27.f0), 6)));
    l_409 |= (((safe_unary_minus_func_int64_t_s((((safe_div_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_add_func_uint64_t_u_u(18446744073709551610UL, ((safe_mul_func_uint16_t_u_u(((l_408 = (safe_mul_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(((0x65L && (l_407[0][3][0] , (l_390 ^= (l_24 |= g_111[2][2][3])))) & g_284.f0), l_407[0][3][0].f0)) || l_10) && g_73), 0xEFL))) && l_407[0][3][0].f1), l_407[0][3][0].f1)) , 0x1495C03FA5AF3069LL))) | l_10))), 251UL)), 250UL)) & l_407[0][3][0].f0), 0xD490142EL)) >= 0x0BL) | p_9))) & g_176) && p_9);
    return g_284;
}



static const int16_t  func_13(uint32_t  p_14, int16_t  p_15, const union U1  p_16, int8_t  p_17)
{ 
    uint16_t l_31 = 9UL;
    int32_t l_34 = 0x7A0B8914L;
    int32_t l_69 = 0xAD61797EL;
    int32_t l_70 = 0xB5895022L;
    int16_t l_165 = 0x5AB6L;
    const union U1 l_195 = {0x5667L};
    uint64_t l_225 = 18446744073709551611UL;
    uint8_t l_226 = 0xCFL;
    int32_t l_228 = 0xD4DB2FC5L;
    int32_t l_234 = 1L;
    uint32_t l_327[4];
    const int8_t l_389 = 0x29L;
    int i;
    for (i = 0; i < 4; i++)
        l_327[i] = 0xA5E658F8L;
    for (p_17 = 15; (p_17 > 19); p_17 = safe_add_func_uint64_t_u_u(p_17, 2))
    { 
        int8_t l_30 = 0xBDL;
        int32_t l_39[5][2];
        int8_t l_40 = 0xE1L;
        uint32_t l_59 = 0x6A781B38L;
        int32_t l_97 = (-8L);
        uint32_t l_155 = 7UL;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_39[i][j] = (-1L);
        }
        l_31 |= (l_30 , l_30);
        if ((((((safe_mul_func_int16_t_s_s(l_31, ((l_34 = g_7[2]) >= (l_30 >= (safe_mod_func_uint8_t_u_u((l_39[1][1] = (safe_add_func_uint32_t_u_u(g_27.f0, 0x87D30FA2L))), g_27.f0)))))) > 0xB077CB11B1996FCDLL) > 0UL) || l_40) > p_16.f0))
        { 
            for (p_14 = 1; (p_14 <= 4); p_14 += 1)
            { 
                int i;
                return g_7[p_14];
            }
        }
        else
        { 
            uint64_t l_41 = 0UL;
            l_41 = l_40;
        }
        if (((l_39[4][0] &= (safe_lshift_func_uint8_t_u_s(g_27.f0, 2))) < l_34))
        { 
            int16_t l_46 = 0xB2DDL;
            uint64_t l_58 = 0xFA536CA9A47FA827LL;
            int32_t l_66[2][5];
            uint8_t l_81 = 1UL;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_66[i][j] = 2L;
            }
            g_61 = (safe_sub_func_uint32_t_u_u(l_46, ((+(safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_7[2], (safe_add_func_int8_t_s_s(p_14, (safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((l_59 = (l_58 |= ((g_7[2] < 0L) == p_17))) > l_30) ^ g_7[2]), 0xB022L)), 0x2088L)))))), g_7[4]))) > g_60)));
            if ((l_39[0][0] = ((l_34 = (~(g_7[1] | (safe_lshift_func_int8_t_s_s((-1L), 1))))) | p_16.f0)))
            { 
                int32_t l_65 = 1L;
                int32_t l_67 = (-4L);
                int32_t l_72 = 0x8F3BEA0AL;
                g_74[0][1][2]++;
            }
            else
            { 
                g_68 = (l_34 ^ (safe_rshift_func_uint8_t_u_s((l_39[0][1] ^= (((((-5L) & (0x552BC05DL > (l_70 || p_14))) <= 255UL) >= l_81) > 0x6A76L)), 5)));
            }
            g_73 = (safe_sub_func_uint16_t_u_u((l_40 , p_17), ((((4L >= (g_74[0][1][2] ^ (-1L))) ^ p_16.f0) & (-5L)) || 0L)));
        }
        else
        { 
            int64_t l_94 = (-1L);
            int32_t l_112 = 3L;
            int32_t l_156 = 0xD38AF219L;
            int32_t l_157[3];
            int i;
            for (i = 0; i < 3; i++)
                l_157[i] = 0xDA3A84B1L;
            if ((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_97 |= (((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(0x4107L, p_16.f1)), (l_94 < (safe_div_func_uint32_t_u_u(p_16.f1, p_15))))) < l_39[0][1]) & 65534UL)), g_73)), 7L)), 4)))
            { 
                int32_t l_102 = 9L;
                int32_t l_113 = 0xB54EB929L;
                l_113 = (safe_mul_func_uint16_t_u_u((l_112 = ((safe_rshift_func_uint8_t_u_u(((l_102 > 0x028AD0AF0966AB14LL) <= (safe_rshift_func_int16_t_s_s((g_111[2][2][3] |= (+((((safe_add_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(p_16.f1)) < ((safe_add_func_uint64_t_u_u(0UL, p_17)) > 0x57571CA78AC094E5LL)), 6UL)) || 0x95L) != 0xE1BC6E4FL) == l_69))), 7))), p_15)) && 6UL)), p_14));
                if (l_70)
                    continue;
                l_112 = (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((((((safe_sub_func_int64_t_s_s((((l_34 | 1L) != (safe_sub_func_uint32_t_u_u(p_15, g_74[0][1][2]))) != p_17), p_16.f0)) & 0xD1BDAACF22293C57LL) | p_15) < g_61) < 0xEC6600421FF5D198LL) & g_7[2]), 1L)), g_74[0][0][2])), 0L)), 4294967288UL));
            }
            else
            { 
                uint64_t l_128 = 0UL;
                int32_t l_142 = 0x60554FBDL;
                g_68 = (((l_59 , 1L) ^ ((safe_sub_func_uint32_t_u_u(((p_16.f1 == g_7[2]) , p_14), l_128)) ^ g_71)) && 0x32D58142351F18F2LL);
                g_68 = (safe_sub_func_int8_t_s_s((l_39[1][1] = (((l_142 = (safe_div_func_int32_t_s_s((1UL && 4294967293UL), (safe_mod_func_int16_t_s_s((((p_15 == (g_141 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_uint32_t_u_u(((l_128 == p_16.f0) > l_40), p_14)) || 65528UL) && l_112) == p_16.f0), 1)), 0)))) , p_15) <= 0xB47CL), l_94))))) >= 5L) , l_31)), g_27.f0));
            }
            if (((l_112 | (((+(g_73 = ((safe_mod_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(g_141, (safe_unary_minus_func_uint64_t_u(p_14)))), (l_156 = (safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((p_16.f0 && p_17), 0xD75DL)) , g_60), l_155))))) > l_157[2]), l_30)) & p_17))) , p_16.f0) & p_17)) <= 0x7AB8L))
            { 
                int32_t l_166 = 1L;
                g_71 = p_14;
                l_156 = (p_16.f1 == (((((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((((g_61 = (safe_mod_func_int64_t_s_s(((g_164 = (g_74[0][1][1] > ((0xEF73L != g_61) || l_40))) <= l_94), 0xD9E6926EBD8262CBLL))) <= 0x70772F823EF36B23LL) != 1UL), 0)), l_165)) & g_141) < p_15) , p_16.f0) < p_15) >= l_155) , l_39[3][0]));
                g_71 = (l_39[2][0] = l_166);
            }
            else
            { 
                int32_t l_173 = 0x683B573FL;
                int32_t l_174 = 0x48F621FCL;
                g_71 = ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(l_157[1], 14)), ((((safe_div_func_uint8_t_u_u(((((g_176++) > (g_179[0][0][1]++)) && (g_190[2][3] = ((g_175 | ((l_34 = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((g_176--) || (l_39[1][1] ^= (g_61 = ((g_141 || (safe_mul_func_int8_t_s_s(5L, g_27.f0))) || 1UL)))) == 0xB2FAL), l_173)), 0))) ^ 0x1C071935L)) != 1UL))) , p_16.f1), l_70)) != g_27.f1) <= g_111[2][2][3]) , 4294967295UL))) <= l_165);
                if (g_111[2][2][3])
                    continue;
                g_71 |= (0xDA96L & (((p_14 != (safe_div_func_int16_t_s_s((l_69 != p_15), 0x764AL))) == 4294967295UL) < 1UL));
            }
            if (p_16.f0)
            { 
                uint32_t l_201[2][2][5] = {{{0x11D3A895L,0x11D3A895L,0x2BFD3022L,0x11D3A895L,0x11D3A895L},{0x3B0532C7L,0x31BD2F76L,0x3B0532C7L,0x3B0532C7L,0x31BD2F76L}},{{0x11D3A895L,0x2C3757FDL,0x2C3757FDL,0x11D3A895L,0x2C3757FDL},{0x31BD2F76L,0x31BD2F76L,18446744073709551615UL,0x31BD2F76L,0x31BD2F76L}}};
                int i, j, k;
                g_68 = ((l_195 , (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((l_31 < (((l_201[0][1][3] ^ ((l_69 = (2L >= p_16.f1)) >= g_190[3][2])) | p_16.f1) & 0UL)), l_195.f1)), 7))))) , p_16.f1);
                g_73 ^= 0L;
                l_39[1][1] = (l_30 & p_17);
            }
            else
            { 
                l_39[1][1] = ((g_210 = (safe_sub_func_int16_t_s_s((((safe_add_func_int32_t_s_s(0x80985376L, (g_73 , (safe_sub_func_uint8_t_u_u(0xB9L, l_31))))) == 0L) || 65535UL), p_17))) , 0xEA5775FDL);
            }
        }
    }
    l_228 = ((((+(l_34 = (((safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s(0x1FL, (l_69 = (l_70 = (safe_unary_minus_func_int8_t_s((g_227 = (safe_mod_func_uint16_t_u_u((g_190[2][3] >= (((~((g_175 ^= (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((safe_mul_func_int16_t_s_s(l_31, 0x47C6L)) < p_16.f0))), l_31))) <= l_225)) > 1L) & l_226)), g_27.f0))))))))), p_16.f0)) , 0x968CL) , g_60))) > p_17) && p_16.f1) >= 0x0DL);
    for (g_73 = (-24); (g_73 <= 24); g_73++)
    { 
        int32_t l_231[2][5] = {{0x850909C1L,0x5AF660ACL,0x850909C1L,0x850909C1L,0x5AF660ACL},{0x5AF660ACL,0x850909C1L,0x850909C1L,0x5AF660ACL,0x850909C1L}};
        int16_t l_232 = (-6L);
        uint32_t l_297[5] = {0x6516BB74L,0x6516BB74L,0x6516BB74L,0x6516BB74L,0x6516BB74L};
        int8_t l_328 = 0x3CL;
        int32_t l_387 = 0x4E20D718L;
        int32_t l_388[5];
        int i, j;
        for (i = 0; i < 5; i++)
            l_388[i] = 0x7F3BF8DCL;
        ++g_235[1][2][0];
        if (p_15)
        { 
            int8_t l_239 = 0x38L;
            int32_t l_277[1];
            int i;
            for (i = 0; i < 1; i++)
                l_277[i] = 4L;
            if (g_238)
            { 
                int8_t l_260 = (-4L);
                int32_t l_261 = 0xFD751FE1L;
                if (l_239)
                    break;
                g_238 = ((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((--g_190[2][2]) & (p_14 < ((safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((g_235[1][2][0] = 0x9F7CL) == (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((l_260 ^= (safe_add_func_int8_t_s_s((g_175 = (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(0xB1CAL, 13)), 0x615AL)) & 0x95EBBC8A89A1ED7CLL) | g_68)), (-3L)))) <= 18446744073709551615UL), 3)), g_74[0][1][2]))), l_261)), 0x36L)) == 0xB702L))), g_179[0][0][1])), l_261)) || l_70) <= l_261) || 0xDCD9A7503C9241BALL);
            }
            else
            { 
                int32_t l_269 = 0x6082B051L;
                int32_t l_276[5] = {0xE3AB2593L,0xE3AB2593L,0xE3AB2593L,0xE3AB2593L,0xE3AB2593L};
                int i;
                l_34 = ((0x659DC613328CD334LL >= (safe_lshift_func_uint8_t_u_s(g_264, 5))) == (((safe_sub_func_int8_t_s_s(l_239, (safe_mod_func_uint64_t_u_u((g_176 = (p_16.f1 , l_239)), 18446744073709551615UL)))) ^ g_179[0][2][0]) & l_239));
                l_277[0] &= ((g_235[1][2][0]++) , ((safe_add_func_uint64_t_u_u((l_231[0][3] = 0x5423102FA715DBDDLL), (safe_mod_func_int16_t_s_s((-4L), (l_276[0] = (l_269 , (-6L))))))) , 0x6FC6E757L));
            }
        }
        else
        { 
            int64_t l_278 = 0x67E5EB967A072E58LL;
            int32_t l_279[1];
            int i;
            for (i = 0; i < 1; i++)
                l_279[i] = 0x351573A4L;
            --g_281[0][0];
            l_297[1] = (g_284 , ((safe_div_func_uint32_t_u_u((((g_141 |= ((safe_div_func_uint64_t_u_u((((l_231[0][3] |= ((((g_284 , p_16.f1) <= ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((g_68 , 0xF177L) , (-1L)), l_232)), g_284.f1)), 7)) != p_17), l_279[0])) != 0xA26C709768D335C8LL)) & p_14) || 0x82L)) > 0xEDL) >= l_69), l_70)) ^ 0x7187948F24D8D29DLL)) > 0xE024L) >= g_7[2]), (-9L))) <= g_71));
            g_238 = (safe_sub_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((g_233 = ((g_141 >= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((~(safe_div_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_281[0][1], (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((~(((((((g_68 &= (safe_rshift_func_uint16_t_u_u(((!(safe_div_func_uint32_t_u_u(0x1738A90AL, l_195.f1))) , g_74[0][1][2]), 13))) != p_17) ^ l_279[0]) && 0x73C473A9L) != g_281[0][1]) == g_281[0][0]) > 3L)) <= p_15), 1UL)) & l_34), g_281[0][0])))), l_327[0])) == p_16.f1), 7)) || p_16.f1), l_279[0]))), g_210)) < l_279[0]), 1))) == p_17)), g_164)), l_328)), l_31));
        }
        if ((safe_sub_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(((g_235[1][2][0]--) & (0xC52BL & ((safe_sub_func_int8_t_s_s(((l_231[1][1] = g_71) < l_70), (-4L))) == g_71))), 5)) & g_284.f3) >= l_165), g_74[3][1][0])))
        { 
            int32_t l_350 = 9L;
            for (g_227 = 0; (g_227 >= 28); g_227 = safe_add_func_int32_t_s_s(g_227, 2))
            { 
                int32_t l_345 = 0x72AA1A6CL;
                int32_t l_349 = 4L;
                l_349 = ((l_232 | (safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s((((l_231[0][3] &= 0xFDFBL) | ((safe_lshift_func_int8_t_s_s(((l_345 , (safe_add_func_int8_t_s_s(((~l_328) || p_17), 247UL))) == 1L), 6)) , 6L)) >= p_14), 1L)) <= 0x184FL), l_232))) && (-8L));
                l_350 = p_15;
            }
        }
        else
        { 
            int64_t l_355 = 0xAB94F59CC5FA31A8LL;
            int32_t l_358 = 0L;
            if (g_71)
                break;
            g_210 &= (l_297[1] || ((safe_rshift_func_uint8_t_u_u(g_73, 3)) > (safe_sub_func_uint16_t_u_u(g_238, ((((g_227 == p_16.f1) & g_175) > 0xB2L) <= l_355)))));
            for (p_15 = 0; (p_15 > (-5)); p_15--)
            { 
                int16_t l_359 = 1L;
                --g_360;
                g_71 = (safe_div_func_int64_t_s_s(((l_231[1][4] = l_358) >= (safe_mod_func_int8_t_s_s((((l_388[1] = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_16.f0, ((safe_add_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((l_387 = (0x56B7L > ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((!(((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(l_297[1])), l_358)), p_16.f0)), p_17)) & g_190[1][3]) & g_284.f4)), p_14)), l_359)) & 0x7E99L))) > l_355), g_176)) | 4294967295UL), 1L)) | 0xF203L))), 0x63B6L))) | 0x7449L) , l_388[4]), (-1L)))), l_355));
            }
        }
    }
    return l_389;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);

    }
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_74[i][j][k], "g_74[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_111[i][j][k], "g_111[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_179[i][j][k], "g_179[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_190[i][j], "g_190[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_235[i][j][k], "g_235[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_281[i][j], "g_281[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_284.f0, "g_284.f0", print_hash_value);
    transparent_crc(g_284.f1, "g_284.f1", print_hash_value);
    transparent_crc(g_284.f2, "g_284.f2", print_hash_value);
    transparent_crc(g_284.f3, "g_284.f3", print_hash_value);
    transparent_crc(g_284.f4, "g_284.f4", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_587, "g_587", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
