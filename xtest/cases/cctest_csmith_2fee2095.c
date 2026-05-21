// SPDX-License-Identifier: MIT
// cctest_csmith_2fee2095.c --- cctest case csmith_2fee2095 (csmith seed 804135061)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6006e999 */

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

// Options:   -s 804135061 -o /tmp/csmith_gen_p456n1da/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int16_t  f0;
   uint32_t  f1;
   int64_t  f2;
   int8_t  f3;
   int8_t  f4;
   uint8_t  f5;
   int32_t  f6;
   int32_t  f7;
};

union U1 {
   int32_t  f0;
   int32_t  f1;
   const struct S0  f2;
};

union U2 {
   int16_t  f0;
   const struct S0  f1;
   uint8_t  f2;
};


static uint32_t g_7[7] = {6UL,18446744073709551610UL,6UL,6UL,18446744073709551610UL,6UL,6UL};
static int64_t g_9 = (-1L);
static int64_t g_13[3] = {0xF8D9A2B82C4475EELL,0xF8D9A2B82C4475EELL,0xF8D9A2B82C4475EELL};
static int64_t *g_12 = &g_13[0];
static int32_t g_22 = 0xFDAF0DB1L;
static int32_t * const g_63 = (void*)0;
static int32_t * const *g_62 = &g_63;
static int16_t g_69 = (-2L);
static uint8_t g_104 = 0x9EL;
static union U1 g_107 = {0x8206D70DL};
static union U1 *g_106 = &g_107;
static union U1 g_111 = {-3L};
static uint64_t g_121[5][7][7] = {{{18446744073709551607UL,18446744073709551615UL,0x80F4B2D4C7A7D0CFLL,0x4006628F037580B2LL,0UL,0x1E1CB09366CA3FDCLL,0UL},{0x4006628F037580B2LL,18446744073709551609UL,18446744073709551609UL,0x4006628F037580B2LL,4UL,18446744073709551612UL,0x5CD97642F9FB1DD7LL},{0xA9B0B690C4FCC00BLL,1UL,1UL,0x30E60E143445DC91LL,1UL,18446744073709551611UL,0x736C1642D9A1771DLL},{0UL,0x313BA82727C9044CLL,0x1E1CB09366CA3FDCLL,18446744073709551615UL,18446744073709551609UL,0x1E1CB09366CA3FDCLL,0x5CD97642F9FB1DD7LL},{0UL,0x736C1642D9A1771DLL,0xA9B0B690C4FCC00BLL,0UL,0x30E60E143445DC91LL,0x30E60E143445DC91LL,0UL},{0xA9B0B690C4FCC00BLL,0x2777C731693D23E4LL,1UL,18446744073709551606UL,18446744073709551609UL,0x80F4B2D4C7A7D0CFLL,18446744073709551615UL},{18446744073709551609UL,4UL,18446744073709551615UL,0x30E60E143445DC91LL,0x736C1642D9A1771DLL,18446744073709551607UL,18446744073709551612UL}},{{0xA9B0B690C4FCC00BLL,18446744073709551615UL,0UL,18446744073709551611UL,18446744073709551615UL,0x80F4B2D4C7A7D0CFLL,0xA9B0B690C4FCC00BLL},{8UL,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551611UL,18446744073709551611UL,18446744073709551607UL,18446744073709551609UL,4UL,18446744073709551615UL,0x30E60E143445DC91LL},{0x736C1642D9A1771DLL,18446744073709551615UL,0x1E1CB09366CA3FDCLL,0x736C1642D9A1771DLL,18446744073709551606UL,0xAEC8E115B8A5FABFLL,18446744073709551609UL},{1UL,4UL,18446744073709551606UL,18446744073709551615UL,4UL,8UL,0x1E1CB09366CA3FDCLL},{0x30E60E143445DC91LL,0x2777C731693D23E4LL,18446744073709551615UL,18446744073709551612UL,18446744073709551612UL,18446744073709551615UL,0x2777C731693D23E4LL},{0x30E60E143445DC91LL,0x1E1CB09366CA3FDCLL,8UL,4UL,18446744073709551615UL,18446744073709551606UL,4UL}},{{1UL,18446744073709551609UL,0xAEC8E115B8A5FABFLL,18446744073709551606UL,0x736C1642D9A1771DLL,0x1E1CB09366CA3FDCLL,18446744073709551615UL},{0x736C1642D9A1771DLL,0x30E60E143445DC91LL,18446744073709551615UL,4UL,18446744073709551609UL,18446744073709551607UL,18446744073709551611UL},{18446744073709551611UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551611UL},{8UL,0xA9B0B690C4FCC00BLL,0x80F4B2D4C7A7D0CFLL,18446744073709551615UL,18446744073709551611UL,0UL,18446744073709551615UL},{0xA9B0B690C4FCC00BLL,18446744073709551612UL,18446744073709551607UL,0x736C1642D9A1771DLL,0x30E60E143445DC91LL,18446744073709551615UL,4UL},{18446744073709551609UL,18446744073709551615UL,0x80F4B2D4C7A7D0CFLL,18446744073709551609UL,18446744073709551606UL,1UL,0x2777C731693D23E4LL},{1UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,1UL,0x1E1CB09366CA3FDCLL}},{{4UL,0x736C1642D9A1771DLL,18446744073709551615UL,18446744073709551611UL,0xA9B0B690C4FCC00BLL,18446744073709551615UL,18446744073709551609UL},{1UL,0x1E1CB09366CA3FDCLL,0xAEC8E115B8A5FABFLL,0x30E60E143445DC91LL,18446744073709551615UL,0UL,0x30E60E143445DC91LL},{1UL,0x736C1642D9A1771DLL,8UL,18446744073709551606UL,0x2777C731693D23E4LL,18446744073709551615UL,18446744073709551615UL},{0x2777C731693D23E4LL,1UL,18446744073709551615UL,1UL,0x2777C731693D23E4LL,18446744073709551607UL,0xA9B0B690C4FCC00BLL},{18446744073709551612UL,18446744073709551615UL,18446744073709551606UL,0xA9B0B690C4FCC00BLL,18446744073709551615UL,0x1E1CB09366CA3FDCLL,18446744073709551612UL},{8UL,18446744073709551612UL,0x1E1CB09366CA3FDCLL,18446744073709551615UL,0xA9B0B690C4FCC00BLL,18446744073709551606UL,18446744073709551615UL},{18446744073709551612UL,0xA9B0B690C4FCC00BLL,18446744073709551607UL,0x2777C731693D23E4LL,1UL,18446744073709551615UL,1UL}},{{0x2777C731693D23E4LL,18446744073709551615UL,18446744073709551615UL,0x2777C731693D23E4LL,18446744073709551606UL,8UL,0x736C1642D9A1771DLL},{1UL,0x30E60E143445DC91LL,0UL,18446744073709551615UL,0x30E60E143445DC91LL,0xAEC8E115B8A5FABFLL,0x1E1CB09366CA3FDCLL},{1UL,18446744073709551609UL,18446744073709551615UL,0xA9B0B690C4FCC00BLL,18446744073709551611UL,18446744073709551615UL,0x736C1642D9A1771DLL},{4UL,0x1E1CB09366CA3FDCLL,1UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL},{1UL,0x2777C731693D23E4LL,1UL,0x313BA82727C9044CLL,18446744073709551615UL,18446744073709551607UL,18446744073709551609UL},{18446744073709551615UL,18446744073709551606UL,0xA9B0B690C4FCC00BLL,18446744073709551615UL,0x1E1CB09366CA3FDCLL,18446744073709551612UL,8UL},{1UL,18446744073709551609UL,0x5CD97642F9FB1DD7LL,0xAEC8E115B8A5FABFLL,0x4006628F037580B2LL,18446744073709551607UL,1UL}}};
static union U1 g_154 = {0L};
static int8_t g_161 = 0L;
static int32_t *g_183 = &g_107.f0;
static uint64_t g_191 = 2UL;
static union U1 **g_203 = &g_106;
static union U1 ***g_202 = &g_203;
static int32_t g_209 = 0xD7926D94L;
static uint64_t g_210 = 0UL;
static struct S0 g_215 = {0x360CL,0UL,0x0BE9473F7F670FADLL,0xD2L,0xB6L,255UL,1L,0x2BCF6677L};
static int32_t **g_219 = (void*)0;
static int32_t ***g_218 = &g_219;
static uint16_t g_230[4][4] = {{0x60EAL,0x60EAL,0x60EAL,0x60EAL},{0x60EAL,0x60EAL,0x60EAL,0x60EAL},{0x60EAL,0x60EAL,0x60EAL,0x60EAL},{0x60EAL,0x60EAL,0x60EAL,0x60EAL}};
static uint16_t g_233 = 0x543CL;
static uint32_t g_308 = 8UL;
static union U1 ** const **g_339 = (void*)0;
static union U2 g_353 = {0xAAC9L};
static uint32_t g_395 = 0x6CAD5DE5L;
static union U2 *g_402 = &g_353;
static union U2 **g_401 = &g_402;
static int32_t g_468 = 1L;
static uint8_t g_471 = 0x1BL;
static union U2 ***g_485 = &g_401;
static const int32_t *g_601 = (void*)0;
static int32_t *g_616[6] = {(void*)0,(void*)0,&g_154.f1,(void*)0,(void*)0,&g_154.f1};
static int16_t *g_623 = &g_69;
static int32_t g_677 = 4L;
static uint32_t g_715 = 0xE366C77FL;
static uint16_t g_722[1] = {65527UL};
static union U2 ****g_746 = &g_485;
static union U2 *****g_745 = &g_746;
static int32_t g_748 = 1L;
static int32_t *****g_770 = (void*)0;
static uint16_t *g_800[2][6][5] = {{{&g_722[0],&g_722[0],&g_722[0],&g_722[0],&g_230[2][2]},{&g_722[0],&g_722[0],&g_233,&g_233,&g_722[0]},{&g_722[0],&g_233,&g_230[2][2],&g_233,&g_722[0]},{&g_722[0],&g_233,(void*)0,&g_233,&g_722[0]},{(void*)0,&g_233,&g_722[0],&g_722[0],&g_233},{&g_230[2][2],&g_233,&g_722[0],&g_233,&g_722[0]}},{{&g_233,&g_722[0],&g_722[0],&g_233,&g_722[0]},{&g_722[0],&g_722[0],&g_722[0],&g_230[2][2],&g_722[0]},{&g_233,&g_722[0],(void*)0,&g_230[2][2],&g_230[2][2]},{&g_230[2][2],&g_230[2][2],&g_230[2][2],&g_233,&g_233},{(void*)0,&g_722[0],&g_233,&g_233,&g_233},{&g_722[0],&g_722[0],&g_722[0],&g_722[0],&g_230[2][2]}}};
static uint16_t **g_799 = &g_800[0][2][1];
static int32_t *** const *g_807[7][4] = {{&g_218,&g_218,&g_218,&g_218},{&g_218,&g_218,&g_218,&g_218},{&g_218,&g_218,(void*)0,&g_218},{&g_218,&g_218,&g_218,&g_218},{&g_218,&g_218,&g_218,&g_218},{&g_218,&g_218,&g_218,(void*)0},{&g_218,&g_218,(void*)0,(void*)0}};
static int32_t *** const **g_806 = &g_807[1][1];
static uint64_t g_846 = 0xEDA6D36072CC977DLL;
static uint32_t g_918 = 0xF56D7E7BL;
static const union U1 g_942 = {0x050BBE0FL};
static const int16_t g_944 = 0x709BL;
static int8_t *g_1007[1][1] = {{&g_215.f3}};
static int8_t **g_1006 = &g_1007[0][0];
static int8_t g_1054 = (-1L);
static uint32_t *g_1297 = (void*)0;
static int64_t *g_1315 = &g_215.f2;
static uint64_t *g_1376 = &g_846;
static union U2 g_1416 = {0xF681L};
static uint32_t g_1431 = 0x9714C47CL;
static uint32_t g_1456 = 18446744073709551612UL;
static int32_t g_1486[1] = {0x78F6738CL};
static int32_t g_1570 = 0xAA527996L;
static int32_t g_1586 = 0x06FD8CB7L;
static union U2 g_1651 = {0x5810L};
static uint8_t g_1756 = 0UL;
static int16_t g_1857 = 0x451DL;



