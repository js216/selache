// SPDX-License-Identifier: MIT
// cctest_csmith_aeaef63a.c --- cctest case csmith_aeaef63a (csmith seed 2930701882)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4cc21b07 */

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

// Options:   -s 2930701882 -o /tmp/csmith_gen_yks0bx51/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
   int32_t  f1;
   uint16_t  f2;
   uint32_t  f3;
   int8_t  f4;
   uint64_t  f5;
};

union U1 {
   int8_t  f0;
   uint64_t  f1;
   uint8_t  f2;
};


static int32_t g_16 = (-4L);
static int8_t g_20 = 0x65L;
static uint8_t g_52 = 255UL;
static int16_t g_60 = 0xBB4EL;
static struct S0 g_61[3] = {{-7L,0xE3C77D98L,65528UL,0x6275F98AL,-5L,18446744073709551615UL},{-7L,0xE3C77D98L,65528UL,0x6275F98AL,-5L,18446744073709551615UL},{-7L,0xE3C77D98L,65528UL,0x6275F98AL,-5L,18446744073709551615UL}};
static int64_t g_96 = 0x375EFDD83981A733LL;
static int32_t *g_121 = &g_61[0].f0;
static int32_t **g_120 = &g_121;
static const int32_t g_125 = 0x670F823FL;
static uint16_t g_158 = 0UL;
static uint16_t g_161 = 65535UL;
static uint32_t g_183 = 0xB71BD96BL;
static uint16_t *g_201 = &g_61[0].f2;
static int8_t g_209 = 0xD7L;
static uint8_t *g_222 = &g_52;
static uint8_t **g_221 = &g_222;
static struct S0 *g_224 = &g_61[1];
static struct S0 ** const g_223[5][7] = {{(void*)0,&g_224,(void*)0,(void*)0,&g_224,(void*)0,(void*)0},{&g_224,&g_224,&g_224,&g_224,&g_224,&g_224,&g_224},{&g_224,(void*)0,(void*)0,&g_224,(void*)0,(void*)0,&g_224},{(void*)0,&g_224,(void*)0,(void*)0,&g_224,(void*)0,(void*)0},{&g_224,&g_224,&g_224,&g_224,&g_224,&g_224,&g_224}};
static uint64_t g_238[3] = {0UL,0UL,0UL};
static uint8_t g_241 = 0xEDL;
static const int64_t g_280 = 1L;
static const int64_t *g_279 = &g_280;
static int8_t *g_287 = &g_20;
static int8_t **g_286 = &g_287;
static int32_t * const *g_293 = (void*)0;
static int32_t * const *g_294 = &g_121;
static int32_t g_327[3] = {(-1L),(-1L),(-1L)};
static uint32_t g_328 = 0x5A7F0FC9L;
static uint32_t g_340 = 3UL;
static int32_t ***g_354 = &g_120;
static int32_t ***g_357 = &g_120;
static int32_t g_389 = 0xA64C937BL;
static int16_t *g_427 = &g_60;
static int64_t g_452 = 1L;
static int32_t g_512 = (-1L);
static int32_t **** const *g_526 = (void*)0;
static int32_t g_555 = 0x4B6786FBL;
static int64_t g_556 = (-1L);
static uint32_t g_557[5] = {0UL,0UL,0UL,0UL,0UL};
static int32_t g_580 = 0xDCBBDC86L;
static uint64_t g_581[1][3] = {{0UL,0UL,0UL}};
static uint16_t g_586 = 65535UL;
static union U1 g_592 = {0xB0L};
static int64_t g_629 = 0L;
static uint8_t g_631[2] = {255UL,255UL};
static int16_t g_699[6][2] = {{0x22D4L,0x22D4L},{0x22D4L,0x22D4L},{0x22D4L,0x22D4L},{0x22D4L,0x22D4L},{0x22D4L,0x22D4L},{0x22D4L,0x22D4L}};
static int32_t g_701 = (-7L);
static int32_t g_721[6][2] = {{1L,0x48674C67L},{(-5L),0x256DE71FL},{0x48674C67L,0x256DE71FL},{(-5L),0x48674C67L},{1L,1L},{1L,0x48674C67L}};
static int16_t g_722 = 0x5F09L;
static int64_t g_723 = 0xBFD8D1D5FBB19E27LL;
static uint16_t g_724 = 0UL;
static int16_t g_731 = (-9L);
static uint32_t g_795 = 0x209FA9CFL;
static uint64_t *g_826 = &g_238[2];
static uint64_t **g_825 = &g_826;
static uint64_t ***g_824[5][3] = {{&g_825,&g_825,&g_825},{&g_825,(void*)0,&g_825},{(void*)0,&g_825,&g_825},{&g_825,&g_825,&g_825},{(void*)0,(void*)0,&g_825}};
static uint16_t g_849 = 1UL;
static struct S0 ***g_876 = (void*)0;
static const uint64_t **g_986 = (void*)0;
static const uint64_t ***g_985 = &g_986;
static const uint64_t ****g_984[1] = {&g_985};
static union U1 *g_1040 = &g_592;
static int32_t g_1061 = 1L;
static uint16_t g_1062[2][2][4] = {{{1UL,65534UL,0x1CFDL,7UL},{65527UL,65534UL,65534UL,65527UL}},{{65534UL,65527UL,1UL,0x5A5CL},{65534UL,1UL,65534UL,0x1CFDL}}};
static uint64_t g_1076 = 0xDA425B48A0B02D3CLL;
static int16_t g_1142 = 0L;
static int16_t ****g_1184 = (void*)0;
static uint32_t g_1202 = 0x7DBDA8D8L;
static int16_t g_1209 = 0xEB42L;
static int32_t g_1211[4] = {0xEC3EE08FL,0xEC3EE08FL,0xEC3EE08FL,0xEC3EE08FL};
static struct S0 g_1268 = {3L,0x0AD1E101L,0x2C24L,18446744073709551615UL,0L,0x39A85D9AF923D255LL};
static int32_t g_1282 = (-5L);
static int8_t * const *g_1361 = &g_287;
static int8_t * const **g_1360 = &g_1361;
static int8_t * const ***g_1359 = &g_1360;
static int32_t g_1388[4] = {6L,6L,6L,6L};
static uint64_t g_1396[7] = {0xBBD2377D867A9251LL,0xBBD2377D867A9251LL,0xBBD2377D867A9251LL,0xBBD2377D867A9251LL,0xBBD2377D867A9251LL,0xBBD2377D867A9251LL,0xBBD2377D867A9251LL};
static union U1 **g_1412 = &g_1040;
static int64_t g_1607 = 1L;
static const int32_t g_1639 = 0L;
static const int32_t *g_1638 = &g_1639;
static uint32_t **g_1693 = (void*)0;
static uint32_t g_1698 = 5UL;
static uint64_t g_1739 = 1UL;
static struct S0 ****g_1785 = &g_876;
static struct S0 *****g_1784 = &g_1785;
static int16_t g_1834 = 0xAB19L;
static struct S0 * const * const *g_1866 = (void*)0;
static struct S0 * const * const **g_1865[2] = {&g_1866,&g_1866};
static int8_t g_1898[6][4][1] = {{{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L}},{{0x67L},{0x67L},{0x67L},{0x67L}}};
static uint8_t g_1937[7][5][3] = {{{0xA3L,255UL,0UL},{3UL,0xC9L,2UL},{0x6EL,253UL,1UL},{0x1AL,0xC9L,252UL},{0x1CL,255UL,0xF7L}},{{2UL,2UL,0xC9L},{1UL,0xEDL,0x9DL},{2UL,0xA3L,1UL},{0x9DL,255UL,0x1CL},{0xD8L,2UL,1UL}},{{0x16L,0UL,0x9DL},{0xC9L,0xE3L,0xC9L},{252UL,0xE3L,0xF7L},{0xF3L,0x28L,252UL},{0xE3L,0x1CL,1UL}},{{254UL,252UL,2UL},{0xE3L,1UL,0UL},{0xF3L,1UL,1UL},{252UL,1UL,0xEDL},{0xC9L,254UL,255UL}},{{0x16L,0xA3L,0x97L},{0xD8L,0xBAL,2UL},{0x9DL,0xA3L,255UL},{2UL,254UL,0xF3L},{1UL,1UL,0xA3L}},{{2UL,1UL,0x1AL},{0x1CL,1UL,2UL},{0x1AL,252UL,2UL},{0x6EL,0x1CL,0xE3L},{2UL,0xBAL,0xF3L}},{{252UL,255UL,252UL},{0xA3L,252UL,0xC9L},{0xA3L,253UL,0x16L},{252UL,254UL,0xD8L},{0xEDL,0x16L,0x9DL}}};
static int16_t g_2018[5] = {0L,0L,0L,0L,0L};
static int32_t **g_2085[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t g_2165[2][4] = {{0x6D1057AEL,0x6D1057AEL,0x6D1057AEL,0x6D1057AEL},{0x6D1057AEL,0x6D1057AEL,0x6D1057AEL,0x6D1057AEL}};
static struct S0 g_2314[6][2] = {{{1L,0xC792D2D8L,0UL,0x5546F655L,0xA8L,18446744073709551607UL},{0L,0xF6A3C9E6L,5UL,1UL,0xCBL,18446744073709551613UL}},{{1L,0xC792D2D8L,0UL,0x5546F655L,0xA8L,18446744073709551607UL},{0L,0xF6A3C9E6L,5UL,1UL,0xCBL,18446744073709551613UL}},{{1L,0xC792D2D8L,0UL,0x5546F655L,0xA8L,18446744073709551607UL},{0L,0xF6A3C9E6L,5UL,1UL,0xCBL,18446744073709551613UL}},{{1L,0xC792D2D8L,0UL,0x5546F655L,0xA8L,18446744073709551607UL},{0L,0xF6A3C9E6L,5UL,1UL,0xCBL,18446744073709551613UL}},{{1L,0xC792D2D8L,0UL,0x5546F655L,0xA8L,18446744073709551607UL},{0L,0xF6A3C9E6L,5UL,1UL,0xCBL,18446744073709551613UL}},{{1L,0xC792D2D8L,0UL,0x5546F655L,0xA8L,18446744073709551607UL},{0L,0xF6A3C9E6L,5UL,1UL,0xCBL,18446744073709551613UL}}};



static int16_t  func_1(void);
static struct S0  func_5(int64_t  p_6, int64_t  p_7, uint32_t  p_8);
static int16_t  func_11(const uint32_t  p_12, int8_t  p_13);
static int32_t  func_14(int64_t  p_15);
static uint8_t  func_23(uint32_t  p_24, uint32_t  p_25);
static uint16_t  func_30(int8_t * p_31, int32_t  p_32);
static int8_t * func_33(int8_t * const  p_34);
static union U1  func_37(uint16_t  p_38, struct S0  p_39, uint32_t  p_40);




static int16_t  func_1(void)
{ 
    uint32_t l_2 = 18446744073709551607UL;
    int16_t *l_2065 = (void*)0;
    int16_t *l_2066 = &g_699[5][1];
    int64_t *l_2067 = &g_1607;
    struct S0 l_2316 = {0xA0FC23BCL,0xEE0BF536L,0x6FC5L,0x7E734500L,0xBCL,18446744073709551607UL};
    l_2++;
    l_2316 = func_5(l_2, (safe_div_func_int64_t_s_s(((*l_2067) = (((*l_2066) |= func_11((func_14(g_16) < l_2), (((safe_sub_func_uint64_t_u_u(0xAFA6D5E346EE2BF7LL, 0xE770C99C55D4E778LL)) , &g_279) == &g_279))) || 0xB065L)), 1L)), l_2);
    return (*g_427);
}



static struct S0  func_5(int64_t  p_6, int64_t  p_7, uint32_t  p_8)
{ 
    uint32_t l_2075 = 0x0EA2F28CL;
    int32_t **l_2084 = &g_121;
    union U1 l_2086[6][1] = {{{0x4CL}},{{-3L}},{{-3L}},{{0x4CL}},{{-3L}},{{-3L}}};
    uint32_t *l_2088 = &g_61[0].f3;
    uint32_t * const *l_2087 = &l_2088;
    int32_t l_2094 = 0x8E6FE008L;
    int8_t l_2120 = (-6L);
    int32_t l_2170 = 0x90A5FFE8L;
    int32_t l_2172 = 0x74E5525FL;
    int32_t l_2173 = 7L;
    int32_t l_2175 = 0x9A2A9AE2L;
    int32_t l_2176 = 0x8F14AD7CL;
    int32_t l_2177 = (-1L);
    int32_t l_2178[4][5] = {{0xB6D8C5D8L,0xB6D8C5D8L,0xB6D8C5D8L,0xB6D8C5D8L,0xB6D8C5D8L},{(-7L),(-7L),(-7L),(-7L),(-7L)},{0xB6D8C5D8L,0xB6D8C5D8L,0xB6D8C5D8L,0xB6D8C5D8L,0xB6D8C5D8L},{(-7L),(-7L),(-7L),(-7L),(-7L)}};
    const int32_t **l_2214[6] = {&g_1638,&g_1638,&g_1638,&g_1638,&g_1638,&g_1638};
    const int32_t **l_2215[2][6] = {{&g_1638,&g_1638,&g_1638,&g_1638,&g_1638,&g_1638},{&g_1638,&g_1638,&g_1638,&g_1638,&g_1638,&g_1638}};
    int32_t l_2226 = 0L;
    struct S0 l_2242 = {1L,0x8C9CFD6AL,2UL,0UL,0x61L,0xD8ADE76607CEAE59LL};
    uint64_t **l_2253[3][6][7] = {{{&g_826,&g_826,&g_826,&g_826,(void*)0,&g_826,&g_826},{&g_826,&g_826,&g_826,(void*)0,&g_826,&g_826,(void*)0},{&g_826,&g_826,&g_826,&g_826,&g_826,&g_826,&g_826},{&g_826,&g_826,&g_826,&g_826,(void*)0,&g_826,&g_826},{&g_826,&g_826,&g_826,(void*)0,&g_826,&g_826,(void*)0},{&g_826,&g_826,&g_826,&g_826,&g_826,&g_826,&g_826}},{{&g_826,&g_826,&g_826,&g_826,(void*)0,&g_826,&g_826},{&g_826,&g_826,&g_826,(void*)0,&g_826,&g_826,(void*)0},{&g_826,&g_826,&g_826,&g_826,&g_826,&g_826,&g_826},{&g_826,&g_826,&g_826,&g_826,(void*)0,&g_826,&g_826},{&g_826,&g_826,&g_826,(void*)0,&g_826,&g_826,(void*)0},{&g_826,&g_826,&g_826,&g_826,&g_826,&g_826,&g_826}},{{&g_826,&g_826,&g_826,&g_826,(void*)0,&g_826,&g_826},{&g_826,&g_826,&g_826,(void*)0,&g_826,&g_826,(void*)0},{&g_826,&g_826,&g_826,&g_826,&g_826,&g_826,&g_826},{&g_826,&g_826,&g_826,&g_826,&g_826,(void*)0,(void*)0},{&g_826,&g_826,&g_826,&g_826,&g_826,(void*)0,&g_826},{&g_826,&g_826,&g_826,&g_826,&g_826,&g_826,&g_826}}};
    struct S0 *l_2260[4];
    struct S0 l_2313 = {6L,0x80BDF940L,0xAFDBL,1UL,-1L,1UL};
    struct S0 l_2315 = {1L,3L,1UL,9UL,0x60L,0xFE975FE5C601CAC2LL};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2260[i] = &g_61[0];
lbl_2254:
    for (g_183 = 0; (g_183 >= 51); g_183 = safe_add_func_int32_t_s_s(g_183, 7))
    { 
        uint8_t l_2074 = 0xDBL;
        const uint32_t l_2080 = 0x332765CBL;
        int32_t l_2081 = 3L;
        l_2081 = (safe_mul_func_int16_t_s_s((*g_427), (0x198C7D8AL ^ (((safe_div_func_int16_t_s_s(((p_6 <= ((l_2074 != (l_2074 | (((l_2075 < (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((0x141D4081BCDE7FCBLL >= p_8), (*g_222))), l_2080))) >= (*g_201)) , p_8))) , 5L)) , l_2074), p_6)) ^ (*g_279)) & l_2075))));
    }
    if ((safe_add_func_int64_t_s_s((p_6 < p_8), (((*g_354) = (*g_354)) == (g_2085[3] = l_2084)))))
    { 
        uint32_t * const **l_2089 = (void*)0;
        uint32_t * const **l_2090 = &l_2087;
        (*l_2090) = (l_2086[4][0] , l_2087);
    }
    else
    { 
        int32_t l_2091 = 0x1FC4068EL;
        int32_t *l_2092 = (void*)0;
        int32_t *l_2093[3][6] = {{&g_701,(void*)0,&g_701,(void*)0,&g_701,(void*)0},{&g_1388[0],(void*)0,&g_1388[0],(void*)0,&g_1388[0],(void*)0},{&g_701,(void*)0,&g_701,(void*)0,&g_701,(void*)0}};
        uint32_t l_2103 = 0xDA9DC81DL;
        struct S0 l_2119 = {0L,0xE8BAA820L,0x1A60L,8UL,-5L,0UL};
        int32_t l_2121 = 1L;
        int64_t l_2159 = 0xF889BD3755D40246LL;
        int8_t * const l_2160 = &g_1898[3][1][0];
        int8_t *l_2161[2];
        int64_t l_2179 = 0xC3488D60E3860371LL;
        int16_t l_2205 = (-1L);
        const int32_t *l_2228 = &g_1282;
        uint64_t **l_2234 = &g_826;
        int16_t **l_2280 = &g_427;
        int16_t ***l_2279 = &l_2280;
        int16_t ****l_2278 = &l_2279;
        uint64_t l_2308 = 0x31EDB7C120705B27LL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_2161[i] = &g_209;
        l_2094 = l_2091;
        if ((safe_add_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(l_2103, ((safe_lshift_func_uint8_t_u_s((*g_222), 6)) != (+((****g_1359) = ((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((-4L) == ((l_2094 = (((safe_mul_func_uint16_t_u_u(((*g_221) == (((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((l_2119 , l_2086[4][0].f0), p_8)) && l_2075) , (*g_222)), 0L)) != p_8) & p_7), 0x7DL)) | 0xD7A14C02145F9437LL) , (*g_221))), (*g_201))) >= p_7) != g_1834)) >= g_2018[0])) <= 0UL), 0x45B6EB13L)), p_7)) > g_2018[0])))))), 9UL)) < l_2120) && 0UL), 2UL)))
        { 
            uint16_t l_2122[6] = {0xCAF2L,0xC45EL,0xC45EL,0xCAF2L,0xC45EL,0xC45EL};
            int16_t *l_2158[2][3] = {{&g_699[0][0],&g_699[4][0],&g_699[4][0]},{&g_699[0][0],&g_699[4][0],&g_699[4][0]}};
            int64_t l_2162 = 0L;
            int32_t l_2167 = 0x4167C798L;
            int32_t l_2168 = 0x7ED7A1CFL;
            int32_t l_2174 = 0L;
            int32_t l_2180[7][7] = {{0L,0x1D59B732L,3L,0x93361EADL,0x72FE4043L,1L,0x72FE4043L},{0xD9064613L,1L,1L,0xD9064613L,(-1L),0xD9064613L,1L},{(-1L),(-7L),0L,0x93361EADL,0L,(-7L),(-1L)},{0x5E40A385L,1L,0x12F1AF63L,1L,0x5E40A385L,0x5E40A385L,1L},{0x38598588L,0x1D59B732L,0x38598588L,1L,0L,(-8L),0x72FE4043L},{1L,(-1L),0x12F1AF63L,0x12F1AF63L,(-1L),1L,(-1L)},{0x38598588L,1L,0L,(-8L),0x72FE4043L,(-8L),0L}};
            uint8_t l_2181 = 0UL;
            int i, j;
            l_2122[4] = l_2121;
            for (g_586 = (-13); (g_586 > 33); ++g_586)
            { 
                uint32_t l_2135 = 18446744073709551608UL;
                int32_t ****l_2137 = &g_354;
                int32_t *****l_2136 = &l_2137;
                int16_t * const *l_2146 = (void*)0;
                int64_t l_2147 = 0xF6711222093AF848LL;
                l_2147 &= ((0x1357FB33819A8183LL != ((***g_1360) <= ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((safe_div_func_int64_t_s_s(p_6, (safe_mul_func_int8_t_s_s(l_2135, ((void*)0 != l_2136))))) <= ((safe_sub_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((void*)0 != l_2146), 6)), p_7)), 0xC67F9B5C97CA1D69LL)) >= (**g_221)), p_7)) | 0xF42885F7L)) | (*g_222)), 8L)), 0xFF88L)), l_2122[4])) , (*g_222)))) | 1L);
            }
            l_2162 = (0xE8CDL != ((*g_427) = (p_8 > ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(65527UL, (0xB24DL && (g_1209 &= (*g_427))))), ((*g_826) ^= (((((((((*g_286) = func_33((l_2159 , l_2160))) != l_2161[1]) ^ 0x6BA1L) | 0UL) > 0xCA5BF597L) >= 0x51L) != 0xBDDDAE3952AD5E51LL) || (-1L))))), 18446744073709551609UL)), 5)), 0xB4CB0EB2L)) & (*g_427)))));
            for (g_556 = 0; (g_556 <= (-4)); g_556 = safe_sub_func_uint32_t_u_u(g_556, 1))
            { 
                int32_t l_2166 = 0xD17CC136L;
                int32_t l_2169[1];
                int32_t l_2171 = 1L;
                uint8_t *l_2202 = (void*)0;
                uint8_t *l_2203 = &g_631[1];
                uint8_t *l_2204 = &l_2086[4][0].f2;
                int i;
                for (i = 0; i < 1; i++)
                    l_2169[i] = 0x5EEF69EFL;
                ++l_2181;
                l_2180[2][1] = ((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((safe_unary_minus_func_int64_t_s((-2L))) & ((safe_sub_func_uint64_t_u_u(((*g_427) & ((safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((*g_279), (safe_lshift_func_int8_t_s_s((*g_287), ((l_2181 & ((*l_2204) = (safe_mod_func_uint8_t_u_u((((*l_2203) = (!4294967295UL)) == (l_2169[0] = (*g_222))), p_7)))) >= l_2166))))) ^ p_6), (*g_201))) < 0xB877L)), p_7)) , 0UL)), 18446744073709551609UL)), (*g_201))), 0xCDL)) || (****g_1359));
            }
        }
        else
        { 
            int64_t l_2210 = 1L;
            int16_t *l_2219 = &g_1834;
            int32_t l_2227 = 0xD59A3429L;
            const int32_t *l_2229 = &l_2175;
            uint8_t **l_2250[1];
            struct S0 l_2257[5][6][1] = {{{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}}},{{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}}},{{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}}},{{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}}},{{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}},{{-4L,1L,0xFB85L,0x704703B0L,-1L,0x729CD83A90F430BFLL}}}};
            uint32_t l_2307 = 1UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2250[i] = &g_222;
            l_2205 ^= l_2170;
            l_2177 &= (l_2173 |= (safe_sub_func_int16_t_s_s(((p_6 <= (++(*g_201))) != l_2210), 0xDE29L)));
            l_2227 &= (((!(*g_279)) < ((l_2215[0][1] = l_2214[5]) != (void*)0)) && (~((6L == (safe_lshift_func_uint16_t_u_u((((*l_2219) = ((*g_427) = 0L)) || (safe_add_func_int64_t_s_s((safe_add_func_uint16_t_u_u(p_8, (safe_rshift_func_uint8_t_u_u(((*g_279) , (*g_222)), 7)))), p_7))), p_8))) || l_2226)));
            l_2229 = l_2228;
            if ((l_2227 = 0x324F92B5L))
            { 
                uint8_t l_2247 = 0UL;
                uint32_t l_2251 = 4294967288UL;
                uint64_t ***l_2252[2][6][1] = {{{(void*)0},{&g_825},{(void*)0},{&l_2234},{&l_2234},{(void*)0}},{{&g_825},{(void*)0},{&l_2234},{&l_2234},{(void*)0},{&g_825}}};
                struct S0 l_2258 = {6L,2L,65529UL,0UL,0x65L,18446744073709551615UL};
                struct S0 **l_2259 = &g_224;
                int i, j, k;
                if ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((((((**g_286) |= ((l_2234 != (l_2253[1][3][2] = ((**g_221) , ((((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((+(((safe_add_func_uint16_t_u_u((l_2242 , ((((**g_221) ^= (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((l_2247 , ((1UL & (safe_add_func_int16_t_s_s((((p_7 | (l_2119 , (-1L))) | 0xD9L) & l_2247), (*g_201)))) > (*l_2228))) , l_2250[0]) == (void*)0), p_6)), (*g_201)))) <= (*l_2229)) ^ l_2251)), 3UL)) & 2L) >= p_7)), p_6)), p_8)) < p_8) > p_8) , (void*)0)))) <= (-8L))) | p_7) | l_2251) , l_2119) , 0L), 13)), p_6)))
                { 
                    if (l_2119.f5)
                        goto lbl_2254;
                    l_2172 &= (safe_lshift_func_uint16_t_u_s(0UL, 9));
                    l_2257[3][3][0] = l_2119;
                    (*l_2084) = &l_2227;
                }
                else
                { 
                    return l_2258;
                }
                l_2260[0] = ((*l_2259) = &l_2119);
            }
            else
            { 
                uint32_t **l_2296 = &l_2088;
                uint32_t ***l_2295 = &l_2296;
                int32_t l_2306 = 0xE1DF06BBL;
                struct S0 l_2311 = {0x95E4116CL,0x444A7C25L,65534UL,18446744073709551615UL,0x29L,18446744073709551615UL};
lbl_2312:
                if (p_6)
                { 
                    int16_t **l_2277 = &g_427;
                    int16_t ***l_2276 = &l_2277;
                    int16_t **** const l_2275 = &l_2276;
                    int64_t *l_2281[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_2282[3];
                    int32_t l_2283 = 0x7C53CEC3L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2282[i] = (-1L);
                    l_2283 ^= (l_2282[0] = (((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(0x47F899A9E315101ELL, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int64_t_s_s((((safe_add_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(p_7, 0xF758A633029761D6LL)) >= (****g_1359)), ((*g_427) = (p_8 != p_8)))) & (p_6 = ((l_2275 != l_2278) > g_1209))) >= (*l_2229)), 0UL)) != 0xFF129E6FL) , p_8), 3)), p_8)))), 6)) , p_6) == (*l_2229)));
                }
                else
                { 
                    return l_2119;
                }
                if ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_7, 2)), ((*l_2228) & (safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((&l_2075 == &l_2075), (g_1693 == ((*l_2295) = ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((**g_221))), (*l_2229))) , (void*)0))))), p_7))))))
                { 
                    int32_t l_2297 = 0x66223C65L;
                    uint32_t l_2298 = 6UL;
                    l_2298++;
                    l_2307 = (l_2306 = (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(l_2297, 3)), (~p_8))));
                    (*l_2084) = &l_2227;
                    --l_2308;
                }
                else
                { 
                    l_2311 = l_2257[3][3][0];
                    (**g_354) = &l_2306;
                }
                if (l_2120)
                    goto lbl_2312;
            }
        }
    }
    g_2314[3][1] = l_2313;
    return l_2315;
}



