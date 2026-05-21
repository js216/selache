// SPDX-License-Identifier: MIT
// cctest_csmith_6114841e.c --- cctest case csmith_6114841e (csmith seed 1628734494)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd36f1684 */

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

// Options:   -s 1628734494 -o /tmp/csmith_gen_3_hyniv6/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   int16_t  f1;
   int16_t  f2;
   uint8_t  f3;
   uint32_t  f4;
   const uint32_t  f5;
   uint32_t  f6;
   uint32_t  f7;
};

union U1 {
   uint16_t  f0;
   int16_t  f1;
};

union U2 {
   struct S0  f0;
   int16_t  f1;
   int8_t  f2;
   const int8_t * f3;
   uint8_t  f4;
};

union U3 {
   uint32_t  f0;
   uint32_t  f1;
   int64_t  f2;
   const struct S0  f3;
};

union U4 {
   int8_t  f0;
   int16_t  f1;
   int16_t  f2;
};

union U5 {
   int64_t  f0;
   uint64_t  f1;
};


static int32_t g_2 = 0x63FFAF07L;
static int32_t g_5 = 0x747BB7ABL;
static int8_t g_26 = 0x23L;
static const int8_t *g_25 = &g_26;
static int32_t g_44[6] = {0L,0L,0L,0L,0L,0L};
static int32_t g_50 = 0xE92F9E84L;
static uint8_t g_55 = 247UL;
static int64_t g_76 = 0x3D7BF5F1E6118879LL;
static struct S0 g_81 = {4294967291UL,0x18A1L,8L,255UL,0xEE7732ACL,0xFB12B2C9L,0UL,0xC3AC5B6CL};
static int64_t g_84[6] = {0x0091F4D940354EEALL,0x0091F4D940354EEALL,0x0091F4D940354EEALL,0x0091F4D940354EEALL,0x0091F4D940354EEALL,0x0091F4D940354EEALL};
static uint64_t g_86[1] = {0xDE5E333AB1ADF13FLL};
static uint32_t g_88[6][2] = {{0x26432499L,0x26432499L},{0x32C98C10L,0x26432499L},{0x26432499L,0x32C98C10L},{0x26432499L,0x26432499L},{0x32C98C10L,0x26432499L},{0x26432499L,0x32C98C10L}};
static int8_t *g_100 = &g_26;
static int8_t **g_99 = &g_100;
static int8_t ***g_98 = &g_99;
static uint64_t *g_116 = &g_86[0];
static int32_t g_137[1][7][7] = {{{0xC66C539EL,0x611DFC2BL,(-1L),0x611DFC2BL,0xC66C539EL,(-1L),7L},{0x3850ECD0L,0xBA2A9BA5L,0x1D148818L,0x3850ECD0L,0x1D148818L,0xBA2A9BA5L,0x3850ECD0L},{(-1L),7L,1L,(-2L),7L,(-2L),1L},{0x63870EDDL,0x63870EDDL,0x3850ECD0L,0xBA2A9BA5L,0x1D148818L,0x3850ECD0L,0x1D148818L},{1L,(-1L),(-1L),1L,7L,(-1L),1L},{0x03F1312DL,0x1D148818L,9L,9L,0x1D148818L,0x03F1312DL,0x0ACD3375L},{(-2L),1L,7L,(-1L),(-1L),7L,1L}}};
static uint32_t g_162 = 0xAE6537FAL;
static union U5 g_169 = {7L};
static union U4 g_192[7] = {{0x64L},{0x64L},{0x64L},{0x64L},{0x64L},{0x64L},{0x64L}};
static union U4 *g_191 = &g_192[3];
static const uint32_t g_216 = 4294967289UL;
static uint16_t g_225 = 0x6CC5L;
static union U3 g_262 = {1UL};
static uint64_t **g_280 = (void*)0;
static uint64_t ***g_279[7] = {(void*)0,&g_280,(void*)0,(void*)0,&g_280,(void*)0,(void*)0};
static union U2 g_318[6][2][3] = {{{{{7UL,0xE575L,0x612FL,0UL,0xFF098935L,18446744073709551614UL,1UL,6UL}},{{4294967293UL,1L,-1L,0xE9L,1UL,18446744073709551615UL,0x15BEE602L,1UL}},{{4294967295UL,0xB4EDL,0x0ABEL,0xDCL,0x8FAB63B0L,18446744073709551615UL,0x680E2122L,0x29B2F99BL}}},{{{0xCD342EA1L,0xFF7FL,0x21DBL,1UL,0x95B9A6DDL,0UL,0xC3983D4AL,0xDA767896L}},{{1UL,2L,4L,0x36L,0x09BC145EL,18446744073709551615UL,4UL,7UL}},{{1UL,2L,4L,0x36L,0x09BC145EL,18446744073709551615UL,4UL,7UL}}}},{{{{4294967295UL,0xB4EDL,0x0ABEL,0xDCL,0x8FAB63B0L,18446744073709551615UL,0x680E2122L,0x29B2F99BL}},{{7UL,0xE575L,0x612FL,0UL,0xFF098935L,18446744073709551614UL,1UL,6UL}},{{0x6CAD40BCL,0x8989L,3L,0xD3L,4294967295UL,0x8B7C33F0L,0xB3F9F7B6L,18446744073709551615UL}}},{{{1UL,1L,0xDA06L,253UL,0x38A6AC4DL,0xEDE39CF4L,18446744073709551615UL,0UL}},{{0xCD342EA1L,0xFF7FL,0x21DBL,1UL,0x95B9A6DDL,0UL,0xC3983D4AL,0xDA767896L}},{{1UL,0x824AL,0x437AL,0xF0L,0x6565E62FL,0x5E81A065L,0x47FD5EEDL,18446744073709551615UL}}}},{{{{4294967295UL,0xB4EDL,0x0ABEL,0xDCL,0x8FAB63B0L,18446744073709551615UL,0x680E2122L,0x29B2F99BL}},{{4294967295UL,0xB4EDL,0x0ABEL,0xDCL,0x8FAB63B0L,18446744073709551615UL,0x680E2122L,0x29B2F99BL}},{{1UL,-3L,-1L,9UL,4294967295UL,6UL,0x2F1E723DL,0x3CE23231L}}},{{{0xCD342EA1L,0xFF7FL,0x21DBL,1UL,0x95B9A6DDL,0UL,0xC3983D4AL,0xDA767896L}},{{1UL,1L,0xDA06L,253UL,0x38A6AC4DL,0xEDE39CF4L,18446744073709551615UL,0UL}},{{0xBE8912F0L,0xA4F8L,-1L,0xBAL,0xCFDFD888L,0x135BB8A3L,18446744073709551615UL,0x1D8BF521L}}}},{{{{7UL,0xE575L,0x612FL,0UL,0xFF098935L,18446744073709551614UL,1UL,6UL}},{{4294967295UL,0xB4EDL,0x0ABEL,0xDCL,0x8FAB63B0L,18446744073709551615UL,0x680E2122L,0x29B2F99BL}},{{7UL,0xE575L,0x612FL,0UL,0xFF098935L,18446744073709551614UL,1UL,6UL}}},{{{1UL,2L,4L,0x36L,0x09BC145EL,18446744073709551615UL,4UL,7UL}},{{0xCD342EA1L,0xFF7FL,0x21DBL,1UL,0x95B9A6DDL,0UL,0xC3983D4AL,0xDA767896L}},{{0x51BB6737L,3L,0xED31L,0x94L,0xBF1B9D4CL,0x0DB2EAB4L,0x2D33EEFFL,3UL}}}},{{{{4294967293UL,1L,-1L,0xE9L,1UL,18446744073709551615UL,0x15BEE602L,1UL}},{{7UL,0xE575L,0x612FL,0UL,0xFF098935L,18446744073709551614UL,1UL,6UL}},{{7UL,0xE575L,0x612FL,0UL,0xFF098935L,18446744073709551614UL,1UL,6UL}}},{{{0x51BB6737L,3L,0xED31L,0x94L,0xBF1B9D4CL,0x0DB2EAB4L,0x2D33EEFFL,3UL}},{{1UL,2L,4L,0x36L,0x09BC145EL,18446744073709551615UL,4UL,7UL}},{{0xBE8912F0L,0xA4F8L,-1L,0xBAL,0xCFDFD888L,0x135BB8A3L,18446744073709551615UL,0x1D8BF521L}}}},{{{{5UL,0x8D1CL,-1L,0x9FL,0UL,4UL,0xAD3AE1BFL,0UL}},{{4294967293UL,1L,-1L,0xE9L,1UL,18446744073709551615UL,0x15BEE602L,1UL}},{{1UL,-3L,-1L,9UL,4294967295UL,6UL,0x2F1E723DL,0x3CE23231L}}},{{{0x51BB6737L,3L,0xED31L,0x94L,0xBF1B9D4CL,0x0DB2EAB4L,0x2D33EEFFL,3UL}},{{0x51BB6737L,3L,0xED31L,0x94L,0xBF1B9D4CL,0x0DB2EAB4L,0x2D33EEFFL,3UL}},{{1UL,0x824AL,0x437AL,0xF0L,0x6565E62FL,0x5E81A065L,0x47FD5EEDL,18446744073709551615UL}}}}};
static int32_t *g_334 = &g_44[3];
static uint32_t *g_346 = &g_318[0][0][0].f0.f4;
static union U4 * const *g_444 = &g_191;
static union U4 * const **g_443 = &g_444;
static union U1 g_451 = {1UL};
static struct S0 g_595[3][7][2] = {{{{3UL,0L,8L,255UL,4294967295UL,0UL,0UL,0x3E1AFE79L},{3UL,0L,8L,255UL,4294967295UL,0UL,0UL,0x3E1AFE79L}},{{4294967294UL,0xF0C0L,0L,0x8BL,0xB534E7E8L,0xB8A41071L,0x4A1C42F6L,18446744073709551606UL},{0x526E636EL,0L,0x903CL,0x72L,0UL,0xD56A41F7L,0UL,1UL}},{{0xEDE9BF27L,-6L,0xF3FAL,255UL,0xABED482EL,0UL,18446744073709551615UL,0x5E746CE9L},{0x0837B7E2L,0x4E15L,8L,0x9FL,1UL,0xA6E8C10EL,0xCB49A64DL,6UL}},{{0x526E636EL,0L,0x903CL,0x72L,0UL,0xD56A41F7L,0UL,1UL},{0x69F4247EL,0xEC75L,-8L,0x64L,0x660810C0L,1UL,5UL,1UL}},{{0UL,8L,0x4A41L,1UL,0x3432E30CL,0x7B8DCACAL,0xB7F41336L,0x75F594D3L},{0x526E636EL,0L,0x903CL,0x72L,0UL,0xD56A41F7L,0UL,1UL}},{{3UL,0L,8L,255UL,4294967295UL,0UL,0UL,0x3E1AFE79L},{4294967294UL,0xF0C0L,0L,0x8BL,0xB534E7E8L,0xB8A41071L,0x4A1C42F6L,18446744073709551606UL}},{{3UL,0L,8L,255UL,4294967295UL,0UL,0UL,0x3E1AFE79L},{0x526E636EL,0L,0x903CL,0x72L,0UL,0xD56A41F7L,0UL,1UL}}},{{{0UL,8L,0x4A41L,1UL,0x3432E30CL,0x7B8DCACAL,0xB7F41336L,0x75F594D3L},{0x69F4247EL,0xEC75L,-8L,0x64L,0x660810C0L,1UL,5UL,1UL}},{{0x526E636EL,0L,0x903CL,0x72L,0UL,0xD56A41F7L,0UL,1UL},{0x0837B7E2L,0x4E15L,8L,0x9FL,1UL,0xA6E8C10EL,0xCB49A64DL,6UL}},{{0xEDE9BF27L,-6L,0xF3FAL,255UL,0xABED482EL,0UL,18446744073709551615UL,0x5E746CE9L},{0x526E636EL,0L,0x903CL,0x72L,0UL,0xD56A41F7L,0UL,1UL}},{{4294967294UL,0xF0C0L,0L,0x8BL,0xB534E7E8L,0xB8A41071L,0x4A1C42F6L,18446744073709551606UL},{3UL,0L,8L,255UL,4294967295UL,0UL,0UL,0x3E1AFE79L}},{{3UL,0L,8L,255UL,4294967295UL,0UL,0UL,0x3E1AFE79L},{0xC6F05A37L,0x15FCL,0xABC7L,0x61L,4294967289UL,0xCEF482F4L,0x07F2D94CL,2UL}},{{0xEDE9BF27L,-6L,0xF3FAL,255UL,0xABED482EL,0UL,18446744073709551615UL,0x5E746CE9L},{0x69F4247EL,0xEC75L,-8L,0x64L,0x660810C0L,1UL,5UL,1UL}},{{0xC6F05A37L,0x15FCL,0xABC7L,0x61L,4294967289UL,0xCEF482F4L,0x07F2D94CL,2UL},{0x69F4247EL,0xEC75L,-8L,0x64L,0x660810C0L,1UL,5UL,1UL}}},{{{0xEDE9BF27L,-6L,0xF3FAL,255UL,0xABED482EL,0UL,18446744073709551615UL,0x5E746CE9L},{0xC6F05A37L,0x15FCL,0xABC7L,0x61L,4294967289UL,0xCEF482F4L,0x07F2D94CL,2UL}},{{3UL,0L,8L,255UL,4294967295UL,0UL,0UL,0x3E1AFE79L},{3UL,0L,8L,255UL,4294967295UL,0UL,0UL,0x3E1AFE79L}},{{4294967294UL,0xF0C0L,0L,0x8BL,0xB534E7E8L,0xB8A41071L,0x4A1C42F6L,18446744073709551606UL},{0x526E636EL,0L,0x903CL,0x72L,0UL,0xD56A41F7L,0UL,1UL}},{{0xEDE9BF27L,-6L,0xF3FAL,255UL,0xABED482EL,0UL,18446744073709551615UL,0x5E746CE9L},{0x0837B7E2L,0x4E15L,8L,0x9FL,1UL,0xA6E8C10EL,0xCB49A64DL,6UL}},{{0x526E636EL,0L,0x903CL,0x72L,0UL,0xD56A41F7L,0UL,1UL},{0x69F4247EL,0xEC75L,-8L,0x64L,0x660810C0L,1UL,5UL,1UL}},{{0UL,8L,0x4A41L,1UL,0x3432E30CL,0x7B8DCACAL,0xB7F41336L,0x75F594D3L},{0x526E636EL,0L,0x903CL,0x72L,0UL,0xD56A41F7L,0UL,1UL}},{{3UL,0L,8L,255UL,4294967295UL,0UL,0UL,0x3E1AFE79L},{4294967294UL,0xF0C0L,0L,0x8BL,0xB534E7E8L,0xB8A41071L,0x4A1C42F6L,18446744073709551606UL}}}};
static struct S0 *g_594 = &g_595[1][2][0];
static int8_t g_629 = 0xE0L;
static struct S0 **g_632 = &g_594;