static int16_t  func_1(void);
static int32_t  func_2(uint16_t  p_3, int64_t  p_4, const struct S0  p_5);
static int64_t * func_14(struct S0  p_15, int64_t * p_16, uint32_t  p_17, int64_t  p_18);
static const int32_t  func_23(uint32_t  p_24, uint8_t  p_25, int16_t  p_26, uint16_t  p_27);
static uint32_t  func_30(uint32_t  p_31, int32_t * p_32);
static int64_t ** func_33(int64_t  p_34, int32_t  p_35, int16_t  p_36, int64_t ** p_37, int64_t * const  p_38);
static uint16_t  func_39(int64_t * p_40, int32_t * p_41, int8_t  p_42, int16_t  p_43, int64_t * p_44);
static int8_t  func_55(int32_t * p_56, int32_t * p_57, int8_t  p_58, int32_t * p_59, uint16_t  p_60);




static int16_t  func_1(void)
{ 
    int32_t l_6 = 0xA2AE7B79L;
    int64_t *l_8 = &g_9;
    struct S0 l_19[4][2][2] = {{{{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL},{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL}},{{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL},{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL}}},{{{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL},{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL}},{{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL},{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL}}},{{{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL},{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL}},{{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL},{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL}}},{{{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL},{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL}},{{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL},{0x70E8L,0UL,0x829CBC21B07FB07DLL,3L,0L,0x57L,0x1AC7EB23L,0x728AD64DL}}}};
    struct S0 l_1694 = {0x0C98L,0UL,0x7EAD06675170D86ALL,0xF5L,0x62L,255UL,1L,0x43C5BC6DL};
    uint64_t **l_1695 = &g_1376;
    uint32_t l_1697 = 4294967295UL;
    const int32_t l_1698 = 0xB5AFBB4BL;
    int32_t l_1733 = 0x86177CCCL;
    int32_t l_1734 = 0L;
    uint16_t l_1748 = 0x411BL;
    uint32_t l_1800 = 0x2D43D837L;
    int32_t ****l_1806 = &g_218;
    int32_t *****l_1805 = &l_1806;
    int8_t l_1827 = (-5L);
    uint8_t l_1828 = 0xA7L;
    const uint16_t l_1838[6][1][6] = {{{0UL,0x8F00L,0x5551L,0x5551L,0x8F00L,0UL}},{{0UL,65533UL,65535UL,0x5551L,65533UL,0x5551L}},{{0UL,0x4703L,0UL,0x5551L,0x4703L,65535UL}},{{0UL,0x8F00L,0x5551L,0x5551L,0x8F00L,0UL}},{{0UL,65533UL,65535UL,0x5551L,65533UL,0x5551L}},{{0UL,0x4703L,0UL,0x5551L,0x4703L,65535UL}}};
    uint32_t l_1842 = 0x4ECF354CL;
    int i, j, k;
lbl_1856:
    if ((func_2(l_6, ((*l_8) = g_7[5]), (((safe_add_func_uint64_t_u_u(((void*)0 != g_12), (l_8 != (g_1315 = func_14(l_19[0][1][1], &g_13[0], l_6, l_19[0][1][1].f1))))) <= 0x8DAAAC680E39400CLL) , g_215)) , l_19[0][1][1].f3))
    { 
        int16_t l_1696 = 1L;
        const int32_t *l_1703 = (void*)0;
        uint32_t l_1708 = 3UL;
        uint32_t l_1727 = 0x2AC3F2B4L;
        int32_t l_1732 = 0L;
        int32_t l_1736[3][3][3] = {{{0x86B22EEAL,0x4AB2FD77L,0x86B22EEAL},{(-1L),0x181A2DEAL,(-5L)},{(-1L),0L,0x4AB2FD77L}},{{0x27F6B973L,(-1L),(-1L)},{(-1L),0x27F6B973L,0x27F6B973L},{0x27F6B973L,(-5L),1L}},{{0x86B22EEAL,3L,1L},{0x181A2DEAL,1L,0x27F6B973L},{9L,0x4AB2FD77L,(-1L)}}};
        int8_t l_1746 = (-1L);
        struct S0 l_1807 = {0xE316L,0x08EC7C2CL,0xAB57BBDB676023D2LL,0x80L,-10L,246UL,0x5364F773L,-7L};
        uint32_t l_1808[6] = {0x8DEC0A97L,0x8DEC0A97L,0x8DEC0A97L,0x8DEC0A97L,0x8DEC0A97L,0x8DEC0A97L};
        union U2 l_1820 = {1L};
        int32_t **l_1821 = &g_183;
        int32_t *l_1831 = (void*)0;
        int32_t *l_1832 = &g_107.f1;
        int32_t *l_1833 = &g_1486[0];
        int i, j, k;
lbl_1709:
        (*g_183) &= ((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((((g_942.f0 || ((((+(safe_mod_func_int16_t_s_s((*g_623), (-1L)))) > (((l_1694 , l_1695) == (void*)0) != 0x0C5D6B607CA96476LL)) | 0x1DL) || (**g_1006))) <= l_1696) , l_1697), (*g_623))), l_1696)) , l_1698);
        for (g_210 = 0; (g_210 <= 0); g_210 += 1)
        { 
            uint64_t l_1737[5][6][4] = {{{18446744073709551608UL,8UL,18446744073709551608UL,0xAF8B3B32498E173CLL},{18446744073709551615UL,8UL,18446744073709551615UL,8UL},{18446744073709551615UL,0xAF8B3B32498E173CLL,18446744073709551608UL,8UL},{18446744073709551608UL,8UL,18446744073709551608UL,0xAF8B3B32498E173CLL},{18446744073709551615UL,8UL,18446744073709551615UL,8UL},{18446744073709551615UL,0xAF8B3B32498E173CLL,18446744073709551608UL,8UL}},{{18446744073709551608UL,8UL,18446744073709551608UL,0xAF8B3B32498E173CLL},{18446744073709551615UL,8UL,18446744073709551615UL,8UL},{18446744073709551615UL,0xAF8B3B32498E173CLL,18446744073709551608UL,8UL},{18446744073709551608UL,8UL,18446744073709551608UL,0xAF8B3B32498E173CLL},{18446744073709551615UL,8UL,18446744073709551615UL,8UL},{18446744073709551615UL,0xAF8B3B32498E173CLL,18446744073709551608UL,8UL}},{{18446744073709551608UL,8UL,18446744073709551608UL,0xAF8B3B32498E173CLL},{18446744073709551615UL,8UL,18446744073709551615UL,8UL},{18446744073709551615UL,0xAF8B3B32498E173CLL,18446744073709551608UL,8UL},{18446744073709551608UL,8UL,18446744073709551608UL,0xAF8B3B32498E173CLL},{18446744073709551615UL,8UL,18446744073709551615UL,8UL},{18446744073709551615UL,0xAF8B3B32498E173CLL,18446744073709551608UL,8UL}},{{18446744073709551608UL,8UL,18446744073709551608UL,0xAF8B3B32498E173CLL},{18446744073709551615UL,8UL,18446744073709551615UL,8UL},{18446744073709551615UL,0xAF8B3B32498E173CLL,18446744073709551608UL,8UL},{18446744073709551608UL,8UL,18446744073709551608UL,0xAF8B3B32498E173CLL},{18446744073709551615UL,8UL,18446744073709551615UL,8UL},{18446744073709551615UL,0xAF8B3B32498E173CLL,18446744073709551608UL,8UL}},{{18446744073709551608UL,8UL,18446744073709551608UL,0xAF8B3B32498E173CLL},{18446744073709551615UL,8UL,18446744073709551615UL,8UL},{18446744073709551615UL,0xAF8B3B32498E173CLL,18446744073709551608UL,8UL},{18446744073709551608UL,8UL,18446744073709551608UL,0xAF8B3B32498E173CLL},{18446744073709551615UL,8UL,18446744073709551615UL,8UL},{18446744073709551615UL,0xAF8B3B32498E173CLL,18446744073709551608UL,8UL}}};
            int32_t l_1752 = (-10L);
            int32_t l_1753 = 0x0903A02DL;
            int32_t l_1755 = 0x63E8D313L;
            uint64_t l_1761[5][5] = {{4UL,18446744073709551615UL,4UL,18446744073709551615UL,4UL},{0x59F5001026B2B98FLL,0x59F5001026B2B98FLL,0x59F5001026B2B98FLL,0x59F5001026B2B98FLL,0x59F5001026B2B98FLL},{4UL,18446744073709551615UL,4UL,18446744073709551615UL,4UL},{0x59F5001026B2B98FLL,0x59F5001026B2B98FLL,0x59F5001026B2B98FLL,0x59F5001026B2B98FLL,0x59F5001026B2B98FLL},{4UL,18446744073709551615UL,4UL,18446744073709551615UL,4UL}};
            union U1 l_1764[4][7] = {{{-9L},{8L},{0L},{0L},{0L},{0L},{8L}},{{-9L},{8L},{0L},{0L},{0L},{0L},{8L}},{{-9L},{8L},{0L},{0L},{0L},{0L},{0L}},{{0x393DECC6L},{0L},{0L},{-9L},{-9L},{0L},{0L}}};
            uint8_t l_1774 = 255UL;
            union U2 *****l_1799[5][4] = {{&g_746,&g_746,&g_746,&g_746},{&g_746,&g_746,&g_746,&g_746},{&g_746,&g_746,(void*)0,&g_746},{&g_746,&g_746,&g_746,&g_746},{&g_746,&g_746,&g_746,&g_746}};
            int32_t *l_1823 = &g_677;
            int32_t *l_1824 = &l_1734;
            int32_t *l_1825[3][6] = {{&l_1736[2][1][0],&l_1736[2][1][0],&g_1586,&g_1586,&l_1736[2][1][0],&l_1736[2][1][0]},{&l_1736[2][1][0],&g_1586,&g_1586,&l_1736[2][1][0],&l_1736[2][1][0],&g_1586},{&l_1736[2][1][0],&l_1736[2][1][0],&g_1586,&g_1586,&l_1736[2][1][0],&l_1736[2][1][0]}};
            int32_t l_1826 = 0x7DB4268CL;
            int i, j, k;
            if ((g_1486[g_210] , (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((l_1703 != (void*)0) != (safe_sub_func_int8_t_s_s((l_1696 & (((((*g_623) = ((safe_mul_func_uint8_t_u_u(((((l_1694.f7 | l_1694.f4) , (*g_1376)) < (*g_12)) || (*g_12)), l_19[0][1][1].f4)) != l_19[0][1][1].f3)) >= (-1L)) == (**g_1006)) , (*g_1376))), (**g_1006)))), 0L)), l_1708))))
            { 
                int8_t l_1720 = 0xAAL;
                uint16_t *l_1728 = &g_722[0];
                int64_t l_1729 = 1L;
                int32_t l_1731 = 0x013C72B0L;
                int32_t l_1751 = 1L;
                int8_t ** const l_1772 = &g_1007[0][0];
                if (g_215.f5)
                    goto lbl_1709;
                if ((safe_div_func_uint64_t_u_u((0UL != (safe_mul_func_int8_t_s_s((g_1486[g_210] < (((safe_lshift_func_int8_t_s_s(((**g_1006) = (safe_mod_func_uint16_t_u_u(((((safe_div_func_int32_t_s_s(5L, (g_918 = l_1720))) < ((*l_1728) = ((((+(safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u(0x898AL, 5))))) , ((safe_mul_func_int16_t_s_s(0x865FL, ((*g_623) && (*g_623)))) , g_1486[g_210])) > g_215.f5) == l_1727))) & 0xBADB092E4EF9D3C7LL) <= (*g_623)), 0x7AEAL))), g_1486[g_210])) > g_1486[g_210]) >= g_154.f0)), l_1720))), l_1729)))
                { 
                    int32_t *l_1730[5];
                    int32_t l_1735[4];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1730[i] = (void*)0;
                    for (i = 0; i < 4; i++)
                        l_1735[i] = 1L;
                    --l_1737[2][4][3];
                    if (l_1720)
                        break;
                    if (l_1737[1][1][1])
                        break;
                }
                else
                { 
                    uint16_t l_1740 = 0UL;
                    int8_t l_1745 = 0x7FL;
                    union U1 *l_1747 = &g_107;
                    ++l_1740;
                    l_1748 = (((safe_rshift_func_uint16_t_u_u((l_1740 && 0x7DC02227L), l_1745)) ^ l_1746) | (l_1747 == l_1747));
                    return (*g_623);
                }
                for (l_1694.f1 = 0; (l_1694.f1 < 23); ++l_1694.f1)
                { 
                    int32_t *l_1754[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1754[i] = (void*)0;
                    g_1756--;
                    return (*g_623);
                }
                l_1736[0][1][2] = 0L;
                for (g_353.f0 = 28; (g_353.f0 >= 29); g_353.f0++)
                { 
                    int32_t l_1773 = 0x8C7396DAL;
                    if (l_1761[3][3])
                        break;
                    l_1732 = ((*g_183) = ((safe_lshift_func_int8_t_s_u(l_19[0][1][1].f4, (l_1764[2][0] , ((safe_rshift_func_uint16_t_u_s(((l_1736[2][1][0] ^= (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_1720, g_471)), (!(l_1772 == &g_1007[0][0]))))) || 2UL), l_1773)) == l_1773)))) >= (*g_1376)));
                }
            }
            else
            { 
                return (*g_623);
            }
            if (l_1708)
                break;
            if ((l_1774 ^= l_1737[2][4][3]))
            { 
                uint16_t l_1776 = 2UL;
                int32_t l_1812 = (-1L);
                int32_t l_1816[3][2][2] = {{{(-5L),(-5L)},{(-5L),(-5L)}},{{(-5L),(-5L)},{(-5L),(-5L)}},{{(-5L),(-5L)},{(-5L),(-5L)}}};
                uint64_t l_1817[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1817[i] = 18446744073709551615UL;
                if (l_1748)
                { 
                    int32_t *l_1775[5][3] = {{&g_107.f1,&g_107.f1,&g_107.f0},{&g_107.f1,&g_107.f1,&g_107.f0},{&g_107.f1,&g_107.f1,&g_107.f0},{&g_107.f1,&g_107.f1,&g_107.f0},{&g_107.f1,&g_107.f1,&g_107.f0}};
                    int i, j;
                    l_1776++;
                    if ((*g_183))
                        continue;
                    (*g_183) = (((safe_lshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((void*)0 != &g_1431), (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s((((*g_12) | ((l_19[0][1][1].f3 & (((**g_1006) = (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(((g_745 = &g_746) == (l_1799[2][1] = l_1799[3][3])), (&g_13[0] != &g_13[0]))) & l_1698), l_1737[0][5][0])) == g_154.f0), g_471)), (-1L))), l_1776))) , l_1774)) != g_215.f5)) < l_1696), 0x1FA7A317L)) > 5L), 1)))) >= l_1800), (*g_623))) && 0UL) > (*g_12));
                }
                else
                { 
                    uint64_t l_1809 = 0xEBB340CB3E8A40C5LL;
                    int32_t **l_1811 = (void*)0;
                    int32_t ***l_1810 = &l_1811;
                    int32_t *l_1813 = &l_1764[2][0].f1;
                    int32_t *l_1814 = &g_154.f0;
                    int32_t *l_1815[7] = {&l_1736[2][0][1],&l_1736[2][0][1],&l_1734,&l_1736[2][0][1],&l_1736[2][0][1],&l_1734,&l_1736[2][0][1]};
                    int i;
                    (*g_183) ^= (((safe_mod_func_uint8_t_u_u(((((*g_623) & ((safe_add_func_int32_t_s_s((((*l_1810) = ((**l_1806) = ((((l_1761[3][3] , l_1805) == &l_1806) <= (((((l_1807 , ((**g_401) , 0x08A66AADL)) || l_1808[2]) && l_1776) < l_1809) | l_1809)) , (*g_218)))) == (void*)0), 0x4469FF14L)) || (*g_623))) >= g_230[1][1]) == l_1776), 247UL)) ^ g_121[4][3][5]) == l_1809);
                    ++l_1817[4];
                }
                return (*g_623);
            }
            else
            { 
                int32_t ** const l_1822 = &g_616[5];
                (*g_183) = (l_1820 , (0x4B1F9A66L != (((**l_1806) = l_1821) != l_1822)));
            }
            l_1828--;
        }
        (*l_1833) = (**l_1821);
    }
    else
    { 
        int32_t *l_1839 = (void*)0;
        int32_t l_1849 = (-9L);
        uint64_t l_1850[7][3][3] = {{{5UL,0x7795B700A6C2AA88LL,0xEF8FC911A9753D76LL},{18446744073709551615UL,0x7795B700A6C2AA88LL,0x7795B700A6C2AA88LL},{18446744073709551606UL,0x7795B700A6C2AA88LL,0xD63F3D3399E69940LL}},{{5UL,0x7795B700A6C2AA88LL,0xEF8FC911A9753D76LL},{18446744073709551615UL,0x7795B700A6C2AA88LL,0x7795B700A6C2AA88LL},{18446744073709551606UL,0x7795B700A6C2AA88LL,0xD63F3D3399E69940LL}},{{5UL,0x7795B700A6C2AA88LL,0xEF8FC911A9753D76LL},{18446744073709551615UL,0x7795B700A6C2AA88LL,0x7795B700A6C2AA88LL},{18446744073709551606UL,0x7795B700A6C2AA88LL,0xD63F3D3399E69940LL}},{{5UL,0x7795B700A6C2AA88LL,0xEF8FC911A9753D76LL},{18446744073709551615UL,0x7795B700A6C2AA88LL,0x7795B700A6C2AA88LL},{18446744073709551606UL,0x7795B700A6C2AA88LL,0xD63F3D3399E69940LL}},{{5UL,0x7795B700A6C2AA88LL,0xEF8FC911A9753D76LL},{18446744073709551615UL,0x7795B700A6C2AA88LL,0x7795B700A6C2AA88LL},{18446744073709551606UL,0x7795B700A6C2AA88LL,0xD63F3D3399E69940LL}},{{5UL,0x7795B700A6C2AA88LL,0xEF8FC911A9753D76LL},{18446744073709551615UL,0x7795B700A6C2AA88LL,0x7795B700A6C2AA88LL},{18446744073709551606UL,0x7795B700A6C2AA88LL,0xD63F3D3399E69940LL}},{{5UL,0x7795B700A6C2AA88LL,0xEF8FC911A9753D76LL},{18446744073709551615UL,0x7795B700A6C2AA88LL,0x7795B700A6C2AA88LL},{18446744073709551606UL,0x7795B700A6C2AA88LL,0xD63F3D3399E69940LL}}};
        int32_t l_1851 = 0xEDE0D95EL;
        int i, j, k;
        l_1851 = ((((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_1838[4][0][4], ((l_1839 = &g_1570) == &l_6))), ((((*g_1376) = (safe_rshift_func_int16_t_s_u((l_1842 , (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((g_395 , (*g_623)), (l_1850[3][0][1] ^= (safe_add_func_int8_t_s_s((l_1849 | l_1849), (**g_1006)))))), (*g_623)))), 5))) | g_233) < l_1851))) ^ (*g_12)) != (*g_12)) && l_1849);
        (*g_183) = ((safe_add_func_uint32_t_u_u(l_1850[6][0][0], g_13[0])) < g_1486[0]);
    }
    for (g_918 = 7; (g_918 > 55); g_918 = safe_add_func_int8_t_s_s(g_918, 1))
    { 
        if (g_107.f0)
            goto lbl_1856;
        (*g_183) = (-4L);
    }
    return g_1857;
}



