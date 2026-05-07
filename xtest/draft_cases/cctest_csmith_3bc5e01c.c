// SPDX-License-Identifier: MIT
// cctest_csmith_3bc5e01c.c --- cctest case csmith_3bc5e01c (csmith seed 1002823708)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc3f88567 */

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

// Options:   -s 1002823708 -o /tmp/csmith_gen_tqa0t6qq/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint8_t  f0;
   int8_t  f1;
   uint32_t  f2;
   int32_t  f3;
   signed f4 : 11;
   uint64_t  f5;
   int8_t  f6;
};

struct S1 {
   unsigned f0 : 1;
   const unsigned f1 : 4;
   const signed f2 : 20;
   unsigned f3 : 16;
   int16_t  f4;
};

struct S2 {
   uint8_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   int32_t  f0;
   struct S2  f1;
   const int16_t  f2;
   const struct S1  f3;
   uint8_t  f4;
   int32_t  f5;
};
#pragma pack(pop)

union U4 {
   int32_t  f0;
   uint8_t  f1;
};

union U5 {
   uint8_t  f0;
   uint64_t  f1;
};


static int32_t g_11 = (-8L);
static uint32_t g_25[1][1] = {{0xEC3E1B8DL}};
static int32_t g_37 = (-1L);
static int32_t *g_36 = &g_37;
static const union U4 g_47 = {0x06862EAEL};
static uint32_t g_77[7] = {0xA103ABEDL,0xA103ABEDL,2UL,0xA103ABEDL,0xA103ABEDL,2UL,0xA103ABEDL};
static int32_t g_82 = (-1L);
static uint32_t g_83 = 0x9BDA14E7L;
static int64_t g_86 = 0L;
static int32_t g_87 = 0x57A5C46AL;
static int32_t g_88 = 0x93E2C01BL;
static uint64_t g_89 = 0xC65C41F2E98D3579LL;
static struct S2 g_92 = {0xE7L};
static uint16_t g_142 = 0UL;
static int16_t g_144 = 0x7B49L;
static uint64_t g_163 = 0x8C5D1B8DA6205CD2LL;
static int8_t g_168 = 0x7AL;
static uint32_t g_170 = 0xFFB87322L;
static struct S1 g_204 = {0,1,-365,130,1L};
static uint64_t *g_208 = &g_89;
static uint64_t **g_207 = &g_208;
static union U4 g_241[5][4][5] = {{{{0xA00AF914L},{-1L},{0xA00AF914L},{0xFFF6AF44L},{-9L}},{{0x75526357L},{4L},{-9L},{4L},{0x75526357L}},{{0xA00AF914L},{4L},{-1L},{0x75526357L},{-1L}},{{-1L},{-1L},{-9L},{0x75526357L},{2L}}},{{{4L},{0xA00AF914L},{0xA00AF914L},{4L},{-1L}},{{4L},{0x75526357L},{0xFFF6AF44L},{0xFFF6AF44L},{0x75526357L}},{{-1L},{0xA00AF914L},{0xFFF6AF44L},{-9L},{-9L}},{{0xA00AF914L},{-1L},{0xA00AF914L},{-9L},{-1L}}},{{{0xFFF6AF44L},{0xA00AF914L},{-1L},{0xA00AF914L},{0xFFF6AF44L}},{{0x75526357L},{0xA00AF914L},{2L},{0xFFF6AF44L},{2L}},{{2L},{2L},{-1L},{0xFFF6AF44L},{4L}},{{0xA00AF914L},{0x75526357L},{0x75526357L},{0xA00AF914L},{2L}}},{{{0xA00AF914L},{0xFFF6AF44L},{-9L},{-9L},{0xFFF6AF44L}},{{2L},{0x75526357L},{-9L},{-1L},{-1L}},{{0x75526357L},{2L},{0x75526357L},{-9L},{-1L}},{{0xFFF6AF44L},{0xA00AF914L},{-1L},{0xA00AF914L},{0xFFF6AF44L}}},{{{0x75526357L},{0xA00AF914L},{2L},{0xFFF6AF44L},{2L}},{{2L},{2L},{-1L},{0xFFF6AF44L},{4L}},{{0xA00AF914L},{0x75526357L},{0x75526357L},{0xA00AF914L},{2L}},{{0xA00AF914L},{0xFFF6AF44L},{-9L},{-9L},{0xFFF6AF44L}}}};
static struct S3 g_248 = {0x5BA4CF42L,{0xAAL},1L,{0,0,-667,171,0x3C35L},0x94L,0xD53B164AL};
static int32_t **g_265 = &g_36;
static int32_t g_290 = 0xDC557DA0L;
static int32_t g_293 = 1L;
static uint32_t g_295 = 4294967295UL;
static uint8_t g_303[3][3] = {{0UL,0UL,0UL},{246UL,0x9FL,246UL},{0UL,0UL,0UL}};
static int64_t g_365 = 0x55534BD24E1954F2LL;
static int16_t g_367[7][2][1] = {{{7L},{5L}},{{7L},{0L}},{{7L},{7L}},{{0L},{7L}},{{5L},{7L}},{{0L},{7L}},{{7L},{0L}}};
static uint64_t g_368 = 0x49663793A32E63B7LL;
static uint64_t *g_378 = (void*)0;
static int16_t g_400 = 3L;
static struct S2 *g_406 = (void*)0;
static union U4 **g_424 = (void*)0;
static int64_t g_427 = 0xF45496BD690EF32DLL;
static int8_t g_432 = 0x71L;
static union U5 g_486 = {0UL};
static uint8_t *g_535 = &g_248.f4;
static uint8_t **g_534 = &g_535;
static const uint16_t g_547 = 0xFACDL;
static const uint16_t *g_546 = &g_547;
static struct S0 g_571[3][4][6] = {{{{0x71L,1L,0UL,0x65723DBEL,-36,0UL,0L},{0UL,-3L,0x8AB64B31L,0L,-43,0xAA7D7E1E3E61363BLL,-10L},{255UL,0x5BL,0xDC806B70L,0x3153BD71L,38,1UL,0x2BL},{0x0EL,0xFEL,0x7E1BF274L,-1L,-23,18446744073709551607UL,1L},{0UL,-3L,0x8AB64B31L,0L,-43,0xAA7D7E1E3E61363BLL,-10L},{0x91L,-5L,3UL,0xCA1BD2F9L,-14,0x22846D06BB92D8DCLL,0xE4L}},{{255UL,4L,0xC713916AL,0xD21E0851L,-10,0xEBFB925DB910D322LL,0x5EL},{0x91L,-5L,3UL,0xCA1BD2F9L,-14,0x22846D06BB92D8DCLL,0xE4L},{0x0DL,5L,0x3E9AAB0EL,-2L,40,18446744073709551609UL,-5L},{255UL,1L,0UL,1L,35,18446744073709551610UL,0xA4L},{0x0DL,5L,0x3E9AAB0EL,-2L,40,18446744073709551609UL,-5L},{0x91L,-5L,3UL,0xCA1BD2F9L,-14,0x22846D06BB92D8DCLL,0xE4L}},{{0xE4L,1L,8UL,4L,-12,0xCDEF977C9B43D5FCLL,0x6EL},{0xFFL,-5L,6UL,0x81C507E0L,-17,18446744073709551615UL,5L},{255UL,0x5BL,0xDC806B70L,0x3153BD71L,38,1UL,0x2BL},{0x55L,0L,4294967287UL,0x0528EC2FL,23,0x3DD974D748DB43B4LL,0x65L},{255UL,0xE8L,0xF9148658L,-9L,-22,0UL,6L},{255UL,0x5BL,0xDC806B70L,0x3153BD71L,38,1UL,0x2BL}},{{0xE4L,1L,8UL,4L,-12,0xCDEF977C9B43D5FCLL,0x6EL},{0x0DL,5L,0x3E9AAB0EL,-2L,40,18446744073709551609UL,-5L},{255UL,0xE8L,0xF9148658L,-9L,-22,0UL,6L},{255UL,1L,0UL,1L,35,18446744073709551610UL,0xA4L},{0x60L,0x34L,0x0107A107L,0xA531C5E6L,11,0x5A360165212ACE2FLL,0xB4L},{0UL,-3L,0x8AB64B31L,0L,-43,0xAA7D7E1E3E61363BLL,-10L}}},{{{255UL,4L,0xC713916AL,0xD21E0851L,-10,0xEBFB925DB910D322LL,0x5EL},{0x0DL,5L,0x3E9AAB0EL,-2L,40,18446744073709551609UL,-5L},{0xFFL,-5L,6UL,0x81C507E0L,-17,18446744073709551615UL,5L},{0x0EL,0xFEL,0x7E1BF274L,-1L,-23,18446744073709551607UL,1L},{255UL,0xE8L,0xF9148658L,-9L,-22,0UL,6L},{255UL,0xE8L,0xF9148658L,-9L,-22,0UL,6L}},{{0x71L,1L,0UL,0x65723DBEL,-36,0UL,0L},{0xFFL,-5L,6UL,0x81C507E0L,-17,18446744073709551615UL,5L},{0xFFL,-5L,6UL,0x81C507E0L,-17,18446744073709551615UL,5L},{0x71L,1L,0UL,0x65723DBEL,-36,0UL,0L},{0x0DL,5L,0x3E9AAB0EL,-2L,40,18446744073709551609UL,-5L},{0UL,-3L,0x8AB64B31L,0L,-43,0xAA7D7E1E3E61363BLL,-10L}},{{255UL,1L,0UL,1L,35,18446744073709551610UL,0xA4L},{0x91L,-5L,3UL,0xCA1BD2F9L,-14,0x22846D06BB92D8DCLL,0xE4L},{255UL,0xE8L,0xF9148658L,-9L,-22,0UL,6L},{0x71L,1L,0UL,0x65723DBEL,-36,0UL,0L},{0UL,-3L,0x8AB64B31L,0L,-43,0xAA7D7E1E3E61363BLL,-10L},{255UL,0x5BL,0xDC806B70L,0x3153BD71L,38,1UL,0x2BL}},{{0x71L,1L,0UL,0x65723DBEL,-36,0UL,0L},{0UL,-3L,0x8AB64B31L,0L,-43,0xAA7D7E1E3E61363BLL,-10L},{255UL,0x5BL,0xDC806B70L,0x3153BD71L,38,1UL,0x2BL},{0x0EL,0xFEL,0x7E1BF274L,-1L,-23,18446744073709551607UL,1L},{0UL,-3L,0x8AB64B31L,0L,-43,0xAA7D7E1E3E61363BLL,-10L},{0x91L,-5L,3UL,0xCA1BD2F9L,-14,0x22846D06BB92D8DCLL,0xE4L}}},{{{255UL,4L,0xC713916AL,0xD21E0851L,-10,0xEBFB925DB910D322LL,0x5EL},{0x91L,-5L,3UL,0xCA1BD2F9L,-14,0x22846D06BB92D8DCLL,0xE4L},{0x0DL,5L,0x3E9AAB0EL,-2L,40,18446744073709551609UL,-5L},{255UL,1L,0UL,1L,35,18446744073709551610UL,0xA4L},{0x0DL,5L,0x3E9AAB0EL,-2L,40,18446744073709551609UL,-5L},{0x91L,-5L,3UL,0xCA1BD2F9L,-14,0x22846D06BB92D8DCLL,0xE4L}},{{0xE4L,1L,8UL,4L,-12,0xCDEF977C9B43D5FCLL,0x6EL},{0xFFL,-5L,6UL,0x81C507E0L,-17,18446744073709551615UL,5L},{255UL,0x5BL,0xDC806B70L,0x3153BD71L,38,1UL,0x2BL},{0x55L,0L,4294967287UL,0x0528EC2FL,23,0x3DD974D748DB43B4LL,0x65L},{255UL,0xE8L,0xF9148658L,-9L,-22,0UL,6L},{255UL,0x5BL,0xDC806B70L,0x3153BD71L,38,1UL,0x2BL}},{{0xE4L,1L,8UL,4L,-12,0xCDEF977C9B43D5FCLL,0x6EL},{0x0DL,5L,0x3E9AAB0EL,-2L,40,18446744073709551609UL,-5L},{255UL,0xE8L,0xF9148658L,-9L,-22,0UL,6L},{255UL,1L,0UL,1L,35,18446744073709551610UL,0xA4L},{0x60L,0x34L,0x0107A107L,0xA531C5E6L,11,0x5A360165212ACE2FLL,0xB4L},{0UL,-3L,0x8AB64B31L,0L,-43,0xAA7D7E1E3E61363BLL,-10L}},{{255UL,4L,0xC713916AL,0xD21E0851L,-10,0xEBFB925DB910D322LL,0x5EL},{0x0DL,5L,0x3E9AAB0EL,-2L,40,18446744073709551609UL,-5L},{0xFFL,-5L,6UL,0x81C507E0L,-17,18446744073709551615UL,5L},{0x0EL,0xFEL,0x7E1BF274L,-1L,-23,18446744073709551607UL,1L},{255UL,0xE8L,0xF9148658L,-9L,-22,0UL,6L},{255UL,0xE8L,0xF9148658L,-9L,-22,0UL,6L}}}};
static const struct S0 g_591 = {0x29L,0L,0UL,0x0751F71BL,10,1UL,0x3BL};
static const struct S0 g_593 = {255UL,0x3EL,4294967295UL,0x522300FCL,33,0x7B043DE333DFAE34LL,0xD1L};
static const struct S0 *g_592 = &g_593;
static int32_t g_679[4] = {0x21A4DFEBL,0x21A4DFEBL,0x21A4DFEBL,0x21A4DFEBL};
static uint8_t g_683 = 0x77L;
static int32_t g_718[7] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
static int8_t *g_785 = &g_571[0][0][4].f6;
static int8_t **g_784 = &g_785;
static struct S1 g_837 = {0,0,416,216,1L};
static uint16_t *g_985 = (void*)0;
static uint16_t * const *g_984 = &g_985;
static uint16_t **g_999 = &g_985;
static uint16_t ***g_998 = &g_999;
static int32_t *g_1046 = (void*)0;
static int16_t *g_1054[3] = {&g_837.f4,&g_837.f4,&g_837.f4};
static int16_t **g_1053 = &g_1054[2];
static int16_t ** const *g_1052[7][3] = {{&g_1053,&g_1053,(void*)0},{&g_1053,&g_1053,(void*)0},{&g_1053,&g_1053,(void*)0},{&g_1053,&g_1053,(void*)0},{&g_1053,&g_1053,(void*)0},{&g_1053,&g_1053,(void*)0},{&g_1053,&g_1053,&g_1053}};
static uint32_t g_1072 = 0x5DB4BA89L;
static uint64_t ***g_1119 = &g_207;
static uint64_t ****g_1118 = &g_1119;
static struct S0 g_1206 = {251UL,0xCEL,0UL,0x1E4C88F3L,36,0x0214D748D1D15188LL,1L};
static uint64_t g_1364 = 1UL;
static const union U4 *g_1411 = &g_241[0][3][0];
static struct S0 *g_1469 = &g_571[0][0][4];
static struct S0 **g_1468 = &g_1469;
static struct S0 ***g_1467[3][5] = {{&g_1468,&g_1468,&g_1468,&g_1468,&g_1468},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1468,&g_1468,&g_1468,&g_1468,&g_1468}};
static int32_t g_1552 = 0x32879231L;
static union U5 *g_1642[3][4][1] = {{{&g_486},{&g_486},{&g_486},{&g_486}},{{&g_486},{&g_486},{&g_486},{&g_486}},{{&g_486},{&g_486},{&g_486},{&g_486}}};
static union U5 **g_1641 = &g_1642[2][0][0];
static uint32_t *g_1670 = (void*)0;
static uint32_t **g_1669 = &g_1670;
static int32_t g_1772 = 0xD3059EB1L;
static int32_t g_1804 = 0xB566868DL;
static int16_t g_1826 = 0x95BAL;
static const uint64_t *g_1854 = &g_571[0][0][4].f5;
static const uint64_t **g_1853 = &g_1854;
static uint16_t g_1912 = 0x4C9AL;
static const int32_t g_1930 = 0xFB6D0447L;
static int32_t g_1960[5][5][3] = {{{0x54321900L,0L,0xC290E3ABL},{(-2L),0x38537CDEL,0L},{(-1L),0x6ED1D6CFL,0xC290E3ABL},{0x38537CDEL,(-2L),0L},{(-4L),(-2L),0xC290E3ABL}},{{0x3737EB0CL,0x3737EB0CL,0L},{0x54321900L,0L,0xC290E3ABL},{(-2L),0x38537CDEL,0L},{(-1L),0x6ED1D6CFL,0xC290E3ABL},{0x38537CDEL,(-2L),0L}},{{(-4L),(-2L),0xC290E3ABL},{0x3737EB0CL,0x3737EB0CL,0L},{0x54321900L,0L,0xC290E3ABL},{(-2L),0x38537CDEL,0L},{(-1L),0x6ED1D6CFL,0xC290E3ABL}},{{0x38537CDEL,(-2L),0L},{(-4L),(-2L),0xC290E3ABL},{0x3737EB0CL,0x3737EB0CL,0L},{0x54321900L,0L,0xC290E3ABL},{(-2L),0x38537CDEL,0L}},{{(-1L),0x6ED1D6CFL,0xC290E3ABL},{0x38537CDEL,(-2L),0L},{(-4L),(-2L),0xC290E3ABL},{0x3737EB0CL,0x3737EB0CL,0L},{0x54321900L,0L,0xC290E3ABL}}};
static struct S1 g_2032 = {0,0,-954,7,2L};
static int64_t g_2138 = 0x4D80A992350C1656LL;
static uint16_t g_2150 = 65535UL;
static uint32_t **g_2334 = &g_1670;
static struct S3 g_2340 = {0xCD922F6DL,{0UL},1L,{0,1,-322,124,-1L},0x30L,0x1CFC9F69L};
static const struct S2 g_2347 = {255UL};
static uint16_t ***g_2393 = &g_999;
static uint32_t g_2411 = 0x2797F1FAL;
static int8_t ***g_2474 = &g_784;
static int8_t ****g_2473 = &g_2474;
static const int32_t *g_2485 = &g_1930;
static const int32_t **g_2484 = &g_2485;
static const int32_t ***g_2483 = &g_2484;
static uint16_t g_2486[4] = {0UL,0UL,0UL,0UL};
static int64_t *g_2558 = &g_86;
static int32_t g_2629[3] = {0xB988724AL,0xB988724AL,0xB988724AL};
static int16_t g_2709 = 0xD1C6L;
static union U4 ***g_2733 = &g_424;
static union U4 ****g_2732 = &g_2733;
static uint64_t g_2759 = 18446744073709551615UL;
static const int8_t *g_2790 = &g_1206.f6;
static const int8_t **g_2789 = &g_2790;
static const int8_t ***g_2788 = &g_2789;
static int8_t g_2913 = 0xFFL;
static int8_t *****g_2989 = &g_2473;
static const union U5 *g_2999 = &g_486;
static uint32_t ***g_3068 = &g_2334;
static uint32_t ****g_3067 = &g_3068;
static int32_t ***g_3138 = (void*)0;
static int32_t *** const *g_3137 = &g_3138;
static int32_t *** const **g_3136 = &g_3137;
static struct S3 *g_3195[7][3][7] = {{{(void*)0,&g_248,&g_2340,&g_248,&g_2340,(void*)0,&g_248},{&g_2340,&g_2340,&g_248,(void*)0,&g_2340,&g_2340,&g_2340},{&g_2340,(void*)0,&g_2340,(void*)0,&g_2340,&g_2340,(void*)0}},{{&g_2340,&g_2340,(void*)0,(void*)0,&g_2340,&g_248,&g_248},{&g_2340,&g_2340,&g_2340,&g_2340,&g_2340,&g_2340,&g_248},{(void*)0,&g_248,&g_2340,&g_248,&g_2340,&g_2340,(void*)0}},{{&g_2340,(void*)0,&g_2340,(void*)0,&g_248,&g_248,&g_248},{&g_248,&g_248,&g_248,(void*)0,&g_2340,(void*)0,&g_2340},{(void*)0,&g_2340,&g_2340,&g_2340,&g_2340,&g_248,&g_2340}},{{&g_2340,&g_2340,&g_248,&g_248,&g_248,&g_248,(void*)0},{&g_2340,(void*)0,&g_248,&g_248,&g_248,(void*)0,&g_2340},{(void*)0,&g_2340,&g_2340,&g_248,&g_248,&g_248,&g_248}},{{(void*)0,&g_2340,&g_248,&g_2340,&g_2340,&g_2340,&g_248},{&g_248,&g_2340,(void*)0,(void*)0,&g_2340,&g_2340,&g_248},{&g_2340,&g_2340,&g_248,&g_248,&g_248,&g_2340,(void*)0}},{{&g_2340,&g_248,&g_248,(void*)0,&g_2340,(void*)0,(void*)0},{(void*)0,&g_248,(void*)0,(void*)0,(void*)0,(void*)0,&g_248},{&g_2340,(void*)0,&g_2340,&g_248,(void*)0,&g_2340,&g_248}},{{&g_248,&g_248,&g_2340,&g_2340,(void*)0,&g_248,&g_248},{(void*)0,(void*)0,(void*)0,&g_248,(void*)0,&g_248,&g_248},{&g_248,&g_248,&g_248,(void*)0,(void*)0,(void*)0,&g_2340}}};
static struct S3 **g_3194 = &g_3195[5][1][2];
static union U4 g_3222 = {-3L};
static int32_t g_3311 = 0x9369270AL;
static uint64_t g_3358 = 1UL;
static const uint32_t g_3466 = 0x9B4BCCB4L;
static uint32_t g_3469 = 4294967295UL;
static const int64_t g_3544 = 1L;
static uint32_t g_3653[2] = {0x812BF0CFL,0x812BF0CFL};
static const int16_t g_3676 = (-3L);
static int8_t g_3704 = 0xDCL;
static uint8_t g_3749 = 255UL;
static int64_t **g_3758 = &g_2558;
static const int64_t *g_3760[3] = {(void*)0,(void*)0,(void*)0};
static const int64_t **g_3759 = &g_3760[0];
static uint32_t ***g_3843 = &g_1669;
static union U5 *g_3864 = &g_486;
static union U5 ** const g_3863 = &g_3864;
static union U5 ** const *g_3862[7] = {&g_3863,&g_3863,&g_3863,&g_3863,&g_3863,&g_3863,&g_3863};
static uint64_t g_3949[7][4][5] = {{{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL},{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL}},{{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL},{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL}},{{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL},{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL}},{{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL},{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL}},{{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL},{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL}},{{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,0x199086DE43F357B9LL,0x3D0A0F159F1EA2C3LL,18446744073709551608UL},{0x12EC05AC918CDA1CLL,0xF642C12B5A267B2DLL,0xDFB1AA81621BAD84LL,0xF642C12B5A267B2DLL,0x12EC05AC918CDA1CLL},{18446744073709551608UL,0x3D0A0F159F1EA2C3LL,18446744073709551610UL,18446744073709551609UL,0x3D0A0F159F1EA2C3LL},{0xD9744CE46667D47FLL,18446744073709551608UL,0x3F6AC98E8A0B4290LL,18446744073709551608UL,0xD9744CE46667D47FLL}},{{0x3D0A0F159F1EA2C3LL,18446744073709551609UL,18446744073709551610UL,18446744073709551609UL,0x3D0A0F159F1EA2C3LL},{0xD9744CE46667D47FLL,18446744073709551608UL,0x3F6AC98E8A0B4290LL,18446744073709551608UL,0xD9744CE46667D47FLL},{0x3D0A0F159F1EA2C3LL,18446744073709551609UL,18446744073709551610UL,18446744073709551609UL,0x3D0A0F159F1EA2C3LL},{0xD9744CE46667D47FLL,18446744073709551608UL,0x3F6AC98E8A0B4290LL,18446744073709551608UL,0xD9744CE46667D47FLL}}};
static struct S0 * const **g_4003 = (void*)0;
static const struct S0 *g_4022[3] = {&g_591,&g_591,&g_591};
static int32_t ****g_4028 = &g_3138;
static int32_t *****g_4027[5] = {&g_4028,&g_4028,&g_4028,&g_4028,&g_4028};
static int64_t g_4048[4] = {9L,9L,9L,9L};
static struct S1 **g_4072 = (void*)0;
static struct S1 ***g_4071 = &g_4072;
static struct S1 ****g_4070 = &g_4071;
static uint32_t *g_4085 = &g_3653[0];
static struct S1 * const ***g_4145 = (void*)0;