static int16_t  func_11(const uint32_t  p_12, int8_t  p_13)
{ 
    const uint16_t l_1624 = 0x4D2FL;
    uint16_t l_1629 = 0x8AD7L;
    uint8_t *l_1630[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_1631 = &g_795;
    struct S0 l_1632 = {1L,0L,4UL,1UL,0x46L,0xD58C4158DBD53106LL};
    int32_t l_1661 = 0xB815E3A4L;
    int32_t l_1662 = 0xFF688C46L;
    int32_t l_1674 = 1L;
    int16_t l_1690 = 0x8C0FL;
    int32_t **** const l_1694 = &g_354;
    int32_t l_1696 = 0x7440881EL;
    int16_t ***l_1697 = (void*)0;
    uint32_t l_1714[7][2] = {{0x170753FDL,0xF65B9112L},{0x170753FDL,0xF65B9112L},{0x170753FDL,0xF65B9112L},{0x170753FDL,0xF65B9112L},{0x170753FDL,0xF65B9112L},{0x170753FDL,0xF65B9112L},{0x170753FDL,0xF65B9112L}};
    int32_t l_1740[6][3] = {{(-5L),(-5L),(-7L)},{2L,2L,0x5DC822E1L},{(-5L),(-5L),(-7L)},{2L,2L,0x5DC822E1L},{(-5L),(-5L),(-7L)},{2L,2L,2L}};
    int8_t ** const * const l_1750 = &g_286;
    int8_t ** const * const *l_1749 = &l_1750;
    struct S0 **l_1751 = (void*)0;
    struct S0 ***l_1752 = &l_1751;
    int64_t *l_1753 = &g_723;
    uint16_t l_1754 = 0x6B2AL;
    struct S0 **l_1757 = &g_224;
    int32_t *l_1768 = &g_1268.f1;
    int32_t **l_1767 = &l_1768;
    uint64_t ****l_1774[5];
    int32_t l_1829[2][1];
    union U1 l_1980 = {0x10L};
    const int32_t l_1988 = 0x52BEB834L;
    int32_t l_2060 = 0x7D764E21L;
    int i, j;
    for (i = 0; i < 5; i++)
        l_1774[i] = &g_824[4][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1829[i][j] = (-1L);
    }
    if ((0xF23B04D3L | ((*l_1631) = (safe_mul_func_uint8_t_u_u(((((**g_221) & (((g_592.f2 = (safe_mul_func_uint8_t_u_u(0x12L, (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(l_1624, ((*g_121) = (0x9E6E2924L < 4294967288UL)))), (safe_div_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s((l_1624 == l_1629), 0x03L)) , 1UL) , g_1211[0]), 0x817BDD7CL))))))) | 2UL) && 0xF1L)) , (*g_1040)) , l_1629), p_12)))))
    { 
        union U1 *l_1635[3][5][6] = {{{&g_592,&g_592,&g_592,&g_592,(void*)0,&g_592},{&g_592,&g_592,&g_592,&g_592,(void*)0,&g_592},{&g_592,&g_592,&g_592,&g_592,&g_592,&g_592},{&g_592,&g_592,(void*)0,&g_592,&g_592,&g_592},{&g_592,&g_592,&g_592,&g_592,&g_592,&g_592}},{{&g_592,&g_592,&g_592,&g_592,(void*)0,&g_592},{&g_592,(void*)0,&g_592,&g_592,&g_592,&g_592},{&g_592,&g_592,&g_592,&g_592,&g_592,&g_592},{&g_592,&g_592,&g_592,(void*)0,&g_592,&g_592},{(void*)0,&g_592,&g_592,&g_592,&g_592,&g_592}},{{&g_592,&g_592,(void*)0,(void*)0,&g_592,&g_592},{&g_592,&g_592,&g_592,(void*)0,&g_592,&g_592},{(void*)0,&g_592,&g_592,&g_592,&g_592,&g_592},{(void*)0,(void*)0,&g_592,(void*)0,(void*)0,&g_592},{&g_592,&g_592,&g_592,(void*)0,&g_592,&g_592}}};
        const int32_t *l_1636 = &g_61[0].f0;
        union U1 ***l_1649 = (void*)0;
        int32_t l_1651 = (-6L);
        int32_t *l_1658 = &g_555;
        int32_t *l_1659 = &l_1632.f0;
        int32_t *l_1660[5];
        uint64_t l_1663[5] = {0UL,0UL,0UL,0UL,0UL};
        struct S0 ****l_1667 = &g_876;
        struct S0 *****l_1666 = &l_1667;
        struct S0 ****l_1669 = &g_876;
        struct S0 *****l_1668 = &l_1669;
        uint64_t l_1675 = 0x92277C5A6CE73E8CLL;
        uint32_t l_1699 = 0x37714ABEL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1660[i] = &g_555;
        if ((l_1624 , l_1629))
        { 
            l_1632 = l_1632;
        }
        else
        { 
            union U1 *l_1633 = &g_592;
            union U1 **l_1634[7][2] = {{(void*)0,&l_1633},{&l_1633,(void*)0},{&l_1633,&l_1633},{(void*)0,&l_1633},{&l_1633,(void*)0},{&l_1633,&l_1633},{(void*)0,&l_1633}};
            const int32_t **l_1637 = &l_1636;
            const int32_t **l_1640 = (void*)0;
            const int32_t *l_1642 = &g_1282;
            const int32_t **l_1641 = &l_1642;
            int32_t *l_1650[7] = {&g_580,&g_580,&g_580,&g_580,&g_580,&g_580,&g_580};
            int i, j;
            l_1635[0][2][5] = ((*g_1412) = l_1633);
            (*l_1641) = (g_1638 = ((*l_1637) = l_1636));
            l_1651 |= (p_12 ^ ((((((void*)0 != &g_223[2][2]) > (*l_1636)) | (l_1632.f0 = ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((*l_1636), (*l_1636))), ((void*)0 != l_1649))), (*l_1636))) || (**g_221)))) & 0x72L) <= (*g_201)));
            for (g_722 = 0; g_722 < 2; g_722 += 1)
            {
                g_631[g_722] = 0x74L;
            }
            for (g_60 = (-2); (g_60 <= (-6)); g_60--)
            { 
                int32_t * const l_1654 = &g_1211[2];
                int32_t **l_1655 = (void*)0;
                int32_t **l_1656[4][1];
                int32_t **l_1657 = &g_121;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1656[i][j] = (void*)0;
                }
                (*l_1657) = l_1654;
            }
        }