static int32_t  func_2(uint16_t  p_3, int64_t  p_4, const struct S0  p_5)
{ 
    uint8_t l_1324 = 0xEBL;
    int8_t *l_1327 = &g_161;
    int32_t l_1344 = (-6L);
    int32_t l_1345 = (-1L);
    int32_t l_1346[1][1][3];
    uint64_t l_1347 = 0x7EC2B3354007A6A0LL;
    uint64_t *l_1377 = &g_191;
    union U2 l_1400 = {0x4345L};
    int32_t *l_1402 = &g_677;
    union U1 l_1408[2] = {{-1L},{-1L}};
    union U2 * const ** const **l_1413 = (void*)0;
    union U1 ***l_1518 = &g_203;
    int16_t l_1526[1];
    int32_t *l_1544[1][2];
    uint64_t l_1588 = 0x86180BD562715C4ELL;
    int32_t *****l_1595 = (void*)0;
    uint8_t l_1661 = 1UL;
    uint32_t *l_1674 = &g_308;
    uint16_t l_1685 = 0x0B44L;
    uint32_t l_1686 = 4UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_1346[i][j][k] = 0x2A57C067L;
        }
    }
    for (i = 0; i < 1; i++)
        l_1526[i] = 0x4D31L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1544[i][j] = (void*)0;
    }
    if ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(p_4, g_942.f0)) , (l_1324 == (255UL < 0xCCL))), ((*l_1327) ^= ((safe_lshift_func_int8_t_s_u(l_1324, 7)) ^ (g_215 , 0x18EDL))))), 246UL)))
    { 
        int16_t l_1335[6] = {0xCE66L,0xCE66L,0xCE66L,0xCE66L,0xCE66L,0xCE66L};
        uint16_t *l_1336 = &g_233;
        const union U2 *l_1338 = &g_353;
        const union U2 **l_1337 = &l_1338;
        int32_t *l_1339 = &g_107.f1;
        int32_t *l_1340 = &g_209;
        int32_t *l_1341 = &g_111.f1;
        int32_t *l_1342 = &g_154.f0;
        int32_t *l_1343[1];
        uint32_t *l_1366 = &g_215.f1;
        uint64_t *l_1373 = &g_191;
        uint64_t **l_1374 = (void*)0;
        uint64_t **l_1375 = &l_1373;
        int64_t *l_1379 = &g_215.f2;
        int32_t **l_1401[1][2][3] = {{{&l_1343[0],&l_1343[0],&l_1343[0]},{&g_616[1],&g_616[1],&g_616[1]}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1343[i] = &g_209;
        (*g_183) ^= (safe_add_func_int64_t_s_s(((~((safe_sub_func_uint16_t_u_u((p_3 ^= 0x2728L), ((*l_1336) ^= ((safe_add_func_uint32_t_u_u(0x5FB0A1C1L, p_5.f2)) ^ l_1335[1])))) ^ ((((void*)0 == &p_4) , (*g_485)) != l_1337))) != p_5.f7), p_5.f0));
        ++l_1347;
        l_1343[0] = ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((*l_1339), (p_3 = (((*l_1336) = (safe_mod_func_int64_t_s_s((!g_942.f1), ((*g_12) ^= p_5.f7)))) , (((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((*l_1340) & (safe_mul_func_uint8_t_u_u(((((!((safe_mod_func_uint32_t_u_u(((((((*g_12) = (((p_5.f3 != ((--(*l_1366)) , ((*l_1341) &= (safe_lshift_func_int8_t_s_s(((-1L) != (p_4 = (safe_rshift_func_uint16_t_u_u((1L || p_5.f4), 4)))), l_1346[0][0][0]))))) == p_5.f1) >= 18446744073709551615UL)) == p_5.f6) || 2UL) , (*g_623)) == 0xC178L), (*l_1339))) <= 0x7DB99D71L)) && p_5.f2) && (*l_1341)) | g_722[0]), p_5.f0))), 1)), p_5.f2)) <= 0x69B72517L) ^ (*l_1340)))))), 2)) , l_1342);
        (*l_1341) = (l_1344 >= ((*l_1379) = (((((*l_1375) = l_1373) == (l_1377 = (g_1376 = &g_121[4][1][5]))) == (((((((((*g_12) = (+(0x4C14L != 0x48F9L))) == (p_5.f7 != g_22)) != (*l_1341)) || 0x91L) && l_1346[0][0][0]) | p_5.f5) || (-3L)) != (*l_1339))) != 0x138D3209245F757ELL)));
        l_1402 = ((safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_1324, 4)) , (0xE1L ^ (safe_mod_func_uint16_t_u_u((((p_5.f6 , (safe_mul_func_int8_t_s_s(p_5.f3, (safe_sub_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s(p_5.f3, 2)) && ((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((*g_1376) != (safe_add_func_int16_t_s_s((l_1400 , (*g_623)), (*g_623)))) || (-6L)), 2L)), (*l_1339))) > g_230[3][1]) ^ p_5.f3) & p_5.f1)), l_1324))))) , l_1344) || p_5.f3), (-9L))))), p_5.f1)), 0xCB72CCF40BC67829LL)) , (void*)0);
    }
    else
    { 
        const int16_t l_1403 = 0xBDEBL;
        int32_t l_1404 = 7L;
        union U2 *l_1415 = &g_1416;
        for (g_69 = 0; (g_69 <= 3); g_69 += 1)
        { 
            uint32_t l_1411 = 0xF576A7F8L;
            int16_t *l_1412 = &l_1400.f0;
            union U2 *l_1414 = &g_353;
            l_1404 = l_1403;
            (*g_183) ^= 0xB86D4938L;
            l_1415 = ((~(safe_mod_func_uint64_t_u_u((&g_746 == ((l_1408[1] , ((((*g_183) = ((*l_1402) <= (l_1404 = ((safe_lshift_func_int16_t_s_s(((*l_1412) = (((l_1404 , ((*l_1377) ^= l_1411)) > 0x10ABA254D799C9F3LL) && l_1403)), 13)) > p_5.f3)))) < p_5.f0) , (-4L))) , l_1413)), l_1411))) , l_1414);
            for (g_1054 = 4; (g_1054 >= 0); g_1054 -= 1)
            { 
                int32_t *l_1417[5][7] = {{&g_209,&l_1345,&g_209,&l_1345,&g_209,&l_1345,&g_209},{&l_1346[0][0][2],&l_1346[0][0][2],&l_1346[0][0][2],&l_1346[0][0][2],&l_1346[0][0][2],&l_1346[0][0][2],&l_1346[0][0][2]},{&g_209,&l_1345,&g_209,&l_1345,&g_209,&l_1345,&g_209},{&l_1346[0][0][2],&l_1346[0][0][2],&l_1346[0][0][2],&l_1346[0][0][2],&l_1346[0][0][2],&l_1346[0][0][2],&l_1346[0][0][2]},{&g_209,&l_1345,&g_209,&l_1345,&g_209,&l_1345,&g_209}};
                int32_t **l_1418 = &l_1417[3][4];
                int i, j;
                (*l_1418) = l_1417[2][0];
                for (g_161 = 4; (g_161 >= 0); g_161 -= 1)
                { 
                    struct S0 *l_1420[2][4] = {{&g_215,(void*)0,&g_215,&g_215},{(void*)0,(void*)0,&g_215,(void*)0}};
                    struct S0 **l_1419 = &l_1420[0][2];
                    int i, j, k;
                    (*l_1419) = &g_215;
                    return g_121[g_69][(g_161 + 1)][(g_69 + 2)];
                }
            }
        }
    }
    for (g_161 = (-21); (g_161 != (-25)); --g_161)
    { 
        uint8_t *l_1426 = &g_471;
        uint8_t ** const l_1425 = &l_1426;
        uint32_t *l_1432 = &g_918;
        int32_t l_1445 = 0L;
        int32_t l_1455 = 2L;
        int32_t l_1465 = 0x311C9488L;
        int32_t l_1466 = 2L;
        uint64_t l_1467 = 18446744073709551615UL;
        union U2 **l_1489 = &g_402;
        union U2 *** const * const l_1492[2] = {&g_485,&g_485};
        int16_t l_1499[3][1][3] = {{{1L,1L,0xB74CL}},{{1L,1L,0xB74CL}},{{1L,1L,0xB74CL}}};
        int32_t l_1501 = (-8L);
        int32_t l_1502 = 0x5D3F07FAL;
        int8_t l_1587 = (-2L);
        int32_t ****l_1594 = &g_218;
        int32_t *****l_1593 = &l_1594;
        union U1 *l_1652 = &g_111;
        int i, j, k;
    }
    l_1686 = ((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((*g_1376) , (safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(l_1661, (((safe_sub_func_uint8_t_u_u(0x8AL, (safe_rshift_func_uint8_t_u_u(255UL, 5)))) <= (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((((safe_div_func_uint32_t_u_u((--(*l_1674)), p_4)) , ((*g_183) &= (safe_lshift_func_int8_t_s_u((p_3 > (safe_mul_func_uint8_t_u_u(((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(p_5.f1, 18446744073709551614UL)), 0x71AEL)) != 0x34F63DD0L) <= (**g_1006)) ^ p_5.f1), 253UL))), 5)))) , (*g_12)) >= 0xA4413AED205D4675LL), l_1685)), 14)), 6))) || p_4))), 1L))), 0xD1L)), p_5.f0)) < p_4);
    return p_5.f5;
}



