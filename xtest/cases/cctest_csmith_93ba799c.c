// SPDX-License-Identifier: MIT
// cctest_csmith_93ba799c.c --- cctest case csmith_93ba799c (csmith seed 2478471580)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa583f156 */

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

// Options:   -s 2478471580 -o /tmp/csmith_gen_j2ohfqqq/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   int8_t  f3;
   int16_t  f4;
   int32_t  f5;
   int32_t  f6;
};

union U1 {
   int8_t * f0;
   uint64_t  f1;
   uint16_t  f2;
   const uint32_t  f3;
};

union U2 {
   uint32_t  f0;
   int16_t  f1;
   struct S0  f2;
   uint64_t  f3;
};


static uint32_t g_2 = 4294967295UL;
static int32_t g_5[7][1] = {{0x5BFC88EBL},{0x5BFC88EBL},{0x5BFC88EBL},{0x5BFC88EBL},{0x5BFC88EBL},{0x5BFC88EBL},{0x5BFC88EBL}};
static int8_t g_9 = 0xE6L;
static const int8_t *g_8 = &g_9;
static union U2 g_38 = {4294967295UL};
static uint8_t g_62 = 0UL;
static const union U2 g_71 = {0UL};
static const union U2 g_73 = {0x4D12EA0FL};
static struct S0 g_78 = {0x7DFB9DB650F83943LL,1UL,0x82152669L,0xBDL,-1L,-1L,0xC40293E9L};
static int32_t *g_82 = &g_78.f6;
static uint8_t *g_111 = &g_62;
static uint8_t ** const g_110 = &g_111;
static union U2 *g_132 = (void*)0;
static union U2 **g_131 = &g_132;
static uint32_t *g_150 = &g_38.f0;
static uint32_t **g_149 = &g_150;
static uint32_t ***g_148 = &g_149;
static int32_t g_158 = 0x963199CEL;
static int64_t g_160 = 8L;
static uint32_t g_161 = 0xB5E83B3BL;
static uint16_t g_167[1][6][5] = {{{0x0F35L,0x3703L,9UL,4UL,0xF2A6L},{9UL,0x3703L,0x0F35L,0x0F35L,0x3703L},{7UL,65535UL,1UL,0x3703L,0xF2A6L},{65535UL,0x0F35L,1UL,0x9B7DL,1UL},{0xF2A6L,0xF2A6L,0x0F35L,7UL,0UL},{65535UL,0UL,9UL,7UL,7UL}}};
static int16_t *g_181[4][7][2] = {{{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1}},{{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1}},{{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1}},{{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1},{&g_78.f4,&g_38.f1}}};
static int16_t **g_180 = &g_181[2][1][0];
static int32_t g_201[2][7][1] = {{{0x74B01682L},{0x74B01682L},{0x74B01682L},{0x74B01682L},{0x74B01682L},{0x74B01682L},{0x74B01682L}},{{0x74B01682L},{0x74B01682L},{0x74B01682L},{0x74B01682L},{0x74B01682L},{0x74B01682L},{0x74B01682L}}};
static int64_t g_219[4] = {1L,1L,1L,1L};
static uint16_t g_220 = 1UL;
static union U2 g_327 = {6UL};
static struct S0 *g_333 = &g_78;
static struct S0 * const *g_332 = &g_333;
static union U1 g_361 = {0};
static uint8_t *g_390 = (void*)0;
static uint8_t **g_389 = &g_390;
static int8_t *g_442 = &g_9;
static int8_t g_444 = 4L;
static int32_t g_567 = 0x276EDCD5L;
static struct S0 g_582 = {18446744073709551615UL,0xD3AC8D53L,0x62FC2C00L,0x99L,1L,1L,0xE779E162L};
static union U1 **g_662 = (void*)0;
static uint16_t g_728[7][4] = {{0x650CL,0x6E0BL,0x650CL,4UL},{0x17CFL,0x6E0BL,1UL,0x6E0BL},{0x17CFL,4UL,0x650CL,0x6E0BL},{0x650CL,0x6E0BL,0x650CL,4UL},{0x17CFL,0x6E0BL,1UL,0x6E0BL},{0x17CFL,4UL,0x650CL,0x6E0BL},{0x650CL,0x6E0BL,0x650CL,4UL}};
static uint64_t *g_741 = &g_582.f0;
static uint8_t g_742 = 0x7FL;
static uint8_t *** const g_756[1][6] = {{&g_389,&g_389,&g_389,&g_389,&g_389,&g_389}};
static uint8_t *** const *g_755 = &g_756[0][1];
static uint8_t g_825 = 0xFCL;
static uint16_t *g_890 = &g_167[0][2][0];
static uint16_t **g_889 = &g_890;
static uint64_t g_933 = 0UL;
static const uint16_t g_962 = 0x7881L;
static uint16_t g_997 = 0x5D5DL;
static struct S0 *g_1014 = &g_38.f2;
static uint16_t * const *g_1063[6][6][1] = {{{&g_890},{(void*)0},{&g_890},{&g_890},{(void*)0},{&g_890}},{{&g_890},{(void*)0},{(void*)0},{&g_890},{&g_890},{(void*)0}},{{&g_890},{&g_890},{(void*)0},{&g_890},{&g_890},{(void*)0}},{{&g_890},{&g_890},{(void*)0},{(void*)0},{&g_890},{&g_890}},{{(void*)0},{&g_890},{&g_890},{(void*)0},{&g_890},{&g_890}},{{(void*)0},{&g_890},{&g_890},{(void*)0},{(void*)0},{&g_890}}};
static uint16_t * const **g_1062 = &g_1063[4][1][0];
static int8_t **g_1090 = (void*)0;
static union U1 *g_1093 = (void*)0;
static int8_t ***g_1127 = (void*)0;
static uint32_t g_1131 = 0x22E14C2DL;
static int8_t g_1133 = 2L;
static int32_t *g_1159 = &g_78.f6;



static int32_t  func_1(void);
static int32_t  func_10(uint32_t  p_11, int32_t * p_12, int32_t * p_13);
static int32_t * func_14(int32_t * p_15, int8_t * p_16, uint32_t  p_17);
static int8_t * func_18(uint16_t  p_19, int32_t * p_20, const struct S0  p_21, int32_t * p_22);
static int8_t * func_29(uint8_t  p_30, uint32_t  p_31, int16_t  p_32);
static uint8_t  func_33(int64_t  p_34, union U2  p_35, int8_t * p_36, int32_t * p_37);
static union U2 * func_43(int8_t * p_44, int8_t * p_45);
static int32_t * func_47(int8_t * p_48, uint8_t  p_49, uint16_t  p_50, int32_t  p_51, int32_t * p_52);