lbl_1678:
        ++l_1663[4];
        (*l_1668) = ((*l_1666) = &g_876);
        (*g_120) = (void*)0;
        for (g_701 = 0; (g_701 == (-2)); --g_701)
        { 
            int8_t l_1672 = (-7L);
            int32_t l_1673 = 0x4265B0DCL;
            struct S0 l_1695 = {0x7EA7E70AL,0xCDDB546CL,65528UL,0xE17D74ADL,0x8DL,0xB616EB4804E69CEBLL};
            int8_t l_1732 = 0L;
            ++l_1675;
            if (p_13)
            { 
                int16_t **l_1687 = (void*)0;
                int16_t ***l_1686 = &l_1687;
                int32_t l_1700 = (-4L);
                uint16_t *l_1701[3][5] = {{&l_1632.f2,&g_586,&g_1062[1][0][3],&g_1062[1][0][3],&g_586},{&l_1632.f2,&g_586,&g_1062[1][0][3],&g_1062[1][0][3],&g_586},{&l_1632.f2,&g_586,&g_1062[1][0][3],&g_1062[1][0][3],&g_586}};
                uint8_t **l_1713 = (void*)0;
                int i, j;
                for (g_1268.f3 = 0; g_1268.f3 < 2; g_1268.f3 += 1)
                {
                    for (g_1202 = 0; g_1202 < 2; g_1202 += 1)
                    {
                        for (l_1632.f4 = 0; l_1632.f4 < 4; l_1632.f4 += 1)
                        {
                            g_1062[g_1268.f3][g_1202][l_1632.f4] = 5UL;
                        }
                    }
                }
                if (g_592.f0)
                    goto lbl_1678;
                if ((((p_13 ^ ((+(g_1268.f2 = (safe_add_func_uint32_t_u_u(g_1607, (((*g_427) ^= (safe_rshift_func_uint8_t_u_s(((g_1698 &= ((safe_mul_func_uint16_t_u_u((l_1686 != (((((safe_sub_func_uint16_t_u_u(((*g_201) = l_1690), ((((((safe_mul_func_uint8_t_u_u(((g_1693 == g_1693) < (((void*)0 != l_1694) >= p_13)), p_13)) , l_1695) , (*g_221)) == (void*)0) , p_13) , l_1696))) && p_12) == (*l_1636)) & (*l_1659)) , l_1697)), p_12)) , 0x09E2642BL)) == l_1699), 6))) && l_1700))))) | l_1700)) < p_12) != 247UL))
                { 
                    union U1 l_1709[6][3] = {{{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L}},{{-6L},{-6L},{-6L}}};
                    int64_t l_1712[5][1][1];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1712[i][j][k] = 6L;
                        }
                    }
                    (*g_224) = (*g_224);
                    (*l_1659) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((*g_287), 6)), (((((((!((((*g_279) < (safe_add_func_uint8_t_u_u(((**g_221) = 251UL), ((((l_1709[4][0] , (((((g_1268.f4 ^ (safe_rshift_func_int8_t_s_s(l_1712[1][0][0], 4))) || (((((((0x75L ^ 0xB6L) ^ l_1700) | (**g_1361)) > 0xFD2AL) || l_1709[4][0].f2) ^ p_13) != 7L)) ^ 0xD1AB79BCL) | 0xD6F6L) <= (**g_1361))) && p_12) , p_13) , 0x1FL)))) & 1L) ^ p_12)) < (****g_1359)) , p_13) & p_13) < l_1712[1][0][0]) , l_1713) == (void*)0)));
                    --l_1714[2][0];
                }
                else
                { 
                    uint8_t l_1727 = 1UL;
                    int32_t l_1728 = (-10L);
                    l_1728 = (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((*l_1658), ((-9L) >= (safe_div_func_uint64_t_u_u(((p_12 , (p_12 > ((*g_279) & ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((*l_1631) = (((l_1700 = ((*g_826) = 9UL)) ^ ((0xDA84D2E6A42D8397LL <= 0xADD1599220BE83CCLL) >= p_13)) && l_1727)), p_13)), 1UL)) < 0xC6140A7AL)))) != 1L), (*g_279)))))), p_13));
                }
            }
            else
            { 
                struct S0 l_1729 = {0L,-9L,5UL,0x7A2681BFL,0x5BL,18446744073709551606UL};
                int32_t *l_1731 = (void*)0;
                l_1729 = l_1729;
                if ((*g_1638))
                { 
                    if (p_12)
                        break;
                    (*l_1658) ^= (safe_unary_minus_func_int64_t_s((*g_279)));
                    (*l_1659) |= l_1729.f0;
                }
                else
                { 
                    if (l_1729.f3)
                        break;
                }
                if (p_12)
                    continue;
                (***l_1694) = l_1731;
            }
            l_1732 = (*g_1638);
            l_1695.f0 |= p_12;
        }
    }
    else
    { 
        int16_t l_1737[4];
        int32_t l_1741 = 2L;
        int32_t l_1742 = 7L;
        int i;
        for (i = 0; i < 4; i++)
            l_1737[i] = 0x2BD9L;
        for (g_1268.f1 = 0; (g_1268.f1 < 1); g_1268.f1 = safe_add_func_uint32_t_u_u(g_1268.f1, 8))
        { 
            int8_t l_1738 = 2L;
            (*g_121) = (((((&p_12 == (void*)0) != (!((****l_1694) | (+p_12)))) , ((((l_1737[3] & ((l_1738 < l_1737[3]) <= p_13)) ^ 0x087EL) < g_1739) , 0L)) || 3UL) , 0x90298E93L);
            if (p_13)
                continue;
            return l_1740[3][0];
        }
        l_1742 = (l_1741 = ((***g_357) = (**g_294)));
        (*g_121) ^= ((safe_mod_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((*g_201), (safe_add_func_uint16_t_u_u(p_13, (*g_427))))) , p_13), ((*g_826) &= 18446744073709551610UL))) > 0x82ED7751L);
        (*g_121) |= ((p_13 , l_1749) != (void*)0);
    }