static uint32_t  func_1(void);
static int16_t  func_34(int32_t * p_35);
static struct S3  func_40(uint16_t  p_41, const union U4  p_42, int32_t * p_43, int32_t * p_44, union U5  p_45);
static const uint64_t  func_51(int32_t * p_52, int32_t * p_53, uint64_t  p_54, int64_t  p_55, int32_t * p_56);
static int32_t * func_57(int32_t * p_58, union U4  p_59, int64_t  p_60);
static int64_t  func_61(struct S3  p_62, struct S1  p_63, int32_t * const  p_64);
static struct S1  func_66(int32_t * p_67, int32_t * p_68, int32_t * p_69);
static int32_t * func_70(int16_t  p_71, struct S1  p_72, uint16_t  p_73, uint64_t  p_74);




static uint32_t  func_1(void)
{ 
    int32_t l_8 = 0xF1A969ACL;
    int32_t l_22 = 1L;
    int8_t l_24 = (-1L);
    int16_t l_3829 = (-6L);
    uint32_t ***l_3841 = (void*)0;
    struct S3 l_3846 = {0x7EFBC3ABL,{2UL},0xB246L,{0,1,405,84,0L},0UL,0xA9821CFBL};
    const uint8_t *l_3849[3];
    int32_t l_3896 = 1L;
    int32_t l_3903 = 0x4B4185B0L;
    int32_t l_3904 = (-3L);
    int32_t l_3910 = 0L;
    int32_t l_3911 = 0L;
    int32_t l_3913[2];
    union U4 l_3957 = {-1L};
    struct S2 l_3960[3][4] = {{{254UL},{0x99L},{254UL},{1UL}},{{254UL},{1UL},{1UL},{254UL}},{{246UL},{1UL},{255UL},{1UL}}};
    int16_t l_3978[4];
    int16_t l_3984[2];
    int8_t l_4011 = 0xE9L;
    int32_t l_4012[5][5][2] = {{{0x42138682L,0xECF7F40FL},{0x4874BDA3L,0x42138682L},{0xECF7F40FL,8L},{0x75A0760AL,0x75A0760AL},{0x4874BDA3L,0x75A0760AL}},{{0x75A0760AL,8L},{0xECF7F40FL,0x42138682L},{0x4874BDA3L,0xECF7F40FL},{0x42138682L,8L},{0x42138682L,0xECF7F40FL}},{{0x4874BDA3L,0x42138682L},{0xECF7F40FL,8L},{0x75A0760AL,0x75A0760AL},{0x4874BDA3L,0x75A0760AL},{0x75A0760AL,8L}},{{0xECF7F40FL,0x42138682L},{0x4874BDA3L,0xECF7F40FL},{0x42138682L,8L},{0x42138682L,0xECF7F40FL},{0x4874BDA3L,0x42138682L}},{{0xECF7F40FL,8L},{0x75A0760AL,0x75A0760AL},{0x4874BDA3L,0x75A0760AL},{0x75A0760AL,8L},{0xECF7F40FL,0x42138682L}}};
    const struct S0 *l_4023 = &g_571[1][3][3];
    int16_t l_4025[7][6][5] = {{{0L,(-1L),4L,4L,(-1L)},{(-6L),0x7DBCL,0x510CL,0xD9F3L,5L},{1L,(-1L),0x16BDL,0xDF6EL,(-1L)},{1L,5L,0x510CL,0xF44CL,(-1L)},{1L,0x0F34L,4L,0xDF6EL,0x0F34L},{(-6L),5L,0xF898L,0xD9F3L,(-1L)}},{{0L,(-1L),4L,4L,(-1L)},{(-6L),0x7DBCL,0x510CL,0xD9F3L,5L},{1L,(-1L),0x16BDL,0xDF6EL,(-1L)},{1L,5L,0x510CL,0xF44CL,(-1L)},{1L,0x0F34L,4L,0xDF6EL,0x0F34L},{(-6L),5L,0xF898L,0xD9F3L,(-1L)}},{{0L,(-1L),4L,4L,(-1L)},{(-6L),0x7DBCL,0x510CL,0xD9F3L,5L},{1L,(-1L),0x16BDL,0xDF6EL,(-1L)},{1L,5L,0x510CL,0xF44CL,(-1L)},{1L,0x0F34L,4L,0xDF6EL,0x0F34L},{(-6L),5L,0xF898L,0xD9F3L,0x4B55L}},{{0L,(-1L),0L,0L,(-1L)},{0x73A1L,1L,1L,0x7DBCL,0x1B38L},{0xEED6L,(-1L),(-1L),0x0F34L,(-1L)},{0x2D2FL,0x1945L,1L,(-5L),0x4B55L},{0xEED6L,(-1L),0L,0x0F34L,(-1L)},{0x73A1L,0x1945L,(-1L),0x7DBCL,0x4B55L}},{{0L,(-1L),0L,0L,(-1L)},{0x73A1L,1L,1L,0x7DBCL,0x1B38L},{0xEED6L,(-1L),(-1L),0x0F34L,(-1L)},{0x2D2FL,0x1945L,1L,(-5L),0x4B55L},{0xEED6L,(-1L),0L,0x0F34L,(-1L)},{0x73A1L,0x1945L,(-1L),0x7DBCL,0x4B55L}},{{0L,(-1L),0L,0L,(-1L)},{0x73A1L,1L,1L,0x7DBCL,0x1B38L},{0xEED6L,(-1L),(-1L),0x0F34L,(-1L)},{0x2D2FL,0x1945L,1L,(-5L),0x4B55L},{0xEED6L,(-1L),0L,0x0F34L,(-1L)},{0x73A1L,0x1945L,(-1L),0x7DBCL,0x4B55L}},{{0L,(-1L),0L,0L,(-1L)},{0x73A1L,1L,1L,0x7DBCL,0x1B38L},{0xEED6L,(-1L),(-1L),0x0F34L,(-1L)},{0x2D2FL,0x1945L,1L,(-5L),0x4B55L},{0xEED6L,(-1L),0L,0x0F34L,(-1L)},{0x73A1L,0x1945L,(-1L),0x7DBCL,0x4B55L}}};
    uint32_t l_4049[1][3];
    struct S1 ****l_4073 = &g_4071;
    uint32_t l_4074[4][1][6] = {{{0xCF25E2EDL,2UL,0xCF25E2EDL,0xCF25E2EDL,2UL,0xCF25E2EDL}},{{0xCF25E2EDL,2UL,0xCF25E2EDL,0xCF25E2EDL,2UL,0xCF25E2EDL}},{{0xCF25E2EDL,2UL,0xCF25E2EDL,0xCF25E2EDL,2UL,0xCF25E2EDL}},{{0xCF25E2EDL,2UL,0xCF25E2EDL,0xCF25E2EDL,2UL,0xCF25E2EDL}}};
    struct S3 **l_4084 = (void*)0;
    struct S3 *** const l_4083 = &l_4084;
    struct S3 *** const *l_4082[6];
    struct S1 l_4123 = {0,3,-525,184,0x3727L};
    int32_t l_4132 = 0xC6C28599L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_3849[i] = &g_303[2][1];
    for (i = 0; i < 2; i++)
        l_3913[i] = 0xDDF871B4L;
    for (i = 0; i < 4; i++)
        l_3978[i] = 0L;
    for (i = 0; i < 2; i++)
        l_3984[i] = 0x9A88L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_4049[i][j] = 18446744073709551610UL;
    }
    for (i = 0; i < 6; i++)
        l_4082[i] = &l_4083;
    return l_4132;
}