static int64_t * func_14(struct S0  p_15, int64_t * p_16, uint32_t  p_17, int64_t  p_18)
{ 
    int8_t l_20 = (-1L);
    int32_t *l_21 = &g_22;
    int32_t l_1042 = 0x257CCBFFL;
    int32_t l_1043 = 1L;
    int32_t l_1044 = 8L;
    int32_t l_1045 = (-8L);
    int32_t l_1046 = 0L;
    int32_t l_1048[3];
    int32_t l_1056 = 4L;
    int16_t l_1058 = 7L;
    const int32_t * const **l_1087 = (void*)0;
    union U2 *** const * const l_1088 = &g_485;
    const int64_t *l_1149 = (void*)0;
    int64_t *l_1151 = &g_13[1];
    int64_t l_1207 = 0x17B48E0887152BCALL;
    int64_t l_1209 = 0x8A8FE4D93E7EE32BLL;
    union U1 *** const *l_1218[4];
    union U1 *** const **l_1219[7][2][1] = {{{&l_1218[3]},{&l_1218[3]}},{{&l_1218[3]},{&l_1218[3]}},{{&l_1218[3]},{&l_1218[3]}},{{&l_1218[3]},{&l_1218[3]}},{{&l_1218[3]},{&l_1218[3]}},{{&l_1218[3]},{&l_1218[3]}},{{&l_1218[3]},{&l_1218[3]}}};
    union U1 *** const *l_1220 = (void*)0;
    int32_t ****l_1304 = &g_218;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1048[i] = (-1L);
    for (i = 0; i < 4; i++)
        l_1218[i] = &g_202;
    (*l_21) |= l_20;
    for (p_15.f6 = 2; (p_15.f6 >= 0); p_15.f6 -= 1)
    { 
        int32_t l_1038 = 0x844CEF00L;
        int32_t l_1040 = (-9L);
        int32_t l_1041 = 0xC94D3E60L;
        int32_t l_1047 = 0L;
        int32_t l_1049 = (-5L);
        int32_t l_1050 = (-6L);
        int8_t l_1051 = 0x2AL;
        int32_t l_1052[5];
        int32_t l_1053[7];
        int8_t l_1055 = (-6L);
        const union U2 *l_1084[5] = {&g_353,&g_353,&g_353,&g_353,&g_353};
        const union U2 **l_1083 = &l_1084[2];
        const union U2 ***l_1082 = &l_1083;
        const union U2 ****l_1081 = &l_1082;
        union U1 ****l_1100 = &g_202;
        int32_t *l_1152 = &g_107.f1;
        struct S0 l_1163[4][5] = {{{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L}},{{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L}},{{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L}},{{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L},{0x0C0BL,7UL,0x49C8D0DBC3A9279CLL,0x3DL,0xDCL,0x9BL,-7L,1L}}};
        int8_t l_1175 = 3L;
        int i, j;
        for (i = 0; i < 5; i++)
            l_1052[i] = 0x42A6AC16L;
        for (i = 0; i < 7; i++)
            l_1053[i] = 0xD1E7078EL;
        if (func_23((g_13[p_15.f6] , (safe_add_func_uint8_t_u_u(((func_30(g_13[p_15.f6], l_21) | ((p_17 || (safe_mul_func_int8_t_s_s(p_17, (p_15.f5--)))) <= 65535UL)) < 0x024E12661667A14DLL), 0x8BL))), g_13[p_15.f6], g_13[p_15.f6], g_13[p_15.f6]))
        { 
            int32_t *l_1028 = (void*)0;
            int32_t *l_1029 = &g_154.f0;
            int32_t *l_1030 = &g_209;
            int32_t *l_1031 = &g_111.f1;
            int32_t *l_1032 = &g_107.f1;
            int32_t l_1033 = 0xAA0E4F8DL;
            int32_t *l_1034 = &g_677;
            int32_t *l_1035 = &g_209;
            int32_t *l_1036 = &g_107.f0;
            int32_t *l_1037 = &g_107.f0;
            int32_t *l_1039[3][1];
            int16_t l_1057 = (-6L);
            uint32_t l_1059 = 4294967295UL;
            uint8_t *l_1066[3];
            union U2 * const **l_1078 = (void*)0;
            union U2 * const ** const *l_1077 = &l_1078;
            uint16_t *l_1089 = &g_722[0];
            uint16_t *l_1090 = &g_230[2][2];
            uint64_t l_1110 = 5UL;
            union U1 **l_1122 = &g_106;
            uint16_t l_1126 = 0xEE61L;
            int64_t *l_1136 = &g_13[2];
            const int64_t **l_1150[3];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1039[i][j] = &l_1038;
            }
            for (i = 0; i < 3; i++)
                l_1066[i] = &g_471;
            for (i = 0; i < 3; i++)
                l_1150[i] = &l_1149;
            l_1059++;
            if ((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((++p_15.f5), 1UL)), (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((((safe_div_func_int16_t_s_s((((*g_745) = (*g_745)) == l_1077), ((*l_21) = ((*l_1090) = ((*l_1089) ^= (((safe_div_func_int32_t_s_s((l_1081 == ((g_215 , (safe_rshift_func_int8_t_s_u((((void*)0 == l_1087) < p_15.f7), 7))) , l_1088)), p_15.f4)) | l_1050) , (*l_21))))))) , (void*)0) != (void*)0), g_191)), 14)), 3)))))
            { 
                int8_t *l_1101[2][1][4];
                const int32_t l_1102 = 0x7A767329L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1101[i][j][k] = &g_215.f3;
                    }
                }
                (*l_1029) = (*g_183);
                (*l_1034) &= (!((safe_sub_func_uint32_t_u_u((~(((safe_unary_minus_func_uint32_t_u((((-1L) ^ ((g_215.f5 |= ((safe_add_func_int8_t_s_s(((**g_1006) = (safe_div_func_uint8_t_u_u(g_7[5], (((l_1100 = l_1100) == (void*)0) , l_1052[3])))), p_18)) , (g_471 = (((*g_1006) = l_1101[1][0][3]) == (void*)0)))) & g_308)) >= 0x05L))) ^ 0x1129E0C6L) != l_1055)), l_1102)) > g_111.f0));
            }
            else
            { 
                uint32_t l_1103 = 0UL;
                int32_t l_1109 = 0L;
                union U1 **l_1123 = (void*)0;
                uint32_t l_1127 = 0UL;
                int32_t ****l_1134 = (void*)0;
                int64_t *l_1135 = (void*)0;
                for (l_1044 = 2; (l_1044 >= 0); l_1044 -= 1)
                { 
                    uint8_t l_1106 = 253UL;
                    (*l_1082) = (*l_1082);
                    l_1103++;
                    --l_1106;
                    l_1110--;
                }
                if ((safe_mod_func_int32_t_s_s((+((safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u(((((l_1122 != l_1123) & 0x1CF192A2FF37A92ELL) || ((p_15.f2 & (safe_mod_func_int32_t_s_s(1L, (*l_1035)))) , (((1L >= l_1126) | 251UL) || l_1127))) ^ p_15.f7), 4)) == 0x91BF96937FF8D391LL), (*g_12))), 7)) != p_15.f0)), g_69)))
                { 
                    int16_t l_1130 = (-6L);
                    uint64_t *l_1131 = &g_846;
                    (*l_1036) |= (((safe_lshift_func_uint16_t_u_u((p_15.f1 <= ((3UL & ((*l_1131) = (l_1130 = ((void*)0 == &g_807[1][1])))) , g_471)), ((((l_1127 | (safe_sub_func_uint64_t_u_u(g_210, (*l_21)))) & (*p_16)) < (*l_1029)) <= p_15.f7))) , (void*)0) != l_1134);
                    (*l_1032) = l_1052[0];
                    return l_1135;
                }
                else
                { 
                    return l_1136;
                }
            }
            (*l_1032) |= (safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((++g_471), p_15.f5)) || (*l_1030)), (*l_21))), (safe_rshift_func_int16_t_s_u(((((safe_sub_func_int16_t_s_s(((l_1149 = l_1149) == l_1151), (p_15 , 0UL))) , &g_715) == l_21) != p_18), g_13[p_15.f6]))));
            l_1152 = &l_1033;
        }
        else
        { 
            uint16_t l_1159[6] = {0xD846L,0xD846L,0xD846L,0xD846L,0xD846L,0xD846L};
            uint32_t l_1162 = 4UL;
            int32_t l_1201 = (-1L);
            int32_t l_1206 = 1L;
            int32_t l_1208 = (-1L);
            int32_t l_1210 = 0L;
            int32_t l_1211 = 0x1C4CCC84L;
            int32_t l_1212 = 0x9116BBF2L;
            int32_t l_1213 = 5L;
            int32_t l_1214 = 0xE462FA51L;
            uint32_t l_1215 = 3UL;
            int i;
            for (p_17 = 0; (p_17 <= 2); p_17 += 1)
            { 
                int32_t *l_1154 = &g_154.f1;
                const int8_t *l_1196 = &l_20;
                int32_t *l_1202 = &l_1040;
                int32_t *l_1203 = &g_107.f0;
                int32_t *l_1204 = &g_154.f0;
                int32_t *l_1205[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1205[i] = (void*)0;
            }
        }
    }
    if (((l_1220 = l_1218[3]) != &g_202))
    { 
lbl_1221:
        (*l_21) ^= (*g_183);
    }
    else
    { 
        uint16_t ** const l_1234[6][6][2] = {{{(void*)0,(void*)0},{&g_800[1][4][4],(void*)0},{(void*)0,&g_800[1][3][4]},{&g_800[0][0][0],&g_800[0][2][1]},{&g_800[1][4][4],&g_800[0][0][0]},{&g_800[0][2][1],&g_800[1][3][4]}},{{&g_800[0][2][1],&g_800[0][0][0]},{&g_800[1][4][4],&g_800[0][2][1]},{&g_800[0][0][0],&g_800[1][3][4]},{(void*)0,(void*)0},{&g_800[1][4][4],(void*)0},{(void*)0,&g_800[1][3][4]}},{{&g_800[0][0][0],&g_800[0][2][1]},{&g_800[1][4][4],&g_800[0][0][0]},{&g_800[0][2][1],&g_800[1][3][4]},{&g_800[0][2][1],&g_800[0][0][0]},{&g_800[1][4][4],&g_800[0][2][1]},{&g_800[0][0][0],&g_800[1][3][4]}},{{(void*)0,(void*)0},{&g_800[1][4][4],(void*)0},{(void*)0,&g_800[1][3][4]},{&g_800[0][0][0],&g_800[0][2][1]},{&g_800[1][4][4],&g_800[0][0][0]},{&g_800[0][2][1],&g_800[1][3][4]}},{{&g_800[0][2][1],&g_800[0][0][0]},{&g_800[1][4][4],&g_800[0][2][1]},{&g_800[0][0][0],&g_800[1][3][4]},{(void*)0,(void*)0},{&g_800[1][4][4],(void*)0},{(void*)0,&g_800[1][3][4]}},{{&g_800[0][0][0],&g_800[0][2][1]},{&g_800[1][4][4],&g_800[0][0][0]},{&g_800[0][2][1],&g_800[1][3][4]},{&g_800[0][2][1],&g_800[0][0][0]},{&g_800[1][4][4],&g_800[0][2][1]},{&g_800[0][0][0],&g_800[1][3][4]}}};
        int32_t l_1257[7] = {0x308852C4L,0x308852C4L,0x308852C4L,0x308852C4L,0x308852C4L,0x308852C4L,0x308852C4L};
        int32_t l_1260 = (-5L);
        int32_t *l_1292 = &l_1260;
        int i, j, k;
        for (l_1209 = 0; (l_1209 <= 3); l_1209 += 1)
        { 
            const uint32_t l_1236 = 18446744073709551609UL;
            union U2 * const *l_1245 = &g_402;
            union U2 * const **l_1244 = &l_1245;
            union U1 ****l_1258[3][6];
            uint32_t l_1259[1];
            int32_t l_1281 = 0x74626142L;
            uint32_t *l_1296[6][4] = {{(void*)0,&g_395,&g_395,(void*)0},{&g_7[5],&g_7[5],&g_395,&g_395},{(void*)0,&g_7[3],&g_7[5],&g_7[3]},{&g_7[3],&g_395,&g_7[5],&g_7[3]},{&g_7[5],&g_7[3],&g_395,&g_395},{&g_7[5],&g_7[5],&g_7[5],(void*)0}};
            uint32_t **l_1295[5] = {&l_1296[4][2],&l_1296[4][2],&l_1296[4][2],&l_1296[4][2],&l_1296[4][2]};
            uint64_t *l_1298 = &g_210;
            uint64_t *l_1299 = &g_121[3][6][1];
            int32_t *****l_1305 = &l_1304;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1258[i][j] = &g_202;
            }
            for (i = 0; i < 1; i++)
                l_1259[i] = 4294967292UL;
            for (g_161 = 0; (g_161 <= 3); g_161 += 1)
            { 
                int16_t l_1224 = 6L;
                const struct S0 l_1233 = {1L,4294967295UL,1L,5L,0x4BL,246UL,0x76609121L,0xD95DD77FL};
                uint8_t *l_1254[1][7][7] = {{{(void*)0,(void*)0,&g_215.f5,(void*)0,&g_353.f2,(void*)0,&g_215.f5},{(void*)0,(void*)0,&g_215.f5,(void*)0,&g_353.f2,(void*)0,&g_215.f5},{(void*)0,(void*)0,&g_215.f5,(void*)0,&g_471,&g_104,(void*)0},{&g_353.f2,&g_353.f2,(void*)0,&g_104,&g_471,&g_104,(void*)0},{&g_353.f2,&g_353.f2,(void*)0,&g_104,&g_471,&g_104,(void*)0},{&g_353.f2,&g_353.f2,(void*)0,&g_104,&g_471,&g_104,(void*)0},{&g_353.f2,&g_353.f2,(void*)0,&g_104,&g_471,&g_104,(void*)0}}};
                int32_t l_1255 = (-1L);
                int i, j, k;
                if (p_15.f1)
                    goto lbl_1221;
                for (l_1046 = 0; (l_1046 <= 3); l_1046 += 1)
                { 
                    uint64_t *l_1235 = &g_210;
                    (*l_21) = (0L != (safe_mod_func_int32_t_s_s(0xABC2A8F7L, 0x5B5C73EEL)));
                    if (p_15.f1)
                        break;
                    if (l_1224)
                        continue;
                    (*l_21) &= (((((*g_12) , &p_17) != (void*)0) <= (safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((g_846 ^ ((**g_203) , (((safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((((*l_1235) = ((l_1233 , &g_800[0][2][1]) == l_1234[3][4][1])) , p_15.f0), l_1233.f7)), 15)) ^ 1L) != l_1236))), g_715)), p_18))) , p_18);
                }
                l_1255 &= (((safe_add_func_uint8_t_u_u((g_471 |= (safe_sub_func_uint16_t_u_u(((!l_1233.f4) | p_15.f7), ((safe_mul_func_int16_t_s_s((((void*)0 != l_1244) || ((((*l_1151) = (((safe_div_func_uint8_t_u_u(0xADL, ((safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(1L, 8)), p_17)), p_15.f3)) & g_69))) && (-2L)) || p_15.f2)) , 0x8580C4C41A22C693LL) == p_15.f2)), (*g_623))) , p_15.f2)))), 0x12L)) != l_1233.f2) <= g_22);
                if (p_15.f7)
                    break;
            }
            if (p_15.f6)
                continue;
            if ((l_1260 &= (safe_unary_minus_func_uint16_t_u((l_1259[0] = (p_15 , (((l_1257[2] < p_15.f3) || p_15.f0) | ((l_1257[1] , (g_202 = &g_203)) != &g_203))))))))
            { 
                int32_t *l_1263 = &g_209;
                (*g_183) |= ((safe_mul_func_int8_t_s_s((l_1263 != (void*)0), ((!(!((safe_mul_func_int8_t_s_s((((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((*p_16) ^ (*g_12)), ((*l_21) |= (safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s((((safe_mul_func_uint64_t_u_u(g_154.f1, (5UL > (safe_rshift_func_int16_t_s_u(((l_1281 &= 0x42B2L) >= (*l_1263)), 8))))) ^ l_1259[0]) && l_1257[3]), l_1259[0])), p_18))))), (*l_1263))))) <= l_1260) , l_1259[0]), (*l_1263))) , 0x5B38L))) >= 0x5EL))) || l_1260);
                for (g_233 = 0; (g_233 <= 2); g_233 += 1)
                { 
                    struct S0 *l_1285 = &g_215;
                    struct S0 **l_1284 = &l_1285;
                    struct S0 *l_1287 = (void*)0;
                    struct S0 **l_1286 = &l_1287;
                    int i;
                    l_1048[g_233] = (safe_lshift_func_uint16_t_u_u(((*g_402) , (((*l_1286) = ((*l_1284) = &g_215)) == &g_215)), 9));
                    if (p_15.f0)
                        continue;
                    if ((*l_21))
                        continue;
                    (*l_21) = (l_1260 = p_15.f1);
                }
                if (p_15.f6)
                    break;
            }
            else
            { 
                int32_t *l_1290 = &g_748;
                int32_t **l_1291[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1291[i] = &g_183;
                (*l_21) |= (safe_add_func_uint8_t_u_u(g_1054, 0x5AL));
                l_1292 = (((*l_1290) &= 0x14C11938L) , (void*)0);
            }
            (*l_21) |= ((((*l_1299) = ((*l_1298) = ((safe_add_func_uint16_t_u_u(l_1259[0], 0xABB3L)) , (&p_17 == (g_1297 = &g_7[3]))))) != (safe_div_func_int16_t_s_s((safe_add_func_int8_t_s_s(((**g_1006) &= ((*g_806) == ((*l_1305) = l_1304))), 255UL)), (*g_623)))) , p_15.f5);
            return &g_13[1];
        }
    }
    (*g_183) = (safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((&l_1058 != &l_1058), 0x52L)), g_210));
    for (g_111.f0 = (-14); (g_111.f0 < 16); g_111.f0 = safe_add_func_uint16_t_u_u(g_111.f0, 8))
    { 
        int32_t l_1314 = 0x0E5A3A4EL;
        for (l_1042 = 0; (l_1042 <= 7); l_1042++)
        { 
            return &g_13[2];
        }
        if (p_15.f0)
            continue;
        l_1314 = 9L;
    }
    return &g_13[0];
}