static uint8_t  func_1(void);
static struct S0  func_8(int32_t  p_9, int8_t * p_10, int32_t  p_11);
static int32_t  func_12(int8_t * p_13, int8_t  p_14);
static int8_t * func_15(int16_t  p_16, union U4  p_17);
static union U1  func_19(int8_t  p_20, int8_t  p_21, const int8_t * p_22, int8_t * p_23);
static int8_t * func_27(union U4  p_28, int8_t * p_29, int64_t  p_30, int8_t * const  p_31, int8_t * p_32);
static union U4  func_33(int8_t * p_34, uint16_t  p_35, int8_t * p_36, int8_t * p_37, int8_t * p_38);
static int8_t * func_39(uint8_t  p_40);




static uint8_t  func_1(void)
{ 
    uint32_t l_24 = 0xE4C7BA3FL;
    union U4 l_663 = {1L};
    int32_t l_703 = 1L;
    int32_t l_704[2];
    union U2 *l_722 = &g_318[0][0][0];
    union U2 **l_721 = &l_722;
    int32_t *l_725[7][3] = {{&g_137[0][0][1],&g_137[0][0][1],(void*)0},{&g_137[0][4][1],&g_137[0][4][1],&g_2},{&g_137[0][0][1],&g_137[0][0][1],(void*)0},{&g_137[0][4][1],&g_137[0][4][1],&g_2},{&g_137[0][0][1],&g_137[0][0][1],(void*)0},{&g_137[0][4][1],&g_137[0][4][1],&g_2},{&g_137[0][0][1],&g_137[0][0][1],(void*)0}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_704[i] = 0xC5490DC6L;
    for (g_2 = (-10); (g_2 != 25); g_2++)
    { 
        int8_t * const l_52 = &g_26;
        int32_t l_680 = (-6L);
        int8_t ****l_685 = (void*)0;
        int32_t l_711[3];
        int i;
        for (i = 0; i < 3; i++)
            l_711[i] = 0xAD80BF6AL;
    }
    for (g_76 = 5; (g_76 >= 2); g_76 -= 1)
    { 
        int32_t **l_726 = &g_334;
        int i;
        l_725[1][0] = &g_2;
        (*g_334) &= (1UL <= g_84[g_76]);
        (*l_726) = &g_44[1];
        for (g_81.f0 = 1; (g_81.f0 <= 6); g_81.f0 += 1)
        { 
            (*l_726) = (*l_726);
        }
    }
    return g_595[1][2][0].f1;
}



static struct S0  func_8(int32_t  p_9, int8_t * p_10, int32_t  p_11)
{ 
    struct S0 l_677 = {0xA2B20D85L,-8L,-7L,1UL,0x72195FE1L,0x829856D8L,0UL,18446744073709551606UL};
    for (g_81.f0 = 0; (g_81.f0 <= 0); g_81.f0 += 1)
    { 
        return l_677;
    }
    return l_677;
}



static int32_t  func_12(int8_t * p_13, int8_t  p_14)
{ 
    int32_t *l_676 = &g_44[0];
    for (g_81.f0 = 0; (g_81.f0 >= 14); g_81.f0 = safe_add_func_int32_t_s_s(g_81.f0, 8))
    { 
        uint8_t l_675 = 6UL;
        for (p_14 = 4; (p_14 > (-8)); --p_14)
        { 
            return p_14;
        }
        if (l_675)
            break;
    }
    (*l_676) = g_169.f0;
    return p_14;
}



static int8_t * func_15(int16_t  p_16, union U4  p_17)
{ 
    uint32_t l_664 = 0UL;
    int32_t *l_665 = &g_137[0][4][1];
    int8_t *l_670 = &g_629;
    (*l_665) = l_664;
    for (p_17.f0 = 0; (p_17.f0 == 27); p_17.f0 = safe_add_func_uint16_t_u_u(p_17.f0, 1))
    { 
        int32_t **l_668 = &l_665;
        int8_t *l_669 = (void*)0;
        (*l_668) = l_665;
        (*g_632) = (void*)0;
        return l_669;
    }
    return l_670;
}



static union U1  func_19(int8_t  p_20, int8_t  p_21, const int8_t * p_22, int8_t * p_23)
{ 
    uint8_t l_378 = 0xA5L;
    int32_t l_405 = 0x0CD7BF47L;
    int32_t l_406 = 0xD00A7F3BL;
    int32_t l_414 = 7L;
    int32_t l_416 = 0xCBBDB04BL;
    int32_t l_420 = 0x68F40AB2L;
    int32_t l_421 = (-1L);
    int32_t l_424[6];
    union U4 * const *l_437 = &g_191;
    union U4 * const **l_436 = &l_437;
    union U2 l_447 = {{0x5B18AD5DL,0x5917L,8L,0UL,0x026E68E1L,1UL,0x9185C484L,18446744073709551615UL}};
    int32_t *l_542 = &l_414;
    uint8_t l_566 = 0UL;
    uint32_t l_573 = 0UL;
    uint32_t **l_581 = &g_346;
    int16_t l_614[4];
    union U1 l_619 = {0xEAEAL};
    int32_t *l_620 = (void*)0;
    int64_t *l_630[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    struct S0 **l_631 = &g_594;
    union U3 l_645 = {0x21CCABE4L};
    int16_t l_654[7] = {0x2487L,0x2487L,0x2487L,0x2487L,0x2487L,0x2487L,0x2487L};
    int i;
    for (i = 0; i < 6; i++)
        l_424[i] = 0x8AE8633DL;
    for (i = 0; i < 4; i++)
        l_614[i] = 1L;
    if (l_378)
    { 
        int32_t **l_381 = &g_334;
        union U2 l_387 = {{0xF01BAD77L,0xE855L,-1L,0x9DL,8UL,0x491E24DEL,0UL,18446744073709551615UL}};
        union U3 *l_391 = &g_262;
        union U3 ** const l_390 = &l_391;
        int32_t l_407 = 0x85B44C6BL;
        int32_t l_408 = 0xA4E5AF34L;
        int32_t l_410 = 0x44068A2EL;
        int32_t l_413 = 0xFBE5DD7DL;
        int32_t l_415 = (-1L);
        int32_t l_417 = 4L;
        int32_t l_419 = 0x81D4C113L;
        int32_t l_422 = 0L;
        int32_t l_423 = 0xFD42250DL;
        int32_t l_425 = (-1L);
        int32_t l_427 = 0x41157BF9L;
        int32_t l_429[4];
        union U1 l_452 = {0xA58FL};
        int32_t l_464[1];
        int i;
        for (i = 0; i < 4; i++)
            l_429[i] = 0x8798416EL;
        for (i = 0; i < 1; i++)
            l_464[i] = 0x2227BBEEL;
lbl_404:
        (*g_334) = (*g_334);
        for (g_169.f0 = (-24); (g_169.f0 == 28); g_169.f0 = safe_add_func_uint8_t_u_u(g_169.f0, 1))
        { 
            uint32_t l_401 = 0x2AABB515L;
            int32_t l_411 = 1L;
            int32_t l_412 = (-1L);
            int32_t l_418 = 1L;
            int32_t l_426 = (-2L);
            int32_t l_428 = (-5L);
            int32_t l_430[1][4][6] = {{{0x68E2ABDFL,0x68E2ABDFL,0L,(-1L),0x5A4B7DCEL,0L},{(-1L),0x5A4B7DCEL,0L,0x5A4B7DCEL,(-1L),0L},{0x5A4B7DCEL,(-1L),0L,0x68E2ABDFL,0x68E2ABDFL,0L},{0x68E2ABDFL,0x68E2ABDFL,0L,(-1L),0x5A4B7DCEL,0L}}};
            int32_t **l_500 = &g_334;
            int8_t l_501 = 0x00L;
            union U1 l_502 = {0xEADBL};
            int i, j, k;
            if ((0x8D026344L != ((void*)0 != l_381)))
            { 
                union U2 l_384 = {{0xD61F3662L,0x9F71L,0x69ECL,253UL,4294967295UL,0x97FA978AL,4UL,0xEB3B465BL}};
                union U3 **l_392 = &l_391;
                (**l_381) &= (safe_lshift_func_uint16_t_u_u((l_384 , ((safe_div_func_uint32_t_u_u((*g_346), ((l_387 , (safe_div_func_int16_t_s_s((((((l_390 == l_392) && (safe_mul_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((*p_23), (g_318[0][0][0] , p_21))), p_21)) != 0x73L), 2L))) < p_20) , (*g_99)) == (void*)0), l_378))) , 0x992D7DB3L))) , p_20)), 9));
            }
            else
            { 
                int32_t *l_399 = &g_44[0];
                int32_t *l_400[7][6] = {{(void*)0,&g_5,(void*)0,&g_5,(void*)0,&g_44[0]},{(void*)0,&g_5,(void*)0,&g_5,(void*)0,&g_44[0]},{(void*)0,&g_5,(void*)0,&g_50,&g_44[3],&g_5},{&g_44[3],&g_50,(void*)0,&g_50,&g_44[3],&g_5},{&g_44[3],&g_50,(void*)0,&g_50,&g_44[3],&g_5},{&g_44[3],&g_50,(void*)0,&g_50,&g_44[3],&g_5},{&g_44[3],&g_50,(void*)0,&g_50,&g_44[3],&g_5}};
                int16_t l_409[6] = {0xAE62L,0xAE62L,0xAE62L,0xAE62L,0xAE62L,0xAE62L};
                uint32_t l_431 = 0xACDC5553L;
                union U4 * const **l_439 = &l_437;
                int i, j;
                g_334 = &g_137[0][4][1];
                l_401--;
                if (l_387.f0.f2)
                    goto lbl_404;
                l_431--;
                for (l_405 = 13; (l_405 >= (-24)); l_405 = safe_sub_func_int8_t_s_s(l_405, 1))
                { 
                    union U4 * const ***l_438 = &l_436;
                    union U4 * const ***l_440 = (void*)0;
                    union U4 * const **l_442 = &l_437;
                    union U4 * const ***l_441 = &l_442;
                    g_443 = ((*l_441) = (l_439 = ((*l_438) = l_436)));
                    l_428 |= (safe_sub_func_int16_t_s_s(g_88[4][1], ((((0xBA17DC35034025A5LL < 6UL) , (l_447 , (((*l_399) , (1L < (safe_sub_func_int64_t_s_s((+g_318[0][0][0].f0.f3), p_21)))) & p_21))) ^ (*g_346)) ^ p_20)));
                    return g_451;
                }
            }
            for (g_81.f3 = 1; (g_81.f3 <= 5); g_81.f3 += 1)
            { 
                int i;
                (*l_381) = &l_424[g_81.f3];
                return l_452;
            }
            for (l_428 = 3; (l_428 >= 0); l_428 -= 1)
            { 
                const uint64_t l_465[1][4] = {{3UL,3UL,3UL,3UL}};
                int i, j;
                l_429[l_428] ^= (-10L);
                for (l_452.f0 = 0; (l_452.f0 <= 5); l_452.f0 += 1)
                { 
                    uint16_t *l_473 = (void*)0;
                    int64_t *l_498 = &g_76;
                    int32_t **l_499 = &g_334;
                    int i;
                    g_44[(l_428 + 2)] &= 0x935AF32BL;
                    l_421 = ((~(safe_mul_func_int16_t_s_s(1L, (0xE511C429L == (((safe_add_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u((((l_429[l_428] , l_429[l_428]) & (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_429[l_428], ((((*g_116) = g_44[l_428]) == ((g_44[l_452.f0] >= g_44[l_452.f0]) , g_44[l_428])) >= l_464[0]))), p_21))) ^ (*g_334)), p_20)) < p_20) & (-6L)), (*g_346))) || l_465[0][0]) || 0x26405D54714FA0E7LL))))) <= 9UL);
                    (*l_381) = &l_420;
                    (*l_381) = &g_44[0];
                    l_406 |= (safe_sub_func_uint32_t_u_u((l_429[l_428] == (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u((((safe_rshift_func_uint16_t_u_s((l_424[5] = l_429[l_428]), (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((void*)0 == &g_262), (p_21 == ((**l_381) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((((safe_sub_func_uint8_t_u_u(((~0x931AD29FL) , (safe_add_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s(((((((*l_498) = ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((p_20 == l_447.f0.f2))), l_428)), l_418)) , 0xD70F7938935F5BD9LL)) , p_21) >= l_465[0][3]) , g_169.f0) , g_81.f6), 4L)) <= 0x3B1C424FL), g_169.f1))), 0L)) , l_499) == l_500) && 0x5407L), l_501)), 1)) <= 18446744073709551607UL) & (**l_499)) || p_20) , (*p_22)), 6)), g_86[0])))))), g_451.f1)))) & p_21) <= p_20))), 1UL))), 0x3FCF942AL));
                }
                for (g_81.f1 = 0; (g_81.f1 <= 3); g_81.f1 += 1)
                { 
                    return l_502;
                }
                if ((&p_22 == (*g_98)))
                { 
                    uint16_t *l_505 = &l_452.f0;
                    int32_t *l_506 = &l_422;
                    int i;
                    (*l_506) |= ((*g_334) = (safe_add_func_int8_t_s_s(0xF7L, (((*l_505) |= 65535UL) || l_429[l_428]))));
                    return g_451;
                }
                else
                { 
                    if ((*g_334))
                        break;
                }
            }
        }
    }
    else
    { 
        uint32_t **l_520 = &g_346;
        uint32_t ***l_521 = &l_520;
        int32_t **l_522[2];
        union U1 l_529[1] = {{0xBE1BL}};
        uint64_t **l_535[7][1][6] = {{{&g_116,(void*)0,&g_116,&g_116,(void*)0,&g_116}},{{&g_116,(void*)0,&g_116,&g_116,(void*)0,&g_116}},{{&g_116,(void*)0,&g_116,&g_116,(void*)0,&g_116}},{{&g_116,(void*)0,&g_116,&g_116,(void*)0,&g_116}},{{&g_116,(void*)0,&g_116,&g_116,(void*)0,&g_116}},{{&g_116,(void*)0,&g_116,&g_116,(void*)0,&g_116}},{{&g_116,(void*)0,&g_116,&g_116,(void*)0,&g_116}}};
        int32_t l_553 = 0x2EB337CDL;
        uint8_t *l_563 = &g_81.f3;
        uint8_t **l_562 = &l_563;
        union U4 ** const l_583 = &g_191;
        int64_t l_587 = 0x296FE9F517BC053ALL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_522[i] = &g_334;
        for (l_420 = (-29); (l_420 >= 16); l_420 = safe_add_func_int32_t_s_s(l_420, 9))
        { 
            union U1 l_515 = {0x4D99L};
            if ((*g_334))
                break;
            for (g_262.f0 = 0; (g_262.f0 != 44); g_262.f0++)
            { 
                union U1 *l_516 = (void*)0;
                union U1 *l_517 = &g_451;
                g_191 = (**g_443);
                (*g_334) ^= (g_318[0][0][0].f0 , (g_169.f0 != (g_50 || (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((((*l_517) = l_515) , (p_20 | (safe_mul_func_int16_t_s_s(g_318[0][0][0].f0.f5, (-7L))))), 0)), 0xF903F2D1DDB1451FLL)))));
            }
        }
        (*l_521) = l_520;
        g_334 = &g_5;
        for (l_378 = 0; (l_378 <= 1); l_378 += 1)
        { 
            uint16_t *l_532 = &l_529[0].f0;
            uint8_t *l_538[4] = {&g_55,&g_55,&g_55,&g_55};
            int16_t *l_539 = (void*)0;
            int16_t *l_540 = (void*)0;
            int32_t l_541 = 1L;
            int32_t l_549 = (-8L);
            int32_t l_550 = 3L;
            union U3 l_580[5][7][4] = {{{{0x2D842056L},{0x82756BF3L},{4294967293UL},{0x9E89471FL}},{{8UL},{0x82756BF3L},{4294967287UL},{4UL}},{{0x82756BF3L},{4294967295UL},{6UL},{0UL}},{{0x64FD9FD2L},{4294967288UL},{0xCD3884FBL},{0x6A85EF87L}},{{0x9E89471FL},{0x84BEA503L},{0x9E89471FL},{0x82756BF3L}},{{8UL},{4294967293UL},{7UL},{0x9E89471FL}},{{0xC2A29BC6L},{7UL},{4294967295UL},{4294967293UL}}},{{{0x82756BF3L},{8UL},{4294967295UL},{4294967287UL}},{{0xC2A29BC6L},{4294967288UL},{7UL},{6UL}},{{8UL},{0UL},{0x9E89471FL},{0xCD3884FBL}},{{0x9E89471FL},{0xCD3884FBL},{0xCD3884FBL},{0x9E89471FL}},{{0x64FD9FD2L},{4UL},{6UL},{7UL}},{{0x82756BF3L},{0xFB8FE609L},{4294967287UL},{4294967295UL}},{{8UL},{4294967288UL},{4294967293UL},{4294967295UL}}},{{{0x2D842056L},{0xFB8FE609L},{0x9E89471FL},{7UL}},{{2UL},{4UL},{0x82756BF3L},{0x9E89471FL}},{{4294967288UL},{0xCD3884FBL},{0x6A85EF87L},{0xCD3884FBL}},{{0x82756BF3L},{0UL},{0UL},{6UL}},{{0UL},{4294967288UL},{4UL},{4294967287UL}},{{0x750D5DC5L},{8UL},{0x9E89471FL},{4294967293UL}},{{0x750D5DC5L},{7UL},{4UL},{0x9E89471FL}}},{{{0UL},{4294967293UL},{0UL},{0x82756BF3L}},{{0x82756BF3L},{0x84BEA503L},{0x6A85EF87L},{0x6A85EF87L}},{{4294967288UL},{4294967288UL},{0x82756BF3L},{0UL}},{{2UL},{4294967295UL},{0x9E89471FL},{4UL}},{{0x2D842056L},{0x82756BF3L},{4294967293UL},{0x9E89471FL}},{{8UL},{0x750D5DC5L},{4294967295UL},{8UL}},{{0x750D5DC5L},{0UL},{8UL},{0xFB8FE609L}}},{{{4UL},{0x82756BF3L},{0x9E89471FL},{0x84BEA503L}},{{4294967295UL},{4294967288UL},{4294967295UL},{0x750D5DC5L}},{{6UL},{2UL},{0x2D842056L},{4294967295UL}},{{4294967293UL},{0x2D842056L},{0UL},{2UL}},{{0x750D5DC5L},{8UL},{0UL},{4294967295UL}},{{4294967293UL},{0x82756BF3L},{0x2D842056L},{8UL}},{{6UL},{0x64FD9FD2L},{4294967295UL},{0x9E89471FL}}}};
            const int16_t *l_606 = &g_81.f1;
            union U1 *l_610 = (void*)0;
            int64_t l_662 = 0x65B90653D47435FDLL;
            int i, j, k;
            l_541 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((l_424[4] = (((l_406 = (safe_div_func_uint64_t_u_u((l_529[0] , ((safe_mod_func_int16_t_s_s((((*l_532) &= 0x3586L) != g_81.f2), (safe_sub_func_int32_t_s_s(((void*)0 == l_535[2][0][4]), (safe_add_func_uint16_t_u_u(0x78C7L, 0UL)))))) >= p_21)), 2UL))) && (***g_98)) , p_21)), p_20)), 6));
            l_542 = &l_541;
        }
    }
    return l_619;
}