static int16_t  func_34(int32_t * p_35)
{ 
    int32_t *l_48[2][5] = {{&g_37,&g_37,&g_37,&g_37,&g_37},{&g_37,&g_37,&g_37,&g_37,&g_37}};
    struct S3 l_65 = {-1L,{0x9EL},1L,{0,2,-810,209,-1L},0x8FL,0x5F396434L};
    int16_t l_3496 = (-8L);
    struct S0 l_3523 = {0xBAL,9L,0x200A488FL,0x8EDD354BL,-21,1UL,0xC6L};
    int32_t l_3527 = 3L;
    int64_t *l_3548 = (void*)0;
    struct S2 *l_3560 = &g_2340.f1;
    union U5 *l_3572 = &g_486;
    int64_t l_3599 = 1L;
    uint32_t * const *l_3663 = (void*)0;
    uint32_t * const **l_3662 = &l_3663;
    uint32_t * const ** const *l_3661 = &l_3662;
    uint32_t * const ** const **l_3660[2];
    int16_t ***l_3668 = &g_1053;
    int16_t ****l_3667 = &l_3668;
    int16_t l_3705 = 0x3F84L;
    const int32_t l_3814[7] = {0x845B2D10L,0x845B2D10L,0x845B2D10L,0x845B2D10L,0x845B2D10L,0x845B2D10L,0x845B2D10L};
    int16_t l_3815 = 0x1320L;
    int32_t l_3816[6][5];
    int i, j;
    for (i = 0; i < 2; i++)
        l_3660[i] = &l_3661;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
            l_3816[i][j] = (-6L);
    }
    for (g_11 = 0; (g_11 == (-15)); g_11 = safe_sub_func_int16_t_s_s(g_11, 4))
    { 
        int32_t l_46 = 0x6B405B75L;
        union U4 l_2659 = {0x833B71D4L};
        union U5 l_3467 = {4UL};
        int32_t l_3472 = 1L;
        int32_t l_3473 = 0x17FAD972L;
        int32_t l_3475 = 0xB0F56C96L;
        int32_t l_3476 = 0x95A31220L;
        uint32_t l_3477 = 1UL;
        int8_t l_3482 = 2L;
        uint32_t l_3512 = 18446744073709551609UL;
        struct S0 l_3522[4][6] = {{{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L}},{{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L}},{{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L}},{{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L},{0x56L,-5L,4294967294UL,0xF96A785AL,-25,0x1B460CAD941DEDF3LL,0x35L}}};
        int32_t l_3533[7][1];
        int32_t *l_3549 = &l_3476;
        const struct S3 l_3567 = {0xB38E0413L,{0x79L},-1L,{0,3,-146,165,-1L},254UL,0xAA6B54A6L};
        int32_t l_3628 = 3L;
        int8_t **l_3648 = &g_785;
        uint32_t *****l_3673 = &g_3067;
        const struct S2 *l_3680 = &l_65.f1;
        const struct S2 **l_3679 = &l_3680;
        int16_t l_3716[4][4] = {{(-1L),(-5L),(-5L),(-5L)},{(-4L),(-1L),1L,(-5L)},{(-5L),(-4L),(-5L),1L},{(-5L),1L,1L,(-5L)}};
        struct S0 *l_3729 = &l_3523;
        uint64_t ****l_3743 = &g_1119;
        int64_t **l_3757 = (void*)0;
        const int64_t ***l_3761 = (void*)0;
        const int64_t ***l_3762 = &g_3759;
        int32_t ****l_3786 = &g_3138;
        int32_t ***** const l_3785[6][6] = {{&l_3786,&l_3786,&l_3786,&l_3786,&l_3786,&l_3786},{&l_3786,&l_3786,&l_3786,&l_3786,&l_3786,&l_3786},{&l_3786,&l_3786,&l_3786,&l_3786,&l_3786,&l_3786},{&l_3786,&l_3786,&l_3786,&l_3786,&l_3786,&l_3786},{&l_3786,&l_3786,&l_3786,&l_3786,&l_3786,&l_3786},{&l_3786,&l_3786,&l_3786,&l_3786,&l_3786,&l_3786}};
        int32_t l_3812 = 1L;
        uint8_t *l_3813 = &g_248.f1.f0;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_3533[i][j] = 0xA161D345L;
        }
    }
    return l_3816[0][4];
}



static struct S3  func_40(uint16_t  p_41, const union U4  p_42, int32_t * p_43, int32_t * p_44, union U5  p_45)
{ 
    struct S3 l_3468 = {0x1515EBA8L,{0x13L},-8L,{0,2,-539,43,0x90A8L},0xF1L,0x8778B3F5L};
    (*p_43) |= (-4L);
    return l_3468;
}



static const uint64_t  func_51(int32_t * p_52, int32_t * p_53, uint64_t  p_54, int64_t  p_55, int32_t * p_56)
{ 
    struct S0 l_3437 = {1UL,0xAEL,1UL,0xEF434B43L,38,0x1843E8CA3D0C9120LL,3L};
    int16_t *l_3449 = &g_2032.f4;
    int16_t *l_3451[4][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int16_t **l_3450 = &l_3451[2][2][1];
    uint64_t l_3452 = 0x344290EFBADD312BLL;
    int32_t **l_3453 = &g_1046;
    int32_t ***l_3454 = &g_265;
    int32_t *l_3455 = &g_2629[1];
    int32_t *l_3456 = &g_1960[1][1][2];
    int32_t *l_3457 = (void*)0;
    int32_t *l_3458 = &g_87;
    int32_t *l_3459 = &g_2629[1];
    int32_t *l_3460 = &g_87;
    int32_t *l_3461[7][4] = {{(void*)0,(void*)0,&g_2629[0],&g_87},{&g_87,(void*)0,&g_87,&g_2629[0]},{&g_87,&g_2629[0],&g_2629[0],&g_87},{(void*)0,&g_2629[0],&g_87,&g_2629[0]},{&g_2629[0],(void*)0,&g_87,&g_87},{(void*)0,(void*)0,&g_2629[0],&g_87},{&g_87,(void*)0,&g_87,&g_2629[0]}};
    int16_t l_3462 = 0x4FD6L;
    uint8_t l_3463 = 9UL;
    int i, j, k;
    (*g_1469) = l_3437;
    l_3437.f4 |= ((*p_56) ^= (((*l_3454) = (((**g_1641) , (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((l_3437.f5 , (p_54 ^ ((((**g_534) &= (0L | ((~(((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((((*g_1053) = l_3449) != ((*l_3450) = l_3449)) >= ((p_54 == l_3452) != 0x60L)), l_3437.f1)), (*g_2558))) == l_3437.f6) , p_55)) == l_3437.f6))) <= 1UL) | l_3437.f3))), (*p_52))), 10)) == l_3452), 1UL))) , l_3453)) != &p_52));
    l_3463++;
    (*l_3459) ^= (*p_52);
    return g_3466;
}



static int32_t * func_57(int32_t * p_58, union U4  p_59, int64_t  p_60)
{ 
    uint32_t l_2663 = 18446744073709551609UL;
    int32_t *l_2666 = &g_1804;
    union U5 l_2669 = {0UL};
    int8_t ** const *l_2674 = &g_784;
    int8_t ** const ** const l_2673 = &l_2674;
    int8_t ****l_2675 = (void*)0;
    int32_t l_2678 = 0L;
    struct S1 *l_2689 = &g_837;
    struct S1 **l_2688[3];
    int16_t l_2705 = (-1L);
    union U4 ****l_2734 = &g_2733;
    struct S0 l_2735 = {0xE8L,0x0FL,4294967293UL,0xB8DA5737L,-0,0x6B81BF3273B2DA13LL,9L};
    int32_t l_2755 = 0x9B4A3150L;
    int32_t l_2781 = 7L;
    int32_t l_2782 = 3L;
    const struct S0 **l_2795 = &g_592;
    const struct S0 ***l_2794[6] = {&l_2795,&l_2795,&l_2795,&l_2795,&l_2795,&l_2795};
    const struct S0 *** const *l_2793 = &l_2794[0];
    const struct S0 *** const ** const l_2792 = &l_2793;
    int32_t l_2831 = 0x29B9B5EDL;
    int32_t l_2869 = 9L;
    int32_t l_2870 = 0x63E8A193L;
    uint16_t l_2872 = 0x30DFL;
    int32_t **l_2877 = (void*)0;
    int32_t l_2918 = (-1L);
    int32_t l_2922 = 0L;
    int32_t l_2923 = 0x27A0D198L;
    int32_t l_2927 = 0x09B53C24L;
    int32_t l_2930 = 0x0610B195L;
    int32_t l_2932 = 0xB48C6573L;
    int32_t l_2933[5] = {0x33D9C1AEL,0x33D9C1AEL,0x33D9C1AEL,0x33D9C1AEL,0x33D9C1AEL};
    uint8_t l_2941 = 247UL;
    int32_t l_3036[2][4][4] = {{{0x42A04EB4L,0x06081FB5L,0xB5EBCEE9L,0xB9142EAEL},{0xDD929007L,0x42A04EB4L,(-1L),0L},{(-1L),0xA93CDF15L,(-1L),0L},{(-1L),0x42A04EB4L,0xDD929007L,0xB9142EAEL}},{{0xB5EBCEE9L,0x06081FB5L,0x42A04EB4L,0x42A04EB4L},{1L,1L,0x42A04EB4L,(-1L)},{0xB5EBCEE9L,0xEF5DC191L,0xDD929007L,0x06081FB5L},{(-1L),0xDD929007L,(-1L),0xDD929007L}}};
    const struct S1 l_3053 = {0,1,454,206,0L};
    uint32_t * const *l_3072 = &g_1670;
    uint32_t * const **l_3071 = &l_3072;
    uint32_t * const ***l_3070 = &l_3071;
    struct S2 l_3100[1][5][4] = {{{{0xF5L},{0xF5L},{0xF5L},{0xF5L}},{{0xF5L},{0xF5L},{0xF5L},{0xF5L}},{{0xF5L},{0xF5L},{0xF5L},{0xF5L}},{{0xF5L},{0xF5L},{0xF5L},{0xF5L}},{{0xF5L},{0xF5L},{0xF5L},{0xF5L}}}};
    uint32_t l_3122 = 1UL;
    uint32_t l_3152[6] = {1UL,6UL,1UL,1UL,6UL,1UL};
    const int32_t l_3259 = 0xE67680DBL;
    uint16_t ****l_3272 = &g_998;
    int8_t l_3310 = 0xF8L;
    uint16_t l_3312 = 6UL;
    int16_t * const *l_3338[3][6][3] = {{{&g_1054[2],&g_1054[2],&g_1054[2]},{&g_1054[2],&g_1054[1],&g_1054[2]},{&g_1054[2],&g_1054[2],&g_1054[2]},{&g_1054[2],&g_1054[0],(void*)0},{&g_1054[2],(void*)0,&g_1054[2]},{&g_1054[0],&g_1054[2],&g_1054[2]}},{{&g_1054[2],&g_1054[2],&g_1054[2]},{&g_1054[0],&g_1054[2],&g_1054[0]},{&g_1054[2],&g_1054[2],(void*)0},{&g_1054[0],(void*)0,&g_1054[2]},{&g_1054[2],&g_1054[2],&g_1054[2]},{&g_1054[0],&g_1054[2],&g_1054[2]}},{{&g_1054[2],&g_1054[2],&g_1054[2]},{&g_1054[0],&g_1054[2],&g_1054[0]},{&g_1054[2],&g_1054[2],(void*)0},{&g_1054[0],(void*)0,&g_1054[2]},{&g_1054[2],&g_1054[2],&g_1054[2]},{&g_1054[0],&g_1054[2],&g_1054[2]}}};
    int16_t * const **l_3337 = &l_3338[1][5][1];
    int8_t l_3433[7][1][3] = {{{0L,0xE4L,0L}},{{(-2L),0xE4L,(-2L)}},{{0L,0L,0L}},{{0L,0L,0L}},{{(-2L),0L,0L}},{{0L,0xE4L,0L}},{{(-2L),0xE4L,(-2L)}}};
    struct S3 l_3434 = {-1L,{247UL},0x3F3DL,{0,2,-723,199,0xC2F9L},0xA7L,0xC566925BL};
    int32_t *l_3436 = &l_2933[4];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2688[i] = &l_2689;
    for (g_1912 = 0; (g_1912 < 15); g_1912 = safe_add_func_uint64_t_u_u(g_1912, 6))
    { 
        int32_t *l_2662[7][1][7] = {{{&g_2629[1],&g_37,&g_2629[1],(void*)0,&g_2629[1],(void*)0,&g_2629[1]}},{{&g_37,&g_37,&g_290,&g_37,&g_37,&g_290,&g_37}},{{&g_2629[1],(void*)0,&g_2629[1],&g_37,&g_2629[1],(void*)0,&g_2629[1]}},{{&g_2629[1],&g_37,&g_2629[1],&g_2629[1],&g_37,&g_2629[1],&g_2629[1]}},{{&g_2629[1],&g_37,&g_718[3],&g_37,&g_2629[1],(void*)0,&g_2629[1]}},{{&g_37,&g_2629[1],&g_2629[1],&g_37,&g_2629[1],&g_2629[1],&g_37}},{{&g_2629[1],&g_37,&g_2629[1],(void*)0,&g_2629[1],(void*)0,&g_2629[1]}}};
        union U5 l_2676 = {0xBEL};
        uint32_t *l_2677 = &g_170;
        int i, j, k;
        l_2663--;
        g_1467[2][4] = &g_1468;
        l_2666 = l_2662[2][0][5];
        g_1206.f4 |= (l_2678 = (safe_add_func_int64_t_s_s((l_2669 , (+(safe_add_func_int16_t_s_s((((*l_2677) = ((p_60 || (((l_2673 != (g_248 , l_2675)) && p_59.f1) , (l_2676 , 0x9566L))) > p_59.f1)) > 4294967295UL), p_59.f0)))), (*g_2558))));
    }
    for (g_2340.f0 = 0; (g_2340.f0 > 17); g_2340.f0 = safe_add_func_int8_t_s_s(g_2340.f0, 2))
    { 
        uint32_t ***l_2681 = &g_1669;
        uint32_t ****l_2682 = (void*)0;
        uint32_t ****l_2683 = &l_2681;
        int32_t l_2684 = (-1L);
        uint64_t *l_2690 = (void*)0;
        uint64_t *l_2691 = &g_368;
        int32_t *l_2692[1];
        int i;
        for (i = 0; i < 1; i++)
            l_2692[i] = &g_290;
        (*l_2683) = l_2681;
        (*g_265) = &l_2678;
        return l_2692[0];
    }
    return p_58;
}