static const int32_t  func_23(uint32_t  p_24, uint8_t  p_25, int16_t  p_26, uint16_t  p_27)
{ 
    uint32_t l_1021 = 18446744073709551615UL;
    struct S0 l_1024[5] = {{0L,0x0AB2315CL,8L,0x11L,0L,248UL,0x69FD64C3L,0xEEFDB361L},{0L,0x0AB2315CL,8L,0x11L,0L,248UL,0x69FD64C3L,0xEEFDB361L},{0L,0x0AB2315CL,8L,0x11L,0L,248UL,0x69FD64C3L,0xEEFDB361L},{0L,0x0AB2315CL,8L,0x11L,0L,248UL,0x69FD64C3L,0xEEFDB361L},{0L,0x0AB2315CL,8L,0x11L,0L,248UL,0x69FD64C3L,0xEEFDB361L}};
    int i;
    (*g_183) = (~((safe_add_func_uint16_t_u_u(0x94C6L, (0xB5CFL & l_1021))) | (safe_sub_func_int16_t_s_s((l_1024[1] , p_24), (safe_sub_func_uint8_t_u_u((!p_26), p_27))))));
    return l_1024[1].f7;
}



static uint32_t  func_30(uint32_t  p_31, int32_t * p_32)
{ 
    int64_t *l_45[7][2][7] = {{{&g_13[0],&g_13[1],&g_13[0],(void*)0,&g_13[1],(void*)0,&g_13[1]},{&g_13[1],&g_13[0],&g_13[0],&g_13[1],&g_13[0],(void*)0,&g_13[0]}},{{&g_13[0],(void*)0,&g_13[0],&g_13[1],&g_13[0],&g_13[0],&g_13[1]},{&g_13[1],(void*)0,&g_13[1],(void*)0,&g_13[0],&g_13[1],&g_13[0]}},{{(void*)0,&g_13[0],&g_13[1],&g_13[0],&g_13[0],&g_13[0],&g_13[1]},{&g_13[0],&g_13[0],&g_13[0],&g_13[0],(void*)0,&g_13[1],(void*)0}},{{&g_13[0],&g_13[0],&g_13[0],&g_13[1],&g_13[1],&g_13[0],&g_13[0]},{&g_13[0],&g_13[0],&g_13[0],&g_13[1],(void*)0,(void*)0,&g_13[0]}},{{&g_13[0],(void*)0,&g_13[0],&g_13[0],&g_13[0],(void*)0,&g_13[0]},{&g_13[0],(void*)0,(void*)0,&g_13[1],&g_13[0],&g_13[0],&g_13[0]}},{{&g_13[0],&g_13[0],&g_13[1],&g_13[1],&g_13[0],&g_13[0],&g_13[0]},{(void*)0,&g_13[1],(void*)0,&g_13[0],&g_13[0],&g_13[0],&g_13[0]}},{{&g_13[1],&g_13[0],&g_13[0],&g_13[0],&g_13[1],&g_13[0],(void*)0},{&g_13[0],&g_13[1],&g_13[0],(void*)0,&g_13[1],(void*)0,&g_13[1]}}};
    const union U2 l_46 = {0x1945L};
    int32_t *l_61 = (void*)0;
    uint16_t *l_633[3][2] = {{&g_233,&g_233},{&g_233,&g_233},{&g_233,&g_233}};
    uint32_t *l_634 = &g_215.f1;
    int64_t **l_1013 = &l_45[4][0][3];
    int i, j, k;
    l_1013 = func_33((((*l_634) = ((((g_230[3][2] = func_39(l_45[4][0][3], (l_46 , (void*)0), (safe_sub_func_uint32_t_u_u(4294967293UL, (safe_lshift_func_uint8_t_u_s(l_46.f0, 5)))), (safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(func_55(p_32, &g_22, l_46.f0, l_61, p_31), 0x2EL)), p_31)), l_45[0][1][5])) >= 0x5170L) , g_121[2][3][2]) , g_107.f1)) , 1L), g_215.f7, p_31, &l_45[2][1][2], l_45[4][0][3]);
    for (g_233 = 0; (g_233 <= 0); g_233 += 1)
    { 
        int i;
        return g_722[g_233];
    }
    return g_715;
}