static int32_t  func_1(void)
{ 
    int32_t l_432 = 0L;
    uint32_t l_521 = 0x9CD8B44DL;
    int32_t **l_550[4][2][2] = {{{&g_82,(void*)0},{&g_82,&g_82}},{{(void*)0,&g_82},{&g_82,(void*)0}},{{&g_82,&g_82},{&g_82,(void*)0}},{{&g_82,&g_82},{(void*)0,&g_82}}};
    int64_t l_559 = 0x61D53C68008EB68CLL;
    int16_t *l_604 = &g_38.f1;
    struct S0 l_608 = {0x22874A4BD98A4C3FLL,0x589C7133L,0UL,-4L,0x0D26L,0xCF5AEAE4L,0x70BFF8B4L};
    int32_t l_632 = 0x5F43943DL;
    union U1 **l_664 = (void*)0;
    uint16_t l_703 = 0x02DEL;
    union U1 ***l_710 = &l_664;
    union U1 * const *l_715 = (void*)0;
    union U1 * const **l_714 = &l_715;
    int64_t l_719 = (-4L);
    int8_t l_732 = 8L;
    union U2 l_738 = {0x271F4FDCL};
    uint32_t l_770 = 0UL;
    int64_t l_800 = 0xE1542265B17453B9LL;
    int32_t l_803 = 1L;
    uint16_t l_805 = 0x1040L;
    uint32_t l_821 = 0x1A2ED0DFL;
    uint16_t l_845 = 0x8B6DL;
    const uint8_t *l_864 = &g_825;
    const uint8_t **l_863 = &l_864;
    const uint8_t ***l_862 = &l_863;
    const uint8_t *** const *l_861 = &l_862;
    uint32_t l_868 = 0xC7916AD7L;
    int32_t *l_882 = &g_582.f6;
    int32_t *l_922 = &l_632;
    int32_t l_932 = 0x8967707EL;
    struct S0 **l_935 = &g_333;
    struct S0 ***l_934 = &l_935;
    int32_t l_986 = 0x09A04818L;
    union U1 ** const *l_992[2];
    const int8_t **l_1007 = &g_8;
    int32_t l_1021 = 0L;
    struct S0 l_1111 = {1UL,0x70BCB2FCL,0x93162FF9L,-1L,0L,2L,0x9BA8EAE3L};
    uint16_t **l_1155 = &g_890;
    uint64_t l_1187 = 0UL;
    uint16_t l_1188 = 65528UL;
    uint32_t l_1249[5][7] = {{0xDABAF0E7L,4294967294UL,4294967294UL,0xDABAF0E7L,0x586F3A48L,0xDABAF0E7L,4294967294UL},{6UL,6UL,0UL,0x8958534AL,0UL,6UL,6UL},{4294967292UL,4294967294UL,0x40D63E90L,4294967294UL,4294967292UL,4294967292UL,4294967294UL},{4294967290UL,0x3D793E95L,4294967290UL,0UL,0UL,4294967290UL,0x3D793E95L},{4294967294UL,0x586F3A48L,0x40D63E90L,0x40D63E90L,0x586F3A48L,4294967294UL,0x586F3A48L}};
    int32_t l_1261 = (-9L);
    uint16_t l_1271[3];
    uint8_t l_1330 = 0x75L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_992[i] = &l_664;
    for (i = 0; i < 3; i++)
        l_1271[i] = 0x8336L;
    if (g_2)
    { 
        int32_t *l_3 = (void*)0;
        int32_t *l_4 = &g_5[1][0];
        int8_t *l_39[6] = {(void*)0,(void*)0,&g_9,(void*)0,(void*)0,(void*)0};
        int8_t *l_443 = &g_444;
        const struct S0 l_445 = {1UL,0x10974CB4L,0x2B2F05CAL,0xCCL,0x9FD6L,-1L,0xBA1469EAL};
        union U1 l_526 = {0};
        int16_t *l_545 = &g_327.f1;
        int32_t l_635 = 0x9B868385L;
        int32_t l_636 = (-1L);
        int32_t l_637 = 0xFC03CBD3L;
        int32_t l_638 = (-7L);
        int32_t l_639 = (-6L);
        int32_t l_640 = 0x47D7C0A8L;
        uint32_t *l_660[7][7][5] = {{{(void*)0,&g_2,&g_2,&g_2,(void*)0},{&g_38.f0,&g_38.f0,&g_38.f0,&g_327.f0,&g_38.f0},{(void*)0,&g_38.f0,&g_2,(void*)0,(void*)0},{&g_38.f0,&g_38.f0,&g_38.f0,&g_327.f0,&g_327.f0},{(void*)0,(void*)0,&g_327.f0,&g_2,&g_327.f0},{(void*)0,&g_327.f0,&g_2,&g_2,&g_2},{&g_2,&g_327.f0,&g_327.f0,&g_327.f0,&g_327.f0}},{{&g_2,&g_327.f0,&g_38.f0,(void*)0,&g_38.f0},{(void*)0,&g_327.f0,&g_2,&g_38.f0,(void*)0},{&g_2,&g_2,&g_38.f0,&g_2,&g_2},{&g_2,&g_327.f0,&g_2,&g_2,(void*)0},{&g_38.f0,(void*)0,&g_327.f0,&g_327.f0,&g_38.f0},{&g_2,(void*)0,&g_327.f0,&g_327.f0,&g_2},{&g_2,&g_327.f0,&g_327.f0,&g_2,(void*)0}},{{(void*)0,&g_38.f0,&g_38.f0,(void*)0,(void*)0},{&g_2,&g_2,&g_38.f0,&g_327.f0,&g_38.f0},{&g_2,&g_2,&g_2,&g_327.f0,&g_327.f0},{(void*)0,&g_38.f0,&g_2,&g_327.f0,&g_2},{(void*)0,&g_2,&g_2,(void*)0,&g_327.f0},{&g_38.f0,(void*)0,&g_38.f0,&g_2,&g_38.f0},{(void*)0,&g_2,&g_327.f0,&g_327.f0,(void*)0}},{{&g_38.f0,&g_327.f0,&g_2,&g_327.f0,&g_2},{(void*)0,&g_327.f0,&g_38.f0,&g_2,(void*)0},{&g_38.f0,&g_327.f0,&g_38.f0,&g_2,&g_327.f0},{&g_2,&g_2,&g_2,&g_38.f0,&g_327.f0},{&g_38.f0,(void*)0,&g_327.f0,(void*)0,&g_38.f0},{&g_2,&g_2,&g_38.f0,&g_327.f0,&g_2},{&g_38.f0,&g_38.f0,&g_327.f0,&g_2,&g_38.f0}},{{&g_38.f0,&g_2,&g_38.f0,&g_2,&g_2},{&g_38.f0,&g_2,&g_38.f0,&g_327.f0,&g_38.f0},{&g_2,&g_38.f0,&g_38.f0,(void*)0,&g_327.f0},{&g_38.f0,&g_327.f0,&g_38.f0,&g_327.f0,&g_327.f0},{&g_327.f0,(void*)0,&g_2,&g_2,(void*)0},{(void*)0,(void*)0,&g_2,&g_38.f0,&g_2},{(void*)0,&g_327.f0,&g_2,&g_327.f0,(void*)0}},{{&g_2,&g_2,&g_38.f0,&g_327.f0,&g_38.f0},{&g_38.f0,&g_327.f0,&g_38.f0,&g_38.f0,&g_327.f0},{&g_2,&g_327.f0,&g_38.f0,&g_327.f0,&g_2},{&g_327.f0,(void*)0,&g_327.f0,(void*)0,(void*)0},{&g_38.f0,&g_327.f0,&g_38.f0,&g_2,&g_38.f0},{&g_327.f0,&g_2,&g_327.f0,&g_38.f0,&g_327.f0},{(void*)0,(void*)0,&g_2,&g_327.f0,&g_38.f0}},{{&g_2,&g_327.f0,&g_2,&g_2,(void*)0},{&g_38.f0,&g_327.f0,&g_327.f0,&g_327.f0,&g_38.f0},{&g_327.f0,&g_327.f0,&g_327.f0,&g_327.f0,&g_2},{&g_38.f0,&g_38.f0,&g_327.f0,&g_327.f0,&g_2},{&g_2,&g_38.f0,&g_327.f0,&g_2,&g_38.f0},{&g_38.f0,&g_327.f0,&g_38.f0,&g_327.f0,&g_38.f0},{(void*)0,(void*)0,&g_38.f0,&g_38.f0,&g_38.f0}}};
        int8_t l_666 = 6L;
        int32_t l_668 = 0xA2E8E551L;
        int32_t l_669 = 0x16D3EC58L;
        int32_t l_724 = 1L;
        int32_t l_725 = 0xD0CF2793L;
        int32_t l_726 = 0x5FCCB18EL;
        int32_t l_727 = 0x11474379L;
        int32_t l_731 = 7L;
        int i, j, k;
        (*l_4) = (-1L);
    }
    else
    { 
        int64_t *l_758 = &l_559;
        int32_t l_761 = 1L;
        uint32_t ***l_788 = &g_149;
        int64_t l_801[7][4][7] = {{{1L,0x9C5BADD58840AF15LL,1L,(-1L),1L,(-2L),3L},{(-5L),0x719DD0C40C0B196BLL,(-1L),(-1L),0x719DD0C40C0B196BLL,(-5L),(-1L)},{0xBF8B64EC5ABDBE2CLL,0x850FDB37E77CB9A7LL,1L,0x9C5BADD58840AF15LL,(-1L),0L,0x58C335B82198290BLL},{(-1L),1L,0x94B8FAAB57C3F811LL,0L,0x9D2D240809D031ACLL,0L,(-6L)}},{{2L,0x850FDB37E77CB9A7LL,0xC52768060A55E031LL,(-7L),0x68DEF2C110DD41F9LL,(-1L),1L},{(-10L),0x719DD0C40C0B196BLL,0xEBA9DFBED33C18A8LL,0L,0xD33CE2B66633BA18LL,(-1L),0xA2BFC3B16EA85B92LL},{0x5E11C2ACB8B813B5LL,0x9C5BADD58840AF15LL,0x58C335B82198290BLL,(-2L),0L,0xE488B364B9C33510LL,0L},{0xEBA9DFBED33C18A8LL,0xFA13C46A7C5BE647LL,0xA2BFC3B16EA85B92LL,0L,0x94B8FAAB57C3F811LL,0x94B8FAAB57C3F811LL,0L}},{{1L,(-1L),1L,(-7L),0x58C335B82198290BLL,0x35EEC74C86AD82B7LL,0x7160298325EBBC64LL},{1L,0x7960AC4F445DEF57LL,(-1L),0L,0x95FC238BCDC9D9BBLL,0x719DD0C40C0B196BLL,0x710D40F19A975B82LL},{0L,0L,0xB87FE06332177EF8LL,0x9C5BADD58840AF15LL,0xEB0A852FA194BEDDLL,0x35EEC74C86AD82B7LL,2L},{(-1L),(-1L),0L,(-1L),(-1L),0x94B8FAAB57C3F811LL,0x9D2D240809D031ACLL}},{{0x0E4F6F1D3827B307LL,1L,0x7264B5C2D534EDC7LL,(-1L),2L,0xE488B364B9C33510LL,(-9L)},{0xFA13C46A7C5BE647LL,0x94B8FAAB57C3F811LL,1L,0x120A54AA58494542LL,(-6L),(-1L),(-10L)},{0x0E4F6F1D3827B307LL,(-1L),0x27F109DFF3644BDALL,0xC97700D717B39413LL,0x27F109DFF3644BDALL,(-1L),0x0E4F6F1D3827B307LL},{(-1L),0xEBA9DFBED33C18A8LL,(-1L),0x9D2D240809D031ACLL,(-1L),0L,0L}},{{0L,0L,3L,0x850FDB37E77CB9A7LL,0x7160298325EBBC64LL,0L,1L},{1L,0xA2BFC3B16EA85B92LL,(-1L),(-5L),0xEBA9DFBED33C18A8LL,(-5L),(-1L)},{1L,0x5A0C728F91420444LL,0x27F109DFF3644BDALL,1L,1L,(-2L),(-1L)},{0xEBA9DFBED33C18A8LL,(-1L),0x9D2D240809D031ACLL,(-1L),0xAF8C6A4702C624EALL,0x94B8FAAB57C3F811LL,0x719DD0C40C0B196BLL}},{{(-1L),0x9C5BADD58840AF15LL,1L,0x850FDB37E77CB9A7LL,0xBF8B64EC5ABDBE2CLL,(-1L),0xBF8B64EC5ABDBE2CLL},{0x710D40F19A975B82LL,0xAF8C6A4702C624EALL,0xAF8C6A4702C624EALL,0x710D40F19A975B82LL,0L,0xEBA9DFBED33C18A8LL,0x120A54AA58494542LL},{1L,1L,0x44BBBE46219A77FALL,0x479A7242366CB282LL,(-9L),0L,1L},{(-1L),0x9D2D240809D031ACLL,(-5L),0L,0xD33CE2B66633BA18LL,0xA2BFC3B16EA85B92LL,0x120A54AA58494542LL}},{{1L,0xC8282727D0C6DD4DLL,0xEB0A852FA194BEDDLL,0x3C91CB6D3F7641A4LL,3L,0x5A0C728F91420444LL,0xBF8B64EC5ABDBE2CLL},{(-1L),(-1L),0x94B8FAAB57C3F811LL,0x9D2D240809D031ACLL,(-10L),(-1L),0x719DD0C40C0B196BLL},{0x68DEF2C110DD41F9LL,0xA66B68D506FDA785LL,0x27F109DFF3644BDALL,(-3L),1L,0xE488B364B9C33510LL,0x7160298325EBBC64LL},{(-1L),(-1L),0L,0xFA13C46A7C5BE647LL,0xFA13C46A7C5BE647LL,0L,(-1L)}}};
        int32_t l_810[5][3] = {{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L}};
        int32_t l_820 = (-2L);
        int32_t l_824 = 0x343DC5E4L;
        int32_t *l_848[2][2][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_432,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_432}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_432,(void*)0,&l_608.f6,(void*)0,&l_432,&g_201[1][3][0],&l_432}}};
        int32_t l_874 = 1L;
        int i, j, k;
        if ((l_550[1][0][1] == ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(((*g_741) > (safe_mod_func_int64_t_s_s(g_201[0][0][0], (safe_rshift_func_int16_t_s_u(((*l_604) = (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((void*)0 == g_755), (((*l_758) = (g_219[3] = (+g_78.f2))) && (safe_lshift_func_uint16_t_u_s(g_582.f2, 3))))), g_158))), 6))))), g_582.f3)), l_761)) , l_550[1][0][1])))
        { 
            int32_t l_766 = 5L;
            union U2 l_769 = {6UL};
            int32_t *l_771 = (void*)0;
            uint32_t *l_802 = &g_327.f0;
            int32_t l_812 = 0xFA6215DCL;
            int32_t l_813 = 0xAA62AC66L;
            int32_t l_815 = 4L;
            int32_t l_816 = 4L;
            int32_t l_817[1][5] = {{0x912B781CL,0x912B781CL,0x912B781CL,0x912B781CL,0x912B781CL}};
            int i, j;
            l_771 = &g_5[1][0];
            (*g_82) = (safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(l_761, (safe_rshift_func_uint8_t_u_u(((**g_110)--), (safe_mul_func_uint16_t_u_u(l_761, ((((*l_771) , l_788) != (void*)0) , (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((((*l_604) = (safe_sub_func_uint8_t_u_u((!((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((*l_802) ^= ((l_800 & ((l_801[1][1][4] >= 0x41676BA5ECDC1C49LL) && (*l_771))) | g_160)), (*l_771))) <= g_161), 65535UL)) > l_803)), l_801[1][1][4]))) , l_801[1][1][4]), (*g_442))), (*g_82)))))))))) >= l_761), l_801[4][0][6])) ^ 0x53718CBCL), (*l_771))), 15)) && (*l_771)), 1L));
            for (g_62 = 0; (g_62 <= 0); g_62 += 1)
            { 
                int8_t l_804[1][7] = {{0x37L,0x37L,0x37L,0x37L,0x37L,0x37L,0x37L}};
                int32_t *l_808[5][7];
                uint8_t * const *l_854 = &g_390;
                uint8_t * const **l_853 = &l_854;
                uint8_t * const ***l_852 = &l_853;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_808[i][j] = &g_78.f6;
                }
                l_805++;
                l_808[2][5] = &g_5[0][0];
                for (l_769.f2.f2 = 0; (l_769.f2.f2 <= 0); l_769.f2.f2 += 1)
                { 
                    int32_t l_809 = 0xA6D1A660L;
                    int32_t l_811 = 1L;
                    int32_t l_814 = 0x4934D44CL;
                    int32_t l_818 = 6L;
                    int32_t l_819[6] = {0xF43FE2C6L,0xF43FE2C6L,0xF43FE2C6L,0xF43FE2C6L,0xF43FE2C6L,0xF43FE2C6L};
                    uint16_t *l_834 = &g_361.f2;
                    uint16_t *l_835[2];
                    union U1 l_844 = {0};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_835[i] = (void*)0;
                    (*g_333) = l_608;
                    ++l_821;
                    --g_825;
                }
                if (l_805)
                    goto lbl_883;
            }
            (*g_82) |= 1L;
            return g_582.f6;
        }
        else
        { 
            uint32_t l_865 = 0UL;
            int32_t *l_869 = &l_608.f6;
            for (l_608.f1 = 0; (l_608.f1 <= 1); l_608.f1 += 1)
            { 
                uint8_t l_866 = 255UL;
                int32_t l_871[5][3][5] = {{{0xC8540ED2L,(-1L),0xAF92928AL,0xAF92928AL,(-1L)},{0x9EAB29D1L,(-6L),0x424561D8L,0x8223242EL,4L},{(-1L),0L,(-1L),0xAF92928AL,0x9B3540A2L}},{{0x7CFF9F06L,6L,4L,6L,0x7CFF9F06L},{(-1L),0xC8540ED2L,0L,(-1L),0L},{0x9EAB29D1L,0x2304A68DL,4L,(-2L),(-1L)}},{{0xC8540ED2L,(-1L),(-1L),0xC8540ED2L,0L},{1L,(-2L),0x424561D8L,0L,0x7CFF9F06L},{0L,(-1L),0xAF92928AL,0x9B3540A2L,0x9B3540A2L}},{{0x724001D0L,0x2304A68DL,0x724001D0L,0L,4L},{(-1L),0xC8540ED2L,0x9B3540A2L,0xC8540ED2L,(-1L)},{0x724001D0L,6L,0x9EAB29D1L,(-2L),0x9EAB29D1L}},{{0L,0L,0x9B3540A2L,(-1L),(-1L)},{1L,(-6L),0x724001D0L,6L,(-1L)},{(-1L),0xAF92928AL,0x9B3540A2L,0x9B3540A2L,0xAF92928AL}}};
                int i, j, k;
                for (g_327.f2.f5 = 0; (g_327.f2.f5 <= 1); g_327.f2.f5 += 1)
                { 
                    uint16_t l_867 = 7UL;
                    int32_t l_870 = 0xA9D388C9L;
                    int32_t l_872 = (-1L);
                    int32_t l_873[7] = {0xF5C407FAL,0xF5C407FAL,0xF5C407FAL,0xF5C407FAL,0xF5C407FAL,0xF5C407FAL,0xF5C407FAL};
                    uint8_t l_875 = 255UL;
                    int i, j;
                    g_82 = &g_201[1][6][0];
                    g_82 = l_869;
                    l_875++;
                }
                for (g_78.f0 = 0; (g_78.f0 <= 1); g_78.f0 += 1)
                { 
                    uint32_t *l_878 = &g_38.f2.f2;
                    uint32_t *l_879 = &g_327.f2.f2;
                    uint32_t *l_880 = (void*)0;
                    uint32_t *l_881 = (void*)0;
                    if ((*l_869))
                        break;
                    l_882 = l_881;
                }
            }
        }