static int64_t  func_61(struct S3  p_62, struct S1  p_63, int32_t * const  p_64)
{ 
    struct S0 l_2040 = {255UL,-1L,0x3BB81AFEL,0L,-37,0xD323D61921C39A11LL,6L};
    struct S0 *l_2041 = &g_1206;
    int16_t ***l_2042 = &g_1053;
    union U5 l_2076 = {0x2BL};
    int64_t l_2139 = (-1L);
    union U4 *l_2162 = &g_241[0][1][0];
    int32_t l_2179[6][4][5] = {{{0x7798753EL,(-4L),(-1L),(-4L),0x7798753EL},{0x5C639B07L,0L,0x95FA104CL,(-1L),(-1L)},{1L,0xE36A8F31L,0x5C639B07L,0xE9083639L,0xE36A8F31L},{0xC7E2165FL,(-4L),0x8BEE3338L,0L,(-1L)}},{{0xFD25F9EFL,0xE9083639L,0xBDFDF764L,0x2E4BCF31L,0x7798753EL},{(-1L),0x1985D36CL,0x5C639B07L,0xC7E2165FL,(-6L)},{(-4L),1L,0xD06F0504L,0xC7E2165FL,0xC7E2165FL},{0xA92D2993L,0xA4504AE8L,0xA92D2993L,0x2E4BCF31L,0L}},{{1L,(-6L),0xFD25F9EFL,0L,(-1L)},{0xE9083639L,(-1L),(-1L),0xE9083639L,0xC7E2165FL},{0xBDFDF764L,0xE9083639L,0xFD25F9EFL,(-1L),1L},{0x7798753EL,0xFD25F9EFL,0xA92D2993L,(-4L),0xBDFDF764L}},{{0xE9083639L,0L,0xD06F0504L,0L,(-1L)},{0x95FA104CL,0L,0x5C639B07L,0x5C639B07L,0L},{0xC7E2165FL,0xFD25F9EFL,0xBDFDF764L,0L,0x1985D36CL},{(-4L),0xE9083639L,0x8BEE3338L,1L,0x7798753EL}},{{0x1985D36CL,0x2E4BCF31L,(-1L),(-1L),0xBDFDF764L},{(-2L),0x8BEE3338L,(-1L),0xE36A8F31L,(-1L)},{0xE36A8F31L,(-1L),0L,0xFD25F9EFL,(-6L)},{(-1L),0xBDFDF764L,0x3956958EL,0x67BCF541L,(-6L)}},{{0x1985D36CL,0x45806793L,0x45806793L,0x1985D36CL,(-1L)},{0x95FA104CL,0x1985D36CL,0xA4504AE8L,(-6L),0xBDFDF764L},{0xD06F0504L,(-2L),(-1L),0x3956958EL,0x95FA104CL},{0x1985D36CL,0x67BCF541L,(-1L),(-6L),0x45806793L}}};
    uint8_t l_2180[3][6] = {{5UL,0x9FL,0xBAL,0x9FL,5UL,0xD4L},{0x9FL,5UL,0xD4L,0xD4L,5UL,0x9FL},{255UL,0x9FL,0xBFL,5UL,0xBFL,0x9FL}};
    struct S3 **l_2220 = (void*)0;
    uint16_t l_2280[4] = {65535UL,65535UL,65535UL,65535UL};
    int32_t ** const l_2310[4][5] = {{(void*)0,(void*)0,&g_36,&g_36,(void*)0},{&g_1046,(void*)0,&g_1046,(void*)0,&g_1046},{(void*)0,&g_36,&g_36,(void*)0,(void*)0},{&g_36,(void*)0,&g_36,(void*)0,&g_36}};
    uint16_t **l_2315 = (void*)0;
    int32_t l_2412 = (-5L);
    uint16_t l_2413[3];
    uint32_t l_2431 = 0xE16B5B5FL;
    int32_t l_2441 = 0xE685625DL;
    struct S2 l_2442 = {0x26L};
    uint64_t ****l_2445[4][3];
    int8_t **l_2508 = &g_785;
    const union U5 * const l_2509 = &l_2076;
    uint8_t l_2572 = 251UL;
    uint32_t l_2576 = 18446744073709551615UL;
    uint8_t l_2595[4][5] = {{248UL,248UL,248UL,248UL,248UL},{5UL,0UL,5UL,0UL,5UL},{248UL,248UL,248UL,248UL,248UL},{5UL,0UL,5UL,0UL,5UL}};
    int32_t l_2597 = 0x5CA0F5F9L;
    int16_t l_2654[6] = {0xFC5BL,0xFC5BL,0xFC5BL,0xFC5BL,0xFC5BL,0xFC5BL};
    uint32_t l_2656 = 0xF6AABA98L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2413[i] = 65535UL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_2445[i][j] = &g_1119;
    }
    (**g_265) = ((safe_lshift_func_int8_t_s_s(((*g_785) = 9L), (safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((((*l_2041) = l_2040) , &g_1053) == l_2042), (**g_534))) , 0x788CL), (&g_265 == (void*)0))))) > 1L);
    for (g_1772 = 0; (g_1772 != (-30)); g_1772 = safe_sub_func_int16_t_s_s(g_1772, 2))
    { 
        union U4 l_2050 = {0x9EBA1329L};
        int32_t l_2055 = 1L;
        uint16_t *l_2056 = &g_1912;
        int32_t l_2069 = 4L;
        struct S0 *l_2095 = &g_1206;
        uint8_t l_2106 = 0xD4L;
        int8_t ***l_2108 = (void*)0;
        int8_t **** const l_2107[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2108,&l_2108,&l_2108,&l_2108,&l_2108,&l_2108,&l_2108},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2108,&l_2108,&l_2108,&l_2108,&l_2108,&l_2108,&l_2108}};
        int8_t ****l_2109 = &l_2108;
        int32_t l_2178[6][3][1] = {{{0x3DAD6103L},{0x800CEE56L},{0x31259C1DL}},{{0x800CEE56L},{0x3DAD6103L},{0x25C80B88L}},{{0x25C80B88L},{0x3DAD6103L},{0x800CEE56L}},{{0x31259C1DL},{0x800CEE56L},{0x3DAD6103L}},{{0x25C80B88L},{0x25C80B88L},{0x3DAD6103L}},{{0x800CEE56L},{0x31259C1DL},{0x800CEE56L}}};
        const int32_t l_2183 = (-1L);
        struct S3 l_2208 = {0L,{1UL},-1L,{0,0,389,88,0x18D8L},6UL,-1L};
        int32_t ***l_2221 = (void*)0;
        int16_t * const *l_2223 = &g_1054[2];
        int16_t * const **l_2222 = &l_2223;
        struct S2 **l_2227 = &g_406;
        uint64_t ***l_2231 = &g_207;
        const uint64_t l_2270[4][6] = {{0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL},{0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL},{0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL},{0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL,0xAFC14AF0A9B80D4FLL}};
        int i, j, k;
        if (((((*l_2056) = (safe_add_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s((((((*g_36) &= 0x491CABD0L) > l_2040.f1) >= (+((l_2050 , g_248) , 3UL))) ^ ((****g_1118) = (l_2055 = ((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((l_2050.f0 || 0xBB8845E2L) ^ l_2050.f1), 5)), (-1L))) && p_63.f0) || l_2050.f1) < 0x23L)))), p_63.f4)) & 0xE9L), 0L))) & p_62.f3.f1) , (*p_64)))
        { 
            uint32_t l_2071 = 6UL;
            union U5 **l_2080 = &g_1642[0][0][0];
            struct S0 l_2092 = {0x47L,0xE4L,0x08824666L,-9L,-2,18446744073709551615UL,0x07L};
            int32_t l_2097 = 1L;
            int32_t l_2177 = 0x3C6BE40DL;
            union U4 l_2205 = {1L};
            int16_t *** const l_2224[3][2] = {{&g_1053,&g_1053},{&g_1053,&g_1053},{&g_1053,&g_1053}};
            int i, j;
            if (((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((***l_2042) &= (!9UL)), 0x931FL)), 11)) & (safe_rshift_func_uint8_t_u_u((**g_534), 3))))
            { 
                int64_t l_2068 = 1L;
                int32_t l_2070 = 0x38155F08L;
                for (l_2040.f6 = 0; (l_2040.f6 >= 3); l_2040.f6 = safe_add_func_int32_t_s_s(l_2040.f6, 4))
                { 
                    int32_t *l_2066 = &g_1804;
                    int32_t *l_2067[7] = {&g_1804,&g_1804,&g_1804,&g_1804,&g_1804,&g_1804,&g_1804};
                    union U5 ***l_2077 = &g_1641;
                    union U5 **l_2079 = &g_1642[1][3][0];
                    union U5 ***l_2078 = &l_2079;
                    int32_t *l_2081 = &g_571[0][0][4].f3;
                    int32_t **l_2082 = (void*)0;
                    int32_t *l_2084 = &g_82;
                    int32_t **l_2083 = &l_2084;
                    int i;
                    l_2071--;
                    l_2040.f4 &= (((++(*l_2056)) | (((*l_2083) = (l_2081 = func_70(p_62.f3.f1, g_248.f3, p_63.f4, ((((l_2076 , (*l_2041)) , &g_1642[2][0][0]) == (l_2080 = ((*l_2078) = ((*l_2077) = &g_1642[1][2][0])))) , p_63.f2)))) != p_64)) || (***g_1119));
                }
            }
            else
            { 
                uint32_t l_2085 = 0x7693F682L;
                int32_t *l_2098 = &g_37;
                int64_t *l_2105[7] = {(void*)0,&g_365,&g_365,&g_427,&g_365,&g_365,&g_427};
                int i;
                (**g_265) = (**g_265);
                l_2085++;
                if ((safe_div_func_int32_t_s_s(0xA74B4536L, (safe_add_func_uint16_t_u_u(l_2040.f6, (**g_1053))))))
                { 
                    (**g_1468) = l_2092;
                }
                else
                { 
                    l_2097 &= ((safe_rshift_func_int16_t_s_s((-1L), (((*g_1469) = (*g_592)) , (0L > (l_2092.f4 &= ((l_2055 ^= ((void*)0 != l_2095)) && (safe_unary_minus_func_uint16_t_u(p_62.f2)))))))) ^ p_63.f4);
                    (*g_265) = l_2098;
                }
                (*l_2098) |= l_2092.f6;
                if (((((void*)0 == (*g_784)) <= (((l_2097 = ((safe_sub_func_uint32_t_u_u(((((*g_998) == (((*p_64) & (safe_sub_func_uint64_t_u_u((p_63.f3 > (4294967287UL > ((*l_2098) < 0xB263L))), p_62.f3.f0))) , (void*)0)) != 6UL) <= l_2092.f2), p_63.f4)) < 8L)) , p_63.f4) || 0xAA08L)) < g_571[0][0][4].f3))
                { 
                    l_2106 = 1L;
                    (*g_36) ^= (-1L);
                }
                else
                { 
                    l_2109 = l_2107[0][6];
                }
            }
            for (g_1826 = 0; (g_1826 == 28); g_1826++)
            { 
                int32_t l_2116[1];
                int32_t l_2117 = 0x7A3F0AEAL;
                uint64_t l_2118[4];
                union U4 l_2149 = {-8L};
                int32_t *l_2163 = &g_1960[0][1][1];
                int32_t *l_2164 = &g_1960[3][4][1];
                int32_t *l_2165 = &l_2117;
                int32_t *l_2166 = &g_718[3];
                int32_t *l_2167 = &g_718[5];
                int32_t *l_2168 = &g_1804;
                int32_t *l_2169 = &g_1960[3][4][1];
                int32_t *l_2170 = &g_718[3];
                int32_t *l_2171 = &g_290;
                int32_t *l_2172 = &l_2069;
                int32_t *l_2173 = &g_1804;
                int32_t *l_2174 = &g_1804;
                int32_t *l_2175 = &l_2055;
                int32_t *l_2176[4][4][7] = {{{&g_1960[0][1][2],&g_1960[0][1][2],(void*)0,&g_290,(void*)0,&g_718[3],&g_290},{&g_1960[4][0][0],(void*)0,&l_2097,(void*)0,&g_1960[3][4][1],&l_2097,&l_2117},{&l_2055,(void*)0,&g_37,&g_1804,(void*)0,(void*)0,&g_1804},{&g_718[3],&g_1960[3][4][1],&g_718[3],&g_87,&l_2117,(void*)0,&g_1960[4][0][0]}},{{&g_37,(void*)0,&l_2055,&g_718[3],&l_2055,(void*)0,&g_37},{&l_2097,(void*)0,&g_1960[4][0][0],(void*)0,&g_1960[3][4][1],(void*)0,&g_1960[3][4][1]},{(void*)0,&g_1960[0][1][2],&g_1960[0][1][2],(void*)0,&g_290,(void*)0,&g_718[3]},{(void*)0,(void*)0,&g_1960[4][0][0],(void*)0,&g_718[3],&l_2097,(void*)0}},{{&g_290,&g_37,&l_2055,&g_718[0],&g_1960[0][1][2],&g_718[3],&g_718[3]},{(void*)0,&l_2069,&g_718[3],&l_2069,(void*)0,(void*)0,&g_1960[3][4][1]},{&g_290,(void*)0,&g_37,&g_718[0],&g_1804,&g_718[0],&g_37},{&g_1960[3][4][1],&g_37,&l_2097,(void*)0,(void*)0,&g_87,&g_1960[4][0][0]}},{{&g_290,&g_718[0],(void*)0,(void*)0,&g_718[0],&g_290,&g_1804},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_2117},{&g_290,&g_1960[1][3][1],&g_290,&g_718[3],&g_1804,&l_2055,&g_290},{(void*)0,(void*)0,(void*)0,&g_87,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_2116[i] = 2L;
                for (i = 0; i < 4; i++)
                    l_2118[i] = 1UL;
                for (g_248.f4 = 0; (g_248.f4 != 5); g_248.f4 = safe_add_func_uint32_t_u_u(g_248.f4, 5))
                { 
                    int32_t *l_2114 = &g_718[3];
                    int32_t *l_2115[1];
                    int64_t *l_2125 = &g_86;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2115[i] = (void*)0;
                    l_2118[1]--;
                    (*g_36) = (safe_mul_func_int16_t_s_s((((((0x97DE2E51L || (((safe_sub_func_uint8_t_u_u((((*l_2125) = g_400) && (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(p_63.f1, (safe_sub_func_uint64_t_u_u((p_62 , (safe_mul_func_uint8_t_u_u((*g_535), ((l_2092.f4 <= (safe_lshift_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(((*g_36) | g_2138), l_2118[2])) < p_62.f2) == (-7L)), 3))) != (*p_64))))), l_2040.f3)))), l_2139))), (*g_785))) >= 249UL) && 0x21F9L)) < l_2116[0]) != p_62.f3.f2) >= l_2040.f2) <= (*g_785)), l_2092.f1));
                    l_2117 &= (((void*)0 != (*g_265)) || ((((safe_rshift_func_int16_t_s_u(((((l_2040.f2 | (((*g_208)++) ^ 0xAA775BEB379DE568LL)) , 0xB083L) , (~(p_62.f3.f1 < (safe_div_func_uint64_t_u_u(((**g_207) = (((safe_mul_func_int16_t_s_s((l_2149 , g_2150), 0x3985L)) || (*g_785)) != 1L)), 0xE8FED2B77DEECC15LL))))) >= p_63.f3), l_2097)) & (**g_265)) >= p_62.f4) | l_2116[0]));
                    (*l_2114) ^= ((*p_64) = (65534UL && l_2118[1]));
                    (**g_265) &= ((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s(l_2139, (~(g_248.f1 , (safe_add_func_uint16_t_u_u(p_62.f0, ((g_837.f0 & (p_62.f3.f4 && (l_2040.f5 <= (((((safe_add_func_int16_t_s_s((((l_2162 == &l_2149) & 0L) && 9UL), (*l_2114))) > (**g_784)) > 0xBA6FA0F5A0A6BD2ELL) != 0UL) | l_2092.f6)))) & 0xD51155E3L))))))) , (void*)0) != (void*)0), p_62.f3.f2)), (**g_534))) && (-7L));
                }
                l_2180[1][1]++;
                (*l_2167) |= ((**g_534) && l_2183);
                for (l_2092.f1 = (-26); (l_2092.f1 != 9); ++l_2092.f1)
                { 
                    if (l_2069)
                        break;
                    return g_2032.f1;
                }
                for (g_290 = (-5); (g_290 >= (-23)); g_290 = safe_sub_func_uint8_t_u_u(g_290, 3))
                { 
                    uint16_t l_2188 = 65535UL;
                    int64_t *l_2200[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2200[i] = &g_86;
                    l_2188++;
                    if ((**g_265))
                        continue;
                    (*l_2172) ^= (~(safe_add_func_uint8_t_u_u((~((((((!(((safe_mod_func_int8_t_s_s((65526UL && (((**g_265) < (((((*l_2056) &= (1L || 0x26BC3EE986691D7FLL)) , (1UL < (safe_mul_func_uint8_t_u_u(0UL, ((g_365 = p_63.f4) == p_62.f3.f2))))) , p_62.f3.f0) | (*g_535))) >= p_63.f0)), p_63.f0)) > p_62.f2) , 4294967289UL)) <= (*g_36)) | (*p_64)) || 0x05L) <= 18446744073709551615UL) < (*g_546))), l_2188)));
                    (*l_2164) &= ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((l_2205 , ((safe_mul_func_int8_t_s_s((l_2208 , (safe_add_func_int8_t_s_s((g_1206.f6 = (g_571[0][0][4].f1 = (p_62.f1.f0 && (safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((g_2032 , (*l_2173)), (((**g_784) = (((*g_36) ^ 0x99FE1389L) && p_62.f3.f1)) , 18446744073709551614UL))), l_2188))))), 2L))), l_2139)) , p_62.f3)) , (**g_784)) , 65535UL), p_62.f1.f0)), p_62.f3.f0)) == 249UL);
                    (*l_2170) |= (!l_2069);
                }
            }
            if ((safe_add_func_uint32_t_u_u(0x61512776L, (p_63.f1 < (((((void*)0 != l_2220) , l_2221) != (void*)0) < (l_2222 == l_2224[0][0]))))))
            { 
                uint64_t ***l_2232 = (void*)0;
                int32_t l_2235 = 0xA2FB8516L;
                union U5 ***l_2242[7][3] = {{&l_2080,&l_2080,&g_1641},{&g_1641,&g_1641,&g_1641},{&l_2080,&g_1641,&g_1641},{&g_1641,&g_1641,&g_1641},{&l_2080,&l_2080,&g_1641},{&g_1641,&g_1641,&g_1641},{&l_2080,&g_1641,&g_1641}};
                uint32_t l_2247 = 0UL;
                int i, j;
                for (l_2071 = 0; (l_2071 <= 0); l_2071 += 1)
                { 
                    uint8_t l_2230 = 0x69L;
                    l_2040.f4 = (((safe_lshift_func_int16_t_s_u(l_2092.f3, 6)) && (((((((void*)0 != l_2227) < l_2179[2][1][4]) , (safe_lshift_func_uint8_t_u_u((l_2230 || (1L ^ (((*g_1118) = l_2231) == l_2232))), 2))) | (*g_785)) > p_63.f1) < p_63.f2)) < g_241[1][0][2].f1);
                    (**g_265) ^= (safe_mod_func_uint16_t_u_u((l_2235 <= (((l_2235 == (safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((*l_2056) ^= ((l_2040.f4 = (safe_add_func_uint32_t_u_u(p_63.f3, (l_2242[5][2] != &g_1641)))) == ((safe_add_func_int16_t_s_s((p_63.f4 &= (**g_1053)), ((((((safe_add_func_uint8_t_u_u(p_62.f4, p_62.f3.f4)) == 2UL) , (void*)0) == l_2162) , p_63.f2) >= l_2235))) && l_2040.f1))), p_63.f0)), p_63.f3))) && 0xE829L) > l_2235)), l_2247));
                }
                return l_2177;
            }
            else
            { 
                int64_t *l_2253[1];
                int32_t l_2279 = (-1L);
                uint16_t l_2281[3][6] = {{0UL,0UL,65533UL,1UL,65532UL,65533UL},{1UL,65532UL,65533UL,65532UL,1UL,65533UL},{65532UL,1UL,65533UL,0UL,0UL,65533UL}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_2253[i] = &g_2138;
                (*g_265) = (void*)0;
                l_2177 = (+(((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((*g_1469) , (l_2179[2][3][3] |= 0x054000AD52DE8700LL)) == p_63.f2), (safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s(3L, (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((&g_241[1][0][2] != &l_2050), (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((&g_1670 == (void*)0), 1L)), p_63.f3)))), 6)), p_62.f3.f3)))), (**g_784))))), l_2040.f2)) > p_63.f4) && p_62.f3.f0));
                (*p_64) = (((safe_add_func_uint16_t_u_u((p_62.f5 ^ l_2270[1][5]), (l_2050 , (safe_mod_func_uint8_t_u_u((p_62 , ((**g_534) = (((safe_add_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((4294967289UL ^ p_63.f3) >= l_2092.f3), 6)), 0xF3A24CFDL)) > 18446744073709551607UL), l_2177)) & l_2279) <= l_2279))), p_62.f5))))) != l_2280[3]) ^ g_248.f0);
                (*p_64) &= (0x4EL == (*g_785));
                if (l_2281[1][2])
                    break;
            }
        }
        else
        { 
            int16_t l_2294 = 0xA9EBL;
            for (g_486.f0 = 0; (g_486.f0 == 52); g_486.f0 = safe_add_func_uint64_t_u_u(g_486.f0, 9))
            { 
                int32_t l_2293 = (-1L);
                for (l_2040.f1 = 5; (l_2040.f1 == (-6)); l_2040.f1 = safe_sub_func_int16_t_s_s(l_2040.f1, 4))
                { 
                    uint16_t l_2286 = 0x58BBL;
                    --l_2286;
                    l_2294 |= ((*p_64) &= (safe_add_func_int8_t_s_s(l_2286, (safe_add_func_int32_t_s_s((0L == p_62.f1.f0), l_2293)))));
                }
            }
            return l_2294;
        }
        return g_1364;
    }
    if (l_2280[1])
    { 
        struct S0 l_2296[2] = {{0x85L,2L,0x82588ED0L,-1L,-12,6UL,0x52L},{0x85L,2L,0x82588ED0L,-1L,-12,6UL,0x52L}};
        const int16_t *l_2302[1];
        const int16_t **l_2301 = &l_2302[0];
        int32_t **l_2313[1];
        uint32_t **l_2335 = &g_1670;
        uint16_t ***l_2387 = &g_999;
        int16_t l_2390 = 0xA97AL;
        int16_t *l_2396 = &g_1826;
        union U5 l_2410 = {8UL};
        int64_t l_2436 = 0x9B524075B9BCCC83LL;
        int8_t ***l_2469 = &g_784;
        int8_t **** const l_2468[7] = {&l_2469,&l_2469,&l_2469,&l_2469,&l_2469,&l_2469,&l_2469};
        const int32_t *l_2481 = &g_718[3];
        const int32_t **l_2480 = &l_2481;
        const int32_t ***l_2479 = &l_2480;
        uint32_t l_2513 = 4294967291UL;
        int64_t l_2575 = 0x82C381FCB4B3BBD7LL;
        int i;
        for (i = 0; i < 1; i++)
            l_2302[i] = &g_367[1][0][0];
        for (i = 0; i < 1; i++)
            l_2313[i] = &g_36;
lbl_2419:
        for (g_368 = 0; (g_368 <= 2); g_368 += 1)
        { 
            uint16_t **l_2316 = (void*)0;
            int32_t l_2317 = 3L;
            uint64_t ****l_2327 = (void*)0;
            int32_t l_2336[6][6] = {{0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L},{0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L},{0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L},{0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L},{0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L},{0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L,0xC9DC1776L}};
            struct S3 *l_2339 = &g_2340;
            struct S0 l_2341 = {0x48L,9L,9UL,-8L,41,9UL,7L};
            struct S2 l_2342[2][3] = {{{255UL},{255UL},{1UL}},{{255UL},{255UL},{1UL}}};
            union U4 * const l_2360 = &g_241[3][3][0];
            uint16_t l_2367 = 0UL;
            int8_t l_2373[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_2373[i] = 0x39L;
            for (p_62.f4 = 0; (p_62.f4 <= 2); p_62.f4 += 1)
            { 
                int32_t **l_2295 = &g_1046;
                struct S3 l_2303 = {2L,{9UL},1L,{0,0,-15,4,0xDC6CL},0x19L,1L};
                uint64_t **** const l_2325 = &g_1119;
                union U4 *l_2361 = (void*)0;
                int i, j;
                (*l_2295) = p_64;
                if (g_303[p_62.f4][g_368])
                { 
                    uint16_t *l_2304 = &g_142;
                    int32_t l_2305 = 0x961723A1L;
                    int i, j;
                    (*g_1469) = l_2296[0];
                    if (g_303[p_62.f4][p_62.f4])
                        continue;
                    l_2305 ^= (safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(l_2180[0][0], (((*l_2304) ^= (l_2301 != ((*l_2042) = (l_2303 , (*l_2042))))) <= (**l_2295)))) != 0x01F6389BL) <= 4L), (**l_2295)));
                }
                else
                { 
                    int32_t ***l_2314 = &l_2313[0];
                    (**l_2295) = (((safe_sub_func_int8_t_s_s((**g_784), (((safe_rshift_func_int8_t_s_u((p_62.f3.f0 >= ((l_2310[1][2] == ((*l_2314) = (((++g_142) & p_62.f3.f0) , l_2313[0]))) | ((l_2315 = ((*g_998) = l_2315)) == l_2316))), 2)) , g_248.f1.f0) , l_2317))) < p_62.f0) >= (-10L));
                    return g_571[0][0][4].f1;
                }
                if (l_2317)
                { 
                    int32_t *l_2318[1][3][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                    uint64_t ****l_2326 = (void*)0;
                    uint32_t **l_2332 = (void*)0;
                    uint32_t ***l_2333[7];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_2333[i] = &g_1669;
                    l_2318[0][0][1] = (*g_265);
                    if ((*g_1046))
                        break;
                    l_2336[2][1] |= (((((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((l_2325 == (l_2327 = l_2326)), ((safe_mul_func_int16_t_s_s((0x4233826AL || (safe_rshift_func_int16_t_s_u(((g_2334 = (g_1669 = l_2332)) == ((*l_2041) , l_2335)), 11))), l_2317)) != p_63.f3))) , p_62.f1.f0) , p_63.f0), 0)), p_62.f1.f0)) || 0xFE046A1EL) > 255UL) == p_62.f5) < (**g_784));
                }
                else
                { 
                    struct S2 *l_2337 = &g_248.f1;
                    int32_t *l_2338 = &l_2179[2][1][1];
                    (*l_2337) = p_62.f1;
                    (*l_2337) = l_2303.f1;
                    l_2338 = &l_2336[5][1];
                    l_2339 = &p_62;
                }
                for (l_2040.f1 = 3; (l_2040.f1 >= 0); l_2040.f1 -= 1)
                { 
                    int i, j, k;
                    return l_2179[g_368][l_2040.f1][p_62.f4];
                }
                (**g_1468) = (l_2341 = l_2341);
                for (p_62.f1.f0 = 0; (p_62.f1.f0 <= 2); p_62.f1.f0 += 1)
                { 
                    struct S2 *l_2343[6] = {&l_2342[1][1],&l_2342[1][1],&g_248.f1,&l_2342[1][1],&l_2342[1][1],&g_248.f1};
                    union U4 **l_2344[5] = {&l_2162,&l_2162,&l_2162,&l_2162,&l_2162};
                    struct S3 **l_2354 = &l_2339;
                    int i, j, k;
                    g_248.f1 = l_2342[1][1];
                    l_2162 = (void*)0;
                    l_2179[p_62.f1.f0][(p_62.f4 + 1)][(g_368 + 2)] &= (safe_add_func_uint64_t_u_u(0xF3CD542100304D74LL, 0x0B93434B8ED67268LL));
                    g_87 ^= (l_2179[(g_368 + 1)][g_368][p_62.f4] < ((**g_1053) = (((((g_2347 , (safe_rshift_func_uint16_t_u_u(0x2A8EL, 10))) , (g_1960[p_62.f4][p_62.f1.f0][p_62.f4] = (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((*l_2354) = &l_2303) != (void*)0), g_1960[p_62.f4][p_62.f1.f0][p_62.f4])), (((safe_div_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((~(((**g_207) = (((*g_785) = (0x35331CA1L != (*p_64))) | p_63.f0)) >= p_62.f5)), (**g_534))) , (-4L)), 0x3E28EC3E9EDABCF0LL)) , l_2360) == l_2361))))) != p_63.f1) > 18446744073709551615UL) != 0xF7L)));
                    (*g_265) = (*g_265);
                }
            }
            for (g_1912 = 0; (g_1912 <= 3); g_1912 += 1)
            { 
                union U4 **l_2362[2][5][2] = {{{&l_2162,&l_2162},{&l_2162,&l_2162},{&l_2162,&l_2162},{&l_2162,&l_2162},{&l_2162,&l_2162}},{{&l_2162,&l_2162},{&l_2162,&l_2162},{&l_2162,&l_2162},{&l_2162,&l_2162},{&l_2162,&l_2162}}};
                union U4 **l_2363[1][3];
                union U4 **l_2364[6];
                union U4 **l_2365 = &l_2162;
                int32_t l_2366 = (-10L);
                int32_t l_2371 = 0x40E43F0DL;
                int32_t l_2372 = 0xD9E29D05L;
                int32_t l_2374[3];
                uint32_t l_2375 = 0UL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_2363[i][j] = &l_2162;
                }
                for (i = 0; i < 6; i++)
                    l_2364[i] = &l_2162;
                for (i = 0; i < 3; i++)
                    l_2374[i] = 0x89800731L;
                (*l_2365) = l_2360;
                if (l_2366)
                    continue;
                for (g_1206.f1 = 2; (g_1206.f1 >= 0); g_1206.f1 -= 1)
                { 
                    int32_t l_2370[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_2370[i] = 0xEFA8AE21L;
                    --l_2367;
                    --l_2375;
                    if (l_2179[g_368][(g_1206.f1 + 1)][(g_1206.f1 + 1)])
                        continue;
                }
            }
        }
        for (g_1206.f1 = 1; (g_1206.f1 <= 29); g_1206.f1 = safe_add_func_int64_t_s_s(g_1206.f1, 1))
        { 
            uint16_t ****l_2384 = (void*)0;
            uint16_t ****l_2385 = (void*)0;
            uint16_t ****l_2386 = (void*)0;
            uint16_t ***l_2392 = &l_2315;
            uint16_t ****l_2391 = &l_2392;
            uint16_t *l_2394 = &g_142;
            const int32_t l_2395 = 0x059952D4L;
            int32_t l_2397[2][4][5] = {{{(-2L),0x24BC1E70L,0x90CC3448L,(-2L),0x2D4A1152L},{(-1L),0x98DA47DFL,0xBA2A8398L,0x98DA47DFL,(-1L)},{0x90CC3448L,0L,0x24BC1E70L,0x2D4A1152L,0L},{(-1L),0xC3C38392L,0xC3C38392L,(-1L),0xBA9D16ABL}},{{(-2L),(-1L),0xF10342B1L,0L,0L},{0x73F4ED03L,(-1L),0x73F4ED03L,0xBA9D16ABL,(-1L)},{0L,0x24BC1E70L,0x2D4A1152L,0L,0x2D4A1152L},{0xB72D57DDL,0xB72D57DDL,0xBA2A8398L,(-1L),0x98DA47DFL}}};
            uint8_t **l_2440 = &g_535;
            struct S2 l_2449 = {1UL};
            int8_t ****l_2470 = &l_2469;
            uint32_t l_2487[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
            int32_t l_2541[1][5][1] = {{{(-3L)},{0xCA82F3B4L},{(-3L)},{0xCA82F3B4L},{(-3L)}}};
            int i, j, k;
            l_2397[1][0][0] = ((0x81L & (safe_lshift_func_int16_t_s_u(p_62.f3.f4, 12))) > (((safe_mul_func_int8_t_s_s((((*l_2394) ^= ((((g_998 = &g_999) != l_2387) <= (--(**g_534))) != (((*l_2391) = (l_2390 , &g_999)) == (g_2393 = &l_2315)))) != l_2395), p_62.f1.f0)) , (void*)0) != l_2396));
            (*p_64) ^= (((0x352CB76CFBF00281LL > p_63.f1) <= (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((**g_784), p_62.f5)), p_62.f4))) || (safe_lshift_func_int16_t_s_s(p_62.f2, (safe_mod_func_uint64_t_u_u((((**g_534)++) > (safe_sub_func_int32_t_s_s((l_2410 , g_2411), p_62.f1.f0))), p_62.f3.f4)))));
            l_2413[1]--;
            if (l_2395)
            { 
                int64_t l_2416[6] = {0xD52452631DDC3FBELL,0xD52452631DDC3FBELL,0xD52452631DDC3FBELL,0xD52452631DDC3FBELL,0xD52452631DDC3FBELL,0xD52452631DDC3FBELL};
                union U5 **l_2425 = &g_1642[1][1][0];
                struct S2 *l_2443 = &l_2442;
                int i;
                g_87 ^= l_2416[5];
                for (g_248.f5 = 26; (g_248.f5 < 14); g_248.f5 = safe_sub_func_uint32_t_u_u(g_248.f5, 6))
                { 
                    int32_t **l_2420 = &g_36;
                    if (g_142)
                        goto lbl_2419;
                    (*l_2420) = p_64;
                    l_2397[1][0][0] |= ((*p_64) = (safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(p_63.f4, 0)) || p_63.f1), (*g_535))));
                }
                l_2425 = &g_1642[2][0][0];
                for (g_1826 = 0; (g_1826 >= 11); g_1826 = safe_add_func_uint64_t_u_u(g_1826, 8))
                { 
                    int16_t l_2428 = 0x6D93L;
                    int32_t l_2429 = 0x1B778251L;
                    int32_t l_2430 = (-10L);
                    --l_2431;
                    l_2441 = ((*p_64) |= ((((safe_rshift_func_uint8_t_u_u((l_2436 || p_62.f3.f3), 7)) ^ (l_2397[1][0][0] || ((safe_mul_func_uint16_t_u_u((*g_546), ((((!0x5FF69825B7D2326DLL) ^ ((**g_534) = (l_2440 != (void*)0))) != 5L) == 18446744073709551606UL))) <= p_62.f4))) && l_2428) != p_62.f3.f2));
                    return l_2430;
                }
                (*l_2443) = l_2442;
            }
            else
            { 
                uint64_t *****l_2444 = (void*)0;
                uint64_t *****l_2446 = &g_1118;
                int64_t *l_2452 = &g_427;
                (*p_64) = ((((*l_2041) , (l_2445[3][1] = (void*)0)) == ((*l_2446) = &g_1119)) && (safe_sub_func_uint8_t_u_u((0x5C2DE3B8FD500D0FLL ^ (0xA3C46284L & ((l_2449 , (p_63.f4 = (safe_mod_func_int64_t_s_s(((*l_2452) = g_87), l_2397[1][0][0])))) | p_62.f3.f2))), (**g_534))));
                if (p_62.f3.f2)
                    goto lbl_2419;
                (*g_265) = (*g_265);
            }
        }
        l_2576--;
    }
    else
    { 
        int32_t l_2579[6] = {9L,9L,9L,9L,9L,9L};
        int32_t l_2621 = (-1L);
        int32_t l_2622 = (-1L);
        int32_t l_2625 = (-1L);
        int32_t l_2627[2][7][4];
        uint32_t l_2640 = 1UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 4; k++)
                    l_2627[i][j][k] = 0x8C1B61C3L;
            }
        }
        if (((((*p_64) = 3L) <= l_2579[3]) == ((void*)0 != &g_998)))
        { 
            uint32_t l_2582 = 18446744073709551615UL;
            int32_t l_2583 = (-1L);
            uint32_t *l_2594 = &g_571[0][0][4].f2;
            uint16_t *l_2596 = &l_2280[1];
            int32_t l_2598[6][1][2] = {{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}},{{1L,1L}}};
            union U5 ***l_2616 = (void*)0;
            int i, j, k;
            l_2598[0][0][0] ^= (safe_sub_func_uint8_t_u_u(((l_2582 = 0UL) < (((p_63.f4 = 0xF45AL) > l_2583) || ((((-1L) <= ((*p_64) |= (safe_lshift_func_int16_t_s_u((**g_1053), ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((*l_2596) = (((safe_div_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((*l_2594) = (p_63.f0 <= (-7L))), l_2579[3])) & 0x6CDEE4BEL), 3UL)) != p_62.f1.f0) & l_2595[3][0])), p_62.f4)), l_2597)) && l_2579[0]))))) || l_2579[3]) || 1UL))), p_62.f5));
            for (g_2340.f1.f0 = (-14); (g_2340.f1.f0 != 2); g_2340.f1.f0++)
            { 
                return l_2579[3];
            }
            for (l_2431 = 0; (l_2431 <= 2); l_2431 += 1)
            { 
                uint64_t *****l_2613 = &l_2445[3][0];
                int32_t l_2624 = 8L;
                int32_t l_2626 = 3L;
                int32_t l_2628 = (-7L);
                int32_t l_2631 = (-1L);
                int32_t l_2633 = 0xCFD14D23L;
                int16_t l_2635 = 0x2B3EL;
                int32_t l_2636 = 0x06FC8806L;
                int32_t l_2637 = 0x2804F36DL;
                for (g_86 = 2; (g_86 >= 0); g_86 -= 1)
                { 
                    (*p_64) = ((0xB6L == 255UL) > ((*g_785) != p_62.f4));
                    if ((***g_2483))
                        continue;
                }
                for (g_163 = 0; (g_163 <= 2); g_163 += 1)
                { 
                    union U5 ** const *l_2615 = (void*)0;
                    union U5 ** const **l_2614 = &l_2615;
                    union U5 ****l_2617 = &l_2616;
                    g_1960[3][4][1] = (safe_div_func_int32_t_s_s((((~(safe_mul_func_int8_t_s_s((**g_784), (safe_add_func_uint64_t_u_u(((~(&g_1118 == (l_2613 = &l_2445[2][0]))) & ((-6L) == (**g_2484))), (((*l_2614) = &g_1641) == ((*l_2617) = l_2616))))))) && 0L) ^ 255UL), 0x2E9AFFC6L));
                }
                for (l_2076.f0 = 0; (l_2076.f0 <= 2); l_2076.f0 += 1)
                { 
                    int32_t l_2618 = 0xB6362F67L;
                    int32_t l_2619 = (-8L);
                    int32_t l_2620 = (-5L);
                    int32_t l_2623 = 0L;
                    int32_t l_2630 = 0L;
                    int32_t l_2632 = 0L;
                    int32_t l_2634 = 2L;
                    int32_t l_2638 = (-9L);
                    int32_t l_2639 = 0x1132324FL;
                    (*p_64) |= (**g_2484);
                    l_2640--;
                    return p_62.f3.f3;
                }
            }
        }
        else
        { 
            return p_63.f3;
        }
        if ((p_64 == ((*g_265) = &l_2625)))
        { 
            int32_t l_2647 = 0x61155156L;
            int32_t l_2648 = 0L;
            int32_t l_2649 = 0x12E6228EL;
            for (p_62.f1.f0 = (-10); (p_62.f1.f0 <= 19); ++p_62.f1.f0)
            { 
                uint32_t l_2651 = 1UL;
                for (g_2150 = 0; (g_2150 == 1); g_2150 = safe_add_func_uint32_t_u_u(g_2150, 1))
                { 
                    int8_t l_2650 = 1L;
                    l_2651++;
                    (*g_265) = (*g_265);
                    if ((*g_2485))
                        break;
                    return l_2654[5];
                }
            }
        }
        else
        { 
            const struct S0 l_2655 = {0xAEL,0x07L,4294967295UL,9L,4,0xC664CE8BCD7E4E01LL,0xFBL};
            (**g_1468) = l_2655;
            (*p_64) &= (-9L);
            return (*g_2558);
        }
        l_2656++;
    }
    return (*g_2558);
}