static int64_t ** func_33(int64_t  p_34, int32_t  p_35, int16_t  p_36, int64_t ** p_37, int64_t * const  p_38)
{ 
    int32_t l_635 = 1L;
    int32_t *l_636[3][4][2] = {{{&g_22,(void*)0},{(void*)0,&g_22},{(void*)0,(void*)0},{&g_22,(void*)0}},{{(void*)0,&g_22},{(void*)0,(void*)0},{&g_22,(void*)0},{(void*)0,&g_22}},{{(void*)0,(void*)0},{&g_22,(void*)0},{(void*)0,&g_22},{(void*)0,(void*)0}}};
    uint8_t l_637 = 0x04L;
    int32_t *l_640 = &l_635;
    int32_t **l_641 = &l_636[2][2][0];
    uint32_t l_668 = 18446744073709551615UL;
    uint8_t l_679 = 0xB7L;
    uint16_t *l_699 = &g_230[2][2];
    union U1 *l_734 = (void*)0;
    int32_t l_738 = 0xFBCB5803L;
    union U2 ***l_779 = (void*)0;
    union U2 ***l_781 = &g_401;
    int64_t l_797 = 1L;
    int64_t l_809 = (-1L);
    uint32_t l_815 = 0x86ECFFE8L;
    uint32_t l_831[3];
    union U1 **l_840 = (void*)0;
    struct S0 l_904 = {0L,0UL,0x292555541E7D3BF6LL,9L,3L,0UL,0L,5L};
    const union U1 *l_941 = &g_942;
    const union U1 **l_940 = &l_941;
    const union U1 ***l_939 = &l_940;
    const union U1 ****l_938 = &l_939;
    const union U1 *****l_937 = &l_938;
    int32_t l_951 = 0L;
    uint64_t l_993 = 18446744073709551615UL;
    uint16_t l_1010 = 65533UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_831[i] = 0x4C44F9F7L;
    --l_637;
    return p_37;
}