lbl_883:
        g_82 = &g_5[1][0];
        return g_582.f3;
    }
    for (g_38.f2.f6 = (-26); (g_38.f2.f6 < 13); g_38.f2.f6++)
    { 
        int8_t l_893 = 0x77L;
        int32_t l_896[3];
        const int32_t * const l_919 = (void*)0;
        int32_t *l_921 = &g_158;
        int32_t **l_920[5];
        struct S0 l_923 = {0xF6B4B843A65BA21BLL,0UL,18446744073709551615UL,9L,1L,0x3E3D9F7EL,-6L};
        struct S0 ***l_936 = &l_935;
        int8_t l_965 = (-6L);
        const int64_t l_969 = 0xFC24BFA299B32FEBLL;
        uint8_t l_973[2][6] = {{0x46L,0x46L,0x46L,0x46L,0x46L,0x46L},{0x46L,0x46L,0x46L,0x46L,0x46L,0x46L}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_896[i] = 1L;
        for (i = 0; i < 5; i++)
            l_920[i] = &l_921;
        for (g_567 = 1; (g_567 >= 0); g_567 -= 1)
        { 
            uint32_t l_886 = 4294967295UL;
            struct S0 l_887 = {0x71095CE42A745A7ALL,0x1691C41BL,0x38FFF64AL,0L,5L,0xC0E185B3L,5L};
            int32_t l_895 = 0x55AE89BBL;
            if (l_886)
                break;
            for (l_738.f1 = 0; (l_738.f1 <= 0); l_738.f1 += 1)
            { 
                uint64_t l_899 = 1UL;
                int i, j, k;
                for (g_742 = 0; (g_742 <= 1); g_742 += 1)
                { 
                    struct S0 l_888 = {0x15FD1730B51841D3LL,1UL,0x44474E71L,3L,0x0F41L,0x3D6D11AEL,0xE0E1F8D3L};
                    uint16_t ***l_891 = (void*)0;
                    uint16_t ***l_892 = &g_889;
                    int i, j, k;
                    g_201[g_567][(g_742 + 2)][l_738.f1] = g_201[g_742][(g_742 + 3)][l_738.f1];
                    l_888 = l_887;
                    (*l_892) = g_889;
                    if ((*g_82))
                        break;
                }
                for (l_886 = 0; (l_886 <= 1); l_886 += 1)
                { 
                    int32_t l_894 = 0xB0FAE0B5L;
                    int32_t l_897[7][1] = {{0x3E6537D4L},{0xF3970022L},{0x3E6537D4L},{0xF3970022L},{0x3E6537D4L},{0xF3970022L},{0x3E6537D4L}};
                    int64_t l_898 = 0x4BC010B6F1CBB681LL;
                    int i, j, k;
                    l_899++;
                }
                g_82 = &g_201[g_567][(l_738.f1 + 5)][l_738.f1];
                for (g_582.f2 = 0; (g_582.f2 <= 1); g_582.f2 += 1)
                { 
                    uint16_t l_902 = 0x9C19L;
                    l_902++;
                }
            }
        }
        (*g_82) |= (safe_rshift_func_uint16_t_u_u(((*g_890) = ((((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((((((safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((((*l_882) <= ((((l_919 == (l_922 = &g_567)) < (*l_882)) <= g_582.f4) ^ (((l_923 , (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((g_444 != 18446744073709551608UL), l_896[0])) , 0x75BEL), l_932)), (**g_889))), g_933))) && (*g_150)) >= l_923.f2))) > 0xE6L), l_893)) && 5L), 3L)) , l_934) == l_936) >= l_923.f1) && 0x2657L), (*g_111))), l_923.f3)) == 0x115875FEL), 9)) , 0x961AFC41L) ^ 0xF22A9F22L) <= 1L)), (*l_882)));
        for (l_770 = 0; (l_770 == 37); l_770 = safe_add_func_uint16_t_u_u(l_770, 5))
        { 
            int64_t l_968 = 0x1AF1477681E64A69LL;
            int32_t l_970[4][7][4] = {{{(-1L),0xAA7AD436L,0x388566BDL,1L},{(-1L),0x36D5F2C5L,(-1L),1L},{0xA04A5D22L,0xAA7AD436L,(-1L),(-5L)},{0x0551AAD5L,0x18CF6920L,(-8L),0x9E6A0C06L},{3L,(-1L),(-1L),0x388566BDL},{1L,3L,3L,0x696CCB2FL},{0x98603401L,(-1L),0xE75C9A86L,0x54C9F90DL}},{{(-5L),(-1L),1L,(-1L)},{0x42DC6FF3L,0x9E6A0C06L,0xAA7AD436L,3L},{0x084D4319L,(-1L),1L,(-1L)},{(-1L),(-1L),(-1L),0x48BDEDFEL},{0xAA7AD436L,0xD872911EL,0x48BDEDFEL,0xD872911EL},{4L,0x0551AAD5L,1L,3L},{1L,(-10L),0x084D4319L,(-1L)}},{{0x57AD066BL,0x696CCB2FL,7L,(-1L)},{0x57AD066BL,0xE2457EEBL,0x084D4319L,(-1L)},{1L,(-1L),1L,7L},{4L,1L,0x48BDEDFEL,0L},{0xAA7AD436L,1L,(-1L),0x42DC6FF3L},{(-1L),1L,1L,1L},{0x084D4319L,1L,0xAA7AD436L,0x2A43B3A1L}},{{0x42DC6FF3L,0xE75C9A86L,1L,0xA04A5D22L},{(-5L),(-2L),0xE75C9A86L,(-1L)},{0x98603401L,9L,3L,0x084D4319L},{1L,0x2A43B3A1L,(-1L),(-1L)},{3L,3L,(-8L),9L},{0x0551AAD5L,0x57AD066BL,(-1L),0x18CF6920L},{0xA04A5D22L,(-1L),(-1L),(-1L)}}};
            int32_t l_971 = 0xDA703705L;
            int32_t l_972 = 3L;
            uint32_t l_979 = 0x92B5E3B5L;
            int i, j, k;
            for (l_732 = 3; (l_732 >= (-23)); l_732--)
            { 
                uint32_t l_947 = 0x43434D3BL;
                const uint16_t **l_960 = (void*)0;
                const uint16_t *l_961 = &g_962;
                uint16_t *l_964 = (void*)0;
                uint16_t **l_963 = &l_964;
                int64_t *l_966[2][4] = {{&l_559,&g_219[1],&g_219[1],&l_559},{&g_219[1],&l_559,&g_219[1],&g_219[1]}};
                int32_t l_967[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_967[i] = 0x775AC6DBL;
                (*l_882) = ((65535UL && ((((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(0x6002L, (l_947 &= (*l_882)))) == ((safe_sub_func_uint64_t_u_u((*g_741), (l_967[0] = (safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((l_961 = (*g_889)) != ((*l_963) = (*g_889))) < ((***l_936) , (**g_889))), 1UL)), 0)) & l_965), g_78.f6)), (*g_442))), 6))))) & l_893)) || l_968), l_969)) | l_969), l_970[0][3][0])) , 0x343EL) , (void*)0) != (*l_710))) > l_896[0]);
            }
            ++l_973[0][2];
            for (l_923.f0 = (-5); (l_923.f0 >= 50); ++l_923.f0)
            { 
                int64_t l_978[5][4];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_978[i][j] = 0L;
                }
                l_979--;
            }
        }
    }
    for (g_582.f2 = 0; (g_582.f2 >= 30); ++g_582.f2)
    { 
        union U1 ***l_993[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_1001[3];
        int16_t ***l_1019 = &g_180;
        int32_t l_1069 = 0x4937CBDEL;
        uint16_t l_1085 = 0xF40BL;
        int32_t l_1215 = 1L;
        uint32_t l_1246 = 0xBBB33A2EL;
        int32_t l_1248 = 0x31E7DA2BL;
        uint16_t l_1305 = 0UL;
        uint32_t l_1324 = 18446744073709551610UL;
        int i;
        for (i = 0; i < 3; i++)
            l_1001[i] = &g_582.f6;
    }
    for (l_703 = (-7); (l_703 >= 44); l_703++)
    { 
        struct S0 l_1329 = {0xE34D9DA59A860A34LL,0x924FD9A2L,0x3D5EB7D0L,0L,9L,0xC5013181L,0xBF624335L};
        (***l_934) = l_1329;
        return g_1133;
    }
    return l_1330;
}