static struct S1  func_66(int32_t * p_67, int32_t * p_68, int32_t * p_69)
{ 
    uint64_t l_401 = 0UL;
    struct S2 *l_404 = &g_92;
    struct S2 **l_405[1][1];
    struct S3 l_407 = {-1L,{0x15L},0xF776L,{0,2,-51,96,1L},255UL,0x759589AFL};
    union U4 *l_415 = &g_241[2][1][1];
    int32_t l_418 = 0x0FDB2BAEL;
    uint8_t *l_442 = (void*)0;
    struct S1 l_444 = {0,1,487,30,-8L};
    int8_t *l_478 = &g_432;
    struct S1 l_522 = {0,3,496,86,0x9636L};
    int8_t l_537 = 0L;
    int64_t l_560 = 1L;
    struct S0 *l_570 = &g_571[0][0][4];
    int8_t l_597 = 0x45L;
    uint32_t l_598[2];
    const int32_t *l_671 = &l_418;
    uint16_t l_704 = 0x25A2L;
    uint16_t **l_710 = (void*)0;
    int32_t l_719 = 0x087D1A21L;
    int32_t l_720 = 0x03DFDACFL;
    uint32_t *l_754 = &g_170;
    int32_t l_762 = 5L;
    int32_t l_768 = 0x8E4657ADL;
    int32_t l_770 = 0x337C848DL;
    int32_t l_771 = 0L;
    int32_t l_772[1][3][3] = {{{0xCA6EA167L,0xCA6EA167L,0xCA6EA167L},{0x58FB4F03L,0x58FB4F03L,0x58FB4F03L},{0xCA6EA167L,0xCA6EA167L,0xCA6EA167L}}};
    const int32_t l_926 = 0x5E5E2B32L;
    int64_t l_949 = 0x6930F1A19B475DE1LL;
    union U5 l_995 = {0x3FL};
    int16_t ***l_1064 = &g_1053;
    uint16_t l_1083[5][4][2] = {{{0xA873L,0x33BEL},{0xA873L,0x33BEL},{0xA873L,0x33BEL},{0xA873L,0x33BEL}},{{0xA873L,0x33BEL},{0xA873L,0x33BEL},{0xA873L,0x33BEL},{0xA873L,0x33BEL}},{{0xA873L,0x33BEL},{0xA873L,0x33BEL},{0xA873L,0x33BEL},{0xA873L,0x33BEL}},{{0xA873L,0x33BEL},{0xA873L,0x33BEL},{0xA873L,0x33BEL},{0xA873L,0x33BEL}},{{0xA873L,0x33BEL},{0xA873L,0x33BEL},{0xA873L,0x33BEL},{0xA873L,0x33BEL}}};
    uint8_t l_1147 = 8UL;
    int8_t l_1322 = 9L;
    uint32_t l_1323 = 0x95F253F7L;
    uint8_t l_1377 = 1UL;
    int64_t l_1401 = 0L;
    uint64_t l_1434 = 0x8936FB34C04DE72ALL;
    uint8_t l_1457[1];
    struct S0 ***l_1473 = &g_1468;
    uint32_t l_1550 = 0xC154DC81L;
    const int16_t l_1629 = 6L;
    uint32_t l_1694[5] = {0x13BB642BL,0x13BB642BL,0x13BB642BL,0x13BB642BL,0x13BB642BL};
    uint8_t l_1730[2];
    uint8_t l_1763 = 0xA7L;
    union U5 ** const *l_1787[7][1] = {{&g_1641},{(void*)0},{(void*)0},{(void*)0},{&g_1641},{&g_1641},{(void*)0}};
    union U5 ** const *l_1788 = &g_1641;
    uint32_t l_1827[5] = {4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL};
    uint64_t **l_1856 = &g_208;
    int32_t l_1870[6][6][3] = {{{0x3B900DFBL,0x489BDE61L,0x3B900DFBL},{0xFB2AD27DL,0x66406FA1L,0x497B306EL},{0x3B900DFBL,(-1L),0L},{0x3B900DFBL,(-2L),0x0BB33971L},{0xFB2AD27DL,0x6AA6EBCCL,0x582F26E6L},{0x3B900DFBL,1L,0x82C7181CL}},{{0x3B900DFBL,1L,0xFB2AD27DL},{0xFB2AD27DL,0x998982CCL,0x23620A95L},{0x3B900DFBL,(-1L),0x87514C14L},{0x3B900DFBL,0x489BDE61L,0x3B900DFBL},{0xFB2AD27DL,0x66406FA1L,0x497B306EL},{0x3B900DFBL,(-1L),0L}},{{0x3B900DFBL,(-2L),0x0BB33971L},{0xFB2AD27DL,0x6AA6EBCCL,0x582F26E6L},{0x3B900DFBL,1L,0x82C7181CL},{0x3B900DFBL,1L,0xFB2AD27DL},{0xFB2AD27DL,0x998982CCL,0x23620A95L},{0x3B900DFBL,(-1L),0x87514C14L}},{{0x3B900DFBL,0x489BDE61L,0x3B900DFBL},{0xFB2AD27DL,0x66406FA1L,0x497B306EL},{0x3B900DFBL,(-1L),0L},{0x3B900DFBL,(-2L),0x0BB33971L},{0xFB2AD27DL,0x6AA6EBCCL,0x582F26E6L},{0x3B900DFBL,1L,0x82C7181CL}},{{0x3B900DFBL,1L,0xFB2AD27DL},{0xFB2AD27DL,0x998982CCL,0x23620A95L},{0x3B900DFBL,(-1L),0x87514C14L},{0x3B900DFBL,0x489BDE61L,0x3B900DFBL},{0xFB2AD27DL,0x66406FA1L,0x497B306EL},{0x3B900DFBL,(-1L),0L}},{{0x3B900DFBL,(-2L),0x0BB33971L},{0xFB2AD27DL,0x6AA6EBCCL,0x582F26E6L},{0x3B900DFBL,1L,0x82C7181CL},{0x3B900DFBL,1L,0xFB2AD27DL},{0xFB2AD27DL,0x998982CCL,0x23620A95L},{0x3B900DFBL,(-1L),0x87514C14L}}};
    int32_t l_1873 = (-1L);
    uint64_t l_1874 = 0x1113D55A811C0777LL;
    int64_t l_1884 = 7L;
    int16_t l_1885 = 0L;
    int32_t l_1948 = 0xD157C1F0L;
    uint64_t *l_1980 = &g_89;
    uint32_t l_1996 = 1UL;
    struct S1 *l_2031 = &g_2032;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_405[i][j] = &l_404;
    }
    for (i = 0; i < 2; i++)
        l_598[i] = 0x899232DEL;
    for (i = 0; i < 1; i++)
        l_1457[i] = 0x9EL;
    for (i = 0; i < 2; i++)
        l_1730[i] = 0xBAL;
    l_401 = (0L || 1UL);
    return g_204;
}