static int8_t * func_27(union U4  p_28, int8_t * p_29, int64_t  p_30, int8_t * const  p_31, int8_t * p_32)
{ 
    int32_t *l_53 = &g_44[0];
    int32_t *l_54[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_75 = &g_76;
    int64_t *l_83 = &g_84[5];
    uint64_t *l_85[6] = {&g_86[0],&g_86[0],&g_86[0],&g_86[0],&g_86[0],&g_86[0]};
    uint32_t l_87 = 0UL;
    int8_t *l_94 = &g_26;
    int8_t **l_93 = &l_94;
    int8_t ***l_92 = &l_93;
    int8_t l_160[1][1];
    const uint8_t l_172 = 0xDDL;
    int32_t l_174 = 0x99E5CBC0L;
    const int32_t l_217 = 6L;
    uint64_t l_245 = 0xBCD455895EBCA2F6LL;
    union U4 * const l_361 = &g_192[3];
    union U3 *l_371 = (void*)0;
    union U3 **l_370 = &l_371;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_160[i][j] = 0xB2L;
    }
    ++g_55;
    g_50 = ((safe_unary_minus_func_uint8_t_u((((+(((g_88[4][1] = ((((p_30 = (((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((((*p_29) = ((((safe_mod_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((g_86[0] ^= ((((*l_83) &= (safe_unary_minus_func_int64_t_s(((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((*l_53) == ((*l_75) = g_55)), p_28.f0)), ((((((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(((g_81 , (g_44[3] , 0xC96AADB6L)) || (((+0xACL) == (-1L)) && (*p_29))), 3)), g_81.f3)) || 0xE5L) >= 4L) == p_30) >= p_30) || g_44[2]))) | (*l_53))))) , (void*)0) != (void*)0)), g_81.f6)), g_81.f6)) , g_81.f6) , (*p_32)) , (*p_29))) > g_55) && 0x1625L), p_28.f0)), p_28.f0)), l_87)) < g_44[0]) > (-7L))) != 0xBE448D75FB7473ACLL) < 1L) && (*p_32))) == g_81.f3) >= g_81.f1)) || (*g_25)) > (-10L)))) , g_50);
    for (g_55 = 0; (g_55 <= 5); g_55 += 1)
    { 
        int8_t *l_90 = &g_26;
        int8_t **l_89 = &l_90;
        int8_t ***l_97 = &l_89;
        int8_t ***l_101 = &l_93;
        int32_t l_113 = (-10L);
        int32_t l_124 = 5L;
        int32_t l_136 = (-1L);
        int32_t l_138 = 0L;
        int32_t l_139 = 0L;
        int32_t l_141 = 0x6B87B52CL;
        int32_t l_142 = (-6L);
        int32_t l_143 = 0x381F6D55L;
        int32_t l_144 = 0L;
        struct S0 l_148 = {4294967291UL,0xF39FL,0x9454L,0x42L,0xA7F906C0L,0UL,0xF83BD7E1L,18446744073709551615UL};
        int32_t l_159 = (-1L);
        int32_t l_161 = 0xE3149756L;
        int32_t *l_173 = &l_159;
        int32_t l_175 = 0x75634F04L;
        uint32_t l_176[3][5][6] = {{{1UL,4294967295UL,0xDCBCF7E2L,0x0EE47B89L,0x0EE47B89L,0xDCBCF7E2L},{1UL,1UL,0x5DBF1D54L,0x2DD10499L,1UL,0xDCBCF7E2L},{0x2DD10499L,1UL,0xDCBCF7E2L,1UL,4294967291UL,0x5DBF1D54L},{0x608B5A75L,0x2DD10499L,0xDCBCF7E2L,4294967288UL,1UL,0xDCBCF7E2L},{0x0EE47B89L,4294967288UL,0x5DBF1D54L,4294967295UL,0x608B5A75L,0xDCBCF7E2L}},{{4294967295UL,0x608B5A75L,0xDCBCF7E2L,0x608B5A75L,4294967295UL,0x5DBF1D54L},{1UL,4294967291UL,0xDCBCF7E2L,1UL,4294967288UL,0xDCBCF7E2L},{4294967288UL,0x0EE47B89L,0x5DBF1D54L,4294967291UL,1UL,0xDCBCF7E2L},{4294967291UL,1UL,0xDCBCF7E2L,1UL,0x2DD10499L,0x5DBF1D54L},{1UL,4294967295UL,0xDCBCF7E2L,0x0EE47B89L,0x0EE47B89L,0xDCBCF7E2L}},{{1UL,1UL,0x5DBF1D54L,0x2DD10499L,1UL,0xDCBCF7E2L},{0x2DD10499L,1UL,0xDCBCF7E2L,1UL,4294967291UL,0x5DBF1D54L},{0x608B5A75L,0x2DD10499L,0xDCBCF7E2L,4294967288UL,1UL,0xDCBCF7E2L},{0x0EE47B89L,4294967288UL,0x5DBF1D54L,4294967295UL,0x608B5A75L,0xDCBCF7E2L},{4294967295UL,0x608B5A75L,0xDCBCF7E2L,0x608B5A75L,4294967295UL,0x5DBF1D54L}}};
        uint32_t l_188 = 4294967295UL;
        union U4 **l_196 = &g_191;
        const uint32_t **l_213 = (void*)0;
        const uint32_t *l_215 = &g_216;
        const uint32_t **l_214 = &l_215;
        uint64_t **l_221 = &l_85[4];
        uint64_t ***l_220 = &l_221;
        uint64_t ***l_222 = (void*)0;
        uint64_t **l_223 = &l_85[1];
        uint8_t *l_224[2][7][6] = {{{&g_55,&g_55,&g_81.f3,&l_148.f3,&g_81.f3,(void*)0},{&g_55,&g_55,&l_148.f3,&l_148.f3,&l_148.f3,&g_81.f3},{&g_81.f3,&g_55,&l_148.f3,&g_81.f3,&g_55,(void*)0},{&l_148.f3,&g_81.f3,&g_81.f3,&g_81.f3,&l_148.f3,(void*)0},{&g_81.f3,&l_148.f3,(void*)0,&l_148.f3,&l_148.f3,&g_81.f3},{&g_55,&g_81.f3,&l_148.f3,&l_148.f3,&g_55,&g_81.f3},{&g_55,&g_55,(void*)0,&l_148.f3,&l_148.f3,(void*)0}},{{&g_55,&g_55,&g_81.f3,&l_148.f3,&g_81.f3,(void*)0},{&g_55,&g_55,&l_148.f3,&l_148.f3,&l_148.f3,&g_81.f3},{&g_81.f3,&g_55,&l_148.f3,&l_148.f3,&l_148.f3,&l_148.f3},{&g_55,&l_148.f3,&g_55,&l_148.f3,&g_55,&l_148.f3},{&l_148.f3,&g_55,&l_148.f3,&l_148.f3,&g_55,&g_55},{&g_81.f3,&l_148.f3,&g_81.f3,&g_55,&l_148.f3,&g_55},{&l_148.f3,&g_81.f3,&l_148.f3,&g_55,&g_55,&l_148.f3}}};
        int8_t l_308 = 0x50L;
        uint32_t l_312 = 0x316684B7L;
        int i, j, k;
    }
    return (*g_99);
}