static int32_t  func_10(uint32_t  p_11, int32_t * p_12, int32_t * p_13)
{ 
    int8_t l_515[4] = {0xA5L,0xA5L,0xA5L,0xA5L};
    uint64_t *l_520[5];
    int i;
    for (i = 0; i < 5; i++)
        l_520[i] = (void*)0;
    (*p_12) ^= (((safe_mod_func_uint64_t_u_u(0xD07AA265930A24FALL, (p_11 , (g_327.f3 = (((void*)0 != &g_167[0][4][0]) | (l_515[3] < ((safe_rshift_func_int8_t_s_s(((*p_13) , ((*g_442) = (safe_div_func_int8_t_s_s((*g_442), l_515[1])))), l_515[3])) <= p_11))))))) , 0xAE0FL) , l_515[0]);
    (*p_12) &= (0x2F21E255EBC0A6E3LL && g_78.f3);
    return (*p_12);
}



static int32_t * func_14(int32_t * p_15, int8_t * p_16, uint32_t  p_17)
{ 
    uint64_t l_470[7][4] = {{0x221A4DFEBEB06061LL,0x11B301C19DB2DD74LL,0x11B301C19DB2DD74LL,0x221A4DFEBEB06061LL},{0x11B301C19DB2DD74LL,0x221A4DFEBEB06061LL,0x11B301C19DB2DD74LL,0x11B301C19DB2DD74LL},{0x221A4DFEBEB06061LL,0x221A4DFEBEB06061LL,0xF0013285A7FAE8F1LL,0x221A4DFEBEB06061LL},{0x221A4DFEBEB06061LL,0x11B301C19DB2DD74LL,0x11B301C19DB2DD74LL,0x221A4DFEBEB06061LL},{0x11B301C19DB2DD74LL,0x221A4DFEBEB06061LL,0x11B301C19DB2DD74LL,0x11B301C19DB2DD74LL},{0x221A4DFEBEB06061LL,0x221A4DFEBEB06061LL,0xF0013285A7FAE8F1LL,0x221A4DFEBEB06061LL},{0x221A4DFEBEB06061LL,0x11B301C19DB2DD74LL,0x11B301C19DB2DD74LL,0x221A4DFEBEB06061LL}};
    uint8_t l_471[5][6] = {{255UL,0xB3L,255UL,255UL,0xB3L,0UL},{0xAFL,0UL,0xC3L,0xB3L,0xC3L,0UL},{0xC3L,0xAFL,255UL,0x49L,0x49L,255UL},{0xC3L,0xC3L,0x49L,0xB3L,255UL,0xB3L},{0xAFL,0xC3L,0xAFL,255UL,0x49L,0x49L}};
    int32_t l_472 = 0x1A3B1BD3L;
    int16_t ** const *l_501 = &g_180;
    int32_t l_507 = 0x99B2DEE3L;
    int i, j;
    for (g_327.f2.f0 = 0; (g_327.f2.f0 == 16); g_327.f2.f0++)
    { 
        int32_t l_508 = 0xD1C4B744L;
        struct S0 *l_511 = (void*)0;
        for (g_62 = 14; (g_62 <= 2); g_62 = safe_sub_func_int64_t_s_s(g_62, 3))
        { 
            int32_t **l_453[7] = {&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82};
            int i;
            g_82 = p_15;
            l_472 &= (p_17 <= (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((0x85L & ((safe_lshift_func_int8_t_s_s(((*p_16) = ((((safe_mul_func_int16_t_s_s(((*g_111) < ((safe_mul_func_int16_t_s_s(((safe_div_func_int32_t_s_s((l_470[6][3] = 4L), (g_9 , (*g_82)))) != (*p_16)), p_17)) ^ 8L)), p_17)) > 0L) | (-1L)) < (-4L))), 6)) ^ 250UL)) && (*p_16)), l_471[4][5])), 0)), 0x6DL)));
            for (g_78.f2 = 0; (g_78.f2 <= 3); g_78.f2 += 1)
            { 
                uint16_t *l_477 = &g_167[0][1][0];
                union U2 ***l_488 = &g_131;
                uint32_t *l_506 = &g_2;
                int32_t l_509 = 0xA02EFBA4L;
                int i;
                if ((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((--(*l_477)), (safe_lshift_func_int16_t_s_u((l_509 = (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint64_t_u_u((((*l_488) = &g_132) != ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u((((*l_506) = ((***g_148) = (safe_rshift_func_int8_t_s_u(((((*g_389) != (((safe_add_func_int32_t_s_s(g_219[g_78.f2], (safe_div_func_uint16_t_u_u((&g_180 != (g_9 , l_501)), (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((p_17 ^ p_17) && p_17) >= (***g_148)), (*g_82))), p_17)))))) || g_219[g_78.f2]) , (void*)0)) < p_17) || g_219[g_78.f2]), 5)))) & l_507), g_219[g_78.f2])), l_508)), 0)) , (void*)0)), p_17)) == p_17), g_219[g_78.f2])) ^ p_17), p_17))), p_17)))), 0L)))
                { 
                    return &g_5[1][0];
                }
                else
                { 
                    struct S0 **l_510 = &g_333;
                    int32_t *l_512 = &l_509;
                    l_511 = ((*l_510) = &g_78);
                    return p_15;
                }
            }
        }
    }
    return p_15;
}