lbl_1940:
    (*l_1752) = l_1751;
    if ((((*l_1753) ^= (*g_279)) && (((l_1754 , p_12) ^ p_12) < (safe_rshift_func_int16_t_s_u(((l_1740[3][0] = ((&l_1632 != ((*l_1757) = &l_1632)) >= (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((!(((*l_1767) = &l_1696) == &g_327[0])), p_12)) >= (*g_201)), p_13)), 65531UL)), p_12)))) <= 4L), (*g_201))))))
    { 
        int64_t l_1769 = 0x9A715831D799122FLL;
        const uint8_t *l_1781 = &g_631[0];
        const uint8_t **l_1780 = &l_1781;
        int32_t l_1811 = 0x36B849F8L;
        uint32_t l_1847[6];
        struct S0 * const * const **l_1867 = &g_1866;
        uint16_t l_1886 = 1UL;
        struct S0 l_1901 = {0x9B4B59B3L,-5L,65529UL,0x9471DD06L,0L,18446744073709551607UL};
        uint32_t l_1928 = 0x67EADE38L;
        int32_t l_1936[2][7][3] = {{{(-1L),0xE4E2976DL,0xEA2A6086L},{0x1B976E0EL,0xDBCE2768L,0x1B976E0EL},{0x1B976E0EL,1L,(-1L)},{(-1L),(-1L),0x1B976E0EL},{(-1L),(-1L),0xEA2A6086L},{1L,1L,0x9AD451BDL},{(-1L),0xDBCE2768L,0x9AD451BDL}},{{(-1L),0xE4E2976DL,0xEA2A6086L},{0x1B976E0EL,0xDBCE2768L,0x1B976E0EL},{0x1B976E0EL,1L,(-1L)},{(-1L),(-1L),0x1B976E0EL},{(-1L),(-1L),0xEA2A6086L},{1L,1L,0x9AD451BDL},{(-1L),0xDBCE2768L,0L}}};
        int32_t **l_1952[5];
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1847[i] = 0xDFFB187FL;
        for (i = 0; i < 5; i++)
            l_1952[i] = &g_121;
        for (g_16 = 0; (g_16 <= 2); g_16 += 1)
        { 
            int32_t * const **l_1788[5];
            int32_t * const ***l_1787 = &l_1788[1];
            int32_t * const ****l_1786 = &l_1787;
            uint32_t l_1835[6];
            struct S0 l_1902[6] = {{0xD5E71552L,0x76075AD5L,1UL,0x39B19123L,-1L,0xE1ED7AC43428A47ELL},{0xD5E71552L,0x76075AD5L,1UL,0x39B19123L,-1L,0xE1ED7AC43428A47ELL},{0xD5E71552L,0x76075AD5L,1UL,0x39B19123L,-1L,0xE1ED7AC43428A47ELL},{0xD5E71552L,0x76075AD5L,1UL,0x39B19123L,-1L,0xE1ED7AC43428A47ELL},{0xD5E71552L,0x76075AD5L,1UL,0x39B19123L,-1L,0xE1ED7AC43428A47ELL},{0xD5E71552L,0x76075AD5L,1UL,0x39B19123L,-1L,0xE1ED7AC43428A47ELL}};
            int32_t l_1933 = (-10L);
            int i;
            for (i = 0; i < 5; i++)
                l_1788[i] = &g_294;
            for (i = 0; i < 6; i++)
                l_1835[i] = 4UL;
            l_1769 = 0xFA906645L;
            for (l_1769 = 0; (l_1769 <= 2); l_1769 += 1)
            { 
                uint64_t *****l_1775 = &l_1774[1];
                uint8_t *l_1806[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                uint8_t *l_1807 = &g_592.f2;
                int32_t l_1810 = 0x05129AF3L;
                int i;
                if ((safe_lshift_func_uint16_t_u_u(((*g_201) = (safe_mul_func_int8_t_s_s((((((*l_1775) = l_1774[4]) == (void*)0) > (safe_sub_func_uint32_t_u_u(((*l_1631) = ((g_238[g_16] | ((((safe_rshift_func_uint16_t_u_u((((void*)0 != l_1780) == (((safe_div_func_uint64_t_u_u((((g_1784 == (void*)0) , l_1786) != g_526), g_238[l_1769])) && 0xDDL) < 0xB6CAL)), 14)) , 1UL) ^ 0L) , g_238[l_1769])) & (-1L))), g_327[l_1769]))) | 1UL), p_12))), 1)))
                { 
                    int i, j;
                    l_1740[(l_1769 + 1)][l_1769] &= 0x744CDC49L;
                    if (p_12)
                        break;
                    l_1632.f0 |= ((+(((safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((((safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(g_1739, (safe_add_func_uint32_t_u_u(l_1740[(l_1769 + 1)][l_1769], ((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0x75L, (****g_1359))), (((safe_sub_func_uint64_t_u_u((((l_1806[3] = func_33((**g_1360))) != l_1807) == l_1740[(l_1769 + 1)][l_1769]), (*g_279))) == 8L) | l_1769))) && p_12))))) <= p_13) & (-1L)), 6)) < g_238[2]) , l_1740[(l_1769 + 1)][l_1769]) < g_238[g_16]), l_1740[(l_1769 + 1)][l_1769])), g_327[l_1769])) ^ 0xA0L) || p_13)) != l_1740[(l_1769 + 1)][l_1769]);
                }
                else
                { 
                    uint32_t l_1812 = 0x1D770EACL;
                    l_1740[0][2] = (safe_lshift_func_uint8_t_u_u(8UL, 7));
                    if (p_13)
                        continue;
                    ++l_1812;
                }
            }
            if ((safe_mod_func_int64_t_s_s((*g_279), (safe_div_func_int16_t_s_s(0xC747L, l_1769)))))
            { 
                uint8_t l_1826 = 0x9FL;
                int32_t l_1833[2];
                struct S0 l_1868[7][4][1] = {{{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{1L,0L,1UL,18446744073709551607UL,-3L,7UL}},{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{0xFE168386L,6L,65535UL,0x3827C030L,-4L,1UL}}},{{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{1L,0L,1UL,18446744073709551607UL,-3L,7UL}},{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{0xFE168386L,6L,65535UL,0x3827C030L,-4L,1UL}}},{{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{1L,0L,1UL,18446744073709551607UL,-3L,7UL}},{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{0xFE168386L,6L,65535UL,0x3827C030L,-4L,1UL}}},{{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{1L,0L,1UL,18446744073709551607UL,-3L,7UL}},{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{0xFE168386L,6L,65535UL,0x3827C030L,-4L,1UL}}},{{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{1L,0L,1UL,18446744073709551607UL,-3L,7UL}},{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{0xFE168386L,6L,65535UL,0x3827C030L,-4L,1UL}}},{{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{1L,0L,1UL,18446744073709551607UL,-3L,7UL}},{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{0xFE168386L,6L,65535UL,0x3827C030L,-4L,1UL}}},{{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{1L,0L,1UL,18446744073709551607UL,-3L,7UL}},{{0xBBD0C644L,1L,0x1A05L,0xD80E7AE6L,-1L,18446744073709551611UL}},{{0xFE168386L,6L,65535UL,0x3827C030L,-4L,1UL}}}};
                uint32_t *l_1872 = &l_1835[3];
                uint32_t *l_1875 = (void*)0;
                uint32_t *l_1876 = &l_1868[3][0][0].f3;
                uint16_t *l_1881 = &l_1629;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1833[i] = 0x62A3A211L;
                if ((!(safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((5UL & p_12) || (safe_mod_func_uint8_t_u_u(8UL, (((**g_1361) ^= p_12) & (((l_1826 , (safe_lshift_func_uint8_t_u_u((((*g_279) ^ ((l_1769 && (*g_826)) & (-1L))) , 253UL), (**g_221)))) == l_1829[0][0]) || 0x95A68C7CL))))) > (*g_427)), 3)), g_452))))
                { 
                    l_1811 = l_1826;
                    if (p_13)
                        break;
                    return p_12;
                }
                else
                { 
                    uint32_t l_1830 = 1UL;
                    ++l_1830;
                    --l_1835[1];
                }
                if ((l_1847[0] ^= (safe_unary_minus_func_int32_t_s((l_1811 < (safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((((p_12 ^ ((****g_1359) = (safe_lshift_func_uint16_t_u_u(((*g_201) = ((((255UL != ((*g_279) && ((safe_unary_minus_func_uint32_t_u(l_1833[0])) < 0x0E946DA572AFEB8DLL))) || ((+(((0x0032E9ABL != p_12) < 0xC0L) & l_1826)) >= 0L)) | 0xF838L) | l_1833[1])), g_631[0])))) , l_1833[0]) , (-6L)), p_12)) && 0L), p_13)))))))
                { 
                    l_1833[0] = ((g_389 | (g_328 , (((0UL && (safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((!(safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint64_t_u_u(l_1833[0], (safe_rshift_func_int8_t_s_u(p_13, ((l_1833[0] | ((safe_mul_func_uint8_t_u_u(((((l_1867 = g_1865[0]) == (*g_1784)) | 0x0B81403DL) == p_12), (*g_287))) <= p_12)) , 255UL))))) >= p_12) & p_13), 2)), (*g_287)))), p_12)) & 0xE5E8L), 0xAD0DL)) | p_12), (*g_279)))) && 0xB137E0BAL) , 2L))) != g_586);
                    (*g_224) = l_1868[3][0][0];
                    l_1632.f0 |= (g_512 = p_12);
                }
                else
                { 
                    struct S0 l_1869 = {0xE46AF2CAL,3L,65530UL,0x4862C623L,0x9AL,1UL};
                    (**l_1757) = l_1869;
                }
                if (l_1754)
                    goto lbl_1941;
                g_1898[3][1][0] &= (safe_add_func_int32_t_s_s((((*l_1876) |= (--(*l_1872))) , ((safe_mul_func_uint16_t_u_u(((*l_1881) ^= (++(*g_201))), (safe_add_func_uint16_t_u_u((l_1811 = (((**g_1784) = &l_1757) == (*l_1867))), (safe_add_func_uint8_t_u_u(((l_1886 | (safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((+(safe_div_func_uint16_t_u_u(p_13, p_13))), 14)), (safe_mul_func_uint8_t_u_u(((((&g_1360 != (void*)0) && 0x82617175L) || g_16) <= (**g_1361)), (*g_287))))), 1L))) >= p_12), (***g_1360))))))) <= p_13)), 0xE6FE30AEL));
            }
            else
            { 
                int16_t l_1906 = 0x1F25L;
                union U1 ***l_1915 = &g_1412;
                int32_t l_1916[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1916[i] = (-1L);
                if (((safe_add_func_int16_t_s_s((((l_1902[4] = l_1901) , &g_984[0]) != &g_984[0]), ((*g_427) = (p_12 <= (((!(safe_sub_func_uint64_t_u_u((((**g_221) > l_1906) && 0x97L), 1L))) == 0x18A1EDB8L) || (****g_1359)))))) != 0x03A8820CL))
                { 
                    int16_t l_1917 = 0x647AL;
                    int8_t l_1929[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1929[i] = 0xE6L;
                    g_1211[3] = (l_1917 ^= ((safe_mul_func_uint8_t_u_u(((**g_221) ^= (safe_mul_func_int16_t_s_s(((l_1916[4] ^= (((safe_div_func_uint64_t_u_u((5UL == p_13), 0x47F1E3F0FD39BB76LL)) & ((safe_add_func_int64_t_s_s(0x66755C1DBACD8170LL, 1UL)) != (((((((void*)0 == &l_1901) == 18446744073709551615UL) , l_1915) != &g_1412) <= 65527UL) , 0x890C772CC72267C7LL))) , (*g_427))) || p_13), l_1906))), 255UL)) <= p_12));
                    l_1929[1] |= (func_37(((safe_lshift_func_int16_t_s_u(p_13, ((safe_add_func_uint8_t_u_u(((**g_221) = p_12), (((((l_1906 , (safe_rshift_func_uint16_t_u_s((*g_201), 10))) == (*g_427)) && (l_1928 = (((safe_sub_func_uint8_t_u_u((((**g_286) = p_12) , ((safe_div_func_uint32_t_u_u((&g_294 == (void*)0), p_13)) == p_13)), p_13)) != p_13) && l_1901.f5))) <= p_13) , (**g_1361)))) || 0x1CL))) , 0x82FAL), l_1902[0], g_280) , p_12);
                }
                else
                { 
                    uint16_t l_1930[4] = {0xDD39L,0xDD39L,0xDD39L,0xDD39L};
                    int32_t l_1934 = (-1L);
                    int32_t l_1935[5] = {0x26EB8165L,0x26EB8165L,0x26EB8165L,0x26EB8165L,0x26EB8165L};
                    int i;
                    (***l_1694) = &l_1916[4];
                    if (p_12)
                        break;
                    l_1902[3] = l_1902[2];
                    --l_1930[1];
                    g_1937[6][3][1]++;
                }
            }
        }
lbl_1941:
        if (l_1901.f2)
            goto lbl_1940;
        l_1740[3][0] |= (safe_div_func_uint8_t_u_u((((****g_1359) = (safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(0xA903L, 10)) | ((((safe_div_func_int64_t_s_s((((((*g_354) = (**l_1694)) == l_1952[4]) != (((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((l_1952[3] == (void*)0) , ((*g_1638) , ((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(((*g_427) = 9L), 12)), l_1754)) & (*g_201)))), p_12)) == 255UL), p_12)) > (***g_1360)) > p_13)) != p_12), 3UL)) >= 0x60D5F0B0692DB1F0LL) & g_1142) || g_1268.f5)), 0x5960L)) >= (**g_221)), 0xAB73E802L))) & (*g_222)), p_13));
        (*g_120) = &l_1662;
        (***l_1694) = (*g_294);
    }
    else
    { 
        uint32_t l_1961 = 0xD9993BEAL;
        return l_1961;
    }
    (*g_224) = (**l_1757);
    if ((safe_mod_func_int16_t_s_s(0x417FL, (*g_201))))
    { 
        const uint32_t l_1966 = 0xF418147DL;
        for (g_1268.f4 = 0; (g_1268.f4 <= (-18)); g_1268.f4 = safe_sub_func_int32_t_s_s(g_1268.f4, 7))
        { 
            (**g_294) &= (l_1966 != p_12);
            if ((****l_1694))
                break;
            (**g_357) = (***l_1694);
            return p_12;
        }
    }
    else
    { 
        uint16_t l_1967 = 65526UL;
        int32_t *l_1970 = &g_580;
        int32_t l_1993 = 0x970F6855L;
        int32_t l_1995 = 0x0E9F22A2L;
        int32_t l_1996 = (-1L);
        int32_t l_1997 = 0L;
        int32_t l_2007[6] = {0L,0xCC15877BL,0xCC15877BL,0L,0xCC15877BL,0xCC15877BL};
        const uint64_t ***l_2032 = (void*)0;
        int32_t *l_2034 = &g_1268.f0;
        uint8_t *l_2057 = &g_631[0];
        uint32_t l_2061 = 4UL;
        uint32_t l_2064 = 0x78365F90L;
        int i;
        for (g_1076 = 0; (g_1076 <= 0); g_1076 += 1)
        { 
            union U1 *l_1981 = &l_1980;
            int32_t l_1987 = 0x28649524L;
            int32_t *l_1989 = &g_555;
            int32_t l_1994 = 3L;
            int32_t l_1998 = (-1L);
            int32_t l_1999 = 0x604B8C99L;
            int32_t l_2002 = 7L;
            int32_t l_2003 = (-1L);
            int32_t l_2004 = (-1L);
            int32_t l_2005 = 0x9F28924CL;
            int32_t l_2006 = 0x8014E09AL;
            int32_t l_2008 = (-4L);
            int32_t l_2009 = 0x132B3C36L;
            int32_t l_2010 = 0x43A3ADDFL;
            int32_t l_2011 = 1L;
            int32_t l_2012 = 0x6322EDB5L;
            int32_t l_2013 = 4L;
            int32_t l_2015 = 0x70B5FF19L;
            int32_t l_2016[6];
            uint16_t l_2019 = 0x46A5L;
            struct S0 l_2033 = {0xAD25369EL,0x33228A47L,8UL,0x3782C053L,0x17L,0x9F0D6C4369578DD8LL};
            struct S0 **l_2035 = &g_224;
            int16_t l_2059[2][6];
            int i, j;
            for (i = 0; i < 6; i++)
                l_2016[i] = 0xC1F15B62L;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 6; j++)
                    l_2059[i][j] = (-1L);
            }
            --l_1967;
            l_1970 = (void*)0;
            (***g_357) ^= (safe_lshift_func_int8_t_s_u(p_12, 2));
            (*g_121) ^= 1L;
            if (((*l_1989) ^= ((safe_div_func_int32_t_s_s((((((p_12 , ((~((((((safe_sub_func_uint8_t_u_u(((*g_201) > ((safe_lshift_func_uint16_t_u_u(((((*g_1040) = l_1980) , (l_1981 == (void*)0)) , (+((((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_1987 = 0xF923FBB8L), ((**l_1694) == (*g_354)))), (****l_1694))) | 248UL) || (****l_1694)) == 1UL))), 15)) || 6UL)), p_12)) != (*g_1638)) , (*g_427)) && (*g_427)) ^ l_1988) , 4294967294UL)) > 0xEBL)) && p_13) ^ (****l_1694)) >= (*g_201)) > (****l_1694)), 1UL)) <= p_12)))
            { 
                int64_t l_1990 = 0L;
                int32_t l_1992 = 0x526C0594L;
                int32_t l_2000 = 0x1451499CL;
                int32_t l_2001[7];
                int8_t l_2014 = 0xE4L;
                int64_t l_2017 = (-6L);
                struct S0 l_2022 = {-1L,0x482C8687L,5UL,0xAC98C969L,0x0BL,1UL};
                const int32_t *l_2024 = (void*)0;
                int i;
                for (i = 0; i < 7; i++)
                    l_2001[i] = 0x3DC80AB4L;
                for (g_1607 = 0; (g_1607 <= 0); g_1607 += 1)
                { 
                    int32_t *l_1991[4] = {&g_1211[0],&g_1211[0],&g_1211[0],&g_1211[0]};
                    const int32_t **l_2023[3][5] = {{&g_1638,&g_1638,&g_1638,&g_1638,&g_1638},{&g_1638,&g_1638,&g_1638,&g_1638,&g_1638},{&g_1638,&g_1638,&g_1638,&g_1638,&g_1638}};
                    uint8_t l_2027 = 247UL;
                    int i, j;
                    l_2019++;
                }
            }
            else
            { 
                int8_t **l_2036[7][1] = {{&g_287},{&g_287},{&g_287},{&g_287},{&g_287},{&g_287},{&g_287}};
                struct S0 l_2056 = {0xD8169625L,3L,65533UL,0x88C4B662L,0xF5L,1UL};
                int32_t *l_2058[5][1];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2058[i][j] = &l_1998;
                }
                (**g_357) = l_2034;
                if ((((((*l_1752) = l_2035) == (void*)0) >= (((void*)0 != l_2036[6][0]) <= (**g_221))) != (((*g_201) ^ ((+(safe_rshift_func_int8_t_s_s((****g_1359), (***g_1360)))) || (*g_222))) == (-6L))))
                { 
                    struct S0 l_2040[4] = {{0x6F518870L,0L,0x02B6L,0xD9271806L,0x85L,0x753118234AD74374LL},{0x6F518870L,0L,0x02B6L,0xD9271806L,0x85L,0x753118234AD74374LL},{0x6F518870L,0L,0x02B6L,0xD9271806L,0x85L,0x753118234AD74374LL},{0x6F518870L,0L,0x02B6L,0xD9271806L,0x85L,0x753118234AD74374LL}};
                    int i;
                    l_2040[0] = ((**l_1757) = l_2040[2]);
                    return p_12;
                }
                else
                { 
                    int8_t l_2051 = 0xE2L;
                    (****l_1694) = (0xECD7L || p_13);
                    if (p_13)
                        continue;
                    (*l_1989) |= (safe_mod_func_int64_t_s_s((((((*g_121) = (safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((!((safe_rshift_func_uint16_t_u_s(0x7C7BL, 13)) == (((+l_2051) <= (((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((*g_201), (0x61BFA64CL > 0x1056CF94L))), (((p_12 ^ ((l_2056 , l_2057) != (void*)0)) <= l_2051) && p_12))) || (****l_1694)) || p_12)) >= (-1L)))), l_2051)), 5))) ^ p_12) || (*g_427)) || (****g_1359)), p_13));
                }
                --l_2061;
                return l_2064;
            }
        }
    }
    return (*g_427);
}