static int32_t * func_70(int16_t  p_71, struct S1  p_72, uint16_t  p_73, uint64_t  p_74)
{ 
    int32_t *l_78 = (void*)0;
    int32_t *l_79 = &g_37;
    int32_t l_80 = 0x03C79A39L;
    int32_t *l_81[7][7];
    struct S2 *l_93 = &g_92;
    union U5 l_176[2][3] = {{{0xB3L},{0xB3L},{0xB3L}},{{0xB3L},{0xB3L},{0xB3L}}};
    uint64_t *l_186 = &g_163;
    uint64_t l_274 = 0xA0FD96F209A28C49LL;
    int32_t l_327 = 1L;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
            l_81[i][j] = (void*)0;
    }
lbl_189:
    ++g_83;
    --g_89;
    (*l_93) = g_92;
    if ((*g_36))
    { 
        union U4 l_104 = {0xDD83CB06L};
        int32_t l_106 = 0x59F121BCL;
        for (g_83 = 0; (g_83 <= 6); g_83 += 1)
        { 
            uint8_t *l_103[5][1][6] = {{{&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0}},{{&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0}},{{&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0}},{{&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0}},{{&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0,&g_92.f0}}};
            int8_t *l_105 = (void*)0;
            int32_t l_107 = 0x8EFF2801L;
            uint16_t *l_138 = (void*)0;
            uint16_t *l_139 = (void*)0;
            uint16_t *l_140 = (void*)0;
            uint16_t *l_141 = &g_142;
            int16_t *l_143 = &g_144;
            int i, j, k;
            l_107 ^= (g_77[g_83] != ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s((-1L), (p_72.f1 , (!g_37)))), 2)), ((((l_106 = (safe_mul_func_uint8_t_u_u((g_92.f0 = 0xBFL), ((l_104 , p_73) ^ p_72.f2)))) > 0L) <= g_37) && g_77[2]))) && g_89));
            (*l_79) = (((+((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(0xF991L, (safe_sub_func_uint32_t_u_u((((*l_143) = (safe_rshift_func_uint16_t_u_s(((*l_141) = (((safe_sub_func_uint16_t_u_u(0x2B15L, (p_72.f4 , ((l_107 = (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((((((((g_89 = (~l_107)) < ((((((((safe_lshift_func_uint8_t_u_u(0x58L, (((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((l_107 != (safe_rshift_func_uint16_t_u_s((0x07L >= g_25[0][0]), g_37))) || 0xFCL), 0)), 65529UL)) != (*l_79)) > 7UL))) == p_72.f3) < l_107) & 0L) > 0xC8L) , 0UL) ^ 18446744073709551610UL) > 0xFFL)) || g_11) != p_72.f1) || p_72.f3) == 0xF9L) || 18446744073709551615UL), l_104.f0)), 1UL)) != 247UL) || (-1L)), 6)), g_47.f0))) || 0xA0E2E69AL)))) < p_73) , g_37)), 12))) <= 0xE828L), 0xD4B1B73CL)))) | 0x262D627FL), p_72.f1)), p_72.f1)) > g_77[g_83])) , g_142) > 0L);
            for (g_89 = 0; (g_89 <= 0); g_89 += 1)
            { 
                const int8_t l_147 = 0x8DL;
                uint64_t *l_162 = &g_163;
                int8_t *l_167 = &g_168;
                uint32_t *l_169 = &g_170;
                (*g_36) ^= ((safe_lshift_func_uint8_t_u_u((l_106 , l_147), (safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((*l_169) = (safe_mul_func_int8_t_s_s(g_77[0], ((((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(1UL, ((*l_167) = (safe_add_func_uint64_t_u_u((((*l_162)++) && 0x335C488BB19F011ELL), (+(l_147 <= (65532UL == l_104.f0)))))))), p_72.f4)), l_104.f1)) , p_72.f2) && 1UL) & g_89)))) , g_170), g_47.f0)), p_72.f3)))) | p_72.f2);
            }
        }
        for (g_83 = 0; (g_83 <= 6); g_83 += 1)
        { 
            int32_t **l_171 = &l_81[1][4];
            (*l_171) = &g_87;
        }
        (*g_36) = 0xB2FAD472L;
    }
    else
    { 
        uint32_t *l_179 = (void*)0;
        uint32_t *l_180 = &g_83;
        uint64_t **l_183 = (void*)0;
        uint64_t *l_185 = &g_89;
        uint64_t **l_184 = &l_185;
        uint64_t **l_187 = (void*)0;
        int32_t l_188 = 0x73480D37L;
        int32_t *l_227 = (void*)0;
        const union U4 *l_240 = &g_241[1][0][2];
        struct S0 l_242 = {0xF8L,0x49L,4294967295UL,0x3B648F1DL,9,18446744073709551611UL,0xB3L};
        struct S3 l_337[7] = {{0xFD71BC48L,{0xFEL},0x75B2L,{0,0,780,27,0L},0xFDL,0x063CE230L},{0xFD71BC48L,{0xFEL},0x75B2L,{0,0,780,27,0L},0xFDL,0x063CE230L},{0xFD71BC48L,{0xFEL},0x75B2L,{0,0,780,27,0L},0xFDL,0x063CE230L},{0xFD71BC48L,{0xFEL},0x75B2L,{0,0,780,27,0L},0xFDL,0x063CE230L},{0xFD71BC48L,{0xFEL},0x75B2L,{0,0,780,27,0L},0xFDL,0x063CE230L},{0xFD71BC48L,{0xFEL},0x75B2L,{0,0,780,27,0L},0xFDL,0x063CE230L},{0xFD71BC48L,{0xFEL},0x75B2L,{0,0,780,27,0L},0xFDL,0x063CE230L}};
        int32_t l_360 = 0x6ABCF7D5L;
        int32_t l_361 = 0xC30839E8L;
        int32_t l_362[6][1];
        union U5 l_379 = {255UL};
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_362[i][j] = 0x2E4DEBA0L;
        }
        if (((safe_mul_func_int8_t_s_s(p_72.f4, (safe_sub_func_uint16_t_u_u(((((l_176[1][1] , (0xA068DC4AL > (((((safe_unary_minus_func_uint16_t_u(((~(++(*l_180))) && (((*l_184) = &p_74) != (l_186 = l_186))))) > (g_86 & p_72.f0)) && l_188) || g_86) > p_72.f4))) & p_72.f4) != 1L) ^ g_25[0][0]), g_88)))) <= 0x73CE1473L))
        { 
            int32_t *l_193[4][1][2] = {{{&g_87,&g_87}},{{&l_80,&g_87}},{{&g_87,&l_80}},{{&g_87,&g_87}}};
            int i, j, k;
            if (p_72.f1)
                goto lbl_189;
            for (g_83 = 0; (g_83 == 59); g_83 = safe_add_func_int8_t_s_s(g_83, 3))
            { 
                int32_t *l_192 = &l_80;
                return &g_87;
            }
        }
        else
        { 
            int32_t *l_194 = &g_87;
            int64_t l_202[7][1][5] = {{{1L,0xD7B66246280EF9A4LL,(-4L),0L,0xC464EAFE298484EALL}},{{0xC71B30946632E42DLL,0xFACF2A4E10F472F1LL,0xFACF2A4E10F472F1LL,0xC71B30946632E42DLL,0xDD5523DC5B1D9676LL}},{{0xB7ED1FF4DA18CC62LL,0xEA6DD21D6E29E21DLL,0xFACF2A4E10F472F1LL,0x0969725A790BE2FELL,0xF7C7667E6DEFB240LL}},{{0x0969725A790BE2FELL,3L,(-4L),1L,0xFACF2A4E10F472F1LL}},{{0xD7B66246280EF9A4LL,0xB7ED1FF4DA18CC62LL,0x0969725A790BE2FELL,3L,0xFACF2A4E10F472F1LL}},{{(-4L),0xC71B30946632E42DLL,0L,0x1D863500523DCADDLL,0xFACF2A4E10F472F1LL}},{{0xDD5523DC5B1D9676LL,0xEA6DD21D6E29E21DLL,1L,0xD7B66246280EF9A4LL,(-4L)}}};
            uint32_t l_224 = 4294967295UL;
            int i, j, k;
            l_194 = (void*)0;
            if (((*l_79) = (~p_72.f2)))
            { 
                int64_t *l_203 = &l_202[1][0][3];
                if ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((*l_203) = (safe_add_func_int16_t_s_s(l_188, l_202[1][0][3]))) != (((g_204 , (*l_79)) <= (p_72.f2 >= (l_180 == l_180))) ^ g_87)), 7)), 0x48L)))
                { 
                    uint64_t l_205 = 0x635219DD48334AB6LL;
                    int32_t l_206[7][6] = {{0x9A50AF27L,4L,4L,0x9A50AF27L,4L,4L},{0x9A50AF27L,4L,4L,0x9A50AF27L,4L,4L},{0x9A50AF27L,4L,4L,0x9A50AF27L,4L,4L},{0x9A50AF27L,4L,4L,0x9A50AF27L,4L,4L},{0x9A50AF27L,4L,4L,0x9A50AF27L,4L,4L},{0x9A50AF27L,4L,4L,0x9A50AF27L,4L,4L},{0x9A50AF27L,4L,4L,0x9A50AF27L,4L,4L}};
                    int i, j;
                    (*l_79) ^= l_188;
                    if (g_204.f2)
                        goto lbl_189;
                    g_87 ^= (*g_36);
                    l_206[1][1] = l_205;
                }
                else
                { 
                    uint64_t ***l_209 = &l_183;
                    (*l_209) = g_207;
                }
                for (g_88 = 0; (g_88 <= 6); g_88 += 1)
                { 
                    return &g_87;
                }
            }
            else
            { 
                (*l_79) = (safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s(9L, (((g_204 , (g_204 , (safe_lshift_func_int16_t_s_s((((*l_180) = g_92.f0) ^ (safe_div_func_uint16_t_u_u((&g_170 != &g_170), (safe_mul_func_int8_t_s_s(((((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(g_25[0][0], g_144)), 0x7638222FL)) >= l_188) != l_188) < g_47.f0), g_89))))), g_86)))) || l_188) == l_224))) <= 0xFFL), g_142));
            }
            for (p_72.f4 = (-28); (p_72.f4 <= (-24)); p_72.f4++)
            { 
                int8_t *l_234[2];
                int32_t l_235 = 1L;
                const union U4 *l_239 = &g_47;
                const union U4 **l_238[3][4][7] = {{{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239}},{{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239}},{{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239},{&l_239,&l_239,&l_239,&l_239,&l_239,&l_239,&l_239}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_234[i] = &g_168;
                l_227 = (p_73 , l_194);
                (*l_79) = ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_144, (safe_lshift_func_int8_t_s_s((l_235 = g_204.f0), 1)))), (safe_rshift_func_int16_t_s_s(0x0F4AL, 11)))) >= g_47.f0);
                l_240 = &g_47;
                g_87 &= (l_235 &= (0x91142BF4L || (*g_36)));
            }
        }
        for (g_144 = 0; (g_144 <= 3); g_144 += 1)
        { 
            int32_t **l_263 = &g_36;
            int32_t l_287 = 0x263C3DD7L;
            int32_t l_292 = (-1L);
            union U4 l_313 = {0xB6ED61A2L};
            for (g_168 = 3; (g_168 >= 0); g_168 -= 1)
            { 
                int8_t l_266 = 0x2AL;
                int32_t l_288 = 0L;
                int32_t l_289 = 0x22430949L;
                int32_t l_294 = 0xFFB8CE05L;
                struct S3 l_298 = {0xEF999C13L,{1UL},0x93D3L,{0,0,-659,132,0x1115L},248UL,-1L};
                int32_t l_302 = 0x9A292743L;
                union U4 *l_329[4][4][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_241[1][0][2],&g_241[3][2][3],&g_241[3][2][3],&g_241[1][0][2]},{(void*)0,(void*)0,&g_241[3][2][3],&g_241[3][3][1],&g_241[3][3][1]},{(void*)0,(void*)0,(void*)0,&g_241[3][2][3],&g_241[3][3][1]}},{{&g_241[1][0][2],(void*)0,&g_241[3][3][1],(void*)0,&g_241[1][0][2]},{(void*)0,(void*)0,(void*)0,&g_241[1][0][2],(void*)0},{(void*)0,(void*)0,&g_241[3][3][1],&g_241[1][0][2],&l_313},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_241[1][0][2],&g_241[3][2][3],&g_241[3][2][3],&g_241[1][0][2]},{(void*)0,(void*)0,&g_241[3][2][3],&g_241[3][3][1],&g_241[3][3][1]},{(void*)0,(void*)0,&g_241[1][0][2],&g_241[3][3][1],(void*)0},{&g_241[3][2][3],(void*)0,(void*)0,(void*)0,&g_241[3][2][3]}},{{&g_241[1][0][2],(void*)0,&l_313,&g_241[3][2][3],&l_313},{&l_313,&l_313,(void*)0,&g_241[3][2][3],(void*)0},{(void*)0,&g_241[1][0][2],&g_241[1][0][2],(void*)0,&l_313},{(void*)0,&g_241[3][2][3],&g_241[3][3][1],&g_241[3][3][1],&g_241[3][2][3]}}};
                union U4 **l_328 = &l_329[1][3][1];
                uint8_t *l_352 = &l_298.f1.f0;
                int i, j, k;
                for (l_188 = 0; (l_188 <= 3); l_188 += 1)
                { 
                    struct S0 *l_243 = &l_242;
                    (*l_243) = l_242;
                    return &g_37;
                }
                if ((*g_36))
                { 
                    int32_t ***l_264 = (void*)0;
                    uint8_t *l_267 = &g_241[1][0][2].f1;
                    uint8_t *l_268[3];
                    int16_t *l_269 = &g_204.f4;
                    int64_t *l_270 = (void*)0;
                    int64_t *l_271 = &g_86;
                    struct S2 * const *l_285 = &l_93;
                    int32_t l_286 = 0L;
                    int32_t l_291 = (-1L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_268[i] = &g_248.f1.f0;
                    l_188 = (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((0x1617E3CEDB52015BLL > ((g_248 , p_72.f1) || ((*l_269) = (((**l_263) = ((*l_79) ^ (safe_sub_func_int32_t_s_s((((safe_mod_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(g_37, ((*l_267) = (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((g_265 = l_263) != &l_81[4][6]) != (*g_36)), l_266)), p_72.f2))))), g_168)), 1UL)), p_74)) <= g_168) | 0UL), p_73)))) < g_248.f3.f0)))), p_71)), g_248.f3.f1));
                    if ((*g_36))
                        break;
                    (**g_265) = (((*l_271) = l_266) < ((safe_add_func_int32_t_s_s(l_274, (safe_lshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((p_72.f1 > (safe_rshift_func_int16_t_s_s((-10L), 14))), 4294967288UL)) && (p_72.f0 == (((safe_mul_func_uint8_t_u_u((*l_79), g_204.f2)) ^ 65531UL) < g_25[0][0]))), g_248.f3.f0)))) , (**l_263)));
                    l_285 = l_285;
                    g_295++;
                }
                else
                { 
                    int64_t *l_299 = (void*)0;
                    int64_t *l_300 = &g_86;
                    int32_t l_301[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    uint8_t *l_308 = &l_298.f1.f0;
                    int i;
                    l_301[1] |= ((*l_79) |= ((l_298 , p_72.f0) > ((*l_300) |= 0x41C5E05B46385D5ELL)));
                    --g_303[2][1];
                    l_301[2] = (((safe_rshift_func_uint8_t_u_u(251UL, (0L <= (--(*l_308))))) || 1UL) >= (safe_add_func_uint8_t_u_u(g_248.f3.f2, (l_301[4] | ((l_313 , (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_73, g_47.f0)), 3)) <= g_303[2][1]), (*l_79)))) | 4UL)))));
                    (*g_36) = (!(*g_36));
                }
                for (p_72.f4 = 3; (p_72.f4 >= 0); p_72.f4 -= 1)
                { 
                    int64_t *l_330[3][3] = {{(void*)0,(void*)0,(void*)0},{&g_86,&g_86,&g_86},{(void*)0,(void*)0,(void*)0}};
                    int32_t l_331 = 0xF4C45D1DL;
                    uint8_t *l_334 = &l_313.f1;
                    int32_t l_335 = 0xF60E3B9EL;
                    uint64_t l_336 = 0x627F55DE8ABE574FLL;
                    int i, j;
                    (**l_263) = ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_74, l_327)), ((*g_36) && (((void*)0 == l_328) == ((l_331 = g_86) & (((*l_334) = (safe_lshift_func_uint16_t_u_s(g_248.f5, p_74))) < l_335)))))) >= g_86), 0x2E7AL)) | l_336);
                }
                if (((l_337[4] , (void*)0) != (void*)0))
                { 
                    int16_t l_346 = 0x31C4L;
                    int32_t *l_347 = &l_188;
                    (*l_79) = ((safe_rshift_func_uint16_t_u_u(g_77[0], ((*g_208) & (((safe_rshift_func_uint8_t_u_u(((g_92.f0 && g_248.f4) < ((p_73 | (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(((0xF19382C4D3541622LL & l_346) < 1L), 3)) ^ l_298.f4) && p_72.f2), p_72.f3))) , 0x9C17E8EA873BF147LL)), 1)) > 18446744073709551615UL) , l_346)))) == g_248.f4);
                    return (*g_265);
                }
                else
                { 
                    (**l_263) ^= ((void*)0 != (*g_207));
                }
                l_288 |= ((**g_207) & ((0x37C1L || (safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((((*l_352) = (0xE8148235L >= p_71)) ^ g_204.f0) < (((safe_rshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s((((p_72.f2 ^ g_204.f0) <= l_298.f3.f2) == (**l_263)), l_298.f3.f0)) | p_72.f0), 14)) < p_72.f2) && l_298.f2)), p_73)), p_74))) , (**l_263)));
                for (l_274 = 0; (l_274 <= 3); l_274 += 1)
                { 
                    (*g_36) ^= l_298.f3.f3;
                    (*g_36) |= 0xEF1719A4L;
                    (**g_265) = (**g_265);
                }
            }
            return (*g_265);
        }
        for (g_83 = 20; (g_83 == 49); g_83 = safe_add_func_uint64_t_u_u(g_83, 3))
        { 
            int32_t l_359 = 0x42057687L;
            int32_t l_363 = 0x93790DA8L;
            int32_t l_364 = (-1L);
            int32_t l_366[7] = {0L,0L,0L,0L,0L,0L,0L};
            int64_t *l_384 = &g_86;
            uint32_t l_397 = 18446744073709551615UL;
            int8_t *l_398 = &l_242.f6;
            int8_t *l_399[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_399[i][j] = (void*)0;
            }
            g_368++;
            l_364 = ((((g_204 , (safe_rshift_func_uint16_t_u_u(65535UL, (((safe_div_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s(((*l_384) = (((~((*g_207) != (g_378 = (*g_207)))) && (g_168 &= (l_379 , g_83))) == (safe_sub_func_int64_t_s_s((((safe_div_func_int8_t_s_s((g_77[0] >= 0x5462L), 0x29L)) | p_72.f3) , 0x1F313769372414C6LL), (-8L))))), (**g_207))) , 0xAE327D8690E24ADBLL) | 1L), g_87)) >= 0xBD07L) <= p_72.f0)))) , p_72.f1) && l_364) , 0x755BE2ACL);
            for (p_71 = 0; (p_71 <= 2); p_71++)
            { 
                if (l_364)
                    break;
                if ((*g_36))
                    break;
                if (p_72.f1)
                    goto lbl_189;
                (**g_265) = (*g_36);
            }
            (*g_36) = (g_168 != ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((*g_208), l_366[4])), (g_400 &= ((safe_lshift_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(((g_248.f5 & (safe_mul_func_int8_t_s_s((l_397 | 0x07FBC510959B6667LL), ((*l_398) = l_359)))) != (**g_207)), 2L)) ^ g_11) < (*l_79)), 2)) , p_72.f1)))) < 8L));
            if ((*g_36))
                break;
        }
    }
    return (*g_265);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_25[i][j], "g_25[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_47.f1, "g_47.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_77[i], "g_77[i]", print_hash_value);

    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_204.f0, "g_204.f0", print_hash_value);
    transparent_crc(g_204.f1, "g_204.f1", print_hash_value);
    transparent_crc(g_204.f2, "g_204.f2", print_hash_value);
    transparent_crc(g_204.f3, "g_204.f3", print_hash_value);
    transparent_crc(g_204.f4, "g_204.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_241[i][j][k].f0, "g_241[i][j][k].f0", print_hash_value);
                transparent_crc(g_241[i][j][k].f1, "g_241[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_248.f0, "g_248.f0", print_hash_value);
    transparent_crc(g_248.f1.f0, "g_248.f1.f0", print_hash_value);
    transparent_crc(g_248.f2, "g_248.f2", print_hash_value);
    transparent_crc(g_248.f3.f0, "g_248.f3.f0", print_hash_value);
    transparent_crc(g_248.f3.f1, "g_248.f3.f1", print_hash_value);
    transparent_crc(g_248.f3.f2, "g_248.f3.f2", print_hash_value);
    transparent_crc(g_248.f3.f3, "g_248.f3.f3", print_hash_value);
    transparent_crc(g_248.f3.f4, "g_248.f3.f4", print_hash_value);
    transparent_crc(g_248.f4, "g_248.f4", print_hash_value);
    transparent_crc(g_248.f5, "g_248.f5", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_303[i][j], "g_303[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_365, "g_365", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_367[i][j][k], "g_367[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_486.f0, "g_486.f0", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_571[i][j][k].f0, "g_571[i][j][k].f0", print_hash_value);
                transparent_crc(g_571[i][j][k].f1, "g_571[i][j][k].f1", print_hash_value);
                transparent_crc(g_571[i][j][k].f2, "g_571[i][j][k].f2", print_hash_value);
                transparent_crc(g_571[i][j][k].f3, "g_571[i][j][k].f3", print_hash_value);
                transparent_crc(g_571[i][j][k].f4, "g_571[i][j][k].f4", print_hash_value);
                transparent_crc(g_571[i][j][k].f5, "g_571[i][j][k].f5", print_hash_value);
                transparent_crc(g_571[i][j][k].f6, "g_571[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(g_591.f0, "g_591.f0", print_hash_value);
    transparent_crc(g_591.f1, "g_591.f1", print_hash_value);
    transparent_crc(g_591.f2, "g_591.f2", print_hash_value);
    transparent_crc(g_591.f3, "g_591.f3", print_hash_value);
    transparent_crc(g_591.f4, "g_591.f4", print_hash_value);
    transparent_crc(g_591.f5, "g_591.f5", print_hash_value);
    transparent_crc(g_591.f6, "g_591.f6", print_hash_value);
    transparent_crc(g_593.f0, "g_593.f0", print_hash_value);
    transparent_crc(g_593.f1, "g_593.f1", print_hash_value);
    transparent_crc(g_593.f2, "g_593.f2", print_hash_value);
    transparent_crc(g_593.f3, "g_593.f3", print_hash_value);
    transparent_crc(g_593.f4, "g_593.f4", print_hash_value);
    transparent_crc(g_593.f5, "g_593.f5", print_hash_value);
    transparent_crc(g_593.f6, "g_593.f6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_679[i], "g_679[i]", print_hash_value);

    }
    transparent_crc(g_683, "g_683", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_718[i], "g_718[i]", print_hash_value);

    }
    transparent_crc(g_837.f0, "g_837.f0", print_hash_value);
    transparent_crc(g_837.f1, "g_837.f1", print_hash_value);
    transparent_crc(g_837.f2, "g_837.f2", print_hash_value);
    transparent_crc(g_837.f3, "g_837.f3", print_hash_value);
    transparent_crc(g_837.f4, "g_837.f4", print_hash_value);
    transparent_crc(g_1072, "g_1072", print_hash_value);
    transparent_crc(g_1206.f0, "g_1206.f0", print_hash_value);
    transparent_crc(g_1206.f1, "g_1206.f1", print_hash_value);
    transparent_crc(g_1206.f2, "g_1206.f2", print_hash_value);
    transparent_crc(g_1206.f3, "g_1206.f3", print_hash_value);
    transparent_crc(g_1206.f4, "g_1206.f4", print_hash_value);
    transparent_crc(g_1206.f5, "g_1206.f5", print_hash_value);
    transparent_crc(g_1206.f6, "g_1206.f6", print_hash_value);
    transparent_crc(g_1364, "g_1364", print_hash_value);
    transparent_crc(g_1552, "g_1552", print_hash_value);
    transparent_crc(g_1772, "g_1772", print_hash_value);
    transparent_crc(g_1804, "g_1804", print_hash_value);
    transparent_crc(g_1826, "g_1826", print_hash_value);
    transparent_crc(g_1912, "g_1912", print_hash_value);
    transparent_crc(g_1930, "g_1930", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1960[i][j][k], "g_1960[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2032.f0, "g_2032.f0", print_hash_value);
    transparent_crc(g_2032.f1, "g_2032.f1", print_hash_value);
    transparent_crc(g_2032.f2, "g_2032.f2", print_hash_value);
    transparent_crc(g_2032.f3, "g_2032.f3", print_hash_value);
    transparent_crc(g_2032.f4, "g_2032.f4", print_hash_value);
    transparent_crc(g_2138, "g_2138", print_hash_value);
    transparent_crc(g_2150, "g_2150", print_hash_value);
    transparent_crc(g_2340.f0, "g_2340.f0", print_hash_value);
    transparent_crc(g_2340.f1.f0, "g_2340.f1.f0", print_hash_value);
    transparent_crc(g_2340.f2, "g_2340.f2", print_hash_value);
    transparent_crc(g_2340.f3.f0, "g_2340.f3.f0", print_hash_value);
    transparent_crc(g_2340.f3.f1, "g_2340.f3.f1", print_hash_value);
    transparent_crc(g_2340.f3.f2, "g_2340.f3.f2", print_hash_value);
    transparent_crc(g_2340.f3.f3, "g_2340.f3.f3", print_hash_value);
    transparent_crc(g_2340.f3.f4, "g_2340.f3.f4", print_hash_value);
    transparent_crc(g_2340.f4, "g_2340.f4", print_hash_value);
    transparent_crc(g_2340.f5, "g_2340.f5", print_hash_value);
    transparent_crc(g_2347.f0, "g_2347.f0", print_hash_value);
    transparent_crc(g_2411, "g_2411", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2486[i], "g_2486[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2629[i], "g_2629[i]", print_hash_value);

    }
    transparent_crc(g_2709, "g_2709", print_hash_value);
    transparent_crc(g_2759, "g_2759", print_hash_value);
    transparent_crc(g_2913, "g_2913", print_hash_value);
    transparent_crc(g_3222.f0, "g_3222.f0", print_hash_value);
    transparent_crc(g_3222.f1, "g_3222.f1", print_hash_value);
    transparent_crc(g_3311, "g_3311", print_hash_value);
    transparent_crc(g_3358, "g_3358", print_hash_value);
    transparent_crc(g_3466, "g_3466", print_hash_value);
    transparent_crc(g_3469, "g_3469", print_hash_value);
    transparent_crc(g_3544, "g_3544", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_3653[i], "g_3653[i]", print_hash_value);

    }
    transparent_crc(g_3676, "g_3676", print_hash_value);
    transparent_crc(g_3704, "g_3704", print_hash_value);
    transparent_crc(g_3749, "g_3749", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_3949[i][j][k], "g_3949[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_4048[i], "g_4048[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