static uint16_t  func_39(int64_t * p_40, int32_t * p_41, int8_t  p_42, int16_t  p_43, int64_t * p_44)
{ 
    const int32_t *l_82 = &g_22;
    const int32_t **l_81 = &l_82;
    const int32_t ***l_83 = (void*)0;
    const int32_t ***l_84 = (void*)0;
    const int32_t **l_85 = (void*)0;
    int32_t *l_86 = &g_22;
    int64_t *l_87 = (void*)0;
    union U1 *l_110[6];
    int32_t l_126[2][1];
    uint8_t l_164 = 0UL;
    uint64_t l_178 = 0UL;
    int32_t ***l_216 = (void*)0;
    int8_t *l_279 = (void*)0;
    union U1 ***l_282 = &g_203;
    int32_t ***l_344 = &g_219;
    union U2 *l_415[1][6];
    struct S0 * const l_452[6][1][7] = {{{(void*)0,(void*)0,&g_215,&g_215,&g_215,&g_215,&g_215}},{{(void*)0,(void*)0,&g_215,&g_215,&g_215,&g_215,&g_215}},{{(void*)0,(void*)0,&g_215,&g_215,&g_215,&g_215,&g_215}},{{(void*)0,(void*)0,&g_215,&g_215,&g_215,&g_215,(void*)0}},{{&g_215,&g_215,(void*)0,&g_215,&g_215,&g_215,(void*)0}},{{&g_215,&g_215,(void*)0,&g_215,&g_215,&g_215,(void*)0}}};
    int32_t l_518[7] = {0x75B904F4L,0x75B904F4L,0x75B904F4L,0x75B904F4L,0x75B904F4L,0x75B904F4L,0x75B904F4L};
    uint16_t l_566[7] = {0x28AEL,0x28AEL,0x28AEL,0x28AEL,0x28AEL,0x28AEL,0x28AEL};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_110[i] = &g_111;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_126[i][j] = (-3L);
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_415[i][j] = &g_353;
    }
    l_85 = l_81;
    (*l_86) = (*l_82);
    return p_43;
}