static int8_t * func_18(uint16_t  p_19, int32_t * p_20, const struct S0  p_21, int32_t * p_22)
{ 
    int32_t * const l_446 = (void*)0;
    int32_t **l_447 = &g_82;
    int8_t *l_448 = &g_444;
    (*l_447) = l_446;
    return l_448;
}



static int8_t * func_29(uint8_t  p_30, uint32_t  p_31, int16_t  p_32)
{ 
    int32_t *l_433 = &g_78.f6;
    int32_t *l_434 = &g_38.f2.f5;
    int32_t *l_435 = (void*)0;
    int32_t *l_436[7][7] = {{&g_78.f5,&g_78.f5,(void*)0,&g_78.f5,&g_78.f5,(void*)0,&g_78.f5},{&g_201[1][0][0],&g_78.f5,&g_78.f5,&g_201[1][0][0],&g_78.f5,&g_78.f5,&g_201[1][0][0]},{&g_5[1][0],&g_78.f5,&g_5[1][0],&g_5[1][0],&g_78.f5,&g_5[1][0],&g_5[1][0]},{&g_201[1][0][0],&g_201[1][0][0],&g_5[4][0],&g_201[1][0][0],&g_201[1][0][0],&g_5[4][0],&g_201[1][0][0]},{&g_78.f5,&g_5[1][0],&g_5[1][0],&g_78.f5,&g_5[1][0],&g_5[1][0],&g_78.f5},{&g_78.f5,&g_201[1][0][0],&g_78.f5,&g_78.f5,&g_201[1][0][0],&g_78.f5,&g_78.f5},{&g_78.f5,&g_78.f5,(void*)0,&g_78.f5,&g_78.f5,(void*)0,&g_78.f5}};
    int32_t l_437 = 0x79577162L;
    uint64_t l_438 = 0UL;
    int8_t *l_441 = &g_78.f3;
    int i, j;
    l_438--;
    return l_441;
}