static int32_t  func_14(int64_t  p_15)
{ 
    int8_t *l_19[2][6] = {{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20}};
    int32_t l_21[3];
    int32_t l_22 = (-9L);
    int16_t *l_1342 = &g_731;
    int32_t l_1603[1][3];
    int32_t l_1604 = 0x7CD74FD8L;
    int32_t *l_1605 = &l_1603[0][1];
    int32_t *l_1606[2];
    uint8_t l_1608 = 0x05L;
    uint8_t l_1611 = 0x67L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_21[i] = 0xE434392FL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1603[i][j] = 0x5E3556D5L;
    }
    for (i = 0; i < 2; i++)
        l_1606[i] = (void*)0;
    l_1604 ^= (safe_div_func_uint64_t_u_u(((l_1603[0][0] = ((l_22 = (l_21[1] = g_16)) && func_23((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((p_15 , g_16), (((*g_201) = func_30(func_33(&g_20), (safe_mod_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((&g_1209 == l_1342), l_21[1])) && l_22), 0x950176294C396B0FLL)))) <= p_15))), p_15)), g_1268.f1))) , l_21[1]), 0xFDB80AB984A91BC5LL));
    ++l_1608;
    --l_1611;
    return (***g_357);
}



static uint8_t  func_23(uint32_t  p_24, uint32_t  p_25)
{ 
    int8_t l_1423 = 8L;
    int32_t l_1426 = (-5L);
    int32_t l_1427 = 0xC1FE4307L;
    int32_t l_1428[7][5] = {{9L,9L,0xC522FA42L,0xF0512A62L,0L},{0x191AAA5EL,0L,0L,0x191AAA5EL,0x4F406241L},{0x06FCC2A4L,0xF0512A62L,0x5D31C71DL,0x5D31C71DL,0xF0512A62L},{0x4F406241L,0L,0L,5L,5L},{0x101BD5E7L,9L,0x101BD5E7L,0x5D31C71DL,0xC522FA42L},{(-9L),0x191AAA5EL,5L,0x191AAA5EL,(-9L)},{0x101BD5E7L,0x06FCC2A4L,9L,0xF0512A62L,9L}};
    uint32_t l_1429 = 0UL;
    uint64_t ***l_1444 = (void*)0;
    struct S0 **l_1483[3][6][2] = {{{(void*)0,(void*)0},{&g_224,(void*)0},{&g_224,&g_224},{&g_224,(void*)0},{&g_224,(void*)0},{(void*)0,(void*)0}},{{&g_224,(void*)0},{&g_224,&g_224},{&g_224,(void*)0},{&g_224,(void*)0},{(void*)0,(void*)0},{&g_224,(void*)0}},{{&g_224,&g_224},{&g_224,(void*)0},{&g_224,(void*)0},{(void*)0,(void*)0},{&g_224,(void*)0},{&g_224,&g_224}}};
    int64_t l_1499 = 0x770BCCA19C36B664LL;
    const int32_t *****l_1500 = (void*)0;
    struct S0 l_1501[3] = {{0xE27997A4L,0x58788299L,0x8EAEL,0x08A7B215L,0L,1UL},{0xE27997A4L,0x58788299L,0x8EAEL,0x08A7B215L,0L,1UL},{0xE27997A4L,0x58788299L,0x8EAEL,0x08A7B215L,0L,1UL}};
    int32_t *l_1502 = &g_1388[0];
    struct S0 l_1503 = {1L,0x561900B6L,65533UL,0xF7EAC1E8L,0x1BL,1UL};
    uint32_t **l_1515 = (void*)0;
    uint32_t *l_1517 = &g_340;
    uint32_t **l_1516 = &l_1517;
    uint32_t l_1522[1];
    int32_t l_1523 = 0xEDB6ABEFL;
    int32_t l_1524[1][7] = {{0L,0L,0L,0L,0L,0L,0L}};
    struct S0 **l_1527 = &g_224;
    int32_t ***l_1563 = (void*)0;
    struct S0 l_1597 = {0L,6L,0x473EL,0x4F9DBEAEL,0x74L,0x0D20E1019828384BLL};
    uint32_t l_1599 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1522[i] = 0x6C0A671AL;
    for (g_701 = 0; (g_701 > 11); g_701 = safe_add_func_int8_t_s_s(g_701, 6))
    { 
        int32_t *l_1424 = (void*)0;
        int32_t *l_1425[4][3][1] = {{{&g_1211[2]},{&g_1282},{&g_1211[2]}},{{&g_1211[2]},{&g_1282},{&g_1211[2]}},{{&g_1211[2]},{&g_1282},{&g_1211[2]}},{{&g_1211[2]},{&g_1282},{&g_1211[2]}}};
        uint64_t ***l_1443 = (void*)0;
        uint64_t l_1495 = 0x6766F9B6E23AF216LL;
        struct S0 **l_1496 = &g_224;
        int32_t *l_1498 = &g_61[0].f0;
        int i, j, k;
        --l_1429;
        for (g_340 = (-8); (g_340 > 8); g_340 = safe_add_func_uint8_t_u_u(g_340, 2))
        { 
            uint32_t l_1434 = 0UL;
            int32_t **** const l_1459 = &g_354;
            uint64_t l_1460[6][1][1] = {{{18446744073709551615UL}},{{3UL}},{{3UL}},{{3UL}},{{18446744073709551611UL}},{{3UL}}};
            int32_t l_1497 = 0xDCC1EB96L;
            int i, j, k;
        }
        l_1498 = (void*)0;
        return (**g_221);
    }
    (*l_1502) ^= (((****g_1359) < (func_37((g_526 == (((p_25 ^ (65535UL && 0xD069L)) , (l_1499 >= ((((((*g_224) = (*g_224)) , 0x32E0B4FCL) ^ 0x3DBD4FBEL) ^ p_25) < 0x2CL))) , l_1500)), l_1501[0], p_25) , (**g_221))) != p_24);
    if ((((*g_224) = l_1503) , ((((~(*l_1502)) , (safe_div_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((((((***g_354) &= (safe_add_func_int32_t_s_s((((safe_div_func_uint32_t_u_u((((*l_1516) = (void*)0) != &g_340), (p_24 , (((safe_unary_minus_func_int16_t_s(((((safe_div_func_int64_t_s_s((*g_279), (~(*l_1502)))) >= 0xB1D3L) ^ (-9L)) < l_1522[0]))) ^ (-3L)) || l_1523)))) < (**g_286)) ^ (*l_1502)), l_1524[0][4]))) | p_24) < (*l_1502)) & (*l_1502)), (*g_201))), 6L)) , l_1500) != g_526), (*g_201)))) ^ (*l_1502)) | 1L)))
    { 
        const uint32_t l_1528 = 4294967295UL;
        struct S0 l_1529 = {0xE948EFA8L,0L,1UL,18446744073709551613UL,-8L,0x0276DBF0DCB00FF4LL};
        int32_t *l_1530 = &l_1501[0].f0;
        const union U1 *l_1558 = &g_592;
        int32_t ***l_1562 = &g_120;
        int64_t *l_1564 = (void*)0;
        int64_t *l_1565 = &l_1499;
        (*l_1530) |= (func_37(((*g_201) = (((g_557[3] |= ((((p_24 ^ ((0x7865L <= ((safe_lshift_func_int8_t_s_u((((-1L) > ((*l_1502) ^= (**g_294))) | (0x50C6336BDDD90947LL <= ((void*)0 != l_1527))), p_24)) != (*g_427))) && 0xDEL)) ^ p_25) || l_1528) != 0x2BL)) || 4294967289UL) < (*g_121))), l_1529, g_512) , p_24);
        for (l_1529.f3 = (-27); (l_1529.f3 == 30); ++l_1529.f3)
        { 
            uint16_t l_1537 = 65535UL;
            (***g_357) &= (safe_rshift_func_int16_t_s_u(((((((safe_mod_func_uint8_t_u_u(((**g_221) = (l_1537 , (safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u(p_25)) != p_25), 2)))), 0x9CL)) <= (p_25 <= (!(*l_1502)))) == (((*g_427) = ((safe_div_func_int8_t_s_s((((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_1537, (*l_1502))), (-1L))), 0xE727AA9DL)) , (****g_1359)), l_1537)), (*l_1530))) , 0x4FL) | (*l_1530)), p_24)) , p_25)) ^ (*l_1530))) > l_1537) & (*l_1502)) | 65535UL), 14));
            return (*g_222);
        }
        (*g_121) ^= (safe_div_func_int32_t_s_s((65534UL && (l_1558 == l_1558)), (~0x3929472BL)));
        (***g_357) = ((safe_mod_func_uint64_t_u_u((func_37(((l_1563 = l_1562) != (void*)0), l_1529, g_209) , p_25), ((*l_1565) |= (*g_279)))) | (***l_1562));
    }
    else
    { 
        int8_t *l_1590 = &g_1268.f4;
        int32_t l_1596 = 0x18DDEB67L;
        struct S0 l_1598 = {4L,0x567FAC46L,0x5390L,0UL,0x75L,18446744073709551615UL};
        int32_t **l_1602 = &l_1502;
        for (g_795 = 5; (g_795 == 16); g_795 = safe_add_func_uint32_t_u_u(g_795, 9))
        { 
            uint16_t l_1585 = 65535UL;
            int32_t l_1591 = 0x936D5A8EL;
            uint32_t *l_1592 = (void*)0;
            int16_t l_1595 = 0xCE1EL;
            if ((((*l_1502) > ((**g_286) ^= (p_25 | (safe_lshift_func_uint16_t_u_s(1UL, 13))))) != ((void*)0 != &l_1523)))
            { 
                int64_t l_1572 = 0x633C99747BDE5672LL;
                return l_1572;
            }
            else
            { 
                uint16_t *l_1584 = (void*)0;
                int8_t * const l_1589 = &g_20;
                int16_t *l_1593 = (void*)0;
                int16_t *l_1594[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1594[i] = (void*)0;
                (***g_357) = ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((g_731 = (((*g_201)++) & (0x7E50F4BD3792C77CLL != (((((*g_427) |= (p_25 <= (((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((~(++l_1585)) , (safe_unary_minus_func_int8_t_s(((((p_25 && l_1585) == ((*g_826) = l_1585)) , l_1589) == ((*g_286) = l_1590))))) & 0xCD5D9E575A697D2FLL) > (-7L)), l_1591)), (*l_1502))) > (*g_279)) , p_25))) , &p_24) != l_1592) || 0xAD90BB48L)))), l_1595)), l_1596)) | g_701);
            }
            l_1598 = ((**l_1527) = l_1597);
        }
        ++l_1599;
        (*l_1602) = (*g_294);
    }
    return (*l_1502);
}