static int8_t  func_55(int32_t * p_56, int32_t * p_57, int8_t  p_58, int32_t * p_59, uint16_t  p_60)
{ 
    int16_t *l_68[3];
    int32_t l_70[7][3] = {{(-1L),(-1L),(-1L)},{0xC49480DDL,0L,0xC49480DDL},{(-1L),(-1L),(-1L)},{0xC49480DDL,0L,0xC49480DDL},{(-1L),(-1L),(-1L)},{0xC49480DDL,0L,0xC49480DDL},{(-1L),(-1L),(-1L)}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_68[i] = &g_69;
    for (g_22 = 0; (g_22 <= 2); g_22 += 1)
    { 
        int32_t *l_65 = &g_22;
        int32_t **l_64 = &l_65;
        g_62 = g_62;
        (*l_64) = (void*)0;
    }
    (*p_57) |= (safe_div_func_uint8_t_u_u(((l_70[1][1] &= 0x11FBL) && ((l_68[0] == l_68[2]) >= 1UL)), (((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_13[0], (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0xDD895A5DL, ((safe_rshift_func_int8_t_s_s(0L, 2)) , g_7[5]))), 0x959CL)))), p_60)) != (-8L)) || 255UL)));
    return p_58;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);

    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_121[i][j][k], "g_121[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f1, "g_154.f1", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_215.f2, "g_215.f2", print_hash_value);
    transparent_crc(g_215.f3, "g_215.f3", print_hash_value);
    transparent_crc(g_215.f4, "g_215.f4", print_hash_value);
    transparent_crc(g_215.f5, "g_215.f5", print_hash_value);
    transparent_crc(g_215.f6, "g_215.f6", print_hash_value);
    transparent_crc(g_215.f7, "g_215.f7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_230[i][j], "g_230[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_353.f0, "g_353.f0", print_hash_value);
    transparent_crc(g_353.f2, "g_353.f2", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_722[i], "g_722[i]", print_hash_value);

    }
    transparent_crc(g_748, "g_748", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_942.f0, "g_942.f0", print_hash_value);
    transparent_crc(g_942.f1, "g_942.f1", print_hash_value);
    transparent_crc(g_944, "g_944", print_hash_value);
    transparent_crc(g_1054, "g_1054", print_hash_value);
    transparent_crc(g_1416.f0, "g_1416.f0", print_hash_value);
    transparent_crc(g_1416.f2, "g_1416.f2", print_hash_value);
    transparent_crc(g_1431, "g_1431", print_hash_value);
    transparent_crc(g_1456, "g_1456", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1486[i], "g_1486[i]", print_hash_value);

    }
    transparent_crc(g_1570, "g_1570", print_hash_value);
    transparent_crc(g_1586, "g_1586", print_hash_value);
    transparent_crc(g_1651.f0, "g_1651.f0", print_hash_value);
    transparent_crc(g_1651.f2, "g_1651.f2", print_hash_value);
    transparent_crc(g_1756, "g_1756", print_hash_value);
    transparent_crc(g_1857, "g_1857", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