static uint8_t  func_33(int64_t  p_34, union U2  p_35, int8_t * p_36, int32_t * p_37)
{ 
    uint16_t l_42 = 0x7911L;
    int8_t *l_46[5];
    int32_t *l_424 = &g_78.f6;
    int32_t *l_425 = &g_78.f5;
    int32_t *l_426 = &g_327.f2.f5;
    int32_t *l_427[3][4][3] = {{{&g_201[1][6][0],&g_5[1][0],&g_201[0][1][0]},{(void*)0,&g_5[1][0],(void*)0},{&g_327.f2.f5,&g_201[1][6][0],&g_201[0][1][0]},{&g_327.f2.f5,&g_327.f2.f5,&g_201[1][6][0]}},{{(void*)0,&g_201[1][6][0],&g_201[1][6][0]},{&g_201[1][6][0],&g_5[1][0],&g_201[0][1][0]},{(void*)0,&g_5[1][0],(void*)0},{&g_327.f2.f5,&g_201[1][6][0],&g_201[0][1][0]}},{{&g_327.f2.f5,&g_327.f2.f5,&g_201[1][6][0]},{(void*)0,&g_201[1][6][0],&g_201[1][6][0]},{&g_201[1][6][0],&g_5[1][0],&g_201[0][1][0]},{(void*)0,&g_5[1][0],(void*)0}}};
    int64_t l_428[4][7][6] = {{{0xB14508C2AED8D73BLL,1L,1L,0xB14508C2AED8D73BLL,0xD8FCC2C7134CA343LL,1L},{(-1L),0xEB407D834A723A6ALL,0xB5888FF1889E3087LL,1L,0L,0x9517187A3140BC73LL},{(-1L),0xD8FCC2C7134CA343LL,0xDE515819AA47E8F7LL,0x06EC776B19953FFBLL,0L,0x55CEDB6F3A09722CLL},{0x982890B461E487A1LL,0xEB407D834A723A6ALL,0x3295B277E271E0F2LL,(-2L),0xD8FCC2C7134CA343LL,0xB5888FF1889E3087LL},{0xAB228961EDC535D3LL,1L,0xEB407D834A723A6ALL,1L,1L,0xB5888FF1889E3087LL},{(-2L),1L,0x3295B277E271E0F2LL,(-1L),0xB5888FF1889E3087LL,0x55CEDB6F3A09722CLL},{0x9BAD08FA81D50A4FLL,0x9517187A3140BC73LL,0xDE515819AA47E8F7LL,0xAB228961EDC535D3LL,0xDE515819AA47E8F7LL,0x9517187A3140BC73LL}},{{0x9BAD08FA81D50A4FLL,0x55CEDB6F3A09722CLL,0xB5888FF1889E3087LL,(-1L),0x3295B277E271E0F2LL,1L},{(-2L),0xB5888FF1889E3087LL,1L,1L,0xEB407D834A723A6ALL,1L},{0xAB228961EDC535D3LL,0xB5888FF1889E3087LL,0xD8FCC2C7134CA343LL,(-2L),0x3295B277E271E0F2LL,0xEB407D834A723A6ALL},{0x982890B461E487A1LL,0x55CEDB6F3A09722CLL,0L,0x06EC776B19953FFBLL,0xDE515819AA47E8F7LL,0xD8FCC2C7134CA343LL},{(-1L),0x9517187A3140BC73LL,0L,0x55CEDB6F3A09722CLL,(-1L),(-1L)},{0L,(-8L),0x9237A1D1F9464C1BLL,0xB5888FF1889E3087LL,0xC5A70D264D60C7CFLL,0xC5A70D264D60C7CFLL},{0xB5888FF1889E3087LL,0xC5A70D264D60C7CFLL,0xC5A70D264D60C7CFLL,0xB5888FF1889E3087LL,0x9237A1D1F9464C1BLL,(-8L)}},{{0L,(-1L),(-1L),0x55CEDB6F3A09722CLL,0xEEE3CC619419C563LL,(-4L)},{0xEB407D834A723A6ALL,0x9237A1D1F9464C1BLL,0x71033F3851746D8DLL,0x9517187A3140BC73LL,0xEEE3CC619419C563LL,(-8L)},{0x6526E0FB54DAC622LL,(-1L),(-1L),1L,0x9237A1D1F9464C1BLL,(-1L)},{0xD8FCC2C7134CA343LL,0xC5A70D264D60C7CFLL,(-1L),1L,0xC5A70D264D60C7CFLL,(-1L)},{1L,(-8L),(-1L),0xEB407D834A723A6ALL,(-1L),(-8L)},{7L,(-4L),0x71033F3851746D8DLL,0xD8FCC2C7134CA343LL,0x71033F3851746D8DLL,(-4L)},{7L,(-8L),(-1L),0xEB407D834A723A6ALL,(-1L),(-8L)}},{{1L,(-1L),0xC5A70D264D60C7CFLL,1L,(-1L),0xC5A70D264D60C7CFLL},{0xD8FCC2C7134CA343LL,(-1L),0x9237A1D1F9464C1BLL,1L,(-1L),(-1L)},{0x6526E0FB54DAC622LL,(-8L),0xEEE3CC619419C563LL,0x9517187A3140BC73LL,0x71033F3851746D8DLL,0x9237A1D1F9464C1BLL},{0xEB407D834A723A6ALL,(-4L),0xEEE3CC619419C563LL,0x55CEDB6F3A09722CLL,(-1L),(-1L)},{0L,(-8L),0x9237A1D1F9464C1BLL,0xB5888FF1889E3087LL,0xC5A70D264D60C7CFLL,0xC5A70D264D60C7CFLL},{0xB5888FF1889E3087LL,0xC5A70D264D60C7CFLL,0xC5A70D264D60C7CFLL,0xB5888FF1889E3087LL,0x9237A1D1F9464C1BLL,(-8L)},{0L,(-1L),(-1L),0x55CEDB6F3A09722CLL,0xEEE3CC619419C563LL,(-4L)}}};
    uint32_t l_429 = 0x9FF160E3L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_46[i] = &g_9;
    l_42 ^= (safe_sub_func_uint8_t_u_u(255UL, ((void*)0 == &g_5[1][0])));
    (*g_131) = func_43(&g_9, (l_46[0] = l_46[0]));
    l_429++;
    return (**g_110);
}



static union U2 * func_43(int8_t * p_44, int8_t * p_45)
{ 
    uint32_t l_55 = 0x6B405B75L;
    uint8_t *l_61 = &g_62;
    int32_t l_63 = 1L;
    union U2 *l_64 = (void*)0;
    int32_t l_65[2][1];
    int32_t **l_373[3];
    int32_t *l_374 = &g_38.f2.f6;
    uint32_t l_421 = 0x6A344925L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_65[i][j] = 9L;
    }
    for (i = 0; i < 3; i++)
        l_373[i] = &g_82;
    l_374 = func_47(&g_9, (l_65[1][0] = ((((((l_55 && ((((safe_lshift_func_uint16_t_u_u(l_55, 13)) != ((!18446744073709551615UL) <= (((safe_sub_func_uint8_t_u_u(l_55, (l_63 &= ((*l_61) = l_55)))) , (void*)0) == (void*)0))) || l_55) , l_63)) >= l_55) , (void*)0) != l_64) && 0L) | l_55)), l_55, l_55, &g_5[1][0]);
    if ((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((0xDC31E78DL < (***g_148)), 5)), g_62)))
    { 
        (*g_82) ^= (*l_374);
    }
    else
    { 
        int32_t *l_380 = &l_63;
        int32_t *l_381 = &l_65[1][0];
        uint32_t l_404[3][6] = {{0xAB64B319L,0xAB64B319L,0xAB64B319L,0xAB64B319L,0xAB64B319L,0xAB64B319L},{0xAB64B319L,0xAB64B319L,0xAB64B319L,0xAB64B319L,0xAB64B319L,0xAB64B319L},{0xAB64B319L,0xAB64B319L,0xAB64B319L,0xAB64B319L,0xAB64B319L,0xAB64B319L}};
        uint8_t ***l_416 = &g_389;
        int i, j;
        for (g_78.f2 = 0; (g_78.f2 <= 0); g_78.f2 += 1)
        { 
            int32_t *l_379 = &l_63;
            int32_t l_399[6] = {1L,0xB47F715CL,0xB47F715CL,1L,0xB47F715CL,0xB47F715CL};
            int i;
            for (g_78.f3 = 0; (g_78.f3 >= 0); g_78.f3 -= 1)
            { 
                uint8_t **l_387 = &g_111;
                int8_t *l_395 = (void*)0;
                int32_t l_400 = 1L;
                int32_t l_401 = 0L;
                int32_t l_402[4] = {1L,1L,1L,1L};
                union U2 *l_408[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_408[i] = (void*)0;
                l_381 = (l_380 = l_379);
                for (g_327.f2.f4 = 0; (g_327.f2.f4 <= 0); g_327.f2.f4 += 1)
                { 
                    uint32_t *l_382 = &g_2;
                    int32_t l_386 = 0xD56A32BAL;
                    uint8_t ***l_388[6][4] = {{(void*)0,&l_387,(void*)0,&l_387},{(void*)0,&l_387,(void*)0,&l_387},{(void*)0,&l_387,(void*)0,&l_387},{(void*)0,&l_387,(void*)0,&l_387},{(void*)0,&l_387,(void*)0,&l_387},{(void*)0,&l_387,(void*)0,&l_387}};
                    uint64_t *l_396 = &g_78.f0;
                    uint16_t *l_397 = &g_167[0][4][0];
                    int32_t l_398 = 0x01400FB0L;
                    int32_t l_403 = 0x9E60072CL;
                    union U2 *l_407 = &g_38;
                    int i, j, k;
                    l_398 &= (l_382 != (((*g_111) <= ((*p_45) = (+((safe_rshift_func_int8_t_s_u(l_386, 4)) >= ((*g_111) || ((g_389 = l_387) == (((*l_397) = ((safe_div_func_int64_t_s_s((-1L), ((*l_396) = (safe_div_func_int16_t_s_s(((l_395 != p_44) ^ (*g_111)), (*l_379)))))) == (*g_82))) , l_387))))))) , (void*)0));
                    --l_404[2][0];
                    (*g_82) ^= (l_407 == l_408[0]);
                }
            }
            if ((*g_82))
                continue;
            for (g_38.f2.f0 = 0; (g_38.f2.f0 <= 1); g_38.f2.f0 += 1)
            { 
                uint32_t l_411 = 0x0260E34AL;
                uint8_t ***l_417 = (void*)0;
                uint64_t l_420 = 0x5D426FBAD27DAFF8LL;
                for (l_55 = 0; (l_55 <= 1); l_55 += 1)
                { 
                    int32_t * const l_409 = &g_201[1][6][0];
                    int32_t **l_410 = &g_82;
                    (*l_410) = l_409;
                }
                (*l_379) = (l_411 <= ((safe_div_func_uint16_t_u_u(g_73.f0, (safe_mod_func_int16_t_s_s(((*l_379) | ((l_417 = l_416) != l_416)), ((safe_rshift_func_int8_t_s_u((*g_8), 6)) && ((*g_82) > (**g_149))))))) , l_420));
                for (l_411 = 0; (l_411 <= 1); l_411 += 1)
                { 
                    if ((*g_82))
                        break;
                }
            }
        }
    }
    ++l_421;
    return l_64;
}