static uint16_t  func_30(int8_t * p_31, int32_t  p_32)
{ 
    int32_t l_1350 = 0x2E95F95AL;
    int32_t l_1371 = 0L;
    int32_t l_1372 = 0x1CE50019L;
    int32_t l_1378 = (-1L);
    int32_t l_1382 = (-6L);
    int32_t l_1383 = (-4L);
    int32_t l_1384 = 0xC7FA0F76L;
    int32_t l_1385 = (-1L);
    int32_t l_1386 = 0xCBDEA16AL;
    int32_t l_1387 = 0xDD0E89ABL;
    uint32_t l_1389 = 0xD200018FL;
    struct S0 l_1417[3] = {{1L,0x8D416197L,0xCBBCL,18446744073709551615UL,9L,0UL},{1L,0x8D416197L,0xCBBCL,18446744073709551615UL,9L,0UL},{1L,0x8D416197L,0xCBBCL,18446744073709551615UL,9L,0UL}};
    uint8_t *l_1419 = &g_631[0];
    int i;
    for (g_20 = 0; (g_20 <= 0); g_20 += 1)
    { 
        uint8_t l_1370 = 0x1CL;
        int32_t l_1376 = 0xA5F72B83L;
        int32_t l_1377[3];
        union U1 **l_1411[2];
        uint64_t **l_1416 = &g_826;
        uint8_t **l_1418 = &g_222;
        const struct S0 l_1420 = {0x05CE7CD2L,1L,0xE74BL,18446744073709551615UL,0x43L,1UL};
        int i;
        for (i = 0; i < 3; i++)
            l_1377[i] = 9L;
        for (i = 0; i < 2; i++)
            l_1411[i] = &g_1040;
        if ((l_1372 ^= ((**g_120) = (safe_sub_func_uint64_t_u_u((l_1371 = (safe_unary_minus_func_int8_t_s((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((l_1350 == ((safe_add_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((void*)0 == g_1359), ((safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((((*g_222) = 0x4CL) >= (**g_286)), ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((p_32 , (l_1370 < p_32)), p_32)), (**g_286))) , l_1370))) > 0x9D28L), l_1370)) >= (-1L)))), 1)) ^ 0x6E5158F2L), (*g_427))) > p_32), (-1L))) , l_1350)) | p_32), p_32)), l_1370))))), 0xFC0BB02FABA004FFLL)))))
        { 
            int32_t *l_1373 = &l_1371;
            int32_t *l_1374 = &g_555;
            int32_t *l_1375[2];
            uint32_t l_1379 = 0UL;
            struct S0 **l_1393 = (void*)0;
            int16_t **l_1402 = &g_427;
            int16_t ***l_1401[1][5] = {{&l_1402,&l_1402,&l_1402,&l_1402,&l_1402}};
            union U1 **l_1409 = &g_1040;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1375[i] = &g_701;
            l_1379--;
            ++l_1389;
            for (g_724 = 0; (g_724 <= 0); g_724 += 1)
            { 
                struct S0 l_1394[3] = {{0x94B9CF92L,-1L,65535UL,18446744073709551615UL,0x8BL,18446744073709551615UL},{0x94B9CF92L,-1L,65535UL,18446744073709551615UL,0x8BL,18446744073709551615UL},{0x94B9CF92L,-1L,65535UL,18446744073709551615UL,0x8BL,18446744073709551615UL}};
                int64_t *l_1395 = &g_556;
                union U1 ***l_1410 = &l_1409;
                int i, j;
                (**g_294) &= (~((((((((*l_1395) = ((((void*)0 == l_1393) ^ g_581[g_724][(g_724 + 2)]) , (l_1394[2] , ((*g_1040) , ((g_581[g_724][g_724] , 65535UL) | p_32))))) , p_32) ^ (*g_826)) | 1UL) , l_1394[2].f1) && l_1377[1]) | (*g_279)));
                ++g_1396[2];
                l_1382 = ((*l_1374) = (7UL <= (safe_rshift_func_int8_t_s_s((((l_1401[0][0] == (((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0x70E8L, 6)) & (safe_sub_func_int8_t_s_s((*g_287), (((*l_1410) = l_1409) != (g_1412 = l_1411[0]))))), ((safe_mod_func_uint16_t_u_u((((((****g_1359) != (*p_31)) <= 18446744073709551615UL) , (*l_1374)) >= p_32), p_32)) & 0x5FD05A4C0045E73BLL))) ^ l_1394[2].f5) , &l_1402)) , 0x0EB048F2L) && l_1377[0]), 6))));
            }
        }
        else
        { 
            uint64_t ***l_1415 = &g_825;
            l_1416 = ((*l_1415) = (void*)0);
            return (*g_201);
        }
        l_1377[2] = (((func_37(p_32, l_1417[0], l_1383) , l_1418) == (void*)0) < ((*l_1418) != l_1419));
        (*g_224) = l_1420;
    }
    return l_1384;
}