static union U4  func_33(int8_t * p_34, uint16_t  p_35, int8_t * p_36, int8_t * p_37, int8_t * p_38)
{ 
    int32_t *l_48 = &g_44[0];
    int32_t *l_49 = &g_50;
    union U4 l_51 = {0L};
    (*l_49) = ((*l_48) = (((*g_25) , &g_44[0]) == l_48));
    return l_51;
}



static int8_t * func_39(uint8_t  p_40)
{ 
    int32_t *l_43 = &g_44[0];
    int8_t *l_46 = (void*)0;
    int8_t * const *l_45 = &l_46;
    int8_t * const **l_47 = &l_45;
    (*l_43) = ((p_40 , &g_26) != &g_26);
    (*l_47) = l_45;
    return l_46;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_44[i], "g_44[i]", print_hash_value);

    }
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
    transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
    transparent_crc(g_81.f3, "g_81.f3", print_hash_value);
    transparent_crc(g_81.f4, "g_81.f4", print_hash_value);
    transparent_crc(g_81.f5, "g_81.f5", print_hash_value);
    transparent_crc(g_81.f6, "g_81.f6", print_hash_value);
    transparent_crc(g_81.f7, "g_81.f7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_86[i], "g_86[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_88[i][j], "g_88[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_137[i][j][k], "g_137[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_169.f0, "g_169.f0", print_hash_value);
    transparent_crc(g_169.f1, "g_169.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_192[i].f0, "g_192[i].f0", print_hash_value);

    }
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_262.f0, "g_262.f0", print_hash_value);
    transparent_crc(g_262.f1, "g_262.f1", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_318[i][j][k].f0.f0, "g_318[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_318[i][j][k].f0.f1, "g_318[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_318[i][j][k].f0.f2, "g_318[i][j][k].f0.f2", print_hash_value);
                transparent_crc(g_318[i][j][k].f0.f3, "g_318[i][j][k].f0.f3", print_hash_value);
                transparent_crc(g_318[i][j][k].f0.f4, "g_318[i][j][k].f0.f4", print_hash_value);
                transparent_crc(g_318[i][j][k].f0.f5, "g_318[i][j][k].f0.f5", print_hash_value);
                transparent_crc(g_318[i][j][k].f0.f6, "g_318[i][j][k].f0.f6", print_hash_value);
                transparent_crc(g_318[i][j][k].f0.f7, "g_318[i][j][k].f0.f7", print_hash_value);

            }
        }
    }
    transparent_crc(g_451.f0, "g_451.f0", print_hash_value);
    transparent_crc(g_451.f1, "g_451.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_595[i][j][k].f0, "g_595[i][j][k].f0", print_hash_value);
                transparent_crc(g_595[i][j][k].f1, "g_595[i][j][k].f1", print_hash_value);
                transparent_crc(g_595[i][j][k].f2, "g_595[i][j][k].f2", print_hash_value);
                transparent_crc(g_595[i][j][k].f3, "g_595[i][j][k].f3", print_hash_value);
                transparent_crc(g_595[i][j][k].f4, "g_595[i][j][k].f4", print_hash_value);
                transparent_crc(g_595[i][j][k].f5, "g_595[i][j][k].f5", print_hash_value);
                transparent_crc(g_595[i][j][k].f6, "g_595[i][j][k].f6", print_hash_value);
                transparent_crc(g_595[i][j][k].f7, "g_595[i][j][k].f7", print_hash_value);

            }
        }
    }
    transparent_crc(g_629, "g_629", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