static int32_t * func_47(int8_t * p_48, uint8_t  p_49, uint16_t  p_50, int32_t  p_51, int32_t * p_52)
{ 
    struct S0 l_77 = {0xDF93C5815DA77236LL,0x342871EBL,0xC2610AA4L,0xECL,-4L,0L,0x54837A00L};
    int8_t * const l_88[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_142 = &g_2;
    uint32_t **l_141 = &l_142;
    struct S0 l_154 = {0x2EBD030DF63A0E5FLL,0x5790E88BL,18446744073709551615UL,-7L,-7L,0xF4CCE49BL,0L};
    int32_t l_210 = 0xE7D8B5B9L;
    int32_t l_212 = (-3L);
    int16_t l_214 = 0x8FEBL;
    int32_t l_215 = (-10L);
    int32_t l_217[4][4] = {{1L,1L,0xB029217CL,1L},{1L,0x90AB5DB3L,0x90AB5DB3L,1L},{0x90AB5DB3L,1L,0x90AB5DB3L,0x90AB5DB3L},{1L,1L,0xB029217CL,1L}};
    uint32_t l_229 = 1UL;
    int32_t l_233 = 0L;
    uint32_t l_236[7] = {0xB978A2D6L,0xB978A2D6L,0xB978A2D6L,0xB978A2D6L,0xB978A2D6L,0xB978A2D6L,0xB978A2D6L};
    int32_t * const *l_302 = &g_82;
    int8_t l_309[6][3][2] = {{{0x69L,(-1L)},{0x69L,(-1L)},{0x69L,(-1L)}},{{0x69L,(-1L)},{0x69L,(-1L)},{0x69L,(-1L)}},{{0x69L,(-1L)},{0x69L,(-1L)},{0x69L,(-1L)}},{{0x69L,(-1L)},{0x69L,(-1L)},{0x69L,(-1L)}},{{0x69L,(-1L)},{0x69L,(-1L)},{0x69L,(-1L)}},{{0x69L,(-1L)},{0x69L,(-1L)},{0x69L,(-1L)}}};
    int i, j, k;
    if ((*p_52))
    { 
        const union U2 *l_72 = &g_73;
        int32_t l_98 = 0xB4A04EC1L;
        union U2 **l_134 = &g_132;
        uint32_t *l_139 = &g_2;
        uint32_t **l_138 = &l_139;
        uint8_t *l_175[1];
        int16_t * const *l_185 = &g_181[3][6][0];
        struct S0 l_195 = {18446744073709551615UL,0UL,2UL,0x5DL,-8L,1L,0xD5C75568L};
        int32_t l_207 = 0xB1C4E8F1L;
        int32_t l_208 = 1L;
        int32_t l_209 = 0xBF7B5BDBL;
        int32_t l_211 = 6L;
        int32_t l_216[1];
        int i;
        for (i = 0; i < 1; i++)
            l_175[i] = &g_62;
        for (i = 0; i < 1; i++)
            l_216[i] = 0x6A3D8643L;
        for (g_38.f0 = (-5); (g_38.f0 == 21); g_38.f0 = safe_add_func_uint16_t_u_u(g_38.f0, 2))
        { 
            const union U2 **l_68 = (void*)0;
            const union U2 *l_70 = &g_71;
            const union U2 **l_69[3];
            union U2 *l_74 = &g_38;
            union U2 **l_75 = &l_74;
            int32_t l_76 = (-4L);
            union U1 l_135[1] = {{0}};
            int32_t **l_143 = &g_82;
            int32_t **l_144 = (void*)0;
            int32_t **l_145 = (void*)0;
            int32_t *l_147 = &l_98;
            int32_t **l_146 = &l_147;
            uint8_t * const *l_197 = &g_111;
            int32_t l_202[5][7] = {{0x17D3F7C7L,1L,0x17D3F7C7L,0x40BFACF2L,0x40BFACF2L,0x17D3F7C7L,1L},{0x7CA1D526L,0xF9A41DA2L,(-1L),(-1L),0xF9A41DA2L,0x7CA1D526L,0xF9A41DA2L},{0x17D3F7C7L,0x40BFACF2L,0x40BFACF2L,0x17D3F7C7L,1L,0x17D3F7C7L,0x40BFACF2L},{(-3L),(-3L),0x7CA1D526L,(-1L),0x7CA1D526L,(-3L),(-3L)},{0L,0x40BFACF2L,(-6L),0x40BFACF2L,0L,0L,0x40BFACF2L}};
            int32_t l_213 = 3L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_69[i] = &l_70;
            l_76 = ((l_72 = &g_38) != ((*l_75) = l_74));
        }
        if ((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s(l_195.f2, (((l_209 &= ((safe_add_func_uint16_t_u_u((0xAB58A152843587B8LL & (l_229 || ((void*)0 != (*g_149)))), ((safe_mod_func_uint16_t_u_u((~(p_48 == p_48)), p_49)) && 0x797BD0F8L))) <= l_216[0])) == 0x76563E01A3041075LL) || g_78.f1))), p_51)))
        { 
            return p_52;
        }
        else
        { 
            return &g_201[1][4][0];
        }
    }
    else
    { 
        int32_t *l_234 = &l_210;
        int32_t *l_235[2];
        union U2 l_308 = {0x26B8B0E4L};
        struct S0 *l_335 = &g_78;
        union U1 l_349 = {0};
        uint16_t l_354 = 0UL;
        int32_t **l_372 = &l_234;
        int i;
        for (i = 0; i < 2; i++)
            l_235[i] = &l_217[3][2];
lbl_313:
        --l_236[6];
        for (l_229 = 0; (l_229 <= 0); l_229 += 1)
        { 
            struct S0 l_239[4][6][2] = {{{{0x09BEB0EB3C9D2B86LL,0x484FBF15L,1UL,0x59L,-4L,0xFD7EAC53L,-5L},{0UL,7UL,5UL,0x4DL,8L,0xD9222CCBL,0x0AA2DB91L}},{{0UL,7UL,5UL,0x4DL,8L,0xD9222CCBL,0x0AA2DB91L},{18446744073709551606UL,0x83E1DDF3L,18446744073709551611UL,-1L,0L,7L,0xCCAD504FL}},{{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L},{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L}},{{0x09BEB0EB3C9D2B86LL,0x484FBF15L,1UL,0x59L,-4L,0xFD7EAC53L,-5L},{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L}},{{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L},{18446744073709551606UL,0x83E1DDF3L,18446744073709551611UL,-1L,0L,7L,0xCCAD504FL}},{{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L},{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L}}},{{{0x09BEB0EB3C9D2B86LL,0x484FBF15L,1UL,0x59L,-4L,0xFD7EAC53L,-5L},{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L}},{{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L},{18446744073709551606UL,0x83E1DDF3L,18446744073709551611UL,-1L,0L,7L,0xCCAD504FL}},{{0UL,7UL,5UL,0x4DL,8L,0xD9222CCBL,0x0AA2DB91L},{0UL,7UL,5UL,0x4DL,8L,0xD9222CCBL,0x0AA2DB91L}},{{0x09BEB0EB3C9D2B86LL,0x484FBF15L,1UL,0x59L,-4L,0xFD7EAC53L,-5L},{0UL,7UL,5UL,0x4DL,8L,0xD9222CCBL,0x0AA2DB91L}},{{0UL,7UL,5UL,0x4DL,8L,0xD9222CCBL,0x0AA2DB91L},{18446744073709551606UL,0x83E1DDF3L,18446744073709551611UL,-1L,0L,7L,0xCCAD504FL}},{{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L},{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L}}},{{{0x09BEB0EB3C9D2B86LL,0x484FBF15L,1UL,0x59L,-4L,0xFD7EAC53L,-5L},{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L}},{{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L},{18446744073709551606UL,0x83E1DDF3L,18446744073709551611UL,-1L,0L,7L,0xCCAD504FL}},{{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L},{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L}},{{0x09BEB0EB3C9D2B86LL,0x484FBF15L,1UL,0x59L,-4L,0xFD7EAC53L,-5L},{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L}},{{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L},{18446744073709551606UL,0x83E1DDF3L,18446744073709551611UL,-1L,0L,7L,0xCCAD504FL}},{{0UL,7UL,5UL,0x4DL,8L,0xD9222CCBL,0x0AA2DB91L},{0UL,7UL,5UL,0x4DL,8L,0xD9222CCBL,0x0AA2DB91L}}},{{{0x09BEB0EB3C9D2B86LL,0x484FBF15L,1UL,0x59L,-4L,0xFD7EAC53L,-5L},{0UL,7UL,5UL,0x4DL,8L,0xD9222CCBL,0x0AA2DB91L}},{{0UL,7UL,5UL,0x4DL,8L,0xD9222CCBL,0x0AA2DB91L},{18446744073709551606UL,0x83E1DDF3L,18446744073709551611UL,-1L,0L,7L,0xCCAD504FL}},{{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L},{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L}},{{0x09BEB0EB3C9D2B86LL,0x484FBF15L,1UL,0x59L,-4L,0xFD7EAC53L,-5L},{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L}},{{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L},{18446744073709551606UL,0x83E1DDF3L,18446744073709551611UL,-1L,0L,7L,0xCCAD504FL}},{{18446744073709551614UL,0xFE291C01L,0xEC9DF640L,0x76L,0L,0L,0x4DEF4549L},{0x92F03179C46F7C81LL,0x448B7FE5L,0xFDCAA5BAL,0x8DL,0x6628L,-3L,2L}}}};
            int32_t * const **l_303 = &l_302;
            int16_t *l_310 = (void*)0;
            union U2 l_339 = {0xA1B8C2CBL};
            int i, j, k;
            for (g_158 = 0; (g_158 <= 0); g_158 += 1)
            { 
                int64_t l_254 = 0xBECA930A192C7042LL;
                int32_t l_256[2][7] = {{(-7L),0L,(-7L),(-7L),0L,(-7L),(-7L)},{0L,0L,9L,0L,0L,9L,0L}};
                uint16_t l_257 = 0x668FL;
                int32_t l_291 = 0xDB0C127CL;
                int i, j;
                for (l_154.f3 = 0; (l_154.f3 <= 0); l_154.f3 += 1)
                { 
                    struct S0 *l_240 = &l_77;
                    int32_t **l_241 = &l_235[1];
                    int32_t *l_242 = &l_215;
                    int i, j, k;
                    (*l_240) = l_239[0][1][1];
                    if (g_167[g_158][(l_154.f3 + 2)][(g_158 + 2)])
                        continue;
                    l_242 = ((*l_241) = p_52);
                    (*g_82) = ((0x7370A3413CF06E90LL & (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((void*)0 == (*g_110)), (((18446744073709551615UL != ((safe_lshift_func_uint8_t_u_s(((*g_111) = (safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((g_201[(l_154.f3 + 1)][(g_158 + 3)][g_158] , (~(g_201[(l_154.f3 + 1)][(g_158 + 4)][l_154.f3] &= 0x9B57DBA4L))) & ((*g_111) > l_254)), p_50)), 0))), 4)) != 0xD62F6C546F67B9C0LL)) <= (*g_82)) ^ p_50))) , (*g_8)), p_50))) >= g_9);
                }
                (*l_234) &= (!0xE7FE267EC730364CLL);
                l_257--;
                for (l_212 = 0; (l_212 >= 0); l_212 -= 1)
                { 
                    int16_t l_292 = 1L;
                    uint64_t *l_293[7] = {&l_77.f0,&l_77.f0,&l_77.f0,&l_77.f0,&l_77.f0,&l_77.f0,&l_77.f0};
                    int i, j, k;
                    (*g_82) = ((((g_201[l_229][(g_158 + 2)][g_158] = (l_77.f6 = ((safe_div_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(g_167[l_212][(l_212 + 5)][(l_229 + 2)], g_201[(l_212 + 1)][(l_212 + 6)][g_158])) > ((safe_mod_func_int32_t_s_s((((g_201[l_229][(g_158 + 2)][g_158] || (-7L)) && ((***g_148) ^= (safe_add_func_uint8_t_u_u(((l_77.f5 |= (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((!((safe_rshift_func_int8_t_s_u(((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_5[1][0] ^ (((*p_52) , g_167[l_212][(l_212 + 5)][(l_229 + 2)]) <= (*g_8))), g_201[l_229][(g_158 + 2)][g_158])), g_167[l_212][(l_212 + 5)][(l_229 + 2)])) & 0xD786CBCB03C8F09FLL), 0x63L)), (*g_8))), 0x23F246A19AD05CBDLL)) == g_219[1]), (*g_111))) <= (**g_110))), (*g_8))), 4)) & g_201[0][0][0]) == p_51), l_291)), (**g_110))), l_254))) & l_256[1][5]), (*g_8))))) & l_292), p_50)) > (*g_82))) <= p_49), p_50)) || (**g_149)))) & 0x0940E46D6B166CB1LL) || 0xA057E27BL) >= g_5[1][0]);
                    return &g_5[1][0];
                }
            }
            (*g_82) = (safe_add_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u((1L > g_220), 3)) >= ((l_77.f5 ^= (l_239[0][1][1].f5 , (safe_add_func_uint16_t_u_u(l_77.f4, (safe_sub_func_int64_t_s_s(((((*l_303) = l_302) == ((g_78 , (safe_add_func_int8_t_s_s(((((safe_add_func_int64_t_s_s((((l_308 , l_210) & (*g_8)) , (-9L)), p_49)) | 1UL) , (*l_234)) & l_309[4][0][0]), l_77.f0))) , &g_82)) | g_201[1][4][0]), g_9)))))) < g_78.f2)), p_49));
            for (g_78.f4 = 0; (g_78.f4 != (-18)); g_78.f4 = safe_sub_func_int32_t_s_s(g_78.f4, 6))
            { 
                uint8_t l_330 = 6UL;
                if (g_78.f1)
                    goto lbl_313;
                if ((*p_52))
                    continue;
                (*g_131) = &l_308;
            }
            (*l_234) = (l_349 , ((safe_rshift_func_uint8_t_u_s(((~g_219[1]) | ((g_219[1] < ((((0x8810L == ((~(p_49 && 4294967286UL)) > (((((((*l_234) && g_160) && g_167[0][4][0]) && p_50) , 0xCFL) >= (*g_8)) >= g_73.f0))) >= p_49) != (**g_110)) & 0L)) , l_354)), (*p_48))) != (*g_8)));
            if ((p_51 < (*p_48)))
            { 
                int32_t **l_364 = &l_234;
                (**l_302) = (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(p_49, (safe_div_func_uint8_t_u_u((*g_111), (**l_302))))) & (g_361 , (*p_52))), (safe_mod_func_int64_t_s_s(g_161, g_62))));
                (*l_364) = (*l_302);
            }
            else
            { 
                struct S0 l_371 = {1UL,0xD34E7B4CL,0x2427EA42L,0x93L,-3L,-8L,0xC21145FCL};
                (*l_234) = ((safe_lshift_func_uint16_t_u_s((***l_303), ((safe_rshift_func_uint8_t_u_u((((((-3L) | 0x3234940AA0128EC9LL) == ((*g_82) > (safe_rshift_func_uint8_t_u_u(p_49, (**g_110))))) , &g_9) != (void*)0), 3)) == p_51))) != (**g_110));
                (*l_335) = (l_371 , l_371);
            }
        }
        (*l_372) = (*l_302);
    }
    return &g_201[1][0][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_71.f0, "g_71.f0", print_hash_value);
    transparent_crc(g_71.f1, "g_71.f1", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    transparent_crc(g_78.f3, "g_78.f3", print_hash_value);
    transparent_crc(g_78.f4, "g_78.f4", print_hash_value);
    transparent_crc(g_78.f5, "g_78.f5", print_hash_value);
    transparent_crc(g_78.f6, "g_78.f6", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_167[i][j][k], "g_167[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_201[i][j][k], "g_201[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_219[i], "g_219[i]", print_hash_value);

    }
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_327.f0, "g_327.f0", print_hash_value);
    transparent_crc(g_327.f1, "g_327.f1", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_582.f0, "g_582.f0", print_hash_value);
    transparent_crc(g_582.f1, "g_582.f1", print_hash_value);
    transparent_crc(g_582.f2, "g_582.f2", print_hash_value);
    transparent_crc(g_582.f3, "g_582.f3", print_hash_value);
    transparent_crc(g_582.f4, "g_582.f4", print_hash_value);
    transparent_crc(g_582.f5, "g_582.f5", print_hash_value);
    transparent_crc(g_582.f6, "g_582.f6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_728[i][j], "g_728[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_825, "g_825", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    transparent_crc(g_997, "g_997", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    transparent_crc(g_1133, "g_1133", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