static int8_t * func_33(int8_t * const  p_34)
{ 
    int16_t l_47 = (-2L);
    int16_t *l_48 = &l_47;
    uint8_t *l_51[2];
    int32_t l_53 = 0L;
    int32_t l_56 = 0L;
    int16_t *l_59 = &g_60;
    int32_t *l_1099[6] = {&g_61[0].f0,&g_61[0].f0,&g_61[0].f0,&g_61[0].f0,&g_61[0].f0,&g_61[0].f0};
    uint32_t l_1100[6] = {0x31AFE217L,0x31AFE217L,0x31AFE217L,0x31AFE217L,0x31AFE217L,0x31AFE217L};
    struct S0 ****l_1108 = &g_876;
    uint32_t l_1129 = 18446744073709551612UL;
    struct S0 l_1137[2] = {{0x7584750BL,0x0EC804BBL,0x77FEL,0x45EE775FL,1L,18446744073709551615UL},{0x7584750BL,0x0EC804BBL,0x77FEL,0x45EE775FL,1L,18446744073709551615UL}};
    uint64_t *l_1140 = &l_1137[0].f5;
    uint16_t **l_1173 = (void*)0;
    const int32_t l_1196 = (-1L);
    int32_t l_1206 = 0x2BE6B6A6L;
    uint64_t l_1303 = 18446744073709551608UL;
    int8_t *l_1319 = &l_1137[0].f4;
    int i;
    for (i = 0; i < 2; i++)
        l_51[i] = &g_52;
    return l_51[1];
}



static union U1  func_37(uint16_t  p_38, struct S0  p_39, uint32_t  p_40)
{ 
    struct S0 l_64 = {0x6E99FD40L,0xD77138BFL,65535UL,0x3A0DCB3DL,-1L,0x11B6BEFC5446ED9ALL};
    struct S0 *l_65 = &g_61[0];
    const int32_t *l_123[7] = {&g_61[0].f0,&g_61[0].f0,&g_61[0].f0,&g_61[0].f0,&g_61[0].f0,&g_61[0].f0,&g_61[0].f0};
    const uint16_t l_180 = 1UL;
    int32_t l_273 = 0xF6F1915AL;
    uint32_t l_334[4] = {0xB48063A0L,0xB48063A0L,0xB48063A0L,0xB48063A0L};
    uint64_t l_336 = 0x16CAFFD95556C42DLL;
    int32_t ***l_355 = (void*)0;
    int32_t ***l_356 = &g_120;
    int64_t * const l_385 = (void*)0;
    union U1 l_401 = {9L};
    int32_t **l_520[2][5] = {{&g_121,(void*)0,(void*)0,&g_121,(void*)0},{&g_121,&g_121,&g_121,&g_121,&g_121}};
    uint32_t l_522 = 0x21BAA7C3L;
    uint8_t l_547[3][5][4] = {{{0x7DL,0xD2L,0xD2L,0x7DL},{0xD2L,0x7DL,255UL,1UL},{0xD2L,255UL,0xD2L,255UL},{0x7DL,1UL,255UL,255UL},{255UL,255UL,0UL,1UL}},{{1UL,0x7DL,0UL,0x7DL},{255UL,0xD2L,255UL,0UL},{0x7DL,0xD2L,0xD2L,0x7DL},{0xD2L,0x7DL,255UL,1UL},{0xD2L,255UL,0xD2L,255UL}},{{0x7DL,1UL,255UL,255UL},{255UL,255UL,0UL,1UL},{1UL,0x7DL,0UL,0x7DL},{255UL,0xD2L,255UL,0UL},{0x7DL,0xD2L,0xD2L,0x7DL}}};
    int32_t l_552 = 4L;
    int32_t l_579 = (-3L);
    const int32_t l_626 = 1L;
    int32_t l_781 = 0x45C82BCBL;
    int32_t l_784 = 8L;
    int32_t *** const *l_821 = &l_355;
    int32_t *** const **l_820[6][2] = {{&l_821,&l_821},{(void*)0,&l_821},{&l_821,&l_821},{&l_821,&l_821},{(void*)0,&l_821},{&l_821,&l_821}};
    int8_t ***l_888 = (void*)0;
    uint64_t ***l_890 = &g_825;
    const uint16_t l_901 = 0UL;
    int i, j, k;
    return (*g_1040);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_61[i].f0, "g_61[i].f0", print_hash_value);
        transparent_crc(g_61[i].f1, "g_61[i].f1", print_hash_value);
        transparent_crc(g_61[i].f2, "g_61[i].f2", print_hash_value);
        transparent_crc(g_61[i].f3, "g_61[i].f3", print_hash_value);
        transparent_crc(g_61[i].f4, "g_61[i].f4", print_hash_value);
        transparent_crc(g_61[i].f5, "g_61[i].f5", print_hash_value);

    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_238[i], "g_238[i]", print_hash_value);

    }
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_327[i], "g_327[i]", print_hash_value);

    }
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_557[i], "g_557[i]", print_hash_value);

    }
    transparent_crc(g_580, "g_580", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_581[i][j], "g_581[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_592.f0, "g_592.f0", print_hash_value);
    transparent_crc(g_592.f2, "g_592.f2", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_631[i], "g_631[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_699[i][j], "g_699[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_701, "g_701", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_721[i][j], "g_721[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_724, "g_724", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_1061, "g_1061", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1062[i][j][k], "g_1062[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1076, "g_1076", print_hash_value);
    transparent_crc(g_1142, "g_1142", print_hash_value);
    transparent_crc(g_1202, "g_1202", print_hash_value);
    transparent_crc(g_1209, "g_1209", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1211[i], "g_1211[i]", print_hash_value);

    }
    transparent_crc(g_1268.f0, "g_1268.f0", print_hash_value);
    transparent_crc(g_1268.f1, "g_1268.f1", print_hash_value);
    transparent_crc(g_1268.f2, "g_1268.f2", print_hash_value);
    transparent_crc(g_1268.f3, "g_1268.f3", print_hash_value);
    transparent_crc(g_1268.f4, "g_1268.f4", print_hash_value);
    transparent_crc(g_1268.f5, "g_1268.f5", print_hash_value);
    transparent_crc(g_1282, "g_1282", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1388[i], "g_1388[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1396[i], "g_1396[i]", print_hash_value);

    }
    transparent_crc(g_1607, "g_1607", print_hash_value);
    transparent_crc(g_1639, "g_1639", print_hash_value);
    transparent_crc(g_1698, "g_1698", print_hash_value);
    transparent_crc(g_1739, "g_1739", print_hash_value);
    transparent_crc(g_1834, "g_1834", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1898[i][j][k], "g_1898[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1937[i][j][k], "g_1937[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2018[i], "g_2018[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2165[i][j], "g_2165[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2314[i][j].f0, "g_2314[i][j].f0", print_hash_value);
            transparent_crc(g_2314[i][j].f1, "g_2314[i][j].f1", print_hash_value);
            transparent_crc(g_2314[i][j].f2, "g_2314[i][j].f2", print_hash_value);
            transparent_crc(g_2314[i][j].f3, "g_2314[i][j].f3", print_hash_value);
            transparent_crc(g_2314[i][j].f4, "g_2314[i][j].f4", print_hash_value);
            transparent_crc(g_2314[i][j].f5, "g_2314[i][j].f5", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
